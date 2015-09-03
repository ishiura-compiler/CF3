#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x57 = 33071U;
int8_t x58 = -3;
uint8_t x304 = 17U;
uint64_t t1 = 1625374LLU;
int64_t x306 = INT64_MIN;
static int16_t x345 = -340;
volatile uint32_t x347 = UINT32_MAX;
int8_t x348 = 18;
int64_t x357 = 813387173283002LL;
static int16_t x359 = INT16_MIN;
int16_t x360 = 0;
int8_t x525 = INT8_MIN;
volatile int16_t x561 = 0;
static uint16_t x563 = 1322U;
uint8_t x604 = 22U;
int8_t x623 = -3;
static uint8_t x624 = 0U;
int16_t x707 = -1;
int16_t x721 = INT16_MIN;
int8_t x743 = -1;
uint32_t x765 = UINT32_MAX;
uint64_t x767 = 4131LLU;
volatile uint32_t x768 = 14U;
static uint64_t t16 = 1727520490592856192LLU;
uint8_t x828 = 40U;
int32_t t18 = 52;
int16_t x849 = INT16_MIN;
int64_t t19 = -3578364711271LL;
uint64_t x950 = 6317545116LLU;
uint8_t x1032 = 1U;
uint8_t x1078 = 61U;
uint32_t x1079 = 41813250U;
int64_t x1086 = INT64_MAX;
int64_t t25 = 6736847LL;
uint16_t x1224 = 27U;
static uint16_t x1357 = UINT16_MAX;
int8_t x1359 = -1;
static int16_t x1443 = INT16_MIN;
int32_t x1477 = INT32_MIN;
static uint32_t x1478 = 8U;
volatile uint8_t x1479 = 1U;
static uint32_t x1482 = UINT32_MAX;
int32_t x1483 = INT32_MAX;
uint64_t t33 = 13018861364497LLU;
uint32_t x1522 = 394489984U;
static uint8_t x1536 = 0U;
uint64_t t35 = 37LLU;
int32_t x1614 = INT32_MIN;
uint64_t t37 = UINT64_MAX;
static uint16_t x1791 = UINT16_MAX;
uint64_t t38 = 2041945420183LLU;
volatile uint64_t t39 = 21137LLU;
uint8_t x1832 = 0U;
uint8_t x1880 = 8U;
int32_t t43 = 1;
int8_t x1885 = INT8_MIN;
uint8_t x1920 = 1U;
uint64_t x1989 = 0LLU;
static volatile int32_t x1990 = INT32_MAX;
uint8_t x1992 = 37U;
static uint8_t x1994 = 7U;
volatile uint64_t x1996 = 27LLU;
static volatile int16_t x2037 = -59;
static uint8_t x2040 = 61U;
volatile int64_t x2051 = INT64_MIN;
volatile uint64_t x2063 = 10909035207687LLU;
volatile int32_t t51 = -1;
volatile int64_t t52 = 13533837LL;
int16_t x2145 = INT16_MIN;
uint16_t x2211 = 123U;
static volatile int8_t x2296 = 1;
volatile int32_t t58 = -992011207;
uint8_t x2335 = 30U;
static int16_t x2351 = 0;
int32_t x2417 = -225609976;
int32_t x2465 = INT32_MIN;
static volatile uint8_t x2468 = 0U;
uint32_t t65 = 96677U;
uint16_t x2479 = 415U;
uint64_t x2635 = 8397474580891205448LLU;
uint16_t x2692 = 7U;
volatile int32_t t69 = -1;
volatile int64_t x2949 = INT64_MIN;
int64_t x2990 = INT64_MAX;
volatile int64_t x3022 = INT64_MAX;
int16_t x3043 = 172;
volatile int64_t t76 = 381962496LL;
volatile uint8_t x3083 = UINT8_MAX;
int32_t x3142 = INT32_MIN;
volatile uint8_t x3144 = 1U;
uint32_t x3202 = 183U;
uint16_t x3204 = 3U;
volatile uint32_t t80 = 176U;
static volatile uint32_t t82 = 789U;
uint8_t x3561 = UINT8_MAX;
volatile uint16_t x3562 = UINT16_MAX;
uint16_t x3564 = 15U;
int16_t x3581 = INT16_MIN;
uint64_t x3801 = 9331LLU;
uint64_t t86 = 292683339368LLU;
volatile uint8_t x3891 = UINT8_MAX;
static uint64_t x3931 = 0LLU;
int16_t x4000 = 2;
uint32_t x4014 = UINT32_MAX;
int8_t x4088 = 0;
volatile uint64_t x4095 = 352749LLU;
uint16_t x4172 = 15U;
volatile int32_t t95 = -92;
static uint32_t t98 = 471898U;
uint8_t x4378 = UINT8_MAX;


void f0(void) {
	volatile uint8_t x59 = UINT8_MAX;
	uint16_t x60 = 2U;
	volatile uint32_t t0 = 342691150U;

	t0 = (((x57/x58)+x59)<<x60);

	if (t0 != 1020U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x301 = -65021;
	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 12349LLU;

	t1 = (((x301/x302)+x303)<<x304);

	if (t1 != 1685061632LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x307 = 23U;
	static volatile int64_t x308 = 1LL;
	int64_t t2 = -145214LL;

	t2 = (((x305/x306)+x307)<<x308);

	if (t2 != 46LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x346 = INT16_MIN;
	volatile uint32_t t3 = 184272U;

	t3 = (((x345/x346)+x347)<<x348);

	if (t3 != 4294705152U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x358 = 28U;
	volatile int64_t t4 = -29480477543437022LL;

	t4 = (((x357/x358)+x359)<<x360);

	if (t4 != 29049541870196LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x441 = 258877367263LLU;
	int32_t x442 = -1;
	static int64_t x443 = -1LL;
	int32_t x444 = 0;
	static uint64_t t5 = UINT64_MAX;

	t5 = (((x441/x442)+x443)<<x444);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x526 = -3LL;
	uint16_t x527 = 14U;
	static int16_t x528 = 0;
	volatile int64_t t6 = -48796778836811LL;

	t6 = (((x525/x526)+x527)<<x528);

	if (t6 != 56LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x533 = 4311423864657046LL;
	int8_t x534 = INT8_MAX;
	volatile uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 2U;
	int64_t t7 = -1LL;

	t7 = (((x533/x534)+x535)<<x536);

	if (t7 != 135792877889132LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x562 = UINT64_MAX;
	int8_t x564 = 0;
	uint64_t t8 = 4291188877572LLU;

	t8 = (((x561/x562)+x563)<<x564);

	if (t8 != 1322LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x601 = -1;
	int8_t x602 = INT8_MIN;
	int8_t x603 = 52;
	static int32_t t9 = 10;

	t9 = (((x601/x602)+x603)<<x604);

	if (t9 != 218103808) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x621 = -14573LL;
	static uint64_t x622 = 726626LLU;
	volatile uint64_t t10 = 39274400687526LLU;

	t10 = (((x621/x622)+x623)<<x624);

	if (t10 != 25386848356248LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x693 = INT64_MIN;
	static int8_t x694 = INT8_MIN;
	int8_t x695 = -1;
	int8_t x696 = 1;
	static volatile int64_t t11 = -19238621568829784LL;

	t11 = (((x693/x694)+x695)<<x696);

	if (t11 != 144115188075855870LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x697 = -1;
	volatile uint8_t x698 = 30U;
	uint8_t x699 = 1U;
	int8_t x700 = 1;
	volatile int32_t t12 = 23;

	t12 = (((x697/x698)+x699)<<x700);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x705 = 1295476807U;
	volatile int16_t x706 = INT16_MIN;
	uint64_t x708 = 0LLU;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (((x705/x706)+x707)<<x708);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x722 = -1;
	volatile int32_t x723 = 1942574;
	uint8_t x724 = 4U;
	volatile int32_t t14 = 118;

	t14 = (((x721/x722)+x723)<<x724);

	if (t14 != 31605472) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x741 = UINT64_MAX;
	int16_t x742 = -1878;
	volatile uint8_t x744 = 3U;
	uint64_t t15 = 341776549971161241LLU;

	t15 = (((x741/x742)+x743)<<x744);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x766 = 1;

	t16 = (((x765/x766)+x767)<<x768);

	if (t16 != 70368811843584LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x825 = INT32_MIN;
	uint64_t x826 = 210LLU;
	uint8_t x827 = 24U;
	volatile uint64_t t17 = 346LLU;

	t17 = (((x825/x826)+x827)<<x828);

	if (t17 != 8608506442904764416LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x837 = UINT16_MAX;
	volatile uint16_t x838 = 1080U;
	int16_t x839 = 986;
	uint8_t x840 = 0U;

	t18 = (((x837/x838)+x839)<<x840);

	if (t18 != 1046) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x850 = -5522LL;
	volatile uint16_t x851 = 4668U;
	uint16_t x852 = 1U;

	t19 = (((x849/x850)+x851)<<x852);

	if (t19 != 9346LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x949 = INT64_MAX;
	uint32_t x951 = 63111186U;
	uint8_t x952 = 2U;
	volatile uint64_t t20 = 8LLU;

	t20 = (((x949/x950)+x951)<<x952);

	if (t20 != 6092290356LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x985 = -1;
	int64_t x986 = INT64_MIN;
	volatile uint16_t x987 = 1U;
	int32_t x988 = 5;
	volatile int64_t t21 = 10199851LL;

	t21 = (((x985/x986)+x987)<<x988);

	if (t21 != 32LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1029 = INT8_MIN;
	uint32_t x1030 = UINT32_MAX;
	int16_t x1031 = INT16_MAX;
	volatile uint32_t t22 = 251774938U;

	t22 = (((x1029/x1030)+x1031)<<x1032);

	if (t22 != 65534U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1065 = 19236U;
	static int8_t x1066 = -1;
	uint32_t x1067 = 163U;
	int32_t x1068 = 1;
	uint32_t t23 = 7U;

	t23 = (((x1065/x1066)+x1067)<<x1068);

	if (t23 != 4294929150U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1077 = -1LL;
	volatile int8_t x1080 = 1;
	int64_t t24 = -927LL;

	t24 = (((x1077/x1078)+x1079)<<x1080);

	if (t24 != 83626500LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1085 = INT64_MAX;
	int64_t x1087 = 213449773083937995LL;
	int8_t x1088 = 1;

	t25 = (((x1085/x1086)+x1087)<<x1088);

	if (t25 != 426899546167875992LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1221 = 580366LLU;
	uint16_t x1222 = 432U;
	volatile int32_t x1223 = -1392;
	uint64_t t26 = 33633LLU;

	t26 = (((x1221/x1222)+x1223)<<x1224);

	if (t26 != 18446744067132882944LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1358 = 6U;
	volatile uint16_t x1360 = 12U;
	volatile int32_t t27 = 800;

	t27 = (((x1357/x1358)+x1359)<<x1360);

	if (t27 != 44732416) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1401 = 1;
	static int16_t x1402 = -1;
	int64_t x1403 = 65951241168LL;
	static uint8_t x1404 = 2U;
	static volatile int64_t t28 = -214LL;

	t28 = (((x1401/x1402)+x1403)<<x1404);

	if (t28 != 263804964668LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1421 = 0LLU;
	int64_t x1422 = INT64_MIN;
	int8_t x1423 = -29;
	int32_t x1424 = 0;
	static uint64_t t29 = 29073697792535LLU;

	t29 = (((x1421/x1422)+x1423)<<x1424);

	if (t29 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1441 = 2834U;
	static volatile uint32_t x1442 = 411U;
	uint16_t x1444 = 2U;
	static volatile uint32_t t30 = 1047107U;

	t30 = (((x1441/x1442)+x1443)<<x1444);

	if (t30 != 4294836248U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1480 = 3U;
	uint32_t t31 = 102145404U;

	t31 = (((x1477/x1478)+x1479)<<x1480);

	if (t31 != 2147483656U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1481 = 488591941174125796LL;
	uint8_t x1484 = 1U;
	static int64_t t32 = 105795460LL;

	t32 = (((x1481/x1482)+x1483)<<x1484);

	if (t32 != 4522485646LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1509 = 2053U;
	static int16_t x1510 = -5526;
	uint64_t x1511 = UINT64_MAX;
	uint16_t x1512 = 1U;

	t33 = (((x1509/x1510)+x1511)<<x1512);

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1521 = UINT64_MAX;
	static volatile uint8_t x1523 = UINT8_MAX;
	static uint8_t x1524 = 30U;
	volatile uint64_t t34 = 884973LLU;

	t34 = (((x1521/x1522)+x1523)<<x1524);

	if (t34 != 13315747928820678656LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1533 = 36243760312343LLU;
	static int64_t x1534 = INT64_MAX;
	int8_t x1535 = -62;

	t35 = (((x1533/x1534)+x1535)<<x1536);

	if (t35 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1613 = UINT64_MAX;
	int64_t x1615 = -512486766313425LL;
	uint32_t x1616 = 12U;
	uint64_t t36 = 11246LLU;

	t36 = (((x1613/x1614)+x1615)<<x1616);

	if (t36 != 16347598278889766912LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1681 = 1099LLU;
	int64_t x1682 = 4842LL;
	int32_t x1683 = -1;
	int8_t x1684 = 0;

	t37 = (((x1681/x1682)+x1683)<<x1684);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1789 = 29LLU;
	uint32_t x1790 = 837U;
	volatile uint8_t x1792 = 0U;

	t38 = (((x1789/x1790)+x1791)<<x1792);

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x1793 = 0LLU;
	volatile int64_t x1794 = INT64_MAX;
	int64_t x1795 = INT64_MAX;
	static uint8_t x1796 = 0U;

	t39 = (((x1793/x1794)+x1795)<<x1796);

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1797 = INT32_MIN;
	int32_t x1798 = INT32_MIN;
	volatile uint64_t x1799 = 39027LLU;
	int8_t x1800 = 0;
	uint64_t t40 = 12621891371LLU;

	t40 = (((x1797/x1798)+x1799)<<x1800);

	if (t40 != 39028LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1809 = -1;
	static int16_t x1810 = 17;
	int16_t x1811 = INT16_MAX;
	int8_t x1812 = 0;
	static volatile int32_t t41 = 42856;

	t41 = (((x1809/x1810)+x1811)<<x1812);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1829 = 1U;
	uint8_t x1830 = 11U;
	volatile uint32_t x1831 = 11554470U;
	uint32_t t42 = 8894857U;

	t42 = (((x1829/x1830)+x1831)<<x1832);

	if (t42 != 11554470U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1877 = INT16_MIN;
	uint16_t x1878 = UINT16_MAX;
	int16_t x1879 = INT16_MAX;

	t43 = (((x1877/x1878)+x1879)<<x1880);

	if (t43 != 8388352) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1886 = INT16_MAX;
	volatile int8_t x1887 = 0;
	int8_t x1888 = 0;
	volatile int32_t t44 = 825408;

	t44 = (((x1885/x1886)+x1887)<<x1888);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1917 = -1;
	uint64_t x1918 = UINT64_MAX;
	static int8_t x1919 = INT8_MAX;
	volatile uint64_t t45 = 3350420230LLU;

	t45 = (((x1917/x1918)+x1919)<<x1920);

	if (t45 != 256LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1991 = 0;
	volatile uint64_t t46 = 245688681LLU;

	t46 = (((x1989/x1990)+x1991)<<x1992);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1993 = -1;
	uint32_t x1995 = 13661U;
	volatile uint32_t t47 = 441U;

	t47 = (((x1993/x1994)+x1995)<<x1996);

	if (t47 != 3892314112U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2038 = UINT64_MAX;
	int32_t x2039 = INT32_MIN;
	volatile uint64_t t48 = 7104642804579251261LLU;

	t48 = (((x2037/x2038)+x2039)<<x2040);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2049 = 1082U;
	uint64_t x2050 = UINT64_MAX;
	uint64_t x2052 = 13LLU;
	volatile uint64_t t49 = 9LLU;

	t49 = (((x2049/x2050)+x2051)<<x2052);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2061 = INT8_MAX;
	volatile uint32_t x2062 = 6543U;
	uint8_t x2064 = 5U;
	uint64_t t50 = 281889LLU;

	t50 = (((x2061/x2062)+x2063)<<x2064);

	if (t50 != 349089126645984LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2089 = INT32_MAX;
	static uint8_t x2090 = UINT8_MAX;
	int16_t x2091 = INT16_MIN;
	uint64_t x2092 = 5LLU;

	t51 = (((x2089/x2090)+x2091)<<x2092);

	if (t51 != 268439552) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2137 = INT8_MIN;
	volatile int8_t x2138 = -1;
	static int64_t x2139 = 2LL;
	uint16_t x2140 = 1U;

	t52 = (((x2137/x2138)+x2139)<<x2140);

	if (t52 != 260LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2146 = 2LLU;
	volatile int32_t x2147 = INT32_MIN;
	uint32_t x2148 = 0U;
	uint64_t t53 = 146572725LLU;

	t53 = (((x2145/x2146)+x2147)<<x2148);

	if (t53 != 9223372034707275776LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2209 = -3;
	int16_t x2210 = -1;
	volatile uint8_t x2212 = 0U;
	int32_t t54 = -216;

	t54 = (((x2209/x2210)+x2211)<<x2212);

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x2229 = INT8_MAX;
	volatile int16_t x2230 = INT16_MAX;
	uint32_t x2231 = UINT32_MAX;
	uint16_t x2232 = 5U;
	volatile uint32_t t55 = 4609048U;

	t55 = (((x2229/x2230)+x2231)<<x2232);

	if (t55 != 4294967264U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2245 = UINT64_MAX;
	static int8_t x2246 = INT8_MAX;
	uint32_t x2247 = UINT32_MAX;
	uint8_t x2248 = 3U;
	uint64_t t56 = 923907LLU;

	t56 = (((x2245/x2246)+x2247)<<x2248);

	if (t56 != 1161999661050103816LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2265 = UINT32_MAX;
	int16_t x2266 = -2;
	int8_t x2267 = -7;
	uint8_t x2268 = 3U;
	uint32_t t57 = 3U;

	t57 = (((x2265/x2266)+x2267)<<x2268);

	if (t57 != 4294967248U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2293 = 11;
	int32_t x2294 = INT32_MIN;
	int8_t x2295 = INT8_MAX;

	t58 = (((x2293/x2294)+x2295)<<x2296);

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2333 = 1407888718U;
	static int64_t x2334 = -51020236140LL;
	uint16_t x2336 = 12U;
	int64_t t59 = -932487687LL;

	t59 = (((x2333/x2334)+x2335)<<x2336);

	if (t59 != 122880LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2349 = UINT64_MAX;
	uint16_t x2350 = 1346U;
	static uint16_t x2352 = 29U;
	volatile uint64_t t60 = 29720LLU;

	t60 = (((x2349/x2350)+x2351)<<x2352);

	if (t60 != 18008188493578108928LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x2413 = 632181219853LLU;
	int64_t x2414 = -566664470LL;
	int16_t x2415 = -1;
	int8_t x2416 = 6;
	uint64_t t61 = 47609225LLU;

	t61 = (((x2413/x2414)+x2415)<<x2416);

	if (t61 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x2418 = -2634;
	int16_t x2419 = INT16_MAX;
	static volatile uint8_t x2420 = 3U;
	int32_t t62 = -3097;

	t62 = (((x2417/x2418)+x2419)<<x2420);

	if (t62 != 947352) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2429 = INT32_MAX;
	static int16_t x2430 = -6231;
	uint32_t x2431 = UINT32_MAX;
	uint8_t x2432 = 2U;
	static uint32_t t63 = 62526201U;

	t63 = (((x2429/x2430)+x2431)<<x2432);

	if (t63 != 4293588712U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2441 = -51;
	uint32_t x2442 = 1940562U;
	uint64_t x2443 = UINT64_MAX;
	volatile uint8_t x2444 = 0U;
	static volatile uint64_t t64 = 1810631679253793116LLU;

	t64 = (((x2441/x2442)+x2443)<<x2444);

	if (t64 != 2212LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2466 = 498U;
	uint8_t x2467 = 14U;

	t65 = (((x2465/x2466)+x2467)<<x2468);

	if (t65 != 4312230U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2477 = -1014916462LL;
	int8_t x2478 = INT8_MIN;
	uint64_t x2480 = 6LLU;
	int64_t t66 = -68120155367LL;

	t66 = (((x2477/x2478)+x2479)<<x2480);

	if (t66 != 507484736LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2633 = 33328462951713LLU;
	uint64_t x2634 = UINT64_MAX;
	volatile uint8_t x2636 = 0U;
	volatile uint64_t t67 = 2540771333LLU;

	t67 = (((x2633/x2634)+x2635)<<x2636);

	if (t67 != 8397474580891205448LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2689 = INT8_MIN;
	volatile uint32_t x2690 = 45U;
	int8_t x2691 = -1;
	uint32_t t68 = 16046U;

	t68 = (((x2689/x2690)+x2691)<<x2692);

	if (t68 != 3626860672U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2793 = -1;
	int16_t x2794 = INT16_MIN;
	uint16_t x2795 = UINT16_MAX;
	uint8_t x2796 = 2U;

	t69 = (((x2793/x2794)+x2795)<<x2796);

	if (t69 != 262140) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2841 = 2;
	static int8_t x2842 = INT8_MAX;
	uint8_t x2843 = UINT8_MAX;
	int16_t x2844 = 17;
	volatile int32_t t70 = 134423269;

	t70 = (((x2841/x2842)+x2843)<<x2844);

	if (t70 != 33423360) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2869 = 29920041LLU;
	int8_t x2870 = -1;
	int32_t x2871 = -1;
	static int8_t x2872 = 59;
	static volatile uint64_t t71 = 744LLU;

	t71 = (((x2869/x2870)+x2871)<<x2872);

	if (t71 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2950 = -319;
	uint64_t x2951 = 0LLU;
	uint8_t x2952 = 42U;
	volatile uint64_t t72 = 1404746540LLU;

	t72 = (((x2949/x2950)+x2951)<<x2952);

	if (t72 != 5840504611676356608LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2989 = INT64_MIN;
	uint64_t x2991 = 135185918193643LLU;
	uint8_t x2992 = 61U;
	uint64_t t73 = 186919LLU;

	t73 = (((x2989/x2990)+x2991)<<x2992);

	if (t73 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3013 = -1;
	int8_t x3014 = -1;
	int16_t x3015 = INT16_MAX;
	static int16_t x3016 = 0;
	volatile int32_t t74 = -977776642;

	t74 = (((x3013/x3014)+x3015)<<x3016);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3021 = 3107885166486LLU;
	int8_t x3023 = INT8_MIN;
	volatile int16_t x3024 = 0;
	volatile uint64_t t75 = 287326452917541707LLU;

	t75 = (((x3021/x3022)+x3023)<<x3024);

	if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3041 = INT32_MAX;
	static volatile int64_t x3042 = INT64_MAX;
	uint16_t x3044 = 6U;

	t76 = (((x3041/x3042)+x3043)<<x3044);

	if (t76 != 11008LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3081 = -1;
	int32_t x3082 = 8;
	volatile uint16_t x3084 = 3U;
	volatile int32_t t77 = 229370167;

	t77 = (((x3081/x3082)+x3083)<<x3084);

	if (t77 != 2040) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3141 = UINT8_MAX;
	int8_t x3143 = INT8_MAX;
	int32_t t78 = 49551031;

	t78 = (((x3141/x3142)+x3143)<<x3144);

	if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3153 = UINT64_MAX;
	int16_t x3154 = -194;
	int64_t x3155 = 25LL;
	int16_t x3156 = 9;
	volatile uint64_t t79 = 2305650277287620LLU;

	t79 = (((x3153/x3154)+x3155)<<x3156);

	if (t79 != 13312LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3201 = INT16_MIN;
	int32_t x3203 = INT32_MIN;

	t80 = (((x3201/x3202)+x3203)<<x3204);

	if (t80 != 187756696U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3277 = INT32_MAX;
	uint32_t x3278 = UINT32_MAX;
	static volatile int8_t x3279 = INT8_MAX;
	static volatile uint16_t x3280 = 23U;
	volatile uint32_t t81 = 280489056U;

	t81 = (((x3277/x3278)+x3279)<<x3280);

	if (t81 != 1065353216U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3469 = INT32_MAX;
	static volatile uint32_t x3470 = 220U;
	int8_t x3471 = 11;
	volatile uint8_t x3472 = 4U;

	t82 = (((x3469/x3470)+x3471)<<x3472);

	if (t82 != 156180800U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x3563 = UINT32_MAX;
	uint32_t t83 = 97062U;

	t83 = (((x3561/x3562)+x3563)<<x3564);

	if (t83 != 4294934528U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3582 = INT8_MIN;
	uint16_t x3583 = 1U;
	volatile uint32_t x3584 = 3U;
	volatile int32_t t84 = 1837282;

	t84 = (((x3581/x3582)+x3583)<<x3584);

	if (t84 != 2056) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3673 = 3206674LLU;
	static volatile int8_t x3674 = INT8_MAX;
	static int16_t x3675 = 1919;
	volatile int16_t x3676 = 44;
	static volatile uint64_t t85 = 2848618LLU;

	t85 = (((x3673/x3674)+x3675)<<x3676);

	if (t85 != 477944510454693888LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3802 = 8U;
	static volatile uint8_t x3803 = UINT8_MAX;
	uint16_t x3804 = 14U;

	t86 = (((x3801/x3802)+x3803)<<x3804);

	if (t86 != 23281664LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3889 = 18U;
	int32_t x3890 = -81851;
	volatile int32_t x3892 = 0;
	uint32_t t87 = 1888686U;

	t87 = (((x3889/x3890)+x3891)<<x3892);

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3929 = INT8_MIN;
	int16_t x3930 = INT16_MIN;
	uint16_t x3932 = 21U;
	static volatile uint64_t t88 = 60676LLU;

	t88 = (((x3929/x3930)+x3931)<<x3932);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3961 = INT8_MAX;
	volatile int16_t x3962 = 423;
	uint64_t x3963 = 192106445716813738LLU;
	uint8_t x3964 = 1U;
	volatile uint64_t t89 = 37856851181178083LLU;

	t89 = (((x3961/x3962)+x3963)<<x3964);

	if (t89 != 384212891433627476LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3997 = 14;
	int64_t x3998 = INT64_MAX;
	uint16_t x3999 = 35U;
	static volatile int64_t t90 = -11LL;

	t90 = (((x3997/x3998)+x3999)<<x4000);

	if (t90 != 140LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4013 = -223737LL;
	uint8_t x4015 = 0U;
	static uint8_t x4016 = 1U;
	volatile int64_t t91 = -2384103634LL;

	t91 = (((x4013/x4014)+x4015)<<x4016);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4085 = -339313650;
	static int16_t x4086 = -1;
	static int32_t x4087 = 99;
	volatile int32_t t92 = 8;

	t92 = (((x4085/x4086)+x4087)<<x4088);

	if (t92 != 339313749) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4093 = INT64_MIN;
	static int32_t x4094 = INT32_MAX;
	int8_t x4096 = 2;
	volatile uint64_t t93 = 59LLU;

	t93 = (((x4093/x4094)+x4095)<<x4096);

	if (t93 != 18446744056531093420LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4157 = -1;
	int16_t x4158 = INT16_MIN;
	uint64_t x4159 = 20758LLU;
	static int8_t x4160 = 36;
	uint64_t t94 = 3428290937462180682LLU;

	t94 = (((x4157/x4158)+x4159)<<x4160);

	if (t94 != 1426478898085888LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4169 = 1U;
	uint8_t x4170 = 3U;
	volatile uint8_t x4171 = 0U;

	t95 = (((x4169/x4170)+x4171)<<x4172);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4193 = -1;
	uint32_t x4194 = 2052418665U;
	static uint64_t x4195 = 60462608614807LLU;
	uint8_t x4196 = 14U;
	volatile uint64_t t96 = 31347669330523LLU;

	t96 = (((x4193/x4194)+x4195)<<x4196);

	if (t96 != 990619379545030656LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x4229 = 44893976563208142LLU;
	int64_t x4230 = 2543851855299041120LL;
	volatile int32_t x4231 = INT32_MAX;
	int16_t x4232 = 27;
	uint64_t t97 = 9135499246373LLU;

	t97 = (((x4229/x4230)+x4231)<<x4232);

	if (t97 != 288230376017494016LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4261 = 8;
	static uint32_t x4262 = 1591U;
	uint8_t x4263 = UINT8_MAX;
	static volatile int16_t x4264 = 1;

	t98 = (((x4261/x4262)+x4263)<<x4264);

	if (t98 != 510U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4377 = 1508859535310LLU;
	volatile int16_t x4379 = INT16_MIN;
	int8_t x4380 = 2;
	volatile uint64_t t99 = 1978LLU;

	t99 = (((x4377/x4378)+x4379)<<x4380);

	if (t99 != 23668253792LLU) { NG(); } else { ; }
	
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


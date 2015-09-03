#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x72 = INT32_MIN;
int8_t x177 = 1;
uint64_t t5 = 96824744LLU;
static volatile uint64_t t9 = UINT64_MAX;
static int32_t x528 = INT32_MAX;
volatile uint8_t x614 = 20U;
int8_t x732 = -62;
int8_t x773 = 0;
uint16_t x774 = 1U;
static int16_t x792 = INT16_MAX;
int32_t t17 = 74;
int32_t x825 = INT32_MAX;
uint8_t x1049 = 125U;
static uint8_t x1085 = 82U;
static uint8_t x1170 = 11U;
static uint8_t x1173 = UINT8_MAX;
uint64_t x1305 = UINT64_MAX;
int64_t x1307 = INT64_MIN;
uint64_t t26 = 92LLU;
int64_t x1339 = INT64_MIN;
int8_t x1345 = INT8_MAX;
volatile int32_t t29 = INT32_MAX;
static int64_t x1411 = -1LL;
static volatile int64_t t30 = 24738779LL;
int32_t x1425 = INT32_MAX;
volatile uint8_t x1427 = UINT8_MAX;
int64_t x1428 = -215LL;
static int64_t t31 = -4090313635LL;
int16_t x1577 = 12;
static uint8_t x1578 = 0U;
volatile int64_t t35 = -213LL;
uint64_t x1725 = 235063701LLU;
int32_t t37 = 591;
uint16_t x1759 = UINT16_MAX;
uint8_t x1760 = UINT8_MAX;
volatile uint64_t x1985 = 40467647199501LLU;
uint8_t x2010 = 41U;
uint16_t x2013 = 921U;
int16_t x2043 = INT16_MIN;
uint16_t x2184 = UINT16_MAX;
int64_t x2379 = INT64_MIN;
uint8_t x2455 = 34U;
int8_t x2574 = 1;
static int16_t x2575 = INT16_MIN;
volatile int16_t x2576 = 10;
static uint32_t x2669 = 19U;
uint8_t x2670 = 1U;
int64_t x2672 = -1LL;
int64_t t53 = -105843692039970LL;
uint32_t x2730 = 3U;
int16_t x2732 = INT16_MIN;
volatile uint16_t x2892 = UINT16_MAX;
volatile uint64_t t55 = UINT64_MAX;
volatile int32_t x2968 = INT32_MIN;
int16_t x3068 = INT16_MIN;
int32_t t57 = 2679;
int16_t x3094 = 13;
volatile int16_t x3148 = INT16_MIN;
volatile uint64_t t59 = UINT64_MAX;
uint32_t x3190 = 21U;
volatile uint16_t x3211 = 33U;
int32_t t64 = 1290;
int32_t x3679 = INT32_MIN;
int8_t x3680 = INT8_MIN;
volatile int8_t x3704 = INT8_MIN;
uint64_t t67 = UINT64_MAX;
int64_t x3722 = 25LL;
static uint8_t x3746 = 1U;
volatile uint32_t x3749 = 40297U;
int16_t x3820 = 198;
uint64_t t75 = 129677240218597LLU;
volatile uint64_t x3901 = 12LLU;
volatile int8_t x4142 = 0;
volatile int8_t x4309 = 1;
static uint8_t x4312 = UINT8_MAX;
volatile uint32_t t81 = UINT32_MAX;
uint32_t x4326 = 10U;
volatile uint16_t x4328 = UINT16_MAX;
static int32_t t82 = INT32_MAX;
uint8_t x4350 = 4U;
int16_t x4351 = -1;
static volatile int8_t x4352 = INT8_MIN;
static uint8_t x4366 = 1U;
uint64_t t84 = UINT64_MAX;
int32_t x4421 = INT32_MAX;
int8_t x4424 = -1;
volatile int64_t x4455 = INT64_MAX;
volatile int32_t t87 = -203;
int32_t x4679 = INT32_MAX;
int8_t x4694 = 1;
int64_t x4696 = 20801197240713808LL;
int32_t x4707 = INT32_MIN;
static uint16_t x4810 = 1U;
int16_t x4858 = 0;
int32_t x4860 = INT32_MAX;
uint16_t x4894 = 7U;
static int8_t x4915 = -1;
int64_t x4925 = 897716681970LL;
static int8_t x4927 = -21;
static int64_t t97 = 27559438106LL;
static uint8_t x4954 = 8U;


void f0(void) {
	static volatile uint8_t x69 = 127U;
	uint8_t x70 = 3U;
	int64_t x71 = -9LL;
	volatile int64_t t0 = 1061LL;

	t0 = ((x69>>x70)|(x71|x72));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x178 = 0U;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = 26055U;
	int32_t t1 = -270557;

	t1 = ((x177>>x178)|(x179|x180));

	if (t1 != -57) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x201 = 50;
	uint8_t x202 = 23U;
	uint32_t x203 = 33U;
	int32_t x204 = INT32_MIN;
	uint32_t t2 = 10U;

	t2 = ((x201>>x202)|(x203|x204));

	if (t2 != 2147483681U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = 6U;
	int64_t x291 = -113042383LL;
	int64_t x292 = -1LL;
	int64_t t3 = 559197LL;

	t3 = ((x289>>x290)|(x291|x292));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int8_t x318 = 2;
	volatile uint8_t x319 = 25U;
	int32_t x320 = INT32_MAX;
	uint32_t t4 = 2002302U;

	t4 = ((x317>>x318)|(x319|x320));

	if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x361 = 16788868103379LLU;
	static int8_t x362 = 27;
	uint32_t x363 = 427645100U;
	uint64_t x364 = 8773LLU;

	t5 = ((x361>>x362)|(x363|x364));

	if (t5 != 427686655LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x381 = 40496U;
	int64_t x382 = 1LL;
	static uint8_t x383 = 53U;
	static int32_t x384 = INT32_MAX;
	volatile uint32_t t6 = 181384457U;

	t6 = ((x381>>x382)|(x383|x384));

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x389 = 25;
	uint8_t x390 = 3U;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MAX;
	volatile int32_t t7 = 28;

	t7 = ((x389>>x390)|(x391|x392));

	if (t7 != -2147450881) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x425 = 8U;
	static int64_t x426 = 0LL;
	int8_t x427 = -1;
	int32_t x428 = INT32_MIN;
	volatile int32_t t8 = -26422062;

	t8 = ((x425>>x426)|(x427|x428));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x453 = 51U;
	uint8_t x454 = 24U;
	static int8_t x455 = -35;
	uint64_t x456 = UINT64_MAX;

	t9 = ((x453>>x454)|(x455|x456));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x525 = 6640217554987286748LLU;
	uint16_t x526 = 11U;
	static int32_t x527 = INT32_MIN;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x525>>x526)|(x527|x528));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x537 = UINT64_MAX;
	static int8_t x538 = 2;
	int64_t x539 = -1LL;
	int64_t x540 = INT64_MAX;
	static uint64_t t11 = UINT64_MAX;

	t11 = ((x537>>x538)|(x539|x540));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x613 = 14818477037653824LLU;
	int32_t x615 = INT32_MIN;
	int8_t x616 = -1;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x613>>x614)|(x615|x616));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x729 = 2LL;
	static uint32_t x730 = 0U;
	volatile int64_t x731 = INT64_MIN;
	static volatile int64_t t13 = 60LL;

	t13 = ((x729>>x730)|(x731|x732));

	if (t13 != -62LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x741 = 2U;
	uint16_t x742 = 4U;
	int16_t x743 = -20;
	volatile int16_t x744 = -1;
	volatile int32_t t14 = 1970252;

	t14 = ((x741>>x742)|(x743|x744));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x775 = 5U;
	uint32_t x776 = UINT32_MAX;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = ((x773>>x774)|(x775|x776));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x789 = 45429173U;
	uint8_t x790 = 3U;
	int16_t x791 = -1;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x789>>x790)|(x791|x792));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x793 = INT8_MAX;
	static uint16_t x794 = 6U;
	static int8_t x795 = -1;
	static volatile int16_t x796 = -1;

	t17 = ((x793>>x794)|(x795|x796));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x826 = 0U;
	int64_t x827 = INT64_MAX;
	int64_t x828 = -9881LL;
	static int64_t t18 = -116375LL;

	t18 = ((x825>>x826)|(x827|x828));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1050 = 0;
	int16_t x1051 = -1;
	uint64_t x1052 = 441386293671LLU;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x1049>>x1050)|(x1051|x1052));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1086 = 2;
	volatile int64_t x1087 = -1003946520759429LL;
	volatile uint16_t x1088 = 10U;
	volatile int64_t t20 = -1LL;

	t20 = ((x1085>>x1086)|(x1087|x1088));

	if (t20 != -1003946520759425LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1117 = 4;
	static uint32_t x1118 = 7U;
	int8_t x1119 = 0;
	int8_t x1120 = -1;
	int32_t t21 = -628010160;

	t21 = ((x1117>>x1118)|(x1119|x1120));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1129 = INT16_MAX;
	uint16_t x1130 = 4U;
	uint64_t x1131 = UINT64_MAX;
	int16_t x1132 = -1;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = ((x1129>>x1130)|(x1131|x1132));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1169 = INT32_MAX;
	volatile uint64_t x1171 = UINT64_MAX;
	volatile int64_t x1172 = INT64_MIN;
	static uint64_t t23 = UINT64_MAX;

	t23 = ((x1169>>x1170)|(x1171|x1172));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1174 = 7LLU;
	int64_t x1175 = INT64_MIN;
	static volatile int16_t x1176 = 0;
	static int64_t t24 = 6034225LL;

	t24 = ((x1173>>x1174)|(x1175|x1176));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1181 = 11982852U;
	volatile uint8_t x1182 = 1U;
	int8_t x1183 = INT8_MIN;
	uint64_t x1184 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x1181>>x1182)|(x1183|x1184));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1306 = 58U;
	int32_t x1308 = INT32_MIN;

	t26 = ((x1305>>x1306)|(x1307|x1308));

	if (t26 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1337 = INT64_MAX;
	uint16_t x1338 = 3U;
	uint8_t x1340 = UINT8_MAX;
	static int64_t t27 = -8613736LL;

	t27 = ((x1337>>x1338)|(x1339|x1340));

	if (t27 != -8070450532247928833LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1346 = 6U;
	int64_t x1347 = -1LL;
	uint8_t x1348 = 29U;
	static volatile int64_t t28 = 479240594810197731LL;

	t28 = ((x1345>>x1346)|(x1347|x1348));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1385 = UINT16_MAX;
	int16_t x1386 = 15;
	volatile int32_t x1387 = INT32_MAX;
	uint16_t x1388 = 1U;

	t29 = ((x1385>>x1386)|(x1387|x1388));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1409 = INT32_MAX;
	uint64_t x1410 = 3LLU;
	volatile uint8_t x1412 = 2U;

	t30 = ((x1409>>x1410)|(x1411|x1412));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1426 = 3;

	t31 = ((x1425>>x1426)|(x1427|x1428));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1465 = 493036417131669000LL;
	int8_t x1466 = 0;
	uint8_t x1467 = 24U;
	volatile uint16_t x1468 = 4424U;
	int64_t t32 = 565094123271623101LL;

	t32 = ((x1465>>x1466)|(x1467|x1468));

	if (t32 != 493036417131673432LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1549 = UINT32_MAX;
	uint16_t x1550 = 16U;
	int8_t x1551 = 1;
	int64_t x1552 = -1LL;
	int64_t t33 = 27LL;

	t33 = ((x1549>>x1550)|(x1551|x1552));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x1579 = INT8_MIN;
	int32_t x1580 = -79;
	int32_t t34 = -2377512;

	t34 = ((x1577>>x1578)|(x1579|x1580));

	if (t34 != -67) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1629 = INT32_MAX;
	int8_t x1630 = 1;
	int8_t x1631 = -1;
	int64_t x1632 = INT64_MAX;

	t35 = ((x1629>>x1630)|(x1631|x1632));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1726 = 0;
	int64_t x1727 = INT64_MIN;
	int32_t x1728 = INT32_MAX;
	volatile uint64_t t36 = 12372304960899450LLU;

	t36 = ((x1725>>x1726)|(x1727|x1728));

	if (t36 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1753 = UINT16_MAX;
	uint8_t x1754 = 12U;
	uint8_t x1755 = 0U;
	int8_t x1756 = INT8_MAX;

	t37 = ((x1753>>x1754)|(x1755|x1756));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1757 = INT32_MAX;
	uint32_t x1758 = 14U;
	int32_t t38 = -323563046;

	t38 = ((x1757>>x1758)|(x1759|x1760));

	if (t38 != 131071) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1949 = 28U;
	uint8_t x1950 = 31U;
	volatile int8_t x1951 = -17;
	volatile int16_t x1952 = INT16_MIN;
	volatile int32_t t39 = 2;

	t39 = ((x1949>>x1950)|(x1951|x1952));

	if (t39 != -17) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x1986 = 5U;
	int16_t x1987 = -12210;
	int32_t x1988 = -1;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x1985>>x1986)|(x1987|x1988));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2009 = 20223654601LLU;
	uint64_t x2011 = 2291872819991LLU;
	uint32_t x2012 = 164192U;
	uint64_t t41 = 336212616LLU;

	t41 = ((x2009>>x2010)|(x2011|x2012));

	if (t41 != 2291872820087LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2014 = 2U;
	int32_t x2015 = INT32_MIN;
	int8_t x2016 = 1;
	static volatile int32_t t42 = 2077436;

	t42 = ((x2013>>x2014)|(x2015|x2016));

	if (t42 != -2147483417) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2041 = 2515077379252800938LLU;
	uint32_t x2042 = 2U;
	volatile uint8_t x2044 = UINT8_MAX;
	uint64_t t43 = 882396049LLU;

	t43 = ((x2041>>x2042)|(x2043|x2044));

	if (t43 != 18446744073709548543LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2149 = 551U;
	uint8_t x2150 = 6U;
	uint64_t x2151 = 9862880187LLU;
	uint64_t x2152 = 52441299675034119LLU;
	uint64_t t44 = 509900580LLU;

	t44 = ((x2149>>x2150)|(x2151|x2152));

	if (t44 != 52441309360667583LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2181 = 0U;
	uint8_t x2182 = 0U;
	uint32_t x2183 = UINT32_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x2181>>x2182)|(x2183|x2184));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2289 = 131142048016763297LL;
	uint64_t x2290 = 2LLU;
	volatile int16_t x2291 = INT16_MAX;
	uint16_t x2292 = UINT16_MAX;
	volatile int64_t t46 = 14733178037LL;

	t46 = ((x2289>>x2290)|(x2291|x2292));

	if (t46 != 32785512004255743LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2357 = UINT32_MAX;
	static uint64_t x2358 = 14LLU;
	int8_t x2359 = INT8_MAX;
	static volatile int64_t x2360 = INT64_MIN;
	int64_t t47 = -12608945LL;

	t47 = ((x2357>>x2358)|(x2359|x2360));

	if (t47 != -9223372036854513665LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2377 = UINT64_MAX;
	static uint8_t x2378 = 5U;
	int64_t x2380 = INT64_MIN;
	volatile uint64_t t48 = 23304434981881673LLU;

	t48 = ((x2377>>x2378)|(x2379|x2380));

	if (t48 != 9799832789158199295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2453 = INT64_MAX;
	static uint8_t x2454 = 5U;
	static uint64_t x2456 = UINT64_MAX;
	static uint64_t t49 = UINT64_MAX;

	t49 = ((x2453>>x2454)|(x2455|x2456));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2533 = INT8_MAX;
	volatile uint16_t x2534 = 16U;
	uint32_t x2535 = 1691795U;
	static int64_t x2536 = -1LL;
	static int64_t t50 = 3298126LL;

	t50 = ((x2533>>x2534)|(x2535|x2536));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2573 = INT8_MAX;
	int32_t t51 = 524808;

	t51 = ((x2573>>x2574)|(x2575|x2576));

	if (t51 != -32705) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2593 = INT32_MAX;
	uint8_t x2594 = 22U;
	volatile int8_t x2595 = -1;
	int32_t x2596 = -49405;
	static volatile int32_t t52 = -3588;

	t52 = ((x2593>>x2594)|(x2595|x2596));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2671 = -54;

	t53 = ((x2669>>x2670)|(x2671|x2672));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2729 = 17100U;
	int64_t x2731 = 8362125886450LL;
	static int64_t t54 = 1588324143021877LL;

	t54 = ((x2729>>x2730)|(x2731|x2732));

	if (t54 != -29701LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2889 = 3629LLU;
	uint16_t x2890 = 3U;
	static int8_t x2891 = INT8_MIN;

	t55 = ((x2889>>x2890)|(x2891|x2892));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2965 = INT64_MAX;
	int32_t x2966 = 51;
	static uint8_t x2967 = 9U;
	int64_t t56 = 247129435194613758LL;

	t56 = ((x2965>>x2966)|(x2967|x2968));

	if (t56 != -2147479553LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x3065 = 402U;
	uint16_t x3066 = 0U;
	int16_t x3067 = -7;

	t57 = ((x3065>>x3066)|(x3067|x3068));

	if (t57 != -5) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3093 = 74085U;
	uint64_t x3095 = UINT64_MAX;
	volatile int32_t x3096 = INT32_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x3093>>x3094)|(x3095|x3096));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x3145 = 1;
	volatile uint16_t x3146 = 31U;
	uint64_t x3147 = UINT64_MAX;

	t59 = ((x3145>>x3146)|(x3147|x3148));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3173 = UINT32_MAX;
	uint8_t x3174 = 0U;
	uint16_t x3175 = 73U;
	int16_t x3176 = 23;
	uint32_t t60 = UINT32_MAX;

	t60 = ((x3173>>x3174)|(x3175|x3176));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3189 = 60442U;
	volatile int8_t x3191 = -1;
	int8_t x3192 = -11;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x3189>>x3190)|(x3191|x3192));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3209 = INT32_MAX;
	static volatile uint8_t x3210 = 2U;
	int16_t x3212 = -7;
	static volatile int32_t t62 = 40652;

	t62 = ((x3209>>x3210)|(x3211|x3212));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3553 = 849875643852LLU;
	static int64_t x3554 = 2LL;
	int64_t x3555 = 4LL;
	uint64_t x3556 = 4720536LLU;
	uint64_t t63 = 17854275247333940LLU;

	t63 = ((x3553>>x3554)|(x3555|x3556));

	if (t63 != 212473630719LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3613 = 6U;
	static uint16_t x3614 = 1U;
	int32_t x3615 = INT32_MAX;
	static int16_t x3616 = INT16_MIN;

	t64 = ((x3613>>x3614)|(x3615|x3616));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3665 = 42837984048317LLU;
	volatile uint16_t x3666 = 0U;
	int32_t x3667 = INT32_MAX;
	int64_t x3668 = 1616LL;
	volatile uint64_t t65 = 3604LLU;

	t65 = ((x3665>>x3666)|(x3667|x3668));

	if (t65 != 42838003810303LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3677 = INT16_MAX;
	volatile int8_t x3678 = 11;
	volatile int32_t t66 = -2508;

	t66 = ((x3677>>x3678)|(x3679|x3680));

	if (t66 != -113) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3701 = 361758620127LLU;
	int32_t x3702 = 17;
	int8_t x3703 = INT8_MAX;

	t67 = ((x3701>>x3702)|(x3703|x3704));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3709 = 11;
	uint16_t x3710 = 7U;
	uint32_t x3711 = 3270184U;
	volatile int64_t x3712 = 23321436LL;
	volatile int64_t t68 = -454516552910907LL;

	t68 = ((x3709>>x3710)|(x3711|x3712));

	if (t68 != 24379260LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3721 = 0U;
	static int8_t x3723 = INT8_MIN;
	uint32_t x3724 = 1028438082U;
	volatile uint32_t t69 = 224U;

	t69 = ((x3721>>x3722)|(x3723|x3724));

	if (t69 != 4294967234U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3745 = 121U;
	static int16_t x3747 = -133;
	volatile int8_t x3748 = 1;
	static volatile int32_t t70 = -1;

	t70 = ((x3745>>x3746)|(x3747|x3748));

	if (t70 != -129) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3750 = 7;
	uint32_t x3751 = 565676643U;
	static uint32_t x3752 = UINT32_MAX;
	static uint32_t t71 = UINT32_MAX;

	t71 = ((x3749>>x3750)|(x3751|x3752));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3769 = 2247912612366403LLU;
	uint8_t x3770 = 30U;
	volatile uint32_t x3771 = 4141U;
	volatile uint32_t x3772 = UINT32_MAX;
	volatile uint64_t t72 = 8442552LLU;

	t72 = ((x3769>>x3770)|(x3771|x3772));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3809 = UINT32_MAX;
	uint8_t x3810 = 9U;
	int8_t x3811 = INT8_MIN;
	volatile int8_t x3812 = INT8_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = ((x3809>>x3810)|(x3811|x3812));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3817 = INT16_MAX;
	uint32_t x3818 = 0U;
	volatile int32_t x3819 = INT32_MIN;
	int32_t t74 = 877;

	t74 = ((x3817>>x3818)|(x3819|x3820));

	if (t74 != -2147450881) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3845 = INT16_MAX;
	int32_t x3846 = 14;
	static int8_t x3847 = INT8_MIN;
	uint64_t x3848 = 22857154688LLU;

	t75 = ((x3845>>x3846)|(x3847|x3848));

	if (t75 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3902 = 1LL;
	int32_t x3903 = INT32_MAX;
	static int8_t x3904 = 53;
	uint64_t t76 = 14670984LLU;

	t76 = ((x3901>>x3902)|(x3903|x3904));

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4049 = 91;
	uint32_t x4050 = 1U;
	static int64_t x4051 = -1LL;
	volatile uint16_t x4052 = 0U;
	volatile int64_t t77 = -467LL;

	t77 = ((x4049>>x4050)|(x4051|x4052));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4057 = 22U;
	uint8_t x4058 = 3U;
	int16_t x4059 = INT16_MAX;
	int32_t x4060 = 185479;
	int32_t t78 = -389886;

	t78 = ((x4057>>x4058)|(x4059|x4060));

	if (t78 != 196607) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4141 = INT32_MAX;
	uint64_t x4143 = UINT64_MAX;
	static int8_t x4144 = INT8_MIN;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x4141>>x4142)|(x4143|x4144));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4201 = 2119U;
	int16_t x4202 = 0;
	int32_t x4203 = INT32_MAX;
	static uint16_t x4204 = UINT16_MAX;
	volatile uint32_t t80 = 0U;

	t80 = ((x4201>>x4202)|(x4203|x4204));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x4310 = 1;
	uint32_t x4311 = UINT32_MAX;

	t81 = ((x4309>>x4310)|(x4311|x4312));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4325 = UINT8_MAX;
	volatile int32_t x4327 = INT32_MAX;

	t82 = ((x4325>>x4326)|(x4327|x4328));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4349 = 578227U;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x4349>>x4350)|(x4351|x4352));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4365 = 14U;
	static int32_t x4367 = INT32_MAX;
	uint64_t x4368 = UINT64_MAX;

	t84 = ((x4365>>x4366)|(x4367|x4368));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x4422 = 14U;
	volatile int16_t x4423 = -2036;
	int32_t t85 = -164583;

	t85 = ((x4421>>x4422)|(x4423|x4424));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4453 = INT64_MAX;
	uint8_t x4454 = 3U;
	uint8_t x4456 = 29U;
	int64_t t86 = INT64_MAX;

	t86 = ((x4453>>x4454)|(x4455|x4456));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x4633 = 2U;
	uint16_t x4634 = 12U;
	int32_t x4635 = 1672;
	int32_t x4636 = 2;

	t87 = ((x4633>>x4634)|(x4635|x4636));

	if (t87 != 1674) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4677 = 1650U;
	int8_t x4678 = 1;
	static uint16_t x4680 = 0U;
	int32_t t88 = INT32_MAX;

	t88 = ((x4677>>x4678)|(x4679|x4680));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4693 = 76U;
	uint32_t x4695 = 496052383U;
	volatile int64_t t89 = 1513900LL;

	t89 = ((x4693>>x4694)|(x4695|x4696));

	if (t89 != 20801197669591807LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x4705 = 886303557U;
	static uint16_t x4706 = 7U;
	int16_t x4708 = 12963;
	volatile uint32_t t90 = 3459U;

	t90 = ((x4705>>x4706)|(x4707|x4708));

	if (t90 != 2154412023U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x4709 = 66U;
	uint8_t x4710 = 0U;
	int16_t x4711 = INT16_MIN;
	int64_t x4712 = 930LL;
	static int64_t t91 = 245181868626609LL;

	t91 = ((x4709>>x4710)|(x4711|x4712));

	if (t91 != -31774LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4765 = INT16_MAX;
	volatile uint8_t x4766 = 3U;
	int16_t x4767 = INT16_MAX;
	volatile int32_t x4768 = INT32_MIN;
	volatile int32_t t92 = 595432042;

	t92 = ((x4765>>x4766)|(x4767|x4768));

	if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x4809 = 4098;
	int32_t x4811 = 8084;
	int16_t x4812 = -1;
	int32_t t93 = -2197;

	t93 = ((x4809>>x4810)|(x4811|x4812));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4857 = 32522153522358LL;
	int32_t x4859 = -1;
	static int64_t t94 = -2LL;

	t94 = ((x4857>>x4858)|(x4859|x4860));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x4893 = 0U;
	uint64_t x4895 = 26192586LLU;
	volatile int8_t x4896 = -1;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x4893>>x4894)|(x4895|x4896));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x4913 = INT32_MAX;
	static int16_t x4914 = 2;
	int64_t x4916 = 64342082LL;
	int64_t t96 = 157LL;

	t96 = ((x4913>>x4914)|(x4915|x4916));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4926 = 11;
	int32_t x4928 = INT32_MIN;

	t97 = ((x4925>>x4926)|(x4927|x4928));

	if (t97 != -17LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x4953 = 14930U;
	volatile uint16_t x4955 = 5U;
	static uint16_t x4956 = 1755U;
	volatile int32_t t98 = -66795679;

	t98 = ((x4953>>x4954)|(x4955|x4956));

	if (t98 != 1791) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5021 = UINT32_MAX;
	volatile int8_t x5022 = 0;
	int64_t x5023 = INT64_MAX;
	int8_t x5024 = INT8_MIN;
	int64_t t99 = -227427687811LL;

	t99 = ((x5021>>x5022)|(x5023|x5024));

	if (t99 != -1LL) { NG(); } else { ; }
	
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


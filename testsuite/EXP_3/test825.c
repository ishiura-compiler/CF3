#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = INT8_MAX;
uint64_t x74 = 100368LLU;
static volatile int8_t x76 = -1;
volatile uint64_t t1 = 99480726889400LLU;
uint32_t x113 = 5251U;
static int64_t x122 = -1494457181LL;
int64_t x170 = INT64_MAX;
static uint8_t x187 = 1U;
uint64_t x237 = 14907948187624118LLU;
static uint16_t x238 = 16U;
uint64_t t6 = 13LLU;
uint8_t x258 = 0U;
volatile int32_t x259 = INT32_MIN;
static int32_t x397 = 1868264;
uint8_t x398 = 7U;
int16_t x400 = INT16_MIN;
volatile uint64_t x449 = 415842LLU;
volatile uint8_t x451 = 9U;
int8_t x452 = -2;
volatile uint64_t t12 = 633564LLU;
volatile uint32_t x454 = 0U;
uint16_t x455 = 0U;
int64_t x456 = 28LL;
volatile uint64_t t14 = 87LLU;
uint16_t x500 = 6536U;
uint64_t x586 = 1262561180LLU;
int64_t x659 = INT64_MIN;
int16_t x660 = INT16_MIN;
uint64_t x798 = 689LLU;
int64_t x839 = INT64_MIN;
uint64_t x862 = UINT64_MAX;
uint8_t x863 = 1U;
int64_t x864 = -1LL;
static int16_t x869 = 6;
uint32_t x871 = 22U;
int32_t t27 = 1;
uint32_t x957 = 9845959U;
volatile int64_t x1010 = INT64_MIN;
volatile uint64_t x1012 = 3LLU;
uint64_t t32 = UINT64_MAX;
uint32_t x1033 = 3450130U;
uint16_t x1158 = UINT16_MAX;
int8_t x1273 = 0;
int32_t x1307 = 3;
uint16_t x1374 = 1U;
int32_t t41 = 899;
int16_t x1379 = 2;
int32_t x1380 = -4901279;
volatile uint32_t t43 = 54548U;
uint32_t x1413 = 154907U;
uint32_t x1469 = 39266635U;
int8_t x1470 = INT8_MAX;
static int8_t x1606 = INT8_MAX;
uint32_t t47 = 580777U;
static int16_t x1629 = 2;
uint64_t x1658 = 6422287685768683437LLU;
int64_t x1660 = -1LL;
volatile uint64_t t49 = 12529664LLU;
int16_t x1683 = -138;
volatile uint64_t t50 = UINT64_MAX;
int16_t x1756 = -1;
int8_t x1762 = -1;
int8_t x1764 = -1;
int64_t x1775 = INT64_MIN;
uint32_t t55 = UINT32_MAX;
static int8_t x1822 = 0;
uint16_t x1823 = 15U;
int32_t t56 = 1;
int8_t x1830 = INT8_MIN;
volatile int8_t x1887 = INT8_MIN;
static volatile uint64_t x1893 = 5LLU;
uint64_t t60 = 30170689898LLU;
volatile uint32_t x1935 = 0U;
static int32_t x1994 = INT32_MAX;
int32_t x2095 = INT32_MAX;
uint64_t x2133 = UINT64_MAX;
uint16_t x2169 = UINT16_MAX;
uint16_t x2170 = 16096U;
static uint64_t x2231 = UINT64_MAX;
static volatile int32_t t73 = -1671;
int32_t t74 = -55;
int8_t x2256 = INT8_MIN;
int8_t x2323 = 0;
uint8_t x2324 = UINT8_MAX;
static volatile int8_t x2325 = INT8_MAX;
int16_t x2327 = -1;
uint32_t x2369 = 2321U;
volatile uint64_t t79 = 801421245LLU;
volatile uint32_t x2408 = 2U;
int64_t x2423 = 14LL;
volatile int8_t x2424 = INT8_MIN;
volatile int8_t x2455 = INT8_MIN;
uint64_t x2486 = 681707872153LLU;
static uint32_t x2543 = 0U;
int32_t x2551 = INT32_MIN;
volatile int8_t x2552 = INT8_MIN;
int32_t t90 = -74;
uint32_t x2629 = UINT32_MAX;
int32_t x2630 = -1;
static volatile uint64_t t93 = 0LLU;
uint32_t x2674 = 1543098U;
static int16_t x2676 = -1;
uint32_t t94 = 434243819U;
uint16_t x2681 = UINT16_MAX;
volatile uint32_t x2682 = 1U;
volatile uint64_t t96 = UINT64_MAX;
int32_t x2771 = -153388000;
static int16_t x2885 = 17;
volatile uint16_t x2886 = 777U;
uint32_t x2890 = 31U;
volatile uint32_t t99 = 212U;


void f0(void) {
	volatile int8_t x14 = 1;
	volatile uint8_t x15 = 0U;
	static volatile uint64_t x16 = UINT64_MAX;
	static int32_t t0 = 35019;

	t0 = ((x13|x14)<<(x15%x16));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x73 = 86374244368LLU;
	uint16_t x75 = UINT16_MAX;

	t1 = ((x73|x74)<<(x75%x76));

	if (t1 != 86374344720LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x114 = 1U;
	uint16_t x115 = 22U;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t2 = 12032U;

	t2 = ((x113|x114)<<(x115%x116));

	if (t2 != 549453824U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x123 = 8;
	int32_t x124 = -1;
	static volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x121|x122)<<(x123%x124));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -4;
	volatile int64_t t4 = INT64_MAX;

	t4 = ((x169|x170)<<(x171%x172));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MAX;
	int16_t x188 = INT16_MAX;
	static uint64_t t5 = 4101908893LLU;

	t5 = ((x185|x186)<<(x187%x188));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;

	t6 = ((x237|x238)<<(x239%x240));

	if (t6 != 14907948187624118LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x257 = UINT16_MAX;
	static int32_t x260 = -1;
	int32_t t7 = 185806;

	t7 = ((x257|x258)<<(x259%x260));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x321 = 31769070182LL;
	static uint32_t x322 = 0U;
	uint8_t x323 = 0U;
	static int64_t x324 = INT64_MAX;
	volatile int64_t t8 = -62997273237070LL;

	t8 = ((x321|x322)<<(x323%x324));

	if (t8 != 31769070182LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x373 = -1;
	static uint64_t x374 = UINT64_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 3U;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x373|x374)<<(x375%x376));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x399 = INT32_MIN;
	volatile int32_t t10 = 78977;

	t10 = ((x397|x398)<<(x399%x400));

	if (t10 != 1868271) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x433 = UINT16_MAX;
	int16_t x434 = 986;
	static int32_t x435 = INT32_MIN;
	int16_t x436 = 8;
	volatile int32_t t11 = 755331;

	t11 = ((x433|x434)<<(x435%x436));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x450 = -389298392531338LL;

	t12 = ((x449|x450)<<(x451%x452));

	if (t12 != 18445965476925275372LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x453 = UINT8_MAX;
	uint32_t t13 = 1718921690U;

	t13 = ((x453|x454)<<(x455%x456));

	if (t13 != 255U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x469 = UINT64_MAX;
	volatile uint64_t x470 = 267161665LLU;
	uint32_t x471 = 810444945U;
	volatile uint32_t x472 = 29U;

	t14 = ((x469|x470)<<(x471%x472));

	if (t14 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x493 = UINT32_MAX;
	uint64_t x494 = 6005LLU;
	uint32_t x495 = 21U;
	volatile uint16_t x496 = UINT16_MAX;
	volatile uint64_t t15 = 1786034893788265653LLU;

	t15 = ((x493|x494)<<(x495%x496));

	if (t15 != 9007199252643840LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x497 = 124367U;
	uint32_t x498 = 129587U;
	static volatile uint16_t x499 = 2U;
	volatile uint32_t t16 = 4U;

	t16 = ((x497|x498)<<(x499%x500));

	if (t16 != 524284U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x501 = 0U;
	volatile uint64_t x502 = UINT64_MAX;
	int8_t x503 = 29;
	static uint32_t x504 = UINT32_MAX;
	uint64_t t17 = 188230384LLU;

	t17 = ((x501|x502)<<(x503%x504));

	if (t17 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x517 = UINT32_MAX;
	static uint64_t x518 = 263275862656LLU;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -1;
	volatile uint64_t t18 = 101232333LLU;

	t18 = ((x517|x518)<<(x519%x520));

	if (t18 != 266287972351LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x585 = INT16_MAX;
	int32_t x587 = 26080;
	int8_t x588 = INT8_MAX;
	static uint64_t t19 = 13804875LLU;

	t19 = ((x585|x586)<<(x587%x588));

	if (t19 != 3458729329448452096LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x657 = 107U;
	uint64_t x658 = 82LLU;
	volatile uint64_t t20 = 3081114764LLU;

	t20 = ((x657|x658)<<(x659%x660));

	if (t20 != 123LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x725 = 19U;
	int16_t x726 = INT16_MIN;
	static int32_t x727 = INT32_MAX;
	int16_t x728 = -1;
	uint32_t t21 = 50736U;

	t21 = ((x725|x726)<<(x727%x728));

	if (t21 != 4294934547U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x793 = UINT16_MAX;
	uint64_t x794 = 2736443288364911692LLU;
	int32_t x795 = INT32_MIN;
	int16_t x796 = -1;
	volatile uint64_t t22 = 13523321LLU;

	t22 = ((x793|x794)<<(x795%x796));

	if (t22 != 2736443288364974079LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x797 = 177309434464543LLU;
	volatile int16_t x799 = -1121;
	int8_t x800 = -1;
	uint64_t t23 = 179977747LLU;

	t23 = ((x797|x798)<<(x799%x800));

	if (t23 != 177309434465215LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x821 = UINT32_MAX;
	int16_t x822 = INT16_MIN;
	static int64_t x823 = INT64_MIN;
	volatile int16_t x824 = INT16_MIN;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x821|x822)<<(x823%x824));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x837 = UINT64_MAX;
	int64_t x838 = INT64_MIN;
	int16_t x840 = INT16_MIN;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x837|x838)<<(x839%x840));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x861 = INT64_MIN;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x861|x862)<<(x863%x864));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x870 = INT8_MAX;
	uint32_t x872 = UINT32_MAX;

	t27 = ((x869|x870)<<(x871%x872));

	if (t27 != 532676608) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x889 = 3LLU;
	volatile uint16_t x890 = UINT16_MAX;
	volatile uint8_t x891 = 0U;
	int64_t x892 = -1LL;
	uint64_t t28 = 20188LLU;

	t28 = ((x889|x890)<<(x891%x892));

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x941 = 1U;
	uint8_t x942 = UINT8_MAX;
	uint32_t x943 = 1U;
	uint64_t x944 = UINT64_MAX;
	volatile int32_t t29 = -1144496;

	t29 = ((x941|x942)<<(x943%x944));

	if (t29 != 510) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x945 = 538U;
	int8_t x946 = INT8_MIN;
	static uint8_t x947 = UINT8_MAX;
	int32_t x948 = -1;
	uint32_t t30 = 11334U;

	t30 = ((x945|x946)<<(x947%x948));

	if (t30 != 4294967194U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x958 = 468179;
	int32_t x959 = -1;
	static uint32_t x960 = 1U;
	volatile uint32_t t31 = 302188886U;

	t31 = ((x957|x958)<<(x959%x960));

	if (t31 != 9911511U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1009 = UINT64_MAX;
	static volatile uint32_t x1011 = 2118U;

	t32 = ((x1009|x1010)<<(x1011%x1012));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1034 = UINT64_MAX;
	static uint16_t x1035 = 63U;
	static int32_t x1036 = -1;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x1033|x1034)<<(x1035%x1036));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1117 = 12333U;
	volatile int16_t x1118 = INT16_MIN;
	int32_t x1119 = 86574423;
	int64_t x1120 = -1LL;
	uint32_t t34 = 45121470U;

	t34 = ((x1117|x1118)<<(x1119%x1120));

	if (t34 != 4294946861U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1157 = 22456578U;
	int64_t x1159 = INT64_MIN;
	int64_t x1160 = -1LL;
	volatile uint32_t t35 = 20955U;

	t35 = ((x1157|x1158)<<(x1159%x1160));

	if (t35 != 22478847U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1274 = UINT16_MAX;
	volatile int64_t x1275 = INT64_MIN;
	int32_t x1276 = -1;
	volatile int32_t t36 = 3564360;

	t36 = ((x1273|x1274)<<(x1275%x1276));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1305 = 3LLU;
	static uint16_t x1306 = 863U;
	volatile uint8_t x1308 = 125U;
	volatile uint64_t t37 = 6039598923212LLU;

	t37 = ((x1305|x1306)<<(x1307%x1308));

	if (t37 != 6904LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1341 = INT16_MAX;
	uint32_t x1342 = UINT32_MAX;
	uint64_t x1343 = 507LLU;
	uint8_t x1344 = 3U;
	uint32_t t38 = UINT32_MAX;

	t38 = ((x1341|x1342)<<(x1343%x1344));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x1361 = UINT32_MAX;
	uint32_t x1362 = 0U;
	int8_t x1363 = INT8_MIN;
	volatile int8_t x1364 = INT8_MIN;
	uint32_t t39 = UINT32_MAX;

	t39 = ((x1361|x1362)<<(x1363%x1364));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1369 = 0U;
	uint16_t x1370 = UINT16_MAX;
	static volatile int64_t x1371 = INT64_MAX;
	static int16_t x1372 = 124;
	volatile uint32_t t40 = 61U;

	t40 = ((x1369|x1370)<<(x1371%x1372));

	if (t40 != 8388480U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1373 = 1U;
	int8_t x1375 = 1;
	int16_t x1376 = INT16_MAX;

	t41 = ((x1373|x1374)<<(x1375%x1376));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1377 = 5U;
	volatile uint8_t x1378 = UINT8_MAX;
	volatile int32_t t42 = 34258562;

	t42 = ((x1377|x1378)<<(x1379%x1380));

	if (t42 != 1020) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1393 = INT8_MAX;
	uint32_t x1394 = 66282239U;
	int16_t x1395 = INT16_MAX;
	volatile uint16_t x1396 = 105U;

	t43 = ((x1393|x1394)<<(x1395%x1396));

	if (t43 != 4189159296U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1414 = -1;
	uint64_t x1415 = 1LLU;
	volatile int16_t x1416 = -1;
	uint32_t t44 = 217978U;

	t44 = ((x1413|x1414)<<(x1415%x1416));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1471 = -1;
	int16_t x1472 = -1;
	uint32_t t45 = 89960107U;

	t45 = ((x1469|x1470)<<(x1471%x1472));

	if (t45 != 39266687U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1497 = UINT8_MAX;
	int64_t x1498 = 7870045261LL;
	static volatile int16_t x1499 = 0;
	int16_t x1500 = INT16_MAX;
	int64_t t46 = 58334334LL;

	t46 = ((x1497|x1498)<<(x1499%x1500));

	if (t46 != 7870045439LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1605 = 5978U;
	uint16_t x1607 = 3U;
	int8_t x1608 = 12;

	t47 = ((x1605|x1606)<<(x1607%x1608));

	if (t47 != 48120U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1630 = 14818U;
	uint32_t x1631 = UINT32_MAX;
	volatile int16_t x1632 = 1;
	volatile uint32_t t48 = 223U;

	t48 = ((x1629|x1630)<<(x1631%x1632));

	if (t48 != 14818U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1657 = INT64_MIN;
	int16_t x1659 = -1;

	t49 = ((x1657|x1658)<<(x1659%x1660));

	if (t49 != 15645659722623459245LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1681 = UINT64_MAX;
	uint16_t x1682 = 2760U;
	int32_t x1684 = 1;

	t50 = ((x1681|x1682)<<(x1683%x1684));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1697 = -54LL;
	uint64_t x1698 = 1209263LLU;
	volatile int8_t x1699 = 17;
	int64_t x1700 = INT64_MAX;
	volatile uint64_t t51 = 176648325993515471LLU;

	t51 = ((x1697|x1698)<<(x1699%x1700));

	if (t51 != 18446744073707323392LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1753 = 6LLU;
	int64_t x1754 = -1LL;
	int16_t x1755 = -141;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x1753|x1754)<<(x1755%x1756));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x1757 = 2496U;
	uint8_t x1758 = UINT8_MAX;
	static int8_t x1759 = INT8_MIN;
	int64_t x1760 = -1LL;
	volatile int32_t t53 = 506670;

	t53 = ((x1757|x1758)<<(x1759%x1760));

	if (t53 != 2559) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1761 = UINT32_MAX;
	static int16_t x1763 = INT16_MIN;
	static volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x1761|x1762)<<(x1763%x1764));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1773 = -1;
	volatile uint32_t x1774 = 10624U;
	int8_t x1776 = INT8_MIN;

	t55 = ((x1773|x1774)<<(x1775%x1776));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1821 = UINT8_MAX;
	volatile int32_t x1824 = INT32_MAX;

	t56 = ((x1821|x1822)<<(x1823%x1824));

	if (t56 != 8355840) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x1829 = 49U;
	volatile uint64_t x1831 = UINT64_MAX;
	int8_t x1832 = -1;
	volatile uint32_t t57 = 129363916U;

	t57 = ((x1829|x1830)<<(x1831%x1832));

	if (t57 != 4294967217U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1881 = -44;
	uint32_t x1882 = UINT32_MAX;
	int8_t x1883 = 2;
	uint16_t x1884 = 1U;
	static volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x1881|x1882)<<(x1883%x1884));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1885 = 57;
	uint8_t x1886 = 0U;
	int8_t x1888 = INT8_MIN;
	static volatile int32_t t59 = 39;

	t59 = ((x1885|x1886)<<(x1887%x1888));

	if (t59 != 57) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1894 = INT64_MAX;
	static int64_t x1895 = INT64_MAX;
	int16_t x1896 = -83;

	t60 = ((x1893|x1894)<<(x1895%x1896));

	if (t60 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1933 = 7259U;
	static int64_t x1934 = 95190766LL;
	int8_t x1936 = INT8_MIN;
	volatile int64_t t61 = 2796415281024352944LL;

	t61 = ((x1933|x1934)<<(x1935%x1936));

	if (t61 != 95190783LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x1953 = 1200;
	static int16_t x1954 = 477;
	volatile int16_t x1955 = 0;
	int32_t x1956 = INT32_MIN;
	int32_t t62 = 213;

	t62 = ((x1953|x1954)<<(x1955%x1956));

	if (t62 != 1533) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x1961 = INT16_MAX;
	static uint64_t x1962 = UINT64_MAX;
	int16_t x1963 = 1;
	volatile uint32_t x1964 = 296U;
	uint64_t t63 = 84086291931283LLU;

	t63 = ((x1961|x1962)<<(x1963%x1964));

	if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1993 = UINT64_MAX;
	int8_t x1995 = INT8_MAX;
	int8_t x1996 = -1;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x1993|x1994)<<(x1995%x1996));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2037 = 57U;
	uint64_t x2038 = 1LLU;
	volatile int32_t x2039 = -1;
	uint32_t x2040 = 1U;
	uint64_t t65 = 7LLU;

	t65 = ((x2037|x2038)<<(x2039%x2040));

	if (t65 != 57LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2053 = UINT64_MAX;
	int16_t x2054 = 2030;
	int16_t x2055 = INT16_MIN;
	int64_t x2056 = -1LL;
	static uint64_t t66 = UINT64_MAX;

	t66 = ((x2053|x2054)<<(x2055%x2056));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2081 = UINT64_MAX;
	int16_t x2082 = INT16_MIN;
	uint32_t x2083 = 41U;
	uint32_t x2084 = 11U;
	volatile uint64_t t67 = 274976094LLU;

	t67 = ((x2081|x2082)<<(x2083%x2084));

	if (t67 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2093 = -7;
	static uint64_t x2094 = UINT64_MAX;
	volatile int32_t x2096 = INT32_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x2093|x2094)<<(x2095%x2096));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2134 = 0U;
	static int32_t x2135 = 2;
	static int32_t x2136 = -1;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x2133|x2134)<<(x2135%x2136));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2153 = 760U;
	int16_t x2154 = 309;
	uint8_t x2155 = UINT8_MAX;
	volatile int8_t x2156 = 15;
	int32_t t70 = 66;

	t70 = ((x2153|x2154)<<(x2155%x2156));

	if (t70 != 1021) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2171 = 5LL;
	static int16_t x2172 = 294;
	int32_t t71 = -175697;

	t71 = ((x2169|x2170)<<(x2171%x2172));

	if (t71 != 2097120) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2177 = 387;
	int8_t x2178 = INT8_MAX;
	uint8_t x2179 = 3U;
	int64_t x2180 = -320981LL;
	volatile int32_t t72 = -7;

	t72 = ((x2177|x2178)<<(x2179%x2180));

	if (t72 != 4088) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2229 = INT8_MAX;
	volatile uint8_t x2230 = 3U;
	volatile int16_t x2232 = 3;

	t73 = ((x2229|x2230)<<(x2231%x2232));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2245 = INT8_MAX;
	static int8_t x2246 = INT8_MAX;
	int32_t x2247 = INT32_MAX;
	static int64_t x2248 = -1LL;

	t74 = ((x2245|x2246)<<(x2247%x2248));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2253 = INT64_MAX;
	volatile uint32_t x2254 = UINT32_MAX;
	int8_t x2255 = INT8_MIN;
	int64_t t75 = INT64_MAX;

	t75 = ((x2253|x2254)<<(x2255%x2256));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2321 = 482LLU;
	int16_t x2322 = -7;
	volatile uint64_t t76 = 21520448864LLU;

	t76 = ((x2321|x2322)<<(x2323%x2324));

	if (t76 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x2326 = 12U;
	volatile int32_t x2328 = -1;
	static int32_t t77 = -4016747;

	t77 = ((x2325|x2326)<<(x2327%x2328));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2370 = 546;
	int16_t x2371 = 0;
	uint16_t x2372 = UINT16_MAX;
	static uint32_t t78 = 1951049U;

	t78 = ((x2369|x2370)<<(x2371%x2372));

	if (t78 != 2867U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x2381 = 610LLU;
	volatile int16_t x2382 = INT16_MAX;
	volatile int16_t x2383 = -1;
	int64_t x2384 = -1LL;

	t79 = ((x2381|x2382)<<(x2383%x2384));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x2405 = 16U;
	uint32_t x2406 = 2322U;
	volatile int16_t x2407 = 1;
	uint32_t t80 = 5066324U;

	t80 = ((x2405|x2406)<<(x2407%x2408));

	if (t80 != 4644U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2421 = 33694585981442935LLU;
	static uint8_t x2422 = UINT8_MAX;
	uint64_t t81 = 123LLU;

	t81 = ((x2421|x2422)<<(x2423%x2424));

	if (t81 != 17096518582386278400LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2453 = INT32_MAX;
	int32_t x2454 = 8878;
	int8_t x2456 = INT8_MIN;
	volatile int32_t t82 = INT32_MAX;

	t82 = ((x2453|x2454)<<(x2455%x2456));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2469 = 4264288885LL;
	uint16_t x2470 = 1U;
	static uint16_t x2471 = 19U;
	int16_t x2472 = -367;
	static int64_t t83 = -3201814LL;

	t83 = ((x2469|x2470)<<(x2471%x2472));

	if (t83 != 2235715490938880LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x2473 = UINT64_MAX;
	static int8_t x2474 = -1;
	uint64_t x2475 = UINT64_MAX;
	int64_t x2476 = INT64_MAX;
	uint64_t t84 = 8979504187342488169LLU;

	t84 = ((x2473|x2474)<<(x2475%x2476));

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x2485 = 151684LLU;
	static int32_t x2487 = -698;
	int8_t x2488 = 1;
	volatile uint64_t t85 = 5891049562055LLU;

	t85 = ((x2485|x2486)<<(x2487%x2488));

	if (t85 != 681708019613LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2517 = 5;
	int64_t x2518 = INT64_MAX;
	volatile uint8_t x2519 = 115U;
	volatile int32_t x2520 = -1;
	int64_t t86 = INT64_MAX;

	t86 = ((x2517|x2518)<<(x2519%x2520));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2537 = UINT8_MAX;
	uint64_t x2538 = 0LLU;
	uint16_t x2539 = 0U;
	volatile int32_t x2540 = -1;
	volatile uint64_t t87 = 8592149142997270LLU;

	t87 = ((x2537|x2538)<<(x2539%x2540));

	if (t87 != 255LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2541 = -29;
	uint64_t x2542 = UINT64_MAX;
	int16_t x2544 = -1;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = ((x2541|x2542)<<(x2543%x2544));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2549 = INT64_MIN;
	uint64_t x2550 = UINT64_MAX;
	uint64_t t89 = UINT64_MAX;

	t89 = ((x2549|x2550)<<(x2551%x2552));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x2601 = INT16_MAX;
	int8_t x2602 = INT8_MAX;
	static int64_t x2603 = INT64_MIN;
	static volatile int64_t x2604 = INT64_MIN;

	t90 = ((x2601|x2602)<<(x2603%x2604));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2631 = 2;
	volatile uint64_t x2632 = 4848LLU;
	volatile uint32_t t91 = 4223U;

	t91 = ((x2629|x2630)<<(x2631%x2632));

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2641 = 406148;
	uint32_t x2642 = 593565944U;
	static uint32_t x2643 = 1U;
	int8_t x2644 = INT8_MAX;
	uint32_t t92 = 435311U;

	t92 = ((x2641|x2642)<<(x2643%x2644));

	if (t92 != 1187935736U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2657 = 18806362782931LLU;
	static int32_t x2658 = INT32_MIN;
	int16_t x2659 = 0;
	static volatile int64_t x2660 = INT64_MAX;

	t93 = ((x2657|x2658)<<(x2659%x2660));

	if (t93 != 18446744072410545363LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2673 = INT32_MIN;
	uint32_t x2675 = 5U;

	t94 = ((x2673|x2674)<<(x2675%x2676));

	if (t94 != 49379136U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x2683 = 5;
	volatile uint64_t x2684 = 3368524462LLU;
	volatile uint32_t t95 = 127U;

	t95 = ((x2681|x2682)<<(x2683%x2684));

	if (t95 != 2097120U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2741 = 130428911779800LLU;
	int32_t x2742 = -1;
	int8_t x2743 = -1;
	int32_t x2744 = -1;

	t96 = ((x2741|x2742)<<(x2743%x2744));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2769 = 2;
	static uint64_t x2770 = 3790364866524031LLU;
	volatile int16_t x2772 = -1;
	uint64_t t97 = 0LLU;

	t97 = ((x2769|x2770)<<(x2771%x2772));

	if (t97 != 3790364866524031LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x2887 = 695;
	int16_t x2888 = -1;
	int32_t t98 = 14549;

	t98 = ((x2885|x2886)<<(x2887%x2888));

	if (t98 != 793) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2889 = INT16_MIN;
	int32_t x2891 = INT32_MAX;
	volatile int16_t x2892 = -1;

	t99 = ((x2889|x2890)<<(x2891%x2892));

	if (t99 != 4294934559U) { NG(); } else { ; }
	
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


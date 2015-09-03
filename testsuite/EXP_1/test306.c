#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = INT16_MAX;
int32_t x209 = -1;
static uint64_t x211 = UINT64_MAX;
uint32_t x255 = 85278073U;
uint16_t x256 = 9U;
int32_t x289 = INT32_MIN;
int64_t x446 = INT64_MAX;
volatile int64_t t6 = 1151190414349860805LL;
static uint8_t x456 = 14U;
static int8_t x597 = INT8_MAX;
static int8_t x598 = -28;
int64_t x605 = -1LL;
static uint64_t x708 = 55LLU;
volatile int16_t x709 = INT16_MIN;
int32_t x718 = INT32_MAX;
int8_t x748 = 23;
static int8_t x800 = 0;
int8_t x943 = INT8_MIN;
static volatile int32_t t21 = -19429725;
static uint32_t x949 = 61U;
uint32_t x972 = 45U;
int64_t x982 = -1453344759024098302LL;
volatile int64_t t24 = 17677783802064805LL;
static uint64_t x1141 = 7985466674LLU;
uint32_t x1142 = UINT32_MAX;
int32_t x1143 = 12159004;
int32_t x1144 = 2;
static volatile int16_t x1193 = -1;
volatile uint64_t t31 = 477629717786LLU;
int64_t x1414 = -1LL;
int32_t x1415 = INT32_MIN;
volatile int64_t t33 = -603829144525LL;
int16_t x1518 = -233;
volatile int32_t x1520 = 3;
static int16_t x1547 = INT16_MAX;
volatile int64_t t36 = -14198554235134LL;
uint8_t x1556 = 2U;
static volatile int32_t t39 = -8866041;
static uint8_t x1625 = 0U;
volatile uint64_t t40 = 163458159052LLU;
int64_t x1633 = INT64_MAX;
volatile uint64_t t43 = 2191983472542803LLU;
uint64_t x1646 = 15140LLU;
volatile uint64_t t44 = 452159751612634023LLU;
volatile int16_t x1661 = -1;
static uint32_t x1663 = 37U;
int8_t x1665 = 0;
static int16_t x1666 = -9803;
volatile uint64_t t47 = 412817512232LLU;
static volatile int8_t x1672 = 0;
static uint8_t x1680 = 3U;
static int64_t x1745 = INT64_MAX;
uint64_t t52 = 41075184021417898LLU;
int32_t x1825 = INT32_MIN;
int8_t x1828 = 2;
volatile uint8_t x1854 = UINT8_MAX;
uint16_t x1855 = 2U;
volatile int64_t t55 = -1875349791559624913LL;
int8_t x1939 = 1;
volatile int16_t x2016 = 1;
volatile int64_t t57 = -5192LL;
int8_t x2040 = 0;
uint16_t x2225 = UINT16_MAX;
uint32_t x2227 = UINT32_MAX;
volatile int64_t t61 = -240975LL;
static int8_t x2288 = 1;
int32_t x2310 = INT32_MAX;
int16_t x2312 = 0;
volatile int8_t x2591 = INT8_MIN;
uint16_t x2672 = 6U;
static uint32_t x2678 = 436U;
uint64_t x2703 = 0LLU;
int8_t x2750 = INT8_MAX;
uint8_t x2815 = 28U;
volatile uint16_t x2821 = 6128U;
volatile int8_t x2824 = 7;
volatile int32_t x2899 = -5;
uint32_t x2913 = 5964U;
volatile int64_t x2972 = 21LL;
uint64_t t82 = 77LLU;
int16_t x3098 = 1;
uint16_t x3151 = 52U;
static uint64_t t84 = 2745110220LLU;
volatile uint32_t x3170 = 161535U;
uint16_t x3171 = 7U;
static uint16_t x3172 = 10U;
volatile int32_t x3225 = INT32_MIN;
int64_t x3226 = INT64_MIN;
int64_t x3227 = INT64_MAX;
volatile int8_t x3228 = 18;
uint16_t x3242 = 26U;
uint16_t x3272 = 1U;
volatile uint64_t t89 = 177LLU;
int16_t x3377 = INT16_MAX;
int64_t x3405 = -23743177697862LL;
volatile uint16_t x3406 = 595U;
volatile int16_t x3435 = 8076;
int16_t x3490 = INT16_MAX;
int64_t x3492 = 3LL;
volatile uint16_t x3501 = 0U;
int16_t x3502 = INT16_MIN;
volatile uint64_t t97 = 32LLU;
int16_t x3639 = -49;
uint32_t x3713 = 785623882U;


void f0(void) {
	static uint8_t x21 = UINT8_MAX;
	static uint16_t x22 = UINT16_MAX;
	uint16_t x24 = 12U;
	volatile int32_t t0 = 2701397;

	t0 = (((x21-x22)&x23)>>x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x210 = 18U;
	int16_t x212 = 6;
	volatile uint64_t t1 = 1672261038821LLU;

	t1 = (((x209-x210)&x211)>>x212);

	if (t1 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x237 = 30;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = 55U;
	volatile uint64_t t2 = 5295LLU;

	t2 = (((x237-x238)&x239)>>x240);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x253 = 868254;
	int16_t x254 = 4;
	uint32_t t3 = 373U;

	t3 = (((x253-x254)&x255)>>x256);

	if (t3 != 670U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x290 = -1;
	static volatile int32_t x291 = 12;
	uint16_t x292 = 15U;
	int32_t t4 = 586325;

	t4 = (((x289-x290)&x291)>>x292);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x433 = -29480;
	static uint64_t x434 = UINT64_MAX;
	int64_t x435 = INT64_MIN;
	uint8_t x436 = 0U;
	uint64_t t5 = 190673139523547734LLU;

	t5 = (((x433-x434)&x435)>>x436);

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x445 = -1;
	volatile int16_t x447 = INT16_MAX;
	static uint16_t x448 = 39U;

	t6 = (((x445-x446)&x447)>>x448);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x453 = -1;
	int16_t x454 = INT16_MAX;
	static volatile int32_t x455 = INT32_MAX;
	int32_t t7 = -48781;

	t7 = (((x453-x454)&x455)>>x456);

	if (t7 != 131070) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x581 = -2337075;
	int64_t x582 = -22013778081281578LL;
	int8_t x583 = INT8_MIN;
	int16_t x584 = 2;
	int64_t t8 = -6026205491844521LL;

	t8 = (((x581-x582)&x583)>>x584);

	if (t8 != 5503444519736096LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x599 = INT16_MAX;
	volatile uint16_t x600 = 1U;
	volatile int32_t t9 = -324;

	t9 = (((x597-x598)&x599)>>x600);

	if (t9 != 77) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = 2U;
	volatile int64_t t10 = 5870261LL;

	t10 = (((x605-x606)&x607)>>x608);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x705 = INT16_MAX;
	uint64_t x706 = UINT64_MAX;
	uint32_t x707 = 12231U;
	uint64_t t11 = 8313817LLU;

	t11 = (((x705-x706)&x707)>>x708);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x710 = -10055718982LL;
	int64_t x711 = 502393639LL;
	int16_t x712 = 4;
	static int64_t t12 = 65889813LL;

	t12 = (((x709-x710)&x711)>>x712);

	if (t12 != 22354048LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x717 = INT64_MAX;
	int8_t x719 = 0;
	int16_t x720 = 26;
	volatile int64_t t13 = -22099526536LL;

	t13 = (((x717-x718)&x719)>>x720);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x721 = INT8_MIN;
	static int16_t x722 = -281;
	static uint8_t x723 = UINT8_MAX;
	int64_t x724 = 3LL;
	static volatile int32_t t14 = -167;

	t14 = (((x721-x722)&x723)>>x724);

	if (t14 != 19) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x733 = -1;
	int16_t x734 = -1;
	uint16_t x735 = 599U;
	uint8_t x736 = 15U;
	volatile int32_t t15 = 10823;

	t15 = (((x733-x734)&x735)>>x736);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x737 = 3267791U;
	uint16_t x738 = UINT16_MAX;
	uint16_t x739 = 5U;
	uint64_t x740 = 11LLU;
	static volatile uint32_t t16 = 122U;

	t16 = (((x737-x738)&x739)>>x740);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x745 = 246LLU;
	int64_t x746 = INT64_MIN;
	uint8_t x747 = UINT8_MAX;
	volatile uint64_t t17 = 3868289143673826LLU;

	t17 = (((x745-x746)&x747)>>x748);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x797 = INT16_MIN;
	static int32_t x798 = -1;
	static int64_t x799 = INT64_MAX;
	volatile int64_t t18 = 65605LL;

	t18 = (((x797-x798)&x799)>>x800);

	if (t18 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x869 = INT64_MAX;
	static uint32_t x870 = 15U;
	volatile uint32_t x871 = 1293932390U;
	uint8_t x872 = 0U;
	int64_t t19 = 478LL;

	t19 = (((x869-x870)&x871)>>x872);

	if (t19 != 1293932384LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x889 = 119U;
	int32_t x890 = -1;
	int64_t x891 = INT64_MIN;
	uint8_t x892 = 23U;
	volatile int64_t t20 = 50723166876LL;

	t20 = (((x889-x890)&x891)>>x892);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x941 = 13;
	int16_t x942 = -1;
	uint8_t x944 = 0U;

	t21 = (((x941-x942)&x943)>>x944);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x950 = INT16_MIN;
	volatile int8_t x951 = INT8_MAX;
	uint8_t x952 = 22U;
	uint32_t t22 = 7813U;

	t22 = (((x949-x950)&x951)>>x952);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x969 = INT64_MIN;
	static uint64_t x970 = UINT64_MAX;
	static int32_t x971 = 0;
	volatile uint64_t t23 = 6LLU;

	t23 = (((x969-x970)&x971)>>x972);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x981 = -1;
	volatile uint32_t x983 = 310363044U;
	uint16_t x984 = 1U;

	t24 = (((x981-x982)&x983)>>x984);

	if (t24 != 136790482LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1025 = UINT32_MAX;
	static volatile int64_t x1026 = INT64_MAX;
	uint16_t x1027 = 4592U;
	volatile int8_t x1028 = 1;
	volatile int64_t t25 = -7LL;

	t25 = (((x1025-x1026)&x1027)>>x1028);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1033 = -1;
	static int8_t x1034 = INT8_MIN;
	uint64_t x1035 = UINT64_MAX;
	int8_t x1036 = 0;
	static uint64_t t26 = 29121905334178474LLU;

	t26 = (((x1033-x1034)&x1035)>>x1036);

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1065 = UINT64_MAX;
	int8_t x1066 = INT8_MAX;
	int8_t x1067 = -4;
	static int8_t x1068 = 1;
	uint64_t t27 = 1057209635943785LLU;

	t27 = (((x1065-x1066)&x1067)>>x1068);

	if (t27 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t t28 = 5366660LLU;

	t28 = (((x1141-x1142)&x1143)>>x1144);

	if (t28 != 3023364LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1194 = INT8_MIN;
	int16_t x1195 = 13;
	uint16_t x1196 = 29U;
	volatile int32_t t29 = 19805;

	t29 = (((x1193-x1194)&x1195)>>x1196);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1229 = 47;
	int8_t x1230 = 0;
	uint32_t x1231 = UINT32_MAX;
	uint32_t x1232 = 0U;
	volatile uint32_t t30 = 20U;

	t30 = (((x1229-x1230)&x1231)>>x1232);

	if (t30 != 47U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1253 = -1;
	uint64_t x1254 = 9282967LLU;
	int8_t x1255 = -1;
	int8_t x1256 = 1;

	t31 = (((x1253-x1254)&x1255)>>x1256);

	if (t31 != 9223372036850134324LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1345 = INT64_MAX;
	volatile int64_t x1346 = 17810892LL;
	uint64_t x1347 = 4LLU;
	uint8_t x1348 = 1U;
	uint64_t t32 = 1734036714199LLU;

	t32 = (((x1345-x1346)&x1347)>>x1348);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1413 = -1;
	uint8_t x1416 = 3U;

	t33 = (((x1413-x1414)&x1415)>>x1416);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1417 = INT32_MIN;
	int64_t x1418 = -236878864439LL;
	int8_t x1419 = 1;
	int32_t x1420 = 54;
	int64_t t34 = 2285115853719LL;

	t34 = (((x1417-x1418)&x1419)>>x1420);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1517 = 14U;
	static volatile int8_t x1519 = -51;
	int32_t t35 = -1;

	t35 = (((x1517-x1518)&x1519)>>x1520);

	if (t35 != 24) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1545 = 0;
	int64_t x1546 = 56596LL;
	uint64_t x1548 = 1LLU;

	t36 = (((x1545-x1546)&x1547)>>x1548);

	if (t36 != 4470LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1553 = 496;
	uint32_t x1554 = 26017U;
	int16_t x1555 = INT16_MIN;
	uint32_t t37 = 1U;

	t37 = (((x1553-x1554)&x1555)>>x1556);

	if (t37 != 1073733632U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1585 = -1534LL;
	uint32_t x1586 = UINT32_MAX;
	volatile uint32_t x1587 = UINT32_MAX;
	int32_t x1588 = 1;
	int64_t t38 = 985603LL;

	t38 = (((x1585-x1586)&x1587)>>x1588);

	if (t38 != 2147482881LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1613 = INT8_MIN;
	static int32_t x1614 = -3928777;
	volatile int8_t x1615 = 12;
	static int16_t x1616 = 1;

	t39 = (((x1613-x1614)&x1615)>>x1616);

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1626 = 0U;
	volatile uint64_t x1627 = 2799825576954989LLU;
	uint16_t x1628 = 23U;

	t40 = (((x1625-x1626)&x1627)>>x1628);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1629 = 702550768365135051LLU;
	uint64_t x1630 = 94LLU;
	volatile int8_t x1631 = -1;
	volatile uint16_t x1632 = 14U;
	volatile uint64_t t41 = 35565299658144026LLU;

	t41 = (((x1629-x1630)&x1631)>>x1632);

	if (t41 != 42880295920723LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1634 = 731U;
	uint16_t x1635 = 1U;
	uint16_t x1636 = 0U;
	int64_t t42 = -159LL;

	t42 = (((x1633-x1634)&x1635)>>x1636);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1641 = 31401LLU;
	int8_t x1642 = -1;
	uint8_t x1643 = 0U;
	uint8_t x1644 = 1U;

	t43 = (((x1641-x1642)&x1643)>>x1644);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1645 = INT16_MAX;
	int8_t x1647 = INT8_MIN;
	uint16_t x1648 = 4U;

	t44 = (((x1645-x1646)&x1647)>>x1648);

	if (t44 != 1096LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x1653 = UINT32_MAX;
	int32_t x1654 = INT32_MIN;
	static uint32_t x1655 = 31010780U;
	volatile uint8_t x1656 = 2U;
	static volatile uint32_t t45 = 64021767U;

	t45 = (((x1653-x1654)&x1655)>>x1656);

	if (t45 != 7752695U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1662 = -1;
	volatile uint16_t x1664 = 1U;
	uint32_t t46 = 15682U;

	t46 = (((x1661-x1662)&x1663)>>x1664);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x1667 = 14382892LLU;
	static int8_t x1668 = 0;

	t47 = (((x1665-x1666)&x1667)>>x1668);

	if (t47 != 9736LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1669 = 310912U;
	int32_t x1670 = INT32_MIN;
	static int32_t x1671 = INT32_MIN;
	uint32_t t48 = 0U;

	t48 = (((x1669-x1670)&x1671)>>x1672);

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1677 = -862LL;
	int8_t x1678 = -4;
	int16_t x1679 = INT16_MAX;
	volatile int64_t t49 = 12LL;

	t49 = (((x1677-x1678)&x1679)>>x1680);

	if (t49 != 3988LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1746 = UINT16_MAX;
	int32_t x1747 = INT32_MIN;
	uint8_t x1748 = 28U;
	int64_t t50 = 1292033582527977LL;

	t50 = (((x1745-x1746)&x1747)>>x1748);

	if (t50 != 34359738360LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1777 = INT32_MIN;
	int8_t x1778 = -1;
	int8_t x1779 = 42;
	volatile uint16_t x1780 = 31U;
	int32_t t51 = -3;

	t51 = (((x1777-x1778)&x1779)>>x1780);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1793 = INT32_MIN;
	int16_t x1794 = INT16_MIN;
	uint64_t x1795 = UINT64_MAX;
	uint32_t x1796 = 1U;

	t52 = (((x1793-x1794)&x1795)>>x1796);

	if (t52 != 9223372035781050368LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1826 = UINT32_MAX;
	int8_t x1827 = INT8_MIN;
	static volatile uint32_t t53 = 70U;

	t53 = (((x1825-x1826)&x1827)>>x1828);

	if (t53 != 536870912U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1853 = UINT64_MAX;
	int8_t x1856 = 0;
	static uint64_t t54 = 110747095573124986LLU;

	t54 = (((x1853-x1854)&x1855)>>x1856);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1925 = -1LL;
	volatile int32_t x1926 = -1;
	int32_t x1927 = -202845;
	uint16_t x1928 = 41U;

	t55 = (((x1925-x1926)&x1927)>>x1928);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1937 = -1LL;
	volatile uint32_t x1938 = UINT32_MAX;
	uint8_t x1940 = 35U;
	int64_t t56 = 4135287492139451827LL;

	t56 = (((x1937-x1938)&x1939)>>x1940);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2013 = 1083062114U;
	volatile int64_t x2014 = 74466LL;
	uint32_t x2015 = UINT32_MAX;

	t57 = (((x2013-x2014)&x2015)>>x2016);

	if (t57 != 541493824LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2037 = INT16_MAX;
	int16_t x2038 = INT16_MIN;
	int32_t x2039 = INT32_MIN;
	static int32_t t58 = 0;

	t58 = (((x2037-x2038)&x2039)>>x2040);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2185 = 813694U;
	uint64_t x2186 = UINT64_MAX;
	int16_t x2187 = -1;
	static uint16_t x2188 = 1U;
	static volatile uint64_t t59 = 598LLU;

	t59 = (((x2185-x2186)&x2187)>>x2188);

	if (t59 != 406847LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2226 = 15;
	int16_t x2228 = 0;
	volatile uint32_t t60 = 3112U;

	t60 = (((x2225-x2226)&x2227)>>x2228);

	if (t60 != 65520U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2257 = 882675351LL;
	int32_t x2258 = INT32_MIN;
	volatile uint8_t x2259 = 0U;
	uint32_t x2260 = 60U;

	t61 = (((x2257-x2258)&x2259)>>x2260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2285 = INT16_MAX;
	int64_t x2286 = -1LL;
	uint32_t x2287 = 996680030U;
	static int64_t t62 = -124755815741993LL;

	t62 = (((x2285-x2286)&x2287)>>x2288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2309 = INT16_MAX;
	uint16_t x2311 = 25U;
	volatile int32_t t63 = 54544;

	t63 = (((x2309-x2310)&x2311)>>x2312);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2417 = 2864140923403086LLU;
	int64_t x2418 = INT64_MAX;
	int64_t x2419 = -1945952693724609LL;
	uint16_t x2420 = 2U;
	uint64_t t64 = 822LLU;

	t64 = (((x2417-x2418)&x2419)>>x2420);

	if (t64 != 2306407104330864259LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2429 = -11662522LL;
	int32_t x2430 = INT32_MIN;
	int8_t x2431 = 2;
	static volatile uint16_t x2432 = 2U;
	volatile int64_t t65 = 1125269575338561189LL;

	t65 = (((x2429-x2430)&x2431)>>x2432);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2565 = 5580432836LLU;
	int8_t x2566 = -10;
	uint8_t x2567 = 27U;
	volatile int16_t x2568 = 2;
	uint64_t t66 = 26037785055LLU;

	t66 = (((x2565-x2566)&x2567)>>x2568);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x2589 = 7;
	volatile int32_t x2590 = 0;
	static volatile uint8_t x2592 = 0U;
	int32_t t67 = 12;

	t67 = (((x2589-x2590)&x2591)>>x2592);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2629 = INT16_MIN;
	uint16_t x2630 = 27U;
	static uint64_t x2631 = 330330853533638050LLU;
	int16_t x2632 = 26;
	uint64_t t68 = 665793LLU;

	t68 = (((x2629-x2630)&x2631)>>x2632);

	if (t68 != 4922313295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2669 = INT64_MAX;
	static int64_t x2670 = INT64_MAX;
	int64_t x2671 = INT64_MIN;
	volatile int64_t t69 = -1635126800LL;

	t69 = (((x2669-x2670)&x2671)>>x2672);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2677 = 113U;
	int64_t x2679 = INT64_MIN;
	uint8_t x2680 = 2U;
	int64_t t70 = -4310405290986LL;

	t70 = (((x2677-x2678)&x2679)>>x2680);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2701 = -1;
	uint8_t x2702 = 47U;
	uint16_t x2704 = 13U;
	uint64_t t71 = 71683704906LLU;

	t71 = (((x2701-x2702)&x2703)>>x2704);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2749 = UINT8_MAX;
	uint64_t x2751 = 1613130910164056461LLU;
	volatile uint16_t x2752 = 52U;
	volatile uint64_t t72 = 411213003LLU;

	t72 = (((x2749-x2750)&x2751)>>x2752);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2813 = -54566562LL;
	int64_t x2814 = -362597261LL;
	volatile int16_t x2816 = 1;
	static volatile int64_t t73 = 1229368953502LL;

	t73 = (((x2813-x2814)&x2815)>>x2816);

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2822 = INT8_MIN;
	volatile int16_t x2823 = -40;
	volatile int32_t t74 = 420;

	t74 = (((x2821-x2822)&x2823)>>x2824);

	if (t74 != 48) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x2885 = -1LL;
	int8_t x2886 = -2;
	int8_t x2887 = INT8_MIN;
	static int64_t x2888 = 0LL;
	volatile int64_t t75 = -380225LL;

	t75 = (((x2885-x2886)&x2887)>>x2888);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2897 = 3603U;
	int8_t x2898 = INT8_MIN;
	int32_t x2900 = 0;
	volatile int32_t t76 = 42296279;

	t76 = (((x2897-x2898)&x2899)>>x2900);

	if (t76 != 3731) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2914 = -1;
	int16_t x2915 = INT16_MIN;
	volatile uint8_t x2916 = 0U;
	volatile uint32_t t77 = 164364U;

	t77 = (((x2913-x2914)&x2915)>>x2916);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2937 = -1LL;
	volatile int16_t x2938 = INT16_MIN;
	uint64_t x2939 = 832LLU;
	uint8_t x2940 = 40U;
	volatile uint64_t t78 = 27227532817918LLU;

	t78 = (((x2937-x2938)&x2939)>>x2940);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2969 = INT8_MIN;
	int8_t x2970 = INT8_MAX;
	uint64_t x2971 = 194163LLU;
	volatile uint64_t t79 = 3LLU;

	t79 = (((x2969-x2970)&x2971)>>x2972);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2985 = 15U;
	uint8_t x2986 = UINT8_MAX;
	volatile int64_t x2987 = INT64_MAX;
	int8_t x2988 = 3;
	int64_t t80 = -5LL;

	t80 = (((x2985-x2986)&x2987)>>x2988);

	if (t80 != 1152921504606846946LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x3053 = INT64_MIN;
	volatile int32_t x3054 = 0;
	uint16_t x3055 = 54U;
	static uint8_t x3056 = 0U;
	volatile int64_t t81 = -27157425616524733LL;

	t81 = (((x3053-x3054)&x3055)>>x3056);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3077 = 937803637263299LLU;
	static volatile int16_t x3078 = INT16_MIN;
	uint8_t x3079 = UINT8_MAX;
	static volatile uint16_t x3080 = 13U;

	t82 = (((x3077-x3078)&x3079)>>x3080);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x3097 = UINT32_MAX;
	uint16_t x3099 = 47U;
	int8_t x3100 = 13;
	volatile uint32_t t83 = 148210U;

	t83 = (((x3097-x3098)&x3099)>>x3100);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3149 = UINT64_MAX;
	uint8_t x3150 = 15U;
	static uint16_t x3152 = 0U;

	t84 = (((x3149-x3150)&x3151)>>x3152);

	if (t84 != 48LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3169 = -403;
	static volatile uint32_t t85 = 16U;

	t85 = (((x3169-x3170)&x3171)>>x3172);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3209 = -5LL;
	int32_t x3210 = INT32_MIN;
	int32_t x3211 = -17561132;
	static int16_t x3212 = 0;
	static int64_t t86 = -144386097LL;

	t86 = (((x3209-x3210)&x3211)>>x3212);

	if (t86 != 2129922512LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t t87 = 60881LL;

	t87 = (((x3225-x3226)&x3227)>>x3228);

	if (t87 != 35184372080640LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3241 = UINT32_MAX;
	int64_t x3243 = INT64_MIN;
	int16_t x3244 = 0;
	int64_t t88 = 12032171509072974LL;

	t88 = (((x3241-x3242)&x3243)>>x3244);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3269 = 1;
	uint64_t x3270 = 181LLU;
	int16_t x3271 = 1;

	t89 = (((x3269-x3270)&x3271)>>x3272);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x3313 = UINT64_MAX;
	static int16_t x3314 = INT16_MIN;
	volatile int32_t x3315 = INT32_MIN;
	int32_t x3316 = 1;
	volatile uint64_t t90 = 101810LLU;

	t90 = (((x3313-x3314)&x3315)>>x3316);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3317 = 48U;
	int8_t x3318 = INT8_MIN;
	int16_t x3319 = INT16_MIN;
	volatile int8_t x3320 = 1;
	volatile int32_t t91 = 534009;

	t91 = (((x3317-x3318)&x3319)>>x3320);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x3378 = -4;
	int64_t x3379 = INT64_MIN;
	static uint16_t x3380 = 3U;
	int64_t t92 = -1639763375032LL;

	t92 = (((x3377-x3378)&x3379)>>x3380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x3407 = 15;
	uint16_t x3408 = 12U;
	int64_t t93 = 9LL;

	t93 = (((x3405-x3406)&x3407)>>x3408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x3433 = 60769U;
	int32_t x3434 = 1020134316;
	int8_t x3436 = 4;
	uint32_t t94 = 36U;

	t94 = (((x3433-x3434)&x3435)>>x3436);

	if (t94 != 152U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3489 = INT16_MAX;
	uint16_t x3491 = 0U;
	static volatile int32_t t95 = -1969142;

	t95 = (((x3489-x3490)&x3491)>>x3492);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3503 = -21;
	uint16_t x3504 = 1U;
	int32_t t96 = 230;

	t96 = (((x3501-x3502)&x3503)>>x3504);

	if (t96 != 16384) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3589 = -3334;
	static uint64_t x3590 = UINT64_MAX;
	volatile int64_t x3591 = 9LL;
	static int8_t x3592 = 3;

	t97 = (((x3589-x3590)&x3591)>>x3592);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3637 = UINT32_MAX;
	int8_t x3638 = INT8_MIN;
	uint8_t x3640 = 5U;
	volatile uint32_t t98 = 5117472U;

	t98 = (((x3637-x3638)&x3639)>>x3640);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3714 = -704LL;
	int8_t x3715 = -1;
	uint8_t x3716 = 14U;
	int64_t t99 = 26725263LL;

	t99 = (((x3713-x3714)&x3715)>>x3716);

	if (t99 != 47950LL) { NG(); } else { ; }
	
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


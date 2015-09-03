#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x81 = -10;
uint64_t x82 = UINT64_MAX;
static volatile uint64_t t0 = 221187762665LLU;
volatile uint8_t x144 = 13U;
uint8_t x218 = UINT8_MAX;
static int16_t x219 = INT16_MAX;
static int16_t x220 = 3;
int32_t x339 = -1;
uint16_t x356 = 3U;
uint8_t x434 = UINT8_MAX;
volatile int64_t t8 = 51636021091171LL;
uint8_t x652 = 1U;
static int32_t x691 = INT32_MIN;
volatile uint16_t x692 = 9U;
int64_t t14 = -7706545996694581LL;
uint64_t x849 = 3LLU;
uint64_t t15 = 103LLU;
static volatile uint16_t x853 = 778U;
static int8_t x854 = 1;
volatile uint16_t x856 = 1U;
int64_t x870 = 49086611326964LL;
volatile uint8_t x884 = 5U;
uint8_t x928 = 2U;
volatile int8_t x935 = -1;
volatile int8_t x955 = INT8_MAX;
static volatile uint64_t t23 = 575987449565047LLU;
int16_t x999 = INT16_MIN;
uint32_t x1003 = 79018U;
volatile int16_t x1004 = 0;
int32_t x1009 = INT32_MIN;
int32_t x1011 = INT32_MIN;
uint64_t x1012 = 1LLU;
int8_t x1050 = INT8_MIN;
int64_t t30 = 32106881LL;
int8_t x1067 = INT8_MIN;
static int64_t t33 = 12619340LL;
int8_t x1227 = 1;
static uint8_t x1314 = 0U;
volatile int16_t x1316 = 4;
uint32_t x1402 = 18U;
int64_t t37 = -239LL;
volatile int64_t x1508 = 4LL;
int64_t t39 = -103LL;
int32_t x1539 = INT32_MAX;
volatile uint64_t x1541 = 60LLU;
uint64_t x1603 = 15LLU;
static volatile int16_t x1638 = INT16_MAX;
uint8_t x1654 = UINT8_MAX;
int64_t t46 = 8978945202224590LL;
uint64_t x1699 = 34938502391093073LLU;
static uint64_t x1712 = 0LLU;
volatile int8_t x1734 = INT8_MIN;
uint8_t x1736 = 3U;
int64_t x1759 = -1LL;
uint16_t x1942 = 6383U;
int64_t x1943 = INT64_MAX;
static int32_t x2112 = 0;
uint32_t x2119 = 12U;
static volatile int64_t t58 = 30055266936839LL;
volatile int32_t t59 = 1;
uint16_t x2144 = 26U;
int16_t x2170 = INT16_MAX;
volatile uint16_t x2208 = 0U;
static int8_t x2241 = INT8_MIN;
volatile int16_t x2243 = INT16_MIN;
uint8_t x2261 = 63U;
int64_t x2262 = -1LL;
static int8_t x2273 = INT8_MAX;
int64_t x2274 = INT64_MAX;
static int64_t t67 = -153325670587LL;
int16_t x2293 = INT16_MIN;
static uint32_t x2319 = 2028211U;
uint8_t x2397 = 1U;
uint64_t x2399 = 34397079966LLU;
volatile uint64_t t73 = 101550LLU;
volatile uint64_t x2546 = 2LLU;
int32_t x2626 = INT32_MIN;
int64_t x2713 = -1LL;
volatile uint8_t x2773 = 53U;
volatile int16_t x2774 = INT16_MIN;
int64_t x2775 = INT64_MAX;
int64_t t83 = -8065LL;
int64_t x2825 = 3788126897476219LL;
int64_t x2826 = -1LL;
volatile int64_t t87 = -28658LL;
static int32_t x2833 = INT32_MAX;
uint16_t x2834 = 4U;
static volatile int32_t t88 = 6;
static int16_t x3055 = INT16_MIN;
uint32_t x3097 = 66335746U;
uint64_t x3099 = 907911026LLU;
int8_t x3123 = -1;
uint64_t x3153 = 5710LLU;
static int8_t x3154 = INT8_MAX;
volatile uint32_t x3166 = 553995U;
volatile uint16_t x3168 = 9U;
volatile uint32_t t97 = 292074976U;
uint64_t x3191 = UINT64_MAX;
static int32_t x3282 = 544;


void f0(void) {
	uint8_t x83 = 14U;
	int64_t x84 = 1LL;

	t0 = (((x81&x82)%x83)<<x84);

	if (t0 != 12LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x141 = 0U;
	volatile int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	int64_t t1 = -624763LL;

	t1 = (((x141&x142)%x143)<<x144);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x217 = 12;
	int32_t t2 = -117733738;

	t2 = (((x217&x218)%x219)<<x220);

	if (t2 != 96) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x225 = 5U;
	int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 3U;
	int32_t t3 = 1089;

	t3 = (((x225&x226)%x227)<<x228);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x337 = 1795U;
	volatile int32_t x338 = INT32_MAX;
	volatile int64_t x340 = 10LL;
	volatile uint32_t t4 = 120262U;

	t4 = (((x337&x338)%x339)<<x340);

	if (t4 != 1838080U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = INT64_MIN;
	static int64_t x355 = -1LL;
	static volatile int64_t t5 = -185703LL;

	t5 = (((x353&x354)%x355)<<x356);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x373 = 2U;
	static int64_t x374 = INT64_MIN;
	volatile uint8_t x375 = 3U;
	int8_t x376 = 1;
	int64_t t6 = -14560983009LL;

	t6 = (((x373&x374)%x375)<<x376);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x377 = -37;
	int16_t x378 = INT16_MAX;
	int32_t x379 = 4;
	uint8_t x380 = 8U;
	int32_t t7 = -1422;

	t7 = (((x377&x378)%x379)<<x380);

	if (t7 != 768) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x433 = -1;
	int64_t x435 = -1LL;
	uint16_t x436 = 14U;

	t8 = (((x433&x434)%x435)<<x436);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x649 = INT32_MAX;
	int8_t x650 = -1;
	int16_t x651 = INT16_MIN;
	int32_t t9 = 6367;

	t9 = (((x649&x650)%x651)<<x652);

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x673 = INT8_MIN;
	uint64_t x674 = UINT64_MAX;
	int16_t x675 = INT16_MAX;
	uint32_t x676 = 7U;
	volatile uint64_t t10 = 1145539518579801845LLU;

	t10 = (((x673&x674)%x675)<<x676);

	if (t10 != 4179840LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x677 = -1;
	uint32_t x678 = 19U;
	static uint64_t x679 = UINT64_MAX;
	volatile int8_t x680 = 1;
	static volatile uint64_t t11 = 500708607100436LLU;

	t11 = (((x677&x678)%x679)<<x680);

	if (t11 != 38LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x685 = 15554973372864LL;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = INT64_MAX;
	volatile uint32_t x688 = 21U;
	volatile uint64_t t12 = 4517924367970389LLU;

	t12 = (((x685&x686)%x687)<<x688);

	if (t12 != 14174399445138931712LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x689 = INT64_MAX;
	static int64_t x690 = INT64_MIN;
	int64_t t13 = 40254038141LL;

	t13 = (((x689&x690)%x691)<<x692);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x737 = INT64_MIN;
	uint8_t x738 = 1U;
	static int64_t x739 = 15051399774809621LL;
	int8_t x740 = 0;

	t14 = (((x737&x738)%x739)<<x740);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x850 = -4;
	uint32_t x851 = 523544U;
	volatile uint8_t x852 = 7U;

	t15 = (((x849&x850)%x851)<<x852);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x855 = INT16_MIN;
	int32_t t16 = 2609;

	t16 = (((x853&x854)%x855)<<x856);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x857 = -86;
	int64_t x858 = 2917886LL;
	static uint8_t x859 = 15U;
	uint8_t x860 = 3U;
	volatile int64_t t17 = -48294759075443061LL;

	t17 = (((x857&x858)%x859)<<x860);

	if (t17 != 16LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x869 = INT32_MIN;
	uint64_t x871 = 1823LLU;
	int8_t x872 = 0;
	static volatile uint64_t t18 = 27600641469902LLU;

	t18 = (((x869&x870)%x871)<<x872);

	if (t18 != 621LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x881 = 57330748025821535LL;
	uint8_t x882 = UINT8_MAX;
	uint64_t x883 = UINT64_MAX;
	static uint64_t t19 = 163LLU;

	t19 = (((x881&x882)%x883)<<x884);

	if (t19 != 3040LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x925 = 24158;
	int16_t x926 = 812;
	uint8_t x927 = 27U;
	int32_t t20 = -2;

	t20 = (((x925&x926)%x927)<<x928);

	if (t20 != 44) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x933 = 2U;
	static volatile uint64_t x934 = 2LLU;
	uint8_t x936 = 14U;
	volatile uint64_t t21 = 13640985316LLU;

	t21 = (((x933&x934)%x935)<<x936);

	if (t21 != 32768LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x953 = UINT16_MAX;
	volatile uint8_t x954 = UINT8_MAX;
	uint8_t x956 = 24U;
	int32_t t22 = -182;

	t22 = (((x953&x954)%x955)<<x956);

	if (t22 != 16777216) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x961 = -1LL;
	uint32_t x962 = UINT32_MAX;
	volatile uint64_t x963 = UINT64_MAX;
	uint16_t x964 = 0U;

	t23 = (((x961&x962)%x963)<<x964);

	if (t23 != 4294967295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x985 = 162U;
	int8_t x986 = -1;
	static int8_t x987 = INT8_MIN;
	static volatile int8_t x988 = 1;
	int32_t t24 = -1;

	t24 = (((x985&x986)%x987)<<x988);

	if (t24 != 68) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x997 = 1757LLU;
	uint64_t x998 = UINT64_MAX;
	static uint8_t x1000 = 30U;
	uint64_t t25 = 27647374LLU;

	t25 = (((x997&x998)%x999)<<x1000);

	if (t25 != 1886564384768LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1001 = INT8_MIN;
	int16_t x1002 = INT16_MAX;
	static volatile uint32_t t26 = 1796U;

	t26 = (((x1001&x1002)%x1003)<<x1004);

	if (t26 != 32640U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1010 = 55LLU;
	volatile uint64_t t27 = 395373618072161LLU;

	t27 = (((x1009&x1010)%x1011)<<x1012);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1033 = 857;
	volatile uint16_t x1034 = 339U;
	volatile int8_t x1035 = INT8_MAX;
	uint8_t x1036 = 18U;
	volatile int32_t t28 = 3899;

	t28 = (((x1033&x1034)%x1035)<<x1036);

	if (t28 != 21757952) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1045 = INT8_MIN;
	uint8_t x1046 = 11U;
	static int32_t x1047 = INT32_MIN;
	int8_t x1048 = 31;
	volatile int32_t t29 = -465;

	t29 = (((x1045&x1046)%x1047)<<x1048);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1049 = 8U;
	int64_t x1051 = 4LL;
	uint16_t x1052 = 0U;

	t30 = (((x1049&x1050)%x1051)<<x1052);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1065 = INT64_MAX;
	int32_t x1066 = -1;
	int8_t x1068 = 7;
	int64_t t31 = 4779759642LL;

	t31 = (((x1065&x1066)%x1067)<<x1068);

	if (t31 != 16256LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1141 = 47984;
	int32_t x1142 = INT32_MIN;
	uint8_t x1143 = 4U;
	volatile uint8_t x1144 = 0U;
	int32_t t32 = 92230827;

	t32 = (((x1141&x1142)%x1143)<<x1144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1169 = INT16_MIN;
	int64_t x1170 = 17022895190647LL;
	int8_t x1171 = -54;
	int8_t x1172 = 11;

	t33 = (((x1169&x1170)%x1171)<<x1172);

	if (t33 != 16384LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1225 = 41U;
	int32_t x1226 = -1;
	static int8_t x1228 = 3;
	volatile int32_t t34 = -3;

	t34 = (((x1225&x1226)%x1227)<<x1228);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1313 = 9;
	int64_t x1315 = INT64_MIN;
	static volatile int64_t t35 = -1245LL;

	t35 = (((x1313&x1314)%x1315)<<x1316);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x1365 = -7;
	volatile uint64_t x1366 = UINT64_MAX;
	int64_t x1367 = -1LL;
	uint64_t x1368 = 2LLU;
	uint64_t t36 = 0LLU;

	t36 = (((x1365&x1366)%x1367)<<x1368);

	if (t36 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1401 = 15;
	int64_t x1403 = INT64_MIN;
	uint8_t x1404 = 33U;

	t37 = (((x1401&x1402)%x1403)<<x1404);

	if (t37 != 17179869184LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1465 = UINT8_MAX;
	int64_t x1466 = -12LL;
	int8_t x1467 = -1;
	uint8_t x1468 = 5U;
	volatile int64_t t38 = -13LL;

	t38 = (((x1465&x1466)%x1467)<<x1468);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x1505 = INT8_MIN;
	uint8_t x1506 = 121U;
	int64_t x1507 = INT64_MIN;

	t39 = (((x1505&x1506)%x1507)<<x1508);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1521 = 73350U;
	int16_t x1522 = INT16_MIN;
	int32_t x1523 = 14396344;
	uint8_t x1524 = 13U;
	volatile uint32_t t40 = 3675U;

	t40 = (((x1521&x1522)%x1523)<<x1524);

	if (t40 != 536870912U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1537 = INT64_MAX;
	static uint8_t x1538 = 2U;
	uint32_t x1540 = 7U;
	volatile int64_t t41 = 4LL;

	t41 = (((x1537&x1538)%x1539)<<x1540);

	if (t41 != 256LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1542 = 0;
	static int64_t x1543 = -1LL;
	static volatile uint8_t x1544 = 37U;
	uint64_t t42 = 250149884433112LLU;

	t42 = (((x1541&x1542)%x1543)<<x1544);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1569 = -6;
	static uint8_t x1570 = 31U;
	int16_t x1571 = INT16_MAX;
	uint64_t x1572 = 16LLU;
	int32_t t43 = 66573205;

	t43 = (((x1569&x1570)%x1571)<<x1572);

	if (t43 != 1703936) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1601 = 13376;
	int16_t x1602 = INT16_MIN;
	uint8_t x1604 = 0U;
	static volatile uint64_t t44 = 366634LLU;

	t44 = (((x1601&x1602)%x1603)<<x1604);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1637 = INT8_MIN;
	int64_t x1639 = -1LL;
	int64_t x1640 = 11LL;
	int64_t t45 = 51761161649001LL;

	t45 = (((x1637&x1638)%x1639)<<x1640);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1653 = -11657054596142LL;
	int32_t x1655 = INT32_MIN;
	static uint8_t x1656 = 1U;

	t46 = (((x1653&x1654)%x1655)<<x1656);

	if (t46 != 420LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1697 = -45870870650687998LL;
	int16_t x1698 = INT16_MAX;
	uint16_t x1700 = 48U;
	volatile uint64_t t47 = 3853958772021302LLU;

	t47 = (((x1697&x1698)%x1699)<<x1700);

	if (t47 != 7926898294125494272LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1709 = 637320660771LLU;
	volatile int8_t x1710 = -15;
	int64_t x1711 = 3489487037408616LL;
	volatile uint64_t t48 = 45253211839328LLU;

	t48 = (((x1709&x1710)%x1711)<<x1712);

	if (t48 != 637320660769LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1721 = 439437577LLU;
	static int16_t x1722 = INT16_MIN;
	static volatile uint64_t x1723 = UINT64_MAX;
	static volatile int8_t x1724 = 1;
	uint64_t t49 = 2616011866476918LLU;

	t49 = (((x1721&x1722)%x1723)<<x1724);

	if (t49 != 878837760LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1733 = 3081409717LLU;
	uint64_t x1735 = UINT64_MAX;
	uint64_t t50 = 132049001326790712LLU;

	t50 = (((x1733&x1734)%x1735)<<x1736);

	if (t50 != 24651277312LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1757 = 691261353523LL;
	volatile int8_t x1758 = 44;
	volatile uint16_t x1760 = 10U;
	int64_t t51 = -5700171768716LL;

	t51 = (((x1757&x1758)%x1759)<<x1760);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1777 = UINT8_MAX;
	int16_t x1778 = 8196;
	volatile int64_t x1779 = 56465410325LL;
	static int8_t x1780 = 19;
	int64_t t52 = 1343475150422LL;

	t52 = (((x1777&x1778)%x1779)<<x1780);

	if (t52 != 2097152LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1873 = -1;
	static volatile uint8_t x1874 = 70U;
	int8_t x1875 = INT8_MAX;
	int32_t x1876 = 0;
	int32_t t53 = -32468494;

	t53 = (((x1873&x1874)%x1875)<<x1876);

	if (t53 != 70) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1885 = INT64_MAX;
	uint16_t x1886 = 2U;
	volatile int16_t x1887 = INT16_MIN;
	static volatile int16_t x1888 = 1;
	int64_t t54 = 52831100806059LL;

	t54 = (((x1885&x1886)%x1887)<<x1888);

	if (t54 != 4LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1941 = INT8_MIN;
	uint64_t x1944 = 1LLU;
	volatile int64_t t55 = -2133595243663959196LL;

	t55 = (((x1941&x1942)%x1943)<<x1944);

	if (t55 != 12544LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1981 = -1;
	volatile int64_t x1982 = 39542601LL;
	static int32_t x1983 = -594599802;
	volatile int16_t x1984 = 18;
	int64_t t56 = 44034746LL;

	t56 = (((x1981&x1982)%x1983)<<x1984);

	if (t56 != 10365855596544LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2109 = INT32_MIN;
	static uint64_t x2110 = 26146LLU;
	int32_t x2111 = 20624293;
	uint64_t t57 = 15960814791LLU;

	t57 = (((x2109&x2110)%x2111)<<x2112);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2117 = INT64_MIN;
	int32_t x2118 = 219;
	int8_t x2120 = 5;

	t58 = (((x2117&x2118)%x2119)<<x2120);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2121 = -24861;
	static uint8_t x2122 = UINT8_MAX;
	uint8_t x2123 = UINT8_MAX;
	int8_t x2124 = 1;

	t59 = (((x2121&x2122)%x2123)<<x2124);

	if (t59 != 454) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2141 = -1;
	volatile int8_t x2142 = INT8_MIN;
	uint64_t x2143 = 2921366LLU;
	static volatile uint64_t t60 = 40560LLU;

	t60 = (((x2141&x2142)%x2143)<<x2144);

	if (t60 != 128029888086016LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2169 = 40529197252LL;
	int32_t x2171 = -3202;
	int8_t x2172 = 4;
	volatile int64_t t61 = 37LL;

	t61 = (((x2169&x2170)%x2171)<<x2172);

	if (t61 != 33568LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x2185 = 71U;
	volatile int64_t x2186 = INT64_MIN;
	int32_t x2187 = -18305296;
	int8_t x2188 = 3;
	int64_t t62 = -106253324635510046LL;

	t62 = (((x2185&x2186)%x2187)<<x2188);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2205 = UINT32_MAX;
	volatile int64_t x2206 = 705372LL;
	volatile uint32_t x2207 = 1439072U;
	int64_t t63 = -18869904709LL;

	t63 = (((x2205&x2206)%x2207)<<x2208);

	if (t63 != 705372LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x2233 = INT64_MAX;
	int64_t x2234 = -1LL;
	volatile int64_t x2235 = INT64_MAX;
	static uint8_t x2236 = 31U;
	int64_t t64 = 1872286LL;

	t64 = (((x2233&x2234)%x2235)<<x2236);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2242 = 0;
	static uint16_t x2244 = 3U;
	volatile int32_t t65 = 1828534;

	t65 = (((x2241&x2242)%x2243)<<x2244);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2263 = INT64_MIN;
	uint64_t x2264 = 52LLU;
	volatile int64_t t66 = -1015495128523514LL;

	t66 = (((x2261&x2262)%x2263)<<x2264);

	if (t66 != 283726776524341248LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2275 = INT16_MIN;
	uint16_t x2276 = 13U;

	t67 = (((x2273&x2274)%x2275)<<x2276);

	if (t67 != 1040384LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2294 = INT64_MAX;
	int8_t x2295 = INT8_MIN;
	int16_t x2296 = 1;
	volatile int64_t t68 = 1319362370362LL;

	t68 = (((x2293&x2294)%x2295)<<x2296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2317 = INT32_MIN;
	volatile int16_t x2318 = -207;
	static uint16_t x2320 = 7U;
	uint32_t t69 = 481093835U;

	t69 = (((x2317&x2318)%x2319)<<x2320);

	if (t69 != 209460480U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2398 = 23U;
	uint8_t x2400 = 1U;
	uint64_t t70 = 273792062950LLU;

	t70 = (((x2397&x2398)%x2399)<<x2400);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2429 = 148U;
	static uint8_t x2430 = 4U;
	static int32_t x2431 = 2954;
	static int8_t x2432 = 1;
	uint32_t t71 = 790U;

	t71 = (((x2429&x2430)%x2431)<<x2432);

	if (t71 != 8U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2481 = -1LL;
	uint8_t x2482 = UINT8_MAX;
	static int32_t x2483 = -48057;
	uint32_t x2484 = 0U;
	volatile int64_t t72 = 48LL;

	t72 = (((x2481&x2482)%x2483)<<x2484);

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2489 = 91;
	int16_t x2490 = INT16_MIN;
	uint64_t x2491 = 4011622LLU;
	static uint8_t x2492 = 3U;

	t73 = (((x2489&x2490)%x2491)<<x2492);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2545 = INT16_MAX;
	int32_t x2547 = INT32_MIN;
	static uint8_t x2548 = 0U;
	volatile uint64_t t74 = 3619450440830927129LLU;

	t74 = (((x2545&x2546)%x2547)<<x2548);

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2601 = INT16_MIN;
	volatile uint8_t x2602 = UINT8_MAX;
	int8_t x2603 = -10;
	static uint16_t x2604 = 12U;
	int32_t t75 = 8184;

	t75 = (((x2601&x2602)%x2603)<<x2604);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x2613 = 0U;
	int64_t x2614 = -22971780LL;
	volatile uint8_t x2615 = 8U;
	static uint8_t x2616 = 18U;
	volatile int64_t t76 = -5LL;

	t76 = (((x2613&x2614)%x2615)<<x2616);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2625 = 0;
	int16_t x2627 = INT16_MIN;
	int16_t x2628 = 1;
	static int32_t t77 = -387;

	t77 = (((x2625&x2626)%x2627)<<x2628);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2645 = 67777357LLU;
	int64_t x2646 = INT64_MAX;
	volatile int64_t x2647 = INT64_MIN;
	int16_t x2648 = 31;
	static volatile uint64_t t78 = 194LLU;

	t78 = (((x2645&x2646)%x2647)<<x2648);

	if (t78 != 145550765862158336LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2681 = INT16_MIN;
	int16_t x2682 = INT16_MAX;
	int32_t x2683 = INT32_MAX;
	uint16_t x2684 = 0U;
	int32_t t79 = 158797;

	t79 = (((x2681&x2682)%x2683)<<x2684);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2714 = 41U;
	uint16_t x2715 = 1777U;
	static uint16_t x2716 = 5U;
	int64_t t80 = -3328996269816LL;

	t80 = (((x2713&x2714)%x2715)<<x2716);

	if (t80 != 1312LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2717 = INT64_MIN;
	int8_t x2718 = 3;
	int64_t x2719 = INT64_MAX;
	uint64_t x2720 = 1LLU;
	volatile int64_t t81 = -458294LL;

	t81 = (((x2717&x2718)%x2719)<<x2720);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2769 = INT16_MAX;
	int8_t x2770 = 14;
	int32_t x2771 = INT32_MIN;
	int8_t x2772 = 2;
	volatile int32_t t82 = 0;

	t82 = (((x2769&x2770)%x2771)<<x2772);

	if (t82 != 56) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2776 = 1LL;

	t83 = (((x2773&x2774)%x2775)<<x2776);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2793 = UINT8_MAX;
	int8_t x2794 = -1;
	volatile int8_t x2795 = -63;
	uint8_t x2796 = 0U;
	int32_t t84 = -1470625;

	t84 = (((x2793&x2794)%x2795)<<x2796);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x2809 = -101387357;
	static int64_t x2810 = 1932LL;
	volatile uint8_t x2811 = UINT8_MAX;
	volatile uint32_t x2812 = 20U;
	int64_t t85 = 893LL;

	t85 = (((x2809&x2810)%x2811)<<x2812);

	if (t85 != 137363456LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2817 = 8553404LLU;
	int16_t x2818 = INT16_MAX;
	static volatile uint16_t x2819 = 3405U;
	uint8_t x2820 = 0U;
	static volatile uint64_t t86 = 10621525351LLU;

	t86 = (((x2817&x2818)%x2819)<<x2820);

	if (t86 != 956LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x2827 = -5;
	int8_t x2828 = 7;

	t87 = (((x2825&x2826)%x2827)<<x2828);

	if (t87 != 512LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2835 = -1;
	static int16_t x2836 = 4;

	t88 = (((x2833&x2834)%x2835)<<x2836);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x2861 = -4323;
	static uint32_t x2862 = UINT32_MAX;
	volatile int16_t x2863 = -1;
	uint8_t x2864 = 4U;
	volatile uint32_t t89 = 384U;

	t89 = (((x2861&x2862)%x2863)<<x2864);

	if (t89 != 4294898128U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2893 = 821875140901LLU;
	int8_t x2894 = -1;
	uint64_t x2895 = 435366LLU;
	uint16_t x2896 = 0U;
	volatile uint64_t t90 = 1186LLU;

	t90 = (((x2893&x2894)%x2895)<<x2896);

	if (t90 != 348787LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3009 = -1LL;
	uint16_t x3010 = 10U;
	int8_t x3011 = -1;
	uint32_t x3012 = 0U;
	static volatile int64_t t91 = 1717296600287755455LL;

	t91 = (((x3009&x3010)%x3011)<<x3012);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3045 = INT64_MAX;
	int32_t x3046 = 1;
	int64_t x3047 = INT64_MAX;
	volatile int16_t x3048 = 0;
	volatile int64_t t92 = 1692110111374151847LL;

	t92 = (((x3045&x3046)%x3047)<<x3048);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3053 = UINT32_MAX;
	int32_t x3054 = INT32_MIN;
	static int8_t x3056 = 9;
	volatile uint32_t t93 = 7309187U;

	t93 = (((x3053&x3054)%x3055)<<x3056);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3098 = -11;
	int8_t x3100 = 0;
	uint64_t t94 = 2710782LLU;

	t94 = (((x3097&x3098)%x3099)<<x3100);

	if (t94 != 66335744LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3121 = -1;
	volatile int32_t x3122 = INT32_MIN;
	volatile int8_t x3124 = 7;
	int32_t t95 = -104406;

	t95 = (((x3121&x3122)%x3123)<<x3124);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3155 = 104LL;
	volatile uint32_t x3156 = 49U;
	uint64_t t96 = 3169719886570833LLU;

	t96 = (((x3153&x3154)%x3155)<<x3156);

	if (t96 != 43910096366862336LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3165 = 479;
	volatile int8_t x3167 = INT8_MAX;

	t97 = (((x3165&x3166)%x3167)<<x3168);

	if (t97 != 5632U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3189 = INT32_MAX;
	volatile uint32_t x3190 = UINT32_MAX;
	volatile uint8_t x3192 = 34U;
	volatile uint64_t t98 = 12167489LLU;

	t98 = (((x3189&x3190)%x3191)<<x3192);

	if (t98 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3281 = UINT32_MAX;
	int16_t x3283 = INT16_MAX;
	volatile uint8_t x3284 = 5U;
	volatile uint32_t t99 = 535144149U;

	t99 = (((x3281&x3282)%x3283)<<x3284);

	if (t99 != 17408U) { NG(); } else { ; }
	
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


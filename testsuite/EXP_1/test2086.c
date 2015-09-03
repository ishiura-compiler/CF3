#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = 14063225LL;
int8_t x31 = 1;
int64_t x69 = INT64_MIN;
uint16_t x72 = 28U;
uint64_t t7 = 474785LLU;
uint8_t x201 = UINT8_MAX;
static volatile uint8_t x202 = 4U;
static int64_t x203 = INT64_MIN;
int64_t x238 = INT64_MIN;
volatile int8_t x377 = 52;
volatile uint16_t x423 = 13U;
int8_t x424 = 0;
volatile int64_t t12 = 6412462269122LL;
uint16_t x461 = UINT16_MAX;
int32_t x466 = -1015336760;
uint32_t x670 = 1U;
static int16_t x671 = 9701;
uint32_t x697 = 101265703U;
static uint8_t x757 = 1U;
int32_t x787 = 4099;
static uint64_t t21 = 3894204526LLU;
volatile int64_t x875 = -9761462569677503LL;
int16_t x930 = INT16_MAX;
static uint16_t x972 = 1U;
int32_t x1005 = 12801026;
uint64_t x1007 = UINT64_MAX;
volatile uint16_t x1008 = 0U;
int32_t x1030 = INT32_MIN;
int64_t x1031 = INT64_MIN;
static volatile uint32_t x1033 = 86U;
volatile uint32_t t27 = 2U;
int64_t x1163 = -1LL;
uint64_t x1191 = 105585999LLU;
volatile int16_t x1276 = 1;
static int32_t x1369 = 10759;
int16_t x1574 = -1;
uint8_t x1576 = 3U;
int16_t x1597 = INT16_MIN;
int8_t x1676 = 1;
volatile int32_t t41 = -52361129;
static uint8_t x1718 = UINT8_MAX;
volatile uint64_t t42 = 1912LLU;
volatile int16_t x1875 = INT16_MAX;
int32_t t44 = 36160;
volatile int16_t x1901 = INT16_MIN;
static int8_t x1939 = -1;
int16_t x1947 = -1;
uint64_t x1953 = 96805440713819LLU;
uint16_t x1954 = UINT16_MAX;
uint32_t x2043 = 111321U;
uint8_t x2044 = 7U;
int8_t x2052 = 2;
volatile int64_t t51 = 2381372954LL;
int32_t x2125 = INT32_MIN;
volatile int64_t t52 = -86412LL;
static int64_t x2169 = INT64_MIN;
int8_t x2171 = 2;
int64_t t53 = 619LL;
int8_t x2176 = 27;
volatile int16_t x2189 = INT16_MAX;
int16_t x2190 = 2151;
volatile int32_t t55 = -42;
int16_t x2332 = 2;
volatile int64_t t57 = 360075314LL;
uint64_t x2337 = UINT64_MAX;
uint8_t x2340 = 44U;
int8_t x2355 = INT8_MAX;
int64_t x2525 = INT64_MAX;
int16_t x2557 = -24;
static volatile int16_t x2558 = INT16_MAX;
uint64_t x2559 = 134079055156754153LLU;
uint64_t x2579 = 306129LLU;
volatile uint16_t x2584 = 6U;
uint16_t x2616 = 3U;
volatile uint64_t t66 = 271673430617536LLU;
volatile uint64_t x2638 = UINT64_MAX;
int32_t x2695 = INT32_MIN;
int16_t x2701 = INT16_MAX;
uint8_t x2710 = 43U;
int8_t x2714 = INT8_MIN;
uint8_t x2841 = 3U;
uint8_t x2844 = 1U;
static volatile int16_t x2855 = 1781;
uint8_t x2914 = UINT8_MAX;
static uint32_t x2924 = 0U;
uint64_t x2942 = 30842000962168799LLU;
int8_t x2944 = 57;
int16_t x2965 = INT16_MAX;
static int32_t x2966 = 379481;
uint8_t x3040 = 61U;
static uint32_t t84 = 340357656U;
int32_t x3071 = INT32_MIN;
uint16_t x3137 = 1U;
int8_t x3139 = -12;
static uint32_t t87 = 2U;
int64_t x3170 = INT64_MIN;
static int8_t x3172 = 0;
int64_t t89 = 2170183315102998042LL;
volatile int16_t x3246 = -1;
uint16_t x3253 = UINT16_MAX;
static volatile uint64_t t92 = 1828586336047697638LLU;
int8_t x3364 = 0;
volatile uint32_t t95 = 32864U;
volatile int64_t x3449 = 6015186633524541LL;
int16_t x3458 = INT16_MAX;
volatile int16_t x3459 = INT16_MIN;
volatile int8_t x3460 = 2;
int32_t x3517 = -1;
uint64_t t99 = 17085306379LLU;


void f0(void) {
	int32_t x1 = -12813;
	static int32_t x2 = INT32_MIN;
	static uint8_t x4 = 14U;
	volatile int64_t t0 = 3288LL;

	t0 = (((x1^x2)%x3)<<x4);

	if (t0 != 161556643840LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = INT16_MIN;
	volatile int16_t x14 = -1;
	int64_t x15 = INT64_MIN;
	static uint8_t x16 = 7U;
	static volatile int64_t t1 = -780477LL;

	t1 = (((x13^x14)%x15)<<x16);

	if (t1 != 4194176LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	static uint8_t x32 = 4U;
	volatile int32_t t2 = -4004383;

	t2 = (((x29^x30)%x31)<<x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	static uint64_t t3 = 791014LLU;

	t3 = (((x69^x70)%x71)<<x72);

	if (t3 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x73 = 9584873081774LL;
	int32_t x74 = INT32_MAX;
	int8_t x75 = -1;
	int8_t x76 = 3;
	int64_t t4 = 2574802033LL;

	t4 = (((x73^x74)%x75)<<x76);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x77 = -1;
	static volatile int64_t x78 = -1LL;
	int8_t x79 = -11;
	uint16_t x80 = 15U;
	int64_t t5 = -1596657542069298848LL;

	t5 = (((x77^x78)%x79)<<x80);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x153 = INT8_MAX;
	static int32_t x154 = 1595995;
	uint8_t x155 = 1U;
	uint32_t x156 = 15U;
	int32_t t6 = -225;

	t6 = (((x153^x154)%x155)<<x156);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x189 = 4LLU;
	int64_t x190 = INT64_MIN;
	static int64_t x191 = 66197950981936804LL;
	static volatile uint8_t x192 = 2U;

	t7 = (((x189^x190)%x191)<<x192);

	if (t7 != 87427401462240224LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x204 = 2U;
	int64_t t8 = -6LL;

	t8 = (((x201^x202)%x203)<<x204);

	if (t8 != 1004LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = 57U;
	static volatile uint64_t t9 = 2123652305454796LLU;

	t9 = (((x237^x238)%x239)<<x240);

	if (t9 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x378 = 1435;
	volatile uint8_t x379 = 29U;
	int8_t x380 = 24;
	volatile int32_t t10 = -10920;

	t10 = (((x377^x378)%x379)<<x380);

	if (t10 != 83886080) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 3881U;
	int32_t x399 = 1511;
	uint32_t x400 = 7U;
	uint32_t t11 = 107672404U;

	t11 = (((x397^x398)%x399)<<x400);

	if (t11 != 39680U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x421 = INT64_MIN;
	uint32_t x422 = UINT32_MAX;

	t12 = (((x421^x422)%x423)<<x424);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x425 = UINT16_MAX;
	volatile int16_t x426 = -13788;
	uint64_t x427 = UINT64_MAX;
	uint8_t x428 = 54U;
	static volatile uint64_t t13 = 1872249491LLU;

	t13 = (((x425^x426)%x427)<<x428);

	if (t13 != 8556839292003942400LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x462 = 129384LLU;
	int32_t x463 = INT32_MIN;
	volatile int32_t x464 = 7;
	uint64_t t14 = 857035564604025482LLU;

	t14 = (((x461^x462)%x463)<<x464);

	if (t14 != 8604544LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x465 = INT16_MAX;
	uint32_t x467 = 5U;
	static uint16_t x468 = 2U;
	uint32_t t15 = 20U;

	t15 = (((x465^x466)%x467)<<x468);

	if (t15 != 8U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x669 = INT64_MAX;
	int32_t x672 = 1;
	volatile int64_t t16 = 17641LL;

	t16 = (((x669^x670)%x671)<<x672);

	if (t16 != 15104LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x693 = -1;
	volatile int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MIN;
	int8_t x696 = 10;
	int32_t t17 = -103051248;

	t17 = (((x693^x694)%x695)<<x696);

	if (t17 != 33553408) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x698 = -1;
	int32_t x699 = 678600;
	uint8_t x700 = 0U;
	volatile uint32_t t18 = 504231906U;

	t18 = (((x697^x698)%x699)<<x700);

	if (t18 != 632192U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x758 = UINT8_MAX;
	uint64_t x759 = UINT64_MAX;
	uint8_t x760 = 0U;
	volatile uint64_t t19 = 242LLU;

	t19 = (((x757^x758)%x759)<<x760);

	if (t19 != 254LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x785 = INT64_MIN;
	uint64_t x786 = 2829465091LLU;
	static uint8_t x788 = 2U;
	uint64_t t20 = 439429134596498329LLU;

	t20 = (((x785^x786)%x787)<<x788);

	if (t20 != 5312LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x841 = 392583U;
	static volatile int8_t x842 = -43;
	volatile uint64_t x843 = UINT64_MAX;
	static volatile uint16_t x844 = 14U;

	t21 = (((x841^x842)%x843)<<x844);

	if (t21 != 70362311458816LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x873 = INT16_MIN;
	static int64_t x874 = INT64_MIN;
	static uint8_t x876 = 0U;
	int64_t t22 = -1574423055126LL;

	t22 = (((x873^x874)%x875)<<x876);

	if (t22 != 8551371079180208LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x929 = INT32_MIN;
	volatile int8_t x931 = -1;
	volatile int8_t x932 = 9;
	static volatile int32_t t23 = -668658402;

	t23 = (((x929^x930)%x931)<<x932);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x969 = 34U;
	uint32_t x970 = UINT32_MAX;
	volatile uint64_t x971 = UINT64_MAX;
	uint64_t t24 = 1918LLU;

	t24 = (((x969^x970)%x971)<<x972);

	if (t24 != 8589934522LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1006 = -1;
	uint64_t t25 = 1503879143944LLU;

	t25 = (((x1005^x1006)%x1007)<<x1008);

	if (t25 != 18446744073696750589LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1029 = 3LLU;
	int8_t x1032 = 1;
	uint64_t t26 = 2045639487729265800LLU;

	t26 = (((x1029^x1030)%x1031)<<x1032);

	if (t26 != 18446744069414584326LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1034 = UINT8_MAX;
	int16_t x1035 = -12569;
	uint16_t x1036 = 10U;

	t27 = (((x1033^x1034)%x1035)<<x1036);

	if (t27 != 173056U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1069 = 1LL;
	int8_t x1070 = 7;
	uint32_t x1071 = 1901U;
	int8_t x1072 = 0;
	int64_t t28 = 253471389413529LL;

	t28 = (((x1069^x1070)%x1071)<<x1072);

	if (t28 != 6LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1073 = INT32_MIN;
	uint32_t x1074 = 11U;
	int16_t x1075 = INT16_MAX;
	static volatile int8_t x1076 = 1;
	volatile uint32_t t29 = 118117087U;

	t29 = (((x1073^x1074)%x1075)<<x1076);

	if (t29 != 26U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1161 = INT16_MAX;
	static int32_t x1162 = -939728825;
	uint16_t x1164 = 2U;
	int64_t t30 = 764877629683901558LL;

	t30 = (((x1161^x1162)%x1163)<<x1164);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1189 = -1277297187272834LL;
	int8_t x1190 = -1;
	static uint64_t x1192 = 18LLU;
	static uint64_t t31 = 562848LLU;

	t31 = (((x1189^x1190)%x1191)<<x1192);

	if (t31 != 5993674571776LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1273 = 79U;
	static volatile int8_t x1274 = INT8_MAX;
	int8_t x1275 = -3;
	uint32_t t32 = 284930U;

	t32 = (((x1273^x1274)%x1275)<<x1276);

	if (t32 != 96U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1370 = INT32_MIN;
	uint64_t x1371 = 700975396432267LLU;
	static volatile uint32_t x1372 = 7U;
	uint64_t t33 = 887744701LLU;

	t33 = (((x1369^x1370)%x1371)<<x1372);

	if (t33 != 73793849212495616LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1421 = UINT8_MAX;
	uint8_t x1422 = 10U;
	uint16_t x1423 = 14290U;
	static uint16_t x1424 = 0U;
	static volatile int32_t t34 = 1199;

	t34 = (((x1421^x1422)%x1423)<<x1424);

	if (t34 != 245) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1425 = UINT16_MAX;
	int8_t x1426 = INT8_MIN;
	int64_t x1427 = -1LL;
	uint32_t x1428 = 0U;
	volatile int64_t t35 = 55031587LL;

	t35 = (((x1425^x1426)%x1427)<<x1428);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1477 = 17U;
	int64_t x1478 = -901608373LL;
	uint64_t x1479 = 2754832663105668LLU;
	static int8_t x1480 = 2;
	uint64_t t36 = 239LLU;

	t36 = (((x1477^x1478)%x1479)<<x1480);

	if (t36 != 1538242609561320LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1573 = INT32_MIN;
	int16_t x1575 = INT16_MIN;
	volatile int32_t t37 = -3151277;

	t37 = (((x1573^x1574)%x1575)<<x1576);

	if (t37 != 262136) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1589 = UINT64_MAX;
	static volatile int32_t x1590 = INT32_MIN;
	static int64_t x1591 = INT64_MIN;
	int8_t x1592 = 1;
	volatile uint64_t t38 = 745477925LLU;

	t38 = (((x1589^x1590)%x1591)<<x1592);

	if (t38 != 4294967294LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1598 = INT32_MIN;
	int32_t x1599 = 1205350;
	int8_t x1600 = 0;
	static int32_t t39 = 35178;

	t39 = (((x1597^x1598)%x1599)<<x1600);

	if (t39 != 722530) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1673 = -1;
	uint64_t x1674 = UINT64_MAX;
	static int64_t x1675 = -20993349407LL;
	static uint64_t t40 = 6384107LLU;

	t40 = (((x1673^x1674)%x1675)<<x1676);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1685 = UINT8_MAX;
	volatile int8_t x1686 = INT8_MAX;
	int16_t x1687 = -339;
	int8_t x1688 = 7;

	t41 = (((x1685^x1686)%x1687)<<x1688);

	if (t41 != 16384) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1717 = 230734265183LLU;
	int64_t x1719 = INT64_MAX;
	static int8_t x1720 = 0;

	t42 = (((x1717^x1718)%x1719)<<x1720);

	if (t42 != 230734265248LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1849 = 120U;
	uint32_t x1850 = UINT32_MAX;
	volatile uint32_t x1851 = 8010264U;
	uint8_t x1852 = 4U;
	uint32_t t43 = 896920U;

	t43 = (((x1849^x1850)%x1851)<<x1852);

	if (t43 != 23450736U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1873 = 15U;
	volatile int8_t x1874 = INT8_MAX;
	volatile uint8_t x1876 = 0U;

	t44 = (((x1873^x1874)%x1875)<<x1876);

	if (t44 != 112) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1902 = -1LL;
	static uint8_t x1903 = UINT8_MAX;
	static uint64_t x1904 = 2LLU;
	volatile int64_t t45 = -140624005LL;

	t45 = (((x1901^x1902)%x1903)<<x1904);

	if (t45 != 508LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1937 = INT8_MIN;
	int32_t x1938 = -10904;
	uint8_t x1940 = 4U;
	int32_t t46 = 541760;

	t46 = (((x1937^x1938)%x1939)<<x1940);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1945 = UINT64_MAX;
	volatile int32_t x1946 = INT32_MIN;
	static uint8_t x1948 = 9U;
	uint64_t t47 = 29556180179188750LLU;

	t47 = (((x1945^x1946)%x1947)<<x1948);

	if (t47 != 1099511627264LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1955 = -11;
	uint16_t x1956 = 17U;
	static uint64_t t48 = 7190013LLU;

	t48 = (((x1953^x1954)%x1955)<<x1956);

	if (t48 != 12688482717433069568LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2041 = -65;
	int8_t x2042 = -1;
	uint32_t t49 = 596079821U;

	t49 = (((x2041^x2042)%x2043)<<x2044);

	if (t49 != 8192U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2049 = 29U;
	uint32_t x2050 = UINT32_MAX;
	static int32_t x2051 = INT32_MAX;
	volatile uint32_t t50 = 960518U;

	t50 = (((x2049^x2050)%x2051)<<x2052);

	if (t50 != 4294967180U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2105 = INT8_MIN;
	int64_t x2106 = -1LL;
	uint32_t x2107 = 535747U;
	static int16_t x2108 = 14;

	t51 = (((x2105^x2106)%x2107)<<x2108);

	if (t51 != 2080768LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2126 = INT16_MIN;
	int64_t x2127 = INT64_MAX;
	int64_t x2128 = 1LL;

	t52 = (((x2125^x2126)%x2127)<<x2128);

	if (t52 != 4294901760LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x2170 = 2U;
	uint32_t x2172 = 48U;

	t53 = (((x2169^x2170)%x2171)<<x2172);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2173 = INT32_MIN;
	int16_t x2174 = INT16_MAX;
	static uint16_t x2175 = 1U;
	volatile int32_t t54 = -3;

	t54 = (((x2173^x2174)%x2175)<<x2176);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2191 = UINT8_MAX;
	static uint16_t x2192 = 0U;

	t55 = (((x2189^x2190)%x2191)<<x2192);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2221 = UINT8_MAX;
	int64_t x2222 = -1LL;
	volatile int8_t x2223 = 1;
	uint8_t x2224 = 27U;
	int64_t t56 = 3761LL;

	t56 = (((x2221^x2222)%x2223)<<x2224);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x2329 = 82U;
	int8_t x2330 = INT8_MAX;
	static int64_t x2331 = INT64_MIN;

	t57 = (((x2329^x2330)%x2331)<<x2332);

	if (t57 != 180LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2338 = INT8_MIN;
	int16_t x2339 = 274;
	volatile uint64_t t58 = 3032628248549LLU;

	t58 = (((x2337^x2338)%x2339)<<x2340);

	if (t58 != 2234207627640832LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2353 = -1;
	uint64_t x2354 = UINT64_MAX;
	int16_t x2356 = 47;
	volatile uint64_t t59 = 27850858396285LLU;

	t59 = (((x2353^x2354)%x2355)<<x2356);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2437 = -5;
	volatile int64_t x2438 = INT64_MIN;
	static uint32_t x2439 = 1U;
	uint16_t x2440 = 7U;
	int64_t t60 = -6562326993LL;

	t60 = (((x2437^x2438)%x2439)<<x2440);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2526 = -1LL;
	volatile int64_t x2527 = INT64_MIN;
	static int16_t x2528 = 9;
	volatile int64_t t61 = 13098433160857727LL;

	t61 = (((x2525^x2526)%x2527)<<x2528);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x2541 = 10386626299826862LL;
	uint16_t x2542 = 1U;
	int16_t x2543 = INT16_MAX;
	uint16_t x2544 = 7U;
	int64_t t62 = -34LL;

	t62 = (((x2541^x2542)%x2543)<<x2544);

	if (t62 != 3807360LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x2560 = 6;
	volatile uint64_t t63 = 515851822790LLU;

	t63 = (((x2557^x2558)%x2559)<<x2560);

	if (t63 != 4986465102988794240LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2577 = 0;
	volatile uint64_t x2578 = UINT64_MAX;
	uint8_t x2580 = 54U;
	volatile uint64_t t64 = 802795561338061LLU;

	t64 = (((x2577^x2578)%x2579)<<x2580);

	if (t64 != 8124493727776374784LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2581 = -5539;
	volatile int16_t x2582 = INT16_MIN;
	int8_t x2583 = -1;
	static volatile int32_t t65 = -3788769;

	t65 = (((x2581^x2582)%x2583)<<x2584);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2613 = 51478;
	static uint64_t x2614 = 142405007244LLU;
	uint16_t x2615 = UINT16_MAX;

	t66 = (((x2613^x2614)%x2615)<<x2616);

	if (t66 != 210384LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2637 = INT8_MIN;
	int32_t x2639 = INT32_MAX;
	static uint8_t x2640 = 8U;
	static uint64_t t67 = 11852450273LLU;

	t67 = (((x2637^x2638)%x2639)<<x2640);

	if (t67 != 32512LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2645 = 49834544698669067LLU;
	int32_t x2646 = -1;
	int64_t x2647 = INT64_MAX;
	volatile uint8_t x2648 = 24U;
	uint64_t t68 = 14986LLU;

	t68 = (((x2645^x2646)%x2647)<<x2648);

	if (t68 != 13754469659577417728LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2689 = 49619309403018001LL;
	uint8_t x2690 = 2U;
	uint64_t x2691 = UINT64_MAX;
	uint8_t x2692 = 0U;
	uint64_t t69 = 8719533996368844LLU;

	t69 = (((x2689^x2690)%x2691)<<x2692);

	if (t69 != 49619309403018003LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2693 = UINT64_MAX;
	static volatile int64_t x2694 = -1LL;
	static volatile uint8_t x2696 = 63U;
	uint64_t t70 = 5LLU;

	t70 = (((x2693^x2694)%x2695)<<x2696);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x2702 = -8;
	uint16_t x2703 = 1U;
	uint64_t x2704 = 11LLU;
	int32_t t71 = -57562909;

	t71 = (((x2701^x2702)%x2703)<<x2704);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x2709 = INT32_MIN;
	int16_t x2711 = 1;
	volatile uint16_t x2712 = 7U;
	static int32_t t72 = 0;

	t72 = (((x2709^x2710)%x2711)<<x2712);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2713 = INT64_MIN;
	int32_t x2715 = -1;
	int8_t x2716 = 1;
	static int64_t t73 = -77LL;

	t73 = (((x2713^x2714)%x2715)<<x2716);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2837 = -260014198043103374LL;
	static volatile int8_t x2838 = INT8_MIN;
	uint16_t x2839 = UINT16_MAX;
	static volatile uint8_t x2840 = 4U;
	static int64_t t74 = -35875855626693LL;

	t74 = (((x2837^x2838)%x2839)<<x2840);

	if (t74 != 708624LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2842 = 7U;
	uint16_t x2843 = 3556U;
	int32_t t75 = 181;

	t75 = (((x2841^x2842)%x2843)<<x2844);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2853 = INT8_MIN;
	int64_t x2854 = INT64_MIN;
	static uint8_t x2856 = 3U;
	static int64_t t76 = -127706LL;

	t76 = (((x2853^x2854)%x2855)<<x2856);

	if (t76 != 7984LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2913 = 0;
	volatile int64_t x2915 = -1LL;
	static uint8_t x2916 = 1U;
	volatile int64_t t77 = -70102978LL;

	t77 = (((x2913^x2914)%x2915)<<x2916);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2921 = -1;
	volatile uint64_t x2922 = 10LLU;
	uint32_t x2923 = UINT32_MAX;
	uint64_t t78 = 1235107238995430233LLU;

	t78 = (((x2921^x2922)%x2923)<<x2924);

	if (t78 != 4294967285LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2941 = 1958U;
	int8_t x2943 = INT8_MIN;
	uint64_t t79 = 21316LLU;

	t79 = (((x2941^x2942)%x2943)<<x2944);

	if (t79 != 17437937757178560512LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2967 = -1;
	uint8_t x2968 = 31U;
	volatile int32_t t80 = 6;

	t80 = (((x2965^x2966)%x2967)<<x2968);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3005 = 2;
	int64_t x3006 = 707082615169509985LL;
	int16_t x3007 = 147;
	uint16_t x3008 = 37U;
	int64_t t81 = -1791LL;

	t81 = (((x3005^x3006)%x3007)<<x3008);

	if (t81 != 15668040695808LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x3037 = INT64_MAX;
	static int16_t x3038 = -1;
	volatile int8_t x3039 = -1;
	int64_t t82 = -15119532244LL;

	t82 = (((x3037^x3038)%x3039)<<x3040);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3053 = 1580430704U;
	static int16_t x3054 = 30;
	int16_t x3055 = INT16_MIN;
	int32_t x3056 = 1;
	volatile uint32_t t83 = 247973637U;

	t83 = (((x3053^x3054)%x3055)<<x3056);

	if (t83 != 3160861404U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3065 = -1;
	static uint32_t x3066 = UINT32_MAX;
	volatile int8_t x3067 = INT8_MIN;
	int8_t x3068 = 3;

	t84 = (((x3065^x3066)%x3067)<<x3068);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3069 = 31U;
	volatile int8_t x3070 = 2;
	volatile uint16_t x3072 = 15U;
	int32_t t85 = -575832544;

	t85 = (((x3069^x3070)%x3071)<<x3072);

	if (t85 != 950272) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x3138 = 1852952558U;
	int32_t x3140 = 22;
	volatile uint32_t t86 = 1095U;

	t86 = (((x3137^x3138)%x3139)<<x3140);

	if (t86 != 4223664128U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3153 = 902U;
	static uint32_t x3154 = UINT32_MAX;
	static int8_t x3155 = INT8_MAX;
	uint8_t x3156 = 4U;

	t87 = (((x3153^x3154)%x3155)<<x3156);

	if (t87 != 32U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x3169 = INT64_MAX;
	volatile int16_t x3171 = -1;
	int64_t t88 = -109575071988643817LL;

	t88 = (((x3169^x3170)%x3171)<<x3172);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3221 = INT64_MAX;
	volatile int64_t x3222 = INT64_MAX;
	int64_t x3223 = -182918144496995579LL;
	uint64_t x3224 = 0LLU;

	t89 = (((x3221^x3222)%x3223)<<x3224);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x3245 = -4338613;
	volatile uint32_t x3247 = UINT32_MAX;
	volatile uint8_t x3248 = 12U;
	volatile uint32_t t90 = 3U;

	t90 = (((x3245^x3246)%x3247)<<x3248);

	if (t90 != 591085568U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3254 = UINT16_MAX;
	static uint16_t x3255 = 110U;
	uint8_t x3256 = 17U;
	static int32_t t91 = -1;

	t91 = (((x3253^x3254)%x3255)<<x3256);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3289 = INT32_MIN;
	static int16_t x3290 = INT16_MIN;
	uint64_t x3291 = UINT64_MAX;
	uint8_t x3292 = 0U;

	t92 = (((x3289^x3290)%x3291)<<x3292);

	if (t92 != 2147450880LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x3297 = 6;
	uint8_t x3298 = UINT8_MAX;
	uint64_t x3299 = 196LLU;
	int16_t x3300 = 1;
	uint64_t t93 = 8268226677951LLU;

	t93 = (((x3297^x3298)%x3299)<<x3300);

	if (t93 != 106LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x3321 = 5U;
	uint32_t x3322 = 801401934U;
	static uint64_t x3323 = 22977LLU;
	static uint8_t x3324 = 3U;
	static uint64_t t94 = 15LLU;

	t94 = (((x3321^x3322)%x3323)<<x3324);

	if (t94 != 81000LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x3361 = 27U;
	int8_t x3362 = INT8_MIN;
	static int8_t x3363 = -1;

	t95 = (((x3361^x3362)%x3363)<<x3364);

	if (t95 != 4294967195U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3450 = INT32_MIN;
	uint64_t x3451 = 266739389575684LLU;
	uint16_t x3452 = 24U;
	volatile uint64_t t96 = 453LLU;

	t96 = (((x3449^x3450)%x3451)<<x3452);

	if (t96 != 7915210223680225280LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3457 = -1;
	volatile int32_t t97 = -234358637;

	t97 = (((x3457^x3458)%x3459)<<x3460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3481 = -1;
	uint64_t x3482 = 8624900LLU;
	uint64_t x3483 = 23LLU;
	volatile int8_t x3484 = 1;
	volatile uint64_t t98 = 4553LLU;

	t98 = (((x3481^x3482)%x3483)<<x3484);

	if (t98 != 26LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x3518 = UINT64_MAX;
	int8_t x3519 = INT8_MIN;
	uint32_t x3520 = 0U;

	t99 = (((x3517^x3518)%x3519)<<x3520);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x33 = 826047778431733LLU;
volatile uint8_t x35 = 60U;
volatile uint16_t x77 = UINT16_MAX;
volatile uint16_t x78 = 4U;
int64_t x80 = INT64_MIN;
int64_t x108 = INT64_MIN;
uint64_t x177 = 13118875661LLU;
uint64_t x179 = UINT64_MAX;
volatile int16_t x279 = -1;
uint32_t x288 = 55U;
static int8_t x310 = -18;
volatile uint8_t x311 = 0U;
static int16_t x312 = -1;
static int8_t x375 = 1;
int32_t t8 = 39044;
volatile int64_t t10 = INT64_MAX;
volatile int32_t t13 = 1;
int8_t x601 = 2;
int16_t x604 = -1;
uint16_t x629 = 1U;
int32_t x632 = -668788586;
static volatile uint64_t t16 = 1183880LLU;
uint8_t x657 = 104U;
int32_t x672 = INT32_MAX;
volatile int32_t t19 = 4440;
int8_t x701 = 1;
volatile int32_t t20 = -233772567;
static uint16_t x733 = UINT16_MAX;
static volatile int32_t t22 = 3541;
int8_t x760 = INT8_MIN;
volatile uint64_t x781 = UINT64_MAX;
volatile uint64_t t25 = 131586392585024LLU;
int32_t x853 = 615472;
volatile int8_t x856 = INT8_MAX;
uint8_t x903 = 9U;
uint8_t x904 = 11U;
int8_t x937 = 1;
volatile uint32_t x938 = 2U;
volatile uint8_t x951 = 6U;
uint8_t x977 = 3U;
uint16_t x978 = 197U;
uint16_t x1038 = UINT16_MAX;
uint64_t t33 = 2LLU;
int16_t x1129 = 1;
volatile int64_t x1130 = INT64_MIN;
int16_t x1132 = INT16_MAX;
static int64_t x1143 = -1LL;
uint16_t x1144 = 18U;
volatile int16_t x1205 = INT16_MAX;
static uint16_t x1229 = UINT16_MAX;
int8_t x1230 = 9;
volatile uint64_t t40 = 413613770LLU;
int64_t t42 = -16LL;
uint8_t x1570 = UINT8_MAX;
static uint8_t x1571 = UINT8_MAX;
int8_t x1572 = -1;
uint16_t x1577 = UINT16_MAX;
int8_t x1579 = INT8_MIN;
int32_t t45 = 4809;
volatile int64_t x1633 = 15482002LL;
volatile uint64_t x1644 = UINT64_MAX;
uint8_t x1732 = 2U;
volatile int32_t t50 = 1572;
static uint8_t x1750 = 5U;
int32_t x1829 = 0;
volatile int16_t x1830 = 1;
static volatile int8_t x1850 = 1;
int8_t x1851 = 28;
uint16_t x1901 = UINT16_MAX;
int8_t x1903 = INT8_MAX;
uint64_t x1921 = 68471819799292LLU;
uint8_t x1922 = 56U;
int8_t x1932 = INT8_MIN;
static volatile int64_t x1966 = INT64_MIN;
int64_t x1968 = -1LL;
volatile int64_t x1986 = INT64_MAX;
int16_t x1987 = 0;
uint64_t x2045 = 19046484239454017LLU;
int8_t x2048 = -13;
int32_t x2051 = 185735812;
static int32_t x2130 = -901760;
int8_t x2195 = 2;
volatile int32_t x2196 = -1;
uint16_t x2253 = 0U;
int8_t x2304 = -1;
int64_t x2348 = -17508707744032159LL;
int16_t x2373 = 197;
volatile uint32_t x2376 = UINT32_MAX;
static int64_t x2389 = INT64_MAX;
static volatile uint32_t t76 = UINT32_MAX;
int64_t x2547 = -1LL;
uint32_t x2548 = 2U;
static volatile uint32_t t80 = UINT32_MAX;
static int32_t t81 = -9274;
uint16_t x2757 = 754U;
uint16_t x2769 = 15852U;
int64_t x2903 = -1LL;
uint64_t x2909 = 956080342647LLU;
int8_t x2912 = 21;
static uint16_t x2947 = 63U;
int8_t x2971 = -1;
volatile int8_t x2972 = 3;
uint8_t x3061 = 61U;
volatile int8_t x3063 = 42;
uint64_t x3093 = 6821006LLU;
static int16_t x3095 = INT16_MIN;
int32_t t94 = 8629746;
int32_t x3175 = INT32_MAX;
uint16_t x3211 = UINT16_MAX;
uint64_t x3229 = 25167704528392LLU;
volatile uint16_t x3230 = 0U;
int8_t x3231 = 0;
uint64_t t97 = 43496981407LLU;
uint64_t x3264 = 31156081062LLU;
int64_t x3303 = INT64_MAX;


void f0(void) {
	volatile uint8_t x34 = 1U;
	int8_t x36 = INT8_MIN;
	uint64_t t0 = 9776LLU;

	t0 = (x33<<(x34%(x35+x36)));

	if (t0 != 1652095556863466LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x79 = UINT16_MAX;
	int32_t t1 = 45479778;

	t1 = (x77<<(x78%(x79+x80)));

	if (t1 != 1048560) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x105 = 272U;
	volatile int32_t x106 = 1;
	volatile uint16_t x107 = 103U;
	volatile int32_t t2 = -33950;

	t2 = (x105<<(x106%(x107+x108)));

	if (t2 != 544) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x178 = 0U;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t3 = 216601273741LLU;

	t3 = (x177<<(x178%(x179+x180)));

	if (t3 != 13118875661LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int32_t x278 = 0;
	int32_t x280 = INT32_MAX;
	volatile int32_t t4 = -6;

	t4 = (x277<<(x278%(x279+x280)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x285 = 42U;
	uint64_t x286 = UINT64_MAX;
	volatile int16_t x287 = 27;
	volatile int32_t t5 = 209232598;

	t5 = (x285<<(x286%(x287+x288)));

	if (t5 != 1376256) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint32_t t6 = UINT32_MAX;

	t6 = (x309<<(x310%(x311+x312)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x365 = 1939U;
	int32_t x366 = 13;
	int32_t x367 = INT32_MAX;
	int32_t x368 = -1;
	volatile int32_t t7 = 73;

	t7 = (x365<<(x366%(x367+x368)));

	if (t7 != 15884288) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x373 = 4U;
	int32_t x374 = INT32_MAX;
	static int8_t x376 = 4;

	t8 = (x373<<(x374%(x375+x376)));

	if (t8 != 16) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x413 = 1U;
	uint8_t x414 = 1U;
	int32_t x415 = INT32_MAX;
	int64_t x416 = -1949726LL;
	int32_t t9 = -168;

	t9 = (x413<<(x414%(x415+x416)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x453 = INT64_MAX;
	int8_t x454 = 0;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = INT32_MIN;

	t10 = (x453<<(x454%(x455+x456)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x461 = 7;
	static volatile uint8_t x462 = 38U;
	uint8_t x463 = 0U;
	int32_t x464 = -1;
	volatile int32_t t11 = -169327;

	t11 = (x461<<(x462%(x463+x464)));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x585 = 2U;
	volatile int64_t x586 = INT64_MIN;
	int32_t x587 = -1;
	static int64_t x588 = -1LL;
	int32_t t12 = -4297286;

	t12 = (x585<<(x586%(x587+x588)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x593 = 0;
	int16_t x594 = INT16_MAX;
	int64_t x595 = -1LL;
	uint64_t x596 = 104LLU;

	t13 = (x593<<(x594%(x595+x596)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x602 = 1;
	volatile int8_t x603 = INT8_MIN;
	int32_t t14 = -1030028;

	t14 = (x601<<(x602%(x603+x604)));

	if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x630 = 1U;
	static int64_t x631 = -1LL;
	int32_t t15 = -7;

	t15 = (x629<<(x630%(x631+x632)));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x649 = 1183LLU;
	volatile int64_t x650 = 11224991222LL;
	static int8_t x651 = INT8_MIN;
	volatile uint8_t x652 = 15U;

	t16 = (x649<<(x650%(x651+x652)));

	if (t16 != 4467570830351532032LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x653 = UINT64_MAX;
	static uint16_t x654 = 36U;
	static int64_t x655 = -1LL;
	static int16_t x656 = INT16_MIN;
	volatile uint64_t t17 = 438LLU;

	t17 = (x653<<(x654%(x655+x656)));

	if (t17 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x658 = INT16_MAX;
	volatile int8_t x659 = -1;
	volatile uint64_t x660 = 20LLU;
	int32_t t18 = 194;

	t18 = (x657<<(x658%(x659+x660)));

	if (t18 != 212992) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x669 = 16U;
	uint8_t x670 = 0U;
	uint64_t x671 = 3756102LLU;

	t19 = (x669<<(x670%(x671+x672)));

	if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x702 = 3874625U;
	volatile int16_t x703 = -1;
	int64_t x704 = -1LL;

	t20 = (x701<<(x702%(x703+x704)));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x734 = 1U;
	volatile int64_t x735 = INT64_MAX;
	int8_t x736 = -2;
	int32_t t21 = 606;

	t21 = (x733<<(x734%(x735+x736)));

	if (t21 != 131070) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x737 = 0;
	static int64_t x738 = INT64_MAX;
	static uint32_t x739 = UINT32_MAX;
	volatile int16_t x740 = -1;

	t22 = (x737<<(x738%(x739+x740)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x757 = 24375U;
	int32_t x758 = 0;
	int8_t x759 = INT8_MAX;
	volatile uint32_t t23 = 305873720U;

	t23 = (x757<<(x758%(x759+x760)));

	if (t23 != 24375U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x782 = 3;
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = INT64_MIN;
	volatile uint64_t t24 = 33024LLU;

	t24 = (x781<<(x782%(x783+x784)));

	if (t24 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x809 = 71943149451719LLU;
	uint8_t x810 = 29U;
	int64_t x811 = 2630536401518764LL;
	static volatile int16_t x812 = 82;

	t25 = (x809<<(x810%(x811+x812)));

	if (t25 != 15148912022587965440LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x854 = UINT8_MAX;
	static int8_t x855 = -1;
	int32_t t26 = 22331;

	t26 = (x853<<(x854%(x855+x856)));

	if (t26 != 4923776) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x901 = INT16_MAX;
	int64_t x902 = 2000144143LL;
	int32_t t27 = 7280867;

	t27 = (x901<<(x902%(x903+x904)));

	if (t27 != 262136) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x939 = -1LL;
	uint32_t x940 = 107264150U;
	int32_t t28 = 40620;

	t28 = (x937<<(x938%(x939+x940)));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x949 = 2985U;
	uint16_t x950 = UINT16_MAX;
	static volatile int16_t x952 = 0;
	static volatile int32_t t29 = 154189;

	t29 = (x949<<(x950%(x951+x952)));

	if (t29 != 23880) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x979 = 14U;
	int8_t x980 = 1;
	static volatile int32_t t30 = 2;

	t30 = (x977<<(x978%(x979+x980)));

	if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x981 = UINT32_MAX;
	volatile int16_t x982 = INT16_MAX;
	uint32_t x983 = 3U;
	int8_t x984 = 0;
	uint32_t t31 = 12U;

	t31 = (x981<<(x982%(x983+x984)));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1037 = UINT8_MAX;
	uint16_t x1039 = 5U;
	static int16_t x1040 = INT16_MIN;
	static int32_t t32 = -2502;

	t32 = (x1037<<(x1038%(x1039+x1040)));

	if (t32 != 130560) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1057 = 54282799LLU;
	static int8_t x1058 = -3;
	int64_t x1059 = -1LL;
	static uint64_t x1060 = 81LLU;

	t33 = (x1057<<(x1058%(x1059+x1060)));

	if (t33 != 444684689408LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1131 = INT16_MIN;
	int32_t t34 = -5707;

	t34 = (x1129<<(x1130%(x1131+x1132)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1141 = UINT64_MAX;
	int8_t x1142 = 2;
	volatile uint64_t t35 = 165169287707722927LLU;

	t35 = (x1141<<(x1142%(x1143+x1144)));

	if (t35 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1206 = -1;
	int8_t x1207 = 0;
	int8_t x1208 = -1;
	volatile int32_t t36 = -12;

	t36 = (x1205<<(x1206%(x1207+x1208)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1231 = INT16_MAX;
	volatile int16_t x1232 = -1;
	static volatile int32_t t37 = 80972;

	t37 = (x1229<<(x1230%(x1231+x1232)));

	if (t37 != 33553920) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1249 = 1U;
	int16_t x1250 = INT16_MIN;
	int8_t x1251 = -3;
	int64_t x1252 = -1LL;
	uint32_t t38 = 1U;

	t38 = (x1249<<(x1250%(x1251+x1252)));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1361 = 338186104013698LL;
	static volatile int32_t x1362 = 3;
	uint64_t x1363 = UINT64_MAX;
	static volatile uint32_t x1364 = UINT32_MAX;
	int64_t t39 = 20562LL;

	t39 = (x1361<<(x1362%(x1363+x1364)));

	if (t39 != 2705488832109584LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1397 = 2379186LLU;
	uint8_t x1398 = 9U;
	int64_t x1399 = 0LL;
	uint32_t x1400 = 4930808U;

	t40 = (x1397<<(x1398%(x1399+x1400)));

	if (t40 != 1218143232LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1505 = 4U;
	int64_t x1506 = INT64_MAX;
	volatile uint8_t x1507 = 2U;
	int16_t x1508 = -1;
	volatile int32_t t41 = -2895966;

	t41 = (x1505<<(x1506%(x1507+x1508)));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1565 = 69835798108231436LL;
	uint16_t x1566 = 7U;
	int16_t x1567 = INT16_MIN;
	uint32_t x1568 = 906U;

	t42 = (x1565<<(x1566%(x1567+x1568)));

	if (t42 != 8938982157853623808LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1569 = 131;
	int32_t t43 = -1734;

	t43 = (x1569<<(x1570%(x1571+x1572)));

	if (t43 != 262) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1578 = INT64_MAX;
	int8_t x1580 = -40;
	int32_t t44 = -5967652;

	t44 = (x1577<<(x1578%(x1579+x1580)));

	if (t44 != 8388480) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1609 = 49U;
	static uint16_t x1610 = 2U;
	uint64_t x1611 = UINT64_MAX;
	int8_t x1612 = -1;

	t45 = (x1609<<(x1610%(x1611+x1612)));

	if (t45 != 196) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1634 = INT32_MIN;
	static int16_t x1635 = -1;
	int8_t x1636 = -1;
	static volatile int64_t t46 = -24763386743LL;

	t46 = (x1633<<(x1634%(x1635+x1636)));

	if (t46 != 15482002LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1641 = INT8_MAX;
	int32_t x1642 = 1;
	int64_t x1643 = INT64_MIN;
	static int32_t t47 = 448649762;

	t47 = (x1641<<(x1642%(x1643+x1644)));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1685 = UINT8_MAX;
	static uint8_t x1686 = 1U;
	uint16_t x1687 = 15U;
	uint32_t x1688 = UINT32_MAX;
	static int32_t t48 = -392;

	t48 = (x1685<<(x1686%(x1687+x1688)));

	if (t48 != 510) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1709 = UINT64_MAX;
	uint8_t x1710 = 2U;
	volatile int32_t x1711 = -2660811;
	uint16_t x1712 = 534U;
	uint64_t t49 = 53LLU;

	t49 = (x1709<<(x1710%(x1711+x1712)));

	if (t49 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x1729 = 1505550;
	uint32_t x1730 = UINT32_MAX;
	int16_t x1731 = 1;

	t50 = (x1729<<(x1730%(x1731+x1732)));

	if (t50 != 1505550) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1749 = UINT32_MAX;
	static int64_t x1751 = INT64_MIN;
	uint8_t x1752 = 29U;
	static uint32_t t51 = 7144U;

	t51 = (x1749<<(x1750%(x1751+x1752)));

	if (t51 != 4294967264U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x1793 = INT16_MAX;
	uint8_t x1794 = 11U;
	int32_t x1795 = 41068910;
	static uint64_t x1796 = UINT64_MAX;
	int32_t t52 = 7;

	t52 = (x1793<<(x1794%(x1795+x1796)));

	if (t52 != 67106816) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1831 = 67;
	volatile int32_t x1832 = 3;
	int32_t t53 = -14328;

	t53 = (x1829<<(x1830%(x1831+x1832)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1849 = 14006533LLU;
	volatile uint64_t x1852 = UINT64_MAX;
	volatile uint64_t t54 = 8171196956931934558LLU;

	t54 = (x1849<<(x1850%(x1851+x1852)));

	if (t54 != 28013066LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1902 = 3LLU;
	volatile uint8_t x1904 = 1U;
	static int32_t t55 = 2;

	t55 = (x1901<<(x1902%(x1903+x1904)));

	if (t55 != 524280) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1923 = -1LL;
	static int32_t x1924 = -1;
	static volatile uint64_t t56 = 468940069LLU;

	t56 = (x1921<<(x1922%(x1923+x1924)));

	if (t56 != 68471819799292LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1929 = 19;
	uint16_t x1930 = UINT16_MAX;
	int32_t x1931 = -1;
	int32_t t57 = 19;

	t57 = (x1929<<(x1930%(x1931+x1932)));

	if (t57 != 152) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x1933 = 1U;
	static int32_t x1934 = INT32_MAX;
	int8_t x1935 = INT8_MIN;
	int8_t x1936 = -1;
	volatile int32_t t58 = 1;

	t58 = (x1933<<(x1934%(x1935+x1936)));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1965 = 9U;
	static volatile int8_t x1967 = 9;
	int32_t t59 = -22;

	t59 = (x1965<<(x1966%(x1967+x1968)));

	if (t59 != 9) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x1985 = 0;
	int8_t x1988 = -1;
	int32_t t60 = -1;

	t60 = (x1985<<(x1986%(x1987+x1988)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2009 = 301LL;
	uint8_t x2010 = 3U;
	uint64_t x2011 = 907427892LLU;
	int16_t x2012 = INT16_MAX;
	int64_t t61 = 2400828952162382LL;

	t61 = (x2009<<(x2010%(x2011+x2012)));

	if (t61 != 2408LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2046 = INT16_MAX;
	int8_t x2047 = -1;
	uint64_t t62 = 62557630LLU;

	t62 = (x2045<<(x2046%(x2047+x2048)));

	if (t62 != 2437949982650114176LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2049 = 0;
	int16_t x2050 = 0;
	static volatile uint32_t x2052 = 0U;
	static volatile int32_t t63 = 496903;

	t63 = (x2049<<(x2050%(x2051+x2052)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2129 = 3U;
	uint64_t x2131 = UINT64_MAX;
	uint8_t x2132 = 2U;
	static int32_t t64 = -2713;

	t64 = (x2129<<(x2130%(x2131+x2132)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x2149 = 0U;
	volatile uint16_t x2150 = 1276U;
	volatile int32_t x2151 = -1;
	int16_t x2152 = -1;
	int32_t t65 = 774944;

	t65 = (x2149<<(x2150%(x2151+x2152)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2193 = 2750;
	volatile int64_t x2194 = INT64_MIN;
	static volatile int32_t t66 = -5769864;

	t66 = (x2193<<(x2194%(x2195+x2196)));

	if (t66 != 2750) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2233 = 38484811125LL;
	volatile int8_t x2234 = 0;
	static uint32_t x2235 = UINT32_MAX;
	int8_t x2236 = INT8_MIN;
	int64_t t67 = 1429LL;

	t67 = (x2233<<(x2234%(x2235+x2236)));

	if (t67 != 38484811125LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2254 = 0;
	int32_t x2255 = INT32_MIN;
	uint32_t x2256 = 59U;
	int32_t t68 = 355332;

	t68 = (x2253<<(x2254%(x2255+x2256)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2293 = 274597419653052642LL;
	static int32_t x2294 = -358944471;
	int8_t x2295 = INT8_MAX;
	int8_t x2296 = INT8_MIN;
	int64_t t69 = 3858805897935677LL;

	t69 = (x2293<<(x2294%(x2295+x2296)));

	if (t69 != 274597419653052642LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x2297 = UINT32_MAX;
	uint16_t x2298 = UINT16_MAX;
	volatile uint16_t x2299 = 10U;
	uint16_t x2300 = 0U;
	volatile uint32_t t70 = 21U;

	t70 = (x2297<<(x2298%(x2299+x2300)));

	if (t70 != 4294967264U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x2301 = UINT8_MAX;
	uint64_t x2302 = 1LLU;
	volatile int16_t x2303 = INT16_MIN;
	int32_t t71 = -21833739;

	t71 = (x2301<<(x2302%(x2303+x2304)));

	if (t71 != 510) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2341 = INT8_MAX;
	volatile uint32_t x2342 = UINT32_MAX;
	volatile uint8_t x2343 = 9U;
	int8_t x2344 = 53;
	int32_t t72 = 117;

	t72 = (x2341<<(x2342%(x2343+x2344)));

	if (t72 != 1016) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2345 = 107;
	uint8_t x2346 = 1U;
	int8_t x2347 = -1;
	int32_t t73 = -27;

	t73 = (x2345<<(x2346%(x2347+x2348)));

	if (t73 != 214) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2374 = INT8_MAX;
	static uint8_t x2375 = 42U;
	volatile int32_t t74 = 2230829;

	t74 = (x2373<<(x2374%(x2375+x2376)));

	if (t74 != 3152) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2390 = 18;
	static uint16_t x2391 = 3U;
	volatile int16_t x2392 = -1;
	int64_t t75 = INT64_MAX;

	t75 = (x2389<<(x2390%(x2391+x2392)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2433 = UINT32_MAX;
	volatile int32_t x2434 = 59641884;
	int8_t x2435 = INT8_MIN;
	int8_t x2436 = INT8_MAX;

	t76 = (x2433<<(x2434%(x2435+x2436)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2437 = UINT16_MAX;
	uint16_t x2438 = 11U;
	int8_t x2439 = INT8_MIN;
	uint64_t x2440 = 1053561915LLU;
	int32_t t77 = -156;

	t77 = (x2437<<(x2438%(x2439+x2440)));

	if (t77 != 134215680) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2501 = INT16_MAX;
	volatile uint8_t x2502 = 0U;
	static uint16_t x2503 = 69U;
	uint16_t x2504 = 26240U;
	int32_t t78 = 1254;

	t78 = (x2501<<(x2502%(x2503+x2504)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2545 = UINT64_MAX;
	int64_t x2546 = INT64_MIN;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x2545<<(x2546%(x2547+x2548)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x2577 = UINT32_MAX;
	int8_t x2578 = INT8_MIN;
	int16_t x2579 = -1;
	static int8_t x2580 = 3;

	t80 = (x2577<<(x2578%(x2579+x2580)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2701 = 0;
	uint8_t x2702 = 26U;
	int32_t x2703 = 6;
	uint8_t x2704 = 7U;

	t81 = (x2701<<(x2702%(x2703+x2704)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2758 = 1;
	volatile uint16_t x2759 = UINT16_MAX;
	static int16_t x2760 = INT16_MAX;
	volatile int32_t t82 = -1;

	t82 = (x2757<<(x2758%(x2759+x2760)));

	if (t82 != 1508) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2770 = 6;
	uint16_t x2771 = 8U;
	int32_t x2772 = INT32_MIN;
	volatile int32_t t83 = -291249;

	t83 = (x2769<<(x2770%(x2771+x2772)));

	if (t83 != 1014528) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2841 = UINT8_MAX;
	int8_t x2842 = 62;
	static volatile uint16_t x2843 = 1U;
	static int16_t x2844 = 1;
	int32_t t84 = 10062;

	t84 = (x2841<<(x2842%(x2843+x2844)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2901 = 2U;
	uint8_t x2902 = 25U;
	int8_t x2904 = INT8_MAX;
	volatile uint32_t t85 = 719351192U;

	t85 = (x2901<<(x2902%(x2903+x2904)));

	if (t85 != 67108864U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2910 = -1;
	static uint32_t x2911 = 48U;
	volatile uint64_t t86 = 0LLU;

	t86 = (x2909<<(x2910%(x2911+x2912)));

	if (t86 != 17149707381026848768LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x2945 = 0U;
	uint16_t x2946 = 0U;
	int16_t x2948 = INT16_MIN;
	static uint32_t t87 = 46238U;

	t87 = (x2945<<(x2946%(x2947+x2948)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2969 = UINT64_MAX;
	volatile int16_t x2970 = 1744;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (x2969<<(x2970%(x2971+x2972)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3013 = UINT16_MAX;
	static uint32_t x3014 = 18U;
	int8_t x3015 = -49;
	uint8_t x3016 = 55U;
	int32_t t89 = 380966920;

	t89 = (x3013<<(x3014%(x3015+x3016)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x3021 = 1592U;
	volatile uint8_t x3022 = 0U;
	volatile uint8_t x3023 = 1U;
	volatile int16_t x3024 = -20;
	volatile int32_t t90 = -495374;

	t90 = (x3021<<(x3022%(x3023+x3024)));

	if (t90 != 1592) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x3057 = 1345U;
	static uint8_t x3058 = 14U;
	uint16_t x3059 = 3U;
	uint8_t x3060 = 13U;
	int32_t t91 = 1;

	t91 = (x3057<<(x3058%(x3059+x3060)));

	if (t91 != 22036480) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3062 = -1LL;
	uint64_t x3064 = UINT64_MAX;
	volatile int32_t t92 = -31508668;

	t92 = (x3061<<(x3062%(x3063+x3064)));

	if (t92 != 1998848) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3094 = INT32_MAX;
	int64_t x3096 = -1LL;
	static volatile uint64_t t93 = 233185LLU;

	t93 = (x3093<<(x3094%(x3095+x3096)));

	if (t93 != 13642012LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3141 = UINT16_MAX;
	uint8_t x3142 = 15U;
	int32_t x3143 = INT32_MAX;
	int32_t x3144 = INT32_MIN;

	t94 = (x3141<<(x3142%(x3143+x3144)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x3173 = 17024400090432949LLU;
	uint32_t x3174 = UINT32_MAX;
	int64_t x3176 = -1LL;
	static uint64_t t95 = 31LLU;

	t95 = (x3173<<(x3174%(x3175+x3176)));

	if (t95 != 136195200723463592LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3209 = 47640944;
	uint16_t x3210 = 3U;
	static int32_t x3212 = 25139994;
	static volatile int32_t t96 = -258419;

	t96 = (x3209<<(x3210%(x3211+x3212)));

	if (t96 != 381127552) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3232 = UINT32_MAX;

	t97 = (x3229<<(x3230%(x3231+x3232)));

	if (t97 != 25167704528392LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3261 = 9;
	uint32_t x3262 = 15U;
	static int8_t x3263 = 0;
	volatile int32_t t98 = 7610074;

	t98 = (x3261<<(x3262%(x3263+x3264)));

	if (t98 != 294912) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x3301 = 4U;
	volatile int16_t x3302 = INT16_MAX;
	int64_t x3304 = INT64_MIN;
	volatile int32_t t99 = 78;

	t99 = (x3301<<(x3302%(x3303+x3304)));

	if (t99 != 4) { NG(); } else { ; }
	
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


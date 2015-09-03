#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = -175398152;
int16_t x30 = INT16_MIN;
static uint64_t x32 = 23LLU;
volatile int32_t t1 = -116465;
volatile int16_t x71 = INT16_MIN;
static int32_t x74 = INT32_MAX;
static int16_t x75 = 1;
int8_t x110 = INT8_MAX;
uint8_t x111 = 0U;
volatile uint64_t t7 = 1207487489LLU;
int8_t x202 = -1;
volatile uint8_t x204 = 15U;
static int64_t x219 = -1LL;
int32_t x287 = -1;
int8_t x292 = 0;
int64_t x333 = -1LL;
volatile int16_t x334 = -1;
int64_t t14 = 2173954414273LL;
int16_t x353 = 1;
int16_t x354 = -1;
int16_t x481 = -3;
int32_t t19 = -2644;
static uint8_t x736 = 31U;
int32_t x785 = 495326;
static int16_t x788 = 10;
static int8_t x792 = 0;
int16_t x793 = INT16_MIN;
volatile int64_t x794 = INT64_MIN;
volatile int64_t t25 = 13334937874LL;
int32_t x829 = -1;
uint8_t x832 = 10U;
int16_t x899 = 6;
uint8_t x900 = 5U;
uint64_t t29 = 2604959LLU;
volatile int32_t t30 = -79140;
static volatile int16_t x946 = 10937;
static volatile uint32_t t31 = 2U;
volatile int16_t x989 = INT16_MIN;
static volatile int16_t x990 = -1;
volatile int32_t t33 = 195020;
int8_t x1018 = -1;
int8_t x1020 = 0;
volatile uint32_t t39 = 123U;
static uint64_t x1306 = 1609269219LLU;
uint32_t x1308 = 1U;
int16_t x1429 = INT16_MAX;
volatile int32_t t41 = 490802178;
int32_t x1467 = 158191258;
uint64_t t43 = 7897801250078305LLU;
static int32_t x1594 = -15;
uint64_t x1665 = UINT64_MAX;
static int16_t x1666 = 93;
uint64_t t50 = 13624LLU;
uint16_t x1688 = 3U;
volatile uint64_t t53 = 13764305LLU;
int64_t x1757 = -1LL;
int16_t x1796 = 1;
static int32_t t56 = 0;
volatile uint32_t x1831 = UINT32_MAX;
int8_t x1832 = 3;
volatile uint64_t t60 = 422255750LLU;
static volatile uint32_t t62 = 8766U;
volatile int64_t t63 = -16LL;
int16_t x2068 = 0;
int64_t t65 = 1605LL;
static volatile int64_t t66 = -125728454741LL;
int8_t x2209 = -1;
static int16_t x2212 = 1;
int8_t x2339 = INT8_MIN;
uint64_t x2345 = UINT64_MAX;
uint8_t x2372 = 10U;
volatile uint64_t t74 = 21885928413LLU;
static uint8_t x2407 = 3U;
static volatile int32_t t76 = -754;
static volatile uint32_t t77 = 101234U;
int8_t x2493 = -19;
volatile uint32_t x2561 = UINT32_MAX;
uint16_t x2640 = 55U;
int8_t x2645 = INT8_MAX;
int32_t x2671 = INT32_MAX;
uint8_t x2672 = 13U;
int32_t t82 = -3;
int8_t x2691 = 0;
uint32_t t84 = 1764772746U;
static uint64_t t85 = 34507384906679LLU;
static uint32_t x2773 = UINT32_MAX;
int32_t x2774 = 1;
int64_t x2775 = -2714138979962LL;
volatile int64_t t86 = 1516529186946383252LL;
volatile int16_t x2882 = 2;
static int8_t x2884 = 3;
int64_t x2935 = -5465707417704048LL;
uint32_t x2942 = 1U;
volatile int64_t t90 = 48851324899LL;
uint32_t x2973 = 128081731U;
int32_t x2975 = 1;
volatile int8_t x3031 = -1;
uint16_t x3073 = 1U;
volatile int8_t x3075 = INT8_MAX;
int32_t x3113 = INT32_MIN;
volatile int8_t x3122 = INT8_MIN;
uint8_t x3124 = 11U;
volatile int64_t x3162 = -1LL;
static volatile int64_t t99 = -1351790LL;


void f0(void) {
	volatile int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MIN;
	int8_t x8 = 6;
	static volatile int64_t t0 = -6882654LL;

	t0 = (((x5/x6)&x7)<<x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x29 = -1;
	volatile int16_t x31 = -1;

	t1 = (((x29/x30)&x31)<<x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x69 = 11044;
	static volatile uint8_t x70 = 45U;
	volatile uint8_t x72 = 4U;
	volatile int32_t t2 = -308;

	t2 = (((x69/x70)&x71)<<x72);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x73 = 27U;
	uint16_t x76 = 14U;
	volatile int32_t t3 = 1;

	t3 = (((x73/x74)&x75)<<x76);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	static uint64_t x83 = 669350LLU;
	int8_t x84 = 60;
	uint64_t t4 = 5917777228483203328LLU;

	t4 = (((x81/x82)&x83)<<x84);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int8_t x112 = 23;
	volatile int32_t t5 = -17;

	t5 = (((x109/x110)&x111)<<x112);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x133 = 6;
	uint16_t x134 = 2U;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = 16;
	volatile int32_t t6 = -1949160;

	t6 = (((x133/x134)&x135)<<x136);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x161 = INT16_MAX;
	uint64_t x162 = 110186359LLU;
	static int16_t x163 = INT16_MIN;
	uint16_t x164 = 3U;

	t7 = (((x161/x162)&x163)<<x164);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x201 = 470194U;
	int32_t x203 = 42;
	static uint32_t t8 = 102U;

	t8 = (((x201/x202)&x203)<<x204);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x217 = -1;
	int64_t x218 = 4938637LL;
	uint16_t x220 = 0U;
	static int64_t t9 = 7LL;

	t9 = (((x217/x218)&x219)<<x220);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x237 = 0U;
	uint8_t x238 = UINT8_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = 0;
	int32_t t10 = 6;

	t10 = (((x237/x238)&x239)<<x240);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x249 = INT16_MAX;
	volatile int8_t x250 = INT8_MIN;
	uint16_t x251 = UINT16_MAX;
	static int8_t x252 = 1;
	volatile int32_t t11 = -38;

	t11 = (((x249/x250)&x251)<<x252);

	if (t11 != 130562) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x285 = INT64_MAX;
	static uint8_t x286 = UINT8_MAX;
	static volatile int8_t x288 = 0;
	static int64_t t12 = -86769LL;

	t12 = (((x285/x286)&x287)<<x288);

	if (t12 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x289 = -1;
	volatile uint8_t x290 = 20U;
	int16_t x291 = INT16_MIN;
	static volatile int32_t t13 = -15380593;

	t13 = (((x289/x290)&x291)<<x292);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x335 = 7U;
	int16_t x336 = 25;

	t14 = (((x333/x334)&x335)<<x336);

	if (t14 != 33554432LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x355 = 5U;
	int16_t x356 = 1;
	volatile int32_t t15 = -35;

	t15 = (((x353/x354)&x355)<<x356);

	if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	volatile uint32_t x387 = 265U;
	uint16_t x388 = 13U;
	volatile int64_t t16 = -84798990LL;

	t16 = (((x385/x386)&x387)<<x388);

	if (t16 != 2162688LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x465 = -57;
	static int8_t x466 = 2;
	volatile uint32_t x467 = UINT32_MAX;
	uint8_t x468 = 0U;
	volatile uint32_t t17 = 5259860U;

	t17 = (((x465/x466)&x467)<<x468);

	if (t17 != 4294967268U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x482 = 5U;
	int32_t x483 = INT32_MAX;
	uint16_t x484 = 1U;
	volatile int32_t t18 = 64163604;

	t18 = (((x481/x482)&x483)<<x484);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x557 = -1;
	volatile int8_t x558 = -1;
	volatile uint16_t x559 = 457U;
	volatile uint8_t x560 = 30U;

	t19 = (((x557/x558)&x559)<<x560);

	if (t19 != 1073741824) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x633 = 14;
	static volatile int8_t x634 = INT8_MAX;
	static uint64_t x635 = 2754145967057386LLU;
	int16_t x636 = 5;
	static volatile uint64_t t20 = 6678453589LLU;

	t20 = (((x633/x634)&x635)<<x636);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x733 = INT32_MIN;
	static int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 1446297429U;
	uint32_t t21 = 25389323U;

	t21 = (((x733/x734)&x735)<<x736);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x741 = -1;
	int16_t x742 = INT16_MAX;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = 3;
	volatile int32_t t22 = 28;

	t22 = (((x741/x742)&x743)<<x744);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x786 = UINT16_MAX;
	static int8_t x787 = INT8_MIN;
	volatile int32_t t23 = 124067;

	t23 = (((x785/x786)&x787)<<x788);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x789 = -13597224;
	uint64_t x790 = 17013LLU;
	int8_t x791 = INT8_MIN;
	uint64_t t24 = 710LLU;

	t24 = (((x789/x790)&x791)<<x792);

	if (t24 != 1084273442290944LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x795 = INT32_MAX;
	static uint8_t x796 = 11U;

	t25 = (((x793/x794)&x795)<<x796);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x830 = INT8_MIN;
	int16_t x831 = -1;
	volatile int32_t t26 = 106173949;

	t26 = (((x829/x830)&x831)<<x832);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x873 = INT16_MAX;
	uint16_t x874 = UINT16_MAX;
	int8_t x875 = INT8_MIN;
	int8_t x876 = 6;
	volatile int32_t t27 = -123622199;

	t27 = (((x873/x874)&x875)<<x876);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x897 = INT16_MIN;
	volatile uint16_t x898 = UINT16_MAX;
	volatile int32_t t28 = 0;

	t28 = (((x897/x898)&x899)<<x900);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x909 = 1;
	uint64_t x910 = UINT64_MAX;
	uint32_t x911 = 480784U;
	int16_t x912 = 1;

	t29 = (((x909/x910)&x911)<<x912);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x933 = 0;
	int16_t x934 = 13122;
	uint16_t x935 = 805U;
	static int8_t x936 = 0;

	t30 = (((x933/x934)&x935)<<x936);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x945 = INT32_MIN;
	uint32_t x947 = 29U;
	int16_t x948 = 26;

	t31 = (((x945/x946)&x947)<<x948);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x949 = INT16_MIN;
	uint64_t x950 = 1977898LLU;
	uint8_t x951 = 10U;
	static uint8_t x952 = 12U;
	uint64_t t32 = 53222945LLU;

	t32 = (((x949/x950)&x951)<<x952);

	if (t32 != 40960LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x991 = 5U;
	volatile uint32_t x992 = 0U;

	t33 = (((x989/x990)&x991)<<x992);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1017 = 269949522713422015LLU;
	int32_t x1019 = -974888425;
	volatile uint64_t t34 = 12558505LLU;

	t34 = (((x1017/x1018)&x1019)<<x1020);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1053 = 30U;
	int32_t x1054 = INT32_MIN;
	int16_t x1055 = -3928;
	volatile uint16_t x1056 = 5U;
	volatile int32_t t35 = 60996606;

	t35 = (((x1053/x1054)&x1055)<<x1056);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1093 = -1;
	int16_t x1094 = 114;
	static volatile uint8_t x1095 = 1U;
	static uint16_t x1096 = 2U;
	static int32_t t36 = 8122;

	t36 = (((x1093/x1094)&x1095)<<x1096);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1133 = UINT16_MAX;
	static int32_t x1134 = INT32_MIN;
	int8_t x1135 = -1;
	uint16_t x1136 = 17U;
	volatile int32_t t37 = -280;

	t37 = (((x1133/x1134)&x1135)<<x1136);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1189 = INT8_MIN;
	int32_t x1190 = -255332;
	int8_t x1191 = 0;
	uint8_t x1192 = 30U;
	int32_t t38 = 14129;

	t38 = (((x1189/x1190)&x1191)<<x1192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1261 = INT16_MAX;
	uint32_t x1262 = UINT32_MAX;
	int8_t x1263 = INT8_MIN;
	volatile uint8_t x1264 = 3U;

	t39 = (((x1261/x1262)&x1263)<<x1264);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1305 = 0U;
	int8_t x1307 = INT8_MIN;
	volatile uint64_t t40 = 171835779906LLU;

	t40 = (((x1305/x1306)&x1307)<<x1308);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1430 = 847;
	int16_t x1431 = 0;
	uint8_t x1432 = 0U;

	t41 = (((x1429/x1430)&x1431)<<x1432);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1465 = 30613721302LLU;
	int64_t x1466 = -1LL;
	int8_t x1468 = 0;
	uint64_t t42 = 1613285473LLU;

	t42 = (((x1465/x1466)&x1467)<<x1468);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1469 = UINT64_MAX;
	volatile int64_t x1470 = -297999LL;
	int16_t x1471 = INT16_MIN;
	volatile uint8_t x1472 = 16U;

	t43 = (((x1469/x1470)&x1471)<<x1472);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1481 = INT8_MIN;
	int32_t x1482 = INT32_MIN;
	uint8_t x1483 = 1U;
	uint64_t x1484 = 23LLU;
	volatile int32_t t44 = -17668;

	t44 = (((x1481/x1482)&x1483)<<x1484);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x1485 = UINT64_MAX;
	int32_t x1486 = INT32_MIN;
	int16_t x1487 = -945;
	volatile uint32_t x1488 = 2U;
	volatile uint64_t t45 = 0LLU;

	t45 = (((x1485/x1486)&x1487)<<x1488);

	if (t45 != 4LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1501 = 69033797714LLU;
	int64_t x1502 = 508692LL;
	int16_t x1503 = -6363;
	volatile uint8_t x1504 = 0U;
	volatile uint64_t t46 = 4857839995544168103LLU;

	t46 = (((x1501/x1502)&x1503)<<x1504);

	if (t46 != 131588LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1593 = INT16_MAX;
	static volatile uint64_t x1595 = 14687856827LLU;
	int64_t x1596 = 31LL;
	volatile uint64_t t47 = 30727LLU;

	t47 = (((x1593/x1594)&x1595)<<x1596);

	if (t47 != 13095183607071244288LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1633 = -15446;
	uint16_t x1634 = 416U;
	volatile uint8_t x1635 = 0U;
	volatile int8_t x1636 = 15;
	volatile int32_t t48 = -69;

	t48 = (((x1633/x1634)&x1635)<<x1636);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1657 = -3;
	uint16_t x1658 = UINT16_MAX;
	int32_t x1659 = INT32_MAX;
	int8_t x1660 = 1;
	int32_t t49 = 6274269;

	t49 = (((x1657/x1658)&x1659)<<x1660);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1667 = 843076LLU;
	static volatile uint8_t x1668 = 5U;

	t50 = (((x1665/x1666)&x1667)<<x1668);

	if (t50 != 1572864LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1685 = INT16_MIN;
	int8_t x1686 = -1;
	int8_t x1687 = -1;
	static int32_t t51 = 549003;

	t51 = (((x1685/x1686)&x1687)<<x1688);

	if (t51 != 262144) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1705 = INT8_MIN;
	uint32_t x1706 = 7781782U;
	static volatile int32_t x1707 = INT32_MIN;
	static volatile int16_t x1708 = 3;
	static uint32_t t52 = 715U;

	t52 = (((x1705/x1706)&x1707)<<x1708);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1725 = -61;
	static uint64_t x1726 = UINT64_MAX;
	static uint32_t x1727 = 25755730U;
	uint8_t x1728 = 13U;

	t53 = (((x1725/x1726)&x1727)<<x1728);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1758 = -1;
	static int32_t x1759 = INT32_MAX;
	uint8_t x1760 = 3U;
	int64_t t54 = -1050372534LL;

	t54 = (((x1757/x1758)&x1759)<<x1760);

	if (t54 != 8LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1765 = 58772610837LL;
	uint16_t x1766 = 9066U;
	uint16_t x1767 = 8U;
	int8_t x1768 = 36;
	volatile int64_t t55 = 14656351689462519LL;

	t55 = (((x1765/x1766)&x1767)<<x1768);

	if (t55 != 549755813888LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1793 = 177U;
	volatile int8_t x1794 = -30;
	static volatile int16_t x1795 = INT16_MAX;

	t56 = (((x1793/x1794)&x1795)<<x1796);

	if (t56 != 65526) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1809 = INT8_MIN;
	static volatile int8_t x1810 = -1;
	volatile int64_t x1811 = INT64_MAX;
	uint8_t x1812 = 51U;
	volatile int64_t t57 = -3316270145694107041LL;

	t57 = (((x1809/x1810)&x1811)<<x1812);

	if (t57 != 288230376151711744LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1829 = INT8_MIN;
	uint16_t x1830 = 7U;
	static uint32_t t58 = 292401414U;

	t58 = (((x1829/x1830)&x1831)<<x1832);

	if (t58 != 4294967152U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1905 = UINT8_MAX;
	int8_t x1906 = INT8_MAX;
	uint8_t x1907 = 0U;
	static uint8_t x1908 = 26U;
	static int32_t t59 = -2224;

	t59 = (((x1905/x1906)&x1907)<<x1908);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1945 = 482992898LLU;
	static volatile int32_t x1946 = INT32_MIN;
	int64_t x1947 = -60368612655502036LL;
	uint8_t x1948 = 30U;

	t60 = (((x1945/x1946)&x1947)<<x1948);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1953 = 13U;
	uint8_t x1954 = 1U;
	int8_t x1955 = INT8_MAX;
	static uint16_t x1956 = 1U;
	int32_t t61 = 346;

	t61 = (((x1953/x1954)&x1955)<<x1956);

	if (t61 != 26) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1957 = 4539711U;
	static int8_t x1958 = 47;
	int32_t x1959 = -1;
	static int64_t x1960 = 7LL;

	t62 = (((x1957/x1958)&x1959)<<x1960);

	if (t62 != 12363392U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2001 = 64820228LL;
	uint32_t x2002 = 2006590U;
	int64_t x2003 = INT64_MIN;
	uint64_t x2004 = 3LLU;

	t63 = (((x2001/x2002)&x2003)<<x2004);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x2053 = 562571913325247035LLU;
	int8_t x2054 = INT8_MIN;
	int8_t x2055 = INT8_MAX;
	static volatile uint8_t x2056 = 1U;
	volatile uint64_t t64 = 720444462LLU;

	t64 = (((x2053/x2054)&x2055)<<x2056);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2065 = INT64_MIN;
	int32_t x2066 = -41405;
	volatile int16_t x2067 = INT16_MIN;

	t65 = (((x2065/x2066)&x2067)<<x2068);

	if (t65 != 222759860797440LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2189 = -1;
	volatile int64_t x2190 = INT64_MIN;
	uint8_t x2191 = UINT8_MAX;
	int32_t x2192 = 1;

	t66 = (((x2189/x2190)&x2191)<<x2192);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2210 = INT32_MIN;
	uint64_t x2211 = UINT64_MAX;
	uint64_t t67 = 22349796LLU;

	t67 = (((x2209/x2210)&x2211)<<x2212);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2241 = UINT8_MAX;
	static int32_t x2242 = INT32_MIN;
	uint16_t x2243 = 4U;
	static uint16_t x2244 = 8U;
	static int32_t t68 = -75250;

	t68 = (((x2241/x2242)&x2243)<<x2244);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x2249 = UINT64_MAX;
	uint8_t x2250 = UINT8_MAX;
	int8_t x2251 = INT8_MIN;
	uint8_t x2252 = 31U;
	volatile uint64_t t69 = 81285789081LLU;

	t69 = (((x2249/x2250)&x2251)<<x2252);

	if (t69 != 9259542121117908992LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2289 = -1;
	int8_t x2290 = INT8_MIN;
	int8_t x2291 = INT8_MIN;
	int8_t x2292 = 1;
	volatile int32_t t70 = -46452;

	t70 = (((x2289/x2290)&x2291)<<x2292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x2317 = 12946LLU;
	int16_t x2318 = INT16_MAX;
	volatile int16_t x2319 = INT16_MIN;
	uint16_t x2320 = 59U;
	uint64_t t71 = 9316992146865LLU;

	t71 = (((x2317/x2318)&x2319)<<x2320);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2337 = -49144751;
	static uint32_t x2338 = UINT32_MAX;
	uint16_t x2340 = 24U;
	uint32_t t72 = 19948720U;

	t72 = (((x2337/x2338)&x2339)<<x2340);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2346 = -472;
	int8_t x2347 = INT8_MAX;
	uint8_t x2348 = 0U;
	uint64_t t73 = 1801070385LLU;

	t73 = (((x2345/x2346)&x2347)<<x2348);

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2369 = UINT16_MAX;
	uint64_t x2370 = UINT64_MAX;
	int8_t x2371 = 0;

	t74 = (((x2369/x2370)&x2371)<<x2372);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2385 = INT8_MIN;
	volatile int64_t x2386 = 1858785944783938301LL;
	int16_t x2387 = -1;
	volatile int8_t x2388 = 1;
	int64_t t75 = 638LL;

	t75 = (((x2385/x2386)&x2387)<<x2388);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2405 = -31731;
	int16_t x2406 = -1;
	uint8_t x2408 = 5U;

	t76 = (((x2405/x2406)&x2407)<<x2408);

	if (t76 != 96) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2469 = 1080;
	uint32_t x2470 = UINT32_MAX;
	int16_t x2471 = -1;
	int8_t x2472 = 1;

	t77 = (((x2469/x2470)&x2471)<<x2472);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2494 = INT64_MIN;
	volatile int32_t x2495 = -8947;
	volatile uint8_t x2496 = 48U;
	int64_t t78 = -108726636LL;

	t78 = (((x2493/x2494)&x2495)<<x2496);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2562 = 509550;
	static int64_t x2563 = -5435LL;
	uint64_t x2564 = 3LLU;
	static volatile int64_t t79 = -18037311338104736LL;

	t79 = (((x2561/x2562)&x2563)<<x2564);

	if (t79 != 67104LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x2637 = UINT32_MAX;
	uint16_t x2638 = UINT16_MAX;
	int64_t x2639 = INT64_MIN;
	volatile int64_t t80 = 933953LL;

	t80 = (((x2637/x2638)&x2639)<<x2640);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x2646 = INT64_MIN;
	volatile int64_t x2647 = INT64_MAX;
	int8_t x2648 = 26;
	volatile int64_t t81 = 11802466160519501LL;

	t81 = (((x2645/x2646)&x2647)<<x2648);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2669 = INT8_MIN;
	volatile uint16_t x2670 = UINT16_MAX;

	t82 = (((x2669/x2670)&x2671)<<x2672);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2681 = -1;
	int64_t x2682 = 1165121498999LL;
	int16_t x2683 = INT16_MIN;
	int16_t x2684 = 2;
	volatile int64_t t83 = 475806178LL;

	t83 = (((x2681/x2682)&x2683)<<x2684);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2689 = -1;
	static volatile uint32_t x2690 = UINT32_MAX;
	volatile int8_t x2692 = 5;

	t84 = (((x2689/x2690)&x2691)<<x2692);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2713 = INT16_MAX;
	uint64_t x2714 = 5424542799175LLU;
	int64_t x2715 = -1418LL;
	int8_t x2716 = 2;

	t85 = (((x2713/x2714)&x2715)<<x2716);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x2776 = 7U;

	t86 = (((x2773/x2774)&x2775)<<x2776);

	if (t86 != 35884942080LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x2849 = 491168260477LL;
	static uint16_t x2850 = 246U;
	volatile int32_t x2851 = INT32_MIN;
	static int32_t x2852 = 3;
	int64_t t87 = 230224994326LL;

	t87 = (((x2849/x2850)&x2851)<<x2852);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x2881 = INT8_MIN;
	int16_t x2883 = INT16_MAX;
	volatile int32_t t88 = -102466581;

	t88 = (((x2881/x2882)&x2883)<<x2884);

	if (t88 != 261632) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2933 = -1LL;
	int32_t x2934 = -112098;
	uint32_t x2936 = 2U;
	int64_t t89 = 1707LL;

	t89 = (((x2933/x2934)&x2935)<<x2936);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x2941 = -1;
	int64_t x2943 = INT64_MIN;
	uint32_t x2944 = 3U;

	t90 = (((x2941/x2942)&x2943)<<x2944);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2965 = 15U;
	static uint8_t x2966 = 32U;
	static int32_t x2967 = -2000787;
	volatile uint16_t x2968 = 1U;
	uint32_t t91 = 1322193U;

	t91 = (((x2965/x2966)&x2967)<<x2968);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2974 = INT8_MIN;
	int8_t x2976 = 0;
	volatile uint32_t t92 = 0U;

	t92 = (((x2973/x2974)&x2975)<<x2976);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x3029 = 3081U;
	static uint8_t x3030 = 27U;
	uint8_t x3032 = 4U;
	int32_t t93 = 133775;

	t93 = (((x3029/x3030)&x3031)<<x3032);

	if (t93 != 1824) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3074 = 25LL;
	uint16_t x3076 = 3U;
	int64_t t94 = 12LL;

	t94 = (((x3073/x3074)&x3075)<<x3076);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3093 = INT8_MAX;
	volatile int8_t x3094 = INT8_MIN;
	uint16_t x3095 = 2U;
	int8_t x3096 = 6;
	static volatile int32_t t95 = -369;

	t95 = (((x3093/x3094)&x3095)<<x3096);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3114 = 1;
	volatile uint64_t x3115 = UINT64_MAX;
	int8_t x3116 = 1;
	volatile uint64_t t96 = 542462990657672682LLU;

	t96 = (((x3113/x3114)&x3115)<<x3116);

	if (t96 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3121 = INT16_MIN;
	int64_t x3123 = 109LL;
	volatile int64_t t97 = -99890511LL;

	t97 = (((x3121/x3122)&x3123)<<x3124);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3141 = -1;
	int64_t x3142 = INT64_MIN;
	uint8_t x3143 = 46U;
	uint8_t x3144 = 1U;
	int64_t t98 = 7227173105214LL;

	t98 = (((x3141/x3142)&x3143)<<x3144);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3161 = INT16_MIN;
	volatile int32_t x3163 = -1;
	volatile uint8_t x3164 = 1U;

	t99 = (((x3161/x3162)&x3163)<<x3164);

	if (t99 != 65536LL) { NG(); } else { ; }
	
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


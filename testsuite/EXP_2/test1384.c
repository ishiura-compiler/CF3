#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -7875;
static volatile int16_t x187 = -282;
int64_t t3 = 99LL;
int32_t t6 = -5110;
int8_t x449 = INT8_MIN;
uint64_t x499 = 26593LLU;
volatile int32_t t8 = -229;
int16_t x637 = 7500;
int16_t x647 = INT16_MIN;
static uint64_t x725 = 0LLU;
volatile int64_t x767 = INT64_MAX;
int8_t x909 = -1;
int32_t t20 = -179566998;
uint8_t x1020 = 1U;
int32_t x1129 = 892676721;
volatile int16_t x1130 = 1;
volatile uint32_t x1182 = 63269U;
static int16_t x1295 = INT16_MIN;
int8_t x1297 = 28;
int64_t x1389 = -1LL;
int8_t x1449 = INT8_MIN;
int16_t x1451 = -1;
volatile uint64_t x1474 = 6700324128681974327LLU;
static volatile uint32_t x1476 = 14U;
uint16_t x1481 = 742U;
volatile int16_t x1541 = INT16_MIN;
int16_t x1542 = INT16_MIN;
static int64_t x1543 = INT64_MIN;
int32_t t37 = 986460;
volatile uint16_t x1648 = 2U;
int16_t x1682 = -168;
int64_t x1778 = 603831351053558LL;
uint8_t x1780 = 0U;
uint8_t x1791 = UINT8_MAX;
uint16_t x1792 = 0U;
uint8_t x1866 = 50U;
uint32_t x1897 = UINT32_MAX;
int8_t x1976 = 8;
int16_t x2171 = INT16_MAX;
int32_t t54 = -526;
static int32_t t55 = 119802785;
int32_t x2242 = 28704539;
volatile int8_t x2274 = INT8_MIN;
uint16_t x2276 = 0U;
uint16_t x2295 = 7887U;
uint8_t x2296 = 6U;
static int8_t x2362 = -1;
uint16_t x2471 = UINT16_MAX;
int16_t x2485 = 5;
static int16_t x2505 = INT16_MAX;
uint8_t x2508 = 13U;
volatile uint32_t x2541 = 102023232U;
uint8_t x2586 = 13U;
uint8_t x2588 = 10U;
static int16_t x2699 = INT16_MIN;
uint32_t x2720 = 14U;
static int64_t t69 = -308LL;
static volatile int32_t t70 = 0;
static uint8_t x2856 = 8U;
int32_t x2879 = -1;
int8_t x2885 = -1;
int8_t x2887 = INT8_MAX;
volatile int32_t t73 = 1;
int16_t x2935 = -414;
volatile uint8_t x2961 = 109U;
uint8_t x2984 = 8U;
uint32_t x2992 = 1U;
int8_t x3020 = 2;
volatile int64_t x3028 = 26LL;
uint32_t x3201 = 127U;
int8_t x3203 = -1;
volatile int32_t x3204 = 0;
volatile int32_t t83 = -11;
volatile uint32_t x3383 = UINT32_MAX;
volatile uint8_t x3449 = 28U;
uint8_t x3465 = 104U;
uint16_t x3466 = 13U;
uint64_t x3467 = UINT64_MAX;
int32_t t86 = 0;
int16_t x3508 = 0;
volatile int64_t x3509 = INT64_MIN;
int64_t t88 = 505375264LL;
uint32_t x3762 = 138947392U;
static int64_t x3764 = 8LL;
uint8_t x3809 = 0U;
uint8_t x3834 = 0U;
int8_t x3836 = 1;
uint64_t x3857 = 394LLU;
uint64_t t94 = 2154436LLU;
volatile uint32_t x3890 = 473634U;
int8_t x3932 = 14;
volatile int64_t t97 = 931119465LL;
uint64_t x4039 = 1LLU;


void f0(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	volatile int64_t x35 = -1LL;
	uint8_t x36 = 6U;

	t0 = ((x33*(x34<x35))<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 1LLU;
	static int64_t x50 = INT64_MIN;
	static volatile int8_t x51 = INT8_MIN;
	int16_t x52 = 12;
	static volatile uint64_t t1 = 266566290745334172LLU;

	t1 = ((x49*(x50<x51))<<x52);

	if (t1 != 4096LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x89 = INT64_MAX;
	static volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = 0U;
	static volatile int64_t t2 = INT64_MAX;

	t2 = ((x89*(x90<x91))<<x92);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x185 = -3913596354102LL;
	int64_t x186 = 3474322430539308315LL;
	static int8_t x188 = 11;

	t3 = ((x185*(x186<x187))<<x188);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x241 = 1;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MAX;
	static uint8_t x244 = 1U;
	int32_t t4 = 93083512;

	t4 = ((x241*(x242<x243))<<x244);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x265 = -1989LL;
	static int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 30U;
	int64_t t5 = -253274LL;

	t5 = ((x265*(x266<x267))<<x268);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 2U;
	int16_t x376 = 6;

	t6 = ((x373*(x374<x375))<<x376);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x450 = INT16_MAX;
	int8_t x451 = -3;
	static volatile int64_t x452 = 11LL;
	volatile int32_t t7 = 2819;

	t7 = ((x449*(x450<x451))<<x452);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x497 = INT16_MAX;
	static volatile int64_t x498 = INT64_MIN;
	uint32_t x500 = 0U;

	t8 = ((x497*(x498<x499))<<x500);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x573 = 6;
	static int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = 5U;
	int32_t t9 = -8633173;

	t9 = ((x573*(x574<x575))<<x576);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x581 = INT16_MAX;
	static volatile int16_t x582 = 0;
	int16_t x583 = -1;
	uint16_t x584 = 0U;
	volatile int32_t t10 = 2585475;

	t10 = ((x581*(x582<x583))<<x584);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x613 = UINT16_MAX;
	static int8_t x614 = INT8_MAX;
	int16_t x615 = -893;
	int8_t x616 = 30;
	int32_t t11 = -1139;

	t11 = ((x613*(x614<x615))<<x616);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x638 = INT32_MIN;
	volatile int8_t x639 = INT8_MIN;
	uint32_t x640 = 1U;
	volatile int32_t t12 = 23;

	t12 = ((x637*(x638<x639))<<x640);

	if (t12 != 15000) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x645 = 4U;
	volatile int32_t x646 = INT32_MIN;
	uint16_t x648 = 11U;
	static int32_t t13 = 357836;

	t13 = ((x645*(x646<x647))<<x648);

	if (t13 != 8192) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x689 = 345U;
	int32_t x690 = -4;
	int16_t x691 = INT16_MAX;
	int8_t x692 = 10;
	static int32_t t14 = 86934833;

	t14 = ((x689*(x690<x691))<<x692);

	if (t14 != 353280) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x705 = UINT64_MAX;
	uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MIN;
	int8_t x708 = 0;
	uint64_t t15 = 5069802740004LLU;

	t15 = ((x705*(x706<x707))<<x708);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x726 = -1;
	volatile int32_t x727 = INT32_MAX;
	static uint8_t x728 = 28U;
	uint64_t t16 = 20629505434LLU;

	t16 = ((x725*(x726<x727))<<x728);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x737 = 32U;
	int32_t x738 = -1;
	int8_t x739 = -1;
	uint8_t x740 = 1U;
	int32_t t17 = 107402;

	t17 = ((x737*(x738<x739))<<x740);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x765 = 1047LLU;
	int32_t x766 = -470;
	uint8_t x768 = 5U;
	volatile uint64_t t18 = 3522909516477LLU;

	t18 = ((x765*(x766<x767))<<x768);

	if (t18 != 33504LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x837 = -1;
	volatile int32_t x838 = -1;
	uint64_t x839 = 48861161995LLU;
	int16_t x840 = 0;
	int32_t t19 = -27494;

	t19 = ((x837*(x838<x839))<<x840);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x910 = INT64_MAX;
	static volatile int16_t x911 = INT16_MAX;
	uint8_t x912 = 20U;

	t20 = ((x909*(x910<x911))<<x912);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x949 = UINT8_MAX;
	uint32_t x950 = 1102116328U;
	uint32_t x951 = UINT32_MAX;
	static int8_t x952 = 4;
	static volatile int32_t t21 = 24367;

	t21 = ((x949*(x950<x951))<<x952);

	if (t21 != 4080) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1017 = 739876U;
	static int8_t x1018 = INT8_MIN;
	uint8_t x1019 = 5U;
	uint32_t t22 = 2U;

	t22 = ((x1017*(x1018<x1019))<<x1020);

	if (t22 != 1479752U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1037 = 68;
	uint16_t x1038 = 22101U;
	int8_t x1039 = INT8_MAX;
	volatile int16_t x1040 = 9;
	int32_t t23 = -3016;

	t23 = ((x1037*(x1038<x1039))<<x1040);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1065 = INT64_MAX;
	int32_t x1066 = -1;
	int16_t x1067 = INT16_MIN;
	volatile int16_t x1068 = 6;
	static int64_t t24 = -17947802270309LL;

	t24 = ((x1065*(x1066<x1067))<<x1068);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1105 = INT16_MAX;
	int16_t x1106 = INT16_MAX;
	uint16_t x1107 = 3643U;
	int8_t x1108 = 5;
	static volatile int32_t t25 = -1;

	t25 = ((x1105*(x1106<x1107))<<x1108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1131 = INT32_MIN;
	uint8_t x1132 = 31U;
	volatile int32_t t26 = 0;

	t26 = ((x1129*(x1130<x1131))<<x1132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1181 = INT64_MAX;
	int64_t x1183 = INT64_MIN;
	uint16_t x1184 = 3U;
	int64_t t27 = 16159965444394LL;

	t27 = ((x1181*(x1182<x1183))<<x1184);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1209 = 0;
	volatile int32_t x1210 = -1;
	int8_t x1211 = INT8_MAX;
	int8_t x1212 = 2;
	int32_t t28 = 28;

	t28 = ((x1209*(x1210<x1211))<<x1212);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1293 = 290U;
	int16_t x1294 = -2335;
	int16_t x1296 = 5;
	int32_t t29 = 25789;

	t29 = ((x1293*(x1294<x1295))<<x1296);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1298 = 159937508595503194LLU;
	static int8_t x1299 = INT8_MAX;
	uint8_t x1300 = 8U;
	static volatile int32_t t30 = -169708;

	t30 = ((x1297*(x1298<x1299))<<x1300);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1385 = 351461191330LLU;
	static uint32_t x1386 = UINT32_MAX;
	volatile int32_t x1387 = INT32_MAX;
	int8_t x1388 = 11;
	static uint64_t t31 = 126LLU;

	t31 = ((x1385*(x1386<x1387))<<x1388);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1390 = 38;
	static int32_t x1391 = INT32_MIN;
	int32_t x1392 = 1;
	int64_t t32 = 14739830932LL;

	t32 = ((x1389*(x1390<x1391))<<x1392);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1425 = INT8_MIN;
	volatile uint32_t x1426 = UINT32_MAX;
	int32_t x1427 = INT32_MIN;
	int8_t x1428 = 28;
	int32_t t33 = 124856;

	t33 = ((x1425*(x1426<x1427))<<x1428);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1450 = 31322816743731LL;
	uint16_t x1452 = 1U;
	volatile int32_t t34 = 49;

	t34 = ((x1449*(x1450<x1451))<<x1452);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1473 = 5555U;
	uint64_t x1475 = 104151244439LLU;
	uint32_t t35 = 45U;

	t35 = ((x1473*(x1474<x1475))<<x1476);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1482 = 1874309027U;
	int16_t x1483 = 5;
	int8_t x1484 = 1;
	int32_t t36 = 23566;

	t36 = ((x1481*(x1482<x1483))<<x1484);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1544 = 19U;

	t37 = ((x1541*(x1542<x1543))<<x1544);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1573 = INT16_MIN;
	int8_t x1574 = 21;
	int32_t x1575 = INT32_MIN;
	static volatile int8_t x1576 = 2;
	volatile int32_t t38 = -4007250;

	t38 = ((x1573*(x1574<x1575))<<x1576);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1645 = INT64_MIN;
	uint32_t x1646 = UINT32_MAX;
	int8_t x1647 = INT8_MIN;
	volatile int64_t t39 = -430LL;

	t39 = ((x1645*(x1646<x1647))<<x1648);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1677 = UINT8_MAX;
	uint16_t x1678 = UINT16_MAX;
	static int16_t x1679 = -1;
	uint8_t x1680 = 0U;
	volatile int32_t t40 = -5521455;

	t40 = ((x1677*(x1678<x1679))<<x1680);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1681 = INT32_MIN;
	uint64_t x1683 = 2162365LLU;
	uint16_t x1684 = 25U;
	int32_t t41 = 0;

	t41 = ((x1681*(x1682<x1683))<<x1684);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1713 = 46219LL;
	static uint16_t x1714 = 18U;
	int8_t x1715 = -19;
	volatile uint16_t x1716 = 0U;
	volatile int64_t t42 = 358648394121864LL;

	t42 = ((x1713*(x1714<x1715))<<x1716);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1741 = 77;
	int16_t x1742 = -36;
	static volatile int32_t x1743 = 177737905;
	int8_t x1744 = 0;
	volatile int32_t t43 = 53116732;

	t43 = ((x1741*(x1742<x1743))<<x1744);

	if (t43 != 77) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1777 = -1;
	volatile int64_t x1779 = INT64_MIN;
	int32_t t44 = 112;

	t44 = ((x1777*(x1778<x1779))<<x1780);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1789 = 1;
	uint64_t x1790 = UINT64_MAX;
	int32_t t45 = -50940;

	t45 = ((x1789*(x1790<x1791))<<x1792);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1865 = UINT64_MAX;
	int32_t x1867 = -7083;
	static volatile int8_t x1868 = 2;
	static volatile uint64_t t46 = 27098LLU;

	t46 = ((x1865*(x1866<x1867))<<x1868);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1881 = 2;
	int32_t x1882 = INT32_MAX;
	static int16_t x1883 = INT16_MIN;
	uint8_t x1884 = 28U;
	int32_t t47 = 96;

	t47 = ((x1881*(x1882<x1883))<<x1884);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1885 = 3338627718789LLU;
	int8_t x1886 = -1;
	int16_t x1887 = 206;
	uint8_t x1888 = 63U;
	static volatile uint64_t t48 = 1990121528611LLU;

	t48 = ((x1885*(x1886<x1887))<<x1888);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1898 = INT8_MIN;
	int32_t x1899 = INT32_MIN;
	static int8_t x1900 = 0;
	uint32_t t49 = 124944U;

	t49 = ((x1897*(x1898<x1899))<<x1900);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1901 = INT16_MAX;
	static int8_t x1902 = 1;
	static int32_t x1903 = -1;
	uint8_t x1904 = 3U;
	static volatile int32_t t50 = 21790;

	t50 = ((x1901*(x1902<x1903))<<x1904);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1969 = -1;
	static uint16_t x1970 = UINT16_MAX;
	int16_t x1971 = 76;
	int16_t x1972 = 2;
	static int32_t t51 = -39668;

	t51 = ((x1969*(x1970<x1971))<<x1972);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1973 = 431184853092844LLU;
	int32_t x1974 = INT32_MAX;
	int16_t x1975 = INT16_MAX;
	uint64_t t52 = 35662499LLU;

	t52 = ((x1973*(x1974<x1975))<<x1976);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2157 = INT16_MAX;
	uint8_t x2158 = 95U;
	volatile uint32_t x2159 = UINT32_MAX;
	static uint8_t x2160 = 1U;
	int32_t t53 = 786;

	t53 = ((x2157*(x2158<x2159))<<x2160);

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x2169 = 0;
	static int32_t x2170 = -1;
	volatile uint32_t x2172 = 29U;

	t54 = ((x2169*(x2170<x2171))<<x2172);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2181 = 114U;
	int8_t x2182 = -29;
	int64_t x2183 = -1037469574366006LL;
	uint8_t x2184 = 1U;

	t55 = ((x2181*(x2182<x2183))<<x2184);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2241 = INT16_MIN;
	static int64_t x2243 = -1LL;
	uint16_t x2244 = 3U;
	int32_t t56 = -30952336;

	t56 = ((x2241*(x2242<x2243))<<x2244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2269 = -781;
	int64_t x2270 = -1LL;
	volatile uint64_t x2271 = 82442LLU;
	uint32_t x2272 = 1U;
	int32_t t57 = -1;

	t57 = ((x2269*(x2270<x2271))<<x2272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2273 = 1862961U;
	int8_t x2275 = -30;
	uint32_t t58 = 791015426U;

	t58 = ((x2273*(x2274<x2275))<<x2276);

	if (t58 != 1862961U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2293 = -1;
	int32_t x2294 = 16195618;
	static int32_t t59 = 133;

	t59 = ((x2293*(x2294<x2295))<<x2296);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2361 = 15LLU;
	int16_t x2363 = INT16_MIN;
	uint16_t x2364 = 1U;
	static volatile uint64_t t60 = 50859341274894765LLU;

	t60 = ((x2361*(x2362<x2363))<<x2364);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2401 = -32983709;
	volatile int64_t x2402 = INT64_MAX;
	int8_t x2403 = -1;
	uint8_t x2404 = 1U;
	static int32_t t61 = -1;

	t61 = ((x2401*(x2402<x2403))<<x2404);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x2469 = 1U;
	static int32_t x2470 = -226;
	static int8_t x2472 = 0;
	int32_t t62 = 4184777;

	t62 = ((x2469*(x2470<x2471))<<x2472);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2481 = INT32_MAX;
	volatile int32_t x2482 = -1;
	volatile int16_t x2483 = INT16_MIN;
	volatile uint8_t x2484 = 30U;
	volatile int32_t t63 = 747936;

	t63 = ((x2481*(x2482<x2483))<<x2484);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x2486 = UINT16_MAX;
	uint16_t x2487 = 16U;
	uint8_t x2488 = 4U;
	volatile int32_t t64 = 1455;

	t64 = ((x2485*(x2486<x2487))<<x2488);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2506 = INT32_MIN;
	static volatile uint8_t x2507 = 122U;
	static volatile int32_t t65 = 195;

	t65 = ((x2505*(x2506<x2507))<<x2508);

	if (t65 != 268427264) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2542 = -1;
	int8_t x2543 = INT8_MAX;
	static uint16_t x2544 = 0U;
	uint32_t t66 = 0U;

	t66 = ((x2541*(x2542<x2543))<<x2544);

	if (t66 != 102023232U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2585 = 1U;
	static volatile int64_t x2587 = INT64_MAX;
	int32_t t67 = -13760;

	t67 = ((x2585*(x2586<x2587))<<x2588);

	if (t67 != 1024) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2697 = 13U;
	uint32_t x2698 = 184753U;
	int8_t x2700 = 1;
	int32_t t68 = -32;

	t68 = ((x2697*(x2698<x2699))<<x2700);

	if (t68 != 26) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x2717 = INT64_MIN;
	int8_t x2718 = INT8_MIN;
	int64_t x2719 = INT64_MIN;

	t69 = ((x2717*(x2718<x2719))<<x2720);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2805 = 1;
	int32_t x2806 = INT32_MIN;
	static int32_t x2807 = INT32_MIN;
	static volatile uint16_t x2808 = 7U;

	t70 = ((x2805*(x2806<x2807))<<x2808);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2853 = -1;
	static int8_t x2854 = -1;
	int8_t x2855 = INT8_MIN;
	int32_t t71 = 8094;

	t71 = ((x2853*(x2854<x2855))<<x2856);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2877 = -1;
	static uint16_t x2878 = 949U;
	uint32_t x2880 = 31U;
	int32_t t72 = 0;

	t72 = ((x2877*(x2878<x2879))<<x2880);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2886 = 4275278LL;
	volatile int8_t x2888 = 7;

	t73 = ((x2885*(x2886<x2887))<<x2888);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2913 = 2U;
	uint64_t x2914 = 22LLU;
	int16_t x2915 = INT16_MIN;
	int8_t x2916 = 7;
	volatile int32_t t74 = -15301;

	t74 = ((x2913*(x2914<x2915))<<x2916);

	if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2933 = -1;
	int8_t x2934 = INT8_MIN;
	volatile uint8_t x2936 = 1U;
	volatile int32_t t75 = -2773;

	t75 = ((x2933*(x2934<x2935))<<x2936);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2962 = INT8_MIN;
	int64_t x2963 = INT64_MIN;
	volatile int64_t x2964 = 2LL;
	int32_t t76 = -9;

	t76 = ((x2961*(x2962<x2963))<<x2964);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x2981 = 5230LLU;
	static int64_t x2982 = -86LL;
	int16_t x2983 = -1;
	uint64_t t77 = 4549572239LLU;

	t77 = ((x2981*(x2982<x2983))<<x2984);

	if (t77 != 1338880LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2989 = INT16_MIN;
	static volatile int32_t x2990 = -1;
	int16_t x2991 = -1;
	volatile int32_t t78 = 128303;

	t78 = ((x2989*(x2990<x2991))<<x2992);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3017 = INT16_MIN;
	static uint16_t x3018 = 125U;
	int16_t x3019 = INT16_MIN;
	int32_t t79 = 14;

	t79 = ((x3017*(x3018<x3019))<<x3020);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3025 = 2876U;
	volatile int32_t x3026 = -305108459;
	static uint32_t x3027 = 7U;
	static int32_t t80 = -2;

	t80 = ((x3025*(x3026<x3027))<<x3028);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3069 = 965U;
	int8_t x3070 = -1;
	static uint64_t x3071 = 1014861203388053956LLU;
	uint8_t x3072 = 10U;
	int32_t t81 = 490;

	t81 = ((x3069*(x3070<x3071))<<x3072);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3202 = 555U;
	uint32_t t82 = 58894960U;

	t82 = ((x3201*(x3202<x3203))<<x3204);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3213 = -44;
	int16_t x3214 = -1;
	int64_t x3215 = INT64_MIN;
	uint8_t x3216 = 4U;

	t83 = ((x3213*(x3214<x3215))<<x3216);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3381 = 1U;
	static int32_t x3382 = INT32_MAX;
	uint8_t x3384 = 3U;
	int32_t t84 = 103;

	t84 = ((x3381*(x3382<x3383))<<x3384);

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3450 = UINT64_MAX;
	volatile int32_t x3451 = -1;
	int8_t x3452 = 25;
	int32_t t85 = -39029;

	t85 = ((x3449*(x3450<x3451))<<x3452);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x3468 = 11U;

	t86 = ((x3465*(x3466<x3467))<<x3468);

	if (t86 != 212992) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x3505 = INT16_MAX;
	int32_t x3506 = -1;
	static int8_t x3507 = -1;
	int32_t t87 = -5303;

	t87 = ((x3505*(x3506<x3507))<<x3508);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3510 = INT8_MAX;
	int32_t x3511 = INT32_MIN;
	uint8_t x3512 = 0U;

	t88 = ((x3509*(x3510<x3511))<<x3512);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3529 = 372246;
	int16_t x3530 = INT16_MAX;
	volatile int32_t x3531 = INT32_MAX;
	int8_t x3532 = 10;
	volatile int32_t t89 = -49;

	t89 = ((x3529*(x3530<x3531))<<x3532);

	if (t89 != 381179904) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3685 = 4U;
	int64_t x3686 = INT64_MIN;
	uint16_t x3687 = 326U;
	volatile uint64_t x3688 = 0LLU;
	volatile int32_t t90 = 42967352;

	t90 = ((x3685*(x3686<x3687))<<x3688);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3761 = UINT64_MAX;
	int32_t x3763 = 20695;
	volatile uint64_t t91 = 32993405138651LLU;

	t91 = ((x3761*(x3762<x3763))<<x3764);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3810 = INT64_MIN;
	volatile int8_t x3811 = INT8_MAX;
	uint64_t x3812 = 6LLU;
	int32_t t92 = 218347;

	t92 = ((x3809*(x3810<x3811))<<x3812);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3833 = UINT8_MAX;
	int64_t x3835 = INT64_MAX;
	static volatile int32_t t93 = 0;

	t93 = ((x3833*(x3834<x3835))<<x3836);

	if (t93 != 510) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3858 = INT64_MIN;
	volatile int64_t x3859 = INT64_MIN;
	int8_t x3860 = 2;

	t94 = ((x3857*(x3858<x3859))<<x3860);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3865 = 1;
	static uint16_t x3866 = UINT16_MAX;
	uint16_t x3867 = UINT16_MAX;
	volatile int32_t x3868 = 1;
	static int32_t t95 = 5246136;

	t95 = ((x3865*(x3866<x3867))<<x3868);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3889 = UINT16_MAX;
	volatile int8_t x3891 = INT8_MIN;
	uint16_t x3892 = 11U;
	volatile int32_t t96 = 16643750;

	t96 = ((x3889*(x3890<x3891))<<x3892);

	if (t96 != 134215680) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3929 = INT64_MAX;
	static uint64_t x3930 = UINT64_MAX;
	int16_t x3931 = INT16_MIN;

	t97 = ((x3929*(x3930<x3931))<<x3932);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4033 = 34094836100LLU;
	uint8_t x4034 = 3U;
	int32_t x4035 = INT32_MIN;
	int64_t x4036 = 1LL;
	uint64_t t98 = 2898630LLU;

	t98 = ((x4033*(x4034<x4035))<<x4036);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4037 = -1;
	int16_t x4038 = INT16_MIN;
	int16_t x4040 = 4;
	int32_t t99 = 321106;

	t99 = ((x4037*(x4038<x4039))<<x4040);

	if (t99 != 0) { NG(); } else { ; }
	
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


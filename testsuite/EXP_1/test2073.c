#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 9;
int64_t x37 = INT64_MIN;
static uint64_t x39 = UINT64_MAX;
int8_t x62 = INT8_MAX;
uint64_t t5 = 619609704LLU;
int16_t x193 = INT16_MAX;
int32_t x195 = 10955271;
int8_t x250 = 2;
int32_t x252 = 0;
uint32_t t10 = 2276U;
int64_t x326 = -74968540684671967LL;
volatile int64_t t11 = -691276LL;
int8_t x376 = 1;
uint64_t t12 = 307749375981LLU;
int16_t x403 = -1;
volatile int16_t x446 = INT16_MAX;
int32_t t15 = -3973;
uint32_t x518 = 2U;
int32_t x519 = INT32_MIN;
uint64_t x565 = 3209704969266049LLU;
volatile uint64_t t18 = 123451774314LLU;
int64_t t21 = 38754LL;
volatile int64_t t23 = -17LL;
static int64_t x1121 = -775LL;
int32_t x1198 = INT32_MAX;
int8_t x1199 = INT8_MIN;
volatile int8_t x1223 = -1;
uint32_t x1224 = 1U;
int64_t x1287 = INT64_MIN;
static volatile int8_t x1321 = -1;
volatile int16_t x1356 = 14;
uint64_t x1433 = UINT64_MAX;
uint64_t x1481 = 135037457259236551LLU;
int16_t x1482 = INT16_MAX;
uint32_t x1617 = 834090541U;
uint64_t x1674 = UINT64_MAX;
static int16_t x1705 = -1;
volatile uint32_t x1706 = UINT32_MAX;
int64_t t40 = 5380LL;
int8_t x1810 = -1;
int32_t x1823 = INT32_MIN;
int64_t x1843 = INT64_MAX;
int32_t x1853 = INT32_MIN;
int16_t x1856 = 7;
volatile uint32_t x1857 = 13201U;
int16_t x1868 = 1;
uint64_t t46 = 692LLU;
int32_t t47 = 0;
static int32_t x2031 = -218001;
int64_t x2037 = -3444383531097LL;
uint16_t x2064 = 23U;
uint32_t x2074 = 64196242U;
uint16_t x2076 = 13U;
volatile int64_t t53 = 1309472902540LL;
uint8_t x2208 = 5U;
static int16_t x2231 = INT16_MIN;
static uint32_t x2344 = 1U;
volatile uint64_t x2402 = 0LLU;
uint64_t t60 = 76275991677550LLU;
uint32_t x2421 = UINT32_MAX;
static int32_t x2424 = 22;
volatile int32_t x2435 = INT32_MIN;
int16_t x2449 = 374;
int64_t x2474 = -1LL;
int32_t x2475 = 182641717;
int32_t x2494 = -714;
volatile uint8_t x2495 = 109U;
int32_t x2569 = INT32_MAX;
int32_t x2595 = -1;
int64_t x2726 = INT64_MAX;
int64_t x2750 = INT64_MIN;
volatile uint64_t x2785 = 1230LLU;
int8_t x2786 = 0;
volatile uint8_t x2788 = 7U;
uint64_t t71 = 2001910LLU;
int32_t x2849 = 1;
int64_t x2850 = INT64_MIN;
int8_t x2886 = INT8_MIN;
static volatile int8_t x2979 = -26;
volatile int32_t t74 = -11;
static uint16_t x2994 = 5U;
volatile int32_t t75 = 196754;
static uint64_t t77 = 6806LLU;
int8_t x3089 = -1;
volatile int32_t t79 = 54403153;
uint64_t x3253 = 31102924884LLU;
int16_t x3310 = INT16_MAX;
int32_t x3337 = -31371667;
volatile int8_t x3338 = INT8_MIN;
static uint32_t x3406 = 89U;
uint32_t t86 = 55734149U;
volatile uint32_t t87 = 13721418U;
static uint32_t x3461 = 9682U;
uint8_t x3509 = 3U;
volatile uint32_t t91 = 47127320U;
int32_t x3586 = INT32_MIN;
int8_t x3653 = 0;
int16_t x3702 = -103;


void f0(void) {
	int64_t x5 = -14LL;
	int64_t x6 = INT64_MIN;
	uint8_t x8 = 0U;
	volatile int64_t t0 = 502057990260LL;

	t0 = (((x5^x6)/x7)<<x8);

	if (t0 != 1024819115206086199LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 874840354U;
	uint8_t x32 = 0U;
	static volatile uint32_t t1 = 752U;

	t1 = (((x29^x30)/x31)<<x32);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x38 = INT16_MIN;
	int16_t x40 = 18;
	uint64_t t2 = 16511930632LLU;

	t2 = (((x37^x38)/x39)<<x40);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x61 = -1;
	int8_t x63 = INT8_MIN;
	int8_t x64 = 0;
	int32_t t3 = -413559994;

	t3 = (((x61^x62)/x63)<<x64);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x69 = UINT16_MAX;
	static uint64_t x70 = 58805882157099LLU;
	uint32_t x71 = 45U;
	uint32_t x72 = 15U;
	static volatile uint64_t t4 = 133191243651227977LLU;

	t4 = (((x69^x70)/x71)<<x72);

	if (t4 != 42821136592306176LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x117 = -7;
	int32_t x118 = -877548;
	uint64_t x119 = 1180307977999928599LLU;
	int16_t x120 = 1;

	t5 = (((x117^x118)/x119)<<x120);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x133 = 8U;
	uint32_t x134 = 372136578U;
	int8_t x135 = -1;
	volatile int8_t x136 = 1;
	uint32_t t6 = 6U;

	t6 = (((x133^x134)/x135)<<x136);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x177 = 28U;
	static int8_t x178 = INT8_MAX;
	static volatile int32_t x179 = 28;
	int32_t x180 = 13;
	volatile int32_t t7 = -846;

	t7 = (((x177^x178)/x179)<<x180);

	if (t7 != 24576) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x194 = 44787U;
	uint8_t x196 = 0U;
	uint32_t t8 = 150710U;

	t8 = (((x193^x194)/x195)<<x196);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x197 = -1930;
	uint8_t x198 = 46U;
	int64_t x199 = INT64_MIN;
	uint8_t x200 = 6U;
	volatile int64_t t9 = 2018563732531009LL;

	t9 = (((x197^x198)/x199)<<x200);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x249 = 95U;
	volatile uint32_t x251 = UINT32_MAX;

	t10 = (((x249^x250)/x251)<<x252);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	static int16_t x328 = 58;

	t11 = (((x325^x326)/x327)<<x328);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 2130U;
	uint16_t x375 = 1U;

	t12 = (((x373^x374)/x375)<<x376);

	if (t12 != 18446744073709547354LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x397 = -30;
	int8_t x398 = INT8_MAX;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = 14;
	volatile int64_t t13 = 321LL;

	t13 = (((x397^x398)/x399)<<x400);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x401 = UINT16_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	int8_t x404 = 7;
	volatile uint64_t t14 = 889LLU;

	t14 = (((x401^x402)/x403)<<x404);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x445 = 1220121;
	uint16_t x447 = 6858U;
	int8_t x448 = 1;

	t15 = (((x445^x446)/x447)<<x448);

	if (t15 != 360) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x509 = -689;
	int32_t x510 = INT32_MIN;
	static uint32_t x511 = 2299147U;
	uint64_t x512 = 3LLU;
	uint32_t t16 = 983U;

	t16 = (((x509^x510)/x511)<<x512);

	if (t16 != 7472U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x517 = 3U;
	uint8_t x520 = 11U;
	volatile uint32_t t17 = 3U;

	t17 = (((x517^x518)/x519)<<x520);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x566 = INT8_MIN;
	static int16_t x567 = INT16_MIN;
	volatile uint8_t x568 = 1U;

	t18 = (((x565^x566)/x567)<<x568);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x821 = 0U;
	int8_t x822 = 0;
	int32_t x823 = INT32_MIN;
	int8_t x824 = 20;
	int32_t t19 = 178219;

	t19 = (((x821^x822)/x823)<<x824);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x885 = UINT64_MAX;
	int8_t x886 = -1;
	static volatile int64_t x887 = INT64_MAX;
	uint64_t x888 = 14LLU;
	volatile uint64_t t20 = 62589792849448LLU;

	t20 = (((x885^x886)/x887)<<x888);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x961 = 1993U;
	static volatile int64_t x962 = INT64_MIN;
	volatile int64_t x963 = -109475892563500757LL;
	int8_t x964 = 9;

	t21 = (((x961^x962)/x963)<<x964);

	if (t21 != 43008LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1001 = 1;
	volatile uint32_t x1002 = 52928U;
	uint16_t x1003 = UINT16_MAX;
	static int8_t x1004 = 3;
	static volatile uint32_t t22 = 16577119U;

	t22 = (((x1001^x1002)/x1003)<<x1004);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1045 = INT64_MAX;
	volatile int64_t x1046 = INT64_MAX;
	int8_t x1047 = INT8_MIN;
	volatile uint8_t x1048 = 18U;

	t23 = (((x1045^x1046)/x1047)<<x1048);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1097 = INT16_MIN;
	static uint16_t x1098 = UINT16_MAX;
	int64_t x1099 = INT64_MIN;
	volatile int64_t x1100 = 5LL;
	static int64_t t24 = -2LL;

	t24 = (((x1097^x1098)/x1099)<<x1100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1122 = INT32_MIN;
	int64_t x1123 = INT64_MAX;
	uint8_t x1124 = 2U;
	int64_t t25 = 52822091LL;

	t25 = (((x1121^x1122)/x1123)<<x1124);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1197 = INT32_MIN;
	volatile uint8_t x1200 = 1U;
	int32_t t26 = -764;

	t26 = (((x1197^x1198)/x1199)<<x1200);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1221 = 2U;
	static volatile int8_t x1222 = -14;
	volatile uint32_t t27 = 9U;

	t27 = (((x1221^x1222)/x1223)<<x1224);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x1285 = 3U;
	int8_t x1286 = -1;
	uint8_t x1288 = 7U;
	volatile int64_t t28 = -3864573863119503LL;

	t28 = (((x1285^x1286)/x1287)<<x1288);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1293 = INT8_MIN;
	uint8_t x1294 = UINT8_MAX;
	volatile int32_t x1295 = INT32_MIN;
	static uint16_t x1296 = 1U;
	volatile int32_t t29 = 19265;

	t29 = (((x1293^x1294)/x1295)<<x1296);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1322 = 615;
	int8_t x1323 = INT8_MIN;
	int32_t x1324 = 1;
	int32_t t30 = 493;

	t30 = (((x1321^x1322)/x1323)<<x1324);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1353 = INT32_MIN;
	uint8_t x1354 = 117U;
	volatile int64_t x1355 = -1122164LL;
	volatile int64_t t31 = 31578056627916LL;

	t31 = (((x1353^x1354)/x1355)<<x1356);

	if (t31 != 31342592LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1434 = 36U;
	int16_t x1435 = 100;
	static uint8_t x1436 = 3U;
	volatile uint64_t t32 = 225LLU;

	t32 = (((x1433^x1434)/x1435)<<x1436);

	if (t32 != 1475739525896764120LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1483 = -1LL;
	uint16_t x1484 = 3U;
	volatile uint64_t t33 = 1284LLU;

	t33 = (((x1481^x1482)/x1483)<<x1484);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1557 = INT64_MIN;
	int32_t x1558 = -173713;
	int64_t x1559 = INT64_MAX;
	static uint8_t x1560 = 0U;
	volatile int64_t t34 = 3003LL;

	t34 = (((x1557^x1558)/x1559)<<x1560);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1585 = INT32_MIN;
	volatile int32_t x1586 = INT32_MIN;
	int64_t x1587 = INT64_MIN;
	uint8_t x1588 = 0U;
	int64_t t35 = 2LL;

	t35 = (((x1585^x1586)/x1587)<<x1588);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x1613 = INT32_MAX;
	uint16_t x1614 = 25490U;
	uint8_t x1615 = UINT8_MAX;
	uint16_t x1616 = 2U;
	volatile int32_t t36 = 53169814;

	t36 = (((x1613^x1614)/x1615)<<x1616);

	if (t36 != 33685616) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1618 = 12589466U;
	static volatile int32_t x1619 = INT32_MAX;
	int8_t x1620 = 2;
	volatile uint32_t t37 = 7U;

	t37 = (((x1617^x1618)/x1619)<<x1620);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1673 = INT8_MIN;
	int16_t x1675 = -1;
	int8_t x1676 = 4;
	uint64_t t38 = 13LLU;

	t38 = (((x1673^x1674)/x1675)<<x1676);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1707 = 6884314664632703343LLU;
	uint32_t x1708 = 1U;
	uint64_t t39 = 217410998443278086LLU;

	t39 = (((x1705^x1706)/x1707)<<x1708);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1741 = -1LL;
	volatile int32_t x1742 = -3299;
	int16_t x1743 = INT16_MAX;
	volatile uint8_t x1744 = 6U;

	t40 = (((x1741^x1742)/x1743)<<x1744);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1809 = INT32_MIN;
	static int64_t x1811 = 23LL;
	uint8_t x1812 = 1U;
	int64_t t41 = -1253525054LL;

	t41 = (((x1809^x1810)/x1811)<<x1812);

	if (t41 != 186737708LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1821 = 97352;
	volatile int16_t x1822 = -1;
	int16_t x1824 = 27;
	volatile int32_t t42 = 1;

	t42 = (((x1821^x1822)/x1823)<<x1824);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1841 = 86375835LL;
	int32_t x1842 = -117261500;
	uint64_t x1844 = 59LLU;
	int64_t t43 = 40810LL;

	t43 = (((x1841^x1842)/x1843)<<x1844);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1854 = 18888U;
	volatile uint64_t x1855 = UINT64_MAX;
	volatile uint64_t t44 = 917477337LLU;

	t44 = (((x1853^x1854)/x1855)<<x1856);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x1858 = INT8_MAX;
	int16_t x1859 = 14740;
	uint64_t x1860 = 2LLU;
	uint32_t t45 = 6U;

	t45 = (((x1857^x1858)/x1859)<<x1860);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x1865 = 0LLU;
	static volatile int16_t x1866 = -1;
	int32_t x1867 = INT32_MAX;

	t46 = (((x1865^x1866)/x1867)<<x1868);

	if (t46 != 17179869192LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1877 = 11;
	int8_t x1878 = 15;
	int32_t x1879 = INT32_MIN;
	int16_t x1880 = 1;

	t47 = (((x1877^x1878)/x1879)<<x1880);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1981 = -1;
	volatile uint64_t x1982 = 0LLU;
	volatile int8_t x1983 = INT8_MIN;
	int8_t x1984 = 0;
	uint64_t t48 = 15864LLU;

	t48 = (((x1981^x1982)/x1983)<<x1984);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2029 = 10750;
	int8_t x2030 = 1;
	int16_t x2032 = 0;
	volatile int32_t t49 = -2965;

	t49 = (((x2029^x2030)/x2031)<<x2032);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2038 = -33;
	uint64_t x2039 = 15874425LLU;
	int8_t x2040 = 54;
	volatile uint64_t t50 = 8858452196144LLU;

	t50 = (((x2037^x2038)/x2039)<<x2040);

	if (t50 != 16429131440647569408LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2061 = INT64_MIN;
	uint64_t x2062 = UINT64_MAX;
	int64_t x2063 = 1359039LL;
	static volatile uint64_t t51 = 23127284239866341LLU;

	t51 = (((x2061^x2062)/x2063)<<x2064);

	if (t51 != 1590622931170361344LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2073 = -3;
	int64_t x2075 = -1116964123874818LL;
	volatile int64_t t52 = -129693497LL;

	t52 = (((x2073^x2074)/x2075)<<x2076);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2141 = -12;
	int16_t x2142 = 740;
	int64_t x2143 = INT64_MAX;
	uint8_t x2144 = 0U;

	t53 = (((x2141^x2142)/x2143)<<x2144);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2153 = -1;
	volatile int8_t x2154 = 0;
	volatile uint64_t x2155 = 3050LLU;
	int8_t x2156 = 0;
	uint64_t t54 = 4161384364705LLU;

	t54 = (((x2153^x2154)/x2155)<<x2156);

	if (t54 != 6048112811052312LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2205 = INT16_MIN;
	int16_t x2206 = INT16_MAX;
	int32_t x2207 = INT32_MAX;
	volatile int32_t t55 = -151704;

	t55 = (((x2205^x2206)/x2207)<<x2208);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2229 = 897424U;
	int16_t x2230 = -1;
	uint8_t x2232 = 25U;
	static uint32_t t56 = 1875943U;

	t56 = (((x2229^x2230)/x2231)<<x2232);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2245 = INT16_MAX;
	uint8_t x2246 = 7U;
	static uint64_t x2247 = 6848529123827839LLU;
	int8_t x2248 = 1;
	volatile uint64_t t57 = 948406202LLU;

	t57 = (((x2245^x2246)/x2247)<<x2248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2277 = UINT32_MAX;
	uint32_t x2278 = UINT32_MAX;
	int64_t x2279 = INT64_MIN;
	uint8_t x2280 = 13U;
	int64_t t58 = -241084LL;

	t58 = (((x2277^x2278)/x2279)<<x2280);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2341 = -1073;
	int32_t x2342 = INT32_MAX;
	static volatile uint64_t x2343 = 43LLU;
	uint64_t t59 = 59443081588756099LLU;

	t59 = (((x2341^x2342)/x2343)<<x2344);

	if (t59 != 857988096351724140LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2401 = 2346436U;
	int16_t x2403 = INT16_MAX;
	static volatile uint16_t x2404 = 3U;

	t60 = (((x2401^x2402)/x2403)<<x2404);

	if (t60 != 568LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2422 = INT32_MIN;
	int32_t x2423 = -1;
	static volatile uint32_t t61 = 79U;

	t61 = (((x2421^x2422)/x2423)<<x2424);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2433 = INT8_MIN;
	int64_t x2434 = -1LL;
	uint16_t x2436 = 61U;
	int64_t t62 = -2441719012215469LL;

	t62 = (((x2433^x2434)/x2435)<<x2436);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x2450 = 0LLU;
	int8_t x2451 = INT8_MIN;
	uint8_t x2452 = 1U;
	uint64_t t63 = 2261962280LLU;

	t63 = (((x2449^x2450)/x2451)<<x2452);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2473 = 1616405U;
	static uint8_t x2476 = 15U;
	volatile int64_t t64 = -22655916LL;

	t64 = (((x2473^x2474)/x2475)<<x2476);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2493 = INT8_MIN;
	volatile int8_t x2496 = 2;
	int32_t t65 = 325293;

	t65 = (((x2493^x2494)/x2495)<<x2496);

	if (t65 != 24) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2570 = 34977111675024538LLU;
	int8_t x2571 = INT8_MIN;
	volatile int8_t x2572 = 5;
	uint64_t t66 = 468688944988703LLU;

	t66 = (((x2569^x2570)/x2571)<<x2572);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x2593 = -7692;
	static int64_t x2594 = 969122LL;
	int8_t x2596 = 21;
	volatile int64_t t67 = 834518LL;

	t67 = (((x2593^x2594)/x2595)<<x2596);

	if (t67 != 2039929110528LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2653 = 179709310131LLU;
	int64_t x2654 = -1LL;
	volatile int8_t x2655 = -1;
	uint16_t x2656 = 9U;
	volatile uint64_t t68 = 831LLU;

	t68 = (((x2653^x2654)/x2655)<<x2656);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x2725 = UINT64_MAX;
	int32_t x2727 = -1;
	volatile int32_t x2728 = 0;
	volatile uint64_t t69 = 191LLU;

	t69 = (((x2725^x2726)/x2727)<<x2728);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2749 = 6;
	volatile int64_t x2751 = INT64_MIN;
	int8_t x2752 = 15;
	volatile int64_t t70 = -46019054271864LL;

	t70 = (((x2749^x2750)/x2751)<<x2752);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2787 = -1;

	t71 = (((x2785^x2786)/x2787)<<x2788);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2851 = INT64_MIN;
	static uint8_t x2852 = 0U;
	volatile int64_t t72 = -8042247893370LL;

	t72 = (((x2849^x2850)/x2851)<<x2852);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x2885 = -1;
	uint8_t x2887 = UINT8_MAX;
	static int8_t x2888 = 12;
	volatile int32_t t73 = 722;

	t73 = (((x2885^x2886)/x2887)<<x2888);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2977 = UINT8_MAX;
	int32_t x2978 = -1;
	int8_t x2980 = 1;

	t74 = (((x2977^x2978)/x2979)<<x2980);

	if (t74 != 18) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2993 = 52U;
	int16_t x2995 = INT16_MIN;
	uint16_t x2996 = 0U;

	t75 = (((x2993^x2994)/x2995)<<x2996);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3021 = INT8_MIN;
	int32_t x3022 = INT32_MAX;
	uint64_t x3023 = 15694226LLU;
	int8_t x3024 = 6;
	static volatile uint64_t t76 = 5899LLU;

	t76 = (((x3021^x3022)/x3023)<<x3024);

	if (t76 != 75224583906176LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3081 = 28U;
	uint64_t x3082 = 49660967LLU;
	int16_t x3083 = 12;
	int16_t x3084 = 3;

	t77 = (((x3081^x3082)/x3083)<<x3084);

	if (t77 != 33107320LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x3090 = -1;
	static int8_t x3091 = -29;
	volatile int8_t x3092 = 3;
	volatile int32_t t78 = -19538873;

	t78 = (((x3089^x3090)/x3091)<<x3092);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3169 = INT8_MIN;
	static int8_t x3170 = INT8_MIN;
	volatile int32_t x3171 = -202877;
	static uint8_t x3172 = 0U;

	t79 = (((x3169^x3170)/x3171)<<x3172);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3177 = INT16_MIN;
	static int16_t x3178 = INT16_MAX;
	uint64_t x3179 = UINT64_MAX;
	volatile int64_t x3180 = 7LL;
	volatile uint64_t t80 = 28124LLU;

	t80 = (((x3177^x3178)/x3179)<<x3180);

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3189 = UINT8_MAX;
	volatile int32_t x3190 = 14;
	int16_t x3191 = INT16_MAX;
	uint8_t x3192 = 23U;
	volatile int32_t t81 = 1790984;

	t81 = (((x3189^x3190)/x3191)<<x3192);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3254 = 0U;
	int16_t x3255 = 139;
	int8_t x3256 = 0;
	volatile uint64_t t82 = 320LLU;

	t82 = (((x3253^x3254)/x3255)<<x3256);

	if (t82 != 223762049LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3309 = 394U;
	int64_t x3311 = INT64_MIN;
	volatile int8_t x3312 = 0;
	int64_t t83 = 1457316632LL;

	t83 = (((x3309^x3310)/x3311)<<x3312);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3321 = INT16_MIN;
	volatile int16_t x3322 = INT16_MIN;
	int8_t x3323 = INT8_MIN;
	uint32_t x3324 = 1U;
	int32_t t84 = -14826572;

	t84 = (((x3321^x3322)/x3323)<<x3324);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3339 = UINT8_MAX;
	volatile int8_t x3340 = 0;
	int32_t t85 = -67395613;

	t85 = (((x3337^x3338)/x3339)<<x3340);

	if (t85 != 123026) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x3405 = -16670016;
	static uint32_t x3407 = UINT32_MAX;
	uint8_t x3408 = 7U;

	t86 = (((x3405^x3406)/x3407)<<x3408);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3445 = 256;
	uint32_t x3446 = 100U;
	int16_t x3447 = INT16_MIN;
	uint64_t x3448 = 25LLU;

	t87 = (((x3445^x3446)/x3447)<<x3448);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3462 = INT16_MIN;
	int16_t x3463 = 3311;
	uint8_t x3464 = 0U;
	static volatile uint32_t t88 = 86U;

	t88 = (((x3461^x3462)/x3463)<<x3464);

	if (t88 != 1297174U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3469 = 3539545798883187LLU;
	static int32_t x3470 = INT32_MAX;
	uint32_t x3471 = UINT32_MAX;
	int8_t x3472 = 1;
	uint64_t t89 = 1LLU;

	t89 = (((x3469^x3470)/x3471)<<x3472);

	if (t89 != 1648228LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3510 = INT16_MIN;
	static int8_t x3511 = INT8_MIN;
	static int8_t x3512 = 22;
	int32_t t90 = 62559034;

	t90 = (((x3509^x3510)/x3511)<<x3512);

	if (t90 != 1069547520) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3553 = 118U;
	int32_t x3554 = INT32_MAX;
	uint32_t x3555 = 796U;
	uint8_t x3556 = 0U;

	t91 = (((x3553^x3554)/x3555)<<x3556);

	if (t91 != 2697843U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3573 = UINT8_MAX;
	static int8_t x3574 = -3;
	volatile uint64_t x3575 = 16473022016LLU;
	int8_t x3576 = 12;
	uint64_t t92 = 8679332163335975LLU;

	t92 = (((x3573^x3574)/x3575)<<x3576);

	if (t92 != 4586763960320LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3585 = INT16_MIN;
	int32_t x3587 = INT32_MAX;
	volatile int16_t x3588 = 0;
	int32_t t93 = 139436;

	t93 = (((x3585^x3586)/x3587)<<x3588);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3601 = 740;
	int8_t x3602 = INT8_MIN;
	static int16_t x3603 = INT16_MIN;
	int8_t x3604 = 0;
	volatile int32_t t94 = 11;

	t94 = (((x3601^x3602)/x3603)<<x3604);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3621 = -1;
	volatile int16_t x3622 = 25;
	uint32_t x3623 = 110321U;
	uint8_t x3624 = 2U;
	volatile uint32_t t95 = 11478U;

	t95 = (((x3621^x3622)/x3623)<<x3624);

	if (t95 != 155724U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3654 = INT16_MIN;
	uint64_t x3655 = UINT64_MAX;
	uint8_t x3656 = 22U;
	static volatile uint64_t t96 = 180434975LLU;

	t96 = (((x3653^x3654)/x3655)<<x3656);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x3701 = UINT32_MAX;
	uint64_t x3703 = 1288955690388326240LLU;
	volatile int16_t x3704 = 4;
	static uint64_t t97 = 39825LLU;

	t97 = (((x3701^x3702)/x3703)<<x3704);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x3713 = -1;
	uint8_t x3714 = UINT8_MAX;
	int32_t x3715 = INT32_MIN;
	static volatile int8_t x3716 = 0;
	int32_t t98 = -6619;

	t98 = (((x3713^x3714)/x3715)<<x3716);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3721 = -1;
	uint64_t x3722 = UINT64_MAX;
	int32_t x3723 = 698619;
	uint8_t x3724 = 24U;
	volatile uint64_t t99 = 62941877LLU;

	t99 = (((x3721^x3722)/x3723)<<x3724);

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


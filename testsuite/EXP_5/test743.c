#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 7U;
uint8_t x96 = 16U;
uint64_t x150 = 3787195LLU;
int16_t x156 = 0;
uint64_t x174 = 12LLU;
static volatile uint8_t x180 = 25U;
volatile uint8_t x242 = 60U;
static int32_t t7 = 0;
static int8_t x268 = 45;
uint64_t t8 = 6246544125LLU;
uint8_t x276 = 3U;
uint8_t x356 = 2U;
volatile uint16_t x415 = 458U;
static int32_t x456 = 1;
static uint32_t x594 = 23U;
static int8_t x705 = INT8_MIN;
uint16_t x707 = 567U;
int8_t x901 = INT8_MIN;
volatile int32_t x935 = INT32_MIN;
int8_t x1024 = 0;
volatile int32_t t22 = -145;
uint32_t x1083 = UINT32_MAX;
int16_t x1129 = INT16_MIN;
int16_t x1130 = INT16_MAX;
int32_t t26 = 176022956;
uint64_t x1392 = 0LLU;
static int8_t x1448 = 6;
int64_t x1462 = INT64_MAX;
static int32_t x1463 = INT32_MIN;
uint16_t x1464 = 5U;
volatile int64_t t31 = -13456LL;
int8_t x1487 = INT8_MIN;
uint16_t x1538 = UINT16_MAX;
static uint16_t x1590 = 2774U;
static int32_t t34 = -13;
int32_t t36 = -613;
int8_t x1680 = 10;
volatile uint64_t t37 = 7539979809LLU;
volatile uint32_t x1739 = UINT32_MAX;
static uint8_t x1804 = 3U;
int64_t x1809 = -44497277140521870LL;
uint16_t x1887 = UINT16_MAX;
uint32_t t41 = 56481U;
static volatile int64_t x1922 = INT64_MAX;
volatile int64_t t42 = -256814875754692LL;
int16_t x1929 = 179;
uint8_t x1944 = 8U;
int64_t t44 = -195LL;
static int16_t x2000 = 0;
static int32_t x2087 = -1007344344;
uint32_t x2152 = 0U;
static volatile int16_t x2190 = 133;
volatile int32_t t53 = -88761;
volatile int64_t x2334 = INT64_MAX;
int8_t x2342 = INT8_MAX;
static uint64_t x2343 = 31921LLU;
volatile uint32_t x2346 = 12U;
int64_t t56 = -3909338839354438LL;
volatile uint8_t x2585 = UINT8_MAX;
int16_t x2645 = INT16_MIN;
uint8_t x2646 = 14U;
int8_t x2653 = INT8_MIN;
volatile int64_t t63 = -70887416LL;
static int16_t x2721 = -1;
volatile int64_t t66 = 1105LL;
int64_t x2873 = 21517192851LL;
volatile int64_t x2973 = 0LL;
uint8_t x2975 = 2U;
uint64_t x3034 = UINT64_MAX;
uint64_t x3061 = 667844082973LLU;
static int64_t t72 = -13334LL;
static int8_t x3145 = 16;
int32_t x3207 = 488;
int8_t x3565 = 0;
uint8_t x3567 = 2U;
int32_t t77 = -21;
int8_t x3595 = INT8_MIN;
uint64_t t79 = 131801609LLU;
int8_t x3613 = 0;
uint16_t x3614 = 28698U;
int16_t x3623 = -1;
int16_t x3721 = -1;
int32_t x3723 = INT32_MIN;
uint8_t x3820 = 24U;
int32_t t87 = -22812231;
volatile int16_t x3827 = INT16_MIN;
uint64_t t88 = 4402168931621215LLU;
static uint64_t t89 = 328846511731LLU;
uint8_t x3872 = 0U;
static int8_t x3938 = 1;
uint32_t x4005 = 3512U;
volatile int32_t x4009 = 39207;
int8_t x4109 = INT8_MAX;
uint16_t x4141 = 2774U;
volatile uint32_t x4142 = 3U;
int16_t x4199 = INT16_MAX;


void f0(void) {
	int32_t x5 = -706;
	int32_t x7 = -3242017;
	int8_t x8 = 1;
	volatile int32_t t0 = 4;

	t0 = (x5-((x6%x7)<<x8));

	if (t0 != -720) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x93 = UINT64_MAX;
	static volatile uint32_t x94 = 4600U;
	int64_t x95 = INT64_MAX;
	volatile uint64_t t1 = 7087116LLU;

	t1 = (x93-((x94%x95)<<x96));

	if (t1 != 18446744073408086015LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x149 = INT64_MAX;
	volatile uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 0U;
	uint64_t t2 = 64338363LLU;

	t2 = (x149-((x150%x151)<<x152));

	if (t2 != 9223372036854775617LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x153 = INT32_MAX;
	static int32_t x154 = -1;
	uint32_t x155 = 32U;
	uint32_t t3 = 384U;

	t3 = (x153-((x154%x155)<<x156));

	if (t3 != 2147483616U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x173 = INT16_MAX;
	int64_t x175 = -2398952673085LL;
	int32_t x176 = 1;
	uint64_t t4 = 47LLU;

	t4 = (x173-((x174%x175)<<x176));

	if (t4 != 32743LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x177 = 2LL;
	static uint8_t x178 = UINT8_MAX;
	int64_t x179 = -5730434709057LL;
	int64_t t5 = -37LL;

	t5 = (x177-((x178%x179)<<x180));

	if (t5 != -8556380158LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x205 = 6589U;
	int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = 2U;
	volatile int64_t t6 = -488098834418178647LL;

	t6 = (x205-((x206%x207)<<x208));

	if (t6 != 6589LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x241 = 8U;
	uint8_t x243 = 98U;
	volatile uint8_t x244 = 9U;

	t7 = (x241-((x242%x243)<<x244));

	if (t7 != -30712) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x265 = 3;
	static volatile uint64_t x266 = 25639985379165LLU;
	static uint64_t x267 = 28593178337433LLU;

	t8 = (x265-((x266%x267)<<x268));

	if (t8 != 17371615215791112195LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x274 = 3584218488435424663LLU;
	volatile int16_t x275 = -1;
	volatile uint64_t t9 = 27304400910LLU;

	t9 = (x273-((x274%x275)<<x276));

	if (t9 != 8219740237788222280LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x278 = 0;
	int32_t x279 = 186883;
	static uint32_t x280 = 7U;
	int32_t t10 = INT32_MIN;

	t10 = (x277-((x278%x279)<<x280));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MAX;
	volatile int64_t x291 = -4131825496LL;
	int8_t x292 = 0;
	static volatile int64_t t11 = 266LL;

	t11 = (x289-((x290%x291)<<x292));

	if (t11 != 1110186104LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 4U;
	volatile int16_t x355 = INT16_MIN;
	uint32_t t12 = 37820U;

	t12 = (x353-((x354%x355)<<x356));

	if (t12 != 4294967279U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x413 = 48;
	static uint64_t x414 = UINT64_MAX;
	volatile uint8_t x416 = 3U;
	volatile uint64_t t13 = 10917512550871LLU;

	t13 = (x413-((x414%x415)<<x416));

	if (t13 != 18446744073709551320LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x453 = INT8_MIN;
	int16_t x454 = 1;
	volatile uint64_t x455 = 1235108021198987LLU;
	static volatile uint64_t t14 = 3232446611478513070LLU;

	t14 = (x453-((x454%x455)<<x456));

	if (t14 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x589 = INT16_MAX;
	int8_t x590 = 0;
	static int32_t x591 = 106738;
	volatile uint16_t x592 = 5U;
	int32_t t15 = -92940380;

	t15 = (x589-((x590%x591)<<x592));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x593 = 69551LLU;
	volatile int16_t x595 = INT16_MAX;
	volatile int16_t x596 = 7;
	uint64_t t16 = 2409849365LLU;

	t16 = (x593-((x594%x595)<<x596));

	if (t16 != 66607LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x609 = INT32_MAX;
	int64_t x610 = -1LL;
	static uint64_t x611 = 4117628LLU;
	volatile uint32_t x612 = 1U;
	static uint64_t t17 = 99056542509712289LLU;

	t17 = (x609-((x610%x611)<<x612));

	if (t17 != 2145784417LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x706 = UINT64_MAX;
	int16_t x708 = 4;
	volatile uint64_t t18 = 48LLU;

	t18 = (x705-((x706%x707)<<x708));

	if (t18 != 18446744073709544192LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x777 = -254;
	static uint32_t x778 = 3308350U;
	volatile int64_t x779 = INT64_MAX;
	uint8_t x780 = 9U;
	int64_t t19 = 4627725231562319LL;

	t19 = (x777-((x778%x779)<<x780));

	if (t19 != -1693875454LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x902 = 1477U;
	int8_t x903 = INT8_MAX;
	int8_t x904 = 4;
	int32_t t20 = 17697;

	t20 = (x901-((x902%x903)<<x904));

	if (t20 != -1408) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x933 = 17U;
	static uint16_t x934 = 2477U;
	uint8_t x936 = 0U;
	int32_t t21 = 4785;

	t21 = (x933-((x934%x935)<<x936));

	if (t21 != -2460) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1021 = 0U;
	static uint16_t x1022 = 3435U;
	uint8_t x1023 = UINT8_MAX;

	t22 = (x1021-((x1022%x1023)<<x1024));

	if (t22 != -120) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1033 = UINT16_MAX;
	static uint8_t x1034 = UINT8_MAX;
	int64_t x1035 = -1LL;
	static volatile uint8_t x1036 = 5U;
	int64_t t23 = -31LL;

	t23 = (x1033-((x1034%x1035)<<x1036));

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1081 = INT8_MIN;
	int64_t x1082 = 12283260136305178LL;
	volatile int8_t x1084 = 3;
	static volatile int64_t t24 = 1541LL;

	t24 = (x1081-((x1082%x1083)<<x1084));

	if (t24 != -12519648712LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1131 = 28614U;
	static volatile uint16_t x1132 = 0U;
	int32_t t25 = 43602659;

	t25 = (x1129-((x1130%x1131)<<x1132));

	if (t25 != -36921) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1273 = INT8_MAX;
	uint16_t x1274 = 59U;
	volatile int32_t x1275 = INT32_MAX;
	static uint16_t x1276 = 0U;

	t26 = (x1273-((x1274%x1275)<<x1276));

	if (t26 != 68) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1325 = INT32_MAX;
	uint64_t x1326 = UINT64_MAX;
	int8_t x1327 = -1;
	int64_t x1328 = 0LL;
	volatile uint64_t t27 = 414LLU;

	t27 = (x1325-((x1326%x1327)<<x1328));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1385 = INT32_MIN;
	int32_t x1386 = INT32_MAX;
	int8_t x1387 = -1;
	uint8_t x1388 = 3U;
	int32_t t28 = INT32_MIN;

	t28 = (x1385-((x1386%x1387)<<x1388));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1389 = INT64_MIN;
	uint64_t x1390 = 9337313297892684LLU;
	int32_t x1391 = INT32_MIN;
	volatile uint64_t t29 = 15039454417693LLU;

	t29 = (x1389-((x1390%x1391)<<x1392));

	if (t29 != 9214034723556883124LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1445 = -1;
	uint64_t x1446 = UINT64_MAX;
	static uint8_t x1447 = UINT8_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x1445-((x1446%x1447)<<x1448));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1461 = INT64_MAX;

	t31 = (x1461-((x1462%x1463)<<x1464));

	if (t31 != 9223371968135299103LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1485 = 969540;
	uint32_t x1486 = 524975330U;
	uint8_t x1488 = 0U;
	volatile uint32_t t32 = 182190U;

	t32 = (x1485-((x1486%x1487)<<x1488));

	if (t32 != 3770961506U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1537 = -1;
	int64_t x1539 = INT64_MIN;
	uint16_t x1540 = 1U;
	static volatile int64_t t33 = -465655816LL;

	t33 = (x1537-((x1538%x1539)<<x1540));

	if (t33 != -131071LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1589 = 33U;
	int16_t x1591 = INT16_MIN;
	static uint8_t x1592 = 5U;

	t34 = (x1589-((x1590%x1591)<<x1592));

	if (t34 != -88735) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1605 = 1651877045299194LLU;
	int32_t x1606 = INT32_MAX;
	int64_t x1607 = INT64_MAX;
	volatile uint16_t x1608 = 23U;
	static volatile uint64_t t35 = 14552195760LLU;

	t35 = (x1605-((x1606%x1607)<<x1608));

	if (t35 != 18430381552253757434LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1613 = -1;
	uint16_t x1614 = UINT16_MAX;
	int8_t x1615 = INT8_MIN;
	int8_t x1616 = 19;

	t36 = (x1613-((x1614%x1615)<<x1616));

	if (t36 != -66584577) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1677 = UINT8_MAX;
	int64_t x1678 = -1LL;
	uint64_t x1679 = UINT64_MAX;

	t37 = (x1677-((x1678%x1679)<<x1680));

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1737 = 2078014U;
	static uint16_t x1738 = UINT16_MAX;
	int64_t x1740 = 17LL;
	uint32_t t38 = 47U;

	t38 = (x1737-((x1738%x1739)<<x1740));

	if (t38 != 2209086U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1801 = -1;
	int16_t x1802 = INT16_MIN;
	int16_t x1803 = INT16_MIN;
	volatile int32_t t39 = 3;

	t39 = (x1801-((x1802%x1803)<<x1804));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1810 = 5215;
	static int32_t x1811 = -10071;
	volatile uint16_t x1812 = 6U;
	static volatile int64_t t40 = 2401389622796901LL;

	t40 = (x1809-((x1810%x1811)<<x1812));

	if (t40 != -44497277140855630LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1885 = 0U;
	uint32_t x1886 = UINT32_MAX;
	uint8_t x1888 = 3U;

	t41 = (x1885-((x1886%x1887)<<x1888));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1921 = 5464691;
	uint16_t x1923 = UINT16_MAX;
	int64_t x1924 = 25LL;

	t42 = (x1921-((x1922%x1923)<<x1924));

	if (t42 != -1099472608653LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1930 = INT8_MAX;
	int32_t x1931 = INT32_MAX;
	int8_t x1932 = 5;
	int32_t t43 = -104;

	t43 = (x1929-((x1930%x1931)<<x1932));

	if (t43 != -3885) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x1941 = UINT8_MAX;
	volatile int8_t x1942 = INT8_MIN;
	static volatile int64_t x1943 = -1LL;

	t44 = (x1941-((x1942%x1943)<<x1944));

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1997 = INT32_MIN;
	int16_t x1998 = INT16_MIN;
	static int32_t x1999 = -1;
	int32_t t45 = INT32_MIN;

	t45 = (x1997-((x1998%x1999)<<x2000));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2085 = INT16_MIN;
	volatile uint64_t x2086 = 98753903214LLU;
	volatile int32_t x2088 = 8;
	uint64_t t46 = 462200LLU;

	t46 = (x2085-((x2086%x2087)<<x2088));

	if (t46 != 18446718792710296064LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2089 = INT32_MAX;
	static int16_t x2090 = 64;
	int16_t x2091 = INT16_MIN;
	static uint8_t x2092 = 19U;
	static int32_t t47 = 15946434;

	t47 = (x2089-((x2090%x2091)<<x2092));

	if (t47 != 2113929215) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2121 = 7LL;
	uint64_t x2122 = 1LLU;
	int64_t x2123 = -2LL;
	static uint16_t x2124 = 0U;
	volatile uint64_t t48 = 455793197LLU;

	t48 = (x2121-((x2122%x2123)<<x2124));

	if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2149 = INT16_MIN;
	int32_t x2150 = INT32_MIN;
	uint64_t x2151 = 278LLU;
	uint64_t t49 = 15278869520LLU;

	t49 = (x2149-((x2150%x2151)<<x2152));

	if (t49 != 18446744073709518786LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2189 = -1LL;
	int64_t x2191 = INT64_MAX;
	int8_t x2192 = 2;
	volatile int64_t t50 = 884268053442085LL;

	t50 = (x2189-((x2190%x2191)<<x2192));

	if (t50 != -533LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2241 = INT32_MIN;
	volatile uint32_t x2242 = UINT32_MAX;
	uint8_t x2243 = 30U;
	volatile int8_t x2244 = 0;
	static uint32_t t51 = 62459U;

	t51 = (x2241-((x2242%x2243)<<x2244));

	if (t51 != 2147483633U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x2245 = INT64_MAX;
	int8_t x2246 = -1;
	uint32_t x2247 = 12158U;
	static int16_t x2248 = 27;
	volatile int64_t t52 = 15482241LL;

	t52 = (x2245-((x2246%x2247)<<x2248));

	if (t52 != 9223372033230897151LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2261 = 3;
	uint8_t x2262 = 0U;
	volatile int16_t x2263 = -1;
	static uint8_t x2264 = 1U;

	t53 = (x2261-((x2262%x2263)<<x2264));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2333 = 182U;
	uint64_t x2335 = 77361781294638LLU;
	uint64_t x2336 = 7LLU;
	static uint64_t t54 = 7LLU;

	t54 = (x2333-((x2334%x2335)<<x2336));

	if (t54 != 18437990721498411574LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2341 = -1;
	uint16_t x2344 = 31U;
	volatile uint64_t t55 = 3793669166290LLU;

	t55 = (x2341-((x2342%x2343)<<x2344));

	if (t55 != 18446743800979128319LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2345 = INT8_MAX;
	int64_t x2347 = INT64_MAX;
	uint8_t x2348 = 21U;

	t56 = (x2345-((x2346%x2347)<<x2348));

	if (t56 != -25165697LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2361 = 123U;
	uint64_t x2362 = 68517LLU;
	int32_t x2363 = -132650563;
	static int8_t x2364 = 14;
	uint64_t t57 = 3250975250812125LLU;

	t57 = (x2361-((x2362%x2363)<<x2364));

	if (t57 != 18446744072586969211LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2586 = 3717;
	uint32_t x2587 = 22914U;
	static int8_t x2588 = 0;
	uint32_t t58 = 1313U;

	t58 = (x2585-((x2586%x2587)<<x2588));

	if (t58 != 4294963834U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2597 = 1U;
	uint64_t x2598 = UINT64_MAX;
	int16_t x2599 = -122;
	uint64_t x2600 = 7LLU;
	uint64_t t59 = 8110196456887563137LLU;

	t59 = (x2597-((x2598%x2599)<<x2600));

	if (t59 != 18446744073709536129LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x2605 = UINT32_MAX;
	uint64_t x2606 = 9201LLU;
	int64_t x2607 = INT64_MAX;
	volatile uint16_t x2608 = 56U;
	uint64_t t60 = 5264874441934510334LLU;

	t60 = (x2605-((x2606%x2607)<<x2608));

	if (t60 != 1080863914863886335LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2647 = UINT16_MAX;
	static uint8_t x2648 = 0U;
	volatile int32_t t61 = -25;

	t61 = (x2645-((x2646%x2647)<<x2648));

	if (t61 != -32782) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2654 = 3727284LL;
	int8_t x2655 = INT8_MAX;
	volatile uint16_t x2656 = 2U;
	volatile int64_t t62 = 397983154LL;

	t62 = (x2653-((x2654%x2655)<<x2656));

	if (t62 != -480LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2669 = INT64_MAX;
	uint16_t x2670 = UINT16_MAX;
	uint32_t x2671 = UINT32_MAX;
	static volatile uint16_t x2672 = 14U;

	t63 = (x2669-((x2670%x2671)<<x2672));

	if (t63 != 9223372035781050367LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2709 = 0;
	uint32_t x2710 = 472U;
	int64_t x2711 = INT64_MIN;
	int16_t x2712 = 5;
	static int64_t t64 = 183619750279LL;

	t64 = (x2709-((x2710%x2711)<<x2712));

	if (t64 != -15104LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x2722 = 558885LLU;
	int32_t x2723 = INT32_MAX;
	volatile uint64_t x2724 = 0LLU;
	static uint64_t t65 = 50LLU;

	t65 = (x2721-((x2722%x2723)<<x2724));

	if (t65 != 18446744073708992730LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2805 = 103986;
	static uint16_t x2806 = UINT16_MAX;
	int64_t x2807 = INT64_MIN;
	int8_t x2808 = 3;

	t66 = (x2805-((x2806%x2807)<<x2808));

	if (t66 != -420294LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x2874 = UINT32_MAX;
	uint8_t x2875 = 8U;
	static volatile uint8_t x2876 = 0U;
	volatile int64_t t67 = 275LL;

	t67 = (x2873-((x2874%x2875)<<x2876));

	if (t67 != 21517192844LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2937 = INT8_MIN;
	uint32_t x2938 = 2794562U;
	uint64_t x2939 = UINT64_MAX;
	static int8_t x2940 = 59;
	uint64_t t68 = 4136889959484LLU;

	t68 = (x2937-((x2938%x2939)<<x2940));

	if (t68 != 17293822569102704512LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2974 = 2;
	uint16_t x2976 = 0U;
	int64_t t69 = 217021738635582179LL;

	t69 = (x2973-((x2974%x2975)<<x2976));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3033 = INT16_MIN;
	static uint32_t x3035 = UINT32_MAX;
	int16_t x3036 = 42;
	uint64_t t70 = 207999845LLU;

	t70 = (x3033-((x3034%x3035)<<x3036));

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3062 = -8;
	uint32_t x3063 = UINT32_MAX;
	int16_t x3064 = 4;
	static uint64_t t71 = 205732LLU;

	t71 = (x3061-((x3062%x3063)<<x3064));

	if (t71 != 663549115805LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3101 = UINT16_MAX;
	int64_t x3102 = -5283915453181493LL;
	int8_t x3103 = -1;
	uint8_t x3104 = 30U;

	t72 = (x3101-((x3102%x3103)<<x3104));

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3146 = 362948U;
	volatile uint16_t x3147 = UINT16_MAX;
	int16_t x3148 = 0;
	uint32_t t73 = 13266660U;

	t73 = (x3145-((x3146%x3147)<<x3148));

	if (t73 != 4294932039U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3205 = 181095035LL;
	static uint64_t x3206 = UINT64_MAX;
	int8_t x3208 = 4;
	volatile uint64_t t74 = 2153802466783908LLU;

	t74 = (x3205-((x3206%x3207)<<x3208));

	if (t74 != 181094795LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3389 = INT32_MIN;
	uint64_t x3390 = UINT64_MAX;
	static volatile uint16_t x3391 = 1825U;
	uint64_t x3392 = 1LLU;
	uint64_t t75 = 1203550LLU;

	t75 = (x3389-((x3390%x3391)<<x3392));

	if (t75 != 18446744071562065338LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3445 = 0;
	volatile int64_t x3446 = INT64_MIN;
	int64_t x3447 = -1LL;
	uint32_t x3448 = 0U;
	static volatile int64_t t76 = -15198106846887LL;

	t76 = (x3445-((x3446%x3447)<<x3448));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3566 = 4;
	volatile int8_t x3568 = 8;

	t77 = (x3565-((x3566%x3567)<<x3568));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x3573 = INT16_MIN;
	int16_t x3574 = 7759;
	int16_t x3575 = INT16_MAX;
	static int32_t x3576 = 1;
	volatile int32_t t78 = 275772;

	t78 = (x3573-((x3574%x3575)<<x3576));

	if (t78 != -48286) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x3593 = 28450137375269LLU;
	uint32_t x3594 = UINT32_MAX;
	uint8_t x3596 = 1U;

	t79 = (x3593-((x3594%x3595)<<x3596));

	if (t79 != 28450137375015LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3609 = -1;
	int64_t x3610 = INT64_MIN;
	volatile int8_t x3611 = -1;
	uint8_t x3612 = 54U;
	int64_t t80 = 5923LL;

	t80 = (x3609-((x3610%x3611)<<x3612));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x3615 = UINT16_MAX;
	uint8_t x3616 = 0U;
	volatile int32_t t81 = 6151;

	t81 = (x3613-((x3614%x3615)<<x3616));

	if (t81 != -28698) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3621 = 3813706LL;
	int32_t x3622 = -1;
	uint8_t x3624 = 2U;
	volatile int64_t t82 = -412059749920964230LL;

	t82 = (x3621-((x3622%x3623)<<x3624));

	if (t82 != 3813706LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3681 = UINT64_MAX;
	volatile uint16_t x3682 = 6U;
	static int16_t x3683 = INT16_MAX;
	uint64_t x3684 = 1LLU;
	static volatile uint64_t t83 = 7434LLU;

	t83 = (x3681-((x3682%x3683)<<x3684));

	if (t83 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3722 = INT64_MAX;
	static int8_t x3724 = 23;
	volatile int64_t t84 = 665155479042LL;

	t84 = (x3721-((x3722%x3723)<<x3724));

	if (t84 != -18014398501093377LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x3725 = INT32_MIN;
	static uint64_t x3726 = UINT64_MAX;
	volatile uint8_t x3727 = UINT8_MAX;
	volatile uint8_t x3728 = 30U;
	volatile uint64_t t85 = 144180LLU;

	t85 = (x3725-((x3726%x3727)<<x3728));

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3793 = INT8_MIN;
	int32_t x3794 = INT32_MAX;
	uint32_t x3795 = UINT32_MAX;
	static int16_t x3796 = 1;
	volatile uint32_t t86 = 9119980U;

	t86 = (x3793-((x3794%x3795)<<x3796));

	if (t86 != 4294967170U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3817 = 1;
	int8_t x3818 = 7;
	uint16_t x3819 = UINT16_MAX;

	t87 = (x3817-((x3818%x3819)<<x3820));

	if (t87 != -117440511) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3825 = 696LL;
	static volatile uint64_t x3826 = 60926702LLU;
	int8_t x3828 = 4;

	t88 = (x3825-((x3826%x3827)<<x3828));

	if (t88 != 18446744072734725080LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3841 = 13373597859LLU;
	int64_t x3842 = INT64_MIN;
	int16_t x3843 = INT16_MIN;
	static int8_t x3844 = 37;

	t89 = (x3841-((x3842%x3843)<<x3844));

	if (t89 != 13373597859LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3869 = INT64_MAX;
	uint32_t x3870 = UINT32_MAX;
	uint32_t x3871 = 7470U;
	static volatile int64_t t90 = -4337980948008LL;

	t90 = (x3869-((x3870%x3871)<<x3872));

	if (t90 != 9223372036854774652LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3937 = -1;
	int16_t x3939 = INT16_MIN;
	uint8_t x3940 = 9U;
	int32_t t91 = -975393;

	t91 = (x3937-((x3938%x3939)<<x3940));

	if (t91 != -513) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4006 = 3237303LLU;
	int64_t x4007 = -13939136800163LL;
	uint8_t x4008 = 33U;
	volatile uint64_t t92 = 1057840670337460832LLU;

	t92 = (x4005-((x4006%x4007)<<x4008));

	if (t92 != 18418935852685069752LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x4010 = 52U;
	static int64_t x4011 = -13738LL;
	volatile uint16_t x4012 = 0U;
	volatile int64_t t93 = -8456091486LL;

	t93 = (x4009-((x4010%x4011)<<x4012));

	if (t93 != 39155LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4017 = 111U;
	static int16_t x4018 = -4;
	static uint64_t x4019 = UINT64_MAX;
	int8_t x4020 = 1;
	uint64_t t94 = 57172LLU;

	t94 = (x4017-((x4018%x4019)<<x4020));

	if (t94 != 119LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x4110 = 4060;
	static int64_t x4111 = -1LL;
	int16_t x4112 = 53;
	volatile int64_t t95 = 5103LL;

	t95 = (x4109-((x4110%x4111)<<x4112));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4143 = -53343793;
	int16_t x4144 = 1;
	uint32_t t96 = 3515104U;

	t96 = (x4141-((x4142%x4143)<<x4144));

	if (t96 != 2768U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4197 = 37306441LLU;
	volatile int64_t x4198 = 340072603582140170LL;
	uint64_t x4200 = 15LLU;
	static volatile uint64_t t97 = 22317514424LLU;

	t97 = (x4197-((x4198%x4199)<<x4200));

	if (t97 != 18446744073122496585LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4201 = INT16_MIN;
	int64_t x4202 = INT64_MIN;
	volatile int32_t x4203 = INT32_MIN;
	volatile uint32_t x4204 = 5U;
	volatile int64_t t98 = -2LL;

	t98 = (x4201-((x4202%x4203)<<x4204));

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4269 = INT8_MIN;
	volatile int32_t x4270 = INT32_MAX;
	static volatile uint64_t x4271 = UINT64_MAX;
	int16_t x4272 = 24;
	volatile uint64_t t99 = 2013789415511LLU;

	t99 = (x4269-((x4270%x4271)<<x4272));

	if (t99 != 18410715276707364736LLU) { NG(); } else { ; }
	
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


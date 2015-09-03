#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
int32_t x171 = 5;
volatile int16_t x172 = -1;
uint32_t t2 = 15U;
int8_t x243 = 4;
uint32_t x320 = 247415125U;
uint16_t x593 = UINT16_MAX;
static uint32_t x613 = 381776U;
volatile int8_t x738 = INT8_MAX;
int64_t x746 = INT64_MIN;
int64_t x813 = INT64_MAX;
uint8_t x836 = 14U;
uint64_t x854 = 4LLU;
static int16_t x856 = INT16_MIN;
int32_t x989 = INT32_MIN;
static int16_t x1020 = INT16_MAX;
static volatile uint64_t x1077 = UINT64_MAX;
static uint8_t x1078 = UINT8_MAX;
uint64_t x1103 = 2LLU;
int16_t x1185 = 0;
int16_t x1186 = -485;
uint8_t x1187 = 1U;
int32_t x1306 = -552;
int8_t x1328 = INT8_MAX;
volatile uint32_t t26 = 15374U;
static volatile int32_t t27 = -46467;
int64_t x1474 = INT64_MIN;
uint64_t t30 = 37006050LLU;
uint32_t x1569 = UINT32_MAX;
int16_t x1658 = 11832;
volatile uint64_t x1659 = 37LLU;
int32_t x1721 = INT32_MIN;
uint16_t x1723 = 13U;
int16_t x1724 = INT16_MAX;
static volatile uint64_t t35 = 7338247296314LLU;
uint32_t x1864 = UINT32_MAX;
int8_t x1888 = 15;
int8_t x1890 = 3;
static uint8_t x1891 = 35U;
uint32_t x1974 = 54158U;
volatile uint32_t t40 = 401152U;
uint8_t x1999 = 5U;
int16_t x2030 = INT16_MIN;
int32_t x2031 = 4;
static uint32_t x2081 = 8U;
volatile uint32_t t45 = 2600U;
uint16_t x2129 = UINT16_MAX;
static volatile int32_t t49 = -10883;
volatile int64_t x2220 = 205653587LL;
static volatile uint16_t x2272 = 8308U;
uint8_t x2283 = 33U;
static int16_t x2284 = -30;
static int32_t x2292 = 1;
int8_t x2338 = 3;
uint64_t x2410 = UINT64_MAX;
int64_t x2412 = 17LL;
uint64_t t56 = 47786252172571LLU;
static int8_t x2475 = 31;
static volatile int32_t x2593 = 437;
uint64_t x2594 = 42726214605LLU;
uint16_t x2598 = 21802U;
int16_t x2615 = 15;
static int8_t x2619 = 1;
volatile uint64_t t62 = 15640LLU;
static uint64_t x2630 = 4594234128LLU;
int16_t x2640 = -1;
uint32_t x2650 = 37958857U;
uint8_t x2709 = 6U;
uint16_t x2712 = 10301U;
uint16_t x2732 = UINT16_MAX;
uint8_t x2862 = 13U;
int16_t x2997 = INT16_MIN;
int64_t x3345 = INT64_MIN;
int64_t x3348 = -1LL;
int8_t x3575 = 0;
uint8_t x3678 = 63U;
volatile uint32_t t87 = 638526U;
int16_t x3834 = INT16_MAX;
volatile int32_t t88 = -255479377;
static int64_t t89 = -42628LL;
volatile uint64_t t91 = 43233590LLU;
int16_t x3922 = INT16_MIN;
static volatile int32_t t92 = 27713;
int16_t x3954 = -2;
static volatile int32_t x3956 = INT32_MAX;
volatile int64_t x4049 = INT64_MIN;
static uint8_t x4051 = 0U;
int16_t x4052 = -1;
uint32_t x4057 = 18102U;
uint8_t x4065 = 22U;
static volatile uint64_t t96 = 5335LLU;
volatile int32_t t97 = -376058;
int32_t x4180 = INT32_MIN;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int8_t x3 = 0;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 2831394223504142271LLU;

	t0 = (((x1%x2)>>x3)-x4);

	if (t0 != 4LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x93 = 6548U;
	static uint32_t x94 = UINT32_MAX;
	int64_t x95 = 0LL;
	static uint16_t x96 = 295U;
	uint32_t t1 = 49U;

	t1 = (((x93%x94)>>x95)-x96);

	if (t1 != 6253U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x169 = 394807710;
	uint32_t x170 = 348U;

	t2 = (((x169%x170)>>x171)-x172);

	if (t2 != 10U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x241 = 14U;
	uint32_t x242 = 831U;
	int8_t x244 = 32;
	uint32_t t3 = 1205270U;

	t3 = (((x241%x242)>>x243)-x244);

	if (t3 != 4294967264U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x285 = 109LLU;
	int64_t x286 = -1LL;
	uint16_t x287 = 0U;
	static volatile int16_t x288 = 419;
	volatile uint64_t t4 = 37948595892LLU;

	t4 = (((x285%x286)>>x287)-x288);

	if (t4 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x317 = INT64_MAX;
	static uint64_t x318 = UINT64_MAX;
	int32_t x319 = 0;
	volatile uint64_t t5 = 502655104LLU;

	t5 = (((x317%x318)>>x319)-x320);

	if (t5 != 9223372036607360682LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x389 = INT32_MAX;
	static int64_t x390 = 187477334LL;
	uint16_t x391 = 2U;
	int16_t x392 = -1;
	int64_t t6 = -9942216437838701LL;

	t6 = (((x389%x390)>>x391)-x392);

	if (t6 != 21308244LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x445 = -1LL;
	uint64_t x446 = 3233241203797750LLU;
	int8_t x447 = 0;
	int32_t x448 = -128350682;
	volatile uint64_t t7 = 67686182LLU;

	t7 = (((x445%x446)>>x447)-x448);

	if (t7 != 1103006171738547LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x594 = 8604LLU;
	int8_t x595 = 1;
	uint16_t x596 = 14U;
	static uint64_t t8 = 29935670248LLU;

	t8 = (((x593%x594)>>x595)-x596);

	if (t8 != 2639LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x609 = 10;
	int32_t x610 = INT32_MIN;
	int16_t x611 = 0;
	uint8_t x612 = UINT8_MAX;
	static volatile int32_t t9 = -1;

	t9 = (((x609%x610)>>x611)-x612);

	if (t9 != -245) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x614 = INT8_MIN;
	uint16_t x615 = 0U;
	int8_t x616 = INT8_MAX;
	volatile uint32_t t10 = 8650622U;

	t10 = (((x613%x614)>>x615)-x616);

	if (t10 != 381649U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x737 = INT64_MAX;
	uint8_t x739 = 8U;
	int16_t x740 = 6295;
	int64_t t11 = 323255750303LL;

	t11 = (((x737%x738)>>x739)-x740);

	if (t11 != -6295LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x745 = UINT32_MAX;
	uint8_t x747 = 5U;
	volatile int8_t x748 = INT8_MIN;
	static volatile int64_t t12 = 10839434709751LL;

	t12 = (((x745%x746)>>x747)-x748);

	if (t12 != 134217855LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x814 = -125351LL;
	uint8_t x815 = 1U;
	int8_t x816 = -1;
	int64_t t13 = 1055642215206625LL;

	t13 = (((x813%x814)>>x815)-x816);

	if (t13 != 47677LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x833 = INT32_MIN;
	volatile int8_t x834 = -1;
	int16_t x835 = 0;
	volatile int32_t t14 = 1;

	t14 = (((x833%x834)>>x835)-x836);

	if (t14 != -14) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x853 = INT8_MAX;
	int32_t x855 = 5;
	volatile uint64_t t15 = 904093038502LLU;

	t15 = (((x853%x854)>>x855)-x856);

	if (t15 != 32768LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x881 = INT8_MAX;
	uint16_t x882 = 1U;
	static int8_t x883 = 6;
	uint16_t x884 = UINT16_MAX;
	static volatile int32_t t16 = 962301681;

	t16 = (((x881%x882)>>x883)-x884);

	if (t16 != -65535) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x941 = 713806415400618221LL;
	int32_t x942 = INT32_MIN;
	uint16_t x943 = 9U;
	int64_t x944 = -1LL;
	int64_t t17 = 2832831414LL;

	t17 = (((x941%x942)>>x943)-x944);

	if (t17 != 1191077LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x990 = INT8_MIN;
	int8_t x991 = 2;
	uint64_t x992 = UINT64_MAX;
	volatile uint64_t t18 = 48680410390556LLU;

	t18 = (((x989%x990)>>x991)-x992);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1017 = INT64_MIN;
	int64_t x1018 = INT64_MIN;
	static int8_t x1019 = 2;
	int64_t t19 = -1156877LL;

	t19 = (((x1017%x1018)>>x1019)-x1020);

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1061 = INT32_MAX;
	static uint32_t x1062 = 32U;
	int16_t x1063 = 1;
	int32_t x1064 = 627967818;
	uint32_t t20 = 17666U;

	t20 = (((x1061%x1062)>>x1063)-x1064);

	if (t20 != 3666999493U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1079 = 0;
	volatile int16_t x1080 = INT16_MIN;
	volatile uint64_t t21 = 160LLU;

	t21 = (((x1077%x1078)>>x1079)-x1080);

	if (t21 != 32768LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1101 = INT64_MAX;
	uint16_t x1102 = UINT16_MAX;
	volatile int16_t x1104 = -3420;
	volatile int64_t t22 = -4684568LL;

	t22 = (((x1101%x1102)>>x1103)-x1104);

	if (t22 != 11611LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1188 = -1;
	static int32_t t23 = 53;

	t23 = (((x1185%x1186)>>x1187)-x1188);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1305 = UINT8_MAX;
	uint8_t x1307 = 1U;
	volatile uint32_t x1308 = 1448960520U;
	volatile uint32_t t24 = 14U;

	t24 = (((x1305%x1306)>>x1307)-x1308);

	if (t24 != 2846006903U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1325 = 538491894551344116LL;
	int16_t x1326 = 12676;
	int8_t x1327 = 5;
	int64_t t25 = 2718308334LL;

	t25 = (((x1325%x1326)>>x1327)-x1328);

	if (t25 != 225LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1349 = -32;
	static uint32_t x1350 = UINT32_MAX;
	volatile uint8_t x1351 = 1U;
	int16_t x1352 = INT16_MIN;

	t26 = (((x1349%x1350)>>x1351)-x1352);

	if (t26 != 2147516400U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1361 = 7;
	int32_t x1362 = INT32_MAX;
	uint8_t x1363 = 0U;
	volatile uint8_t x1364 = UINT8_MAX;

	t27 = (((x1361%x1362)>>x1363)-x1364);

	if (t27 != -248) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x1461 = 1;
	uint64_t x1462 = UINT64_MAX;
	static int8_t x1463 = 8;
	static uint32_t x1464 = 102430516U;
	volatile uint64_t t28 = 148339733LLU;

	t28 = (((x1461%x1462)>>x1463)-x1464);

	if (t28 != 18446744073607121100LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1465 = INT64_MAX;
	static int32_t x1466 = INT32_MAX;
	int64_t x1467 = 11LL;
	int16_t x1468 = 17;
	int64_t t29 = 333LL;

	t29 = (((x1465%x1466)>>x1467)-x1468);

	if (t29 != -17LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1473 = UINT64_MAX;
	volatile uint16_t x1475 = 32U;
	int64_t x1476 = -22341955965331641LL;

	t30 = (((x1473%x1474)>>x1475)-x1476);

	if (t30 != 22341958112815288LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1570 = INT8_MIN;
	static volatile uint8_t x1571 = 6U;
	volatile int64_t x1572 = -1LL;
	static int64_t t31 = 1414926628LL;

	t31 = (((x1569%x1570)>>x1571)-x1572);

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1657 = INT64_MAX;
	int8_t x1660 = 2;
	static int64_t t32 = -104LL;

	t32 = (((x1657%x1658)>>x1659)-x1660);

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1722 = -1LL;
	int64_t t33 = 0LL;

	t33 = (((x1721%x1722)>>x1723)-x1724);

	if (t33 != -32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1753 = 1U;
	int64_t x1754 = 736LL;
	int8_t x1755 = 0;
	volatile int64_t x1756 = -87488725183697998LL;
	static int64_t t34 = -4LL;

	t34 = (((x1753%x1754)>>x1755)-x1756);

	if (t34 != 87488725183697999LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1765 = -1;
	uint64_t x1766 = UINT64_MAX;
	static uint16_t x1767 = 3U;
	uint8_t x1768 = 8U;

	t35 = (((x1765%x1766)>>x1767)-x1768);

	if (t35 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1861 = 293U;
	int8_t x1862 = INT8_MAX;
	uint16_t x1863 = 0U;
	volatile uint32_t t36 = 22644U;

	t36 = (((x1861%x1862)>>x1863)-x1864);

	if (t36 != 40U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1885 = INT16_MIN;
	uint64_t x1886 = 35428911LLU;
	int32_t x1887 = 1;
	volatile uint64_t t37 = 1729322629337LLU;

	t37 = (((x1885%x1886)>>x1887)-x1888);

	if (t37 != 4945489LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1889 = 1LLU;
	int32_t x1892 = 1;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x1889%x1890)>>x1891)-x1892);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1933 = 68395828242329LLU;
	static uint8_t x1934 = 17U;
	int8_t x1935 = 0;
	volatile int32_t x1936 = -31652838;
	uint64_t t39 = 17941443LLU;

	t39 = (((x1933%x1934)>>x1935)-x1936);

	if (t39 != 31652849LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1973 = 1174725U;
	uint64_t x1975 = 5LLU;
	uint16_t x1976 = UINT16_MAX;

	t40 = (((x1973%x1974)>>x1975)-x1976);

	if (t40 != 4294902929U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1981 = INT8_MAX;
	int8_t x1982 = INT8_MIN;
	volatile uint16_t x1983 = 7U;
	static int16_t x1984 = INT16_MIN;
	volatile int32_t t41 = 1655708;

	t41 = (((x1981%x1982)>>x1983)-x1984);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1997 = UINT16_MAX;
	volatile int16_t x1998 = -1;
	uint8_t x2000 = UINT8_MAX;
	int32_t t42 = 360793;

	t42 = (((x1997%x1998)>>x1999)-x2000);

	if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2009 = INT32_MAX;
	int16_t x2010 = INT16_MAX;
	int64_t x2011 = 2LL;
	volatile int16_t x2012 = INT16_MIN;
	int32_t t43 = -173;

	t43 = (((x2009%x2010)>>x2011)-x2012);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2029 = 17777200;
	uint8_t x2032 = 4U;
	volatile int32_t t44 = -190;

	t44 = (((x2029%x2030)>>x2031)-x2032);

	if (t44 != 1055) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2082 = INT8_MIN;
	uint8_t x2083 = 0U;
	int16_t x2084 = INT16_MIN;

	t45 = (((x2081%x2082)>>x2083)-x2084);

	if (t45 != 32776U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2130 = INT8_MIN;
	int8_t x2131 = 9;
	volatile int64_t x2132 = INT64_MAX;
	volatile int64_t t46 = 194674716365LL;

	t46 = (((x2129%x2130)>>x2131)-x2132);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2141 = 10;
	uint8_t x2142 = UINT8_MAX;
	int8_t x2143 = 1;
	int16_t x2144 = -4366;
	int32_t t47 = 146102816;

	t47 = (((x2141%x2142)>>x2143)-x2144);

	if (t47 != 4371) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x2161 = UINT8_MAX;
	static volatile int8_t x2162 = -1;
	uint8_t x2163 = 24U;
	uint8_t x2164 = UINT8_MAX;
	int32_t t48 = 130224689;

	t48 = (((x2161%x2162)>>x2163)-x2164);

	if (t48 != -255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2193 = -1;
	uint8_t x2194 = 1U;
	uint16_t x2195 = 0U;
	static int8_t x2196 = -61;

	t49 = (((x2193%x2194)>>x2195)-x2196);

	if (t49 != 61) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2217 = UINT64_MAX;
	int16_t x2218 = INT16_MIN;
	int8_t x2219 = 44;
	volatile uint64_t t50 = 1123597415LLU;

	t50 = (((x2217%x2218)>>x2219)-x2220);

	if (t50 != 18446744073503898029LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2269 = INT16_MIN;
	uint32_t x2270 = UINT32_MAX;
	uint64_t x2271 = 1LLU;
	uint32_t t51 = 3563U;

	t51 = (((x2269%x2270)>>x2271)-x2272);

	if (t51 != 2147458956U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2281 = 2U;
	int64_t x2282 = INT64_MAX;
	int64_t t52 = 5263879462LL;

	t52 = (((x2281%x2282)>>x2283)-x2284);

	if (t52 != 30LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2289 = 3008U;
	int8_t x2290 = -1;
	int16_t x2291 = 26;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (((x2289%x2290)>>x2291)-x2292);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2337 = 3;
	int8_t x2339 = 0;
	int8_t x2340 = INT8_MIN;
	int32_t t54 = 1146;

	t54 = (((x2337%x2338)>>x2339)-x2340);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2409 = 2691847015604049LLU;
	volatile uint16_t x2411 = 1U;
	volatile uint64_t t55 = 759094LLU;

	t55 = (((x2409%x2410)>>x2411)-x2412);

	if (t55 != 1345923507802007LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x2413 = INT16_MAX;
	uint64_t x2414 = 458293682294LLU;
	static volatile uint8_t x2415 = 0U;
	static int64_t x2416 = 1495603LL;

	t56 = (((x2413%x2414)>>x2415)-x2416);

	if (t56 != 18446744073708088780LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2473 = UINT8_MAX;
	volatile int32_t x2474 = 40390792;
	int32_t x2476 = 175;
	int32_t t57 = 1;

	t57 = (((x2473%x2474)>>x2475)-x2476);

	if (t57 != -175) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2493 = 0;
	int32_t x2494 = INT32_MIN;
	volatile int32_t x2495 = 3;
	int16_t x2496 = INT16_MIN;
	static int32_t t58 = 1941504;

	t58 = (((x2493%x2494)>>x2495)-x2496);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2595 = 27U;
	uint8_t x2596 = 6U;
	static uint64_t t59 = 356321280653773222LLU;

	t59 = (((x2593%x2594)>>x2595)-x2596);

	if (t59 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2597 = 86U;
	int16_t x2599 = 6;
	uint64_t x2600 = 47370470325LLU;
	static volatile uint64_t t60 = 8580219079694LLU;

	t60 = (((x2597%x2598)>>x2599)-x2600);

	if (t60 != 18446744026339081292LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2613 = UINT16_MAX;
	static uint32_t x2614 = UINT32_MAX;
	volatile uint8_t x2616 = UINT8_MAX;
	volatile uint32_t t61 = 1U;

	t61 = (((x2613%x2614)>>x2615)-x2616);

	if (t61 != 4294967042U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2617 = UINT64_MAX;
	int8_t x2618 = INT8_MIN;
	static int8_t x2620 = INT8_MIN;

	t62 = (((x2617%x2618)>>x2619)-x2620);

	if (t62 != 191LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2629 = 0;
	uint16_t x2631 = 0U;
	static int8_t x2632 = INT8_MIN;
	volatile uint64_t t63 = 4636613679774701053LLU;

	t63 = (((x2629%x2630)>>x2631)-x2632);

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2637 = UINT32_MAX;
	int8_t x2638 = INT8_MIN;
	static volatile uint8_t x2639 = 4U;
	volatile uint32_t t64 = 13U;

	t64 = (((x2637%x2638)>>x2639)-x2640);

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2649 = 62422973;
	int8_t x2651 = 0;
	volatile int16_t x2652 = -1;
	volatile uint32_t t65 = 118637943U;

	t65 = (((x2649%x2650)>>x2651)-x2652);

	if (t65 != 24464117U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2710 = -1;
	int16_t x2711 = 0;
	volatile int32_t t66 = 6119;

	t66 = (((x2709%x2710)>>x2711)-x2712);

	if (t66 != -10301) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x2729 = 7013457U;
	int16_t x2730 = -148;
	int8_t x2731 = 0;
	volatile uint32_t t67 = 5U;

	t67 = (((x2729%x2730)>>x2731)-x2732);

	if (t67 != 6947922U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2749 = 1239563780306LLU;
	uint32_t x2750 = 701493U;
	static volatile uint8_t x2751 = 56U;
	int32_t x2752 = INT32_MIN;
	uint64_t t68 = 39477738936LLU;

	t68 = (((x2749%x2750)>>x2751)-x2752);

	if (t68 != 2147483648LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2769 = UINT32_MAX;
	uint32_t x2770 = 1559186U;
	static uint8_t x2771 = 2U;
	int64_t x2772 = -1LL;
	volatile int64_t t69 = -50LL;

	t69 = (((x2769%x2770)>>x2771)-x2772);

	if (t69 != 242263LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2861 = INT64_MAX;
	int32_t x2863 = 0;
	static int16_t x2864 = -1;
	static volatile int64_t t70 = -53916987164862LL;

	t70 = (((x2861%x2862)>>x2863)-x2864);

	if (t70 != 8LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2998 = 7798U;
	uint16_t x2999 = 31U;
	int32_t x3000 = -1;
	static uint32_t t71 = 1234261U;

	t71 = (((x2997%x2998)>>x2999)-x3000);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3137 = UINT64_MAX;
	volatile uint32_t x3138 = 483371183U;
	int8_t x3139 = 0;
	int8_t x3140 = INT8_MIN;
	volatile uint64_t t72 = 1853127279452LLU;

	t72 = (((x3137%x3138)>>x3139)-x3140);

	if (t72 != 422779605LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3241 = INT16_MAX;
	int64_t x3242 = INT64_MAX;
	static uint8_t x3243 = 47U;
	volatile int32_t x3244 = INT32_MAX;
	volatile int64_t t73 = -1601589819LL;

	t73 = (((x3241%x3242)>>x3243)-x3244);

	if (t73 != -2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3253 = -53421;
	int32_t x3254 = -1;
	uint8_t x3255 = 8U;
	static int32_t x3256 = -2;
	volatile int32_t t74 = -3718;

	t74 = (((x3253%x3254)>>x3255)-x3256);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3313 = 1100U;
	int8_t x3314 = -1;
	int8_t x3315 = 30;
	uint16_t x3316 = 100U;
	int32_t t75 = -18;

	t75 = (((x3313%x3314)>>x3315)-x3316);

	if (t75 != -100) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3346 = INT8_MIN;
	volatile int64_t x3347 = 0LL;
	volatile int64_t t76 = 33712LL;

	t76 = (((x3345%x3346)>>x3347)-x3348);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3405 = INT64_MAX;
	static uint64_t x3406 = UINT64_MAX;
	int8_t x3407 = 1;
	uint32_t x3408 = 44750U;
	uint64_t t77 = 184424745617256441LLU;

	t77 = (((x3405%x3406)>>x3407)-x3408);

	if (t77 != 4611686018427343153LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x3477 = 0;
	uint64_t x3478 = 9917610982937962LLU;
	uint8_t x3479 = 21U;
	int32_t x3480 = INT32_MIN;
	volatile uint64_t t78 = 50694320986LLU;

	t78 = (((x3477%x3478)>>x3479)-x3480);

	if (t78 != 2147483648LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3509 = 250;
	uint32_t x3510 = UINT32_MAX;
	volatile uint16_t x3511 = 2U;
	static int8_t x3512 = 0;
	volatile uint32_t t79 = 13126U;

	t79 = (((x3509%x3510)>>x3511)-x3512);

	if (t79 != 62U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3517 = UINT8_MAX;
	volatile int32_t x3518 = INT32_MAX;
	uint16_t x3519 = 0U;
	uint64_t x3520 = 8757700937LLU;
	volatile uint64_t t80 = 37073619303LLU;

	t80 = (((x3517%x3518)>>x3519)-x3520);

	if (t80 != 18446744064951850934LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x3533 = 2;
	volatile int32_t x3534 = INT32_MIN;
	static int8_t x3535 = 15;
	static int32_t x3536 = -20390074;
	volatile int32_t t81 = -52;

	t81 = (((x3533%x3534)>>x3535)-x3536);

	if (t81 != 20390074) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3553 = INT32_MIN;
	int8_t x3554 = INT8_MIN;
	uint16_t x3555 = 0U;
	int16_t x3556 = -2;
	volatile int32_t t82 = -43;

	t82 = (((x3553%x3554)>>x3555)-x3556);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3565 = 0U;
	volatile int64_t x3566 = 681888230341LL;
	int8_t x3567 = 17;
	uint64_t x3568 = 758724LLU;
	static uint64_t t83 = 2LLU;

	t83 = (((x3565%x3566)>>x3567)-x3568);

	if (t83 != 18446744073708792892LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x3573 = UINT32_MAX;
	int8_t x3574 = 2;
	int16_t x3576 = 1;
	uint32_t t84 = 605U;

	t84 = (((x3573%x3574)>>x3575)-x3576);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3637 = 21U;
	uint32_t x3638 = UINT32_MAX;
	uint8_t x3639 = 16U;
	uint16_t x3640 = 3426U;
	uint32_t t85 = 126830383U;

	t85 = (((x3637%x3638)>>x3639)-x3640);

	if (t85 != 4294963870U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3665 = -3391839720800LL;
	static volatile uint64_t x3666 = UINT64_MAX;
	uint8_t x3667 = 12U;
	int32_t x3668 = INT32_MIN;
	uint64_t t86 = 7193114417126446395LLU;

	t86 = (((x3665%x3666)>>x3667)-x3668);

	if (t86 != 4503600946768274LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x3677 = UINT32_MAX;
	static uint8_t x3679 = 4U;
	uint16_t x3680 = 2U;

	t87 = (((x3677%x3678)>>x3679)-x3680);

	if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3833 = UINT16_MAX;
	static uint16_t x3835 = 14U;
	int32_t x3836 = -1;

	t88 = (((x3833%x3834)>>x3835)-x3836);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3837 = INT64_MIN;
	int16_t x3838 = INT16_MIN;
	static uint8_t x3839 = 6U;
	volatile int32_t x3840 = -1;

	t89 = (((x3837%x3838)>>x3839)-x3840);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3857 = 25673015U;
	int64_t x3858 = INT64_MIN;
	uint8_t x3859 = 0U;
	volatile int32_t x3860 = INT32_MAX;
	int64_t t90 = -777738LL;

	t90 = (((x3857%x3858)>>x3859)-x3860);

	if (t90 != -2121810632LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3901 = INT32_MIN;
	volatile uint64_t x3902 = 2233424770878972045LLU;
	volatile uint8_t x3903 = 1U;
	volatile uint64_t x3904 = 42638819LLU;

	t91 = (((x3901%x3902)>>x3903)-x3904);

	if (t91 != 289672952222506985LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3921 = 4988;
	uint8_t x3923 = 14U;
	int8_t x3924 = -1;

	t92 = (((x3921%x3922)>>x3923)-x3924);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3953 = UINT8_MAX;
	static uint16_t x3955 = 1U;
	volatile int32_t t93 = 528643;

	t93 = (((x3953%x3954)>>x3955)-x3956);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4050 = 5482LLU;
	uint64_t t94 = 0LLU;

	t94 = (((x4049%x4050)>>x4051)-x4052);

	if (t94 != 4261LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4058 = 42223102;
	int8_t x4059 = 6;
	int64_t x4060 = -39598406186413288LL;
	int64_t t95 = -136354678911039LL;

	t95 = (((x4057%x4058)>>x4059)-x4060);

	if (t95 != 39598406186413570LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4066 = INT8_MIN;
	static uint64_t x4067 = 14LLU;
	volatile uint64_t x4068 = 16LLU;

	t96 = (((x4065%x4066)>>x4067)-x4068);

	if (t96 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4137 = INT16_MAX;
	int8_t x4138 = INT8_MAX;
	uint16_t x4139 = 29U;
	uint16_t x4140 = UINT16_MAX;

	t97 = (((x4137%x4138)>>x4139)-x4140);

	if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4177 = 0;
	volatile uint32_t x4178 = 24741U;
	int8_t x4179 = 2;
	volatile uint32_t t98 = 12728U;

	t98 = (((x4177%x4178)>>x4179)-x4180);

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4233 = INT8_MIN;
	uint64_t x4234 = UINT64_MAX;
	static uint8_t x4235 = 15U;
	int64_t x4236 = -90663374311472982LL;
	volatile uint64_t t99 = 5099240813LLU;

	t99 = (((x4233%x4234)>>x4235)-x4236);

	if (t99 != 91226324264894293LLU) { NG(); } else { ; }
	
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


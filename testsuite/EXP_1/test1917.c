#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x67 = UINT64_MAX;
int64_t x191 = 52195780927LL;
static uint16_t x192 = 62U;
uint16_t x253 = UINT16_MAX;
uint8_t x256 = 2U;
int8_t x303 = INT8_MAX;
volatile uint32_t t4 = 1178952822U;
uint32_t x393 = UINT32_MAX;
int8_t x396 = 4;
int64_t x413 = INT64_MIN;
volatile uint64_t t9 = 5640911111478LLU;
int8_t x700 = 0;
uint64_t x710 = 9509590987LLU;
static uint8_t x966 = 12U;
static int64_t x967 = -1LL;
volatile int8_t x968 = 0;
int8_t x1076 = 0;
volatile int64_t t17 = 14430LL;
int16_t x1106 = INT16_MIN;
uint64_t x1107 = 183401139LLU;
static uint8_t x1108 = 1U;
int32_t x1109 = 0;
volatile uint8_t x1110 = 7U;
uint8_t x1122 = 17U;
int8_t x1178 = INT8_MIN;
volatile int32_t x1180 = 18;
int8_t x1183 = INT8_MAX;
uint64_t t22 = 10LLU;
volatile uint32_t t23 = 292U;
volatile int8_t x1202 = INT8_MIN;
volatile uint32_t x1227 = UINT32_MAX;
volatile int64_t t26 = -3LL;
uint64_t x1261 = UINT64_MAX;
volatile uint8_t x1272 = 46U;
volatile int64_t t28 = -2821027797934LL;
int64_t x1286 = INT64_MIN;
uint64_t x1519 = UINT64_MAX;
volatile uint64_t t33 = 118347693LLU;
uint32_t x1626 = UINT32_MAX;
uint8_t x1804 = 0U;
int32_t x1827 = INT32_MIN;
uint8_t x1861 = 57U;
uint8_t x1864 = 3U;
int32_t x1867 = INT32_MAX;
volatile int16_t x1873 = 93;
uint64_t x1875 = 4475558418LLU;
uint8_t x1876 = 59U;
uint64_t t45 = 1067355364973LLU;
int8_t x2060 = 15;
uint64_t t47 = 93LLU;
int64_t t48 = 8030274LL;
uint8_t x2152 = 23U;
uint8_t x2182 = 30U;
static int8_t x2206 = 1;
uint32_t t51 = 7338885U;
static int8_t x2243 = -1;
volatile int64_t x2278 = 3850549417059LL;
uint64_t x2279 = 31300608LLU;
static volatile uint32_t t56 = 403980U;
volatile uint32_t x2610 = 1193173979U;
volatile uint8_t x2659 = 4U;
volatile uint32_t t60 = 187283U;
volatile uint64_t t61 = 20LLU;
static int16_t x2725 = INT16_MIN;
volatile int64_t t62 = -383550120805644LL;
int32_t x2729 = -1;
static int32_t x2873 = -1;
volatile int8_t x2875 = INT8_MIN;
uint64_t x2925 = UINT64_MAX;
uint16_t x2976 = 2U;
int64_t x3039 = INT64_MIN;
int16_t x3314 = -107;
uint16_t x3316 = 0U;
volatile int64_t t76 = 3LL;
uint64_t x3397 = 287337199LLU;
volatile uint64_t t78 = 170LLU;
int32_t t80 = -1;
static uint8_t x3590 = 6U;
uint64_t x3591 = UINT64_MAX;
volatile uint64_t x3592 = 27LLU;
int8_t x3700 = 6;
int8_t x3838 = 60;
volatile int32_t x3877 = -861;
volatile uint32_t x3945 = 1U;
uint64_t x4020 = 6LLU;
int16_t x4323 = -1;
int64_t x4324 = 5LL;
int8_t x4327 = -1;
volatile int64_t t97 = 1093656356949873LL;
volatile int32_t x4333 = INT32_MIN;
uint64_t x4335 = 157401236684858970LLU;
int64_t x4378 = 199458286488LL;


void f0(void) {
	int32_t x65 = -1;
	uint32_t x66 = 63064970U;
	uint64_t x68 = 61LLU;
	static uint64_t t0 = 35835620708LLU;

	t0 = (((x65|x66)%x67)<<x68);

	if (t0 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x189 = -1;
	uint64_t x190 = UINT64_MAX;
	uint64_t t1 = 27327LLU;

	t1 = (((x189|x190)%x191)<<x192);

	if (t1 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x201 = 3U;
	uint8_t x202 = 0U;
	int16_t x203 = INT16_MAX;
	uint16_t x204 = 0U;
	volatile int32_t t2 = -7311;

	t2 = (((x201|x202)%x203)<<x204);

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x254 = -1;
	uint64_t x255 = 32158701343238664LLU;
	static volatile uint64_t t3 = 54375738103LLU;

	t3 = (((x253|x254)%x255)<<x256);

	if (t3 != 79232816135188572LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MIN;
	volatile int32_t x304 = 0;

	t4 = (((x301|x302)%x303)<<x304);

	if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x345 = 61;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 27599U;
	int16_t x348 = 0;
	volatile uint32_t t5 = 121460287U;

	t5 = (((x345|x346)%x347)<<x348);

	if (t5 != 5808U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x389 = 7U;
	int32_t x390 = 14328874;
	int8_t x391 = INT8_MAX;
	volatile int16_t x392 = 6;
	int32_t t6 = -1195621;

	t6 = (((x389|x390)%x391)<<x392);

	if (t6 != 6656) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x394 = 3117458U;
	int64_t x395 = INT64_MIN;
	volatile int64_t t7 = -48803881612566923LL;

	t7 = (((x393|x394)%x395)<<x396);

	if (t7 != 68719476720LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x414 = INT64_MIN;
	int16_t x415 = -1;
	uint8_t x416 = 0U;
	volatile int64_t t8 = 141226848940LL;

	t8 = (((x413|x414)%x415)<<x416);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x605 = INT32_MIN;
	static int32_t x606 = 181;
	volatile uint64_t x607 = UINT64_MAX;
	int8_t x608 = 27;

	t9 = (((x605|x606)%x607)<<x608);

	if (t9 != 18158513721851248640LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x697 = 6528LLU;
	int64_t x698 = -6915831LL;
	int16_t x699 = -1;
	uint64_t t10 = 284046LLU;

	t10 = (((x697|x698)%x699)<<x700);

	if (t10 != 18446744073702635913LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x709 = INT32_MIN;
	static int32_t x711 = 18;
	int16_t x712 = 44;
	volatile uint64_t t11 = 179LLU;

	t11 = (((x709|x710)%x711)<<x712);

	if (t11 != 228698418577408LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x725 = INT32_MIN;
	static uint64_t x726 = 34094924160333089LLU;
	static volatile int64_t x727 = -1LL;
	static uint8_t x728 = 1U;
	volatile uint64_t t12 = 911464LLU;

	t12 = (((x725|x726)%x727)<<x728);

	if (t12 != 18446744070596389442LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x813 = 12U;
	int32_t x814 = INT32_MAX;
	int64_t x815 = -1LL;
	uint8_t x816 = 27U;
	volatile int64_t t13 = 1910635007355153LL;

	t13 = (((x813|x814)%x815)<<x816);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x929 = UINT32_MAX;
	int16_t x930 = -52;
	uint64_t x931 = 5174475524973LLU;
	volatile uint16_t x932 = 1U;
	volatile uint64_t t14 = 64186171696810LLU;

	t14 = (((x929|x930)%x931)<<x932);

	if (t14 != 8589934590LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x965 = INT16_MIN;
	int64_t t15 = -31707486852LL;

	t15 = (((x965|x966)%x967)<<x968);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x993 = -2063389557LL;
	int64_t x994 = -1LL;
	int8_t x995 = -1;
	uint8_t x996 = 50U;
	volatile int64_t t16 = -496LL;

	t16 = (((x993|x994)%x995)<<x996);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1073 = INT16_MAX;
	int16_t x1074 = 21;
	volatile int64_t x1075 = INT64_MIN;

	t17 = (((x1073|x1074)%x1075)<<x1076);

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x1105 = INT64_MAX;
	uint64_t t18 = 933953405888LLU;

	t18 = (((x1105|x1106)%x1107)<<x1108);

	if (t18 != 200970264LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1111 = -5174659298011556LL;
	int64_t x1112 = 7LL;
	int64_t t19 = 75818857LL;

	t19 = (((x1109|x1110)%x1111)<<x1112);

	if (t19 != 896LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x1121 = -1154188;
	uint64_t x1123 = 5827032785043LLU;
	uint8_t x1124 = 1U;
	volatile uint64_t t20 = 209484190972459763LLU;

	t20 = (((x1121|x1122)%x1123)<<x1124);

	if (t20 != 2999015283110LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1177 = UINT32_MAX;
	uint8_t x1179 = UINT8_MAX;
	uint32_t t21 = 91U;

	t21 = (((x1177|x1178)%x1179)<<x1180);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1181 = INT64_MAX;
	static uint64_t x1182 = 88202LLU;
	int8_t x1184 = 30;

	t22 = (((x1181|x1182)%x1183)<<x1184);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1197 = INT8_MAX;
	uint32_t x1198 = 3U;
	uint16_t x1199 = 619U;
	static int64_t x1200 = 1LL;

	t23 = (((x1197|x1198)%x1199)<<x1200);

	if (t23 != 254U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1201 = -13650;
	int64_t x1203 = -1LL;
	volatile uint8_t x1204 = 3U;
	volatile int64_t t24 = 4185LL;

	t24 = (((x1201|x1202)%x1203)<<x1204);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1225 = INT16_MAX;
	int8_t x1226 = 1;
	static uint32_t x1228 = 7U;
	volatile uint32_t t25 = 873U;

	t25 = (((x1225|x1226)%x1227)<<x1228);

	if (t25 != 4194176U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1253 = 1;
	int64_t x1254 = 7802840LL;
	volatile int32_t x1255 = -73796;
	volatile int8_t x1256 = 1;

	t26 = (((x1253|x1254)%x1255)<<x1256);

	if (t26 != 108522LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1262 = INT32_MAX;
	static int16_t x1263 = INT16_MAX;
	int8_t x1264 = 33;
	volatile uint64_t t27 = 44427250LLU;

	t27 = (((x1261|x1262)%x1263)<<x1264);

	if (t27 != 128849018880LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1269 = INT64_MIN;
	static int8_t x1270 = INT8_MIN;
	int8_t x1271 = 4;

	t28 = (((x1269|x1270)%x1271)<<x1272);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1281 = 1913U;
	static uint32_t x1282 = 481U;
	static int32_t x1283 = INT32_MAX;
	int16_t x1284 = 24;
	volatile uint32_t t29 = 734252U;

	t29 = (((x1281|x1282)%x1283)<<x1284);

	if (t29 != 4177526784U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1285 = 1;
	uint16_t x1287 = 1U;
	int8_t x1288 = 14;
	volatile int64_t t30 = 371541141485912004LL;

	t30 = (((x1285|x1286)%x1287)<<x1288);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1401 = INT32_MIN;
	uint64_t x1402 = UINT64_MAX;
	volatile int16_t x1403 = 12120;
	int32_t x1404 = 1;
	uint64_t t31 = 57083822562459LLU;

	t31 = (((x1401|x1402)%x1403)<<x1404);

	if (t31 != 23790LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1485 = INT16_MIN;
	uint32_t x1486 = UINT32_MAX;
	static int32_t x1487 = -887830;
	uint16_t x1488 = 4U;
	volatile uint32_t t32 = 20U;

	t32 = (((x1485|x1486)%x1487)<<x1488);

	if (t32 != 14205264U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1517 = 1270;
	static uint16_t x1518 = UINT16_MAX;
	static int32_t x1520 = 1;

	t33 = (((x1517|x1518)%x1519)<<x1520);

	if (t33 != 131070LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1533 = INT16_MIN;
	static int8_t x1534 = -15;
	int32_t x1535 = -1;
	int32_t x1536 = 6;
	static int32_t t34 = 745649;

	t34 = (((x1533|x1534)%x1535)<<x1536);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1609 = 1552167085621380LLU;
	int32_t x1610 = -4;
	static volatile int32_t x1611 = -44;
	int8_t x1612 = 1;
	volatile uint64_t t35 = 502608698531298LLU;

	t35 = (((x1609|x1610)%x1611)<<x1612);

	if (t35 != 80LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x1617 = -1;
	uint64_t x1618 = 15810LLU;
	uint32_t x1619 = 608494U;
	static uint16_t x1620 = 1U;
	volatile uint64_t t36 = 7079338542550582LLU;

	t36 = (((x1617|x1618)%x1619)<<x1620);

	if (t36 != 527054LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1625 = INT64_MIN;
	uint64_t x1627 = 33240576499LLU;
	static uint32_t x1628 = 50U;
	static uint64_t t37 = 86101LLU;

	t37 = (((x1625|x1626)%x1627)<<x1628);

	if (t37 != 12207006789987729408LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1633 = 7946658217561LLU;
	volatile uint32_t x1634 = 41U;
	uint64_t x1635 = 237743882044130LLU;
	volatile uint16_t x1636 = 28U;
	volatile uint64_t t38 = 338591782377695LLU;

	t38 = (((x1633|x1634)%x1635)<<x1636);

	if (t38 != 11789253839125741568LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1757 = 14;
	int16_t x1758 = 3;
	int32_t x1759 = INT32_MIN;
	uint32_t x1760 = 0U;
	static volatile int32_t t39 = -14;

	t39 = (((x1757|x1758)%x1759)<<x1760);

	if (t39 != 15) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1801 = -1223;
	uint64_t x1802 = 5662092239588633LLU;
	int32_t x1803 = 1288;
	static uint64_t t40 = 64639136730628759LLU;

	t40 = (((x1801|x1802)%x1803)<<x1804);

	if (t40 != 1049LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1813 = UINT8_MAX;
	volatile uint64_t x1814 = 108487783860099LLU;
	uint16_t x1815 = UINT16_MAX;
	uint64_t x1816 = 27LLU;
	volatile uint64_t t41 = 188327512018508LLU;

	t41 = (((x1813|x1814)%x1815)<<x1816);

	if (t41 != 3933653172224LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1825 = 15U;
	static uint32_t x1826 = UINT32_MAX;
	int16_t x1828 = 1;
	static volatile uint32_t t42 = 63660901U;

	t42 = (((x1825|x1826)%x1827)<<x1828);

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1862 = UINT8_MAX;
	static int64_t x1863 = INT64_MIN;
	volatile int64_t t43 = 7727408LL;

	t43 = (((x1861|x1862)%x1863)<<x1864);

	if (t43 != 2040LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1865 = 2409821LLU;
	uint16_t x1866 = 15U;
	uint16_t x1868 = 8U;
	uint64_t t44 = 2507598219151LLU;

	t44 = (((x1865|x1866)%x1867)<<x1868);

	if (t44 != 616914688LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1874 = 0U;

	t45 = (((x1873|x1874)%x1875)<<x1876);

	if (t45 != 16717361816799281152LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1973 = 97U;
	int64_t x1974 = INT64_MAX;
	int8_t x1975 = -1;
	uint8_t x1976 = 4U;
	int64_t t46 = -269267LL;

	t46 = (((x1973|x1974)%x1975)<<x1976);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2057 = INT16_MIN;
	volatile uint64_t x2058 = 6211574387830LLU;
	uint32_t x2059 = 78224U;

	t47 = (((x2057|x2058)%x2059)<<x2060);

	if (t47 != 1131610112LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2117 = INT64_MAX;
	int32_t x2118 = INT32_MAX;
	int8_t x2119 = 1;
	int16_t x2120 = 15;

	t48 = (((x2117|x2118)%x2119)<<x2120);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2149 = 341628471U;
	static int32_t x2150 = INT32_MIN;
	volatile uint16_t x2151 = UINT16_MAX;
	volatile uint32_t t49 = 54765U;

	t49 = (((x2149|x2150)%x2151)<<x2152);

	if (t49 != 1241513984U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2181 = -22;
	int16_t x2183 = -1;
	static int8_t x2184 = 1;
	int32_t t50 = 215;

	t50 = (((x2181|x2182)%x2183)<<x2184);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2205 = 15174U;
	volatile uint8_t x2207 = 1U;
	int16_t x2208 = 31;

	t51 = (((x2205|x2206)%x2207)<<x2208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2241 = INT32_MAX;
	int8_t x2242 = INT8_MIN;
	uint8_t x2244 = 2U;
	static int32_t t52 = -11622418;

	t52 = (((x2241|x2242)%x2243)<<x2244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2277 = UINT16_MAX;
	static uint16_t x2280 = 22U;
	uint64_t t53 = 831495495373LLU;

	t53 = (((x2277|x2278)%x2279)<<x2280);

	if (t53 != 47253225996288LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2413 = INT8_MIN;
	uint16_t x2414 = 6U;
	uint32_t x2415 = 1U;
	static uint8_t x2416 = 26U;
	static volatile uint32_t t54 = 5U;

	t54 = (((x2413|x2414)%x2415)<<x2416);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2565 = INT64_MIN;
	static int16_t x2566 = 1407;
	static uint64_t x2567 = UINT64_MAX;
	uint8_t x2568 = 0U;
	volatile uint64_t t55 = 3907995LLU;

	t55 = (((x2565|x2566)%x2567)<<x2568);

	if (t55 != 9223372036854777215LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2593 = UINT32_MAX;
	volatile int16_t x2594 = INT16_MIN;
	static int32_t x2595 = INT32_MAX;
	uint8_t x2596 = 1U;

	t56 = (((x2593|x2594)%x2595)<<x2596);

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2609 = 2253542605LLU;
	int16_t x2611 = 246;
	uint8_t x2612 = 24U;
	volatile uint64_t t57 = 9429LLU;

	t57 = (((x2609|x2610)%x2611)<<x2612);

	if (t57 != 3707764736LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2657 = 615LL;
	int16_t x2658 = INT16_MAX;
	uint8_t x2660 = 1U;
	volatile int64_t t58 = 410516776864519LL;

	t58 = (((x2657|x2658)%x2659)<<x2660);

	if (t58 != 6LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2685 = UINT8_MAX;
	int32_t x2686 = INT32_MAX;
	int64_t x2687 = INT64_MIN;
	int16_t x2688 = 0;
	volatile int64_t t59 = 19LL;

	t59 = (((x2685|x2686)%x2687)<<x2688);

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2713 = 16472U;
	static int16_t x2714 = -1;
	uint32_t x2715 = 11U;
	uint16_t x2716 = 0U;

	t60 = (((x2713|x2714)%x2715)<<x2716);

	if (t60 != 3U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2717 = INT16_MIN;
	uint64_t x2718 = UINT64_MAX;
	int64_t x2719 = -1LL;
	uint64_t x2720 = 40LLU;

	t61 = (((x2717|x2718)%x2719)<<x2720);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2726 = INT8_MIN;
	static int64_t x2727 = -1LL;
	int16_t x2728 = 3;

	t62 = (((x2725|x2726)%x2727)<<x2728);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2730 = 1862887LLU;
	int16_t x2731 = -11;
	int8_t x2732 = 4;
	uint64_t t63 = 1LLU;

	t63 = (((x2729|x2730)%x2731)<<x2732);

	if (t63 != 160LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2805 = 3;
	uint16_t x2806 = UINT16_MAX;
	int32_t x2807 = INT32_MAX;
	volatile uint16_t x2808 = 2U;
	volatile int32_t t64 = -535325213;

	t64 = (((x2805|x2806)%x2807)<<x2808);

	if (t64 != 262140) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2874 = 9367974778376388LLU;
	uint8_t x2876 = 1U;
	uint64_t t65 = 15160163434LLU;

	t65 = (((x2873|x2874)%x2875)<<x2876);

	if (t65 != 254LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2926 = 35LLU;
	int32_t x2927 = INT32_MIN;
	volatile int16_t x2928 = 9;
	volatile uint64_t t66 = 41398822389LLU;

	t66 = (((x2925|x2926)%x2927)<<x2928);

	if (t66 != 1099511627264LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2933 = 124368LLU;
	int32_t x2934 = INT32_MIN;
	volatile uint16_t x2935 = 1556U;
	uint8_t x2936 = 5U;
	volatile uint64_t t67 = 734664561661372663LLU;

	t67 = (((x2933|x2934)%x2935)<<x2936);

	if (t67 != 45184LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2973 = INT64_MIN;
	int32_t x2974 = 268116;
	static volatile uint64_t x2975 = 350300572LLU;
	uint64_t t68 = 6987207309823597LLU;

	t68 = (((x2973|x2974)%x2975)<<x2976);

	if (t68 != 1013857904LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3005 = 0LL;
	static int8_t x3006 = INT8_MAX;
	volatile int16_t x3007 = 50;
	volatile int16_t x3008 = 53;
	volatile int64_t t69 = 3817LL;

	t69 = (((x3005|x3006)%x3007)<<x3008);

	if (t69 != 243194379878006784LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3037 = -1;
	uint32_t x3038 = 21713U;
	uint16_t x3040 = 7U;
	int64_t t70 = -149212923431754394LL;

	t70 = (((x3037|x3038)%x3039)<<x3040);

	if (t70 != 549755813760LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x3073 = UINT32_MAX;
	static volatile uint16_t x3074 = 7U;
	int32_t x3075 = INT32_MIN;
	int8_t x3076 = 10;
	uint32_t t71 = 13501U;

	t71 = (((x3073|x3074)%x3075)<<x3076);

	if (t71 != 4294966272U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3293 = 6U;
	int16_t x3294 = INT16_MIN;
	uint8_t x3295 = 1U;
	int32_t x3296 = 1;
	uint32_t t72 = 25303U;

	t72 = (((x3293|x3294)%x3295)<<x3296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3313 = 65U;
	uint32_t x3315 = UINT32_MAX;
	volatile uint32_t t73 = 3471U;

	t73 = (((x3313|x3314)%x3315)<<x3316);

	if (t73 != 4294967253U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3365 = INT16_MAX;
	static uint64_t x3366 = 388699388754710LLU;
	static uint64_t x3367 = UINT64_MAX;
	int32_t x3368 = 1;
	volatile uint64_t t74 = 823581015877984453LLU;

	t74 = (((x3365|x3366)%x3367)<<x3368);

	if (t74 != 777398777544702LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3377 = 65U;
	int64_t x3378 = 4112194884LL;
	volatile int8_t x3379 = 21;
	static int16_t x3380 = 21;
	volatile int64_t t75 = -299590348207639029LL;

	t75 = (((x3377|x3378)%x3379)<<x3380);

	if (t75 != 2097152LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3385 = 1;
	uint16_t x3386 = 13317U;
	int64_t x3387 = 778019736811LL;
	uint8_t x3388 = 0U;

	t76 = (((x3385|x3386)%x3387)<<x3388);

	if (t76 != 13317LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3398 = UINT32_MAX;
	static int64_t x3399 = -344129417166912716LL;
	static int8_t x3400 = 1;
	volatile uint64_t t77 = 31625987943971LLU;

	t77 = (((x3397|x3398)%x3399)<<x3400);

	if (t77 != 8589934590LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3417 = 1627LLU;
	int64_t x3418 = INT64_MIN;
	int32_t x3419 = INT32_MIN;
	uint16_t x3420 = 54U;

	t78 = (((x3417|x3418)%x3419)<<x3420);

	if (t78 != 10862682301217636352LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3429 = -162149;
	int16_t x3430 = 0;
	static uint64_t x3431 = 1LLU;
	int16_t x3432 = 53;
	static volatile uint64_t t79 = 37216153552000884LLU;

	t79 = (((x3429|x3430)%x3431)<<x3432);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3517 = INT16_MAX;
	uint8_t x3518 = UINT8_MAX;
	int8_t x3519 = INT8_MAX;
	uint8_t x3520 = 1U;

	t80 = (((x3517|x3518)%x3519)<<x3520);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3537 = UINT8_MAX;
	uint8_t x3538 = 9U;
	int8_t x3539 = INT8_MIN;
	int32_t x3540 = 0;
	volatile int32_t t81 = -4;

	t81 = (((x3537|x3538)%x3539)<<x3540);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3589 = INT64_MAX;
	uint64_t t82 = 229LLU;

	t82 = (((x3589|x3590)%x3591)<<x3592);

	if (t82 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3697 = INT32_MIN;
	int32_t x3698 = INT32_MAX;
	uint32_t x3699 = UINT32_MAX;
	volatile uint32_t t83 = 30U;

	t83 = (((x3697|x3698)%x3699)<<x3700);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3725 = INT8_MAX;
	int32_t x3726 = -77364779;
	uint64_t x3727 = 658152173812748LLU;
	int32_t x3728 = 3;
	uint64_t t84 = 32228000LLU;

	t84 = (((x3725|x3726)%x3727)<<x3728);

	if (t84 != 439568067887480LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3817 = UINT8_MAX;
	uint16_t x3818 = UINT16_MAX;
	uint64_t x3819 = UINT64_MAX;
	int8_t x3820 = 1;
	volatile uint64_t t85 = 271323456633667107LLU;

	t85 = (((x3817|x3818)%x3819)<<x3820);

	if (t85 != 131070LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x3837 = UINT8_MAX;
	int64_t x3839 = INT64_MIN;
	int8_t x3840 = 50;
	volatile int64_t t86 = 63LL;

	t86 = (((x3837|x3838)%x3839)<<x3840);

	if (t86 != 287104476244869120LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3878 = 45285939U;
	static volatile int16_t x3879 = INT16_MIN;
	int8_t x3880 = 22;
	uint32_t t87 = 3889825U;

	t87 = (((x3877|x3878)%x3879)<<x3880);

	if (t87 != 2898264064U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3885 = 1;
	int32_t x3886 = INT32_MAX;
	int32_t x3887 = -48147877;
	static volatile uint16_t x3888 = 4U;
	int32_t t88 = -26816375;

	t88 = (((x3885|x3886)%x3887)<<x3888);

	if (t88 != 463632944) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3946 = -1363938296LL;
	int32_t x3947 = -1;
	int8_t x3948 = 4;
	volatile int64_t t89 = 82LL;

	t89 = (((x3945|x3946)%x3947)<<x3948);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4017 = UINT32_MAX;
	static int8_t x4018 = -1;
	static volatile int16_t x4019 = INT16_MIN;
	uint32_t t90 = 3905800U;

	t90 = (((x4017|x4018)%x4019)<<x4020);

	if (t90 != 2097088U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x4189 = 7823U;
	int32_t x4190 = 0;
	int32_t x4191 = -1;
	uint32_t x4192 = 29U;
	volatile uint32_t t91 = 1653713U;

	t91 = (((x4189|x4190)%x4191)<<x4192);

	if (t91 != 3758096384U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4197 = INT32_MIN;
	int16_t x4198 = INT16_MAX;
	volatile uint32_t x4199 = 18U;
	uint8_t x4200 = 2U;
	volatile uint32_t t92 = 96022315U;

	t92 = (((x4197|x4198)%x4199)<<x4200);

	if (t92 != 36U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4245 = 4084;
	int64_t x4246 = -1LL;
	uint64_t x4247 = 248669873119160LLU;
	uint16_t x4248 = 4U;
	volatile uint64_t t93 = 661783636952LLU;

	t93 = (((x4245|x4246)%x4247)<<x4248);

	if (t93 != 2627453714298480LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4257 = INT8_MIN;
	uint32_t x4258 = UINT32_MAX;
	int32_t x4259 = -3;
	static volatile uint64_t x4260 = 5LLU;
	volatile uint32_t t94 = 222662181U;

	t94 = (((x4257|x4258)%x4259)<<x4260);

	if (t94 != 64U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x4269 = INT32_MIN;
	static int32_t x4270 = 124126;
	int16_t x4271 = -1;
	int8_t x4272 = 3;
	volatile int32_t t95 = -248;

	t95 = (((x4269|x4270)%x4271)<<x4272);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4321 = INT8_MAX;
	int8_t x4322 = INT8_MAX;
	int32_t t96 = -339;

	t96 = (((x4321|x4322)%x4323)<<x4324);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4325 = -1LL;
	int8_t x4326 = INT8_MIN;
	int32_t x4328 = 1;

	t97 = (((x4325|x4326)%x4327)<<x4328);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4334 = INT32_MIN;
	volatile uint8_t x4336 = 52U;
	volatile uint64_t t98 = 163019282LLU;

	t98 = (((x4333|x4334)%x4335)<<x4336);

	if (t98 != 10223171154131025920LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4377 = INT64_MAX;
	int8_t x4379 = INT8_MIN;
	static uint8_t x4380 = 47U;
	volatile int64_t t99 = 4296036086080540LL;

	t99 = (((x4377|x4378)%x4379)<<x4380);

	if (t99 != 17873661021126656LL) { NG(); } else { ; }
	
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


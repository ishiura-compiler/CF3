#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x21 = 94U;
int64_t x22 = -1LL;
volatile uint8_t x23 = 25U;
int64_t x26 = 1LL;
volatile int64_t x27 = INT64_MIN;
uint64_t x111 = 3507LLU;
int16_t x125 = 1243;
int16_t x163 = -9;
uint32_t x173 = 3U;
uint32_t t8 = 1229083890U;
int64_t x190 = INT64_MIN;
uint16_t x191 = 6400U;
uint64_t t11 = 672011321538LLU;
uint16_t x245 = 169U;
uint64_t x257 = 1743204597LLU;
uint8_t x272 = 10U;
static volatile int32_t t14 = -670493;
static int8_t x277 = 2;
uint64_t x278 = UINT64_MAX;
uint8_t x280 = 2U;
int32_t t15 = -192035938;
int64_t x292 = INT64_MIN;
static volatile uint32_t t16 = 100U;
uint8_t x411 = UINT8_MAX;
int16_t x515 = INT16_MIN;
volatile int16_t x516 = 1;
static volatile uint8_t x526 = 3U;
uint16_t x643 = 3524U;
volatile int32_t t21 = 3;
static uint32_t t25 = 243U;
static int32_t t27 = -525353394;
uint32_t x1081 = UINT32_MAX;
uint64_t t29 = 8LLU;
volatile int64_t x1170 = -26572LL;
int16_t x1171 = INT16_MIN;
static int64_t t30 = INT64_MAX;
uint8_t x1210 = 29U;
uint16_t x1254 = 4U;
static volatile int32_t t34 = 12079;
volatile int32_t t36 = -4055;
int16_t x1318 = -1;
uint32_t t37 = 6U;
uint8_t x1389 = 0U;
int16_t x1390 = INT16_MIN;
int32_t x1391 = INT32_MIN;
uint64_t x1449 = 105958444958401LLU;
static int8_t x1451 = INT8_MAX;
static int32_t x1584 = -1;
int64_t x1686 = 5LL;
volatile int32_t t44 = -31;
int32_t t45 = 32587739;
uint32_t x1869 = UINT32_MAX;
uint8_t x1870 = 24U;
uint8_t x1938 = 80U;
int8_t x1950 = -1;
uint64_t x1982 = 970013497822LLU;
volatile int16_t x1984 = 19;
static uint8_t x2040 = 47U;
static uint32_t x2143 = 1U;
static int32_t t53 = 2803;
volatile int32_t t54 = 4;
uint8_t x2279 = 6U;
uint64_t x2280 = 10LLU;
uint8_t x2301 = 6U;
static volatile uint32_t x2318 = UINT32_MAX;
int64_t x2428 = 41LL;
uint32_t x2445 = 86962653U;
static uint32_t t62 = 72U;
static uint64_t x2477 = 4054262LLU;
uint16_t x2478 = 0U;
int8_t x2480 = -10;
int16_t x2516 = 0;
int64_t x2525 = 6951LL;
volatile int8_t x2528 = INT8_MAX;
static volatile int64_t t65 = 4124008604093LL;
volatile int64_t x2560 = INT64_MIN;
uint32_t x2565 = 15U;
static int32_t x2566 = -429867056;
static uint32_t t67 = 16U;
volatile uint64_t t68 = UINT64_MAX;
int32_t x2601 = INT32_MAX;
uint16_t x2604 = 0U;
volatile int8_t x2630 = 6;
uint64_t x2693 = 63993514762LLU;
static int16_t x2769 = 3281;
static int16_t x2786 = 2510;
int32_t x3252 = INT32_MAX;
int64_t x3334 = -1LL;
int16_t x3421 = 1;
static uint16_t x3475 = UINT16_MAX;
static int64_t t89 = 435613567477979LL;
uint64_t x3610 = 69LLU;
static int32_t x3630 = 85;
uint16_t x3647 = 145U;
int16_t x3650 = 4;
volatile int16_t x3651 = INT16_MIN;
uint64_t x3655 = 79LLU;
volatile int32_t t96 = 15;
int16_t x3686 = -1;
uint8_t x3687 = 126U;
volatile uint64_t t97 = 15385832LLU;


void f0(void) {
	static volatile uint16_t x9 = 6U;
	uint32_t x10 = 23U;
	int8_t x11 = 18;
	int8_t x12 = INT8_MIN;
	volatile int32_t t0 = 15845;

	t0 = (x9<<((x10|x11)&x12));

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x24 = 0U;
	int32_t t1 = 2;

	t1 = (x21<<((x22|x23)&x24));

	if (t1 != 94) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 1U;
	uint8_t x28 = 5U;
	static volatile int32_t t2 = -825100766;

	t2 = (x25<<((x26|x27)&x28));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x57 = UINT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	volatile int16_t x59 = INT16_MAX;
	uint8_t x60 = 5U;
	int32_t t3 = -407957;

	t3 = (x57<<((x58|x59)&x60));

	if (t3 != 8160) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x109 = 1U;
	int16_t x110 = -1;
	static volatile int16_t x112 = 20;
	static int32_t t4 = 59753145;

	t4 = (x109<<((x110|x111)&x112));

	if (t4 != 1048576) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x126 = 119;
	static uint8_t x127 = UINT8_MAX;
	static volatile int32_t x128 = INT32_MIN;
	static int32_t t5 = -66198018;

	t5 = (x125<<((x126|x127)&x128));

	if (t5 != 1243) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x145 = 4368520LLU;
	int32_t x146 = -1;
	uint8_t x147 = 59U;
	volatile int16_t x148 = 1;
	volatile uint64_t t6 = 1726933230219LLU;

	t6 = (x145<<((x146|x147)&x148));

	if (t6 != 8737040LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint16_t x162 = 6326U;
	uint8_t x164 = 1U;
	int32_t t7 = -134217340;

	t7 = (x161<<((x162|x163)&x164));

	if (t7 != 510) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x174 = INT8_MAX;
	static uint16_t x175 = 343U;
	int32_t x176 = INT32_MIN;

	t8 = (x173<<((x174|x175)&x176));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x189 = 35U;
	int16_t x192 = 631;
	static int32_t t9 = 7792795;

	t9 = (x189<<((x190|x191)&x192));

	if (t9 != 35) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x197 = INT64_MAX;
	volatile uint8_t x198 = 1U;
	int32_t x199 = 1;
	int64_t x200 = INT64_MIN;
	int64_t t10 = INT64_MAX;

	t10 = (x197<<((x198|x199)&x200));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x217 = 229230137LLU;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	volatile int32_t x220 = 4;

	t11 = (x217<<((x218|x219)&x220));

	if (t11 != 229230137LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x246 = -53;
	uint64_t x247 = 51313805444656LLU;
	int8_t x248 = 1;
	volatile int32_t t12 = 862658;

	t12 = (x245<<((x246|x247)&x248));

	if (t12 != 338) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x258 = INT8_MIN;
	volatile uint64_t x259 = UINT64_MAX;
	uint16_t x260 = 58U;
	volatile uint64_t t13 = 5573452183LLU;

	t13 = (x257<<((x258|x259)&x260));

	if (t13 != 15276209936040722432LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x269 = 3U;
	int8_t x270 = 1;
	int8_t x271 = -1;

	t14 = (x269<<((x270|x271)&x272));

	if (t14 != 3072) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x279 = UINT64_MAX;

	t15 = (x277<<((x278|x279)&x280));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x289 = 3154U;
	uint8_t x290 = 88U;
	uint8_t x291 = UINT8_MAX;

	t16 = (x289<<((x290|x291)&x292));

	if (t16 != 3154U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MAX;
	int64_t x359 = INT64_MIN;
	static int32_t x360 = 0;
	volatile int32_t t17 = 5623;

	t17 = (x357<<((x358|x359)&x360));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x409 = 4;
	int32_t x410 = 138138;
	uint8_t x412 = 28U;
	volatile int32_t t18 = 46607;

	t18 = (x409<<((x410|x411)&x412));

	if (t18 != 1073741824) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x513 = UINT8_MAX;
	uint16_t x514 = UINT16_MAX;
	int32_t t19 = -212;

	t19 = (x513<<((x514|x515)&x516));

	if (t19 != 510) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x525 = 4;
	uint16_t x527 = 9U;
	static volatile uint16_t x528 = UINT16_MAX;
	volatile int32_t t20 = 289;

	t20 = (x525<<((x526|x527)&x528));

	if (t20 != 8192) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x641 = UINT16_MAX;
	int16_t x642 = INT16_MAX;
	int32_t x644 = 2;

	t21 = (x641<<((x642|x643)&x644));

	if (t21 != 262140) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x685 = 2119559;
	static int8_t x686 = 1;
	static int8_t x687 = 11;
	int8_t x688 = INT8_MIN;
	volatile int32_t t22 = 966471893;

	t22 = (x685<<((x686|x687)&x688));

	if (t22 != 2119559) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x841 = UINT32_MAX;
	static volatile int16_t x842 = INT16_MIN;
	uint32_t x843 = 35313639U;
	int64_t x844 = INT64_MIN;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x841<<((x842|x843)&x844));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x893 = 14U;
	int32_t x894 = INT32_MIN;
	static int8_t x895 = 11;
	static int32_t x896 = 4902;
	static int32_t t24 = -7;

	t24 = (x893<<((x894|x895)&x896));

	if (t24 != 56) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x905 = 388U;
	uint16_t x906 = 2014U;
	uint16_t x907 = 13158U;
	volatile int64_t x908 = INT64_MIN;

	t25 = (x905<<((x906|x907)&x908));

	if (t25 != 388U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x929 = 58511548533LLU;
	int8_t x930 = INT8_MIN;
	int32_t x931 = INT32_MIN;
	static volatile uint8_t x932 = 1U;
	static volatile uint64_t t26 = 97399649060828616LLU;

	t26 = (x929<<((x930|x931)&x932));

	if (t26 != 58511548533LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x933 = 2648U;
	static int16_t x934 = INT16_MAX;
	int64_t x935 = -1LL;
	uint16_t x936 = 17U;

	t27 = (x933<<((x934|x935)&x936));

	if (t27 != 347078656) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1082 = 59365252389938LLU;
	int32_t x1083 = 131;
	volatile uint32_t x1084 = 2U;
	volatile uint32_t t28 = 22403536U;

	t28 = (x1081<<((x1082|x1083)&x1084));

	if (t28 != 4294967292U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1141 = UINT64_MAX;
	uint8_t x1142 = UINT8_MAX;
	int16_t x1143 = INT16_MAX;
	uint16_t x1144 = 55U;

	t29 = (x1141<<((x1142|x1143)&x1144));

	if (t29 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1169 = INT64_MAX;
	volatile uint16_t x1172 = 0U;

	t30 = (x1169<<((x1170|x1171)&x1172));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1209 = 387;
	int16_t x1211 = INT16_MIN;
	int16_t x1212 = 20;
	volatile int32_t t31 = 7682450;

	t31 = (x1209<<((x1210|x1211)&x1212));

	if (t31 != 405798912) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1229 = 0;
	static uint16_t x1230 = UINT16_MAX;
	uint32_t x1231 = 1558331228U;
	static int64_t x1232 = INT64_MIN;
	int32_t t32 = 46343;

	t32 = (x1229<<((x1230|x1231)&x1232));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1249 = 1005U;
	static int8_t x1250 = INT8_MIN;
	static volatile int64_t x1251 = INT64_MIN;
	static int8_t x1252 = INT8_MAX;
	volatile uint32_t t33 = 0U;

	t33 = (x1249<<((x1250|x1251)&x1252));

	if (t33 != 1005U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1253 = INT8_MAX;
	int16_t x1255 = INT16_MIN;
	volatile int8_t x1256 = 15;

	t34 = (x1253<<((x1254|x1255)&x1256));

	if (t34 != 2032) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1269 = UINT16_MAX;
	volatile int8_t x1270 = 12;
	uint32_t x1271 = 5U;
	static uint64_t x1272 = 302445939906481365LLU;
	volatile int32_t t35 = 31;

	t35 = (x1269<<((x1270|x1271)&x1272));

	if (t35 != 2097120) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1289 = INT16_MAX;
	int32_t x1290 = INT32_MIN;
	int64_t x1291 = 59297197LL;
	int32_t x1292 = 0;

	t36 = (x1289<<((x1290|x1291)&x1292));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1317 = 14U;
	int8_t x1319 = 4;
	volatile uint8_t x1320 = 6U;

	t37 = (x1317<<((x1318|x1319)&x1320));

	if (t37 != 896U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1392 = 26284U;
	int32_t t38 = 3377;

	t38 = (x1389<<((x1390|x1391)&x1392));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1450 = UINT64_MAX;
	static int16_t x1452 = 55;
	uint64_t t39 = 1821409261294832903LLU;

	t39 = (x1449<<((x1450|x1451)&x1452));

	if (t39 != 6953557824660045824LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1521 = UINT8_MAX;
	uint8_t x1522 = 1U;
	static uint16_t x1523 = 188U;
	int32_t x1524 = INT32_MIN;
	static int32_t t40 = 552;

	t40 = (x1521<<((x1522|x1523)&x1524));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1581 = 3834916785LLU;
	uint8_t x1582 = 2U;
	static int8_t x1583 = 0;
	volatile uint64_t t41 = 30683813799739LLU;

	t41 = (x1581<<((x1582|x1583)&x1584));

	if (t41 != 15339667140LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1613 = 1U;
	int64_t x1614 = -1LL;
	uint32_t x1615 = 180726U;
	volatile uint8_t x1616 = 4U;
	static volatile int32_t t42 = -371;

	t42 = (x1613<<((x1614|x1615)&x1616));

	if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1685 = UINT64_MAX;
	int8_t x1687 = INT8_MIN;
	uint64_t x1688 = 40LLU;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x1685<<((x1686|x1687)&x1688));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1701 = 0U;
	volatile uint32_t x1702 = 27U;
	int16_t x1703 = -7;
	static volatile uint16_t x1704 = 14U;

	t44 = (x1701<<((x1702|x1703)&x1704));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1773 = UINT16_MAX;
	uint16_t x1774 = 155U;
	uint16_t x1775 = 21724U;
	uint16_t x1776 = 1U;

	t45 = (x1773<<((x1774|x1775)&x1776));

	if (t45 != 131070) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1871 = 6;
	int16_t x1872 = -1;
	uint32_t t46 = 88U;

	t46 = (x1869<<((x1870|x1871)&x1872));

	if (t46 != 3221225472U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1937 = 5093716;
	int64_t x1939 = INT64_MIN;
	static uint16_t x1940 = 3U;
	int32_t t47 = -114389;

	t47 = (x1937<<((x1938|x1939)&x1940));

	if (t47 != 5093716) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1949 = 101183307LLU;
	int64_t x1951 = -4606574301392922811LL;
	volatile int8_t x1952 = 27;
	static uint64_t t48 = 12713433755905667LLU;

	t48 = (x1949<<((x1950|x1951)&x1952));

	if (t48 != 13580593577066496LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1961 = 2762934847718853503LLU;
	volatile int32_t x1962 = 382045585;
	uint64_t x1963 = UINT64_MAX;
	uint8_t x1964 = 3U;
	static volatile uint64_t t49 = 1661998LLU;

	t49 = (x1961<<((x1962|x1963)&x1964));

	if (t49 != 3656734708041276408LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1981 = UINT8_MAX;
	int32_t x1983 = INT32_MIN;
	volatile int32_t t50 = 73767;

	t50 = (x1981<<((x1982|x1983)&x1984));

	if (t50 != 66846720) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2037 = INT16_MAX;
	uint16_t x2038 = 12U;
	int16_t x2039 = -425;
	volatile int32_t t51 = 116018;

	t51 = (x2037<<((x2038|x2039)&x2040));

	if (t51 != 1073709056) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2073 = INT32_MAX;
	uint64_t x2074 = 3536942LLU;
	uint32_t x2075 = 50U;
	int64_t x2076 = INT64_MIN;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x2073<<((x2074|x2075)&x2076));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2141 = INT16_MAX;
	int64_t x2142 = INT64_MIN;
	uint32_t x2144 = 14U;

	t53 = (x2141<<((x2142|x2143)&x2144));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2169 = INT8_MAX;
	static int16_t x2170 = -407;
	int64_t x2171 = INT64_MIN;
	uint8_t x2172 = 1U;

	t54 = (x2169<<((x2170|x2171)&x2172));

	if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x2277 = 260323309;
	int32_t x2278 = INT32_MIN;
	int32_t t55 = -703875;

	t55 = (x2277<<((x2278|x2279)&x2280));

	if (t55 != 1041293236) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2285 = 31533U;
	static uint16_t x2286 = 712U;
	uint16_t x2287 = 201U;
	int8_t x2288 = 2;
	static volatile int32_t t56 = 34544644;

	t56 = (x2285<<((x2286|x2287)&x2288));

	if (t56 != 31533) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2302 = -2;
	uint64_t x2303 = 1702840LLU;
	uint8_t x2304 = 6U;
	volatile int32_t t57 = 2071;

	t57 = (x2301<<((x2302|x2303)&x2304));

	if (t57 != 384) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2317 = 0;
	int64_t x2319 = 3501562475928875LL;
	volatile int16_t x2320 = 0;
	volatile int32_t t58 = -1710;

	t58 = (x2317<<((x2318|x2319)&x2320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2321 = INT32_MAX;
	uint8_t x2322 = 7U;
	volatile int16_t x2323 = INT16_MAX;
	int64_t x2324 = INT64_MIN;
	int32_t t59 = INT32_MAX;

	t59 = (x2321<<((x2322|x2323)&x2324));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2341 = 1510U;
	static int8_t x2342 = -29;
	uint32_t x2343 = 1608U;
	volatile uint8_t x2344 = 0U;
	volatile int32_t t60 = 1744;

	t60 = (x2341<<((x2342|x2343)&x2344));

	if (t60 != 1510) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2425 = 57664U;
	volatile uint8_t x2426 = 2U;
	int32_t x2427 = 658102621;
	volatile uint32_t t61 = 13806U;

	t61 = (x2425<<((x2426|x2427)&x2428));

	if (t61 != 29523968U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2446 = 636U;
	static int64_t x2447 = 15042399LL;
	int32_t x2448 = INT32_MIN;

	t62 = (x2445<<((x2446|x2447)&x2448));

	if (t62 != 86962653U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2479 = 0LLU;
	static uint64_t t63 = 7045466273LLU;

	t63 = (x2477<<((x2478|x2479)&x2480));

	if (t63 != 4054262LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2513 = 203670;
	int32_t x2514 = INT32_MAX;
	volatile int64_t x2515 = -1LL;
	static int32_t t64 = 1;

	t64 = (x2513<<((x2514|x2515)&x2516));

	if (t64 != 203670) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2526 = 6664U;
	volatile int32_t x2527 = INT32_MIN;

	t65 = (x2525<<((x2526|x2527)&x2528));

	if (t65 != 1779456LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2557 = 1U;
	uint32_t x2558 = UINT32_MAX;
	int32_t x2559 = -1;
	volatile int32_t t66 = 26;

	t66 = (x2557<<((x2558|x2559)&x2560));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2567 = 133U;
	int8_t x2568 = 1;

	t67 = (x2565<<((x2566|x2567)&x2568));

	if (t67 != 30U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2577 = UINT64_MAX;
	uint16_t x2578 = 5322U;
	int16_t x2579 = INT16_MIN;
	static volatile uint8_t x2580 = 0U;

	t68 = (x2577<<((x2578|x2579)&x2580));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x2589 = 21;
	int8_t x2590 = INT8_MIN;
	volatile uint8_t x2591 = 0U;
	int32_t x2592 = 51;
	int32_t t69 = -521982908;

	t69 = (x2589<<((x2590|x2591)&x2592));

	if (t69 != 21) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x2602 = 13174U;
	int16_t x2603 = INT16_MAX;
	static volatile int32_t t70 = INT32_MAX;

	t70 = (x2601<<((x2602|x2603)&x2604));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2629 = 6U;
	volatile int64_t x2631 = INT64_MIN;
	uint32_t x2632 = UINT32_MAX;
	volatile uint32_t t71 = 55080366U;

	t71 = (x2629<<((x2630|x2631)&x2632));

	if (t71 != 384U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2673 = 20946U;
	uint64_t x2674 = 3LLU;
	int64_t x2675 = INT64_MIN;
	volatile uint32_t x2676 = 28360U;
	volatile int32_t t72 = 47;

	t72 = (x2673<<((x2674|x2675)&x2676));

	if (t72 != 20946) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2694 = INT16_MIN;
	volatile int16_t x2695 = 1159;
	static uint16_t x2696 = 1U;
	volatile uint64_t t73 = 562338394562026LLU;

	t73 = (x2693<<((x2694|x2695)&x2696));

	if (t73 != 127987029524LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x2741 = 977818LL;
	int32_t x2742 = INT32_MIN;
	static volatile int8_t x2743 = INT8_MIN;
	uint8_t x2744 = 90U;
	static int64_t t74 = 2753LL;

	t74 = (x2741<<((x2742|x2743)&x2744));

	if (t74 != 977818LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2749 = 727775LL;
	uint8_t x2750 = UINT8_MAX;
	static int16_t x2751 = INT16_MIN;
	int8_t x2752 = 0;
	int64_t t75 = 277997428907596LL;

	t75 = (x2749<<((x2750|x2751)&x2752));

	if (t75 != 727775LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x2770 = INT64_MIN;
	uint16_t x2771 = 7U;
	uint16_t x2772 = UINT16_MAX;
	volatile int32_t t76 = 499;

	t76 = (x2769<<((x2770|x2771)&x2772));

	if (t76 != 419968) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2781 = 10U;
	uint32_t x2782 = UINT32_MAX;
	int8_t x2783 = INT8_MIN;
	int8_t x2784 = 1;
	int32_t t77 = 904;

	t77 = (x2781<<((x2782|x2783)&x2784));

	if (t77 != 20) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2785 = INT16_MAX;
	int32_t x2787 = INT32_MIN;
	int8_t x2788 = 0;
	int32_t t78 = 1;

	t78 = (x2785<<((x2786|x2787)&x2788));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2981 = 107U;
	volatile int64_t x2982 = -1LL;
	int64_t x2983 = INT64_MAX;
	static uint32_t x2984 = 18U;
	static int32_t t79 = 81;

	t79 = (x2981<<((x2982|x2983)&x2984));

	if (t79 != 28049408) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3109 = INT8_MAX;
	int64_t x3110 = INT64_MIN;
	int8_t x3111 = 16;
	volatile int16_t x3112 = 1;
	volatile int32_t t80 = 52005;

	t80 = (x3109<<((x3110|x3111)&x3112));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3125 = 112U;
	uint8_t x3126 = UINT8_MAX;
	volatile int64_t x3127 = 3LL;
	uint16_t x3128 = 11U;
	int32_t t81 = -120596879;

	t81 = (x3125<<((x3126|x3127)&x3128));

	if (t81 != 229376) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3201 = 41U;
	int64_t x3202 = INT64_MAX;
	int64_t x3203 = INT64_MAX;
	int8_t x3204 = 24;
	int32_t t82 = -26872188;

	t82 = (x3201<<((x3202|x3203)&x3204));

	if (t82 != 687865856) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3209 = 35438950U;
	uint16_t x3210 = 3U;
	int32_t x3211 = INT32_MIN;
	uint8_t x3212 = UINT8_MAX;
	volatile uint32_t t83 = 620659556U;

	t83 = (x3209<<((x3210|x3211)&x3212));

	if (t83 != 283511600U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3249 = 0;
	int32_t x3250 = 1;
	static int64_t x3251 = INT64_MIN;
	static int32_t t84 = -7992;

	t84 = (x3249<<((x3250|x3251)&x3252));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x3333 = 1;
	volatile int16_t x3335 = 10852;
	static int8_t x3336 = 0;
	int32_t t85 = 1;

	t85 = (x3333<<((x3334|x3335)&x3336));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x3422 = UINT16_MAX;
	static int8_t x3423 = INT8_MIN;
	uint16_t x3424 = 20U;
	volatile int32_t t86 = -116;

	t86 = (x3421<<((x3422|x3423)&x3424));

	if (t86 != 1048576) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3425 = 3;
	static uint16_t x3426 = 1U;
	volatile int8_t x3427 = -5;
	uint8_t x3428 = 2U;
	volatile int32_t t87 = 37111;

	t87 = (x3425<<((x3426|x3427)&x3428));

	if (t87 != 12) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3473 = 140U;
	volatile int64_t x3474 = -1LL;
	int8_t x3476 = 7;
	static uint32_t t88 = 971348U;

	t88 = (x3473<<((x3474|x3475)&x3476));

	if (t88 != 17920U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3565 = 7381631395LL;
	uint32_t x3566 = 1504925179U;
	int64_t x3567 = -8910337663889824LL;
	int8_t x3568 = 8;

	t89 = (x3565<<((x3566|x3567)&x3568));

	if (t89 != 1889697637120LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3609 = UINT32_MAX;
	int64_t x3611 = 6LL;
	volatile int16_t x3612 = -3658;
	volatile uint32_t t90 = 64382U;

	t90 = (x3609<<((x3610|x3611)&x3612));

	if (t90 != 4294967232U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3617 = UINT16_MAX;
	uint8_t x3618 = 69U;
	uint16_t x3619 = 1U;
	volatile uint64_t x3620 = 1304341556831875LLU;
	volatile int32_t t91 = -85871;

	t91 = (x3617<<((x3618|x3619)&x3620));

	if (t91 != 131070) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3629 = INT8_MAX;
	uint16_t x3631 = UINT16_MAX;
	int32_t x3632 = INT32_MIN;
	static volatile int32_t t92 = -2864040;

	t92 = (x3629<<((x3630|x3631)&x3632));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3645 = 0U;
	static uint32_t x3646 = 324U;
	int16_t x3648 = INT16_MIN;
	volatile int32_t t93 = -363;

	t93 = (x3645<<((x3646|x3647)&x3648));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3649 = 4;
	static uint8_t x3652 = 3U;
	int32_t t94 = -14357350;

	t94 = (x3649<<((x3650|x3651)&x3652));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3653 = INT8_MAX;
	uint8_t x3654 = 0U;
	volatile uint32_t x3656 = 25898138U;
	volatile int32_t t95 = 5;

	t95 = (x3653<<((x3654|x3655)&x3656));

	if (t95 != 130048) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x3657 = 3U;
	int32_t x3658 = INT32_MIN;
	uint32_t x3659 = 13908624U;
	uint16_t x3660 = 27U;

	t96 = (x3657<<((x3658|x3659)&x3660));

	if (t96 != 196608) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3685 = UINT64_MAX;
	uint8_t x3688 = 9U;

	t97 = (x3685<<((x3686|x3687)&x3688));

	if (t97 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3701 = 436U;
	static uint32_t x3702 = 3U;
	volatile uint8_t x3703 = 0U;
	static int64_t x3704 = INT64_MAX;
	uint32_t t98 = 13878762U;

	t98 = (x3701<<((x3702|x3703)&x3704));

	if (t98 != 3488U) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x3729 = 0;
	uint32_t x3730 = 5359U;
	volatile int8_t x3731 = 13;
	volatile int64_t x3732 = INT64_MIN;
	int32_t t99 = 24714;

	t99 = (x3729<<((x3730|x3731)&x3732));

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


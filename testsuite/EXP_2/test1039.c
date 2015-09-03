#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x106 = 6073471LLU;
int32_t x201 = INT32_MAX;
static int16_t x203 = 3;
int16_t x204 = -1;
int32_t t3 = 469;
static int8_t x233 = INT8_MIN;
volatile int32_t t4 = 1499084;
uint64_t x238 = 3492LLU;
volatile int8_t x324 = -1;
uint32_t x370 = 1847U;
static uint16_t x615 = 23U;
int64_t x616 = INT64_MAX;
static uint16_t x970 = 83U;
volatile uint32_t x972 = 46325147U;
int16_t x977 = -1195;
uint64_t x979 = 61LLU;
volatile int64_t t14 = 950035781075LL;
static int64_t x1112 = INT64_MAX;
int64_t t15 = INT64_MAX;
volatile uint8_t x1172 = UINT8_MAX;
int8_t x1369 = INT8_MAX;
volatile int32_t t19 = 10;
volatile uint64_t x1393 = 6069326LLU;
static int16_t x1429 = INT16_MAX;
static uint8_t x1432 = 60U;
uint64_t t22 = UINT64_MAX;
volatile uint16_t x1535 = 5U;
int64_t t25 = 380419742246449LL;
int64_t t27 = -220651655LL;
int8_t x1689 = -1;
uint32_t x1772 = 860U;
uint8_t x1838 = UINT8_MAX;
int32_t x1882 = INT32_MAX;
static volatile uint32_t t32 = UINT32_MAX;
int16_t x1979 = 1;
uint64_t x1993 = 29436074004157LLU;
uint8_t x1995 = 2U;
volatile uint32_t x2009 = UINT32_MAX;
int8_t x2105 = -2;
uint32_t x2254 = 19819148U;
int8_t x2377 = 0;
uint16_t x2378 = 6U;
uint64_t x2418 = UINT64_MAX;


void f0(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = INT64_MAX;
	volatile uint32_t x11 = 7U;
	volatile uint32_t x12 = 4629U;
	int64_t t0 = -17343237816LL;

	t0 = ((x9-(x10>>x11))|x12);

	if (t0 != -72057594037923051LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x105 = INT16_MIN;
	uint8_t x107 = 0U;
	uint32_t x108 = 72503U;
	uint64_t t1 = 0LLU;

	t1 = ((x105-(x106>>x107))|x108);

	if (t1 != 18446744073703513015LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x202 = 602U;
	static volatile int32_t t2 = -19;

	t2 = ((x201-(x202>>x203))|x204);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x217 = -1;
	volatile uint16_t x218 = UINT16_MAX;
	static uint8_t x219 = 1U;
	int8_t x220 = 12;

	t3 = ((x217-(x218>>x219))|x220);

	if (t3 != -32756) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x234 = INT8_MAX;
	int8_t x235 = 0;
	static uint8_t x236 = 2U;

	t4 = ((x233-(x234>>x235))|x236);

	if (t4 != -253) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x237 = INT16_MAX;
	uint8_t x239 = 0U;
	uint8_t x240 = UINT8_MAX;
	uint64_t t5 = 3094446LLU;

	t5 = ((x237-(x238>>x239))|x240);

	if (t5 != 29439LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x289 = 5LL;
	uint8_t x290 = 0U;
	static uint16_t x291 = 0U;
	volatile uint16_t x292 = 75U;
	static volatile int64_t t6 = 5402LL;

	t6 = ((x289-(x290>>x291))|x292);

	if (t6 != 79LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x321 = 46;
	uint32_t x322 = 7438492U;
	static int8_t x323 = 0;
	uint32_t t7 = UINT32_MAX;

	t7 = ((x321-(x322>>x323))|x324);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x369 = INT32_MAX;
	int16_t x371 = 0;
	uint8_t x372 = UINT8_MAX;
	uint32_t t8 = 206314U;

	t8 = ((x369-(x370>>x371))|x372);

	if (t8 != 2147481855U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x517 = INT16_MAX;
	volatile uint8_t x518 = UINT8_MAX;
	static uint8_t x519 = 18U;
	static volatile int32_t x520 = -2595;
	int32_t t9 = 116758;

	t9 = ((x517-(x518>>x519))|x520);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x613 = 922U;
	uint8_t x614 = 3U;
	static volatile int64_t t10 = INT64_MAX;

	t10 = ((x613-(x614>>x615))|x616);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x877 = -1LL;
	static uint64_t x878 = UINT64_MAX;
	int8_t x879 = 1;
	uint64_t x880 = 265307LLU;
	uint64_t t11 = 3934427943656LLU;

	t11 = ((x877-(x878>>x879))|x880);

	if (t11 != 9223372036855041115LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x969 = 0U;
	uint8_t x971 = 1U;
	uint32_t t12 = 3049428U;

	t12 = ((x969-(x970>>x971))|x972);

	if (t12 != 4294967263U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x978 = UINT64_MAX;
	uint8_t x980 = 50U;
	uint64_t t13 = 2821LLU;

	t13 = ((x977-(x978>>x979))|x980);

	if (t13 != 18446744073709550462LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1093 = -1;
	static int64_t x1094 = 44LL;
	uint8_t x1095 = 30U;
	uint32_t x1096 = 856337U;

	t14 = ((x1093-(x1094>>x1095))|x1096);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1109 = UINT8_MAX;
	int8_t x1110 = INT8_MAX;
	uint16_t x1111 = 25U;

	t15 = ((x1109-(x1110>>x1111))|x1112);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1169 = 6426U;
	volatile int16_t x1170 = 2361;
	int32_t x1171 = 1;
	int32_t t16 = -7527;

	t16 = ((x1169-(x1170>>x1171))|x1172);

	if (t16 != 5375) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1241 = INT32_MAX;
	static uint32_t x1242 = UINT32_MAX;
	static uint8_t x1243 = 25U;
	uint32_t x1244 = 44795U;
	static volatile uint32_t t17 = 21U;

	t17 = ((x1241-(x1242>>x1243))|x1244);

	if (t17 != 2147483643U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1277 = -1;
	volatile int8_t x1278 = 0;
	static uint8_t x1279 = 0U;
	static uint8_t x1280 = UINT8_MAX;
	int32_t t18 = -3257823;

	t18 = ((x1277-(x1278>>x1279))|x1280);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x1370 = INT16_MAX;
	uint8_t x1371 = 0U;
	int8_t x1372 = -1;

	t19 = ((x1369-(x1370>>x1371))|x1372);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1394 = INT16_MAX;
	volatile int8_t x1395 = 1;
	int32_t x1396 = INT32_MIN;
	uint64_t t20 = 5344953404713870054LLU;

	t20 = ((x1393-(x1394>>x1395))|x1396);

	if (t20 != 18446744071568120911LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1430 = 160U;
	int8_t x1431 = 0;
	int32_t t21 = -727823;

	t21 = ((x1429-(x1430>>x1431))|x1432);

	if (t21 != 32639) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1465 = INT64_MIN;
	volatile uint64_t x1466 = 243578LLU;
	uint16_t x1467 = 6U;
	int8_t x1468 = -2;

	t22 = ((x1465-(x1466>>x1467))|x1468);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1501 = -1;
	int32_t x1502 = 2298;
	int16_t x1503 = 25;
	volatile uint8_t x1504 = 1U;
	volatile int32_t t23 = -96303200;

	t23 = ((x1501-(x1502>>x1503))|x1504);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1533 = 10U;
	uint32_t x1534 = UINT32_MAX;
	static uint64_t x1536 = 7471944392295LLU;
	volatile uint64_t t24 = 136244LLU;

	t24 = ((x1533-(x1534>>x1535))|x1536);

	if (t24 != 7473152351855LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1589 = INT8_MIN;
	volatile int64_t x1590 = INT64_MAX;
	uint8_t x1591 = 2U;
	int16_t x1592 = INT16_MAX;

	t25 = ((x1589-(x1590>>x1591))|x1592);

	if (t25 != -2305843009213693953LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1597 = INT64_MIN;
	int8_t x1598 = INT8_MAX;
	static volatile uint8_t x1599 = 13U;
	int8_t x1600 = INT8_MAX;
	volatile int64_t t26 = -3269883646477LL;

	t26 = ((x1597-(x1598>>x1599))|x1600);

	if (t26 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1617 = -13988846271LL;
	static int64_t x1618 = 84005233LL;
	static uint8_t x1619 = 27U;
	int16_t x1620 = -7;

	t27 = ((x1617-(x1618>>x1619))|x1620);

	if (t27 != -7LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1690 = 7120895U;
	volatile uint8_t x1691 = 0U;
	uint8_t x1692 = 1U;
	volatile uint32_t t28 = 64747U;

	t28 = ((x1689-(x1690>>x1691))|x1692);

	if (t28 != 4287846401U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1769 = 1766;
	uint64_t x1770 = 11LLU;
	volatile int8_t x1771 = 15;
	uint64_t t29 = 539501619434LLU;

	t29 = ((x1769-(x1770>>x1771))|x1772);

	if (t29 != 2046LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1837 = -1;
	uint8_t x1839 = 7U;
	volatile uint8_t x1840 = UINT8_MAX;
	volatile int32_t t30 = -202771609;

	t30 = ((x1837-(x1838>>x1839))|x1840);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1881 = INT16_MIN;
	int16_t x1883 = 3;
	volatile int16_t x1884 = -1;
	static volatile int32_t t31 = 16601;

	t31 = ((x1881-(x1882>>x1883))|x1884);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1953 = INT16_MIN;
	uint32_t x1954 = 11327U;
	static volatile int16_t x1955 = 11;
	static volatile int32_t x1956 = -1;

	t32 = ((x1953-(x1954>>x1955))|x1956);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1977 = INT32_MIN;
	static uint64_t x1978 = UINT64_MAX;
	int32_t x1980 = -1;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x1977-(x1978>>x1979))|x1980);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1994 = INT8_MAX;
	int32_t x1996 = INT32_MIN;
	uint64_t t34 = 1LLU;

	t34 = ((x1993-(x1994>>x1995))|x1996);

	if (t34 != 18446744072077708958LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2010 = 1078425315U;
	int8_t x2011 = 7;
	static int64_t x2012 = INT64_MIN;
	int64_t t35 = -18604131988LL;

	t35 = ((x2009-(x2010>>x2011))|x2012);

	if (t35 != -9223372032568233710LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2106 = INT16_MAX;
	volatile uint16_t x2107 = 7U;
	int16_t x2108 = INT16_MIN;
	volatile int32_t t36 = 410;

	t36 = ((x2105-(x2106>>x2107))|x2108);

	if (t36 != -257) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2173 = 44U;
	int8_t x2174 = INT8_MAX;
	uint32_t x2175 = 9U;
	int16_t x2176 = 5056;
	int32_t t37 = 61312;

	t37 = ((x2173-(x2174>>x2175))|x2176);

	if (t37 != 5100) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2253 = 331393013034845845LLU;
	uint8_t x2255 = 19U;
	volatile int8_t x2256 = -1;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x2253-(x2254>>x2255))|x2256);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2379 = 2U;
	int64_t x2380 = 100430909415112371LL;
	static int64_t t39 = -40023168881988LL;

	t39 = ((x2377-(x2378>>x2379))|x2380);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2417 = -1;
	int16_t x2419 = 1;
	int16_t x2420 = INT16_MAX;
	uint64_t t40 = 63552195484066043LLU;

	t40 = ((x2417-(x2418>>x2419))|x2420);

	if (t40 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2469 = INT64_MIN;
	uint32_t x2470 = 9U;
	uint8_t x2471 = 5U;
	int16_t x2472 = INT16_MIN;
	int64_t t41 = 1LL;

	t41 = ((x2469-(x2470>>x2471))|x2472);

	if (t41 != -32768LL) { NG(); } else { ; }
	
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


    return 0;
}


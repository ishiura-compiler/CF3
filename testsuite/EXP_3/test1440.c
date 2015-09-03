#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MIN;
volatile int32_t t1 = 158;
static volatile uint8_t x186 = 6U;
volatile uint8_t x370 = 0U;
int8_t x372 = INT8_MIN;
uint8_t x454 = 14U;
uint64_t x533 = 1LLU;
volatile uint16_t x534 = 57U;
uint16_t x561 = 1011U;
static volatile int16_t x563 = -1;
int32_t t9 = 0;
int16_t x592 = 10;
uint64_t x713 = UINT64_MAX;
uint16_t x715 = 797U;
volatile int16_t x819 = INT16_MAX;
int32_t t13 = -2457;
volatile uint8_t x834 = 6U;
uint32_t x835 = 29U;
uint16_t x836 = 29269U;
uint8_t x842 = 1U;
uint16_t x843 = 674U;
static volatile int32_t t16 = -68;
uint32_t x974 = 4U;
static int32_t x975 = 35;
static int32_t t17 = 2592512;
uint8_t x1090 = 3U;
static int64_t x1092 = -227LL;
int8_t x1250 = 5;
volatile int64_t x1303 = -66523103LL;
uint16_t x1468 = UINT16_MAX;
int16_t x1480 = -4401;
static uint16_t x1485 = UINT16_MAX;
static int8_t x1589 = 1;
uint64_t x1665 = UINT64_MAX;
int32_t x1707 = -656;
uint32_t x1744 = 25692U;
uint64_t x1821 = UINT64_MAX;
volatile uint8_t x1822 = 10U;
int32_t x1887 = INT32_MIN;
volatile int32_t t36 = 27163807;
int64_t x1911 = INT64_MAX;
uint16_t x1938 = 1U;
uint16_t x1957 = UINT16_MAX;
int16_t x1960 = -4;
volatile int32_t t39 = -18215902;
volatile uint8_t x2109 = 0U;
uint8_t x2111 = 26U;
int32_t t42 = -183532;
int32_t x2128 = -1;
static volatile int16_t x2153 = 2;
volatile int32_t t44 = -1;
uint8_t x2290 = 4U;
static int16_t x2308 = -117;
uint32_t x2335 = 227U;
uint16_t x2396 = UINT16_MAX;
uint64_t x2403 = UINT64_MAX;
uint16_t x2664 = UINT16_MAX;
static uint32_t x2794 = 24U;
uint8_t x2797 = UINT8_MAX;
volatile int32_t t57 = 9381;
static int32_t x2846 = 0;
int16_t x2879 = INT16_MIN;
uint16_t x3017 = 3U;
uint16_t x3020 = 7U;
volatile int32_t t64 = -235765;
volatile uint8_t x3197 = UINT8_MAX;
static uint64_t x3353 = 27185425082450846LLU;
uint32_t x3615 = 1U;
volatile int32_t t68 = -2;
uint16_t x3635 = 2315U;
volatile int64_t x3711 = INT64_MIN;
uint16_t x3809 = 5127U;
static int8_t x3917 = INT8_MAX;
int32_t t73 = -29864349;
uint8_t x4006 = 2U;
int64_t x4008 = 823LL;
int16_t x4077 = INT16_MAX;
static int64_t x4080 = INT64_MAX;
uint32_t x4149 = UINT32_MAX;
int64_t x4151 = -917889570659976634LL;
static uint16_t x4152 = UINT16_MAX;
int8_t x4173 = INT8_MAX;
volatile uint8_t x4317 = 1U;
int32_t x4319 = 270;
volatile int16_t x4320 = INT16_MAX;
int8_t x4429 = INT8_MAX;
int8_t x4432 = 26;
static int32_t t84 = -690017277;
int16_t x4545 = INT16_MAX;
uint8_t x4673 = UINT8_MAX;
int32_t t89 = -3300;
static volatile int64_t x4890 = 15LL;
volatile uint64_t x4911 = 968134LLU;
static int32_t t92 = -18689157;
int8_t x4926 = 0;
static volatile int32_t t94 = 322584505;
static uint32_t x5003 = UINT32_MAX;
uint32_t x5065 = UINT32_MAX;
int16_t x5068 = 97;
volatile int32_t t99 = -28777;


void f0(void) {
	int32_t x5 = 81374090;
	uint8_t x6 = 7U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t0 = -909533;

	t0 = ((x5>>x6)<=(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x173 = 6400154LL;
	uint8_t x174 = 0U;
	uint8_t x175 = UINT8_MAX;
	uint16_t x176 = 1874U;

	t1 = ((x173>>x174)<=(x175<x176));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x185 = 0;
	static int32_t x187 = 3327;
	volatile int8_t x188 = -2;
	int32_t t2 = -491;

	t2 = ((x185>>x186)<=(x187<x188));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x209 = INT16_MAX;
	uint8_t x210 = 8U;
	volatile int8_t x211 = INT8_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t3 = -936344486;

	t3 = ((x209>>x210)<=(x211<x212));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x369 = 79U;
	uint64_t x371 = 225LLU;
	int32_t t4 = -130833864;

	t4 = ((x369>>x370)<=(x371<x372));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x453 = 792254269U;
	int8_t x455 = INT8_MAX;
	static int64_t x456 = -1LL;
	int32_t t5 = 13106;

	t5 = ((x453>>x454)<=(x455<x456));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x535 = 58653LLU;
	int32_t x536 = -1;
	int32_t t6 = -5971699;

	t6 = ((x533>>x534)<=(x535<x536));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x562 = 4U;
	int8_t x564 = -1;
	volatile int32_t t7 = -2326;

	t7 = ((x561>>x562)<=(x563<x564));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x573 = INT32_MAX;
	uint8_t x574 = 30U;
	int16_t x575 = INT16_MAX;
	uint16_t x576 = 1310U;
	volatile int32_t t8 = 425364;

	t8 = ((x573>>x574)<=(x575<x576));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x577 = INT32_MAX;
	static volatile uint8_t x578 = 0U;
	volatile int16_t x579 = -62;
	static int16_t x580 = 2027;

	t9 = ((x577>>x578)<=(x579<x580));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x585 = INT32_MAX;
	static volatile uint32_t x586 = 14U;
	int16_t x587 = INT16_MIN;
	int32_t x588 = 2354614;
	static volatile int32_t t10 = 189447;

	t10 = ((x585>>x586)<=(x587<x588));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x589 = INT16_MAX;
	int16_t x590 = 25;
	int16_t x591 = -1;
	static volatile int32_t t11 = 0;

	t11 = ((x589>>x590)<=(x591<x592));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x714 = 4;
	static int32_t x716 = 213;
	int32_t t12 = 500472825;

	t12 = ((x713>>x714)<=(x715<x716));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x817 = INT8_MAX;
	uint8_t x818 = 0U;
	static uint16_t x820 = UINT16_MAX;

	t13 = ((x817>>x818)<=(x819<x820));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x833 = 17U;
	static int32_t t14 = -3829721;

	t14 = ((x833>>x834)<=(x835<x836));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x841 = 12467319063LLU;
	static int64_t x844 = -1LL;
	volatile int32_t t15 = -393844;

	t15 = ((x841>>x842)<=(x843<x844));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x941 = INT8_MAX;
	volatile uint8_t x942 = 25U;
	volatile int8_t x943 = -15;
	static volatile uint32_t x944 = 4562150U;

	t16 = ((x941>>x942)<=(x943<x944));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x973 = 1U;
	int32_t x976 = INT32_MAX;

	t17 = ((x973>>x974)<=(x975<x976));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1073 = 27;
	int8_t x1074 = 4;
	static volatile int16_t x1075 = INT16_MIN;
	int16_t x1076 = -1;
	volatile int32_t t18 = -11;

	t18 = ((x1073>>x1074)<=(x1075<x1076));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1089 = INT64_MAX;
	int32_t x1091 = INT32_MIN;
	volatile int32_t t19 = -18530667;

	t19 = ((x1089>>x1090)<=(x1091<x1092));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1117 = INT32_MAX;
	uint16_t x1118 = 6U;
	int16_t x1119 = INT16_MAX;
	volatile int64_t x1120 = INT64_MIN;
	int32_t t20 = 471589;

	t20 = ((x1117>>x1118)<=(x1119<x1120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1249 = INT64_MAX;
	volatile uint8_t x1251 = 1U;
	uint32_t x1252 = UINT32_MAX;
	int32_t t21 = 120;

	t21 = ((x1249>>x1250)<=(x1251<x1252));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1301 = UINT16_MAX;
	volatile uint8_t x1302 = 1U;
	uint16_t x1304 = UINT16_MAX;
	int32_t t22 = 0;

	t22 = ((x1301>>x1302)<=(x1303<x1304));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1321 = 1638471846967348255LL;
	static int8_t x1322 = 2;
	int8_t x1323 = INT8_MIN;
	int32_t x1324 = -3987002;
	int32_t t23 = -18;

	t23 = ((x1321>>x1322)<=(x1323<x1324));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1393 = 0;
	static uint16_t x1394 = 30U;
	volatile int32_t x1395 = INT32_MIN;
	int64_t x1396 = 1313257167464519LL;
	volatile int32_t t24 = 250025941;

	t24 = ((x1393>>x1394)<=(x1395<x1396));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1465 = INT16_MAX;
	int64_t x1466 = 1LL;
	static uint64_t x1467 = UINT64_MAX;
	volatile int32_t t25 = -1836;

	t25 = ((x1465>>x1466)<=(x1467<x1468));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1477 = INT64_MAX;
	static uint32_t x1478 = 8U;
	static uint16_t x1479 = 39U;
	static volatile int32_t t26 = -19;

	t26 = ((x1477>>x1478)<=(x1479<x1480));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1486 = 7U;
	int8_t x1487 = -1;
	uint16_t x1488 = UINT16_MAX;
	int32_t t27 = 2649;

	t27 = ((x1485>>x1486)<=(x1487<x1488));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1557 = 522042746U;
	static uint8_t x1558 = 17U;
	int64_t x1559 = 1817906070238LL;
	volatile uint32_t x1560 = UINT32_MAX;
	volatile int32_t t28 = 0;

	t28 = ((x1557>>x1558)<=(x1559<x1560));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1590 = 0;
	int8_t x1591 = -1;
	static uint32_t x1592 = 156093113U;
	volatile int32_t t29 = -429902;

	t29 = ((x1589>>x1590)<=(x1591<x1592));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1666 = 5U;
	static volatile uint8_t x1667 = 12U;
	uint32_t x1668 = UINT32_MAX;
	volatile int32_t t30 = -14930663;

	t30 = ((x1665>>x1666)<=(x1667<x1668));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1705 = INT8_MAX;
	uint16_t x1706 = 0U;
	static volatile int32_t x1708 = -233;
	volatile int32_t t31 = 693;

	t31 = ((x1705>>x1706)<=(x1707<x1708));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1741 = UINT16_MAX;
	volatile int16_t x1742 = 29;
	static uint64_t x1743 = 135013LLU;
	volatile int32_t t32 = 464825;

	t32 = ((x1741>>x1742)<=(x1743<x1744));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1797 = 1LLU;
	uint8_t x1798 = 1U;
	uint64_t x1799 = 45984323860996LLU;
	uint32_t x1800 = UINT32_MAX;
	int32_t t33 = -179170;

	t33 = ((x1797>>x1798)<=(x1799<x1800));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1823 = UINT16_MAX;
	volatile int16_t x1824 = -1;
	int32_t t34 = -461;

	t34 = ((x1821>>x1822)<=(x1823<x1824));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1857 = 438862104995116464LLU;
	uint8_t x1858 = 6U;
	int32_t x1859 = INT32_MIN;
	static int32_t x1860 = -3851158;
	volatile int32_t t35 = 286282;

	t35 = ((x1857>>x1858)<=(x1859<x1860));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1885 = INT64_MAX;
	uint8_t x1886 = 17U;
	static uint64_t x1888 = UINT64_MAX;

	t36 = ((x1885>>x1886)<=(x1887<x1888));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1909 = INT32_MAX;
	int8_t x1910 = 18;
	uint32_t x1912 = 61408U;
	static volatile int32_t t37 = -620236835;

	t37 = ((x1909>>x1910)<=(x1911<x1912));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1937 = 15463U;
	volatile int64_t x1939 = INT64_MIN;
	int64_t x1940 = INT64_MIN;
	static volatile int32_t t38 = 1165;

	t38 = ((x1937>>x1938)<=(x1939<x1940));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1958 = 2U;
	uint64_t x1959 = UINT64_MAX;

	t39 = ((x1957>>x1958)<=(x1959<x1960));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1961 = INT64_MAX;
	static int16_t x1962 = 0;
	static int16_t x1963 = INT16_MIN;
	int16_t x1964 = -574;
	int32_t t40 = 29;

	t40 = ((x1961>>x1962)<=(x1963<x1964));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2049 = 3;
	int8_t x2050 = 8;
	volatile int32_t x2051 = INT32_MIN;
	static int16_t x2052 = INT16_MIN;
	volatile int32_t t41 = -56550;

	t41 = ((x2049>>x2050)<=(x2051<x2052));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2110 = 6U;
	int32_t x2112 = 0;

	t42 = ((x2109>>x2110)<=(x2111<x2112));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x2125 = 1U;
	int8_t x2126 = 17;
	int32_t x2127 = INT32_MIN;
	volatile int32_t t43 = 0;

	t43 = ((x2125>>x2126)<=(x2127<x2128));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2154 = 0;
	int16_t x2155 = 3111;
	uint8_t x2156 = 62U;

	t44 = ((x2153>>x2154)<=(x2155<x2156));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2253 = INT64_MAX;
	uint8_t x2254 = 42U;
	int32_t x2255 = 2389251;
	int16_t x2256 = INT16_MAX;
	int32_t t45 = -2558;

	t45 = ((x2253>>x2254)<=(x2255<x2256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2265 = INT8_MAX;
	volatile uint8_t x2266 = 1U;
	int32_t x2267 = INT32_MAX;
	int64_t x2268 = -26LL;
	int32_t t46 = 11172;

	t46 = ((x2265>>x2266)<=(x2267<x2268));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2289 = 15285;
	uint32_t x2291 = UINT32_MAX;
	int8_t x2292 = -1;
	int32_t t47 = -413551;

	t47 = ((x2289>>x2290)<=(x2291<x2292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2305 = 29674997U;
	int8_t x2306 = 6;
	volatile int64_t x2307 = -1LL;
	volatile int32_t t48 = 222361135;

	t48 = ((x2305>>x2306)<=(x2307<x2308));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2333 = UINT64_MAX;
	static volatile uint8_t x2334 = 0U;
	int8_t x2336 = INT8_MIN;
	static volatile int32_t t49 = 409048;

	t49 = ((x2333>>x2334)<=(x2335<x2336));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x2393 = INT16_MAX;
	uint32_t x2394 = 0U;
	uint8_t x2395 = 0U;
	int32_t t50 = 109028;

	t50 = ((x2393>>x2394)<=(x2395<x2396));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x2401 = UINT16_MAX;
	volatile uint8_t x2402 = 2U;
	uint8_t x2404 = 69U;
	int32_t t51 = 3;

	t51 = ((x2401>>x2402)<=(x2403<x2404));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2541 = 2U;
	volatile uint8_t x2542 = 6U;
	static int32_t x2543 = 1695365;
	uint8_t x2544 = 6U;
	int32_t t52 = 1;

	t52 = ((x2541>>x2542)<=(x2543<x2544));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x2605 = UINT8_MAX;
	static volatile int8_t x2606 = 1;
	int8_t x2607 = INT8_MIN;
	int64_t x2608 = -32793496LL;
	volatile int32_t t53 = -106434;

	t53 = ((x2605>>x2606)<=(x2607<x2608));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2633 = 1;
	uint16_t x2634 = 14U;
	static volatile int8_t x2635 = 10;
	int32_t x2636 = INT32_MIN;
	int32_t t54 = 417803;

	t54 = ((x2633>>x2634)<=(x2635<x2636));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2661 = INT64_MAX;
	static volatile uint16_t x2662 = 3U;
	uint16_t x2663 = UINT16_MAX;
	int32_t t55 = -95849026;

	t55 = ((x2661>>x2662)<=(x2663<x2664));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2793 = INT64_MAX;
	uint8_t x2795 = 29U;
	int32_t x2796 = -434;
	int32_t t56 = -14178909;

	t56 = ((x2793>>x2794)<=(x2795<x2796));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2798 = 1;
	static volatile int16_t x2799 = INT16_MIN;
	int64_t x2800 = INT64_MIN;

	t57 = ((x2797>>x2798)<=(x2799<x2800));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2845 = UINT32_MAX;
	int64_t x2847 = INT64_MAX;
	int32_t x2848 = -453222;
	int32_t t58 = -2;

	t58 = ((x2845>>x2846)<=(x2847<x2848));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2877 = UINT32_MAX;
	volatile uint16_t x2878 = 12U;
	static volatile int64_t x2880 = INT64_MAX;
	static volatile int32_t t59 = 5761;

	t59 = ((x2877>>x2878)<=(x2879<x2880));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2905 = 13802;
	static uint8_t x2906 = 1U;
	int16_t x2907 = -1;
	int32_t x2908 = INT32_MIN;
	int32_t t60 = -22927;

	t60 = ((x2905>>x2906)<=(x2907<x2908));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2985 = 1045236830004LLU;
	volatile uint64_t x2986 = 1LLU;
	static volatile int64_t x2987 = 78869LL;
	static int8_t x2988 = 42;
	volatile int32_t t61 = 1;

	t61 = ((x2985>>x2986)<=(x2987<x2988));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3018 = 6U;
	int16_t x3019 = -1;
	volatile int32_t t62 = 1156138;

	t62 = ((x3017>>x3018)<=(x3019<x3020));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3049 = 757992572853LLU;
	uint32_t x3050 = 0U;
	static int8_t x3051 = INT8_MIN;
	static int32_t x3052 = INT32_MAX;
	int32_t t63 = -332457;

	t63 = ((x3049>>x3050)<=(x3051<x3052));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3093 = UINT16_MAX;
	uint16_t x3094 = 0U;
	static uint8_t x3095 = UINT8_MAX;
	int16_t x3096 = INT16_MIN;

	t64 = ((x3093>>x3094)<=(x3095<x3096));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3198 = 1U;
	int16_t x3199 = -3884;
	int32_t x3200 = -1;
	static volatile int32_t t65 = 940058;

	t65 = ((x3197>>x3198)<=(x3199<x3200));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3354 = 10;
	uint32_t x3355 = 79014712U;
	int8_t x3356 = INT8_MAX;
	volatile int32_t t66 = 875057508;

	t66 = ((x3353>>x3354)<=(x3355<x3356));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3569 = INT64_MAX;
	uint8_t x3570 = 0U;
	volatile uint8_t x3571 = UINT8_MAX;
	static volatile uint64_t x3572 = UINT64_MAX;
	static int32_t t67 = 102214756;

	t67 = ((x3569>>x3570)<=(x3571<x3572));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3613 = INT8_MAX;
	uint64_t x3614 = 16LLU;
	int32_t x3616 = -1;

	t68 = ((x3613>>x3614)<=(x3615<x3616));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3633 = 14;
	static uint8_t x3634 = 11U;
	uint64_t x3636 = 284587345152618LLU;
	volatile int32_t t69 = -86216961;

	t69 = ((x3633>>x3634)<=(x3635<x3636));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3709 = 113U;
	static int8_t x3710 = 9;
	uint64_t x3712 = 94192908034887436LLU;
	int32_t t70 = -5645340;

	t70 = ((x3709>>x3710)<=(x3711<x3712));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3717 = 70U;
	static volatile uint64_t x3718 = 7LLU;
	int8_t x3719 = 1;
	int8_t x3720 = INT8_MIN;
	static volatile int32_t t71 = -435795438;

	t71 = ((x3717>>x3718)<=(x3719<x3720));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3810 = 15;
	int64_t x3811 = INT64_MIN;
	int64_t x3812 = -1LL;
	int32_t t72 = -706;

	t72 = ((x3809>>x3810)<=(x3811<x3812));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x3918 = 0U;
	uint8_t x3919 = UINT8_MAX;
	uint8_t x3920 = UINT8_MAX;

	t73 = ((x3917>>x3918)<=(x3919<x3920));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4005 = INT16_MAX;
	volatile int8_t x4007 = -21;
	static int32_t t74 = -31242;

	t74 = ((x4005>>x4006)<=(x4007<x4008));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4041 = UINT32_MAX;
	static volatile int64_t x4042 = 3LL;
	int32_t x4043 = -21;
	volatile uint32_t x4044 = 4U;
	int32_t t75 = 119;

	t75 = ((x4041>>x4042)<=(x4043<x4044));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4053 = UINT64_MAX;
	volatile uint8_t x4054 = 2U;
	static int32_t x4055 = INT32_MIN;
	int8_t x4056 = -1;
	int32_t t76 = 4275323;

	t76 = ((x4053>>x4054)<=(x4055<x4056));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4078 = 12U;
	int16_t x4079 = 110;
	int32_t t77 = 3565841;

	t77 = ((x4077>>x4078)<=(x4079<x4080));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4101 = 110;
	volatile int32_t x4102 = 1;
	static volatile int16_t x4103 = INT16_MIN;
	uint64_t x4104 = 341187144934100LLU;
	volatile int32_t t78 = 911208;

	t78 = ((x4101>>x4102)<=(x4103<x4104));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4150 = 1U;
	volatile int32_t t79 = -3;

	t79 = ((x4149>>x4150)<=(x4151<x4152));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x4174 = 3U;
	int64_t x4175 = INT64_MAX;
	int16_t x4176 = 2537;
	int32_t t80 = -109228432;

	t80 = ((x4173>>x4174)<=(x4175<x4176));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4189 = 27356U;
	volatile int8_t x4190 = 1;
	static volatile int16_t x4191 = -1392;
	static uint64_t x4192 = 14807795808596110LLU;
	static volatile int32_t t81 = -24065038;

	t81 = ((x4189>>x4190)<=(x4191<x4192));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4318 = 0LL;
	volatile int32_t t82 = -3969020;

	t82 = ((x4317>>x4318)<=(x4319<x4320));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4430 = 0U;
	int32_t x4431 = 19922711;
	static int32_t t83 = 40233;

	t83 = ((x4429>>x4430)<=(x4431<x4432));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4477 = 24249261LLU;
	uint8_t x4478 = 3U;
	static int32_t x4479 = INT32_MAX;
	int32_t x4480 = INT32_MIN;

	t84 = ((x4477>>x4478)<=(x4479<x4480));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4546 = 8U;
	int64_t x4547 = INT64_MAX;
	uint8_t x4548 = 0U;
	volatile int32_t t85 = -33;

	t85 = ((x4545>>x4546)<=(x4547<x4548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4601 = 15330LLU;
	uint8_t x4602 = 0U;
	int32_t x4603 = 232;
	uint64_t x4604 = 242231947LLU;
	volatile int32_t t86 = -10650364;

	t86 = ((x4601>>x4602)<=(x4603<x4604));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x4674 = 0;
	int8_t x4675 = -1;
	int8_t x4676 = INT8_MIN;
	int32_t t87 = -102014096;

	t87 = ((x4673>>x4674)<=(x4675<x4676));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x4749 = 25739339842021076LLU;
	uint8_t x4750 = 2U;
	uint8_t x4751 = UINT8_MAX;
	int16_t x4752 = 13;
	int32_t t88 = 38184149;

	t88 = ((x4749>>x4750)<=(x4751<x4752));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4765 = 923;
	volatile uint8_t x4766 = 0U;
	static volatile uint16_t x4767 = 451U;
	int32_t x4768 = INT32_MIN;

	t89 = ((x4765>>x4766)<=(x4767<x4768));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4821 = 108;
	uint16_t x4822 = 2U;
	static uint32_t x4823 = 0U;
	static volatile int64_t x4824 = -543002257975605240LL;
	static int32_t t90 = -99;

	t90 = ((x4821>>x4822)<=(x4823<x4824));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4889 = UINT16_MAX;
	int64_t x4891 = INT64_MIN;
	volatile int16_t x4892 = INT16_MIN;
	static volatile int32_t t91 = -35333394;

	t91 = ((x4889>>x4890)<=(x4891<x4892));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4909 = INT32_MAX;
	volatile int8_t x4910 = 0;
	volatile int32_t x4912 = -1;

	t92 = ((x4909>>x4910)<=(x4911<x4912));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4925 = 173028517U;
	int32_t x4927 = -1;
	volatile uint32_t x4928 = UINT32_MAX;
	int32_t t93 = -4803;

	t93 = ((x4925>>x4926)<=(x4927<x4928));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4981 = 5984397614218748LLU;
	static uint8_t x4982 = 8U;
	uint16_t x4983 = 5U;
	uint8_t x4984 = UINT8_MAX;

	t94 = ((x4981>>x4982)<=(x4983<x4984));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5001 = 7U;
	int32_t x5002 = 12;
	static volatile int8_t x5004 = INT8_MIN;
	static int32_t t95 = -403;

	t95 = ((x5001>>x5002)<=(x5003<x5004));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5066 = 0;
	uint8_t x5067 = UINT8_MAX;
	int32_t t96 = 1;

	t96 = ((x5065>>x5066)<=(x5067<x5068));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5189 = 4496706844802037633LL;
	static int8_t x5190 = 4;
	int32_t x5191 = -990;
	uint16_t x5192 = 3U;
	static volatile int32_t t97 = 1861011;

	t97 = ((x5189>>x5190)<=(x5191<x5192));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x5193 = 129256LL;
	static volatile uint8_t x5194 = 14U;
	static uint8_t x5195 = 3U;
	uint16_t x5196 = UINT16_MAX;
	static int32_t t98 = 258722058;

	t98 = ((x5193>>x5194)<=(x5195<x5196));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5229 = UINT16_MAX;
	uint8_t x5230 = 7U;
	uint32_t x5231 = 1214544833U;
	uint16_t x5232 = 296U;

	t99 = ((x5229>>x5230)<=(x5231<x5232));

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


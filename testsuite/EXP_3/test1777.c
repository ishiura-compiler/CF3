#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = 0LL;
int8_t x18 = 2;
static int8_t x190 = 3;
static volatile int32_t t3 = 22;
static volatile uint32_t x246 = 18U;
volatile uint64_t x251 = 428910LLU;
int32_t x268 = INT32_MIN;
int16_t x274 = 2;
int8_t x275 = INT8_MIN;
volatile int64_t x276 = INT64_MIN;
static uint32_t x283 = UINT32_MAX;
int8_t x284 = 1;
int16_t x302 = 2;
uint8_t x310 = 9U;
int32_t t10 = -31330814;
uint8_t x330 = 1U;
int32_t t14 = 13185392;
static volatile int64_t x659 = -485025977238783209LL;
volatile uint8_t x829 = 28U;
int16_t x832 = INT16_MIN;
uint8_t x845 = UINT8_MAX;
uint16_t x884 = UINT16_MAX;
int16_t x915 = INT16_MIN;
static uint64_t x941 = 3546846295151979LLU;
int32_t t21 = -10413986;
static uint8_t x965 = 97U;
volatile int32_t t23 = 384582440;
int32_t t24 = 705;
uint16_t x1051 = 119U;
static volatile int16_t x1133 = 0;
int32_t x1135 = -32;
uint32_t x1137 = 1252067520U;
int32_t x1277 = INT32_MAX;
volatile int64_t x1279 = -1LL;
uint32_t x1321 = 5853038U;
uint64_t x1323 = 543962422526746998LLU;
volatile int8_t x1338 = 7;
uint64_t x1401 = 12LLU;
uint8_t x1403 = 42U;
int32_t t35 = -15858;
static int16_t x1487 = INT16_MIN;
int32_t t36 = -55;
uint16_t x1498 = 0U;
int16_t x1499 = INT16_MIN;
volatile int32_t t37 = -5999;
static int32_t t38 = 484807339;
volatile uint32_t x1515 = UINT32_MAX;
int64_t x1516 = INT64_MIN;
volatile uint64_t x1573 = 13557606LLU;
int32_t t40 = -146;
volatile int32_t t41 = 227286;
static int16_t x1720 = -613;
uint64_t x1905 = UINT64_MAX;
uint32_t x1963 = 4430U;
volatile uint8_t x1974 = 7U;
volatile int32_t t49 = 709058;
uint64_t x2013 = 25LLU;
int64_t x2015 = INT64_MIN;
volatile uint32_t x2069 = 1462291469U;
int8_t x2079 = INT8_MAX;
uint64_t x2245 = 5968322237009LLU;
volatile int16_t x2265 = 12970;
uint8_t x2266 = 1U;
int32_t t56 = -2922;
int32_t t57 = 47;
int32_t t58 = 26509373;
volatile int32_t t61 = 76;
volatile int64_t x2677 = 7881883LL;
volatile int8_t x2678 = 12;
volatile uint16_t x2702 = 3U;
uint16_t x2703 = UINT16_MAX;
int8_t x2742 = 2;
int8_t x2743 = -8;
int32_t t67 = -182951;
static uint16_t x2985 = 24U;
volatile int32_t t71 = 100002370;
static int8_t x3375 = INT8_MIN;
static int32_t t75 = 50;
volatile int8_t x3510 = 0;
int64_t x3543 = -26022919573897LL;
static int32_t t77 = -93145562;
uint8_t x3681 = UINT8_MAX;
uint32_t x3805 = 1U;
int64_t x3807 = INT64_MIN;
int32_t x3808 = -151;
static volatile uint8_t x3841 = 42U;
uint8_t x3842 = 8U;
int8_t x3848 = -2;
static volatile int32_t t83 = -1;
volatile int8_t x3874 = 6;
int16_t x3875 = INT16_MIN;
int32_t t85 = -24;
volatile uint64_t x3903 = 18420491LLU;
static volatile int16_t x3985 = INT16_MAX;
uint16_t x4117 = 4762U;
int8_t x4232 = -1;
static int64_t x4343 = -1LL;
static int32_t x4354 = 42;
static uint64_t x4355 = 1760LLU;
int32_t x4356 = INT32_MAX;
volatile uint8_t x4390 = 7U;
uint32_t x4392 = UINT32_MAX;
volatile int32_t t97 = -124210132;
static uint8_t x4426 = 13U;


void f0(void) {
	static uint32_t x2 = 4U;
	uint32_t x3 = UINT32_MAX;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = 295;

	t0 = ((x1>>x2)<(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x17 = 101402151491LLU;
	int64_t x19 = INT64_MAX;
	int8_t x20 = -1;
	int32_t t1 = -6600037;

	t1 = ((x17>>x18)<(x19&x20));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x57 = 0;
	uint16_t x58 = 3U;
	int8_t x59 = 1;
	int32_t x60 = -1;
	int32_t t2 = 4835;

	t2 = ((x57>>x58)<(x59&x60));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x189 = UINT64_MAX;
	uint32_t x191 = 18U;
	static int16_t x192 = -1;

	t3 = ((x189>>x190)<(x191&x192));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x245 = UINT64_MAX;
	static int16_t x247 = 24;
	int64_t x248 = -1LL;
	static volatile int32_t t4 = -302682;

	t4 = ((x245>>x246)<(x247&x248));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x249 = 65700U;
	static int8_t x250 = 0;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t5 = 263588230;

	t5 = ((x249>>x250)<(x251&x252));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x265 = 29U;
	static uint8_t x266 = 1U;
	static int8_t x267 = -5;
	int32_t t6 = -6639535;

	t6 = ((x265>>x266)<(x267&x268));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int32_t t7 = 6099083;

	t7 = ((x273>>x274)<(x275&x276));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 1U;
	volatile int32_t t8 = -3081;

	t8 = ((x281>>x282)<(x283&x284));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x301 = 1604U;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t9 = -542607964;

	t9 = ((x301>>x302)<(x303&x304));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x309 = 1176159;
	static volatile uint8_t x311 = 62U;
	int32_t x312 = INT32_MIN;

	t10 = ((x309>>x310)<(x311&x312));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x329 = 1;
	int64_t x331 = 31703272446LL;
	uint64_t x332 = 24179720171007LLU;
	int32_t t11 = -368743;

	t11 = ((x329>>x330)<(x331&x332));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x413 = INT32_MAX;
	int8_t x414 = 1;
	int32_t x415 = -1;
	int8_t x416 = INT8_MIN;
	int32_t t12 = -751662;

	t12 = ((x413>>x414)<(x415&x416));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x601 = 1378;
	volatile uint8_t x602 = 2U;
	volatile uint64_t x603 = UINT64_MAX;
	uint8_t x604 = 16U;
	int32_t t13 = -418588048;

	t13 = ((x601>>x602)<(x603&x604));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x629 = 156951957125LL;
	volatile int16_t x630 = 30;
	static int16_t x631 = -1;
	int32_t x632 = INT32_MAX;

	t14 = ((x629>>x630)<(x631&x632));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x657 = 6U;
	uint16_t x658 = 15U;
	static int8_t x660 = -1;
	volatile int32_t t15 = -1;

	t15 = ((x657>>x658)<(x659&x660));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x705 = 1719087466049LLU;
	static uint16_t x706 = 1U;
	volatile int32_t x707 = INT32_MIN;
	uint8_t x708 = 27U;
	static int32_t t16 = 201;

	t16 = ((x705>>x706)<(x707&x708));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x830 = 1U;
	int32_t x831 = 40;
	volatile int32_t t17 = 4;

	t17 = ((x829>>x830)<(x831&x832));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x846 = 3U;
	int8_t x847 = 3;
	static uint64_t x848 = 14622226849LLU;
	int32_t t18 = 0;

	t18 = ((x845>>x846)<(x847&x848));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x881 = INT8_MAX;
	int32_t x882 = 0;
	uint64_t x883 = UINT64_MAX;
	static volatile int32_t t19 = -1;

	t19 = ((x881>>x882)<(x883&x884));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x913 = 140389;
	volatile uint16_t x914 = 10U;
	int32_t x916 = -37;
	volatile int32_t t20 = 5;

	t20 = ((x913>>x914)<(x915&x916));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x942 = 0;
	uint32_t x943 = 23124949U;
	static uint8_t x944 = UINT8_MAX;

	t21 = ((x941>>x942)<(x943&x944));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x966 = 0;
	int32_t x967 = 347368466;
	int16_t x968 = 109;
	volatile int32_t t22 = -385518;

	t22 = ((x965>>x966)<(x967&x968));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1005 = INT64_MAX;
	static uint8_t x1006 = 29U;
	uint32_t x1007 = UINT32_MAX;
	int64_t x1008 = INT64_MIN;

	t23 = ((x1005>>x1006)<(x1007&x1008));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1045 = INT8_MAX;
	volatile int16_t x1046 = 6;
	volatile int16_t x1047 = INT16_MIN;
	uint16_t x1048 = 11100U;

	t24 = ((x1045>>x1046)<(x1047&x1048));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1049 = 47U;
	uint32_t x1050 = 7U;
	volatile uint64_t x1052 = 286815368557907140LLU;
	int32_t t25 = 3;

	t25 = ((x1049>>x1050)<(x1051&x1052));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1134 = 13U;
	int8_t x1136 = 29;
	volatile int32_t t26 = -663;

	t26 = ((x1133>>x1134)<(x1135&x1136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1138 = 8U;
	volatile int8_t x1139 = INT8_MIN;
	uint64_t x1140 = 1LLU;
	volatile int32_t t27 = -106;

	t27 = ((x1137>>x1138)<(x1139&x1140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1161 = 9913LLU;
	int8_t x1162 = 29;
	int16_t x1163 = 6481;
	volatile int16_t x1164 = 1485;
	volatile int32_t t28 = 163210;

	t28 = ((x1161>>x1162)<(x1163&x1164));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1278 = 1U;
	static int32_t x1280 = 408;
	int32_t t29 = -1;

	t29 = ((x1277>>x1278)<(x1279&x1280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1285 = 35U;
	int64_t x1286 = 12LL;
	static int64_t x1287 = 15188LL;
	int32_t x1288 = 212447593;
	int32_t t30 = 114;

	t30 = ((x1285>>x1286)<(x1287&x1288));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1322 = 13LL;
	int8_t x1324 = 4;
	int32_t t31 = -32;

	t31 = ((x1321>>x1322)<(x1323&x1324));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1337 = 0U;
	static int32_t x1339 = INT32_MIN;
	int16_t x1340 = -1;
	int32_t t32 = 1955562;

	t32 = ((x1337>>x1338)<(x1339&x1340));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1357 = INT64_MAX;
	volatile int16_t x1358 = 1;
	static uint64_t x1359 = 128336LLU;
	int32_t x1360 = 214010514;
	volatile int32_t t33 = -286740;

	t33 = ((x1357>>x1358)<(x1359&x1360));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1365 = UINT64_MAX;
	int8_t x1366 = 1;
	int64_t x1367 = INT64_MIN;
	int8_t x1368 = 6;
	int32_t t34 = -189095347;

	t34 = ((x1365>>x1366)<(x1367&x1368));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1402 = 48U;
	static volatile uint16_t x1404 = UINT16_MAX;

	t35 = ((x1401>>x1402)<(x1403&x1404));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1485 = INT64_MAX;
	int8_t x1486 = 38;
	int8_t x1488 = INT8_MIN;

	t36 = ((x1485>>x1486)<(x1487&x1488));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1497 = 31U;
	int64_t x1500 = INT64_MIN;

	t37 = ((x1497>>x1498)<(x1499&x1500));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1509 = UINT64_MAX;
	volatile int8_t x1510 = 42;
	volatile int16_t x1511 = -4;
	int16_t x1512 = INT16_MAX;

	t38 = ((x1509>>x1510)<(x1511&x1512));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1513 = 773;
	static uint32_t x1514 = 3U;
	static int32_t t39 = 28873;

	t39 = ((x1513>>x1514)<(x1515&x1516));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x1574 = 0;
	volatile int64_t x1575 = INT64_MIN;
	int8_t x1576 = -3;

	t40 = ((x1573>>x1574)<(x1575&x1576));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1649 = 1LL;
	int32_t x1650 = 1;
	int16_t x1651 = -1;
	int8_t x1652 = INT8_MIN;

	t41 = ((x1649>>x1650)<(x1651&x1652));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1701 = 0U;
	uint8_t x1702 = 27U;
	static int64_t x1703 = -19903LL;
	int64_t x1704 = -1LL;
	int32_t t42 = 13283;

	t42 = ((x1701>>x1702)<(x1703&x1704));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1717 = 1938279307686942518LL;
	uint32_t x1718 = 0U;
	int32_t x1719 = INT32_MIN;
	int32_t t43 = 2788461;

	t43 = ((x1717>>x1718)<(x1719&x1720));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1729 = 55U;
	uint16_t x1730 = 1U;
	int64_t x1731 = INT64_MIN;
	static int32_t x1732 = INT32_MIN;
	volatile int32_t t44 = 695957454;

	t44 = ((x1729>>x1730)<(x1731&x1732));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1785 = UINT8_MAX;
	static uint32_t x1786 = 0U;
	int64_t x1787 = -1LL;
	static int16_t x1788 = INT16_MAX;
	int32_t t45 = 0;

	t45 = ((x1785>>x1786)<(x1787&x1788));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1857 = UINT8_MAX;
	volatile uint8_t x1858 = 19U;
	volatile int8_t x1859 = INT8_MIN;
	volatile int8_t x1860 = INT8_MIN;
	volatile int32_t t46 = -185;

	t46 = ((x1857>>x1858)<(x1859&x1860));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1906 = 0U;
	uint64_t x1907 = 113729756LLU;
	int16_t x1908 = INT16_MIN;
	static volatile int32_t t47 = 1304265;

	t47 = ((x1905>>x1906)<(x1907&x1908));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1961 = INT8_MAX;
	int8_t x1962 = 16;
	int16_t x1964 = INT16_MAX;
	int32_t t48 = 0;

	t48 = ((x1961>>x1962)<(x1963&x1964));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1973 = UINT64_MAX;
	int8_t x1975 = INT8_MAX;
	static volatile int64_t x1976 = INT64_MIN;

	t49 = ((x1973>>x1974)<(x1975&x1976));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2014 = 53U;
	uint16_t x2016 = 2U;
	static int32_t t50 = -83;

	t50 = ((x2013>>x2014)<(x2015&x2016));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2070 = 1U;
	static volatile int32_t x2071 = -214334973;
	static uint32_t x2072 = 2304017U;
	static volatile int32_t t51 = -32;

	t51 = ((x2069>>x2070)<(x2071&x2072));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2077 = 51U;
	uint32_t x2078 = 1U;
	uint64_t x2080 = 145LLU;
	static volatile int32_t t52 = 1;

	t52 = ((x2077>>x2078)<(x2079&x2080));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2246 = 11U;
	static int32_t x2247 = INT32_MIN;
	uint8_t x2248 = 28U;
	int32_t t53 = -1615;

	t53 = ((x2245>>x2246)<(x2247&x2248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2267 = INT8_MAX;
	uint8_t x2268 = 11U;
	int32_t t54 = -1446647;

	t54 = ((x2265>>x2266)<(x2267&x2268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2273 = INT64_MAX;
	uint64_t x2274 = 2LLU;
	uint32_t x2275 = UINT32_MAX;
	int8_t x2276 = INT8_MIN;
	volatile int32_t t55 = 325508;

	t55 = ((x2273>>x2274)<(x2275&x2276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2289 = INT64_MAX;
	uint8_t x2290 = 0U;
	static volatile int8_t x2291 = INT8_MIN;
	int8_t x2292 = 29;

	t56 = ((x2289>>x2290)<(x2291&x2292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2305 = 283U;
	volatile int16_t x2306 = 7;
	uint32_t x2307 = UINT32_MAX;
	int32_t x2308 = INT32_MIN;

	t57 = ((x2305>>x2306)<(x2307&x2308));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2349 = UINT64_MAX;
	int16_t x2350 = 5;
	static int32_t x2351 = -1;
	int16_t x2352 = -2767;

	t58 = ((x2349>>x2350)<(x2351&x2352));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2401 = 80LL;
	uint8_t x2402 = 1U;
	static int16_t x2403 = -3;
	volatile int32_t x2404 = -1;
	volatile int32_t t59 = 665189;

	t59 = ((x2401>>x2402)<(x2403&x2404));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2417 = 5U;
	static volatile int8_t x2418 = 28;
	int8_t x2419 = 2;
	int8_t x2420 = INT8_MIN;
	volatile int32_t t60 = -122400;

	t60 = ((x2417>>x2418)<(x2419&x2420));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2469 = UINT32_MAX;
	int8_t x2470 = 1;
	static uint64_t x2471 = 1334540630273LLU;
	int8_t x2472 = 1;

	t61 = ((x2469>>x2470)<(x2471&x2472));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x2561 = UINT8_MAX;
	uint8_t x2562 = 0U;
	volatile uint64_t x2563 = 2458LLU;
	uint16_t x2564 = UINT16_MAX;
	volatile int32_t t62 = -137150;

	t62 = ((x2561>>x2562)<(x2563&x2564));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2679 = UINT32_MAX;
	volatile int8_t x2680 = 11;
	volatile int32_t t63 = -3028;

	t63 = ((x2677>>x2678)<(x2679&x2680));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2701 = 3U;
	volatile int8_t x2704 = INT8_MAX;
	int32_t t64 = -31260406;

	t64 = ((x2701>>x2702)<(x2703&x2704));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2741 = 0U;
	volatile int8_t x2744 = INT8_MAX;
	int32_t t65 = -13211304;

	t65 = ((x2741>>x2742)<(x2743&x2744));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2833 = UINT64_MAX;
	static uint8_t x2834 = 3U;
	int16_t x2835 = 7286;
	int64_t x2836 = INT64_MIN;
	volatile int32_t t66 = -1836331;

	t66 = ((x2833>>x2834)<(x2835&x2836));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2889 = 236291492;
	static volatile uint8_t x2890 = 5U;
	volatile uint64_t x2891 = UINT64_MAX;
	int16_t x2892 = INT16_MIN;

	t67 = ((x2889>>x2890)<(x2891&x2892));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x2917 = 1U;
	static uint8_t x2918 = 1U;
	int16_t x2919 = INT16_MIN;
	static volatile int8_t x2920 = INT8_MIN;
	int32_t t68 = -3;

	t68 = ((x2917>>x2918)<(x2919&x2920));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2977 = 9778U;
	uint8_t x2978 = 1U;
	volatile int16_t x2979 = INT16_MAX;
	static uint16_t x2980 = 1U;
	volatile int32_t t69 = 14775;

	t69 = ((x2977>>x2978)<(x2979&x2980));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2986 = 5;
	volatile uint16_t x2987 = UINT16_MAX;
	static int64_t x2988 = INT64_MIN;
	int32_t t70 = 71114090;

	t70 = ((x2985>>x2986)<(x2987&x2988));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3213 = 1U;
	uint16_t x3214 = 9U;
	int16_t x3215 = INT16_MIN;
	static int32_t x3216 = -1;

	t71 = ((x3213>>x3214)<(x3215&x3216));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3293 = 702301LLU;
	int8_t x3294 = 0;
	uint64_t x3295 = 1863397666140LLU;
	static int16_t x3296 = INT16_MAX;
	static volatile int32_t t72 = 7688;

	t72 = ((x3293>>x3294)<(x3295&x3296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3337 = INT8_MAX;
	int8_t x3338 = 4;
	static int32_t x3339 = INT32_MAX;
	int32_t x3340 = -1;
	int32_t t73 = -88;

	t73 = ((x3337>>x3338)<(x3339&x3340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3373 = INT64_MAX;
	uint8_t x3374 = 13U;
	uint64_t x3376 = UINT64_MAX;
	volatile int32_t t74 = 379;

	t74 = ((x3373>>x3374)<(x3375&x3376));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x3381 = UINT64_MAX;
	volatile uint8_t x3382 = 9U;
	int8_t x3383 = INT8_MAX;
	uint16_t x3384 = 506U;

	t75 = ((x3381>>x3382)<(x3383&x3384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3509 = 1686991725892LLU;
	int64_t x3511 = INT64_MIN;
	uint32_t x3512 = UINT32_MAX;
	int32_t t76 = 1;

	t76 = ((x3509>>x3510)<(x3511&x3512));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3541 = 30;
	int8_t x3542 = 10;
	static uint64_t x3544 = 10659648177891LLU;

	t77 = ((x3541>>x3542)<(x3543&x3544));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3645 = 53;
	volatile uint16_t x3646 = 3U;
	uint16_t x3647 = 1U;
	int8_t x3648 = INT8_MIN;
	int32_t t78 = 238;

	t78 = ((x3645>>x3646)<(x3647&x3648));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3682 = 0U;
	uint32_t x3683 = 49U;
	static int16_t x3684 = 0;
	static int32_t t79 = -449;

	t79 = ((x3681>>x3682)<(x3683&x3684));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x3806 = 1;
	volatile int32_t t80 = -53723523;

	t80 = ((x3805>>x3806)<(x3807&x3808));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3843 = 10U;
	int16_t x3844 = INT16_MAX;
	int32_t t81 = -82269;

	t81 = ((x3841>>x3842)<(x3843&x3844));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3845 = UINT64_MAX;
	static int64_t x3846 = 0LL;
	int64_t x3847 = -989025LL;
	int32_t t82 = 386932;

	t82 = ((x3845>>x3846)<(x3847&x3848));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3857 = 2U;
	int8_t x3858 = 16;
	static uint32_t x3859 = UINT32_MAX;
	uint32_t x3860 = UINT32_MAX;

	t83 = ((x3857>>x3858)<(x3859&x3860));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3861 = 20252U;
	uint8_t x3862 = 0U;
	int8_t x3863 = INT8_MIN;
	int32_t x3864 = INT32_MIN;
	int32_t t84 = 6323;

	t84 = ((x3861>>x3862)<(x3863&x3864));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3873 = 339951595LLU;
	volatile uint64_t x3876 = 0LLU;

	t85 = ((x3873>>x3874)<(x3875&x3876));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x3901 = 5;
	volatile int32_t x3902 = 21;
	int32_t x3904 = -409;
	int32_t t86 = -1319;

	t86 = ((x3901>>x3902)<(x3903&x3904));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x3986 = 0U;
	static uint32_t x3987 = 1506243943U;
	static uint8_t x3988 = UINT8_MAX;
	static int32_t t87 = 63645868;

	t87 = ((x3985>>x3986)<(x3987&x3988));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4118 = 7U;
	int8_t x4119 = INT8_MAX;
	static volatile uint16_t x4120 = UINT16_MAX;
	static volatile int32_t t88 = 284033325;

	t88 = ((x4117>>x4118)<(x4119&x4120));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x4121 = UINT8_MAX;
	uint16_t x4122 = 1U;
	int16_t x4123 = INT16_MIN;
	uint64_t x4124 = 1811894925836939477LLU;
	volatile int32_t t89 = 53922638;

	t89 = ((x4121>>x4122)<(x4123&x4124));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4165 = 1553LL;
	int16_t x4166 = 1;
	uint64_t x4167 = 9776906986LLU;
	int64_t x4168 = 14LL;
	static int32_t t90 = 169;

	t90 = ((x4165>>x4166)<(x4167&x4168));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4181 = 5;
	uint16_t x4182 = 23U;
	volatile int32_t x4183 = INT32_MIN;
	static int64_t x4184 = -1LL;
	volatile int32_t t91 = -147561959;

	t91 = ((x4181>>x4182)<(x4183&x4184));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4201 = 391475LL;
	static uint32_t x4202 = 12U;
	int32_t x4203 = -1;
	int32_t x4204 = INT32_MIN;
	static int32_t t92 = 50;

	t92 = ((x4201>>x4202)<(x4203&x4204));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4229 = INT16_MAX;
	volatile uint8_t x4230 = 1U;
	int8_t x4231 = 2;
	static volatile int32_t t93 = 30567647;

	t93 = ((x4229>>x4230)<(x4231&x4232));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4265 = 2269U;
	static int64_t x4266 = 0LL;
	int16_t x4267 = INT16_MAX;
	uint64_t x4268 = 347997753209043LLU;
	int32_t t94 = 464800;

	t94 = ((x4265>>x4266)<(x4267&x4268));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x4341 = 1U;
	int16_t x4342 = 8;
	int8_t x4344 = 7;
	int32_t t95 = -22;

	t95 = ((x4341>>x4342)<(x4343&x4344));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4353 = 3213564LL;
	static int32_t t96 = -4076671;

	t96 = ((x4353>>x4354)<(x4355&x4356));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4389 = UINT32_MAX;
	volatile int8_t x4391 = INT8_MAX;

	t97 = ((x4389>>x4390)<(x4391&x4392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4405 = INT32_MAX;
	uint32_t x4406 = 0U;
	uint16_t x4407 = UINT16_MAX;
	static volatile int16_t x4408 = INT16_MAX;
	int32_t t98 = -9666;

	t98 = ((x4405>>x4406)<(x4407&x4408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4425 = 14962244666400LL;
	static volatile int8_t x4427 = -1;
	volatile uint8_t x4428 = 0U;
	static int32_t t99 = 250520;

	t99 = ((x4425>>x4426)<(x4427&x4428));

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


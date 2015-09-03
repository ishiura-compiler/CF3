#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x75 = 15329889U;
uint64_t x221 = 30291802828946753LLU;
volatile int8_t x249 = INT8_MAX;
int8_t x252 = -1;
int16_t x319 = INT16_MAX;
int64_t x363 = 1419959182631900LL;
static int8_t x446 = -4;
int8_t x448 = -1;
int32_t x610 = INT32_MIN;
static uint8_t x622 = UINT8_MAX;
volatile int32_t t9 = -5023569;
volatile int32_t t10 = -477087;
int32_t x853 = -1;
int32_t x856 = -1;
int32_t x1060 = -1;
uint8_t x1085 = UINT8_MAX;
int32_t x1087 = INT32_MAX;
static int32_t t14 = 717247618;
volatile uint8_t x1159 = UINT8_MAX;
int32_t x1160 = -1;
volatile uint32_t x1277 = 87276425U;
int8_t x1280 = -1;
volatile uint32_t t18 = 341638163U;
volatile int64_t x1316 = -1LL;
int8_t x1342 = INT8_MIN;
int8_t x1478 = INT8_MIN;
int8_t x1479 = -56;
uint64_t x1582 = UINT64_MAX;
volatile int16_t x1585 = INT16_MIN;
static int64_t x1625 = INT64_MIN;
uint8_t x1824 = 1U;
static int16_t x1846 = INT16_MIN;
uint64_t x1893 = UINT64_MAX;
int32_t x1896 = -1;
int16_t x1901 = 7;
static int8_t x1915 = INT8_MIN;
uint8_t x2086 = UINT8_MAX;
int32_t x2130 = 0;
static uint32_t x2131 = UINT32_MAX;
static uint32_t x2173 = 1907451884U;
uint32_t t37 = 21U;
int64_t t38 = -1712917285088319LL;
static volatile uint8_t x2237 = 1U;
int32_t x2305 = INT32_MAX;
volatile int32_t t45 = -14084320;
volatile int64_t t49 = 125619910LL;
volatile int32_t x2700 = -1;
int8_t x2915 = INT8_MAX;
int32_t t52 = -1032522;
int32_t x3095 = INT32_MIN;
volatile int32_t x3181 = INT32_MAX;
volatile int32_t t56 = -856472;
static volatile int16_t x3225 = 3790;
int16_t x3227 = -1;
int8_t x3239 = INT8_MAX;
volatile int32_t t58 = -63;
static int32_t x3372 = -1;
volatile int16_t x3410 = INT16_MIN;
int64_t x3566 = -107183416LL;
uint32_t x3630 = 122U;
uint64_t x3633 = UINT64_MAX;
int8_t x3651 = INT8_MAX;
volatile int32_t t67 = -14297;
int16_t x3659 = INT16_MAX;
int32_t x3660 = -1;
volatile int64_t t70 = -1864896163LL;
volatile int8_t x3799 = -1;
uint64_t t71 = 92728850341580LLU;
int64_t x3895 = INT64_MAX;
uint8_t x3896 = 1U;
uint64_t t76 = 19875450616812LLU;
int64_t x3995 = -51LL;
int16_t x4338 = 1;
int64_t x4370 = INT64_MIN;
static int8_t x4442 = INT8_MIN;
int64_t x4444 = 1LL;
static uint16_t x4505 = 28U;
int16_t x4637 = -1;
uint64_t x4709 = 1050046176441LLU;
static int16_t x4710 = INT16_MAX;
volatile int8_t x4712 = -1;
uint64_t x4799 = 24778535436664326LLU;
volatile int32_t x4807 = -1;
int8_t x4930 = INT8_MIN;
int16_t x4968 = 1;
int16_t x5019 = 0;
static volatile int32_t t99 = -410867;


void f0(void) {
	static volatile int64_t x33 = 3718117366440LL;
	volatile int64_t x34 = -1LL;
	int32_t x35 = 12755699;
	static int32_t x36 = -1;
	static volatile int64_t t0 = 1457LL;

	t0 = (x33%((x34<=x35)/x36));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x73 = INT64_MAX;
	uint32_t x74 = 531524U;
	int8_t x76 = -1;
	volatile int64_t t1 = 7798705916LL;

	t1 = (x73%((x74<=x75)/x76));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x222 = 4096;
	volatile int64_t x223 = 11796189063605829LL;
	volatile int16_t x224 = -1;
	uint64_t t2 = 22972248941488LLU;

	t2 = (x221%((x222<=x223)/x224));

	if (t2 != 30291802828946753LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x229 = INT64_MAX;
	volatile int32_t x230 = -1;
	int8_t x231 = -1;
	int16_t x232 = -1;
	static volatile int64_t t3 = -4309591453818LL;

	t3 = (x229%((x230<=x231)/x232));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x250 = -1;
	static int8_t x251 = -1;
	int32_t t4 = -18664;

	t4 = (x249%((x250<=x251)/x252));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	static int16_t x320 = 1;
	volatile int32_t t5 = 0;

	t5 = (x317%((x318<=x319)/x320));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x361 = 46U;
	static int8_t x362 = 51;
	int16_t x364 = -1;
	volatile uint32_t t6 = 312694U;

	t6 = (x361%((x362<=x363)/x364));

	if (t6 != 46U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x445 = 2494043636842514LL;
	int32_t x447 = INT32_MAX;
	int64_t t7 = 56358LL;

	t7 = (x445%((x446<=x447)/x448));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x609 = -1;
	int16_t x611 = INT16_MIN;
	int8_t x612 = -1;
	static volatile int32_t t8 = 869;

	t8 = (x609%((x610<=x611)/x612));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x621 = INT16_MAX;
	uint64_t x623 = 294443621LLU;
	int32_t x624 = 1;

	t9 = (x621%((x622<=x623)/x624));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x693 = INT8_MAX;
	uint64_t x694 = 6375LLU;
	uint64_t x695 = 3710834313587982LLU;
	int8_t x696 = -1;

	t10 = (x693%((x694<=x695)/x696));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x854 = INT32_MIN;
	static int8_t x855 = 40;
	static volatile int32_t t11 = -30169679;

	t11 = (x853%((x854<=x855)/x856));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x1029 = INT32_MIN;
	static int32_t x1030 = 2105;
	int64_t x1031 = INT64_MAX;
	uint64_t x1032 = 1LLU;
	static uint64_t t12 = 19127457673727LLU;

	t12 = (x1029%((x1030<=x1031)/x1032));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x1057 = 0U;
	static int16_t x1058 = INT16_MAX;
	int16_t x1059 = INT16_MAX;
	volatile int32_t t13 = -2389;

	t13 = (x1057%((x1058<=x1059)/x1060));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1086 = 79759U;
	volatile int16_t x1088 = 1;

	t14 = (x1085%((x1086<=x1087)/x1088));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1157 = INT64_MIN;
	uint64_t x1158 = 2LLU;
	static volatile int64_t t15 = 639386942131LL;

	t15 = (x1157%((x1158<=x1159)/x1160));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1177 = UINT8_MAX;
	int8_t x1178 = INT8_MIN;
	static int8_t x1179 = INT8_MIN;
	static int8_t x1180 = -1;
	int32_t t16 = 27666;

	t16 = (x1177%((x1178<=x1179)/x1180));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1269 = INT16_MAX;
	int32_t x1270 = -9983971;
	static uint16_t x1271 = UINT16_MAX;
	volatile int64_t x1272 = -1LL;
	volatile int64_t t17 = 230045LL;

	t17 = (x1269%((x1270<=x1271)/x1272));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1278 = 108U;
	int64_t x1279 = 120177069536005LL;

	t18 = (x1277%((x1278<=x1279)/x1280));

	if (t18 != 87276425U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1313 = INT32_MAX;
	int32_t x1314 = -323827;
	uint16_t x1315 = 1U;
	int64_t t19 = 315992691184453LL;

	t19 = (x1313%((x1314<=x1315)/x1316));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1341 = 1350;
	int64_t x1343 = 6454294LL;
	int64_t x1344 = -1LL;
	volatile int64_t t20 = 2472LL;

	t20 = (x1341%((x1342<=x1343)/x1344));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1477 = 2;
	uint16_t x1480 = 1U;
	int32_t t21 = 5;

	t21 = (x1477%((x1478<=x1479)/x1480));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1485 = INT8_MIN;
	static int8_t x1486 = -14;
	int64_t x1487 = -1LL;
	int8_t x1488 = -1;
	int32_t t22 = 56;

	t22 = (x1485%((x1486<=x1487)/x1488));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1581 = 7U;
	int32_t x1583 = -1;
	int16_t x1584 = -1;
	volatile int32_t t23 = -48417;

	t23 = (x1581%((x1582<=x1583)/x1584));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1586 = 7211;
	uint16_t x1587 = UINT16_MAX;
	int16_t x1588 = 1;
	static int32_t t24 = 243;

	t24 = (x1585%((x1586<=x1587)/x1588));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1626 = INT64_MIN;
	int32_t x1627 = INT32_MAX;
	int64_t x1628 = -1LL;
	volatile int64_t t25 = 1875143738391548LL;

	t25 = (x1625%((x1626<=x1627)/x1628));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1737 = -1;
	int16_t x1738 = -1;
	int8_t x1739 = -1;
	int16_t x1740 = -1;
	int32_t t26 = 20220884;

	t26 = (x1737%((x1738<=x1739)/x1740));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1821 = 249004LL;
	uint64_t x1822 = 13702129797626LLU;
	int64_t x1823 = INT64_MAX;
	int64_t t27 = -5LL;

	t27 = (x1821%((x1822<=x1823)/x1824));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1837 = 105;
	int8_t x1838 = -1;
	int16_t x1839 = -1;
	int8_t x1840 = -1;
	volatile int32_t t28 = -33484353;

	t28 = (x1837%((x1838<=x1839)/x1840));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1845 = -207362242;
	static volatile uint32_t x1847 = UINT32_MAX;
	int32_t x1848 = -1;
	volatile int32_t t29 = -1;

	t29 = (x1845%((x1846<=x1847)/x1848));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1857 = -1;
	int16_t x1858 = -1;
	volatile int8_t x1859 = -1;
	volatile uint8_t x1860 = 1U;
	volatile int32_t t30 = -3;

	t30 = (x1857%((x1858<=x1859)/x1860));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1894 = 653591944U;
	uint32_t x1895 = UINT32_MAX;
	uint64_t t31 = 778619681260473LLU;

	t31 = (x1893%((x1894<=x1895)/x1896));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1902 = INT32_MIN;
	int8_t x1903 = INT8_MIN;
	static volatile int16_t x1904 = -1;
	volatile int32_t t32 = -1;

	t32 = (x1901%((x1902<=x1903)/x1904));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1913 = INT64_MAX;
	uint64_t x1914 = 850467LLU;
	int32_t x1916 = -1;
	static volatile int64_t t33 = 18707503295037LL;

	t33 = (x1913%((x1914<=x1915)/x1916));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2037 = -37;
	int8_t x2038 = INT8_MIN;
	int32_t x2039 = INT32_MAX;
	int8_t x2040 = -1;
	volatile int32_t t34 = 1;

	t34 = (x2037%((x2038<=x2039)/x2040));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2085 = 180U;
	uint64_t x2087 = 368859529LLU;
	int8_t x2088 = -1;
	volatile int32_t t35 = -1;

	t35 = (x2085%((x2086<=x2087)/x2088));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x2129 = -1LL;
	static volatile int32_t x2132 = -1;
	static volatile int64_t t36 = -1462LL;

	t36 = (x2129%((x2130<=x2131)/x2132));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2174 = -832;
	int8_t x2175 = INT8_MIN;
	uint8_t x2176 = 1U;

	t37 = (x2173%((x2174<=x2175)/x2176));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2213 = 28875858021232LL;
	uint8_t x2214 = UINT8_MAX;
	volatile int16_t x2215 = INT16_MAX;
	volatile int64_t x2216 = -1LL;

	t38 = (x2213%((x2214<=x2215)/x2216));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2238 = -24;
	static uint16_t x2239 = 0U;
	int8_t x2240 = 1;
	static volatile int32_t t39 = -90551446;

	t39 = (x2237%((x2238<=x2239)/x2240));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2293 = 1;
	int32_t x2294 = 7;
	static int8_t x2295 = INT8_MAX;
	int16_t x2296 = -1;
	volatile int32_t t40 = -2120;

	t40 = (x2293%((x2294<=x2295)/x2296));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2306 = INT32_MIN;
	int16_t x2307 = -1;
	int32_t x2308 = -1;
	int32_t t41 = -1;

	t41 = (x2305%((x2306<=x2307)/x2308));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2325 = INT8_MIN;
	uint8_t x2326 = UINT8_MAX;
	volatile int16_t x2327 = INT16_MAX;
	volatile int64_t x2328 = -1LL;
	static int64_t t42 = 254263744LL;

	t42 = (x2325%((x2326<=x2327)/x2328));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2345 = -1;
	uint32_t x2346 = UINT32_MAX;
	int32_t x2347 = -1;
	int16_t x2348 = -1;
	static volatile int32_t t43 = 0;

	t43 = (x2345%((x2346<=x2347)/x2348));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2353 = INT16_MIN;
	int32_t x2354 = INT32_MAX;
	uint32_t x2355 = UINT32_MAX;
	static int64_t x2356 = -1LL;
	volatile int64_t t44 = 851087136309556120LL;

	t44 = (x2353%((x2354<=x2355)/x2356));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2385 = UINT16_MAX;
	int32_t x2386 = -1;
	uint16_t x2387 = 6176U;
	int8_t x2388 = -1;

	t45 = (x2385%((x2386<=x2387)/x2388));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2433 = INT8_MIN;
	int64_t x2434 = INT64_MIN;
	volatile int16_t x2435 = -1;
	volatile int8_t x2436 = -1;
	static int32_t t46 = 1711;

	t46 = (x2433%((x2434<=x2435)/x2436));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2513 = 3079LLU;
	uint8_t x2514 = 4U;
	int32_t x2515 = INT32_MAX;
	int8_t x2516 = -1;
	uint64_t t47 = 53868277322535161LLU;

	t47 = (x2513%((x2514<=x2515)/x2516));

	if (t47 != 3079LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2529 = INT16_MIN;
	int64_t x2530 = -1LL;
	int16_t x2531 = INT16_MAX;
	int64_t x2532 = -1LL;
	int64_t t48 = -138776LL;

	t48 = (x2529%((x2530<=x2531)/x2532));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x2597 = 719LL;
	int8_t x2598 = INT8_MIN;
	uint16_t x2599 = 0U;
	int16_t x2600 = -1;

	t49 = (x2597%((x2598<=x2599)/x2600));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2697 = 9LLU;
	static volatile uint64_t x2698 = 79141624LLU;
	static int64_t x2699 = INT64_MAX;
	volatile uint64_t t50 = 3929LLU;

	t50 = (x2697%((x2698<=x2699)/x2700));

	if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2913 = 2453047715182LL;
	volatile uint64_t x2914 = 6LLU;
	int16_t x2916 = -1;
	int64_t t51 = -6135351LL;

	t51 = (x2913%((x2914<=x2915)/x2916));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2965 = -981;
	int8_t x2966 = 2;
	int16_t x2967 = INT16_MAX;
	static int32_t x2968 = -1;

	t52 = (x2965%((x2966<=x2967)/x2968));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3077 = INT8_MAX;
	static int16_t x3078 = -1;
	volatile int8_t x3079 = INT8_MAX;
	volatile uint8_t x3080 = 1U;
	static volatile int32_t t53 = -26500229;

	t53 = (x3077%((x3078<=x3079)/x3080));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3093 = -80207746;
	static int32_t x3094 = INT32_MIN;
	volatile int32_t x3096 = -1;
	static int32_t t54 = -18647127;

	t54 = (x3093%((x3094<=x3095)/x3096));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3117 = INT64_MIN;
	int16_t x3118 = -1;
	uint32_t x3119 = UINT32_MAX;
	volatile int64_t x3120 = -1LL;
	int64_t t55 = -105039216326LL;

	t55 = (x3117%((x3118<=x3119)/x3120));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3182 = -1;
	volatile int32_t x3183 = INT32_MAX;
	int16_t x3184 = -1;

	t56 = (x3181%((x3182<=x3183)/x3184));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3226 = 26051U;
	static int64_t x3228 = -1LL;
	int64_t t57 = 16588891LL;

	t57 = (x3225%((x3226<=x3227)/x3228));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3237 = -543526178;
	volatile uint8_t x3238 = 11U;
	volatile int16_t x3240 = -1;

	t58 = (x3237%((x3238<=x3239)/x3240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3285 = 5U;
	static int16_t x3286 = INT16_MIN;
	int32_t x3287 = -13;
	int32_t x3288 = -1;
	volatile int32_t t59 = -327;

	t59 = (x3285%((x3286<=x3287)/x3288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3305 = 38536052018914204LLU;
	int64_t x3306 = INT64_MIN;
	int32_t x3307 = INT32_MIN;
	int32_t x3308 = -1;
	volatile uint64_t t60 = 2530LLU;

	t60 = (x3305%((x3306<=x3307)/x3308));

	if (t60 != 38536052018914204LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3369 = -1;
	int8_t x3370 = -1;
	volatile int64_t x3371 = 3LL;
	volatile int32_t t61 = 1147727;

	t61 = (x3369%((x3370<=x3371)/x3372));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3409 = -1;
	static int16_t x3411 = 107;
	int16_t x3412 = -1;
	volatile int32_t t62 = 99;

	t62 = (x3409%((x3410<=x3411)/x3412));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3461 = 4U;
	int32_t x3462 = INT32_MIN;
	int32_t x3463 = 55331292;
	int16_t x3464 = -1;
	static int32_t t63 = -3217;

	t63 = (x3461%((x3462<=x3463)/x3464));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3565 = 19U;
	int32_t x3567 = 17329996;
	volatile int32_t x3568 = -1;
	volatile uint32_t t64 = 933480U;

	t64 = (x3565%((x3566<=x3567)/x3568));

	if (t64 != 19U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3629 = INT8_MAX;
	volatile int16_t x3631 = 193;
	int16_t x3632 = 1;
	volatile int32_t t65 = -1;

	t65 = (x3629%((x3630<=x3631)/x3632));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3634 = 31U;
	uint32_t x3635 = UINT32_MAX;
	int64_t x3636 = -1LL;
	volatile uint64_t t66 = 841978102241LLU;

	t66 = (x3633%((x3634<=x3635)/x3636));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3649 = -1;
	int64_t x3650 = -21980275723165985LL;
	static int16_t x3652 = -1;

	t67 = (x3649%((x3650<=x3651)/x3652));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3657 = INT64_MIN;
	int8_t x3658 = INT8_MAX;
	static int64_t t68 = 1316LL;

	t68 = (x3657%((x3658<=x3659)/x3660));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3693 = 20U;
	static int16_t x3694 = INT16_MIN;
	uint8_t x3695 = 14U;
	static int32_t x3696 = -1;
	int32_t t69 = 2482012;

	t69 = (x3693%((x3694<=x3695)/x3696));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3781 = 63;
	int32_t x3782 = INT32_MIN;
	uint16_t x3783 = UINT16_MAX;
	int64_t x3784 = -1LL;

	t70 = (x3781%((x3782<=x3783)/x3784));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3797 = 0LLU;
	static volatile int64_t x3798 = INT64_MIN;
	static int8_t x3800 = -1;

	t71 = (x3797%((x3798<=x3799)/x3800));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x3821 = 19U;
	uint64_t x3822 = 0LLU;
	int64_t x3823 = -1LL;
	int8_t x3824 = -1;
	volatile uint32_t t72 = 0U;

	t72 = (x3821%((x3822<=x3823)/x3824));

	if (t72 != 19U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x3893 = 889904012LLU;
	volatile int8_t x3894 = INT8_MIN;
	volatile uint64_t t73 = 257LLU;

	t73 = (x3893%((x3894<=x3895)/x3896));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3953 = 358715;
	volatile int8_t x3954 = INT8_MAX;
	int32_t x3955 = INT32_MAX;
	int64_t x3956 = -1LL;
	int64_t t74 = 503140784729LL;

	t74 = (x3953%((x3954<=x3955)/x3956));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3957 = 3257723949LL;
	uint8_t x3958 = 11U;
	static int16_t x3959 = INT16_MAX;
	volatile int64_t x3960 = -1LL;
	int64_t t75 = 7165661LL;

	t75 = (x3957%((x3958<=x3959)/x3960));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3977 = UINT64_MAX;
	static int16_t x3978 = -3;
	static uint8_t x3979 = 7U;
	static int32_t x3980 = -1;

	t76 = (x3977%((x3978<=x3979)/x3980));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x3993 = 14;
	int16_t x3994 = INT16_MIN;
	static int64_t x3996 = -1LL;
	int64_t t77 = -1442838LL;

	t77 = (x3993%((x3994<=x3995)/x3996));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4113 = 7;
	int8_t x4114 = INT8_MIN;
	static volatile uint32_t x4115 = UINT32_MAX;
	int64_t x4116 = -1LL;
	volatile int64_t t78 = 277577263309LL;

	t78 = (x4113%((x4114<=x4115)/x4116));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x4153 = 571170830767594035LL;
	volatile int16_t x4154 = -6225;
	int64_t x4155 = -1LL;
	static int32_t x4156 = -1;
	int64_t t79 = -153475977515666902LL;

	t79 = (x4153%((x4154<=x4155)/x4156));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4189 = 5;
	int32_t x4190 = INT32_MIN;
	volatile int16_t x4191 = INT16_MIN;
	volatile int16_t x4192 = -1;
	volatile int32_t t80 = 25;

	t80 = (x4189%((x4190<=x4191)/x4192));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4209 = INT16_MIN;
	static volatile int64_t x4210 = INT64_MIN;
	int16_t x4211 = 1580;
	int8_t x4212 = -1;
	static int32_t t81 = -216;

	t81 = (x4209%((x4210<=x4211)/x4212));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4217 = -9LL;
	int8_t x4218 = -1;
	static volatile int32_t x4219 = -1;
	int16_t x4220 = -1;
	static volatile int64_t t82 = 596115973187779805LL;

	t82 = (x4217%((x4218<=x4219)/x4220));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x4233 = 30118627;
	static int32_t x4234 = INT32_MIN;
	int64_t x4235 = INT64_MAX;
	volatile int64_t x4236 = -1LL;
	int64_t t83 = 212806133301264809LL;

	t83 = (x4233%((x4234<=x4235)/x4236));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x4261 = INT32_MIN;
	int8_t x4262 = -2;
	int16_t x4263 = 13;
	volatile int8_t x4264 = -1;
	volatile int32_t t84 = 2;

	t84 = (x4261%((x4262<=x4263)/x4264));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4337 = -56;
	static uint16_t x4339 = UINT16_MAX;
	int16_t x4340 = -1;
	volatile int32_t t85 = -166;

	t85 = (x4337%((x4338<=x4339)/x4340));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4369 = UINT32_MAX;
	volatile int8_t x4371 = INT8_MAX;
	static int32_t x4372 = -1;
	volatile uint32_t t86 = 119623367U;

	t86 = (x4369%((x4370<=x4371)/x4372));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x4441 = 16352U;
	uint8_t x4443 = 6U;
	volatile int64_t t87 = 1643821LL;

	t87 = (x4441%((x4442<=x4443)/x4444));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x4481 = UINT16_MAX;
	int64_t x4482 = INT64_MIN;
	uint8_t x4483 = UINT8_MAX;
	uint8_t x4484 = 1U;
	volatile int32_t t88 = -3;

	t88 = (x4481%((x4482<=x4483)/x4484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4506 = INT8_MIN;
	int8_t x4507 = -24;
	static volatile int32_t x4508 = -1;
	int32_t t89 = -262850726;

	t89 = (x4505%((x4506<=x4507)/x4508));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4638 = 15716549U;
	int8_t x4639 = -1;
	int8_t x4640 = -1;
	static int32_t t90 = 16795;

	t90 = (x4637%((x4638<=x4639)/x4640));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x4711 = 3335249063802799LLU;
	uint64_t t91 = 212528LLU;

	t91 = (x4709%((x4710<=x4711)/x4712));

	if (t91 != 1050046176441LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4737 = 2U;
	int8_t x4738 = INT8_MIN;
	volatile int8_t x4739 = INT8_MIN;
	int32_t x4740 = -1;
	volatile int32_t t92 = 423;

	t92 = (x4737%((x4738<=x4739)/x4740));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4785 = INT8_MIN;
	static volatile int8_t x4786 = -1;
	volatile int16_t x4787 = 11840;
	int16_t x4788 = -1;
	static int32_t t93 = 1;

	t93 = (x4785%((x4786<=x4787)/x4788));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x4797 = INT32_MIN;
	int16_t x4798 = 256;
	static int8_t x4800 = -1;
	int32_t t94 = 0;

	t94 = (x4797%((x4798<=x4799)/x4800));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4805 = INT32_MIN;
	volatile int8_t x4806 = -1;
	int32_t x4808 = -1;
	volatile int32_t t95 = -4;

	t95 = (x4805%((x4806<=x4807)/x4808));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x4929 = INT64_MIN;
	int32_t x4931 = -1;
	static uint16_t x4932 = 1U;
	volatile int64_t t96 = 58703597LL;

	t96 = (x4929%((x4930<=x4931)/x4932));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4957 = INT16_MAX;
	int64_t x4958 = -1LL;
	static volatile uint8_t x4959 = UINT8_MAX;
	int16_t x4960 = -1;
	int32_t t97 = -309721636;

	t97 = (x4957%((x4958<=x4959)/x4960));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x4965 = 1U;
	uint8_t x4966 = 122U;
	static volatile uint16_t x4967 = UINT16_MAX;
	volatile int32_t t98 = 171;

	t98 = (x4965%((x4966<=x4967)/x4968));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5017 = -19;
	volatile uint8_t x5018 = 0U;
	static int8_t x5020 = -1;

	t99 = (x5017%((x5018<=x5019)/x5020));

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


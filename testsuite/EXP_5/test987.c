#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x25 = -1;
volatile int32_t t2 = -11244775;
uint8_t x109 = 1U;
static volatile int64_t t4 = -127447105059LL;
uint8_t x251 = 1U;
int16_t x252 = -1;
int16_t x265 = INT16_MAX;
static uint32_t x305 = 25U;
int16_t x308 = INT16_MIN;
uint16_t x462 = UINT16_MAX;
int32_t x497 = -1;
volatile uint64_t x498 = 3459380629365852403LLU;
volatile int8_t x500 = INT8_MIN;
uint16_t x730 = UINT16_MAX;
uint64_t x732 = 2376LLU;
volatile int8_t x824 = -1;
static volatile uint64_t t17 = 2214157846728LLU;
volatile uint32_t x837 = 1635U;
int8_t x914 = INT8_MAX;
uint64_t x922 = 93LLU;
int8_t x923 = 1;
volatile uint64_t x938 = 214941721LLU;
volatile uint64_t t22 = 7668204LLU;
uint8_t x1229 = UINT8_MAX;
uint32_t x1254 = 810U;
int16_t x1275 = 0;
uint16_t x1317 = 3U;
volatile int16_t x1319 = 1;
uint32_t x1458 = UINT32_MAX;
uint64_t x1750 = 17214930507LLU;
volatile uint64_t t34 = 4341994272685LLU;
static uint32_t x1937 = 7U;
volatile uint64_t x1938 = UINT64_MAX;
int64_t t37 = 12LL;
static volatile int8_t x1989 = INT8_MIN;
volatile uint8_t x1991 = 2U;
int16_t x2144 = INT16_MAX;
volatile uint64_t t44 = 107LLU;
uint64_t x2232 = 201430711783253653LLU;
int8_t x2239 = 2;
volatile int16_t x2355 = 2;
volatile int64_t t48 = 62481621234811LL;
int8_t x2437 = INT8_MAX;
int32_t x2555 = 10;
static uint32_t x2556 = 5064U;
uint64_t t52 = 1LLU;
volatile uint64_t x2605 = 42409238748857LLU;
uint64_t t53 = 169643953718LLU;
int32_t t55 = 7068353;
static uint16_t x2703 = 3U;
uint8_t x2742 = UINT8_MAX;
int16_t x2744 = 0;
volatile uint8_t x2747 = 14U;
int64_t t58 = INT64_MAX;
static int32_t x2792 = -656399272;
volatile int64_t t60 = INT64_MIN;
int64_t x3004 = 63944419053286902LL;
uint8_t x3031 = 3U;
int8_t x3032 = INT8_MAX;
uint64_t x3086 = 0LLU;
uint8_t x3088 = 54U;
uint64_t x3183 = 3LLU;
static volatile int64_t t64 = -933783693LL;
int8_t x3223 = 10;
int64_t x3297 = -1LL;
int16_t x3298 = 2;
volatile int64_t t66 = -150462592LL;
int8_t x3478 = INT8_MAX;
int8_t x3557 = -25;
static volatile uint8_t x3558 = UINT8_MAX;
static uint16_t x3609 = UINT16_MAX;
volatile uint8_t x3666 = 1U;
volatile uint64_t x3714 = 87177358488454414LLU;
int16_t x3716 = -5751;
int32_t x3722 = INT32_MAX;
volatile int32_t x3724 = -907;
int8_t x3762 = INT8_MAX;
int16_t x3764 = INT16_MIN;
uint16_t x3890 = 2U;
static uint32_t x4134 = 267162050U;
int64_t x4285 = INT64_MAX;
uint32_t x4286 = UINT32_MAX;
uint32_t x4287 = 2U;
volatile int64_t t84 = INT64_MAX;
uint64_t x4390 = UINT64_MAX;
uint8_t x4391 = 10U;
int8_t x4392 = -4;
int16_t x4509 = INT16_MIN;
int8_t x4512 = INT8_MAX;
volatile int32_t t86 = 0;
int16_t x4564 = -17;
int32_t x4616 = -1;
int32_t x4647 = 0;
int16_t x4678 = INT16_MAX;
static uint64_t x4825 = 405861387892776118LLU;
static uint16_t x4826 = 878U;
static uint8_t x4893 = 15U;
int64_t x4894 = 123522669LL;
int8_t x4913 = -7;
volatile uint64_t x4916 = 3651952886974LLU;
uint32_t x4951 = 1U;
static int8_t x5017 = -1;
uint64_t x5028 = 544679068265906LLU;


void f0(void) {
	int32_t x5 = -1;
	uint16_t x6 = 784U;
	uint8_t x7 = 1U;
	int32_t x8 = INT32_MIN;
	int32_t t0 = 0;

	t0 = (x5|((x6<<x7)&x8));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x26 = 26U;
	volatile uint8_t x27 = 2U;
	uint64_t x28 = 5332308LLU;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x25|((x26<<x27)&x28));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x49 = 998U;
	int8_t x50 = INT8_MAX;
	static volatile uint16_t x51 = 22U;
	int16_t x52 = -675;

	t2 = (x49|((x50<<x51)&x52));

	if (t2 != 532677606) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x73 = -1;
	uint16_t x74 = 699U;
	int16_t x75 = 1;
	int16_t x76 = INT16_MIN;
	int32_t t3 = 28;

	t3 = (x73|((x74<<x75)&x76));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x110 = 452517LL;
	uint8_t x111 = 19U;
	uint8_t x112 = 15U;

	t4 = (x109|((x110<<x111)&x112));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x249 = INT8_MIN;
	static uint16_t x250 = 205U;
	volatile int32_t t5 = 698;

	t5 = (x249|((x250<<x251)&x252));

	if (t5 != -102) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x266 = 8145738921106383684LLU;
	uint8_t x267 = 13U;
	uint64_t x268 = UINT64_MAX;
	uint64_t t6 = 50993328181705LLU;

	t6 = (x265|((x266<<x267)&x268));

	if (t6 != 8019927096046977023LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x301 = 71U;
	static uint32_t x302 = 10126U;
	static uint8_t x303 = 21U;
	int64_t x304 = -1LL;
	int64_t t7 = -360664066LL;

	t7 = (x301|((x302<<x303)&x304));

	if (t7 != 4055892039LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x306 = 1;
	int32_t x307 = 0;
	uint32_t t8 = 250600U;

	t8 = (x305|((x306<<x307)&x308));

	if (t8 != 25U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x381 = INT64_MIN;
	int32_t x382 = 248;
	static int8_t x383 = 18;
	int16_t x384 = INT16_MIN;
	static int64_t t9 = 399011324LL;

	t9 = (x381|((x382<<x383)&x384));

	if (t9 != -9223372036789764096LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x430 = 16U;
	int16_t x431 = 1;
	uint8_t x432 = 53U;
	uint32_t t10 = 1497U;

	t10 = (x429|((x430<<x431)&x432));

	if (t10 != 2147483680U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x461 = -932387044702LL;
	volatile int16_t x463 = 2;
	int8_t x464 = INT8_MIN;
	volatile int64_t t11 = 26273LL;

	t11 = (x461|((x462<<x463)&x464));

	if (t11 != -932386963550LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x499 = 1;
	uint64_t t12 = UINT64_MAX;

	t12 = (x497|((x498<<x499)&x500));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x501 = INT64_MAX;
	volatile uint8_t x502 = UINT8_MAX;
	volatile int8_t x503 = 1;
	volatile uint32_t x504 = 174837U;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x501|((x502<<x503)&x504));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x729 = UINT32_MAX;
	int8_t x731 = 0;
	volatile uint64_t t14 = 30203029588LLU;

	t14 = (x729|((x730<<x731)&x732));

	if (t14 != 4294967295LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x793 = INT32_MIN;
	volatile int8_t x794 = 1;
	uint8_t x795 = 6U;
	uint64_t x796 = UINT64_MAX;
	static volatile uint64_t t15 = 46829445LLU;

	t15 = (x793|((x794<<x795)&x796));

	if (t15 != 18446744071562068032LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x801 = -1;
	int8_t x802 = INT8_MAX;
	int32_t x803 = 2;
	int32_t x804 = -137899;
	int32_t t16 = 26;

	t16 = (x801|((x802<<x803)&x804));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x821 = INT16_MIN;
	uint64_t x822 = 195LLU;
	static volatile uint8_t x823 = 35U;

	t17 = (x821|((x822<<x823)&x824));

	if (t17 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x838 = 10915U;
	volatile uint8_t x839 = 12U;
	static volatile int64_t x840 = -172865978154438LL;
	volatile int64_t t18 = 12169LL;

	t18 = (x837|((x838<<x839)&x840));

	if (t18 != 8521315LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x873 = 99LL;
	uint16_t x874 = 10U;
	int32_t x875 = 6;
	uint64_t x876 = 7532140LLU;
	volatile uint64_t t19 = 5994987864383665407LLU;

	t19 = (x873|((x874<<x875)&x876));

	if (t19 != 611LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x913 = INT16_MIN;
	static volatile int8_t x915 = 1;
	int64_t x916 = INT64_MAX;
	volatile int64_t t20 = 0LL;

	t20 = (x913|((x914<<x915)&x916));

	if (t20 != -32514LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x921 = 13981U;
	int32_t x924 = INT32_MAX;
	uint64_t t21 = 1414576702094418761LLU;

	t21 = (x921|((x922<<x923)&x924));

	if (t21 != 14015LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x937 = UINT32_MAX;
	int8_t x939 = 1;
	int64_t x940 = -2169LL;

	t22 = (x937|((x938<<x939)&x940));

	if (t22 != 4294967295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1189 = UINT16_MAX;
	uint64_t x1190 = 29384LLU;
	uint16_t x1191 = 7U;
	uint16_t x1192 = 1U;
	static uint64_t t23 = 54870518619206169LLU;

	t23 = (x1189|((x1190<<x1191)&x1192));

	if (t23 != 65535LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1230 = 23626647153LL;
	int32_t x1231 = 11;
	int8_t x1232 = -1;
	volatile int64_t t24 = -404LL;

	t24 = (x1229|((x1230<<x1231)&x1232));

	if (t24 != 48387373369599LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1241 = -1;
	int8_t x1242 = INT8_MAX;
	uint8_t x1243 = 6U;
	volatile int16_t x1244 = 2;
	volatile int32_t t25 = 123;

	t25 = (x1241|((x1242<<x1243)&x1244));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1253 = -90711954958786LL;
	volatile uint8_t x1255 = 0U;
	int16_t x1256 = INT16_MIN;
	static volatile int64_t t26 = 8784130941LL;

	t26 = (x1253|((x1254<<x1255)&x1256));

	if (t26 != -90711954958786LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1273 = 6U;
	int32_t x1274 = 1;
	static volatile int16_t x1276 = -5762;
	static volatile int32_t t27 = -177846;

	t27 = (x1273|((x1274<<x1275)&x1276));

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1318 = 25333710456188060LLU;
	uint32_t x1320 = 26587U;
	volatile uint64_t t28 = 4007888740403388LLU;

	t28 = (x1317|((x1318<<x1319)&x1320));

	if (t28 != 16667LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1393 = 151U;
	int16_t x1394 = 124;
	int16_t x1395 = 0;
	static uint64_t x1396 = 23852847LLU;
	volatile uint64_t t29 = 769459688599LLU;

	t29 = (x1393|((x1394<<x1395)&x1396));

	if (t29 != 191LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1433 = 111;
	uint16_t x1434 = 31884U;
	uint16_t x1435 = 4U;
	static volatile uint32_t x1436 = UINT32_MAX;
	volatile uint32_t t30 = 3U;

	t30 = (x1433|((x1434<<x1435)&x1436));

	if (t30 != 510191U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x1457 = 0U;
	static uint64_t x1459 = 0LLU;
	int64_t x1460 = 2007844044589LL;
	volatile int64_t t31 = 95433LL;

	t31 = (x1457|((x1458<<x1459)&x1460));

	if (t31 != 2094317357LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1481 = -1LL;
	static volatile int16_t x1482 = INT16_MAX;
	static uint16_t x1483 = 4U;
	int32_t x1484 = 609871;
	volatile int64_t t32 = 112LL;

	t32 = (x1481|((x1482<<x1483)&x1484));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1749 = INT32_MIN;
	int32_t x1751 = 0;
	static uint8_t x1752 = 48U;
	uint64_t t33 = 1915478LLU;

	t33 = (x1749|((x1750<<x1751)&x1752));

	if (t33 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1917 = -357LL;
	uint32_t x1918 = UINT32_MAX;
	uint32_t x1919 = 1U;
	uint64_t x1920 = 454LLU;

	t34 = (x1917|((x1918<<x1919)&x1920));

	if (t34 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1925 = INT8_MAX;
	uint32_t x1926 = 1U;
	uint8_t x1927 = 7U;
	static int16_t x1928 = INT16_MIN;
	volatile uint32_t t35 = 3763467U;

	t35 = (x1925|((x1926<<x1927)&x1928));

	if (t35 != 127U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1939 = 53;
	static uint8_t x1940 = 1U;
	static volatile uint64_t t36 = 680056403887LLU;

	t36 = (x1937|((x1938<<x1939)&x1940));

	if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1941 = 1954932924LL;
	uint16_t x1942 = UINT16_MAX;
	uint8_t x1943 = 6U;
	int64_t x1944 = 965LL;

	t37 = (x1941|((x1942<<x1943)&x1944));

	if (t37 != 1954933756LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1957 = INT16_MIN;
	int32_t x1958 = 19788;
	uint8_t x1959 = 0U;
	static volatile int64_t x1960 = -1LL;
	static volatile int64_t t38 = 2LL;

	t38 = (x1957|((x1958<<x1959)&x1960));

	if (t38 != -12980LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1990 = UINT64_MAX;
	static int8_t x1992 = INT8_MAX;
	uint64_t t39 = 18713762LLU;

	t39 = (x1989|((x1990<<x1991)&x1992));

	if (t39 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2005 = INT8_MIN;
	uint16_t x2006 = UINT16_MAX;
	volatile int8_t x2007 = 0;
	volatile int8_t x2008 = INT8_MIN;
	int32_t t40 = -108;

	t40 = (x2005|((x2006<<x2007)&x2008));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2017 = -75391504;
	static uint16_t x2018 = 7U;
	uint8_t x2019 = 3U;
	volatile int32_t x2020 = INT32_MIN;
	static int32_t t41 = -2214;

	t41 = (x2017|((x2018<<x2019)&x2020));

	if (t41 != -75391504) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2057 = 1U;
	uint64_t x2058 = 12604368903LLU;
	int8_t x2059 = 10;
	static volatile int8_t x2060 = INT8_MIN;
	volatile uint64_t t42 = 1256426002171747LLU;

	t42 = (x2057|((x2058<<x2059)&x2060));

	if (t42 != 12906873756673LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2141 = INT64_MIN;
	volatile int16_t x2142 = 105;
	uint8_t x2143 = 1U;
	volatile int64_t t43 = -98885914954836143LL;

	t43 = (x2141|((x2142<<x2143)&x2144));

	if (t43 != -9223372036854775598LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2205 = 19U;
	uint64_t x2206 = 2191419LLU;
	uint32_t x2207 = 2U;
	uint8_t x2208 = 24U;

	t44 = (x2205|((x2206<<x2207)&x2208));

	if (t44 != 27LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2229 = 463581LL;
	uint8_t x2230 = 1U;
	volatile uint32_t x2231 = 0U;
	static volatile uint64_t t45 = 7493157322LLU;

	t45 = (x2229|((x2230<<x2231)&x2232));

	if (t45 != 463581LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2237 = INT16_MIN;
	volatile uint32_t x2238 = 1U;
	int64_t x2240 = -1LL;
	volatile int64_t t46 = -1423183LL;

	t46 = (x2237|((x2238<<x2239)&x2240));

	if (t46 != -32764LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2313 = -1;
	static uint16_t x2314 = UINT16_MAX;
	uint32_t x2315 = 3U;
	int32_t x2316 = INT32_MIN;
	volatile int32_t t47 = -3;

	t47 = (x2313|((x2314<<x2315)&x2316));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2353 = 0U;
	int64_t x2354 = 209142811253743096LL;
	static volatile int8_t x2356 = INT8_MIN;

	t48 = (x2353|((x2354<<x2355)&x2356));

	if (t48 != 836571245014972288LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2361 = INT16_MIN;
	uint16_t x2362 = 28650U;
	static int32_t x2363 = 1;
	static uint8_t x2364 = UINT8_MAX;
	int32_t t49 = 44425136;

	t49 = (x2361|((x2362<<x2363)&x2364));

	if (t49 != -32556) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2438 = 87U;
	static uint8_t x2439 = 1U;
	static int32_t x2440 = INT32_MIN;
	int32_t t50 = -236118258;

	t50 = (x2437|((x2438<<x2439)&x2440));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2453 = 902131U;
	static int64_t x2454 = 36469513256LL;
	static int32_t x2455 = 7;
	static uint16_t x2456 = UINT16_MAX;
	static int64_t t51 = -62974496026128LL;

	t51 = (x2453|((x2454<<x2455)&x2456));

	if (t51 != 907251LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2553 = 118894703351187335LLU;
	static uint8_t x2554 = 84U;

	t52 = (x2553|((x2554<<x2555)&x2556));

	if (t52 != 118894703351191431LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2606 = UINT64_MAX;
	static uint64_t x2607 = 2LLU;
	int8_t x2608 = -1;

	t53 = (x2605|((x2606<<x2607)&x2608));

	if (t53 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2625 = UINT8_MAX;
	int64_t x2626 = 1571146872LL;
	static uint64_t x2627 = 0LLU;
	int16_t x2628 = INT16_MAX;
	static int64_t t54 = 14214043245914732LL;

	t54 = (x2625|((x2626<<x2627)&x2628));

	if (t54 != 19711LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2669 = 0U;
	uint8_t x2670 = 0U;
	uint64_t x2671 = 2LLU;
	volatile int8_t x2672 = -1;

	t55 = (x2669|((x2670<<x2671)&x2672));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2701 = -1LL;
	static int64_t x2702 = 7LL;
	uint16_t x2704 = 2U;
	volatile int64_t t56 = -1825450159LL;

	t56 = (x2701|((x2702<<x2703)&x2704));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2741 = INT64_MIN;
	uint8_t x2743 = 8U;
	int64_t t57 = INT64_MIN;

	t57 = (x2741|((x2742<<x2743)&x2744));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2745 = INT64_MAX;
	int64_t x2746 = 4LL;
	uint32_t x2748 = 620266591U;

	t58 = (x2745|((x2746<<x2747)&x2748));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2789 = 227051U;
	static uint8_t x2790 = 0U;
	int32_t x2791 = 0;
	uint32_t t59 = 1396097701U;

	t59 = (x2789|((x2790<<x2791)&x2792));

	if (t59 != 227051U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x2889 = INT64_MIN;
	uint32_t x2890 = UINT32_MAX;
	static uint8_t x2891 = 28U;
	int16_t x2892 = INT16_MAX;

	t60 = (x2889|((x2890<<x2891)&x2892));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3001 = 3251U;
	uint16_t x3002 = 2U;
	static int16_t x3003 = 2;
	volatile int64_t t61 = -153840800098445597LL;

	t61 = (x3001|((x3002<<x3003)&x3004));

	if (t61 != 3251LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x3029 = -788;
	uint32_t x3030 = 5530U;
	uint32_t t62 = 31U;

	t62 = (x3029|((x3030<<x3031)&x3032));

	if (t62 != 4294966524U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3085 = UINT32_MAX;
	static volatile int8_t x3087 = 6;
	static volatile uint64_t t63 = 2890725LLU;

	t63 = (x3085|((x3086<<x3087)&x3088));

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3181 = -1;
	uint16_t x3182 = UINT16_MAX;
	int64_t x3184 = -5830407LL;

	t64 = (x3181|((x3182<<x3183)&x3184));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3221 = 0;
	uint64_t x3222 = UINT64_MAX;
	volatile int64_t x3224 = 4403LL;
	uint64_t t65 = 19LLU;

	t65 = (x3221|((x3222<<x3223)&x3224));

	if (t65 != 4096LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3299 = 1U;
	int8_t x3300 = 0;

	t66 = (x3297|((x3298<<x3299)&x3300));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3369 = 76160106LLU;
	uint32_t x3370 = 370U;
	int32_t x3371 = 31;
	int32_t x3372 = INT32_MAX;
	volatile uint64_t t67 = 3264379LLU;

	t67 = (x3369|((x3370<<x3371)&x3372));

	if (t67 != 76160106LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3477 = INT16_MIN;
	int8_t x3479 = 0;
	uint16_t x3480 = 1380U;
	volatile int32_t t68 = 28865;

	t68 = (x3477|((x3478<<x3479)&x3480));

	if (t68 != -32668) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3517 = 20653895029922743LLU;
	int8_t x3518 = INT8_MAX;
	static volatile uint16_t x3519 = 9U;
	int32_t x3520 = INT32_MIN;
	volatile uint64_t t69 = 873344353457604LLU;

	t69 = (x3517|((x3518<<x3519)&x3520));

	if (t69 != 20653895029922743LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3559 = 8;
	volatile uint32_t x3560 = UINT32_MAX;
	volatile uint32_t t70 = 1000819885U;

	t70 = (x3557|((x3558<<x3559)&x3560));

	if (t70 != 4294967271U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3610 = 282;
	uint8_t x3611 = 1U;
	int64_t x3612 = INT64_MIN;
	int64_t t71 = 2102248LL;

	t71 = (x3609|((x3610<<x3611)&x3612));

	if (t71 != 65535LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3665 = 1;
	int32_t x3667 = 8;
	volatile int8_t x3668 = INT8_MIN;
	static volatile int32_t t72 = -21273962;

	t72 = (x3665|((x3666<<x3667)&x3668));

	if (t72 != 257) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3713 = INT8_MIN;
	volatile int8_t x3715 = 14;
	volatile uint64_t t73 = 2700LLU;

	t73 = (x3713|((x3714<<x3715)&x3716));

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x3721 = INT64_MIN;
	static int8_t x3723 = 0;
	int64_t t74 = -30762784755073LL;

	t74 = (x3721|((x3722<<x3723)&x3724));

	if (t74 != -9223372034707293067LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3761 = INT8_MIN;
	volatile int8_t x3763 = 20;
	static volatile int32_t t75 = -163;

	t75 = (x3761|((x3762<<x3763)&x3764));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3781 = UINT32_MAX;
	static int16_t x3782 = INT16_MAX;
	int8_t x3783 = 0;
	int64_t x3784 = INT64_MIN;
	int64_t t76 = -1096031289107LL;

	t76 = (x3781|((x3782<<x3783)&x3784));

	if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3889 = INT8_MIN;
	static volatile int8_t x3891 = 2;
	volatile int8_t x3892 = INT8_MAX;
	int32_t t77 = 1042825;

	t77 = (x3889|((x3890<<x3891)&x3892));

	if (t77 != -120) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3937 = UINT16_MAX;
	volatile uint32_t x3938 = 178654U;
	uint8_t x3939 = 9U;
	volatile int32_t x3940 = -1;
	uint32_t t78 = 524910334U;

	t78 = (x3937|((x3938<<x3939)&x3940));

	if (t78 != 91488255U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4029 = INT8_MAX;
	static volatile uint8_t x4030 = UINT8_MAX;
	static uint16_t x4031 = 0U;
	int32_t x4032 = INT32_MIN;
	static volatile int32_t t79 = -377725249;

	t79 = (x4029|((x4030<<x4031)&x4032));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x4045 = -1;
	volatile uint64_t x4046 = 17468139930591769LLU;
	uint16_t x4047 = 8U;
	int8_t x4048 = 1;
	uint64_t t80 = UINT64_MAX;

	t80 = (x4045|((x4046<<x4047)&x4048));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4133 = 3;
	uint8_t x4135 = 28U;
	int32_t x4136 = -1;
	uint32_t t81 = 0U;

	t81 = (x4133|((x4134<<x4135)&x4136));

	if (t81 != 536870915U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4157 = 23U;
	int32_t x4158 = INT32_MAX;
	int8_t x4159 = 0;
	volatile int32_t x4160 = -7238237;
	int32_t t82 = -171898;

	t82 = (x4157|((x4158<<x4159)&x4160));

	if (t82 != 2140245431) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4165 = -1;
	uint64_t x4166 = 204913980LLU;
	uint8_t x4167 = 13U;
	int16_t x4168 = -1;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x4165|((x4166<<x4167)&x4168));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4288 = 3U;

	t84 = (x4285|((x4286<<x4287)&x4288));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4389 = INT8_MIN;
	volatile uint64_t t85 = 8345584871975LLU;

	t85 = (x4389|((x4390<<x4391)&x4392));

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x4510 = 3U;
	int8_t x4511 = 14;

	t86 = (x4509|((x4510<<x4511)&x4512));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4561 = -6;
	volatile uint8_t x4562 = 7U;
	int16_t x4563 = 11;
	int32_t t87 = 736;

	t87 = (x4561|((x4562<<x4563)&x4564));

	if (t87 != -6) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4613 = INT32_MIN;
	uint32_t x4614 = UINT32_MAX;
	int8_t x4615 = 14;
	uint32_t t88 = 926U;

	t88 = (x4613|((x4614<<x4615)&x4616));

	if (t88 != 4294950912U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4645 = INT32_MIN;
	uint32_t x4646 = 148U;
	volatile int32_t x4648 = INT32_MIN;
	uint32_t t89 = 1U;

	t89 = (x4645|((x4646<<x4647)&x4648));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4657 = 357637694047LLU;
	uint64_t x4658 = 14354129200098431LLU;
	int8_t x4659 = 24;
	int32_t x4660 = INT32_MIN;
	static volatile uint64_t t90 = 476677302LLU;

	t90 = (x4657|((x4658<<x4659)&x4660));

	if (t90 != 82200035908788831LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4677 = INT64_MIN;
	volatile int16_t x4679 = 6;
	int8_t x4680 = INT8_MAX;
	volatile int64_t t91 = 3153628LL;

	t91 = (x4677|((x4678<<x4679)&x4680));

	if (t91 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4827 = 1U;
	volatile int64_t x4828 = INT64_MAX;
	uint64_t t92 = 5710053LLU;

	t92 = (x4825|((x4826<<x4827)&x4828));

	if (t92 != 405861387892776702LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4895 = 1U;
	int32_t x4896 = INT32_MAX;
	volatile int64_t t93 = -106261853877001109LL;

	t93 = (x4893|((x4894<<x4895)&x4896));

	if (t93 != 247045343LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4914 = 7;
	uint8_t x4915 = 1U;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x4913|((x4914<<x4915)&x4916));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x4949 = 55;
	static uint64_t x4950 = UINT64_MAX;
	int32_t x4952 = INT32_MIN;
	static volatile uint64_t t95 = 93LLU;

	t95 = (x4949|((x4950<<x4951)&x4952));

	if (t95 != 18446744071562068023LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5018 = 0LL;
	uint64_t x5019 = 1LLU;
	uint8_t x5020 = 53U;
	volatile int64_t t96 = -6531131042586LL;

	t96 = (x5017|((x5018<<x5019)&x5020));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5025 = -1;
	uint64_t x5026 = 2105519858626374782LLU;
	int8_t x5027 = 3;
	uint64_t t97 = UINT64_MAX;

	t97 = (x5025|((x5026<<x5027)&x5028));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x5077 = 4585647;
	static uint32_t x5078 = 159996592U;
	static uint8_t x5079 = 3U;
	int8_t x5080 = -18;
	uint32_t t98 = 50429866U;

	t98 = (x5077|((x5078<<x5079)&x5080));

	if (t98 != 1280310703U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5085 = INT32_MIN;
	volatile int16_t x5086 = 1;
	int8_t x5087 = 19;
	int8_t x5088 = INT8_MIN;
	int32_t t99 = -961;

	t99 = (x5085|((x5086<<x5087)&x5088));

	if (t99 != -2146959360) { NG(); } else { ; }
	
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


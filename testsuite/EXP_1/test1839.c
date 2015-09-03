#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x29 = 0;
uint8_t x32 = 14U;
static volatile int32_t t0 = -9;
volatile uint8_t x40 = 1U;
int32_t t1 = -24322311;
int16_t x283 = 0;
static volatile uint64_t t4 = 12925536785LLU;
uint8_t x394 = 22U;
uint8_t x441 = 100U;
uint64_t x442 = 829232LLU;
int16_t x489 = INT16_MAX;
volatile int32_t t9 = -14040;
volatile uint64_t t11 = UINT64_MAX;
int8_t x1260 = 0;
static int16_t x1293 = 0;
int32_t x1323 = INT32_MAX;
static volatile uint64_t t19 = 29149994818796395LLU;
volatile int16_t x1387 = -34;
uint32_t x1394 = 46209232U;
int64_t x1402 = INT64_MIN;
uint32_t x1467 = 162181U;
int32_t x1476 = 1;
uint8_t x1664 = 20U;
uint8_t x1687 = 15U;
int8_t x1762 = INT8_MIN;
int8_t x1764 = 2;
int32_t t30 = 2868;
static int64_t x1862 = -22154466198759957LL;
uint16_t x1904 = 6U;
uint32_t x1938 = 14223715U;
static uint64_t t35 = 135641702728LLU;
volatile int64_t x2030 = INT64_MIN;
static volatile uint64_t x2031 = 344037884172LLU;
uint8_t x2222 = 60U;
uint8_t x2384 = 10U;
uint32_t x2422 = 368415U;
uint8_t x2423 = 11U;
int32_t x2497 = INT32_MIN;
int16_t x2499 = 14;
uint32_t x2548 = 1U;
volatile int8_t x2795 = INT8_MAX;
int8_t x2837 = -1;
static volatile uint8_t x2840 = 3U;
int32_t t47 = 13306386;
int16_t x2905 = -1;
volatile int16_t x2907 = -1;
volatile uint32_t t49 = 14786829U;
uint16_t x2928 = 0U;
static int32_t t50 = -40512;
uint64_t x3018 = 54048561341625LLU;
volatile uint64_t x3041 = UINT64_MAX;
uint8_t x3042 = 98U;
static int16_t x3043 = INT16_MIN;
int16_t x3123 = INT16_MAX;
uint64_t x3234 = 113831LLU;
static volatile int16_t x3235 = -2046;
static int64_t x3246 = -1LL;
static uint64_t x3247 = UINT64_MAX;
uint32_t x3431 = UINT32_MAX;
int16_t x3611 = INT16_MIN;
volatile uint64_t t59 = 250LLU;
uint64_t x3662 = 942LLU;
static volatile uint64_t t62 = 486056365LLU;
int16_t x3697 = INT16_MIN;
int32_t x3700 = 5;
int64_t x3745 = -1LL;
volatile uint64_t x3746 = 180672238LLU;
uint32_t x3795 = 283U;
volatile uint32_t t67 = 7U;
uint32_t x3854 = 103U;
uint8_t x3856 = 23U;
int32_t x4006 = -1;
uint32_t x4132 = 4U;
volatile int8_t x4240 = 6;
volatile uint64_t t72 = 506153887LLU;
volatile uint32_t x4464 = 5U;
uint8_t x4614 = UINT8_MAX;
uint8_t x4616 = 0U;
uint64_t t74 = 280800907128870LLU;
volatile uint8_t x4661 = 75U;
uint32_t x4662 = 1671118U;
uint64_t x4793 = UINT64_MAX;
static volatile int8_t x4795 = INT8_MAX;
uint8_t x4864 = 0U;
uint16_t x4870 = UINT16_MAX;
static int8_t x4871 = 56;
uint32_t x5042 = 51006950U;
int32_t x5166 = -37108;
static int16_t x5168 = 2;
uint32_t t84 = 1194891478U;
uint16_t x5288 = 10U;
uint64_t x5334 = 32147974142LLU;
static int64_t x5390 = -4237736406989980799LL;
volatile int64_t x5391 = 1545LL;
uint8_t x5392 = 6U;
int16_t x5474 = -1;
static volatile uint8_t x5524 = 0U;
static int32_t t91 = -22808804;
uint16_t x5540 = 0U;
volatile uint32_t t92 = 14709952U;
int64_t x5545 = -1844657LL;
volatile int64_t t93 = -714981806LL;
volatile uint64_t t96 = 1413644517634LLU;
volatile uint8_t x5735 = UINT8_MAX;
volatile uint16_t x5834 = 26059U;
int8_t x5897 = -1;
uint64_t t99 = 42313235496657393LLU;


void f0(void) {
	static int8_t x30 = 40;
	uint16_t x31 = UINT16_MAX;

	t0 = (((x29&x30)|x31)<<x32);

	if (t0 != 1073725440) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x37 = INT32_MAX;
	uint16_t x38 = 124U;
	int8_t x39 = 0;

	t1 = (((x37&x38)|x39)<<x40);

	if (t1 != 248) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MAX;
	uint8_t x284 = 6U;
	volatile int64_t t2 = 3801516340234353LL;

	t2 = (((x281&x282)|x283)<<x284);

	if (t2 != 2097088LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x301 = 9206986U;
	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	static volatile uint16_t x304 = 0U;
	volatile int64_t t3 = INT64_MAX;

	t3 = (((x301&x302)|x303)<<x304);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x321 = UINT16_MAX;
	int64_t x322 = INT64_MAX;
	static volatile uint64_t x323 = 34412782LLU;
	uint8_t x324 = 14U;

	t4 = (((x321&x322)|x323)<<x324);

	if (t4 != 564788183040LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x393 = -4095;
	uint64_t x395 = 222723LLU;
	static volatile int8_t x396 = 0;
	static uint64_t t5 = 2297LLU;

	t5 = (((x393&x394)|x395)<<x396);

	if (t5 != 222723LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x417 = UINT16_MAX;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = UINT64_MAX;
	uint8_t x420 = 9U;
	uint64_t t6 = 37315159058LLU;

	t6 = (((x417&x418)|x419)<<x420);

	if (t6 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x443 = -14;
	int16_t x444 = 39;
	volatile uint64_t t7 = 1700461574827LLU;

	t7 = (((x441&x442)|x443)<<x444);

	if (t7 != 18446736377128157184LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x445 = 6U;
	static int64_t x446 = -8947103585LL;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = 3U;
	static volatile int64_t t8 = -708LL;

	t8 = (((x445&x446)|x447)<<x448);

	if (t8 != 2040LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x490 = 55U;
	uint16_t x491 = UINT16_MAX;
	uint32_t x492 = 2U;

	t9 = (((x489&x490)|x491)<<x492);

	if (t9 != 262140) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MAX;
	int8_t x511 = -3;
	volatile int8_t x512 = 4;
	uint64_t t10 = 952687746001590LLU;

	t10 = (((x509&x510)|x511)<<x512);

	if (t10 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = 7U;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = 0;

	t11 = (((x565&x566)|x567)<<x568);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x849 = 25U;
	static int8_t x850 = INT8_MIN;
	uint32_t x851 = UINT32_MAX;
	int8_t x852 = 0;
	uint32_t t12 = UINT32_MAX;

	t12 = (((x849&x850)|x851)<<x852);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x873 = 6947864190LLU;
	int64_t x874 = -1LL;
	volatile uint32_t x875 = UINT32_MAX;
	int8_t x876 = 21;
	volatile uint64_t t13 = 19810156LLU;

	t13 = (((x873&x874)|x875)<<x876);

	if (t13 != 18014398507384832LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x933 = INT16_MAX;
	int32_t x934 = INT32_MIN;
	uint16_t x935 = UINT16_MAX;
	static volatile uint8_t x936 = 12U;
	volatile int32_t t14 = -144091914;

	t14 = (((x933&x934)|x935)<<x936);

	if (t14 != 268431360) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1237 = 1344U;
	static int8_t x1238 = -14;
	int8_t x1239 = INT8_MAX;
	uint64_t x1240 = 17LLU;
	volatile uint32_t t15 = 458U;

	t15 = (((x1237&x1238)|x1239)<<x1240);

	if (t15 != 184418304U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1257 = 30U;
	static volatile int32_t x1258 = INT32_MAX;
	volatile uint8_t x1259 = 1U;
	int32_t t16 = 11488477;

	t16 = (((x1257&x1258)|x1259)<<x1260);

	if (t16 != 31) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1269 = UINT8_MAX;
	int32_t x1270 = INT32_MIN;
	uint16_t x1271 = 567U;
	volatile int8_t x1272 = 1;
	static int32_t t17 = -44;

	t17 = (((x1269&x1270)|x1271)<<x1272);

	if (t17 != 1134) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1294 = 7167705LLU;
	int32_t x1295 = -1;
	static uint16_t x1296 = 4U;
	uint64_t t18 = 8926831248181352LLU;

	t18 = (((x1293&x1294)|x1295)<<x1296);

	if (t18 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1321 = INT8_MIN;
	static uint64_t x1322 = 1437698LLU;
	int16_t x1324 = 1;

	t19 = (((x1321&x1322)|x1323)<<x1324);

	if (t19 != 4294967294LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1385 = UINT64_MAX;
	volatile uint32_t x1386 = 41232U;
	static uint8_t x1388 = 1U;
	volatile uint64_t t20 = 27LLU;

	t20 = (((x1385&x1386)|x1387)<<x1388);

	if (t20 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1393 = 8;
	int32_t x1395 = 53585;
	int8_t x1396 = 0;
	uint32_t t21 = 128730U;

	t21 = (((x1393&x1394)|x1395)<<x1396);

	if (t21 != 53585U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1401 = 7685168071LLU;
	uint8_t x1403 = 12U;
	uint8_t x1404 = 60U;
	volatile uint64_t t22 = 61599LLU;

	t22 = (((x1401&x1402)|x1403)<<x1404);

	if (t22 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1465 = 0;
	int16_t x1466 = INT16_MIN;
	int8_t x1468 = 14;
	uint32_t t23 = 145837669U;

	t23 = (((x1465&x1466)|x1467)<<x1468);

	if (t23 != 2657173504U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1473 = 2U;
	int8_t x1474 = INT8_MIN;
	uint8_t x1475 = UINT8_MAX;
	int32_t t24 = -13811759;

	t24 = (((x1473&x1474)|x1475)<<x1476);

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1513 = INT64_MIN;
	uint64_t x1514 = 593023LLU;
	static uint8_t x1515 = UINT8_MAX;
	int8_t x1516 = 5;
	volatile uint64_t t25 = 4774LLU;

	t25 = (((x1513&x1514)|x1515)<<x1516);

	if (t25 != 8160LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1661 = INT16_MIN;
	static int8_t x1662 = INT8_MAX;
	uint32_t x1663 = 1965U;
	uint32_t t26 = 17964119U;

	t26 = (((x1661&x1662)|x1663)<<x1664);

	if (t26 != 2060451840U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1665 = INT8_MIN;
	uint8_t x1666 = 25U;
	static uint64_t x1667 = 1053865929272696881LLU;
	static uint32_t x1668 = 11U;
	static uint64_t t27 = 41723LLU;

	t27 = (((x1665&x1666)|x1667)<<x1668);

	if (t27 != 48366526465673216LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x1685 = INT16_MIN;
	int8_t x1686 = 2;
	uint64_t x1688 = 1LLU;
	volatile int32_t t28 = -718;

	t28 = (((x1685&x1686)|x1687)<<x1688);

	if (t28 != 30) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1693 = -266;
	volatile uint32_t x1694 = 870545362U;
	uint8_t x1695 = UINT8_MAX;
	static volatile int8_t x1696 = 0;
	uint32_t t29 = 5099067U;

	t29 = (((x1693&x1694)|x1695)<<x1696);

	if (t29 != 870545151U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1761 = 3U;
	int8_t x1763 = 51;

	t30 = (((x1761&x1762)|x1763)<<x1764);

	if (t30 != 204) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1765 = 25537U;
	volatile int32_t x1766 = INT32_MIN;
	uint32_t x1767 = UINT32_MAX;
	uint32_t x1768 = 24U;
	uint32_t t31 = 12044U;

	t31 = (((x1765&x1766)|x1767)<<x1768);

	if (t31 != 4278190080U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1801 = UINT16_MAX;
	static volatile int32_t x1802 = -1;
	uint8_t x1803 = UINT8_MAX;
	uint32_t x1804 = 2U;
	volatile int32_t t32 = 242867299;

	t32 = (((x1801&x1802)|x1803)<<x1804);

	if (t32 != 262140) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1861 = 7U;
	int16_t x1863 = INT16_MAX;
	uint16_t x1864 = 1U;
	volatile int64_t t33 = 497925581LL;

	t33 = (((x1861&x1862)|x1863)<<x1864);

	if (t33 != 65534LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1901 = -183926129;
	uint32_t x1902 = 439998U;
	int8_t x1903 = INT8_MIN;
	static volatile uint32_t t34 = 1U;

	t34 = (((x1901&x1902)|x1903)<<x1904);

	if (t34 != 4294960000U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1937 = 66379669706LLU;
	int8_t x1939 = INT8_MIN;
	static uint16_t x1940 = 4U;

	t35 = (((x1937&x1938)|x1939)<<x1940);

	if (t35 != 18446744073709550624LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1997 = 935044U;
	int64_t x1998 = 84304545542LL;
	uint64_t x1999 = 196036511348LLU;
	uint8_t x2000 = 2U;
	static uint64_t t36 = 553810585862635LLU;

	t36 = (((x1997&x1998)|x1999)<<x2000);

	if (t36 != 784146045392LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2029 = -1;
	int8_t x2032 = 1;
	uint64_t t37 = 4263996393436LLU;

	t37 = (((x2029&x2030)|x2031)<<x2032);

	if (t37 != 688075768344LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x2121 = INT32_MIN;
	volatile uint32_t x2122 = 34U;
	int16_t x2123 = INT16_MIN;
	int16_t x2124 = 0;
	uint32_t t38 = 1659030158U;

	t38 = (((x2121&x2122)|x2123)<<x2124);

	if (t38 != 4294934528U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2157 = 49561LL;
	uint64_t x2158 = UINT64_MAX;
	int64_t x2159 = 35927LL;
	uint8_t x2160 = 29U;
	uint64_t t39 = 201LLU;

	t39 = (((x2157&x2158)|x2159)<<x2160);

	if (t39 != 28294707675136LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2201 = -3866292;
	uint32_t x2202 = UINT32_MAX;
	int8_t x2203 = 1;
	static uint16_t x2204 = 0U;
	volatile uint32_t t40 = 10345U;

	t40 = (((x2201&x2202)|x2203)<<x2204);

	if (t40 != 4291101005U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x2221 = INT8_MIN;
	uint64_t x2223 = 93824864708966778LLU;
	uint8_t x2224 = 38U;
	volatile uint64_t t41 = 95LLU;

	t41 = (((x2221&x2222)|x2223)<<x2224);

	if (t41 != 355325324457672704LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2381 = UINT64_MAX;
	uint32_t x2382 = UINT32_MAX;
	volatile uint8_t x2383 = 90U;
	uint64_t t42 = 511828073788LLU;

	t42 = (((x2381&x2382)|x2383)<<x2384);

	if (t42 != 4398046510080LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x2421 = UINT64_MAX;
	uint8_t x2424 = 3U;
	uint64_t t43 = 3451835367482LLU;

	t43 = (((x2421&x2422)|x2423)<<x2424);

	if (t43 != 2947320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2498 = UINT64_MAX;
	uint8_t x2500 = 1U;
	volatile uint64_t t44 = 42LLU;

	t44 = (((x2497&x2498)|x2499)<<x2500);

	if (t44 != 18446744069414584348LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2545 = INT32_MIN;
	volatile int16_t x2546 = 1;
	uint32_t x2547 = UINT32_MAX;
	volatile uint32_t t45 = 1238U;

	t45 = (((x2545&x2546)|x2547)<<x2548);

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2793 = 1U;
	uint32_t x2794 = 3929389U;
	uint8_t x2796 = 13U;
	uint32_t t46 = 115U;

	t46 = (((x2793&x2794)|x2795)<<x2796);

	if (t46 != 1040384U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2838 = 28;
	int16_t x2839 = INT16_MAX;

	t47 = (((x2837&x2838)|x2839)<<x2840);

	if (t47 != 262136) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2849 = INT16_MAX;
	int8_t x2850 = -1;
	int8_t x2851 = 1;
	volatile uint8_t x2852 = 1U;
	static int32_t t48 = 210873800;

	t48 = (((x2849&x2850)|x2851)<<x2852);

	if (t48 != 65534) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2906 = 0U;
	uint16_t x2908 = 12U;

	t49 = (((x2905&x2906)|x2907)<<x2908);

	if (t49 != 4294963200U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2925 = INT16_MIN;
	uint8_t x2926 = 60U;
	static volatile int16_t x2927 = INT16_MAX;

	t50 = (((x2925&x2926)|x2927)<<x2928);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2981 = 0U;
	uint64_t x2982 = 4347LLU;
	static uint8_t x2983 = 0U;
	int16_t x2984 = 11;
	uint64_t t51 = 6094879096300212962LLU;

	t51 = (((x2981&x2982)|x2983)<<x2984);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3017 = UINT32_MAX;
	int8_t x3019 = 0;
	uint8_t x3020 = 1U;
	uint64_t t52 = 510367177088LLU;

	t52 = (((x3017&x3018)|x3019)<<x3020);

	if (t52 != 1385777522LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3044 = 1;
	volatile uint64_t t53 = 1174LLU;

	t53 = (((x3041&x3042)|x3043)<<x3044);

	if (t53 != 18446744073709486276LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3121 = INT32_MAX;
	uint16_t x3122 = UINT16_MAX;
	int8_t x3124 = 1;
	volatile int32_t t54 = 22706269;

	t54 = (((x3121&x3122)|x3123)<<x3124);

	if (t54 != 131070) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3233 = 5817773578LL;
	int16_t x3236 = 0;
	volatile uint64_t t55 = 6640584104964181290LLU;

	t55 = (((x3233&x3234)|x3235)<<x3236);

	if (t55 != 18446744073709550594LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3237 = INT16_MIN;
	static int32_t x3238 = INT32_MAX;
	static uint32_t x3239 = 17193U;
	int64_t x3240 = 22LL;
	volatile uint32_t t56 = 254U;

	t56 = (((x3237&x3238)|x3239)<<x3240);

	if (t56 != 3393191936U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3245 = UINT64_MAX;
	static uint64_t x3248 = 21LLU;
	uint64_t t57 = 2124LLU;

	t57 = (((x3245&x3246)|x3247)<<x3248);

	if (t57 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3429 = UINT16_MAX;
	int16_t x3430 = 2;
	int16_t x3432 = 1;
	volatile uint32_t t58 = 71429U;

	t58 = (((x3429&x3430)|x3431)<<x3432);

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3609 = 136757027352826074LLU;
	static volatile int32_t x3610 = INT32_MAX;
	uint8_t x3612 = 15U;

	t59 = (((x3609&x3610)|x3611)<<x3612);

	if (t59 != 18446744073314041856LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x3617 = UINT16_MAX;
	uint64_t x3618 = 10969498LLU;
	int16_t x3619 = -1;
	uint8_t x3620 = 59U;
	uint64_t t60 = 845LLU;

	t60 = (((x3617&x3618)|x3619)<<x3620);

	if (t60 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3661 = UINT64_MAX;
	uint16_t x3663 = 1579U;
	static uint64_t x3664 = 30LLU;
	uint64_t t61 = 10997LLU;

	t61 = (((x3661&x3662)|x3663)<<x3664);

	if (t61 != 2112050167808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3681 = 8U;
	int16_t x3682 = INT16_MIN;
	static uint64_t x3683 = 4210783490LLU;
	int64_t x3684 = 28LL;

	t62 = (((x3681&x3682)|x3683)<<x3684);

	if (t62 != 1130323586255421440LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x3698 = UINT8_MAX;
	static uint8_t x3699 = 7U;
	int32_t t63 = 219778487;

	t63 = (((x3697&x3698)|x3699)<<x3700);

	if (t63 != 224) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3709 = INT8_MIN;
	int32_t x3710 = INT32_MAX;
	uint32_t x3711 = 457032283U;
	int64_t x3712 = 0LL;
	uint32_t t64 = 1759875U;

	t64 = (((x3709&x3710)|x3711)<<x3712);

	if (t64 != 2147483611U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3747 = INT16_MIN;
	volatile int16_t x3748 = 6;
	static volatile uint64_t t65 = 385136463LLU;

	t65 = (((x3745&x3746)|x3747)<<x3748);

	if (t65 != 18446744073708878720LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3793 = INT16_MAX;
	volatile uint64_t x3794 = UINT64_MAX;
	uint16_t x3796 = 21U;
	volatile uint64_t t66 = 699453121346717144LLU;

	t66 = (((x3793&x3794)|x3795)<<x3796);

	if (t66 != 68717379584LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3849 = 428168741U;
	int16_t x3850 = INT16_MIN;
	int32_t x3851 = -1;
	int32_t x3852 = 26;

	t67 = (((x3849&x3850)|x3851)<<x3852);

	if (t67 != 4227858432U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3853 = UINT8_MAX;
	int32_t x3855 = -1;
	static volatile uint32_t t68 = 421U;

	t68 = (((x3853&x3854)|x3855)<<x3856);

	if (t68 != 4286578688U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4005 = 30U;
	uint32_t x4007 = 699182011U;
	int16_t x4008 = 1;
	uint32_t t69 = 8213U;

	t69 = (((x4005&x4006)|x4007)<<x4008);

	if (t69 != 1398364030U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x4129 = INT32_MAX;
	uint64_t x4130 = 10501825LLU;
	uint16_t x4131 = 1042U;
	uint64_t t70 = 49270583784455952LLU;

	t70 = (((x4129&x4130)|x4131)<<x4132);

	if (t70 != 168029488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x4237 = 171071U;
	uint64_t x4238 = 91734LLU;
	volatile int8_t x4239 = -1;
	static uint64_t t71 = 1169LLU;

	t71 = (((x4237&x4238)|x4239)<<x4240);

	if (t71 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4421 = 233424879761553602LLU;
	volatile int32_t x4422 = INT32_MIN;
	static volatile int32_t x4423 = 1291;
	uint8_t x4424 = 35U;

	t72 = (((x4421&x4422)|x4423)<<x4424);

	if (t72 != 44358422233088LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x4461 = INT8_MAX;
	volatile uint32_t x4462 = 928770U;
	volatile int16_t x4463 = INT16_MIN;
	volatile uint32_t t73 = 619445U;

	t73 = (((x4461&x4462)|x4463)<<x4464);

	if (t73 != 4293918784U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x4613 = 1660001599LLU;
	int32_t x4615 = INT32_MIN;

	t74 = (((x4613&x4614)|x4615)<<x4616);

	if (t74 != 18446744071562068031LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4663 = INT32_MIN;
	uint16_t x4664 = 2U;
	uint32_t t75 = 28327U;

	t75 = (((x4661&x4662)|x4663)<<x4664);

	if (t75 != 296U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4773 = 351LLU;
	int64_t x4774 = INT64_MIN;
	int16_t x4775 = -2;
	volatile int16_t x4776 = 5;
	uint64_t t76 = 31813565010296061LLU;

	t76 = (((x4773&x4774)|x4775)<<x4776);

	if (t76 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4794 = INT32_MIN;
	uint8_t x4796 = 6U;
	volatile uint64_t t77 = 160842426870097952LLU;

	t77 = (((x4793&x4794)|x4795)<<x4796);

	if (t77 != 18446743936270606272LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4861 = -2;
	volatile int32_t x4862 = INT32_MAX;
	uint64_t x4863 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x4861&x4862)|x4863)<<x4864);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4869 = INT64_MAX;
	static volatile uint8_t x4872 = 14U;
	volatile int64_t t79 = 44955LL;

	t79 = (((x4869&x4870)|x4871)<<x4872);

	if (t79 != 1073725440LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x5041 = UINT16_MAX;
	int32_t x5043 = 4934;
	static uint16_t x5044 = 0U;
	uint32_t t80 = 113464690U;

	t80 = (((x5041&x5042)|x5043)<<x5044);

	if (t80 != 24550U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5073 = INT8_MAX;
	uint64_t x5074 = UINT64_MAX;
	int32_t x5075 = -341;
	static int16_t x5076 = 6;
	static uint64_t t81 = 1809094902784575466LLU;

	t81 = (((x5073&x5074)|x5075)<<x5076);

	if (t81 != 18446744073709535168LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5113 = -6;
	volatile uint8_t x5114 = UINT8_MAX;
	int8_t x5115 = 0;
	uint32_t x5116 = 6U;
	int32_t t82 = -248060;

	t82 = (((x5113&x5114)|x5115)<<x5116);

	if (t82 != 16000) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x5141 = 38U;
	uint8_t x5142 = UINT8_MAX;
	static volatile uint32_t x5143 = 9U;
	int16_t x5144 = 0;
	volatile uint32_t t83 = 0U;

	t83 = (((x5141&x5142)|x5143)<<x5144);

	if (t83 != 47U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x5165 = 16136U;
	uint16_t x5167 = UINT16_MAX;

	t84 = (((x5165&x5166)|x5167)<<x5168);

	if (t84 != 262140U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x5237 = 2955707653096042384LLU;
	static uint8_t x5238 = UINT8_MAX;
	uint16_t x5239 = 23U;
	uint8_t x5240 = 0U;
	volatile uint64_t t85 = 3993820LLU;

	t85 = (((x5237&x5238)|x5239)<<x5240);

	if (t85 != 151LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x5285 = -458931LL;
	static volatile uint16_t x5286 = 18356U;
	static uint32_t x5287 = 299U;
	volatile int64_t t86 = -1246788113394529419LL;

	t86 = (((x5285&x5286)|x5287)<<x5288);

	if (t86 != 18660352LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5293 = UINT64_MAX;
	int64_t x5294 = INT64_MAX;
	int16_t x5295 = INT16_MIN;
	int8_t x5296 = 2;
	uint64_t t87 = 860LLU;

	t87 = (((x5293&x5294)|x5295)<<x5296);

	if (t87 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5333 = 0;
	int16_t x5335 = INT16_MIN;
	int16_t x5336 = 40;
	volatile uint64_t t88 = 39623170412363727LLU;

	t88 = (((x5333&x5334)|x5335)<<x5336);

	if (t88 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5389 = 1004;
	int64_t t89 = -173810605609LL;

	t89 = (((x5389&x5390)|x5391)<<x5392);

	if (t89 != 123456LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5473 = UINT8_MAX;
	static volatile uint32_t x5475 = UINT32_MAX;
	static uint8_t x5476 = 1U;
	uint32_t t90 = 43447U;

	t90 = (((x5473&x5474)|x5475)<<x5476);

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x5521 = 62U;
	int32_t x5522 = INT32_MIN;
	static volatile int8_t x5523 = INT8_MAX;

	t91 = (((x5521&x5522)|x5523)<<x5524);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5537 = 554U;
	uint32_t x5538 = 1147U;
	uint16_t x5539 = 10132U;

	t92 = (((x5537&x5538)|x5539)<<x5540);

	if (t92 != 10174U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5546 = 267U;
	int8_t x5547 = 14;
	volatile uint32_t x5548 = 13U;

	t93 = (((x5545&x5546)|x5547)<<x5548);

	if (t93 != 122880LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x5657 = 133793869U;
	static volatile int32_t x5658 = -1;
	static int32_t x5659 = -101246231;
	uint8_t x5660 = 0U;
	uint32_t t94 = 12U;

	t94 = (((x5657&x5658)|x5659)<<x5660);

	if (t94 != 4294941421U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5685 = INT32_MAX;
	uint64_t x5686 = 650162188199764LLU;
	static uint8_t x5687 = 3U;
	uint32_t x5688 = 18U;
	uint64_t t95 = 305LLU;

	t95 = (((x5685&x5686)|x5687)<<x5688);

	if (t95 != 203515370405888LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5709 = -2;
	int64_t x5710 = INT64_MIN;
	uint64_t x5711 = 18320LLU;
	static uint8_t x5712 = 3U;

	t96 = (((x5709&x5710)|x5711)<<x5712);

	if (t96 != 146560LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5733 = -1;
	uint32_t x5734 = 884372122U;
	int64_t x5736 = 31LL;
	volatile uint32_t t97 = 460584179U;

	t97 = (((x5733&x5734)|x5735)<<x5736);

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5833 = UINT64_MAX;
	int8_t x5835 = INT8_MAX;
	volatile int8_t x5836 = 25;
	uint64_t t98 = 134996484381071313LLU;

	t98 = (((x5833&x5834)|x5835)<<x5836);

	if (t98 != 876139773952LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5898 = 0U;
	volatile uint64_t x5899 = 1870622496353LLU;
	int8_t x5900 = 1;

	t99 = (((x5897&x5898)|x5899)<<x5900);

	if (t99 != 3741244992706LLU) { NG(); } else { ; }
	
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


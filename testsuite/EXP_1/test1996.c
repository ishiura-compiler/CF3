#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x79 = INT8_MAX;
int16_t x99 = -1;
volatile uint32_t t4 = 8U;
int64_t x125 = INT64_MIN;
uint64_t x182 = 489091859677683918LLU;
uint16_t x224 = 31U;
uint64_t x261 = UINT64_MAX;
int64_t t10 = -10096807631976328LL;
static int32_t x311 = INT32_MIN;
int16_t x377 = -61;
volatile int16_t x393 = INT16_MAX;
uint8_t x396 = 18U;
int8_t x402 = 2;
int32_t x429 = INT32_MAX;
int64_t x495 = -1LL;
static int64_t x496 = 0LL;
uint64_t x507 = 28922056738LLU;
static volatile int8_t x511 = -5;
volatile uint32_t t19 = 1U;
volatile uint8_t x520 = 0U;
int64_t t20 = 602143855349783LL;
static uint32_t x637 = 99909U;
int16_t x654 = -1;
uint16_t x820 = 3U;
volatile int32_t x889 = 14397;
volatile int32_t x892 = 1;
uint32_t x917 = UINT32_MAX;
int8_t x1117 = INT8_MAX;
int8_t x1119 = INT8_MIN;
uint32_t x1187 = UINT32_MAX;
volatile uint32_t t33 = 212288884U;
static uint64_t t35 = 1478862911942054685LLU;
int8_t x1236 = 29;
volatile uint64_t x1317 = 8155961LLU;
volatile uint64_t t38 = 5233724176588876LLU;
int16_t x1353 = -31;
int8_t x1363 = -1;
volatile int32_t x1453 = -1;
uint8_t x1455 = 5U;
volatile uint32_t t46 = 4U;
volatile uint64_t x1685 = UINT64_MAX;
uint8_t x1686 = 1U;
volatile int64_t x1745 = -841318232600068957LL;
static uint32_t x1746 = 52U;
static volatile int64_t t53 = 154095479LL;
int8_t x1822 = -1;
int16_t x1854 = INT16_MIN;
int32_t t55 = -594688650;
uint32_t x1933 = 1423U;
volatile uint8_t x1935 = 3U;
uint64_t t58 = 734LLU;
static int32_t x2058 = 224954649;
uint8_t x2060 = 0U;
uint64_t t59 = 92777326300LLU;
static uint16_t x2071 = 0U;
volatile int8_t x2136 = 7;
int64_t x2229 = 50616704211936385LL;
static int64_t x2231 = INT64_MAX;
uint16_t x2639 = 0U;
uint64_t x2679 = UINT64_MAX;
int64_t x2689 = INT64_MIN;
uint16_t x2690 = 370U;
static uint64_t x2691 = 15914248LLU;
static uint8_t x2692 = 12U;
uint16_t x2763 = UINT16_MAX;
static int16_t x2769 = INT16_MIN;
static volatile int32_t x2771 = INT32_MAX;
static uint8_t x2793 = 1U;
int64_t x2854 = -1LL;
int16_t x2865 = -1;
volatile int32_t x2866 = -6;
int64_t t81 = -319909436503205841LL;
uint64_t t83 = 550550297053LLU;
static uint8_t x2953 = 2U;
volatile int32_t x2955 = INT32_MIN;
uint8_t x2956 = 23U;
int16_t x2989 = -1;
volatile int16_t x2991 = INT16_MIN;
int32_t x3086 = INT32_MIN;
int32_t t86 = 1463;
volatile int8_t x3128 = 10;
volatile int64_t x3146 = -1LL;
uint64_t x3147 = 218042890953763LLU;
int8_t x3148 = 1;
static int16_t x3334 = INT16_MAX;
uint16_t x3335 = 12U;
volatile uint64_t t93 = 60316791270510LLU;
uint16_t x3527 = UINT16_MAX;
int64_t t95 = 827LL;
uint64_t x3581 = 30331LLU;
uint8_t x3652 = 16U;
volatile int32_t t98 = -54;


void f0(void) {
	int16_t x5 = -1;
	volatile int32_t x6 = -1;
	uint16_t x7 = 1193U;
	uint16_t x8 = 0U;
	static volatile int32_t t0 = 102266810;

	t0 = (((x5|x6)&x7)>>x8);

	if (t0 != 1193) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 993U;
	static int32_t x10 = 12269300;
	static int64_t x11 = 7LL;
	volatile int32_t x12 = 1;
	volatile int64_t t1 = 16912LL;

	t1 = (((x9|x10)&x11)>>x12);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x77 = INT32_MAX;
	static int32_t x78 = INT32_MIN;
	uint32_t x80 = 3U;
	volatile int32_t t2 = -335232;

	t2 = (((x77|x78)&x79)>>x80);

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;
	uint16_t x100 = 5U;
	volatile uint32_t t3 = 8U;

	t3 = (((x97|x98)&x99)>>x100);

	if (t3 != 134217727U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x117 = 405U;
	volatile int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 24U;

	t4 = (((x117|x118)&x119)>>x120);

	if (t4 != 255U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	int8_t x128 = 0;
	int64_t t5 = 40319559149229449LL;

	t5 = (((x125|x126)&x127)>>x128);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int64_t x183 = 8584671511LL;
	uint16_t x184 = 1U;
	static uint64_t t6 = 142981545767LLU;

	t6 = (((x181|x182)&x183)>>x184);

	if (t6 != 4292335755LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x221 = -1;
	volatile uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 63U;
	uint64_t t7 = 156110323LLU;

	t7 = (((x221|x222)&x223)>>x224);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x245 = 32239U;
	int8_t x246 = INT8_MIN;
	static volatile uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 2U;
	static volatile uint32_t t8 = 3508U;

	t8 = (((x245|x246)&x247)>>x248);

	if (t8 != 1073741819U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x262 = 0;
	int8_t x263 = -1;
	volatile int8_t x264 = 33;
	volatile uint64_t t9 = 10761LLU;

	t9 = (((x261|x262)&x263)>>x264);

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MAX;
	uint8_t x308 = 3U;

	t10 = (((x305|x306)&x307)>>x308);

	if (t10 != 31LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x309 = 0;
	uint64_t x310 = 295283491428LLU;
	static uint8_t x312 = 25U;
	volatile uint64_t t11 = 49086LLU;

	t11 = (((x309|x310)&x311)>>x312);

	if (t11 != 8768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x378 = INT32_MAX;
	static volatile uint32_t x379 = UINT32_MAX;
	uint8_t x380 = 1U;
	volatile uint32_t t12 = 1412148017U;

	t12 = (((x377|x378)&x379)>>x380);

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x394 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	static volatile uint64_t t13 = 6001719LLU;

	t13 = (((x393|x394)&x395)>>x396);

	if (t13 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x401 = INT32_MAX;
	int64_t x403 = INT64_MIN;
	static int8_t x404 = 35;
	volatile int64_t t14 = -121636013870482LL;

	t14 = (((x401|x402)&x403)>>x404);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x425 = 10299U;
	volatile int16_t x426 = 2050;
	int32_t x427 = -1;
	int16_t x428 = 1;
	volatile uint32_t t15 = 19635U;

	t15 = (((x425|x426)&x427)>>x428);

	if (t15 != 5149U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = 3U;
	volatile uint64_t t16 = 527795462810880LLU;

	t16 = (((x429|x430)&x431)>>x432);

	if (t16 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x493 = 4452U;
	int8_t x494 = -1;
	volatile int64_t t17 = 2187790357014175LL;

	t17 = (((x493|x494)&x495)>>x496);

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MIN;
	static int16_t x508 = 63;
	volatile uint64_t t18 = 22LLU;

	t18 = (((x505|x506)&x507)>>x508);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x509 = 232U;
	volatile uint32_t x510 = 32U;
	int16_t x512 = 0;

	t19 = (((x509|x510)&x511)>>x512);

	if (t19 != 232U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x517 = UINT32_MAX;
	int32_t x518 = INT32_MIN;
	int64_t x519 = 1534LL;

	t20 = (((x517|x518)&x519)>>x520);

	if (t20 != 1534LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x638 = UINT16_MAX;
	int8_t x639 = INT8_MIN;
	volatile uint8_t x640 = 1U;
	uint32_t t21 = 2409427U;

	t21 = (((x637|x638)&x639)>>x640);

	if (t21 != 65472U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x653 = INT16_MIN;
	static uint8_t x655 = UINT8_MAX;
	int8_t x656 = 0;
	int32_t t22 = -104776201;

	t22 = (((x653|x654)&x655)>>x656);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x749 = INT16_MIN;
	static int64_t x750 = INT64_MIN;
	static uint64_t x751 = UINT64_MAX;
	uint8_t x752 = 0U;
	uint64_t t23 = 147752879623052264LLU;

	t23 = (((x749|x750)&x751)>>x752);

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x817 = UINT64_MAX;
	int8_t x818 = INT8_MAX;
	int16_t x819 = INT16_MIN;
	volatile uint64_t t24 = 6897427405275LLU;

	t24 = (((x817|x818)&x819)>>x820);

	if (t24 != 2305843009213689856LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x890 = 2170121351105469LL;
	uint64_t x891 = 15LLU;
	volatile uint64_t t25 = 30LLU;

	t25 = (((x889|x890)&x891)>>x892);

	if (t25 != 6LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x905 = 432508151;
	int16_t x906 = INT16_MIN;
	int8_t x907 = 40;
	volatile uint64_t x908 = 0LLU;
	int32_t t26 = -39850;

	t26 = (((x905|x906)&x907)>>x908);

	if (t26 != 32) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x918 = 10088U;
	volatile int64_t x919 = INT64_MAX;
	volatile uint8_t x920 = 2U;
	static int64_t t27 = -15LL;

	t27 = (((x917|x918)&x919)>>x920);

	if (t27 != 1073741823LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x993 = 1664;
	uint16_t x994 = 15856U;
	int16_t x995 = 611;
	int8_t x996 = 3;
	volatile int32_t t28 = -19;

	t28 = (((x993|x994)&x995)>>x996);

	if (t28 != 76) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1029 = INT32_MAX;
	int16_t x1030 = 1;
	volatile int32_t x1031 = 113492;
	int8_t x1032 = 0;
	volatile int32_t t29 = 1;

	t29 = (((x1029|x1030)&x1031)>>x1032);

	if (t29 != 113492) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1081 = 2;
	uint32_t x1082 = 32147687U;
	int64_t x1083 = INT64_MAX;
	int16_t x1084 = 15;
	volatile int64_t t30 = -732LL;

	t30 = (((x1081|x1082)&x1083)>>x1084);

	if (t30 != 981LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1105 = INT32_MIN;
	static volatile uint32_t x1106 = 35U;
	static int8_t x1107 = INT8_MIN;
	int8_t x1108 = 1;
	uint32_t t31 = 1565U;

	t31 = (((x1105|x1106)&x1107)>>x1108);

	if (t31 != 1073741824U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1118 = 14U;
	int64_t x1120 = 15LL;
	volatile int32_t t32 = -3828530;

	t32 = (((x1117|x1118)&x1119)>>x1120);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1185 = -17;
	uint32_t x1186 = 403U;
	static uint8_t x1188 = 4U;

	t33 = (((x1185|x1186)&x1187)>>x1188);

	if (t33 != 268435455U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1197 = -820;
	volatile int8_t x1198 = -2;
	int8_t x1199 = INT8_MAX;
	static uint8_t x1200 = 14U;
	int32_t t34 = 10450856;

	t34 = (((x1197|x1198)&x1199)>>x1200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1225 = INT8_MIN;
	uint64_t x1226 = UINT64_MAX;
	int8_t x1227 = INT8_MIN;
	uint8_t x1228 = 0U;

	t35 = (((x1225|x1226)&x1227)>>x1228);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1233 = INT16_MIN;
	uint32_t x1234 = 13789295U;
	int32_t x1235 = INT32_MAX;
	static uint32_t t36 = 328U;

	t36 = (((x1233|x1234)&x1235)>>x1236);

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1293 = 902;
	uint64_t x1294 = 64425136483599056LLU;
	volatile int32_t x1295 = -1;
	static uint8_t x1296 = 10U;
	uint64_t t37 = 2836992061969472LLU;

	t37 = (((x1293|x1294)&x1295)>>x1296);

	if (t37 != 62915172347264LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1318 = INT16_MIN;
	static volatile uint8_t x1319 = 43U;
	static uint32_t x1320 = 7U;

	t38 = (((x1317|x1318)&x1319)>>x1320);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1345 = UINT8_MAX;
	uint16_t x1346 = 24778U;
	uint32_t x1347 = 19U;
	uint16_t x1348 = 3U;
	volatile uint32_t t39 = 12267U;

	t39 = (((x1345|x1346)&x1347)>>x1348);

	if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1354 = INT64_MAX;
	int16_t x1355 = 32;
	uint32_t x1356 = 0U;
	int64_t t40 = -405629450224423LL;

	t40 = (((x1353|x1354)&x1355)>>x1356);

	if (t40 != 32LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1361 = 85;
	volatile uint64_t x1362 = UINT64_MAX;
	int8_t x1364 = 0;
	uint64_t t41 = UINT64_MAX;

	t41 = (((x1361|x1362)&x1363)>>x1364);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1381 = INT16_MIN;
	uint64_t x1382 = UINT64_MAX;
	static int64_t x1383 = 15658LL;
	int8_t x1384 = 7;
	uint64_t t42 = 2152368051385834LLU;

	t42 = (((x1381|x1382)&x1383)>>x1384);

	if (t42 != 122LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1454 = 15809121218141LLU;
	static volatile uint8_t x1456 = 15U;
	static volatile uint64_t t43 = 6027553LLU;

	t43 = (((x1453|x1454)&x1455)>>x1456);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x1485 = 112U;
	int32_t x1486 = 16;
	int64_t x1487 = INT64_MAX;
	int16_t x1488 = 6;
	static volatile int64_t t44 = 205LL;

	t44 = (((x1485|x1486)&x1487)>>x1488);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1501 = INT16_MIN;
	volatile int64_t x1502 = INT64_MAX;
	volatile uint32_t x1503 = 4950U;
	int8_t x1504 = 1;
	volatile int64_t t45 = -3410LL;

	t45 = (((x1501|x1502)&x1503)>>x1504);

	if (t45 != 2475LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1553 = INT8_MIN;
	uint16_t x1554 = 14U;
	uint32_t x1555 = UINT32_MAX;
	int64_t x1556 = 1LL;

	t46 = (((x1553|x1554)&x1555)>>x1556);

	if (t46 != 2147483591U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1597 = 15;
	int64_t x1598 = 3304770966581648148LL;
	uint8_t x1599 = 0U;
	int8_t x1600 = 58;
	static volatile int64_t t47 = 46601496LL;

	t47 = (((x1597|x1598)&x1599)>>x1600);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1625 = INT16_MIN;
	int64_t x1626 = INT64_MIN;
	int8_t x1627 = 5;
	volatile uint8_t x1628 = 0U;
	int64_t t48 = 10762384544LL;

	t48 = (((x1625|x1626)&x1627)>>x1628);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1641 = INT16_MAX;
	int8_t x1642 = 0;
	int8_t x1643 = -1;
	int16_t x1644 = 5;
	volatile int32_t t49 = -41;

	t49 = (((x1641|x1642)&x1643)>>x1644);

	if (t49 != 1023) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1687 = UINT32_MAX;
	uint16_t x1688 = 27U;
	uint64_t t50 = 8715036212303792430LLU;

	t50 = (((x1685|x1686)&x1687)>>x1688);

	if (t50 != 31LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1689 = INT8_MAX;
	int8_t x1690 = 1;
	int32_t x1691 = INT32_MIN;
	volatile uint8_t x1692 = 2U;
	int32_t t51 = 128348;

	t51 = (((x1689|x1690)&x1691)>>x1692);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1697 = 11301890U;
	volatile uint64_t x1698 = 52596682598547LLU;
	int8_t x1699 = -1;
	uint8_t x1700 = 0U;
	uint64_t t52 = 22833724649LLU;

	t52 = (((x1697|x1698)&x1699)>>x1700);

	if (t52 != 52596685241491LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1747 = 1205;
	int16_t x1748 = 0;

	t53 = (((x1745|x1746)&x1747)>>x1748);

	if (t53 != 1205LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1821 = 183U;
	int8_t x1823 = INT8_MAX;
	uint8_t x1824 = 30U;
	volatile uint32_t t54 = 3U;

	t54 = (((x1821|x1822)&x1823)>>x1824);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1853 = 428;
	volatile int8_t x1855 = INT8_MAX;
	uint16_t x1856 = 1U;

	t55 = (((x1853|x1854)&x1855)>>x1856);

	if (t55 != 22) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1889 = INT8_MIN;
	int8_t x1890 = -1;
	volatile int16_t x1891 = 1021;
	static int8_t x1892 = 3;
	int32_t t56 = -206890682;

	t56 = (((x1889|x1890)&x1891)>>x1892);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1934 = 1;
	int8_t x1936 = 1;
	volatile uint32_t t57 = 230729U;

	t57 = (((x1933|x1934)&x1935)>>x1936);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2045 = 380LL;
	int8_t x2046 = INT8_MIN;
	static uint64_t x2047 = 4795030282LLU;
	volatile uint32_t x2048 = 27U;

	t58 = (((x2045|x2046)&x2047)>>x2048);

	if (t58 != 35LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2057 = 12074315469421LLU;
	int16_t x2059 = -3873;

	t59 = (((x2057|x2058)&x2059)>>x2060);

	if (t59 != 12074451783773LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2069 = 42531838967LLU;
	int64_t x2070 = 246219584685381LL;
	int32_t x2072 = 2;
	volatile uint64_t t60 = 723435362353442859LLU;

	t60 = (((x2069|x2070)&x2071)>>x2072);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2133 = INT32_MIN;
	volatile uint8_t x2134 = UINT8_MAX;
	uint16_t x2135 = 5U;
	volatile int32_t t61 = 70914;

	t61 = (((x2133|x2134)&x2135)>>x2136);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2230 = INT8_MIN;
	uint8_t x2232 = 1U;
	volatile int64_t t62 = -51LL;

	t62 = (((x2229|x2230)&x2231)>>x2232);

	if (t62 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2241 = 0U;
	int32_t x2242 = -253388848;
	uint64_t x2243 = 3858644628804571LLU;
	uint16_t x2244 = 1U;
	volatile uint64_t t63 = 35107064LLU;

	t63 = (((x2241|x2242)&x2243)>>x2244);

	if (t63 != 1929322263742952LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2393 = -1;
	static int16_t x2394 = 1;
	static volatile uint8_t x2395 = 6U;
	uint64_t x2396 = 1LLU;
	volatile int32_t t64 = -151;

	t64 = (((x2393|x2394)&x2395)>>x2396);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2417 = 76U;
	int32_t x2418 = -1;
	int8_t x2419 = 0;
	static int32_t x2420 = 5;
	static volatile int32_t t65 = -150;

	t65 = (((x2417|x2418)&x2419)>>x2420);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2429 = INT16_MIN;
	uint32_t x2430 = 56U;
	int16_t x2431 = 0;
	volatile uint16_t x2432 = 30U;
	uint32_t t66 = 5122U;

	t66 = (((x2429|x2430)&x2431)>>x2432);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2473 = -252;
	int16_t x2474 = INT16_MIN;
	int16_t x2475 = INT16_MAX;
	uint64_t x2476 = 1LLU;
	static int32_t t67 = 40917775;

	t67 = (((x2473|x2474)&x2475)>>x2476);

	if (t67 != 16258) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2497 = 1064780799LL;
	int64_t x2498 = -3LL;
	uint16_t x2499 = 4226U;
	uint64_t x2500 = 24LLU;
	volatile int64_t t68 = 0LL;

	t68 = (((x2497|x2498)&x2499)>>x2500);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2561 = -1LL;
	static volatile int8_t x2562 = INT8_MIN;
	uint16_t x2563 = UINT16_MAX;
	uint8_t x2564 = 10U;
	volatile int64_t t69 = 7710346506131LL;

	t69 = (((x2561|x2562)&x2563)>>x2564);

	if (t69 != 63LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x2569 = 678070939U;
	volatile uint32_t x2570 = 992347558U;
	int8_t x2571 = INT8_MIN;
	int8_t x2572 = 0;
	uint32_t t70 = 703828242U;

	t70 = (((x2569|x2570)&x2571)>>x2572);

	if (t70 != 997101440U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2621 = -1;
	uint32_t x2622 = 853447U;
	static int32_t x2623 = 1298;
	uint8_t x2624 = 22U;
	uint32_t t71 = 342197U;

	t71 = (((x2621|x2622)&x2623)>>x2624);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2637 = -1;
	uint32_t x2638 = 537013U;
	static uint8_t x2640 = 25U;
	volatile uint32_t t72 = 39804024U;

	t72 = (((x2637|x2638)&x2639)>>x2640);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2677 = 11U;
	int8_t x2678 = INT8_MAX;
	uint16_t x2680 = 0U;
	uint64_t t73 = 991788854096LLU;

	t73 = (((x2677|x2678)&x2679)>>x2680);

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t t74 = 215224001LLU;

	t74 = (((x2689|x2690)&x2691)>>x2692);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x2709 = 23;
	uint32_t x2710 = 0U;
	uint64_t x2711 = 30707481802090901LLU;
	volatile uint16_t x2712 = 57U;
	uint64_t t75 = 24392202141373LLU;

	t75 = (((x2709|x2710)&x2711)>>x2712);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2761 = 61U;
	volatile uint8_t x2762 = 100U;
	int16_t x2764 = 0;
	volatile int32_t t76 = -11727821;

	t76 = (((x2761|x2762)&x2763)>>x2764);

	if (t76 != 125) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2770 = INT8_MIN;
	uint64_t x2772 = 7LLU;
	volatile int32_t t77 = 5;

	t77 = (((x2769|x2770)&x2771)>>x2772);

	if (t77 != 16777215) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2794 = INT16_MIN;
	uint8_t x2795 = 92U;
	uint8_t x2796 = 7U;
	volatile int32_t t78 = 419601;

	t78 = (((x2793|x2794)&x2795)>>x2796);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2853 = 106U;
	uint8_t x2855 = 20U;
	uint8_t x2856 = 15U;
	volatile int64_t t79 = -3LL;

	t79 = (((x2853|x2854)&x2855)>>x2856);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2861 = INT16_MIN;
	uint32_t x2862 = UINT32_MAX;
	int16_t x2863 = -5;
	uint8_t x2864 = 23U;
	uint32_t t80 = 51843U;

	t80 = (((x2861|x2862)&x2863)>>x2864);

	if (t80 != 511U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2867 = 28959LL;
	uint8_t x2868 = 2U;

	t81 = (((x2865|x2866)&x2867)>>x2868);

	if (t81 != 7239LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2897 = INT32_MIN;
	volatile uint32_t x2898 = UINT32_MAX;
	uint8_t x2899 = UINT8_MAX;
	volatile uint8_t x2900 = 2U;
	volatile uint32_t t82 = 101432U;

	t82 = (((x2897|x2898)&x2899)>>x2900);

	if (t82 != 63U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2917 = -1LL;
	static uint64_t x2918 = UINT64_MAX;
	static int16_t x2919 = -1;
	uint16_t x2920 = 3U;

	t83 = (((x2917|x2918)&x2919)>>x2920);

	if (t83 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2954 = UINT64_MAX;
	uint64_t t84 = 924245882LLU;

	t84 = (((x2953|x2954)&x2955)>>x2956);

	if (t84 != 2199023255296LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x2990 = UINT32_MAX;
	static int8_t x2992 = 9;
	static uint32_t t85 = 1U;

	t85 = (((x2989|x2990)&x2991)>>x2992);

	if (t85 != 8388544U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3085 = INT32_MIN;
	int32_t x3087 = INT32_MAX;
	static uint16_t x3088 = 1U;

	t86 = (((x3085|x3086)&x3087)>>x3088);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3125 = INT16_MIN;
	uint8_t x3126 = 14U;
	volatile int32_t x3127 = 4103335;
	int32_t t87 = 253946113;

	t87 = (((x3125|x3126)&x3127)>>x3128);

	if (t87 != 4000) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x3145 = UINT16_MAX;
	uint64_t t88 = 452588454181LLU;

	t88 = (((x3145|x3146)&x3147)>>x3148);

	if (t88 != 109021445476881LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3157 = -19;
	int32_t x3158 = INT32_MAX;
	int16_t x3159 = 465;
	static volatile int32_t x3160 = 2;
	int32_t t89 = -105;

	t89 = (((x3157|x3158)&x3159)>>x3160);

	if (t89 != 116) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3189 = -20;
	volatile uint64_t x3190 = 654553875760LLU;
	uint16_t x3191 = 2880U;
	int16_t x3192 = 1;
	volatile uint64_t t90 = 30462LLU;

	t90 = (((x3189|x3190)&x3191)>>x3192);

	if (t90 != 1440LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3201 = INT8_MAX;
	int32_t x3202 = 86091645;
	uint64_t x3203 = UINT64_MAX;
	uint32_t x3204 = 7U;
	uint64_t t91 = 14LLU;

	t91 = (((x3201|x3202)&x3203)>>x3204);

	if (t91 != 672590LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3333 = -58391;
	uint16_t x3336 = 11U;
	int32_t t92 = -2552246;

	t92 = (((x3333|x3334)&x3335)>>x3336);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x3353 = 309;
	static int8_t x3354 = INT8_MIN;
	static uint64_t x3355 = 358788671102LLU;
	volatile uint16_t x3356 = 46U;

	t93 = (((x3353|x3354)&x3355)>>x3356);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3357 = UINT8_MAX;
	int16_t x3358 = INT16_MIN;
	int64_t x3359 = INT64_MAX;
	uint8_t x3360 = 1U;
	int64_t t94 = 2355227898356528187LL;

	t94 = (((x3357|x3358)&x3359)>>x3360);

	if (t94 != 4611686018427371647LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3525 = -10LL;
	int64_t x3526 = INT64_MIN;
	uint8_t x3528 = 1U;

	t95 = (((x3525|x3526)&x3527)>>x3528);

	if (t95 != 32763LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3561 = -1;
	int32_t x3562 = INT32_MAX;
	uint64_t x3563 = UINT64_MAX;
	volatile int32_t x3564 = 1;
	uint64_t t96 = 0LLU;

	t96 = (((x3561|x3562)&x3563)>>x3564);

	if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3582 = 214U;
	uint16_t x3583 = UINT16_MAX;
	static int64_t x3584 = 8LL;
	uint64_t t97 = 117LLU;

	t97 = (((x3581|x3582)&x3583)>>x3584);

	if (t97 != 118LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x3649 = 0U;
	volatile int32_t x3650 = 63939;
	int32_t x3651 = 53;

	t98 = (((x3649|x3650)&x3651)>>x3652);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3893 = 350515195U;
	volatile uint32_t x3894 = 117957678U;
	int64_t x3895 = -289687338328LL;
	int8_t x3896 = 6;
	static int64_t t99 = -101882215638LL;

	t99 = (((x3893|x3894)&x3895)>>x3896);

	if (t99 != 1378314LL) { NG(); } else { ; }
	
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


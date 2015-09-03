#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x39 = -15;
int8_t x40 = 21;
volatile uint64_t t1 = 709LLU;
static uint32_t x56 = 15U;
static uint32_t t2 = 0U;
int32_t x62 = INT32_MAX;
uint16_t x140 = 4U;
int32_t x278 = -23441352;
int16_t x280 = 1;
uint32_t x455 = UINT32_MAX;
uint64_t x533 = UINT64_MAX;
volatile uint32_t t10 = 299U;
int32_t x570 = INT32_MIN;
volatile uint32_t x572 = 50U;
uint8_t x616 = 35U;
volatile int16_t x654 = 464;
volatile uint64_t t16 = 11161219589794LLU;
static uint64_t t17 = 521663737LLU;
int32_t x927 = -28530;
uint8_t x928 = 0U;
uint64_t x1186 = 204LLU;
static int64_t x1187 = INT64_MIN;
int32_t x1194 = INT32_MIN;
static volatile uint64_t x1195 = 20481LLU;
int8_t x1196 = 2;
static int16_t x1236 = 8;
int64_t x1250 = -1LL;
volatile int8_t x1251 = INT8_MIN;
int16_t x1255 = 1512;
static volatile uint64_t t28 = 15594432394218747LLU;
uint32_t x1354 = 49059181U;
static uint16_t x1456 = 0U;
static int16_t x1487 = -92;
static int32_t t33 = 0;
volatile uint8_t x1621 = 53U;
static uint8_t x1624 = 4U;
volatile int32_t x1679 = -30906;
volatile uint16_t x1680 = 61U;
uint32_t x1717 = 8173U;
uint32_t t40 = 6410U;
uint16_t x1747 = 6U;
volatile int8_t x1790 = 12;
int64_t x1816 = 0LL;
static uint32_t t44 = 24646U;
uint64_t x1937 = UINT64_MAX;
volatile uint32_t x1939 = 29869485U;
int32_t x1984 = 22;
volatile int32_t x2002 = INT32_MIN;
int16_t x2003 = -1;
static volatile int32_t t47 = -1605141;
uint64_t x2013 = 644886370LLU;
uint8_t x2144 = 1U;
int16_t x2369 = -1;
uint16_t x2370 = 265U;
uint64_t t53 = 173LLU;
static int32_t x2389 = -1;
static volatile int8_t x2391 = -1;
uint64_t x2442 = 17746LLU;
volatile uint64_t x2470 = UINT64_MAX;
uint64_t t58 = 315931LLU;
int32_t x2923 = INT32_MIN;
int64_t x2934 = INT64_MIN;
uint64_t x2946 = 9757739010165LLU;
int8_t x2953 = INT8_MIN;
uint64_t x2955 = UINT64_MAX;
int16_t x2956 = 19;
volatile uint64_t t64 = 3LLU;
int32_t x2988 = 1;
volatile uint64_t x3002 = 12LLU;
int64_t x3093 = 35329653723659512LL;
volatile int32_t x3266 = INT32_MIN;
int8_t x3361 = -18;
uint16_t x3414 = UINT16_MAX;
volatile int16_t x3415 = -1;
uint8_t x3416 = 24U;
uint8_t x3420 = 6U;
volatile uint64_t t72 = 415011337472LLU;
volatile int16_t x3425 = INT16_MAX;
int32_t x3428 = 2;
uint8_t x3488 = 0U;
int16_t x3559 = INT16_MAX;
int32_t x3593 = INT32_MIN;
uint16_t x3727 = 11U;
volatile uint64_t t81 = 130682957356LLU;
volatile int32_t x3739 = -97548013;
int32_t t82 = -13286141;
volatile uint16_t x3766 = UINT16_MAX;
uint32_t x3767 = 102752030U;
int64_t x3768 = 2LL;
uint32_t x3816 = 7U;
uint8_t x3840 = 7U;
volatile uint8_t x3868 = 21U;
uint64_t t87 = 2892956813354LLU;
int64_t x3941 = -32396053848LL;
int8_t x4009 = 16;
static uint8_t x4012 = 6U;
int64_t x4033 = 2094668437LL;
static int8_t x4099 = INT8_MIN;
volatile int32_t x4101 = -7;
uint16_t x4209 = 826U;
uint32_t x4212 = 13U;
int32_t x4230 = -13144468;
int32_t x4303 = -1;


void f0(void) {
	volatile int64_t x1 = -3033LL;
	int64_t x2 = -1LL;
	int8_t x3 = INT8_MIN;
	volatile int32_t x4 = 0;
	int64_t t0 = 20977617LL;

	t0 = (((x1/x2)-x3)>>x4);

	if (t0 != 3161LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x37 = 0LLU;
	int64_t x38 = INT64_MIN;

	t1 = (((x37/x38)-x39)>>x40);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MAX;

	t2 = (((x53/x54)-x55)>>x56);

	if (t2 != 1031U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x61 = 253804162U;
	static int32_t x63 = INT32_MIN;
	uint8_t x64 = 1U;
	uint32_t t3 = 6368695U;

	t3 = (((x61/x62)-x63)>>x64);

	if (t3 != 1073741824U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x137 = INT64_MIN;
	volatile uint32_t x138 = UINT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	volatile int64_t t4 = -1506LL;

	t4 = (((x137/x138)-x139)>>x140);

	if (t4 != 576460752169205760LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x217 = INT8_MIN;
	int32_t x218 = 163846552;
	volatile int64_t x219 = -1LL;
	uint64_t x220 = 11LLU;
	volatile int64_t t5 = -28369128022LL;

	t5 = (((x217/x218)-x219)>>x220);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x277 = 100859232872LLU;
	static uint16_t x279 = 120U;
	static volatile uint64_t t6 = 3673304445LLU;

	t6 = (((x277/x278)-x279)>>x280);

	if (t6 != 9223372036854775748LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x397 = -356;
	static uint16_t x398 = 781U;
	volatile int64_t x399 = -1LL;
	uint8_t x400 = 30U;
	static int64_t t7 = 19295344312780383LL;

	t7 = (((x397/x398)-x399)>>x400);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x453 = INT16_MIN;
	volatile uint8_t x454 = 5U;
	volatile uint8_t x456 = 12U;
	static volatile uint32_t t8 = 8869U;

	t8 = (((x453/x454)-x455)>>x456);

	if (t8 != 1048574U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x534 = 2142214;
	int64_t x535 = INT64_MIN;
	uint8_t x536 = 2U;
	uint64_t t9 = 824212LLU;

	t9 = (((x533/x534)-x535)>>x536);

	if (t9 != 2305845161979952797LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x549 = INT32_MIN;
	uint32_t x550 = 64575U;
	int8_t x551 = INT8_MIN;
	int8_t x552 = 10;

	t10 = (((x549/x550)-x551)>>x552);

	if (t10 != 32U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x569 = INT8_MIN;
	static uint64_t x571 = UINT64_MAX;
	volatile uint64_t t11 = 294792753147778LLU;

	t11 = (((x569/x570)-x571)>>x572);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x613 = 773U;
	static uint64_t x614 = 961330791213524150LLU;
	volatile uint16_t x615 = 313U;
	volatile uint64_t t12 = 1793068394693513LLU;

	t12 = (((x613/x614)-x615)>>x616);

	if (t12 != 536870911LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x617 = 336615087167322LLU;
	int64_t x618 = INT64_MIN;
	uint32_t x619 = UINT32_MAX;
	uint8_t x620 = 35U;
	uint64_t t13 = 22071930107884LLU;

	t13 = (((x617/x618)-x619)>>x620);

	if (t13 != 536870911LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x645 = 5619644LLU;
	uint32_t x646 = UINT32_MAX;
	uint32_t x647 = UINT32_MAX;
	volatile int8_t x648 = 46;
	volatile uint64_t t14 = 106245571743434LLU;

	t14 = (((x645/x646)-x647)>>x648);

	if (t14 != 262143LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x653 = -1;
	volatile int8_t x655 = INT8_MIN;
	static volatile int16_t x656 = 25;
	volatile int32_t t15 = -6;

	t15 = (((x653/x654)-x655)>>x656);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x765 = UINT32_MAX;
	static int16_t x766 = -1;
	static volatile uint64_t x767 = 407LLU;
	uint8_t x768 = 58U;

	t16 = (((x765/x766)-x767)>>x768);

	if (t16 != 63LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x785 = INT16_MAX;
	volatile uint64_t x786 = 452488LLU;
	volatile uint8_t x787 = 36U;
	static int16_t x788 = 1;

	t17 = (((x785/x786)-x787)>>x788);

	if (t17 != 9223372036854775790LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x897 = 865440;
	uint32_t x898 = 1U;
	uint32_t x899 = UINT32_MAX;
	uint8_t x900 = 0U;
	uint32_t t18 = 71U;

	t18 = (((x897/x898)-x899)>>x900);

	if (t18 != 865441U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x909 = INT64_MIN;
	int16_t x910 = INT16_MIN;
	int32_t x911 = INT32_MAX;
	static volatile int64_t x912 = 36LL;
	static int64_t t19 = 2824855LL;

	t19 = (((x909/x910)-x911)>>x912);

	if (t19 != 4095LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x925 = 23894U;
	int8_t x926 = 1;
	volatile uint32_t t20 = 590128U;

	t20 = (((x925/x926)-x927)>>x928);

	if (t20 != 52424U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x953 = -1LL;
	static volatile uint64_t x954 = 6248LLU;
	static uint32_t x955 = 1406611U;
	volatile uint8_t x956 = 57U;
	uint64_t t21 = 26674260793634LLU;

	t21 = (((x953/x954)-x955)>>x956);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1053 = INT16_MAX;
	uint32_t x1054 = 74349646U;
	int16_t x1055 = INT16_MAX;
	int8_t x1056 = 0;
	static uint32_t t22 = 3338937U;

	t22 = (((x1053/x1054)-x1055)>>x1056);

	if (t22 != 4294934529U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1169 = -652;
	static uint32_t x1170 = 127472U;
	volatile int32_t x1171 = INT32_MIN;
	uint16_t x1172 = 0U;
	volatile uint32_t t23 = 311482720U;

	t23 = (((x1169/x1170)-x1171)>>x1172);

	if (t23 != 2147517341U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1185 = 217;
	uint8_t x1188 = 3U;
	uint64_t t24 = 10730LLU;

	t24 = (((x1185/x1186)-x1187)>>x1188);

	if (t24 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1193 = INT64_MIN;
	uint64_t t25 = 18562638LLU;

	t25 = (((x1193/x1194)-x1195)>>x1196);

	if (t25 != 1073736703LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1233 = INT64_MAX;
	int8_t x1234 = INT8_MAX;
	volatile int16_t x1235 = 227;
	volatile int64_t t26 = 1366094041051LL;

	t26 = (((x1233/x1234)-x1235)>>x1236);

	if (t26 != 283691315109951LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1249 = -15;
	int8_t x1252 = 8;
	int64_t t27 = -14LL;

	t27 = (((x1249/x1250)-x1251)>>x1252);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1253 = INT32_MIN;
	uint64_t x1254 = 4514968401LLU;
	int8_t x1256 = 0;

	t28 = (((x1253/x1254)-x1255)>>x1256);

	if (t28 != 4085684684LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1353 = -2;
	volatile uint16_t x1355 = 0U;
	uint8_t x1356 = 3U;
	volatile uint32_t t29 = 24696U;

	t29 = (((x1353/x1354)-x1355)>>x1356);

	if (t29 != 10U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1393 = 2;
	uint64_t x1394 = UINT64_MAX;
	uint8_t x1395 = 5U;
	int8_t x1396 = 0;
	volatile uint64_t t30 = 8006466LLU;

	t30 = (((x1393/x1394)-x1395)>>x1396);

	if (t30 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1421 = INT16_MAX;
	uint64_t x1422 = UINT64_MAX;
	uint8_t x1423 = 13U;
	int16_t x1424 = 7;
	uint64_t t31 = 51828LLU;

	t31 = (((x1421/x1422)-x1423)>>x1424);

	if (t31 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1453 = 6;
	uint32_t x1454 = UINT32_MAX;
	int8_t x1455 = 1;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x1453/x1454)-x1455)>>x1456);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1485 = 1241981;
	static int32_t x1486 = 657;
	uint8_t x1488 = 15U;

	t33 = (((x1485/x1486)-x1487)>>x1488);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1617 = -1;
	volatile int8_t x1618 = INT8_MIN;
	volatile int32_t x1619 = -1;
	int16_t x1620 = 0;
	volatile int32_t t34 = -1831881;

	t34 = (((x1617/x1618)-x1619)>>x1620);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1622 = 16;
	int16_t x1623 = INT16_MIN;
	int32_t t35 = 15;

	t35 = (((x1621/x1622)-x1623)>>x1624);

	if (t35 != 2048) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1633 = -1LL;
	static uint8_t x1634 = 80U;
	volatile int32_t x1635 = INT32_MIN;
	uint8_t x1636 = 25U;
	volatile int64_t t36 = -25260199795LL;

	t36 = (((x1633/x1634)-x1635)>>x1636);

	if (t36 != 64LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1677 = -1;
	int64_t x1678 = INT64_MIN;
	static volatile int64_t t37 = 1LL;

	t37 = (((x1677/x1678)-x1679)>>x1680);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1685 = 93057454U;
	uint16_t x1686 = UINT16_MAX;
	static int32_t x1687 = INT32_MIN;
	uint16_t x1688 = 1U;
	uint32_t t38 = 2723U;

	t38 = (((x1685/x1686)-x1687)>>x1688);

	if (t38 != 1073742533U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x1693 = -67;
	uint8_t x1694 = 57U;
	uint32_t x1695 = UINT32_MAX;
	volatile uint16_t x1696 = 23U;
	volatile uint32_t t39 = 60616979U;

	t39 = (((x1693/x1694)-x1695)>>x1696);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1718 = -7;
	static int32_t x1719 = 114;
	int16_t x1720 = 1;

	t40 = (((x1717/x1718)-x1719)>>x1720);

	if (t40 != 2147483591U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1745 = INT64_MAX;
	int8_t x1746 = INT8_MAX;
	uint8_t x1748 = 20U;
	volatile int64_t t41 = 181923061639268LL;

	t41 = (((x1745/x1746)-x1747)>>x1748);

	if (t41 != 69260574978LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1789 = UINT16_MAX;
	uint8_t x1791 = UINT8_MAX;
	int8_t x1792 = 8;
	volatile int32_t t42 = 4;

	t42 = (((x1789/x1790)-x1791)>>x1792);

	if (t42 != 20) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x1813 = 2LLU;
	uint16_t x1814 = 7387U;
	int16_t x1815 = INT16_MIN;
	uint64_t t43 = 26LLU;

	t43 = (((x1813/x1814)-x1815)>>x1816);

	if (t43 != 32768LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1837 = UINT32_MAX;
	static uint16_t x1838 = 1812U;
	int16_t x1839 = 606;
	static uint64_t x1840 = 31LLU;

	t44 = (((x1837/x1838)-x1839)>>x1840);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x1938 = -1;
	int16_t x1940 = 57;
	volatile uint64_t t45 = 3597167124447978LLU;

	t45 = (((x1937/x1938)-x1939)>>x1940);

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1981 = INT8_MIN;
	int16_t x1982 = 966;
	int32_t x1983 = -1;
	int32_t t46 = 118078;

	t46 = (((x1981/x1982)-x1983)>>x1984);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2001 = -85;
	uint32_t x2004 = 8U;

	t47 = (((x2001/x2002)-x2003)>>x2004);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2014 = INT16_MIN;
	int32_t x2015 = INT32_MIN;
	static uint8_t x2016 = 14U;
	uint64_t t48 = 2585038LLU;

	t48 = (((x2013/x2014)-x2015)>>x2016);

	if (t48 != 131072LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2029 = -1;
	volatile int16_t x2030 = 13896;
	int8_t x2031 = INT8_MIN;
	uint16_t x2032 = 1U;
	int32_t t49 = 24;

	t49 = (((x2029/x2030)-x2031)>>x2032);

	if (t49 != 64) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x2141 = -15;
	uint32_t x2142 = 15893828U;
	volatile int32_t x2143 = -11944250;
	static volatile uint32_t t50 = 383410U;

	t50 = (((x2141/x2142)-x2143)>>x2144);

	if (t50 != 5972260U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2145 = 593325U;
	volatile int8_t x2146 = INT8_MIN;
	volatile int8_t x2147 = INT8_MIN;
	uint8_t x2148 = 6U;
	static volatile uint32_t t51 = 40752U;

	t51 = (((x2145/x2146)-x2147)>>x2148);

	if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2371 = -5;
	static uint8_t x2372 = 18U;
	static int32_t t52 = -57251;

	t52 = (((x2369/x2370)-x2371)>>x2372);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2381 = UINT64_MAX;
	uint64_t x2382 = 6119283LLU;
	int8_t x2383 = -2;
	uint16_t x2384 = 0U;

	t53 = (((x2381/x2382)-x2383)>>x2384);

	if (t53 != 3014527040785LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2390 = UINT64_MAX;
	volatile uint16_t x2392 = 1U;
	volatile uint64_t t54 = 224642894LLU;

	t54 = (((x2389/x2390)-x2391)>>x2392);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2441 = -1;
	volatile int32_t x2443 = -1;
	static int16_t x2444 = 0;
	volatile uint64_t t55 = 103969283551051LLU;

	t55 = (((x2441/x2442)-x2443)>>x2444);

	if (t55 != 1039487437941483LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2469 = -1;
	volatile int16_t x2471 = -1;
	static int32_t x2472 = 6;
	static uint64_t t56 = 21794307766236LLU;

	t56 = (((x2469/x2470)-x2471)>>x2472);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2593 = INT64_MAX;
	int8_t x2594 = 15;
	int16_t x2595 = -1;
	static volatile uint8_t x2596 = 1U;
	volatile int64_t t57 = 2912315325145579059LL;

	t57 = (((x2593/x2594)-x2595)>>x2596);

	if (t57 != 307445734561825860LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2617 = 3255536154225833LLU;
	volatile int32_t x2618 = -1;
	int64_t x2619 = -780817851LL;
	static uint16_t x2620 = 1U;

	t58 = (((x2617/x2618)-x2619)>>x2620);

	if (t58 != 390408925LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2661 = 6399U;
	int64_t x2662 = -10092829925666764LL;
	int8_t x2663 = -55;
	uint8_t x2664 = 27U;
	volatile int64_t t59 = 671673985135861LL;

	t59 = (((x2661/x2662)-x2663)>>x2664);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2905 = 52949440069906LLU;
	int64_t x2906 = INT64_MAX;
	uint8_t x2907 = UINT8_MAX;
	uint8_t x2908 = 7U;
	volatile uint64_t t60 = 2596231100888130573LLU;

	t60 = (((x2905/x2906)-x2907)>>x2908);

	if (t60 != 144115188075855870LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2921 = 87U;
	static int32_t x2922 = -1;
	uint8_t x2924 = 3U;
	int32_t t61 = 765440788;

	t61 = (((x2921/x2922)-x2923)>>x2924);

	if (t61 != 268435445) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2933 = -3408;
	volatile int8_t x2935 = INT8_MIN;
	static int8_t x2936 = 1;
	int64_t t62 = -4449126057961LL;

	t62 = (((x2933/x2934)-x2935)>>x2936);

	if (t62 != 64LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2945 = INT32_MAX;
	int64_t x2947 = -1LL;
	int16_t x2948 = 0;
	static uint64_t t63 = 402110111454LLU;

	t63 = (((x2945/x2946)-x2947)>>x2948);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2954 = -1;

	t64 = (((x2953/x2954)-x2955)>>x2956);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2985 = -108;
	int8_t x2986 = INT8_MIN;
	int8_t x2987 = -3;
	int32_t t65 = 865108747;

	t65 = (((x2985/x2986)-x2987)>>x2988);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3001 = INT8_MAX;
	uint32_t x3003 = 1959935066U;
	uint8_t x3004 = 3U;
	volatile uint64_t t66 = 96LLU;

	t66 = (((x3001/x3002)-x3003)>>x3004);

	if (t66 != 2305843008968702070LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3094 = 22U;
	int8_t x3095 = 31;
	volatile int8_t x3096 = 4;
	volatile int64_t t67 = -145304085643LL;

	t67 = (((x3093/x3094)-x3095)>>x3096);

	if (t67 != 100368334442212LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3193 = 90U;
	int64_t x3194 = INT64_MIN;
	uint64_t x3195 = 1174226645721205246LLU;
	uint8_t x3196 = 1U;
	uint64_t t68 = 4LLU;

	t68 = (((x3193/x3194)-x3195)>>x3196);

	if (t68 != 8636258713994173185LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x3265 = -1;
	static uint32_t x3267 = 58064U;
	static int32_t x3268 = 0;
	static uint32_t t69 = 76U;

	t69 = (((x3265/x3266)-x3267)>>x3268);

	if (t69 != 4294909232U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x3362 = -11439;
	volatile int8_t x3363 = INT8_MIN;
	uint8_t x3364 = 2U;
	int32_t t70 = 311;

	t70 = (((x3361/x3362)-x3363)>>x3364);

	if (t70 != 32) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3413 = 212645573297513269LLU;
	static uint64_t t71 = 234014LLU;

	t71 = (((x3413/x3414)-x3415)>>x3416);

	if (t71 != 193402LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3417 = -4;
	static uint64_t x3418 = 19553LLU;
	int8_t x3419 = INT8_MAX;

	t72 = (((x3417/x3418)-x3419)>>x3420);

	if (t72 != 14740979703967LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x3426 = 41U;
	volatile int8_t x3427 = -23;
	static volatile int32_t t73 = 8261;

	t73 = (((x3425/x3426)-x3427)>>x3428);

	if (t73 != 205) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3445 = INT32_MIN;
	int64_t x3446 = INT64_MAX;
	int16_t x3447 = INT16_MIN;
	volatile uint32_t x3448 = 24U;
	int64_t t74 = 7956LL;

	t74 = (((x3445/x3446)-x3447)>>x3448);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3485 = -7;
	volatile int16_t x3486 = -1;
	volatile uint32_t x3487 = 322416U;
	uint32_t t75 = 18U;

	t75 = (((x3485/x3486)-x3487)>>x3488);

	if (t75 != 4294644887U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x3557 = INT16_MAX;
	uint64_t x3558 = UINT64_MAX;
	int64_t x3560 = 14LL;
	volatile uint64_t t76 = 7817437LLU;

	t76 = (((x3557/x3558)-x3559)>>x3560);

	if (t76 != 1125899906842622LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3561 = INT64_MIN;
	static int32_t x3562 = INT32_MIN;
	static uint16_t x3563 = 65U;
	volatile uint32_t x3564 = 26U;
	volatile int64_t t77 = 3985814902463202600LL;

	t77 = (((x3561/x3562)-x3563)>>x3564);

	if (t77 != 63LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3569 = UINT16_MAX;
	int8_t x3570 = -1;
	int64_t x3571 = -105914534758LL;
	static uint8_t x3572 = 1U;
	static volatile int64_t t78 = 2678120154LL;

	t78 = (((x3569/x3570)-x3571)>>x3572);

	if (t78 != 52957234611LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x3594 = UINT8_MAX;
	volatile int64_t x3595 = INT64_MIN;
	static volatile uint16_t x3596 = 3U;
	volatile int64_t t79 = 8523098998724452LL;

	t79 = (((x3593/x3594)-x3595)>>x3596);

	if (t79 != 1152921504605794288LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3681 = 203U;
	uint64_t x3682 = 4805LLU;
	uint8_t x3683 = 3U;
	volatile int16_t x3684 = 63;
	uint64_t t80 = 6731694462175794476LLU;

	t80 = (((x3681/x3682)-x3683)>>x3684);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x3725 = 1;
	static volatile uint64_t x3726 = 4496147835974605836LLU;
	uint8_t x3728 = 34U;

	t81 = (((x3725/x3726)-x3727)>>x3728);

	if (t81 != 1073741823LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3737 = 114U;
	uint16_t x3738 = UINT16_MAX;
	static uint8_t x3740 = 1U;

	t82 = (((x3737/x3738)-x3739)>>x3740);

	if (t82 != 48774006) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3765 = INT32_MIN;
	volatile uint32_t t83 = 1543225051U;

	t83 = (((x3765/x3766)-x3767)>>x3768);

	if (t83 != 1048045624U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3813 = 0U;
	int8_t x3814 = INT8_MIN;
	static int32_t x3815 = -1;
	volatile int32_t t84 = 215793607;

	t84 = (((x3813/x3814)-x3815)>>x3816);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3837 = 121U;
	static volatile int32_t x3838 = -301280;
	volatile uint64_t x3839 = UINT64_MAX;
	uint64_t t85 = 209427365883825449LLU;

	t85 = (((x3837/x3838)-x3839)>>x3840);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x3841 = 716U;
	uint64_t x3842 = 1866098919852026782LLU;
	int32_t x3843 = INT32_MIN;
	volatile uint64_t x3844 = 8LLU;
	static volatile uint64_t t86 = 199118666666620LLU;

	t86 = (((x3841/x3842)-x3843)>>x3844);

	if (t86 != 8388608LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3865 = UINT64_MAX;
	int8_t x3866 = 2;
	int8_t x3867 = -1;

	t87 = (((x3865/x3866)-x3867)>>x3868);

	if (t87 != 4398046511104LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x3925 = 3;
	int64_t x3926 = INT64_MIN;
	static int16_t x3927 = -1;
	volatile uint8_t x3928 = 55U;
	volatile int64_t t88 = -564695016LL;

	t88 = (((x3925/x3926)-x3927)>>x3928);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3929 = INT8_MIN;
	uint16_t x3930 = UINT16_MAX;
	int32_t x3931 = -1;
	volatile int16_t x3932 = 1;
	volatile int32_t t89 = 221170936;

	t89 = (((x3929/x3930)-x3931)>>x3932);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3942 = -946145830346LL;
	int8_t x3943 = INT8_MIN;
	uint8_t x3944 = 12U;
	volatile int64_t t90 = -16225800LL;

	t90 = (((x3941/x3942)-x3943)>>x3944);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x4010 = INT64_MIN;
	int8_t x4011 = -41;
	int64_t t91 = 14428939LL;

	t91 = (((x4009/x4010)-x4011)>>x4012);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4034 = INT64_MAX;
	int32_t x4035 = -1;
	volatile uint8_t x4036 = 33U;
	int64_t t92 = 4767798817795968LL;

	t92 = (((x4033/x4034)-x4035)>>x4036);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4045 = 1;
	int8_t x4046 = -3;
	volatile uint32_t x4047 = UINT32_MAX;
	int32_t x4048 = 27;
	uint32_t t93 = 13U;

	t93 = (((x4045/x4046)-x4047)>>x4048);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4097 = -4216260;
	static uint32_t x4098 = 1681375658U;
	uint16_t x4100 = 1U;
	static volatile uint32_t t94 = 15U;

	t94 = (((x4097/x4098)-x4099)>>x4100);

	if (t94 != 65U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4102 = 7;
	static volatile int32_t x4103 = -10;
	uint32_t x4104 = 8U;
	volatile int32_t t95 = -427;

	t95 = (((x4101/x4102)-x4103)>>x4104);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4153 = INT64_MIN;
	volatile int16_t x4154 = 28;
	static uint64_t x4155 = UINT64_MAX;
	uint8_t x4156 = 0U;
	uint64_t t96 = 112615LLU;

	t96 = (((x4153/x4154)-x4155)>>x4156);

	if (t96 != 18117337929536166767LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4210 = 5357571392LLU;
	uint8_t x4211 = 1U;
	uint64_t t97 = 15729345150171LLU;

	t97 = (((x4209/x4210)-x4211)>>x4212);

	if (t97 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4229 = INT64_MIN;
	int64_t x4231 = -1LL;
	volatile uint32_t x4232 = 7U;
	int64_t t98 = 60125LL;

	t98 = (((x4229/x4230)-x4231)>>x4232);

	if (t98 != 5481971125LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4301 = -2;
	volatile uint8_t x4302 = UINT8_MAX;
	static volatile int8_t x4304 = 0;
	volatile int32_t t99 = 8429046;

	t99 = (((x4301/x4302)-x4303)>>x4304);

	if (t99 != 1) { NG(); } else { ; }
	
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


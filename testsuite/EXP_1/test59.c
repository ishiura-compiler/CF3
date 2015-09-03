#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t2 = 0LLU;
int8_t x148 = 1;
uint16_t x252 = 3U;
static int32_t t5 = 2987;
int64_t x324 = 0LL;
static volatile int64_t t6 = -4526182976LL;
int16_t x341 = -2;
uint64_t x342 = 7LLU;
static uint64_t x375 = UINT64_MAX;
static uint32_t x376 = 63U;
volatile uint64_t x389 = 30912996LLU;
uint32_t x391 = UINT32_MAX;
uint64_t t10 = 29760736423LLU;
uint32_t x455 = 996U;
volatile uint8_t x492 = 15U;
uint32_t x514 = 57773U;
static int16_t x516 = 1;
uint8_t x567 = UINT8_MAX;
volatile uint16_t x635 = 975U;
int32_t x642 = -1;
int8_t x644 = 12;
int16_t x693 = -257;
int64_t x696 = 6LL;
int16_t x721 = -17;
int16_t x724 = 0;
uint32_t t18 = 12U;
int8_t x849 = INT8_MAX;
volatile int32_t t20 = 84;
int8_t x880 = 12;
volatile uint64_t x913 = 258785699166416LLU;
uint64_t x914 = UINT64_MAX;
int8_t x915 = INT8_MIN;
int32_t x939 = 52;
volatile uint32_t x954 = UINT32_MAX;
uint32_t x1082 = UINT32_MAX;
static uint32_t t26 = 1927U;
int64_t t27 = -772287104120LL;
int8_t x1114 = -45;
int8_t x1181 = INT8_MIN;
uint64_t x1185 = UINT64_MAX;
int16_t x1188 = 1;
uint64_t x1226 = 404894LLU;
int64_t x1227 = -1LL;
static int32_t t32 = -24;
static uint64_t x1270 = 13998417LLU;
uint64_t x1370 = 351LLU;
static uint16_t x1503 = 591U;
uint32_t x1554 = 2716898U;
uint64_t x1555 = UINT64_MAX;
volatile int64_t t39 = -9LL;
volatile uint64_t x1737 = UINT64_MAX;
int16_t x1741 = -192;
static int64_t x1743 = -1LL;
volatile int8_t x1826 = INT8_MIN;
static int64_t t43 = 11544LL;
volatile uint32_t t45 = 705197U;
volatile int16_t x2029 = -10;
int8_t x2112 = 1;
uint8_t x2368 = 0U;
volatile int64_t t52 = -31937340558608145LL;
static uint8_t x2421 = 44U;
uint64_t t56 = 3408665859174LLU;
uint64_t t58 = 841095864LLU;
int16_t x2590 = INT16_MIN;
static volatile uint32_t t60 = 97U;
static uint16_t x2662 = UINT16_MAX;
volatile int32_t x2663 = 58;
static int64_t x2685 = 1739356615522732194LL;
volatile int64_t x2721 = INT64_MAX;
int8_t x2722 = INT8_MIN;
static int16_t x2742 = INT16_MIN;
uint16_t x2759 = UINT16_MAX;
int32_t x2773 = 841731039;
int8_t x2776 = 0;
int32_t t69 = 60980;
int16_t x2921 = -1;
int8_t x2924 = 10;
uint64_t t70 = 15407LLU;
volatile uint64_t t71 = 695825411046228LLU;
uint8_t x3004 = 4U;
uint64_t x3191 = 1063740016592LLU;
uint16_t x3192 = 5U;
int32_t t78 = 82;
static int64_t x3363 = INT64_MIN;
uint64_t x3369 = UINT64_MAX;
int16_t x3372 = 42;
uint64_t x3380 = 10LLU;
uint32_t t84 = 15246765U;
volatile uint32_t x3518 = 22U;
uint32_t x3519 = 354038U;
static volatile uint8_t x3528 = 28U;
int64_t x3585 = INT64_MIN;
int8_t x3649 = INT8_MIN;
int16_t x3653 = -1;
uint64_t x3673 = 0LLU;
int16_t x3674 = -1;
static int8_t x3675 = 1;
volatile uint64_t t92 = 980379LLU;
volatile uint64_t x3715 = 162LLU;
static volatile int64_t x3734 = 728084912LL;
volatile int64_t t94 = -348382LL;
static int64_t x3773 = 657380902LL;
static int64_t t95 = -6350435930118486LL;
int32_t x3858 = INT32_MAX;
int32_t t97 = -227;
volatile uint32_t t98 = 9606245U;
uint64_t x3926 = 47848474262487LLU;
int64_t x3927 = 4132817877277LL;


void f0(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 3383LLU;
	int16_t x31 = -1;
	uint32_t x32 = 30U;
	static volatile uint64_t t0 = 6444LLU;

	t0 = (((x29+x30)%x31)>>x32);

	if (t0 != 17179869183LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x77 = 1156349LLU;
	uint8_t x78 = 2U;
	int16_t x79 = INT16_MIN;
	static volatile int8_t x80 = 10;
	static uint64_t t1 = 3103026733902LLU;

	t1 = (((x77+x78)%x79)>>x80);

	if (t1 != 1129LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x117 = INT64_MAX;
	uint64_t x118 = 171LLU;
	int32_t x119 = INT32_MIN;
	volatile uint16_t x120 = 30U;

	t2 = (((x117+x118)%x119)>>x120);

	if (t2 != 8589934592LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x145 = INT16_MAX;
	static uint32_t x146 = UINT32_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t3 = 496214U;

	t3 = (((x145+x146)%x147)>>x148);

	if (t3 != 16383U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x237 = -18;
	uint32_t x238 = 16981249U;
	static int32_t x239 = INT32_MIN;
	uint8_t x240 = 8U;
	static uint32_t t4 = 115U;

	t4 = (((x237+x238)%x239)>>x240);

	if (t4 != 66332U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x249 = 17U;
	uint8_t x250 = 7U;
	int16_t x251 = INT16_MIN;

	t5 = (((x249+x250)%x251)>>x252);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x321 = INT32_MIN;
	static volatile int64_t x322 = -273409543262LL;
	static int8_t x323 = -1;

	t6 = (((x321+x322)%x323)>>x324);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x343 = 34U;
	volatile uint64_t x344 = 1LLU;
	uint64_t t7 = 341LLU;

	t7 = (((x341+x342)%x343)>>x344);

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x373 = 30503307LLU;
	int8_t x374 = 0;
	volatile uint64_t t8 = 136333LLU;

	t8 = (((x373+x374)%x375)>>x376);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = 89568557928618LL;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 1U;
	volatile int64_t t9 = 1000LL;

	t9 = (((x385+x386)%x387)>>x388);

	if (t9 != 654968917LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x390 = -305746529;
	uint16_t x392 = 3U;

	t10 = (((x389+x390)%x391)>>x392);

	if (t10 != 502516720LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x453 = UINT16_MAX;
	int64_t x454 = -1LL;
	int16_t x456 = 1;
	static int64_t t11 = -373290LL;

	t11 = (((x453+x454)%x455)>>x456);

	if (t11 != 397LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -118642LL;
	volatile int64_t t12 = -38755986790746LL;

	t12 = (((x489+x490)%x491)>>x492);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x513 = INT8_MAX;
	static int32_t x515 = INT32_MIN;
	uint32_t t13 = 206U;

	t13 = (((x513+x514)%x515)>>x516);

	if (t13 != 28950U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x565 = UINT32_MAX;
	volatile int32_t x566 = INT32_MIN;
	int16_t x568 = 18;
	uint32_t t14 = 1U;

	t14 = (((x565+x566)%x567)>>x568);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x633 = 16460569112LLU;
	int64_t x634 = 127LL;
	static uint8_t x636 = 1U;
	volatile uint64_t t15 = 96514329069LLU;

	t15 = (((x633+x634)%x635)>>x636);

	if (t15 != 57LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x641 = 23256250LL;
	uint16_t x643 = 2U;
	static int64_t t16 = -1LL;

	t16 = (((x641+x642)%x643)>>x644);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x694 = 1467U;
	static int64_t x695 = -1LL;
	static volatile int64_t t17 = 944LL;

	t17 = (((x693+x694)%x695)>>x696);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x722 = 0U;
	static int16_t x723 = INT16_MIN;

	t18 = (((x721+x722)%x723)>>x724);

	if (t18 != 32751U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x741 = -1;
	volatile int8_t x742 = -1;
	uint32_t x743 = 24U;
	uint8_t x744 = 0U;
	uint32_t t19 = 617911753U;

	t19 = (((x741+x742)%x743)>>x744);

	if (t19 != 14U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x850 = 2;
	uint16_t x851 = 516U;
	static uint8_t x852 = 10U;

	t20 = (((x849+x850)%x851)>>x852);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x877 = 14116020942829194LL;
	static volatile int32_t x878 = INT32_MIN;
	int16_t x879 = 7356;
	volatile int64_t t21 = -138254007586413LL;

	t21 = (((x877+x878)%x879)>>x880);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x916 = 3;
	static volatile uint64_t t22 = 2110472757036172425LLU;

	t22 = (((x913+x914)%x915)>>x916);

	if (t22 != 32348212395801LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x937 = 80U;
	int64_t x938 = 15LL;
	uint8_t x940 = 0U;
	static int64_t t23 = -9021468LL;

	t23 = (((x937+x938)%x939)>>x940);

	if (t23 != 43LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x953 = 1122708934283LLU;
	uint32_t x955 = UINT32_MAX;
	int16_t x956 = 35;
	volatile uint64_t t24 = 168832778725LLU;

	t24 = (((x953+x954)%x955)>>x956);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1045 = -11;
	uint16_t x1046 = UINT16_MAX;
	int16_t x1047 = INT16_MAX;
	static volatile uint8_t x1048 = 4U;
	int32_t t25 = 846909978;

	t25 = (((x1045+x1046)%x1047)>>x1048);

	if (t25 != 2047) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1081 = 63U;
	static uint16_t x1083 = 4184U;
	static int64_t x1084 = 0LL;

	t26 = (((x1081+x1082)%x1083)>>x1084);

	if (t26 != 62U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1093 = 0;
	volatile int64_t x1094 = INT64_MIN;
	static int32_t x1095 = INT32_MIN;
	uint32_t x1096 = 32U;

	t27 = (((x1093+x1094)%x1095)>>x1096);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1113 = -1;
	uint32_t x1115 = UINT32_MAX;
	uint32_t x1116 = 10U;
	volatile uint32_t t28 = 790861968U;

	t28 = (((x1113+x1114)%x1115)>>x1116);

	if (t28 != 4194303U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x1182 = 53487175U;
	static int64_t x1183 = INT64_MIN;
	int8_t x1184 = 1;
	int64_t t29 = -1LL;

	t29 = (((x1181+x1182)%x1183)>>x1184);

	if (t29 != 26743523LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1186 = INT8_MAX;
	int8_t x1187 = 31;
	uint64_t t30 = 971098957411565LLU;

	t30 = (((x1185+x1186)%x1187)>>x1188);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1225 = 118188U;
	int16_t x1228 = 0;
	static volatile uint64_t t31 = 89619409108854LLU;

	t31 = (((x1225+x1226)%x1227)>>x1228);

	if (t31 != 523082LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1265 = 14750U;
	uint16_t x1266 = 4U;
	uint16_t x1267 = 3U;
	uint32_t x1268 = 30U;

	t32 = (((x1265+x1266)%x1267)>>x1268);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1269 = -1;
	static uint8_t x1271 = 19U;
	int64_t x1272 = 1LL;
	volatile uint64_t t33 = 7LLU;

	t33 = (((x1269+x1270)%x1271)>>x1272);

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1353 = 20U;
	volatile int8_t x1354 = INT8_MIN;
	uint64_t x1355 = UINT64_MAX;
	uint16_t x1356 = 0U;
	static uint64_t t34 = 1085951173790LLU;

	t34 = (((x1353+x1354)%x1355)>>x1356);

	if (t34 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1369 = 8951;
	int64_t x1371 = -1LL;
	uint16_t x1372 = 22U;
	volatile uint64_t t35 = 6833LLU;

	t35 = (((x1369+x1370)%x1371)>>x1372);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1501 = UINT64_MAX;
	static volatile int8_t x1502 = -1;
	uint8_t x1504 = 12U;
	volatile uint64_t t36 = 7639476435LLU;

	t36 = (((x1501+x1502)%x1503)>>x1504);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1509 = 14604U;
	volatile int64_t x1510 = 161265744LL;
	int8_t x1511 = INT8_MIN;
	uint8_t x1512 = 2U;
	volatile int64_t t37 = -29815LL;

	t37 = (((x1509+x1510)%x1511)>>x1512);

	if (t37 != 23LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1553 = INT8_MAX;
	int8_t x1556 = 1;
	uint64_t t38 = 316644103962818LLU;

	t38 = (((x1553+x1554)%x1555)>>x1556);

	if (t38 != 1358512LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1597 = INT64_MAX;
	int8_t x1598 = -1;
	volatile uint32_t x1599 = 161U;
	static int32_t x1600 = 16;

	t39 = (((x1597+x1598)%x1599)>>x1600);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1633 = -1LL;
	int64_t x1634 = INT64_MAX;
	int32_t x1635 = INT32_MIN;
	static int8_t x1636 = 0;
	static int64_t t40 = 1565711237980975LL;

	t40 = (((x1633+x1634)%x1635)>>x1636);

	if (t40 != 2147483646LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1738 = INT16_MIN;
	uint8_t x1739 = 36U;
	static uint8_t x1740 = 4U;
	uint64_t t41 = 17002701LLU;

	t41 = (((x1737+x1738)%x1739)>>x1740);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1742 = -608369518441064LL;
	uint8_t x1744 = 4U;
	volatile int64_t t42 = -169LL;

	t42 = (((x1741+x1742)%x1743)>>x1744);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1825 = 244256077328LL;
	int16_t x1827 = INT16_MIN;
	static uint8_t x1828 = 6U;

	t43 = (((x1825+x1826)%x1827)>>x1828);

	if (t43 != 470LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1889 = INT16_MAX;
	int16_t x1890 = -1;
	uint32_t x1891 = 1002195818U;
	volatile uint8_t x1892 = 0U;
	static uint32_t t44 = 3011U;

	t44 = (((x1889+x1890)%x1891)>>x1892);

	if (t44 != 32766U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1917 = INT8_MAX;
	uint32_t x1918 = UINT32_MAX;
	int32_t x1919 = 288490;
	int32_t x1920 = 18;

	t45 = (((x1917+x1918)%x1919)>>x1920);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2001 = UINT64_MAX;
	volatile uint8_t x2002 = 2U;
	uint32_t x2003 = 1U;
	volatile uint16_t x2004 = 5U;
	uint64_t t46 = 7LLU;

	t46 = (((x2001+x2002)%x2003)>>x2004);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2030 = INT16_MIN;
	uint32_t x2031 = UINT32_MAX;
	uint8_t x2032 = 0U;
	volatile uint32_t t47 = 790466098U;

	t47 = (((x2029+x2030)%x2031)>>x2032);

	if (t47 != 4294934518U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2077 = -6409;
	int32_t x2078 = INT32_MAX;
	int16_t x2079 = INT16_MIN;
	int16_t x2080 = 1;
	int32_t t48 = 2225;

	t48 = (((x2077+x2078)%x2079)>>x2080);

	if (t48 != 13179) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2109 = 168288U;
	int8_t x2110 = INT8_MAX;
	int8_t x2111 = INT8_MIN;
	static volatile uint32_t t49 = 5323U;

	t49 = (((x2109+x2110)%x2111)>>x2112);

	if (t49 != 84207U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2177 = INT16_MAX;
	int16_t x2178 = INT16_MIN;
	uint64_t x2179 = 379672520186969LLU;
	uint8_t x2180 = 5U;
	uint64_t t50 = 2301900651908454LLU;

	t50 = (((x2177+x2178)%x2179)>>x2180);

	if (t50 != 11083763301960LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2285 = -3;
	int64_t x2286 = 34996204LL;
	int8_t x2287 = INT8_MIN;
	int32_t x2288 = 1;
	int64_t t51 = -56019997702002LL;

	t51 = (((x2285+x2286)%x2287)>>x2288);

	if (t51 != 52LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2365 = 11;
	static int32_t x2366 = -1;
	int64_t x2367 = 114246LL;

	t52 = (((x2365+x2366)%x2367)>>x2368);

	if (t52 != 10LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2422 = -13734;
	uint64_t x2423 = UINT64_MAX;
	int8_t x2424 = 62;
	uint64_t t53 = 431861692469LLU;

	t53 = (((x2421+x2422)%x2423)>>x2424);

	if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2437 = 5U;
	int32_t x2438 = INT32_MAX;
	static uint32_t x2439 = UINT32_MAX;
	volatile int16_t x2440 = 2;
	uint32_t t54 = 11U;

	t54 = (((x2437+x2438)%x2439)>>x2440);

	if (t54 != 536870913U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2445 = UINT8_MAX;
	uint8_t x2446 = 102U;
	volatile uint32_t x2447 = UINT32_MAX;
	int8_t x2448 = 1;
	volatile uint32_t t55 = 6544U;

	t55 = (((x2445+x2446)%x2447)>>x2448);

	if (t55 != 178U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2485 = 0;
	uint8_t x2486 = 1U;
	uint64_t x2487 = UINT64_MAX;
	uint16_t x2488 = 3U;

	t56 = (((x2485+x2486)%x2487)>>x2488);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x2549 = 3;
	volatile int16_t x2550 = INT16_MAX;
	static int32_t x2551 = INT32_MAX;
	int16_t x2552 = 0;
	int32_t t57 = 8100;

	t57 = (((x2549+x2550)%x2551)>>x2552);

	if (t57 != 32770) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2553 = 2072448102262LLU;
	int32_t x2554 = 0;
	int32_t x2555 = -12;
	uint16_t x2556 = 7U;

	t58 = (((x2553+x2554)%x2555)>>x2556);

	if (t58 != 16191000798LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2565 = INT64_MIN;
	uint32_t x2566 = UINT32_MAX;
	int16_t x2567 = -1;
	uint16_t x2568 = 41U;
	int64_t t59 = -18LL;

	t59 = (((x2565+x2566)%x2567)>>x2568);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x2589 = 8U;
	uint32_t x2591 = 1U;
	uint8_t x2592 = 1U;

	t60 = (((x2589+x2590)%x2591)>>x2592);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2661 = -1;
	uint8_t x2664 = 13U;
	volatile int32_t t61 = 38;

	t61 = (((x2661+x2662)%x2663)>>x2664);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2686 = INT8_MIN;
	static int8_t x2687 = 1;
	static uint8_t x2688 = 0U;
	int64_t t62 = -11080309LL;

	t62 = (((x2685+x2686)%x2687)>>x2688);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2723 = 1038408264U;
	uint16_t x2724 = 40U;
	int64_t t63 = -8358059LL;

	t63 = (((x2721+x2722)%x2723)>>x2724);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2741 = INT64_MAX;
	int32_t x2743 = INT32_MIN;
	static volatile int16_t x2744 = 4;
	static volatile int64_t t64 = -675260335855LL;

	t64 = (((x2741+x2742)%x2743)>>x2744);

	if (t64 != 134215679LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2745 = INT16_MIN;
	int8_t x2746 = 0;
	int8_t x2747 = -1;
	uint64_t x2748 = 8LLU;
	volatile int32_t t65 = -465;

	t65 = (((x2745+x2746)%x2747)>>x2748);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2757 = UINT32_MAX;
	int8_t x2758 = -3;
	uint64_t x2760 = 1LLU;
	static volatile uint32_t t66 = 13592146U;

	t66 = (((x2757+x2758)%x2759)>>x2760);

	if (t66 != 32766U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2774 = -1LL;
	int16_t x2775 = INT16_MAX;
	volatile int64_t t67 = -7LL;

	t67 = (((x2773+x2774)%x2775)>>x2776);

	if (t67 != 12342LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2789 = INT16_MAX;
	uint8_t x2790 = 30U;
	int16_t x2791 = 169;
	volatile uint64_t x2792 = 0LLU;
	volatile int32_t t68 = -129728;

	t68 = (((x2789+x2790)%x2791)>>x2792);

	if (t68 != 11) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2905 = INT32_MAX;
	volatile int16_t x2906 = INT16_MIN;
	static int8_t x2907 = -4;
	static uint64_t x2908 = 0LLU;

	t69 = (((x2905+x2906)%x2907)>>x2908);

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2922 = 37401563LLU;
	int32_t x2923 = INT32_MAX;

	t70 = (((x2921+x2922)%x2923)>>x2924);

	if (t70 != 36524LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2977 = INT16_MAX;
	int32_t x2978 = INT32_MIN;
	uint64_t x2979 = 603351754741508LLU;
	int8_t x2980 = 3;

	t71 = (((x2977+x2978)%x2979)>>x2980);

	if (t71 != 58859231247081LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2993 = INT32_MIN;
	uint32_t x2994 = 74390401U;
	static volatile uint16_t x2995 = UINT16_MAX;
	static int8_t x2996 = 3;
	uint32_t t72 = 356617U;

	t72 = (((x2993+x2994)%x2995)>>x2996);

	if (t72 != 5118U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3001 = -1LL;
	static volatile uint8_t x3002 = UINT8_MAX;
	int16_t x3003 = INT16_MIN;
	int64_t t73 = -3071957645729LL;

	t73 = (((x3001+x3002)%x3003)>>x3004);

	if (t73 != 15LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3025 = 3257954010020250701LL;
	int8_t x3026 = INT8_MIN;
	int16_t x3027 = -728;
	int8_t x3028 = 2;
	int64_t t74 = 14219867093763LL;

	t74 = (((x3025+x3026)%x3027)>>x3028);

	if (t74 != 167LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3105 = -1;
	volatile uint32_t x3106 = 2433U;
	uint16_t x3107 = 99U;
	uint8_t x3108 = 1U;
	static uint32_t t75 = 0U;

	t75 = (((x3105+x3106)%x3107)>>x3108);

	if (t75 != 28U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3121 = 26752683LLU;
	int8_t x3122 = -1;
	int32_t x3123 = INT32_MIN;
	int8_t x3124 = 48;
	static volatile uint64_t t76 = 459469913317247LLU;

	t76 = (((x3121+x3122)%x3123)>>x3124);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3189 = 266LLU;
	int8_t x3190 = -1;
	volatile uint64_t t77 = 2134775LLU;

	t77 = (((x3189+x3190)%x3191)>>x3192);

	if (t77 != 8LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x3249 = UINT16_MAX;
	volatile int32_t x3250 = 21;
	uint16_t x3251 = 3173U;
	uint8_t x3252 = 6U;

	t78 = (((x3249+x3250)%x3251)>>x3252);

	if (t78 != 32) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3361 = 114U;
	uint8_t x3362 = 93U;
	volatile uint16_t x3364 = 0U;
	int64_t t79 = 33383558067LL;

	t79 = (((x3361+x3362)%x3363)>>x3364);

	if (t79 != 207LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3370 = -1211;
	int64_t x3371 = INT64_MAX;
	static volatile uint64_t t80 = 1530LLU;

	t80 = (((x3369+x3370)%x3371)>>x3372);

	if (t80 != 2097151LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x3377 = 222319145133930LL;
	int16_t x3378 = 1901;
	int16_t x3379 = INT16_MIN;
	volatile int64_t t81 = 5039195LL;

	t81 = (((x3377+x3378)%x3379)>>x3380);

	if (t81 != 11LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x3461 = 127U;
	int8_t x3462 = 16;
	static uint8_t x3463 = UINT8_MAX;
	int32_t x3464 = 2;
	uint32_t t82 = 1039595377U;

	t82 = (((x3461+x3462)%x3463)>>x3464);

	if (t82 != 35U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3481 = UINT8_MAX;
	volatile uint32_t x3482 = UINT32_MAX;
	volatile int64_t x3483 = INT64_MIN;
	uint8_t x3484 = 9U;
	static int64_t t83 = 9LL;

	t83 = (((x3481+x3482)%x3483)>>x3484);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3501 = INT16_MIN;
	uint32_t x3502 = UINT32_MAX;
	int16_t x3503 = 2;
	uint8_t x3504 = 6U;

	t84 = (((x3501+x3502)%x3503)>>x3504);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3517 = -78294;
	uint32_t x3520 = 4U;
	uint32_t t85 = 225227U;

	t85 = (((x3517+x3518)%x3519)>>x3520);

	if (t85 != 3377U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3525 = INT16_MIN;
	static uint64_t x3526 = 69068297LLU;
	static int32_t x3527 = -184183;
	uint64_t t86 = 54282675802567LLU;

	t86 = (((x3525+x3526)%x3527)>>x3528);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3533 = INT16_MAX;
	int16_t x3534 = INT16_MAX;
	int64_t x3535 = -1LL;
	uint8_t x3536 = 3U;
	int64_t t87 = -68346833LL;

	t87 = (((x3533+x3534)%x3535)>>x3536);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x3586 = 132U;
	uint64_t x3587 = 4149082111471444947LLU;
	int8_t x3588 = 0;
	static uint64_t t88 = 2628LLU;

	t88 = (((x3585+x3586)%x3587)>>x3588);

	if (t88 != 925207813911886046LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3645 = 110U;
	uint64_t x3646 = 404333685564863261LLU;
	int16_t x3647 = INT16_MAX;
	int16_t x3648 = 7;
	volatile uint64_t t89 = 4791029621809LLU;

	t89 = (((x3645+x3646)%x3647)>>x3648);

	if (t89 != 38LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3650 = INT16_MIN;
	int8_t x3651 = 1;
	int32_t x3652 = 0;
	volatile int32_t t90 = -216066;

	t90 = (((x3649+x3650)%x3651)>>x3652);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3654 = 235909660U;
	int64_t x3655 = INT64_MAX;
	int16_t x3656 = 61;
	volatile int64_t t91 = -15041236LL;

	t91 = (((x3653+x3654)%x3655)>>x3656);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3676 = 60;

	t92 = (((x3673+x3674)%x3675)>>x3676);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3713 = UINT16_MAX;
	int16_t x3714 = -1;
	volatile int8_t x3716 = 0;
	volatile uint64_t t93 = 3587LLU;

	t93 = (((x3713+x3714)%x3715)>>x3716);

	if (t93 != 86LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3733 = -1;
	int32_t x3735 = -1999;
	volatile uint32_t x3736 = 1U;

	t94 = (((x3733+x3734)%x3735)>>x3736);

	if (t94 != 567LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3774 = -1;
	uint8_t x3775 = 14U;
	uint64_t x3776 = 55LLU;

	t95 = (((x3773+x3774)%x3775)>>x3776);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3841 = INT64_MAX;
	int8_t x3842 = 0;
	uint32_t x3843 = UINT32_MAX;
	uint8_t x3844 = 21U;
	int64_t t96 = -7146LL;

	t96 = (((x3841+x3842)%x3843)>>x3844);

	if (t96 != 1023LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x3857 = INT16_MIN;
	int8_t x3859 = INT8_MIN;
	volatile uint8_t x3860 = 0U;

	t97 = (((x3857+x3858)%x3859)>>x3860);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3873 = UINT32_MAX;
	int8_t x3874 = INT8_MIN;
	int16_t x3875 = -1;
	int16_t x3876 = 5;

	t98 = (((x3873+x3874)%x3875)>>x3876);

	if (t98 != 134217723U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3925 = 0U;
	uint8_t x3928 = 63U;
	volatile uint64_t t99 = 1446727243LLU;

	t99 = (((x3925+x3926)%x3927)>>x3928);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


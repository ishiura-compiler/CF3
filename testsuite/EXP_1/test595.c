#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x77 = 23U;
uint16_t x79 = 28U;
static uint8_t x92 = 11U;
volatile int16_t x215 = 3;
volatile uint16_t x226 = 5750U;
static uint64_t x250 = 20LLU;
volatile int32_t t6 = 53;
static int32_t x271 = 0;
volatile int32_t t8 = 142321;
int8_t x326 = INT8_MAX;
static uint8_t x328 = 11U;
static uint8_t x441 = 1U;
int64_t x442 = INT64_MIN;
uint16_t x461 = 7U;
int8_t x462 = INT8_MAX;
uint16_t x518 = 29631U;
static uint32_t x520 = 7U;
volatile int32_t t18 = 524468;
static uint64_t x622 = 2069LLU;
volatile int32_t t22 = 4062845;
int16_t x742 = INT16_MAX;
int8_t x753 = -1;
static uint64_t x754 = UINT64_MAX;
uint32_t x757 = 3673U;
volatile uint8_t x758 = UINT8_MAX;
volatile uint64_t x761 = 1103014700213185601LLU;
volatile uint16_t x779 = 0U;
int16_t x933 = INT16_MIN;
volatile int32_t t30 = 1206553;
volatile int8_t x949 = INT8_MAX;
static uint16_t x969 = UINT16_MAX;
uint32_t x970 = 14U;
int32_t t33 = 1;
volatile int32_t x1057 = -135725;
volatile int64_t x1066 = INT64_MAX;
volatile uint64_t x1400 = 129656LLU;
uint8_t x1432 = 24U;
volatile int8_t x1444 = -1;
int32_t t40 = 58895725;
int32_t x1594 = INT32_MIN;
static uint8_t x1595 = 5U;
int32_t t42 = 24812;
static uint8_t x1636 = UINT8_MAX;
uint8_t x1727 = 2U;
int32_t x1728 = -14804854;
static int8_t x1757 = -45;
uint32_t x1816 = 216661375U;
int64_t x1914 = 183534874366999613LL;
uint16_t x1934 = 29U;
int32_t t52 = 941970008;
uint64_t x1941 = UINT64_MAX;
static int32_t t53 = 9244;
int32_t x1996 = 661901056;
volatile uint8_t x1999 = 4U;
uint16_t x2064 = 62U;
int32_t x2279 = 2;
int64_t x2290 = -223847534932LL;
volatile int8_t x2308 = INT8_MIN;
volatile int16_t x2529 = -1;
static uint16_t x2564 = 1825U;
static int8_t x2743 = 0;
uint8_t x2744 = 3U;
static int64_t x2752 = -1LL;
static uint8_t x2758 = UINT8_MAX;
int32_t x2795 = 1;
int8_t x2920 = 5;
int64_t x2936 = 63161881082387LL;
int8_t x2983 = 1;
volatile int32_t t76 = 26;
uint8_t x3063 = 12U;
int16_t x3111 = 4;
static volatile int32_t t82 = -48141;
static uint32_t x3169 = 0U;
uint64_t x3182 = 6LLU;
volatile int16_t x3203 = 0;
static int32_t t88 = -48;
volatile int16_t x3241 = INT16_MIN;
int64_t x3330 = 336924762924725014LL;
static volatile int32_t t90 = 847372;
static uint16_t x3388 = 172U;
int8_t x3397 = INT8_MIN;
static int32_t t93 = 22062;
static uint8_t x3555 = 2U;
static volatile int32_t x3556 = 1;
volatile int8_t x3656 = INT8_MIN;
int32_t t95 = 12380245;
int8_t x3727 = 0;
volatile int32_t t96 = -26;
static volatile uint16_t x3779 = 1U;
static int32_t t99 = -213;


void f0(void) {
	static uint32_t x41 = 1969407618U;
	static volatile int32_t x42 = INT32_MIN;
	volatile uint16_t x43 = 2U;
	static int64_t x44 = -14186LL;
	volatile int32_t t0 = 19642135;

	t0 = (((x41/x42)>>x43)<=x44);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x78 = INT64_MIN;
	volatile int16_t x80 = 77;
	int32_t t1 = -615280053;

	t1 = (((x77/x78)>>x79)<=x80);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -95145536546722449LL;
	volatile uint32_t x91 = 7U;
	static int32_t t2 = 0;

	t2 = (((x89/x90)>>x91)<=x92);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = -977286LL;
	static volatile int8_t x103 = 1;
	int16_t x104 = INT16_MIN;
	int32_t t3 = -12261;

	t3 = (((x101/x102)>>x103)<=x104);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	volatile int32_t x216 = -1;
	volatile int32_t t4 = -6718;

	t4 = (((x213/x214)>>x215)<=x216);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x225 = -1;
	uint8_t x227 = 7U;
	int64_t x228 = INT64_MAX;
	int32_t t5 = 443;

	t5 = (((x225/x226)>>x227)<=x228);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x249 = 30U;
	volatile uint32_t x251 = 61U;
	uint64_t x252 = 835399443003623LLU;

	t6 = (((x249/x250)>>x251)<=x252);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x269 = 235914022LLU;
	volatile int16_t x270 = 1;
	int8_t x272 = 12;
	static volatile int32_t t7 = 15;

	t7 = (((x269/x270)>>x271)<=x272);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 1U;
	volatile uint8_t x324 = 63U;

	t8 = (((x321/x322)>>x323)<=x324);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int8_t x327 = 4;
	volatile int32_t t9 = 908722486;

	t9 = (((x325/x326)>>x327)<=x328);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x345 = 2U;
	volatile int16_t x346 = INT16_MAX;
	static uint32_t x347 = 9U;
	int32_t x348 = -1015;
	static volatile int32_t t10 = -409188;

	t10 = (((x345/x346)>>x347)<=x348);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x365 = -1LL;
	uint16_t x366 = 38U;
	uint32_t x367 = 3U;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t11 = -235353;

	t11 = (((x365/x366)>>x367)<=x368);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x373 = -3;
	volatile int32_t x374 = -11715;
	static uint8_t x375 = 29U;
	int64_t x376 = INT64_MAX;
	int32_t t12 = 13005803;

	t12 = (((x373/x374)>>x375)<=x376);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x413 = INT16_MIN;
	volatile uint32_t x414 = 98U;
	static uint8_t x415 = 1U;
	volatile int64_t x416 = -13977479LL;
	int32_t t13 = -117;

	t13 = (((x413/x414)>>x415)<=x416);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x443 = 1U;
	int8_t x444 = -1;
	int32_t t14 = 43;

	t14 = (((x441/x442)>>x443)<=x444);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x463 = 7U;
	int64_t x464 = -1LL;
	int32_t t15 = -998115;

	t15 = (((x461/x462)>>x463)<=x464);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x517 = INT16_MAX;
	int8_t x519 = 1;
	static int32_t t16 = -29391;

	t16 = (((x517/x518)>>x519)<=x520);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x529 = 1LLU;
	static int32_t x530 = INT32_MAX;
	uint8_t x531 = 1U;
	uint16_t x532 = 23940U;
	int32_t t17 = -353269;

	t17 = (((x529/x530)>>x531)<=x532);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x533 = 6;
	volatile int32_t x534 = INT32_MIN;
	static volatile uint8_t x535 = 20U;
	int64_t x536 = -89598702322289LL;

	t18 = (((x533/x534)>>x535)<=x536);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x585 = -7827425110110LL;
	int64_t x586 = INT64_MIN;
	static int8_t x587 = 17;
	volatile int8_t x588 = 1;
	volatile int32_t t19 = 225937;

	t19 = (((x585/x586)>>x587)<=x588);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x621 = 2702;
	static volatile int8_t x623 = 9;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t20 = -202;

	t20 = (((x621/x622)>>x623)<=x624);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x685 = 17;
	int8_t x686 = 5;
	uint8_t x687 = 6U;
	static int64_t x688 = INT64_MAX;
	volatile int32_t t21 = 269445585;

	t21 = (((x685/x686)>>x687)<=x688);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x729 = 46687;
	uint8_t x730 = UINT8_MAX;
	uint16_t x731 = 14U;
	int16_t x732 = 15;

	t22 = (((x729/x730)>>x731)<=x732);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x737 = 51554654737719991LLU;
	uint32_t x738 = 179293U;
	uint32_t x739 = 29U;
	int8_t x740 = INT8_MAX;
	volatile int32_t t23 = -4042;

	t23 = (((x737/x738)>>x739)<=x740);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x741 = INT64_MAX;
	static volatile int16_t x743 = 1;
	int16_t x744 = INT16_MIN;
	int32_t t24 = 85587;

	t24 = (((x741/x742)>>x743)<=x744);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x755 = 2;
	volatile int8_t x756 = -1;
	volatile int32_t t25 = 128625842;

	t25 = (((x753/x754)>>x755)<=x756);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x759 = 1;
	static int32_t x760 = -2;
	int32_t t26 = -2400;

	t26 = (((x757/x758)>>x759)<=x760);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x762 = 2819;
	static uint8_t x763 = 2U;
	uint64_t x764 = 6LLU;
	volatile int32_t t27 = 859;

	t27 = (((x761/x762)>>x763)<=x764);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x777 = UINT8_MAX;
	static int64_t x778 = INT64_MIN;
	static int8_t x780 = -1;
	static int32_t t28 = 5581252;

	t28 = (((x777/x778)>>x779)<=x780);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x809 = INT8_MIN;
	uint64_t x810 = 5983LLU;
	uint8_t x811 = 32U;
	int32_t x812 = INT32_MIN;
	volatile int32_t t29 = 218064122;

	t29 = (((x809/x810)>>x811)<=x812);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x934 = INT64_MIN;
	int8_t x935 = 4;
	uint16_t x936 = 23U;

	t30 = (((x933/x934)>>x935)<=x936);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x950 = 6913LLU;
	volatile uint16_t x951 = 14U;
	static int32_t x952 = -1;
	int32_t t31 = 1;

	t31 = (((x949/x950)>>x951)<=x952);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x971 = 15U;
	static int8_t x972 = INT8_MAX;
	int32_t t32 = 185278;

	t32 = (((x969/x970)>>x971)<=x972);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1025 = 5LLU;
	int8_t x1026 = 1;
	uint8_t x1027 = 25U;
	static int64_t x1028 = 2118462026101630LL;

	t33 = (((x1025/x1026)>>x1027)<=x1028);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1058 = INT16_MIN;
	int8_t x1059 = 0;
	int8_t x1060 = -1;
	volatile int32_t t34 = 32455340;

	t34 = (((x1057/x1058)>>x1059)<=x1060);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1065 = 56U;
	static uint8_t x1067 = 1U;
	uint16_t x1068 = 5128U;
	volatile int32_t t35 = 30792230;

	t35 = (((x1065/x1066)>>x1067)<=x1068);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1145 = INT16_MIN;
	volatile int16_t x1146 = -204;
	int8_t x1147 = 1;
	uint8_t x1148 = UINT8_MAX;
	int32_t t36 = 0;

	t36 = (((x1145/x1146)>>x1147)<=x1148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1397 = INT32_MAX;
	volatile uint32_t x1398 = UINT32_MAX;
	static int8_t x1399 = 17;
	volatile int32_t t37 = 9;

	t37 = (((x1397/x1398)>>x1399)<=x1400);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1421 = INT8_MAX;
	uint16_t x1422 = 5U;
	uint64_t x1423 = 14LLU;
	int32_t x1424 = -1;
	int32_t t38 = -119;

	t38 = (((x1421/x1422)>>x1423)<=x1424);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1429 = 9835U;
	int16_t x1430 = INT16_MIN;
	uint8_t x1431 = 2U;
	int32_t t39 = 546958754;

	t39 = (((x1429/x1430)>>x1431)<=x1432);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1441 = INT32_MAX;
	uint16_t x1442 = 1255U;
	uint8_t x1443 = 0U;

	t40 = (((x1441/x1442)>>x1443)<=x1444);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1549 = -1;
	int64_t x1550 = INT64_MAX;
	volatile int32_t x1551 = 14;
	int64_t x1552 = INT64_MIN;
	volatile int32_t t41 = -57080855;

	t41 = (((x1549/x1550)>>x1551)<=x1552);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1593 = -1;
	static int32_t x1596 = INT32_MIN;

	t42 = (((x1593/x1594)>>x1595)<=x1596);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1605 = -1;
	static volatile int8_t x1606 = INT8_MAX;
	int16_t x1607 = 0;
	uint32_t x1608 = 1165U;
	static int32_t t43 = -79;

	t43 = (((x1605/x1606)>>x1607)<=x1608);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1633 = INT8_MIN;
	int8_t x1634 = -1;
	int16_t x1635 = 8;
	int32_t t44 = 1459710;

	t44 = (((x1633/x1634)>>x1635)<=x1636);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1697 = 30258038306265LLU;
	volatile int64_t x1698 = -1LL;
	int32_t x1699 = 29;
	int32_t x1700 = INT32_MIN;
	int32_t t45 = -1;

	t45 = (((x1697/x1698)>>x1699)<=x1700);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1709 = UINT64_MAX;
	static uint16_t x1710 = 2U;
	volatile int64_t x1711 = 42LL;
	static uint8_t x1712 = UINT8_MAX;
	volatile int32_t t46 = 455;

	t46 = (((x1709/x1710)>>x1711)<=x1712);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1725 = 15U;
	uint16_t x1726 = UINT16_MAX;
	static volatile int32_t t47 = -545957616;

	t47 = (((x1725/x1726)>>x1727)<=x1728);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1758 = -1;
	uint8_t x1759 = 2U;
	uint16_t x1760 = 26041U;
	volatile int32_t t48 = -2598702;

	t48 = (((x1757/x1758)>>x1759)<=x1760);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1813 = -1LL;
	int64_t x1814 = INT64_MIN;
	int8_t x1815 = 8;
	int32_t t49 = 29;

	t49 = (((x1813/x1814)>>x1815)<=x1816);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1913 = 14U;
	uint16_t x1915 = 3U;
	uint16_t x1916 = 4U;
	volatile int32_t t50 = -318428605;

	t50 = (((x1913/x1914)>>x1915)<=x1916);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1925 = 1;
	uint16_t x1926 = 3U;
	volatile uint64_t x1927 = 1LLU;
	uint16_t x1928 = UINT16_MAX;
	volatile int32_t t51 = -31976;

	t51 = (((x1925/x1926)>>x1927)<=x1928);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1933 = 570918500914LL;
	int8_t x1935 = 3;
	uint8_t x1936 = 1U;

	t52 = (((x1933/x1934)>>x1935)<=x1936);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1942 = INT32_MAX;
	uint16_t x1943 = 15U;
	static uint16_t x1944 = UINT16_MAX;

	t53 = (((x1941/x1942)>>x1943)<=x1944);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1993 = 581036U;
	volatile int64_t x1994 = INT64_MIN;
	uint16_t x1995 = 4U;
	volatile int32_t t54 = 23157072;

	t54 = (((x1993/x1994)>>x1995)<=x1996);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1997 = -1;
	uint64_t x1998 = 24596LLU;
	int64_t x2000 = INT64_MIN;
	int32_t t55 = 749525;

	t55 = (((x1997/x1998)>>x1999)<=x2000);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2005 = INT64_MIN;
	uint64_t x2006 = UINT64_MAX;
	uint8_t x2007 = 36U;
	uint8_t x2008 = UINT8_MAX;
	static int32_t t56 = 375;

	t56 = (((x2005/x2006)>>x2007)<=x2008);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x2009 = UINT64_MAX;
	int16_t x2010 = -1;
	uint8_t x2011 = 27U;
	int16_t x2012 = INT16_MIN;
	int32_t t57 = -309553841;

	t57 = (((x2009/x2010)>>x2011)<=x2012);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x2061 = UINT8_MAX;
	uint64_t x2062 = 60765206137801876LLU;
	static uint8_t x2063 = 5U;
	volatile int32_t t58 = 24;

	t58 = (((x2061/x2062)>>x2063)<=x2064);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2065 = 0;
	int32_t x2066 = INT32_MIN;
	uint16_t x2067 = 1U;
	static uint16_t x2068 = 3232U;
	volatile int32_t t59 = -18;

	t59 = (((x2065/x2066)>>x2067)<=x2068);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2233 = 15U;
	static int64_t x2234 = 570994666909518833LL;
	int8_t x2235 = 2;
	static uint32_t x2236 = UINT32_MAX;
	static volatile int32_t t60 = 13726163;

	t60 = (((x2233/x2234)>>x2235)<=x2236);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2277 = 3371125413800913832LLU;
	uint16_t x2278 = 90U;
	int8_t x2280 = -1;
	static int32_t t61 = -10;

	t61 = (((x2277/x2278)>>x2279)<=x2280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2289 = 8U;
	int8_t x2291 = 0;
	int8_t x2292 = INT8_MIN;
	volatile int32_t t62 = -372384901;

	t62 = (((x2289/x2290)>>x2291)<=x2292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2305 = 1967416129U;
	uint8_t x2306 = UINT8_MAX;
	int8_t x2307 = 3;
	static volatile int32_t t63 = -12010908;

	t63 = (((x2305/x2306)>>x2307)<=x2308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2345 = INT16_MAX;
	int16_t x2346 = INT16_MIN;
	volatile uint8_t x2347 = 4U;
	int8_t x2348 = INT8_MIN;
	volatile int32_t t64 = 1340;

	t64 = (((x2345/x2346)>>x2347)<=x2348);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2530 = 5U;
	static int8_t x2531 = 3;
	uint8_t x2532 = UINT8_MAX;
	int32_t t65 = -78904316;

	t65 = (((x2529/x2530)>>x2531)<=x2532);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2557 = UINT16_MAX;
	static int64_t x2558 = INT64_MIN;
	volatile uint8_t x2559 = 25U;
	int16_t x2560 = INT16_MIN;
	static int32_t t66 = -80229;

	t66 = (((x2557/x2558)>>x2559)<=x2560);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2561 = -1;
	uint8_t x2562 = 31U;
	static int32_t x2563 = 0;
	int32_t t67 = 29537580;

	t67 = (((x2561/x2562)>>x2563)<=x2564);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2709 = 2U;
	static volatile int64_t x2710 = INT64_MAX;
	uint16_t x2711 = 0U;
	int16_t x2712 = INT16_MIN;
	static int32_t t68 = -213901;

	t68 = (((x2709/x2710)>>x2711)<=x2712);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2741 = 4519693LLU;
	static int64_t x2742 = -3136LL;
	int32_t t69 = 213037243;

	t69 = (((x2741/x2742)>>x2743)<=x2744);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2749 = 149U;
	int64_t x2750 = -70423599291470935LL;
	volatile uint8_t x2751 = 20U;
	int32_t t70 = -43898;

	t70 = (((x2749/x2750)>>x2751)<=x2752);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2757 = INT8_MIN;
	static uint8_t x2759 = 3U;
	static int64_t x2760 = INT64_MIN;
	static int32_t t71 = -510189421;

	t71 = (((x2757/x2758)>>x2759)<=x2760);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2781 = INT16_MIN;
	int16_t x2782 = -29;
	volatile int32_t x2783 = 20;
	uint8_t x2784 = UINT8_MAX;
	int32_t t72 = 21701835;

	t72 = (((x2781/x2782)>>x2783)<=x2784);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2793 = INT64_MIN;
	int16_t x2794 = INT16_MIN;
	int16_t x2796 = INT16_MIN;
	volatile int32_t t73 = 131616415;

	t73 = (((x2793/x2794)>>x2795)<=x2796);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2917 = -3895714LL;
	int16_t x2918 = -421;
	static int16_t x2919 = 50;
	int32_t t74 = -107013445;

	t74 = (((x2917/x2918)>>x2919)<=x2920);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2933 = 34U;
	volatile uint8_t x2934 = 2U;
	uint16_t x2935 = 0U;
	volatile int32_t t75 = 257025301;

	t75 = (((x2933/x2934)>>x2935)<=x2936);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2981 = UINT32_MAX;
	static int32_t x2982 = INT32_MAX;
	static int64_t x2984 = INT64_MIN;

	t76 = (((x2981/x2982)>>x2983)<=x2984);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2997 = INT64_MIN;
	volatile int8_t x2998 = INT8_MIN;
	uint16_t x2999 = 0U;
	int8_t x3000 = 4;
	volatile int32_t t77 = 6;

	t77 = (((x2997/x2998)>>x2999)<=x3000);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3005 = 0U;
	int32_t x3006 = INT32_MAX;
	uint8_t x3007 = 2U;
	volatile uint32_t x3008 = 7014653U;
	volatile int32_t t78 = -589867;

	t78 = (((x3005/x3006)>>x3007)<=x3008);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3017 = 290U;
	volatile uint64_t x3018 = UINT64_MAX;
	int8_t x3019 = 0;
	int64_t x3020 = -840714532512LL;
	volatile int32_t t79 = -1;

	t79 = (((x3017/x3018)>>x3019)<=x3020);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3061 = INT16_MIN;
	uint64_t x3062 = 7828352LLU;
	int32_t x3064 = INT32_MIN;
	static volatile int32_t t80 = -1466;

	t80 = (((x3061/x3062)>>x3063)<=x3064);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3101 = 8;
	static uint64_t x3102 = 12143929656LLU;
	static int8_t x3103 = 2;
	int32_t x3104 = -1;
	int32_t t81 = -138364013;

	t81 = (((x3101/x3102)>>x3103)<=x3104);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3109 = -1;
	uint32_t x3110 = 4749430U;
	int32_t x3112 = INT32_MIN;

	t82 = (((x3109/x3110)>>x3111)<=x3112);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3137 = -1;
	int16_t x3138 = INT16_MIN;
	volatile int32_t x3139 = 2;
	int8_t x3140 = -1;
	volatile int32_t t83 = 550916;

	t83 = (((x3137/x3138)>>x3139)<=x3140);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3170 = INT8_MIN;
	volatile int16_t x3171 = 1;
	int16_t x3172 = INT16_MIN;
	static volatile int32_t t84 = 1;

	t84 = (((x3169/x3170)>>x3171)<=x3172);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3181 = 0U;
	uint8_t x3183 = 0U;
	int32_t x3184 = -6055192;
	volatile int32_t t85 = 1545620;

	t85 = (((x3181/x3182)>>x3183)<=x3184);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3193 = 576LLU;
	int16_t x3194 = INT16_MIN;
	static volatile uint8_t x3195 = 5U;
	volatile int16_t x3196 = -1;
	volatile int32_t t86 = -456240;

	t86 = (((x3193/x3194)>>x3195)<=x3196);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3197 = INT8_MIN;
	int64_t x3198 = INT64_MAX;
	uint8_t x3199 = 57U;
	uint8_t x3200 = UINT8_MAX;
	volatile int32_t t87 = 1857;

	t87 = (((x3197/x3198)>>x3199)<=x3200);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x3201 = -24147162989970541LL;
	int32_t x3202 = INT32_MIN;
	static volatile int64_t x3204 = INT64_MAX;

	t88 = (((x3201/x3202)>>x3203)<=x3204);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3242 = -5163297LL;
	uint8_t x3243 = 1U;
	volatile uint16_t x3244 = 6901U;
	volatile int32_t t89 = 191;

	t89 = (((x3241/x3242)>>x3243)<=x3244);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3329 = INT8_MIN;
	uint16_t x3331 = 1U;
	int32_t x3332 = 1;

	t90 = (((x3329/x3330)>>x3331)<=x3332);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3377 = INT16_MIN;
	int8_t x3378 = INT8_MIN;
	int8_t x3379 = 27;
	volatile int64_t x3380 = INT64_MIN;
	int32_t t91 = 70;

	t91 = (((x3377/x3378)>>x3379)<=x3380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3385 = UINT16_MAX;
	static uint8_t x3386 = UINT8_MAX;
	int8_t x3387 = 7;
	int32_t t92 = 1516080;

	t92 = (((x3385/x3386)>>x3387)<=x3388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x3398 = UINT16_MAX;
	int16_t x3399 = 3;
	int8_t x3400 = -1;

	t93 = (((x3397/x3398)>>x3399)<=x3400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3553 = UINT8_MAX;
	static uint16_t x3554 = UINT16_MAX;
	volatile int32_t t94 = 4773;

	t94 = (((x3553/x3554)>>x3555)<=x3556);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3653 = 11U;
	int64_t x3654 = INT64_MIN;
	uint8_t x3655 = 11U;

	t95 = (((x3653/x3654)>>x3655)<=x3656);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3725 = 830705120U;
	int32_t x3726 = INT32_MIN;
	int64_t x3728 = INT64_MIN;

	t96 = (((x3725/x3726)>>x3727)<=x3728);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3729 = INT16_MIN;
	volatile int32_t x3730 = INT32_MIN;
	volatile int16_t x3731 = 9;
	uint8_t x3732 = UINT8_MAX;
	volatile int32_t t97 = -372214023;

	t97 = (((x3729/x3730)>>x3731)<=x3732);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3777 = INT8_MIN;
	int16_t x3778 = INT16_MAX;
	volatile int8_t x3780 = -1;
	int32_t t98 = 1;

	t98 = (((x3777/x3778)>>x3779)<=x3780);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3885 = 6U;
	int32_t x3886 = -110341;
	int16_t x3887 = 5;
	uint8_t x3888 = 4U;

	t99 = (((x3885/x3886)>>x3887)<=x3888);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
uint32_t x2 = 796788484U;
int16_t x4 = INT16_MIN;
uint32_t t0 = 230804U;
static uint8_t x11 = 12U;
uint64_t x12 = 6878264175LLU;
int32_t x39 = INT32_MAX;
int16_t x51 = -44;
uint64_t t3 = 366811930587424291LLU;
static uint16_t x73 = UINT16_MAX;
int64_t x74 = -1LL;
int16_t x76 = INT16_MIN;
uint64_t x78 = 28LLU;
uint64_t t5 = 12517167447320LLU;
static int32_t t6 = -13478;
uint64_t x125 = 977384335LLU;
static int64_t x126 = INT64_MIN;
int64_t x130 = -260887803975790LL;
uint8_t x131 = 7U;
int8_t x173 = -1;
int8_t x174 = INT8_MIN;
static volatile int64_t x175 = INT64_MIN;
int32_t x176 = INT32_MIN;
volatile int8_t x180 = 2;
int64_t x182 = 7563019811LL;
int32_t x183 = INT32_MIN;
int32_t t15 = -11;
uint64_t x277 = UINT64_MAX;
static uint32_t t22 = 531850522U;
int8_t x330 = INT8_MIN;
int64_t x357 = INT64_MAX;
uint64_t x358 = 3987328LLU;
int64_t x359 = INT64_MAX;
int8_t x448 = -1;
volatile int8_t x474 = INT8_MIN;
int8_t x491 = 0;
uint64_t x492 = UINT64_MAX;
volatile int8_t x499 = -1;
volatile int32_t t29 = 0;
int32_t x539 = 15;
uint32_t x540 = 110163U;
uint32_t t30 = 1U;
volatile int8_t x545 = INT8_MIN;
int64_t x546 = INT64_MIN;
int8_t x547 = -1;
volatile int16_t x556 = 2;
static uint32_t x565 = 169727081U;
volatile int8_t x585 = -4;
int16_t x586 = -7623;
static volatile int64_t t36 = 98262632LL;
int8_t x608 = INT8_MAX;
int16_t x623 = 8;
static volatile int64_t t39 = -17886387LL;
int32_t x658 = -1;
volatile int32_t x712 = -1;
int16_t x733 = INT16_MAX;
int32_t t43 = -7973;
int32_t x739 = -7228;
volatile int32_t x797 = 0;
volatile uint64_t x800 = 167LLU;
uint32_t x838 = 48660U;
int8_t x839 = 13;
static uint8_t x916 = 1U;
int16_t x921 = 558;
static volatile int32_t t50 = -1;
uint32_t x989 = 823U;
volatile uint32_t x992 = 26U;
volatile uint32_t t52 = 15210U;
int16_t x1004 = -1;
uint64_t t54 = 261084513LLU;
int8_t x1106 = INT8_MIN;
int32_t x1107 = INT32_MIN;
volatile int32_t t57 = 23;
int64_t x1110 = -1LL;
int8_t x1149 = 6;
static volatile int8_t x1168 = -1;
uint64_t x1258 = 419LLU;
volatile uint64_t t65 = 6741108572LLU;
int16_t x1292 = -1;
int16_t x1390 = -1;
uint16_t x1392 = 237U;
int64_t t72 = -254690013LL;
uint32_t x1430 = 52796U;
uint64_t x1432 = UINT64_MAX;
static int16_t x1457 = INT16_MAX;
static uint8_t x1463 = UINT8_MAX;
volatile uint64_t x1477 = 47LLU;
int64_t x1479 = INT64_MIN;
int16_t x1548 = -1;
static uint8_t x1576 = 4U;
volatile int64_t x1579 = INT64_MIN;
volatile int64_t t82 = 26408444367229343LL;
volatile int64_t x1581 = -1LL;
static int64_t x1629 = -1LL;
static int64_t x1632 = 2353LL;
static int8_t x1652 = INT8_MAX;
int16_t x1681 = 13856;
int32_t x1694 = INT32_MIN;
volatile int16_t x1695 = 1;
volatile int64_t x1768 = -1LL;
volatile uint32_t t96 = 1530813U;
static uint8_t x1831 = 0U;
int32_t x1860 = 3;


void f0(void) {
	static volatile uint64_t x3 = 30LLU;

	t0 = ((x1-x2)<<(x3%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -1LL;
	volatile int16_t x10 = INT16_MIN;
	volatile int64_t t1 = -2171285378656LL;

	t1 = ((x9-x10)<<(x11%x12));

	if (t1 != 134213632LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MIN;
	static int8_t x40 = -1;
	volatile int32_t t2 = 0;

	t2 = ((x37-x38)<<(x39%x40));

	if (t2 != 32895) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x49 = 4;
	uint64_t x50 = UINT64_MAX;
	uint16_t x52 = 2U;

	t3 = ((x49-x50)<<(x51%x52));

	if (t3 != 5LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x75 = 6;
	static int64_t t4 = 7548295980709LL;

	t4 = ((x73-x74)<<(x75%x76));

	if (t4 != 4194304LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x77 = -2320;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;

	t5 = ((x77-x78)<<(x79%x80));

	if (t5 != 18446744073709549268LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MAX;
	static uint8_t x91 = UINT8_MAX;
	static uint8_t x92 = UINT8_MAX;

	t6 = ((x89-x90)<<(x91%x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x127 = 2329LLU;
	uint16_t x128 = 13U;
	volatile uint64_t t7 = 500848428LLU;

	t7 = ((x125-x126)<<(x127%x128));

	if (t7 != 3909537340LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x129 = INT16_MIN;
	int32_t x132 = -1;
	int64_t t8 = 7375LL;

	t8 = ((x129-x130)<<(x131%x132));

	if (t8 != 260887803943022LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x133 = 11888U;
	uint16_t x134 = 0U;
	volatile int16_t x135 = 873;
	volatile int16_t x136 = -1;
	int32_t t9 = -272668;

	t9 = ((x133-x134)<<(x135%x136));

	if (t9 != 11888) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x141 = -19;
	static uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 0U;
	int16_t x144 = INT16_MIN;
	static uint32_t t10 = 9U;

	t10 = ((x141-x142)<<(x143%x144));

	if (t10 != 4294967278U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x149 = INT8_MIN;
	int64_t x150 = -306619089423176LL;
	static volatile uint32_t x151 = 2U;
	uint16_t x152 = 31U;
	volatile int64_t t11 = 502647399730LL;

	t11 = ((x149-x150)<<(x151%x152));

	if (t11 != 1226476357692192LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t t12 = 40775;

	t12 = ((x173-x174)<<(x175%x176));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x177 = INT16_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	uint32_t t13 = 2580U;

	t13 = ((x177-x178)<<(x179%x180));

	if (t13 != 4294934529U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x181 = 52515269505599466LLU;
	static int16_t x184 = INT16_MIN;
	static volatile uint64_t t14 = 21796712249LLU;

	t14 = ((x181-x182)<<(x183%x184));

	if (t14 != 52515261942579655LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x185 = 18;
	int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	static uint64_t x188 = UINT64_MAX;

	t15 = ((x185-x186)<<(x187%x188));

	if (t15 != 32786) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x217 = 45;
	uint8_t x218 = 0U;
	static uint8_t x219 = 3U;
	uint16_t x220 = UINT16_MAX;
	static int32_t t16 = 4860993;

	t16 = ((x217-x218)<<(x219%x220));

	if (t16 != 360) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x237 = 1333453894109974LLU;
	int8_t x238 = -10;
	uint16_t x239 = 30U;
	static volatile int16_t x240 = INT16_MIN;
	static uint64_t t17 = 51LLU;

	t17 = ((x237-x238)<<(x239%x240));

	if (t17 != 4281712442808991744LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x249 = -1;
	volatile int64_t x250 = -127LL;
	int16_t x251 = INT16_MAX;
	int8_t x252 = INT8_MAX;
	int64_t t18 = -22915995082855565LL;

	t18 = ((x249-x250)<<(x251%x252));

	if (t18 != 252LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x278 = INT32_MIN;
	static volatile int8_t x279 = INT8_MAX;
	uint16_t x280 = 29U;
	static volatile uint64_t t19 = 14185048224067LLU;

	t19 = ((x277-x278)<<(x279%x280));

	if (t19 != 4398046509056LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x285 = -1258;
	uint32_t x286 = 501709U;
	int16_t x287 = -1;
	static uint64_t x288 = UINT64_MAX;
	volatile uint32_t t20 = 7U;

	t20 = ((x285-x286)<<(x287%x288));

	if (t20 != 4294464329U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x297 = INT64_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = 111632885268226140LL;
	static uint8_t x300 = 25U;
	uint64_t t21 = 1653533437148907049LLU;

	t21 = ((x297-x298)<<(x299%x300));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x321 = INT16_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MAX;
	int8_t x324 = INT8_MAX;

	t22 = ((x321-x322)<<(x323%x324));

	if (t22 != 4294934529U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x329 = 0LL;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;
	static int64_t t23 = 806263LL;

	t23 = ((x329-x330)<<(x331%x332));

	if (t23 != 128LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x360 = -1;
	volatile uint64_t t24 = 124LLU;

	t24 = ((x357-x358)<<(x359%x360));

	if (t24 != 9223372036850788479LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x445 = -1;
	volatile uint32_t x446 = 1U;
	uint16_t x447 = UINT16_MAX;
	uint32_t t25 = 2U;

	t25 = ((x445-x446)<<(x447%x448));

	if (t25 != 4294967294U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x449 = 23;
	volatile int64_t x450 = -1LL;
	int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MIN;
	int64_t t26 = 1721996693620716212LL;

	t26 = ((x449-x450)<<(x451%x452));

	if (t26 != 24LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x473 = -109;
	int32_t x475 = INT32_MIN;
	static volatile int16_t x476 = -1;
	volatile int32_t t27 = 2991;

	t27 = ((x473-x474)<<(x475%x476));

	if (t27 != 19) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x489 = UINT16_MAX;
	volatile uint8_t x490 = 16U;
	int32_t t28 = 15199479;

	t28 = ((x489-x490)<<(x491%x492));

	if (t28 != 65519) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x497 = -1;
	int8_t x498 = INT8_MIN;
	uint64_t x500 = UINT64_MAX;

	t29 = ((x497-x498)<<(x499%x500));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x537 = 1034U;
	uint32_t x538 = UINT32_MAX;

	t30 = ((x537-x538)<<(x539%x540));

	if (t30 != 33914880U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x548 = -1;
	int64_t t31 = -65501463816LL;

	t31 = ((x545-x546)<<(x547%x548));

	if (t31 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x553 = INT8_MIN;
	int64_t x554 = INT64_MIN;
	int32_t x555 = -7794;
	volatile int64_t t32 = 1626LL;

	t32 = ((x553-x554)<<(x555%x556));

	if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x557 = INT16_MIN;
	volatile uint32_t x558 = 230854381U;
	int32_t x559 = INT32_MIN;
	int16_t x560 = INT16_MIN;
	uint32_t t33 = 138022417U;

	t33 = ((x557-x558)<<(x559%x560));

	if (t33 != 4064080147U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x566 = -1;
	uint16_t x567 = 141U;
	int32_t x568 = -1;
	volatile uint32_t t34 = 3438U;

	t34 = ((x565-x566)<<(x567%x568));

	if (t34 != 169727082U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x587 = 0;
	uint16_t x588 = UINT16_MAX;
	int32_t t35 = -19;

	t35 = ((x585-x586)<<(x587%x588));

	if (t35 != 7619) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x601 = 29019773LL;
	int16_t x602 = -1;
	int32_t x603 = INT32_MIN;
	volatile int16_t x604 = -1;

	t36 = ((x601-x602)<<(x603%x604));

	if (t36 != 29019774LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x605 = 15916;
	static int8_t x606 = INT8_MIN;
	static uint32_t x607 = UINT32_MAX;
	int32_t t37 = -3;

	t37 = ((x605-x606)<<(x607%x608));

	if (t37 != 525729792) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x617 = INT16_MAX;
	int64_t x618 = -1LL;
	uint8_t x619 = 9U;
	int8_t x620 = INT8_MAX;
	static volatile int64_t t38 = -3LL;

	t38 = ((x617-x618)<<(x619%x620));

	if (t38 != 16777216LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x621 = 21603876114LL;
	uint8_t x622 = UINT8_MAX;
	int64_t x624 = 242846920579LL;

	t39 = ((x621-x622)<<(x623%x624));

	if (t39 != 5530592219904LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x657 = 1116083U;
	int64_t x659 = INT64_MIN;
	volatile int32_t x660 = INT32_MIN;
	volatile uint32_t t40 = 4036052U;

	t40 = ((x657-x658)<<(x659%x660));

	if (t40 != 1116084U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x693 = INT16_MIN;
	volatile int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = -1;
	volatile int64_t t41 = -43590105985LL;

	t41 = ((x693-x694)<<(x695%x696));

	if (t41 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x709 = -1;
	int8_t x710 = -36;
	volatile uint16_t x711 = 129U;
	volatile int32_t t42 = -1798;

	t42 = ((x709-x710)<<(x711%x712));

	if (t42 != 35) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x734 = 1;
	int64_t x735 = INT64_MIN;
	static volatile int64_t x736 = INT64_MIN;

	t43 = ((x733-x734)<<(x735%x736));

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x737 = UINT8_MAX;
	uint32_t x738 = 987U;
	int32_t x740 = 1;
	uint32_t t44 = 14U;

	t44 = ((x737-x738)<<(x739%x740));

	if (t44 != 4294966564U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x789 = 2LLU;
	static int8_t x790 = INT8_MIN;
	int64_t x791 = -5813924099907LL;
	static int16_t x792 = -1;
	static uint64_t t45 = 967143781917473898LLU;

	t45 = ((x789-x790)<<(x791%x792));

	if (t45 != 130LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x798 = UINT64_MAX;
	static int32_t x799 = 60161;
	uint64_t t46 = 349245246037396LLU;

	t46 = ((x797-x798)<<(x799%x800));

	if (t46 != 2199023255552LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x809 = -1LL;
	int16_t x810 = -2254;
	static int64_t x811 = INT64_MIN;
	volatile int8_t x812 = INT8_MIN;
	volatile int64_t t47 = 49066367LL;

	t47 = ((x809-x810)<<(x811%x812));

	if (t47 != 2253LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x837 = 15101528LLU;
	static int16_t x840 = INT16_MIN;
	uint64_t t48 = 32650213176495LLU;

	t48 = ((x837-x838)<<(x839%x840));

	if (t48 != 123313094656LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x913 = 15928U;
	int64_t x914 = -127435874735933930LL;
	int32_t x915 = INT32_MIN;
	volatile int64_t t49 = -114LL;

	t49 = ((x913-x914)<<(x915%x916));

	if (t49 != 127435874735949858LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x922 = 6U;
	uint64_t x923 = 7314981826LLU;
	uint16_t x924 = 7U;

	t50 = ((x921-x922)<<(x923%x924));

	if (t50 != 17664) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x957 = UINT32_MAX;
	uint32_t x958 = 126321U;
	int64_t x959 = INT64_MIN;
	int16_t x960 = -1;
	volatile uint32_t t51 = 14013U;

	t51 = ((x957-x958)<<(x959%x960));

	if (t51 != 4294840974U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x990 = -1;
	uint16_t x991 = UINT16_MAX;

	t52 = ((x989-x990)<<(x991%x992));

	if (t52 != 27000832U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1001 = -21021;
	int16_t x1002 = INT16_MIN;
	int16_t x1003 = 0;
	volatile int32_t t53 = -2;

	t53 = ((x1001-x1002)<<(x1003%x1004));

	if (t53 != 11747) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1005 = INT16_MAX;
	volatile uint64_t x1006 = 1328LLU;
	volatile int32_t x1007 = 11307;
	volatile uint8_t x1008 = 1U;

	t54 = ((x1005-x1006)<<(x1007%x1008));

	if (t54 != 31439LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1037 = INT64_MAX;
	static volatile int8_t x1038 = 5;
	volatile int64_t x1039 = -12116LL;
	int8_t x1040 = 13;
	int64_t t55 = -18682640646611LL;

	t55 = ((x1037-x1038)<<(x1039%x1040));

	if (t55 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1045 = 19LLU;
	static int64_t x1046 = INT64_MIN;
	uint64_t x1047 = 226844892282508463LLU;
	int16_t x1048 = 8;
	static uint64_t t56 = 4293643LLU;

	t56 = ((x1045-x1046)<<(x1047%x1048));

	if (t56 != 2432LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1105 = -14;
	static int64_t x1108 = -1LL;

	t57 = ((x1105-x1106)<<(x1107%x1108));

	if (t57 != 114) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1109 = INT32_MAX;
	uint16_t x1111 = 25U;
	static int32_t x1112 = INT32_MIN;
	volatile int64_t t58 = 8721054789170072LL;

	t58 = ((x1109-x1110)<<(x1111%x1112));

	if (t58 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1141 = 8993U;
	int64_t x1142 = -1LL;
	uint16_t x1143 = 1021U;
	uint16_t x1144 = 15U;
	static int64_t t59 = 5663442744240244LL;

	t59 = ((x1141-x1142)<<(x1143%x1144));

	if (t59 != 17988LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1150 = -352723522;
	int32_t x1151 = INT32_MIN;
	int8_t x1152 = 1;
	int32_t t60 = 0;

	t60 = ((x1149-x1150)<<(x1151%x1152));

	if (t60 != 352723528) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1161 = -63;
	uint32_t x1162 = 5485U;
	volatile int32_t x1163 = -1;
	static int64_t x1164 = -1LL;
	static volatile uint32_t t61 = 2U;

	t61 = ((x1161-x1162)<<(x1163%x1164));

	if (t61 != 4294961748U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1165 = INT64_MAX;
	int32_t x1166 = INT32_MAX;
	uint8_t x1167 = 3U;
	int64_t t62 = 243201013769LL;

	t62 = ((x1165-x1166)<<(x1167%x1168));

	if (t62 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1201 = 58561933LLU;
	static uint16_t x1202 = UINT16_MAX;
	int8_t x1203 = -1;
	static volatile int16_t x1204 = -1;
	uint64_t t63 = 99461834LLU;

	t63 = ((x1201-x1202)<<(x1203%x1204));

	if (t63 != 58496398LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x1233 = INT8_MAX;
	int8_t x1234 = INT8_MIN;
	uint32_t x1235 = 62611U;
	int64_t x1236 = -1LL;
	static int32_t t64 = 73;

	t64 = ((x1233-x1234)<<(x1235%x1236));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x1257 = INT8_MAX;
	int8_t x1259 = INT8_MIN;
	int64_t x1260 = -1LL;

	t65 = ((x1257-x1258)<<(x1259%x1260));

	if (t65 != 18446744073709551324LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1289 = -1;
	int32_t x1290 = -468901009;
	static int8_t x1291 = INT8_MIN;
	volatile int32_t t66 = -119;

	t66 = ((x1289-x1290)<<(x1291%x1292));

	if (t66 != 468901008) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x1309 = INT16_MAX;
	int64_t x1310 = -1LL;
	volatile int32_t x1311 = -1;
	uint32_t x1312 = UINT32_MAX;
	int64_t t67 = 4845LL;

	t67 = ((x1309-x1310)<<(x1311%x1312));

	if (t67 != 32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1341 = -1;
	uint64_t x1342 = 3154612LLU;
	int8_t x1343 = -3;
	int16_t x1344 = -1;
	volatile uint64_t t68 = 2742LLU;

	t68 = ((x1341-x1342)<<(x1343%x1344));

	if (t68 != 18446744073706397003LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x1389 = UINT8_MAX;
	uint8_t x1391 = 5U;
	volatile int32_t t69 = 4144;

	t69 = ((x1389-x1390)<<(x1391%x1392));

	if (t69 != 8192) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1393 = -1;
	int16_t x1394 = INT16_MIN;
	int16_t x1395 = -13419;
	static int32_t x1396 = -1;
	volatile int32_t t70 = -112150;

	t70 = ((x1393-x1394)<<(x1395%x1396));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1397 = -295116680;
	static volatile uint32_t x1398 = 35U;
	static uint64_t x1399 = 27573602675244LLU;
	static uint32_t x1400 = 6U;
	volatile uint32_t t71 = 330U;

	t71 = ((x1397-x1398)<<(x1399%x1400));

	if (t71 != 3999850581U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1409 = 147U;
	int64_t x1410 = -521552849LL;
	int32_t x1411 = 1;
	int64_t x1412 = -2631LL;

	t72 = ((x1409-x1410)<<(x1411%x1412));

	if (t72 != 1043105992LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x1425 = INT8_MAX;
	volatile int16_t x1426 = INT16_MIN;
	int8_t x1427 = -1;
	static uint32_t x1428 = UINT32_MAX;
	int32_t t73 = 1;

	t73 = ((x1425-x1426)<<(x1427%x1428));

	if (t73 != 32895) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1429 = INT8_MIN;
	int32_t x1431 = -1;
	volatile uint32_t t74 = 7288144U;

	t74 = ((x1429-x1430)<<(x1431%x1432));

	if (t74 != 4294914372U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1449 = INT8_MIN;
	uint64_t x1450 = UINT64_MAX;
	volatile int64_t x1451 = INT64_MAX;
	volatile int16_t x1452 = -1;
	volatile uint64_t t75 = 4LLU;

	t75 = ((x1449-x1450)<<(x1451%x1452));

	if (t75 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1458 = INT8_MAX;
	volatile uint8_t x1459 = 1U;
	uint64_t x1460 = 511676405182591442LLU;
	int32_t t76 = 22;

	t76 = ((x1457-x1458)<<(x1459%x1460));

	if (t76 != 65280) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x1461 = INT8_MIN;
	static int16_t x1462 = INT16_MIN;
	int32_t x1464 = -1;
	volatile int32_t t77 = 1;

	t77 = ((x1461-x1462)<<(x1463%x1464));

	if (t77 != 32640) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x1465 = 1023196843115582LLU;
	int32_t x1466 = INT32_MAX;
	static uint32_t x1467 = UINT32_MAX;
	int8_t x1468 = INT8_MAX;
	static uint64_t t78 = 10228232633540LLU;

	t78 = ((x1465-x1466)<<(x1467%x1468));

	if (t78 != 15081299712757694464LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1478 = INT16_MAX;
	int8_t x1480 = 1;
	volatile uint64_t t79 = 1568363773LLU;

	t79 = ((x1477-x1478)<<(x1479%x1480));

	if (t79 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1545 = -1;
	int8_t x1546 = INT8_MIN;
	int8_t x1547 = INT8_MIN;
	volatile int32_t t80 = 214;

	t80 = ((x1545-x1546)<<(x1547%x1548));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1573 = 5578;
	int16_t x1574 = INT16_MIN;
	static uint16_t x1575 = UINT16_MAX;
	static int32_t t81 = 16167665;

	t81 = ((x1573-x1574)<<(x1575%x1576));

	if (t81 != 306768) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x1577 = INT8_MAX;
	int64_t x1578 = -201891772974240LL;
	static int16_t x1580 = 4;

	t82 = ((x1577-x1578)<<(x1579%x1580));

	if (t82 != 201891772974367LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1582 = UINT64_MAX;
	static volatile uint64_t x1583 = UINT64_MAX;
	static volatile int8_t x1584 = 10;
	uint64_t t83 = 9020730334482758LLU;

	t83 = ((x1581-x1582)<<(x1583%x1584));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1589 = -1;
	int32_t x1590 = -7;
	int64_t x1591 = INT64_MAX;
	volatile uint8_t x1592 = 13U;
	volatile int32_t t84 = -211844127;

	t84 = ((x1589-x1590)<<(x1591%x1592));

	if (t84 != 768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1605 = INT8_MAX;
	static uint64_t x1606 = UINT64_MAX;
	volatile uint16_t x1607 = 37U;
	volatile int64_t x1608 = INT64_MIN;
	uint64_t t85 = 164LLU;

	t85 = ((x1605-x1606)<<(x1607%x1608));

	if (t85 != 17592186044416LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1625 = 0U;
	uint32_t x1626 = UINT32_MAX;
	volatile int32_t x1627 = INT32_MAX;
	int8_t x1628 = INT8_MAX;
	volatile uint32_t t86 = 637507U;

	t86 = ((x1625-x1626)<<(x1627%x1628));

	if (t86 != 128U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1630 = INT32_MIN;
	uint16_t x1631 = 0U;
	volatile int64_t t87 = -1011830799425LL;

	t87 = ((x1629-x1630)<<(x1631%x1632));

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1637 = 275658635336392754LLU;
	volatile uint8_t x1638 = 1U;
	uint16_t x1639 = 61U;
	int8_t x1640 = -30;
	volatile uint64_t t88 = 5LLU;

	t88 = ((x1637-x1638)<<(x1639%x1640));

	if (t88 != 551317270672785506LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1645 = 7LLU;
	volatile uint16_t x1646 = UINT16_MAX;
	volatile int8_t x1647 = INT8_MAX;
	int32_t x1648 = -1;
	static volatile uint64_t t89 = 94LLU;

	t89 = ((x1645-x1646)<<(x1647%x1648));

	if (t89 != 18446744073709486088LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x1649 = 31961876781628LLU;
	int8_t x1650 = -1;
	uint32_t x1651 = 113166U;
	static uint64_t t90 = 107958LLU;

	t90 = ((x1649-x1650)<<(x1651%x1652));

	if (t90 != 16364480912194048LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1665 = INT64_MAX;
	int32_t x1666 = 6;
	volatile int64_t x1667 = -3656880483587524LL;
	int16_t x1668 = -1;
	int64_t t91 = -43478LL;

	t91 = ((x1665-x1666)<<(x1667%x1668));

	if (t91 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1682 = 2;
	int8_t x1683 = INT8_MIN;
	volatile int8_t x1684 = -1;
	int32_t t92 = 23;

	t92 = ((x1681-x1682)<<(x1683%x1684));

	if (t92 != 13854) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1693 = UINT32_MAX;
	volatile uint16_t x1696 = 2346U;
	volatile uint32_t t93 = 2U;

	t93 = ((x1693-x1694)<<(x1695%x1696));

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1765 = 130;
	uint32_t x1766 = 20673835U;
	static int32_t x1767 = 2512006;
	static volatile uint32_t t94 = 1U;

	t94 = ((x1765-x1766)<<(x1767%x1768));

	if (t94 != 4274293591U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1781 = 2071548U;
	static volatile uint32_t x1782 = 59691483U;
	int16_t x1783 = 30;
	int16_t x1784 = INT16_MIN;
	uint32_t t95 = 654000309U;

	t95 = ((x1781-x1782)<<(x1783%x1784));

	if (t95 != 1073741824U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x1793 = UINT16_MAX;
	uint32_t x1794 = 75U;
	uint8_t x1795 = 15U;
	int32_t x1796 = -12;

	t96 = ((x1793-x1794)<<(x1795%x1796));

	if (t96 != 523680U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1829 = UINT8_MAX;
	int64_t x1830 = -184LL;
	static uint32_t x1832 = UINT32_MAX;
	static int64_t t97 = -3799244426939162LL;

	t97 = ((x1829-x1830)<<(x1831%x1832));

	if (t97 != 439LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1833 = INT16_MAX;
	volatile uint8_t x1834 = UINT8_MAX;
	uint8_t x1835 = 13U;
	volatile uint64_t x1836 = 471LLU;
	int32_t t98 = -749207782;

	t98 = ((x1833-x1834)<<(x1835%x1836));

	if (t98 != 266338304) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1857 = UINT64_MAX;
	int32_t x1858 = INT32_MAX;
	static uint16_t x1859 = 20U;
	static uint64_t t99 = 28488929353559204LLU;

	t99 = ((x1857-x1858)<<(x1859%x1860));

	if (t99 != 18446744065119617024LLU) { NG(); } else { ; }
	
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


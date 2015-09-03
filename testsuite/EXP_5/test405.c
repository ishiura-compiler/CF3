#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x38 = 1737690511U;
static uint16_t x98 = 0U;
uint8_t x128 = 1U;
static int64_t x161 = -1LL;
static int16_t x164 = 1;
uint32_t t5 = 0U;
int32_t t8 = -689343;
uint64_t t9 = 876691381577363405LLU;
int64_t t10 = INT64_MAX;
int64_t x441 = -1LL;
int8_t x444 = 1;
int64_t x447 = INT64_MAX;
uint32_t x535 = 1164009U;
uint64_t t14 = 496210788808487LLU;
static int16_t x619 = INT16_MIN;
uint32_t x666 = 652610U;
static volatile int64_t t16 = -2220313LL;
uint32_t x797 = UINT32_MAX;
volatile int64_t x799 = 6LL;
uint64_t x943 = 282813750289429441LLU;
uint16_t x951 = 338U;
int8_t x1041 = -1;
volatile uint64_t x1043 = 486337620LLU;
uint64_t x1086 = UINT64_MAX;
uint8_t x1088 = 7U;
int64_t x1121 = -32785163LL;
int8_t x1249 = -59;
volatile int64_t t29 = -633348231707693LL;
volatile int64_t t30 = -513376336462500LL;
uint32_t x1408 = 6U;
uint32_t x1436 = 7U;
static int64_t t34 = -120848LL;
static uint32_t x1694 = UINT32_MAX;
uint8_t x1842 = 0U;
volatile uint32_t x1844 = 24U;
int64_t t42 = 1LL;
uint16_t x1914 = 6219U;
uint64_t x1915 = 3337LLU;
volatile uint64_t t43 = 3009358LLU;
uint64_t x2046 = UINT64_MAX;
static int8_t x2105 = INT8_MIN;
uint64_t x2106 = 71LLU;
volatile uint64_t t47 = 2253545983LLU;
int16_t x2337 = INT16_MAX;
uint64_t x2338 = 55395591663592LLU;
volatile uint8_t x2339 = 10U;
uint8_t x2340 = 2U;
uint32_t t50 = 42248U;
static volatile int16_t x2389 = INT16_MAX;
uint32_t t53 = UINT32_MAX;
int8_t x2514 = -1;
uint64_t x2515 = UINT64_MAX;
volatile uint16_t x2653 = UINT16_MAX;
uint16_t x2705 = UINT16_MAX;
uint64_t x2708 = 0LLU;
volatile int64_t x2967 = 216LL;
volatile int32_t x3147 = -68;
volatile int64_t x3305 = INT64_MIN;
volatile int64_t x3354 = -7522LL;
volatile uint64_t x3591 = 1172234227206792378LLU;
static int32_t x3642 = INT32_MIN;
static int64_t x3849 = -1LL;
uint64_t x3850 = UINT64_MAX;
int64_t x3917 = -1LL;
int32_t x3936 = 7;
static volatile int64_t t76 = 598034116976649168LL;
volatile int8_t x4097 = 56;
uint64_t x4099 = UINT64_MAX;
int16_t x4122 = -30;
uint64_t x4147 = UINT64_MAX;
uint64_t x4209 = 9LLU;
int8_t x4293 = INT8_MAX;
volatile uint8_t x4294 = 0U;
int16_t x4343 = INT16_MIN;
uint64_t t88 = 26717960543LLU;
uint8_t x4374 = 63U;
static int64_t x4375 = 2LL;
static uint32_t x4413 = UINT32_MAX;
volatile int8_t x4416 = 6;
uint16_t x4452 = 26U;
int8_t x4583 = -1;
int8_t x4584 = 1;
static uint32_t t94 = 551U;
static volatile uint16_t x4589 = 73U;
volatile uint8_t x4591 = UINT8_MAX;
int32_t t96 = 0;
uint32_t x4750 = UINT32_MAX;
int8_t x4765 = INT8_MIN;
static int32_t t99 = 0;


void f0(void) {
	uint8_t x1 = 15U;
	int8_t x2 = INT8_MIN;
	int8_t x3 = -1;
	volatile uint32_t x4 = 10U;
	static int32_t t0 = 373125088;

	t0 = (x1-((x2*x3)<<x4));

	if (t0 != -131057) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 133145340763LLU;
	int32_t x39 = 128978;
	static volatile int8_t x40 = 1;
	static volatile uint64_t t1 = 2457577205657LLU;

	t1 = (x37-((x38*x39)<<x40));

	if (t1 != 129713732287LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x97 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 6U;
	int64_t t2 = INT64_MIN;

	t2 = (x97-((x98*x99)<<x100));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	uint64_t x127 = 3055716243428698LLU;
	volatile uint64_t t3 = 67397316097LLU;

	t3 = (x125-((x126*x127)<<x128));

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x162 = -1;
	volatile int8_t x163 = -14;
	volatile int64_t t4 = -2471464386645450LL;

	t4 = (x161-((x162*x163)<<x164));

	if (t4 != -29LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x293 = -1;
	static int16_t x294 = INT16_MIN;
	uint32_t x295 = 5U;
	static uint16_t x296 = 0U;

	t5 = (x293-((x294*x295)<<x296));

	if (t5 != 163839U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x321 = UINT32_MAX;
	volatile uint16_t x322 = 10578U;
	uint32_t x323 = 77808U;
	static int16_t x324 = 0;
	volatile uint32_t t6 = 77U;

	t6 = (x321-((x322*x323)<<x324));

	if (t6 != 3471914271U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 50U;
	uint8_t x328 = 26U;
	uint32_t t7 = 7138U;

	t7 = (x325-((x326*x327)<<x328));

	if (t7 != 1207959552U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = 15047;
	int8_t x332 = 1;

	t8 = (x329-((x330*x331)<<x332));

	if (t8 != -1972243058) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x401 = 48U;
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 14U;

	t9 = (x401-((x402*x403)<<x404));

	if (t9 != 35184372072496LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x429 = INT64_MAX;
	int32_t x430 = -1;
	volatile int64_t x431 = 0LL;
	int16_t x432 = 26;

	t10 = (x429-((x430*x431)<<x432));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x442 = INT32_MAX;
	uint32_t x443 = UINT32_MAX;
	static volatile int64_t t11 = 206100LL;

	t11 = (x441-((x442*x443)<<x444));

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x445 = INT16_MIN;
	uint64_t x446 = UINT64_MAX;
	uint8_t x448 = 37U;
	uint64_t t12 = 1450653922828830LLU;

	t12 = (x445-((x446*x447)<<x448));

	if (t12 != 18446743936270565376LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x533 = -1LL;
	int8_t x534 = INT8_MIN;
	uint8_t x536 = 28U;
	int64_t t13 = 7630807805587LL;

	t13 = (x533-((x534*x535)<<x536));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x565 = INT32_MAX;
	int8_t x566 = INT8_MAX;
	static uint64_t x567 = 49806152580LLU;
	int8_t x568 = 1;

	t14 = (x565-((x566*x567)<<x568));

	if (t14 != 18446731425094279943LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x617 = INT32_MIN;
	uint64_t x618 = 2718LLU;
	volatile uint8_t x620 = 25U;
	volatile uint64_t t15 = 892LLU;

	t15 = (x617-((x618*x619)<<x620));

	if (t15 != 2988470456811520LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x665 = -3426689227769790556LL;
	uint8_t x667 = UINT8_MAX;
	uint8_t x668 = 0U;

	t16 = (x665-((x666*x667)<<x668));

	if (t16 != -3426689227936206106LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x717 = UINT64_MAX;
	volatile uint16_t x718 = 12819U;
	volatile int64_t x719 = 5716528638518LL;
	int8_t x720 = 1;
	uint64_t t17 = 16739693LLU;

	t17 = (x717-((x718*x719)<<x720));

	if (t17 != 18300183712475227131LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x798 = 10U;
	int8_t x800 = 1;
	volatile int64_t t18 = -4187773211632720LL;

	t18 = (x797-((x798*x799)<<x800));

	if (t18 != 4294967175LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x941 = 2U;
	uint8_t x942 = UINT8_MAX;
	uint64_t x944 = 6LLU;
	volatile uint64_t t19 = 99565078LLU;

	t19 = (x941-((x942*x943)<<x944));

	if (t19 != 14612357777608978498LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x949 = INT64_MAX;
	uint8_t x950 = UINT8_MAX;
	static int32_t x952 = 1;
	int64_t t20 = 251564991878721621LL;

	t20 = (x949-((x950*x951)<<x952));

	if (t20 != 9223372036854603427LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x965 = UINT32_MAX;
	int8_t x966 = INT8_MIN;
	volatile int64_t x967 = -235LL;
	uint32_t x968 = 43U;
	int64_t t21 = 1923432067830582LL;

	t21 = (x965-((x966*x967)<<x968));

	if (t21 != -264586473813049345LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1042 = 5354605369LL;
	static int16_t x1044 = 58;
	volatile uint64_t t22 = 7814304432471LLU;

	t22 = (x1041-((x1042*x1043)<<x1044));

	if (t22 != 3458764513820540927LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1081 = UINT16_MAX;
	int8_t x1082 = INT8_MAX;
	volatile uint64_t x1083 = 394464462482405LLU;
	int8_t x1084 = 0;
	volatile uint64_t t23 = 102723598143948LLU;

	t23 = (x1081-((x1082*x1083)<<x1084));

	if (t23 != 18396647086974351716LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1085 = -1;
	int16_t x1087 = INT16_MIN;
	volatile uint64_t t24 = 1LLU;

	t24 = (x1085-((x1086*x1087)<<x1088));

	if (t24 != 18446744073705357311LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1122 = 2U;
	int8_t x1123 = -1;
	uint16_t x1124 = 1U;
	int64_t t25 = -230LL;

	t25 = (x1121-((x1122*x1123)<<x1124));

	if (t25 != -4327752455LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1250 = UINT8_MAX;
	uint32_t x1251 = 252U;
	uint8_t x1252 = 18U;
	volatile uint32_t t26 = 546U;

	t26 = (x1249-((x1250*x1251)<<x1252));

	if (t26 != 334495685U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1277 = UINT8_MAX;
	static int32_t x1278 = INT32_MIN;
	volatile uint64_t x1279 = 1LLU;
	volatile int16_t x1280 = 1;
	uint64_t t27 = 1567156990LLU;

	t27 = (x1277-((x1278*x1279)<<x1280));

	if (t27 != 4294967551LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1337 = INT8_MIN;
	int16_t x1338 = INT16_MAX;
	uint8_t x1339 = UINT8_MAX;
	static uint32_t x1340 = 4U;
	int32_t t28 = 6851828;

	t28 = (x1337-((x1338*x1339)<<x1340));

	if (t28 != -133689488) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1377 = -1LL;
	volatile uint16_t x1378 = 115U;
	int8_t x1379 = 11;
	uint8_t x1380 = 1U;

	t29 = (x1377-((x1378*x1379)<<x1380));

	if (t29 != -2531LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1381 = -1;
	int32_t x1382 = -2;
	int64_t x1383 = -1LL;
	int8_t x1384 = 47;

	t30 = (x1381-((x1382*x1383)<<x1384));

	if (t30 != -281474976710657LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1405 = -1;
	uint32_t x1406 = 120996210U;
	int16_t x1407 = -123;
	volatile uint32_t t31 = 1014569079U;

	t31 = (x1405-((x1406*x1407)<<x1408));

	if (t31 != 3294392703U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1433 = UINT8_MAX;
	int8_t x1434 = INT8_MAX;
	uint32_t x1435 = 179678U;
	volatile uint32_t t32 = 64862U;

	t32 = (x1433-((x1434*x1435)<<x1436));

	if (t32 != 1374121983U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1437 = INT32_MIN;
	int64_t x1438 = -1LL;
	uint64_t x1439 = UINT64_MAX;
	volatile uint8_t x1440 = 14U;
	uint64_t t33 = 880302970319LLU;

	t33 = (x1437-((x1438*x1439)<<x1440));

	if (t33 != 18446744071562051584LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1609 = -31680LL;
	uint16_t x1610 = UINT16_MAX;
	static uint16_t x1611 = 3738U;
	static int32_t x1612 = 1;

	t34 = (x1609-((x1610*x1611)<<x1612));

	if (t34 != -489971340LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1621 = 98;
	static int64_t x1622 = -1LL;
	static int16_t x1623 = INT16_MIN;
	uint16_t x1624 = 0U;
	volatile int64_t t35 = 3192707010212LL;

	t35 = (x1621-((x1622*x1623)<<x1624));

	if (t35 != -32670LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1637 = INT32_MAX;
	uint32_t x1638 = 104191632U;
	int16_t x1639 = INT16_MAX;
	uint8_t x1640 = 0U;
	uint32_t t36 = 5U;

	t36 = (x1637-((x1638*x1639)<<x1640));

	if (t36 != 2599278223U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1653 = INT32_MAX;
	int32_t x1654 = 463643;
	uint32_t x1655 = UINT32_MAX;
	uint32_t x1656 = 15U;
	uint32_t t37 = 113U;

	t37 = (x1653-((x1654*x1655)<<x1656));

	if (t37 != 160268287U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1693 = -1;
	int16_t x1695 = INT16_MAX;
	volatile int16_t x1696 = 1;
	uint32_t t38 = 8687200U;

	t38 = (x1693-((x1694*x1695)<<x1696));

	if (t38 != 65533U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1721 = -3;
	volatile uint64_t x1722 = 11674823418903299LLU;
	int64_t x1723 = INT64_MIN;
	static uint8_t x1724 = 1U;
	uint64_t t39 = 3176407667LLU;

	t39 = (x1721-((x1722*x1723)<<x1724));

	if (t39 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1749 = -7;
	uint32_t x1750 = 1943U;
	int16_t x1751 = INT16_MAX;
	uint16_t x1752 = 6U;
	uint32_t t40 = 256569U;

	t40 = (x1749-((x1750*x1751)<<x1752));

	if (t40 != 220325305U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1797 = INT8_MAX;
	volatile uint8_t x1798 = UINT8_MAX;
	static volatile uint64_t x1799 = 6998734681LLU;
	int32_t x1800 = 0;
	uint64_t t41 = 54842163011383397LLU;

	t41 = (x1797-((x1798*x1799)<<x1800));

	if (t41 != 18446742289032208088LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1841 = -1LL;
	static uint8_t x1843 = UINT8_MAX;

	t42 = (x1841-((x1842*x1843)<<x1844));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1913 = UINT32_MAX;
	int8_t x1916 = 14;

	t43 = (x1913-((x1914*x1915)<<x1916));

	if (t43 != 18446743737990594559LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2009 = INT16_MIN;
	volatile uint32_t x2010 = UINT32_MAX;
	static int16_t x2011 = -6961;
	volatile uint8_t x2012 = 10U;
	uint32_t t44 = 46431606U;

	t44 = (x2009-((x2010*x2011)<<x2012));

	if (t44 != 4287806464U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2045 = 1U;
	int64_t x2047 = 152896515LL;
	static volatile int16_t x2048 = 0;
	uint64_t t45 = 2248884LLU;

	t45 = (x2045-((x2046*x2047)<<x2048));

	if (t45 != 152896516LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2101 = -1;
	static int8_t x2102 = INT8_MAX;
	uint64_t x2103 = UINT64_MAX;
	static uint32_t x2104 = 1U;
	uint64_t t46 = 37161497972LLU;

	t46 = (x2101-((x2102*x2103)<<x2104));

	if (t46 != 253LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2107 = INT16_MIN;
	uint16_t x2108 = 17U;

	t47 = (x2105-((x2106*x2107)<<x2108));

	if (t47 != 304942677888LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t t48 = 661279592LLU;

	t48 = (x2337-((x2338*x2339)<<x2340));

	if (t48 != 18444528250043040703LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2345 = 131353131;
	int64_t x2346 = 125LL;
	static volatile uint8_t x2347 = UINT8_MAX;
	int8_t x2348 = 1;
	volatile int64_t t49 = -18185LL;

	t49 = (x2345-((x2346*x2347)<<x2348));

	if (t49 != 131289381LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2385 = INT32_MAX;
	uint32_t x2386 = 1U;
	uint8_t x2387 = 49U;
	int8_t x2388 = 4;

	t50 = (x2385-((x2386*x2387)<<x2388));

	if (t50 != 2147482863U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2390 = -1;
	volatile int16_t x2391 = INT16_MIN;
	uint32_t x2392 = 11U;
	int32_t t51 = -52709684;

	t51 = (x2389-((x2390*x2391)<<x2392));

	if (t51 != -67076097) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2425 = -1;
	int8_t x2426 = -1;
	int64_t x2427 = -71809324518723576LL;
	static uint32_t x2428 = 1U;
	static volatile int64_t t52 = 587780487LL;

	t52 = (x2425-((x2426*x2427)<<x2428));

	if (t52 != -143618649037447153LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2469 = -1;
	volatile uint32_t x2470 = 171U;
	static int32_t x2471 = INT32_MIN;
	static volatile uint16_t x2472 = 3U;

	t53 = (x2469-((x2470*x2471)<<x2472));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2493 = INT64_MAX;
	volatile int8_t x2494 = INT8_MIN;
	uint64_t x2495 = 29568LLU;
	uint16_t x2496 = 3U;
	volatile uint64_t t54 = 2266387LLU;

	t54 = (x2493-((x2494*x2495)<<x2496));

	if (t54 != 9223372036885053439LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2513 = UINT64_MAX;
	volatile uint8_t x2516 = 9U;
	volatile uint64_t t55 = 36657661870880LLU;

	t55 = (x2513-((x2514*x2515)<<x2516));

	if (t55 != 18446744073709551103LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2525 = 0U;
	static uint64_t x2526 = 63764LLU;
	int32_t x2527 = 51175331;
	uint64_t x2528 = 52LLU;
	static uint64_t t56 = 87LLU;

	t56 = (x2525-((x2526*x2527)<<x2528));

	if (t56 != 14141302829943357440LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x2617 = -1;
	static volatile int8_t x2618 = 21;
	static int32_t x2619 = 52;
	volatile uint16_t x2620 = 1U;
	int32_t t57 = -11678026;

	t57 = (x2617-((x2618*x2619)<<x2620));

	if (t57 != -2185) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x2654 = 0;
	int32_t x2655 = INT32_MIN;
	uint32_t x2656 = 16U;
	volatile int32_t t58 = -30658;

	t58 = (x2653-((x2654*x2655)<<x2656));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2706 = 7U;
	uint16_t x2707 = 94U;
	int32_t t59 = 20804;

	t59 = (x2705-((x2706*x2707)<<x2708));

	if (t59 != 64877) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2841 = -1;
	int32_t x2842 = -1;
	uint32_t x2843 = 343142057U;
	static int8_t x2844 = 1;
	volatile uint32_t t60 = 1391U;

	t60 = (x2841-((x2842*x2843)<<x2844));

	if (t60 != 686284113U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2873 = -1;
	uint8_t x2874 = UINT8_MAX;
	static int32_t x2875 = 10;
	uint8_t x2876 = 3U;
	int32_t t61 = -399679796;

	t61 = (x2873-((x2874*x2875)<<x2876));

	if (t61 != -20401) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2941 = 9;
	volatile int8_t x2942 = 1;
	uint64_t x2943 = UINT64_MAX;
	static uint8_t x2944 = 11U;
	uint64_t t62 = 5170999371904158912LLU;

	t62 = (x2941-((x2942*x2943)<<x2944));

	if (t62 != 2057LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x2965 = UINT32_MAX;
	uint64_t x2966 = 321LLU;
	uint32_t x2968 = 22U;
	uint64_t t63 = 188167321289LLU;

	t63 = (x2965-((x2966*x2967)<<x2968));

	if (t63 != 18446743787188256767LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3001 = INT8_MIN;
	uint32_t x3002 = 6783U;
	static volatile uint8_t x3003 = 0U;
	uint8_t x3004 = 0U;
	uint32_t t64 = 6429U;

	t64 = (x3001-((x3002*x3003)<<x3004));

	if (t64 != 4294967168U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3145 = 48U;
	static uint32_t x3146 = 916400294U;
	int32_t x3148 = 0;
	uint32_t t65 = 864546U;

	t65 = (x3145-((x3146*x3147)<<x3148));

	if (t65 != 2185677896U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3306 = UINT32_MAX;
	volatile uint64_t x3307 = 1560664982096254LLU;
	static int32_t x3308 = 23;
	volatile uint64_t t66 = 3475966642LLU;

	t66 = (x3305-((x3306*x3307)<<x3308));

	if (t66 != 8525577448031518720LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3353 = -1724474378051183442LL;
	uint64_t x3355 = UINT64_MAX;
	static uint64_t x3356 = 1LLU;
	uint64_t t67 = 312283LLU;

	t67 = (x3353-((x3354*x3355)<<x3356));

	if (t67 != 16722269695658353130LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3461 = INT8_MAX;
	uint64_t x3462 = 49537925236LLU;
	int32_t x3463 = -508;
	int16_t x3464 = 57;
	static uint64_t t68 = 3249560928109LLU;

	t68 = (x3461-((x3462*x3463)<<x3464));

	if (t68 != 6917529027641081983LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3513 = UINT64_MAX;
	static volatile int32_t x3514 = 14431;
	uint8_t x3515 = 48U;
	uint32_t x3516 = 0U;
	volatile uint64_t t69 = 4181360313380179514LLU;

	t69 = (x3513-((x3514*x3515)<<x3516));

	if (t69 != 18446744073708858927LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3589 = -984;
	int8_t x3590 = INT8_MIN;
	int16_t x3592 = 40;
	uint64_t t70 = 2583372LLU;

	t70 = (x3589-((x3590*x3591)<<x3592));

	if (t70 != 10546585902371568680LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3605 = -1;
	uint64_t x3606 = 269LLU;
	int32_t x3607 = -5203;
	int8_t x3608 = 20;
	volatile uint64_t t71 = 430LLU;

	t71 = (x3605-((x3606*x3607)<<x3608));

	if (t71 != 1467594309631LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3641 = INT64_MIN;
	static uint64_t x3643 = UINT64_MAX;
	uint8_t x3644 = 34U;
	static uint64_t t72 = 3149LLU;

	t72 = (x3641-((x3642*x3643)<<x3644));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3851 = INT32_MIN;
	uint16_t x3852 = 21U;
	static uint64_t t73 = 1378LLU;

	t73 = (x3849-((x3850*x3851)<<x3852));

	if (t73 != 18442240474082181119LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3897 = INT8_MIN;
	uint64_t x3898 = UINT64_MAX;
	volatile uint64_t x3899 = 849490523935575LLU;
	uint8_t x3900 = 22U;
	volatile uint64_t t74 = 1558128827507LLU;

	t74 = (x3897-((x3898*x3899)<<x3900));

	if (t74 != 2799896279134502784LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3918 = 9LLU;
	static volatile int32_t x3919 = -784727;
	uint32_t x3920 = 3U;
	uint64_t t75 = 1073380561972LLU;

	t75 = (x3917-((x3918*x3919)<<x3920));

	if (t75 != 56500343LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3933 = 88U;
	int16_t x3934 = INT16_MAX;
	static volatile int64_t x3935 = 7783388135LL;

	t76 = (x3933-((x3934*x3935)<<x3936));

	if (t76 != -32644899714501672LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3977 = INT64_MAX;
	int32_t x3978 = -661;
	uint64_t x3979 = 571253746484LLU;
	volatile uint8_t x3980 = 2U;
	uint64_t t77 = 7LLU;

	t77 = (x3977-((x3978*x3979)<<x3980));

	if (t77 != 9224882431760479503LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x3993 = 2U;
	int16_t x3994 = INT16_MIN;
	int16_t x3995 = -6;
	static uint8_t x3996 = 7U;
	volatile int32_t t78 = 2354;

	t78 = (x3993-((x3994*x3995)<<x3996));

	if (t78 != -25165822) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x4098 = INT32_MIN;
	static int16_t x4100 = 1;
	uint64_t t79 = 1LLU;

	t79 = (x4097-((x4098*x4099)<<x4100));

	if (t79 != 18446744069414584376LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x4121 = -1;
	int64_t x4123 = -1LL;
	volatile uint16_t x4124 = 24U;
	volatile int64_t t80 = -4788567160LL;

	t80 = (x4121-((x4122*x4123)<<x4124));

	if (t80 != -503316481LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4129 = 617U;
	volatile uint8_t x4130 = 36U;
	uint32_t x4131 = 39469984U;
	int8_t x4132 = 0;
	static uint32_t t81 = 1U;

	t81 = (x4129-((x4130*x4131)<<x4132));

	if (t81 != 2874048489U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4145 = INT64_MAX;
	uint64_t x4146 = 14868402LLU;
	static int32_t x4148 = 0;
	volatile uint64_t t82 = 2064672765589128LLU;

	t82 = (x4145-((x4146*x4147)<<x4148));

	if (t82 != 9223372036869644209LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4197 = -1;
	int8_t x4198 = 1;
	volatile int16_t x4199 = INT16_MAX;
	volatile int32_t x4200 = 5;
	volatile int32_t t83 = -143418063;

	t83 = (x4197-((x4198*x4199)<<x4200));

	if (t83 != -1048545) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x4210 = 0U;
	uint32_t x4211 = 358240U;
	uint8_t x4212 = 3U;
	uint64_t t84 = 2967439983636976LLU;

	t84 = (x4209-((x4210*x4211)<<x4212));

	if (t84 != 9LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4289 = -1;
	int8_t x4290 = INT8_MAX;
	int8_t x4291 = 5;
	uint8_t x4292 = 3U;
	volatile int32_t t85 = -79481589;

	t85 = (x4289-((x4290*x4291)<<x4292));

	if (t85 != -5081) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x4295 = 493U;
	volatile uint32_t x4296 = 24U;
	int32_t t86 = -1475532;

	t86 = (x4293-((x4294*x4295)<<x4296));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x4329 = 27U;
	uint32_t x4330 = 2U;
	uint64_t x4331 = UINT64_MAX;
	int8_t x4332 = 0;
	volatile uint64_t t87 = 1LLU;

	t87 = (x4329-((x4330*x4331)<<x4332));

	if (t87 != 29LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4341 = INT8_MIN;
	volatile uint64_t x4342 = UINT64_MAX;
	uint8_t x4344 = 1U;

	t88 = (x4341-((x4342*x4343)<<x4344));

	if (t88 != 18446744073709485952LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4373 = -4;
	uint16_t x4376 = 1U;
	volatile int64_t t89 = 4221840883728LL;

	t89 = (x4373-((x4374*x4375)<<x4376));

	if (t89 != -256LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x4414 = 97U;
	int16_t x4415 = 4706;
	static volatile uint32_t t90 = 431943U;

	t90 = (x4413-((x4414*x4415)<<x4416));

	if (t90 != 4265752447U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4441 = 1185U;
	static int16_t x4442 = -108;
	static uint64_t x4443 = UINT64_MAX;
	static volatile int8_t x4444 = 1;
	volatile uint64_t t91 = 128799LLU;

	t91 = (x4441-((x4442*x4443)<<x4444));

	if (t91 != 969LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x4449 = 21397U;
	int64_t x4450 = INT64_MIN;
	uint64_t x4451 = 47652389551572LLU;
	static uint64_t t92 = 4419278563332763LLU;

	t92 = (x4449-((x4450*x4451)<<x4452));

	if (t92 != 21397LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x4485 = 34031U;
	uint32_t x4486 = 2U;
	int8_t x4487 = -48;
	volatile int16_t x4488 = 0;
	static volatile uint32_t t93 = 115774925U;

	t93 = (x4485-((x4486*x4487)<<x4488));

	if (t93 != 34127U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4581 = UINT32_MAX;
	volatile uint32_t x4582 = 367046786U;

	t94 = (x4581-((x4582*x4583)<<x4584));

	if (t94 != 734093571U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4590 = UINT8_MAX;
	static volatile int8_t x4592 = 1;
	volatile int32_t t95 = -1;

	t95 = (x4589-((x4590*x4591)<<x4592));

	if (t95 != -129977) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4601 = -1;
	static int32_t x4602 = -1;
	volatile uint16_t x4603 = 0U;
	uint8_t x4604 = 15U;

	t96 = (x4601-((x4602*x4603)<<x4604));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4673 = -25;
	uint8_t x4674 = UINT8_MAX;
	volatile uint32_t x4675 = 10414562U;
	int8_t x4676 = 13;
	uint32_t t97 = 5127U;

	t97 = (x4673-((x4674*x4675)<<x4676));

	if (t97 != 2700885991U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4749 = -1;
	static uint16_t x4751 = 1U;
	uint8_t x4752 = 0U;
	volatile uint32_t t98 = 493178U;

	t98 = (x4749-((x4750*x4751)<<x4752));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x4766 = INT8_MIN;
	volatile uint8_t x4767 = 0U;
	static int8_t x4768 = 9;

	t99 = (x4765-((x4766*x4767)<<x4768));

	if (t99 != -128) { NG(); } else { ; }
	
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


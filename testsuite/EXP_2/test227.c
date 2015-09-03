#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x123 = INT8_MIN;
uint16_t x124 = 1U;
static int32_t t2 = -31066;
int64_t x209 = 1351334618044169LL;
uint32_t x210 = 7907474U;
static uint16_t x241 = 108U;
int8_t x242 = INT8_MAX;
int64_t x246 = INT64_MAX;
static volatile int16_t x360 = 2;
static int32_t t9 = 1327;
uint64_t x439 = 7610704LLU;
static volatile uint32_t x453 = UINT32_MAX;
int32_t x455 = INT32_MAX;
int16_t x529 = -1;
int8_t x566 = INT8_MAX;
volatile uint64_t t13 = 16183LLU;
int8_t x581 = 0;
static volatile int32_t x582 = -1;
int64_t x589 = INT64_MIN;
uint64_t x591 = UINT64_MAX;
static volatile uint32_t x595 = 385791U;
static volatile int64_t x683 = 47201236534LL;
uint8_t x684 = 50U;
uint16_t x823 = 6U;
uint16_t x824 = 7U;
uint64_t t25 = 88095LLU;
int64_t x941 = INT64_MAX;
static int32_t x1075 = 230967099;
int8_t x1305 = 4;
volatile int32_t t30 = -26;
uint8_t x1336 = 0U;
int32_t x1372 = 2;
uint64_t x1641 = 1088198305040569LLU;
volatile uint64_t t38 = 94366LLU;
int8_t x1774 = 2;
volatile int32_t x1795 = 142773;
volatile int64_t t40 = -9404LL;
int16_t x1831 = -112;
static int8_t x1876 = 0;
volatile int32_t t42 = 123;
int8_t x2053 = 1;
int32_t x2258 = INT32_MAX;
static int8_t x2301 = INT8_MAX;
int32_t x2361 = 712043;
int16_t x2434 = INT16_MIN;
static int64_t t50 = 46312185035276LL;
volatile int32_t t52 = 50551993;
int8_t x2629 = INT8_MAX;
static volatile int32_t t53 = 30971;
volatile uint32_t x2677 = 0U;
int8_t x2679 = -1;
int32_t x2680 = 61;
uint32_t t57 = 84U;
uint8_t x2925 = UINT8_MAX;
int8_t x3033 = -1;
int64_t x3035 = -18LL;
int16_t x3036 = 11;
uint8_t x3069 = 8U;
volatile int32_t t61 = 1996787;
int8_t x3092 = 0;
volatile uint64_t t63 = 18557522LLU;
uint32_t x3293 = UINT32_MAX;
volatile int32_t x3385 = 4;
static uint32_t x3473 = 16U;
uint32_t x3584 = 3U;
uint16_t x3660 = 3U;
int8_t x3671 = INT8_MIN;
static volatile int64_t t72 = 507950004454LL;
static int8_t x3729 = INT8_MAX;
static int16_t x3730 = INT16_MIN;
volatile int8_t x3745 = INT8_MAX;
volatile uint32_t x3799 = 1U;
int32_t t76 = -14414272;
volatile int8_t x3944 = 6;
volatile int32_t x3967 = -1;
uint16_t x3969 = UINT16_MAX;
uint8_t x4137 = UINT8_MAX;
uint16_t x4139 = 6474U;
uint16_t x4140 = 1U;
int8_t x4141 = INT8_MAX;
int16_t x4142 = 0;
int64_t x4171 = 801245LL;
uint8_t x4172 = 2U;
int8_t x4185 = -1;
int32_t t87 = 28210481;
int64_t x4231 = INT64_MIN;
volatile int64_t t88 = 375LL;
static uint64_t x4278 = 67406LLU;
int32_t x4280 = 1;
static volatile uint64_t t89 = 7910143LLU;
int64_t x4369 = INT64_MAX;
int8_t x4371 = INT8_MIN;
int8_t x4372 = 6;
volatile uint64_t t90 = 62534061498045LLU;
int8_t x4475 = INT8_MAX;
int32_t x4476 = 12;
static uint8_t x4541 = UINT8_MAX;
int8_t x4598 = -3;
uint32_t x4635 = 0U;
volatile uint32_t t96 = 1611U;
uint64_t x4639 = UINT64_MAX;
static int64_t x4747 = -1672792756912696LL;
int64_t x4811 = 4422LL;


void f0(void) {
	volatile uint16_t x121 = 75U;
	int32_t x122 = -1;
	volatile int32_t t0 = -4;

	t0 = ((x121%(x122-x123))<<x124);

	if (t0 != 150) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	volatile int32_t x151 = -1;
	uint8_t x152 = 27U;
	uint64_t t1 = 0LLU;

	t1 = ((x149%(x150-x151))<<x152);

	if (t1 != 288230375883276288LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x157 = INT16_MAX;
	static int16_t x158 = INT16_MAX;
	int32_t x159 = -772;
	uint16_t x160 = 10U;

	t2 = ((x157%(x158-x159))<<x160);

	if (t2 != 33553408) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x211 = 15U;
	uint8_t x212 = 3U;
	int64_t t3 = 76426204856LL;

	t3 = ((x209%(x210-x211))<<x212);

	if (t3 != 2614160LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x243 = -3;
	static uint16_t x244 = 4U;
	int32_t t4 = 115373160;

	t4 = ((x241%(x242-x243))<<x244);

	if (t4 != 1728) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x245 = 8742U;
	uint32_t x247 = 262117189U;
	int16_t x248 = 5;
	volatile int64_t t5 = -81444968LL;

	t5 = ((x245%(x246-x247))<<x248);

	if (t5 != 279744LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x357 = 0U;
	volatile uint64_t x358 = UINT64_MAX;
	static uint64_t x359 = 2660653751787268503LLU;
	uint64_t t6 = 280916249514171254LLU;

	t6 = ((x357%(x358-x359))<<x360);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x401 = -1;
	volatile uint64_t x402 = 651LLU;
	int16_t x403 = INT16_MIN;
	uint16_t x404 = 12U;
	volatile uint64_t t7 = 570722099239850LLU;

	t7 = ((x401%(x402-x403))<<x404);

	if (t7 != 62574592LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x417 = 12U;
	int16_t x418 = INT16_MAX;
	int64_t x419 = 1236LL;
	int8_t x420 = 7;
	volatile int64_t t8 = -922LL;

	t8 = ((x417%(x418-x419))<<x420);

	if (t8 != 1536LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x433 = 14911;
	static int16_t x434 = -1;
	static int8_t x435 = INT8_MAX;
	uint16_t x436 = 6U;

	t9 = ((x433%(x434-x435))<<x436);

	if (t9 != 4032) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x437 = 174;
	int32_t x438 = INT32_MIN;
	volatile uint16_t x440 = 2U;
	uint64_t t10 = 47372824646627510LLU;

	t10 = ((x437%(x438-x439))<<x440);

	if (t10 != 696LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x454 = 9232U;
	volatile int16_t x456 = 28;
	static volatile uint32_t t11 = 824U;

	t11 = ((x453%(x454-x455))<<x456);

	if (t11 != 3758096384U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x530 = INT16_MIN;
	volatile uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 3U;
	volatile uint64_t t12 = 22420377184911LLU;

	t12 = ((x529%(x530-x531))<<x532);

	if (t12 != 262128LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x565 = -67957LL;
	volatile uint64_t x567 = 4093693914399LLU;
	int8_t x568 = 6;

	t13 = ((x565%(x566-x567))<<x568);

	if (t13 != 261996406164160LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x583 = 1;
	uint16_t x584 = 30U;
	int32_t t14 = -144;

	t14 = ((x581%(x582-x583))<<x584);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x590 = INT16_MIN;
	static uint8_t x592 = 5U;
	volatile uint64_t t15 = 6779543498LLU;

	t15 = ((x589%(x590-x591))<<x592);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x593 = INT64_MAX;
	uint64_t x594 = 30153LLU;
	int8_t x596 = 22;
	uint64_t t16 = 1205517040781017LLU;

	t16 = ((x593%(x594-x595))<<x596);

	if (t16 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x605 = INT8_MAX;
	uint16_t x606 = 14327U;
	volatile uint64_t x607 = 350010913LLU;
	uint32_t x608 = 1U;
	volatile uint64_t t17 = 2205287447198742521LLU;

	t17 = ((x605%(x606-x607))<<x608);

	if (t17 != 254LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x617 = 18518LLU;
	static int16_t x618 = -1;
	volatile int16_t x619 = INT16_MIN;
	int16_t x620 = 1;
	volatile uint64_t t18 = 901951496432LLU;

	t18 = ((x617%(x618-x619))<<x620);

	if (t18 != 37036LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x625 = -712807820399874056LL;
	static uint64_t x626 = 1506132LLU;
	uint8_t x627 = UINT8_MAX;
	volatile int32_t x628 = 12;
	uint64_t t19 = 6761774982027966482LLU;

	t19 = ((x625%(x626-x627))<<x628);

	if (t19 != 3630362624LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x681 = UINT8_MAX;
	volatile uint8_t x682 = 32U;
	volatile int64_t t20 = 196702365LL;

	t20 = ((x681%(x682-x683))<<x684);

	if (t20 != 287104476244869120LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x713 = 1U;
	volatile int8_t x714 = -29;
	volatile int32_t x715 = INT32_MIN;
	static int8_t x716 = 21;
	int32_t t21 = -419237611;

	t21 = ((x713%(x714-x715))<<x716);

	if (t21 != 2097152) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x793 = 773;
	static volatile int8_t x794 = -1;
	int16_t x795 = 1;
	int8_t x796 = 0;
	volatile int32_t t22 = 7430;

	t22 = ((x793%(x794-x795))<<x796);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x813 = INT32_MIN;
	uint8_t x814 = 45U;
	static volatile uint64_t x815 = 2296574312897535781LLU;
	static int32_t x816 = 10;
	volatile uint64_t t23 = 1936790528107568202LLU;

	t23 = ((x813%(x814-x815))<<x816);

	if (t23 != 8955596846940282880LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x821 = 382U;
	int32_t x822 = INT32_MAX;
	volatile uint32_t t24 = 7636338U;

	t24 = ((x821%(x822-x823))<<x824);

	if (t24 != 48896U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x861 = 3808577652469531LLU;
	int16_t x862 = 5;
	static uint32_t x863 = UINT32_MAX;
	uint8_t x864 = 23U;

	t25 = ((x861%(x862-x863))<<x864);

	if (t25 != 8388608LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x942 = 7500;
	static int8_t x943 = INT8_MIN;
	static volatile uint8_t x944 = 28U;
	volatile int64_t t26 = -5923657LL;

	t26 = ((x941%(x942-x943))<<x944);

	if (t26 != 2015144968192LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x977 = UINT16_MAX;
	uint32_t x978 = 2895U;
	int8_t x979 = INT8_MAX;
	int8_t x980 = 1;
	static uint32_t t27 = 29U;

	t27 = ((x977%(x978-x979))<<x980);

	if (t27 != 3742U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1073 = 30U;
	int16_t x1074 = INT16_MIN;
	static uint16_t x1076 = 26U;
	int32_t t28 = 76137;

	t28 = ((x1073%(x1074-x1075))<<x1076);

	if (t28 != 2013265920) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1121 = UINT8_MAX;
	int64_t x1122 = INT64_MIN;
	volatile int32_t x1123 = -1;
	int16_t x1124 = 27;
	volatile int64_t t29 = -24443039LL;

	t29 = ((x1121%(x1122-x1123))<<x1124);

	if (t29 != 34225520640LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1306 = -1987;
	int16_t x1307 = -1;
	uint8_t x1308 = 0U;

	t30 = ((x1305%(x1306-x1307))<<x1308);

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1333 = UINT8_MAX;
	volatile uint64_t x1334 = UINT64_MAX;
	static volatile int16_t x1335 = 0;
	volatile uint64_t t31 = 1LLU;

	t31 = ((x1333%(x1334-x1335))<<x1336);

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1365 = 37U;
	int16_t x1366 = -1;
	int16_t x1367 = INT16_MIN;
	uint16_t x1368 = 8U;
	volatile int32_t t32 = 20;

	t32 = ((x1365%(x1366-x1367))<<x1368);

	if (t32 != 9472) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1369 = INT32_MAX;
	volatile uint64_t x1370 = UINT64_MAX;
	volatile uint8_t x1371 = UINT8_MAX;
	static volatile uint64_t t33 = 6521100259200697LLU;

	t33 = ((x1369%(x1370-x1371))<<x1372);

	if (t33 != 8589934588LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1397 = 42;
	uint16_t x1398 = UINT16_MAX;
	int8_t x1399 = 24;
	int8_t x1400 = 1;
	volatile int32_t t34 = -1045323;

	t34 = ((x1397%(x1398-x1399))<<x1400);

	if (t34 != 84) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1413 = 14;
	static uint32_t x1414 = UINT32_MAX;
	volatile int64_t x1415 = -1LL;
	uint32_t x1416 = 7U;
	int64_t t35 = 167714669741LL;

	t35 = ((x1413%(x1414-x1415))<<x1416);

	if (t35 != 1792LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1473 = -156753198LL;
	volatile uint64_t x1474 = 48837390116LLU;
	int32_t x1475 = INT32_MIN;
	volatile uint32_t x1476 = 3U;
	static uint64_t t36 = 1985LLU;

	t36 = ((x1473%(x1474-x1475))<<x1476);

	if (t36 != 370914601968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1617 = INT64_MAX;
	int8_t x1618 = 0;
	static uint16_t x1619 = 635U;
	int8_t x1620 = 1;
	volatile int64_t t37 = 3719268222832311053LL;

	t37 = ((x1617%(x1618-x1619))<<x1620);

	if (t37 != 254LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1642 = INT64_MAX;
	int32_t x1643 = 5271;
	int8_t x1644 = 5;

	t38 = ((x1641%(x1642-x1643))<<x1644);

	if (t38 != 34822345761298208LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1773 = UINT64_MAX;
	int32_t x1775 = -232106;
	static int8_t x1776 = 1;
	volatile uint64_t t39 = 3232064LLU;

	t39 = ((x1773%(x1774-x1775))<<x1776);

	if (t39 != 163086LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1793 = INT16_MAX;
	volatile int64_t x1794 = -26030LL;
	int8_t x1796 = 14;

	t40 = ((x1793%(x1794-x1795))<<x1796);

	if (t40 != 536854528LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1829 = 3936;
	static int16_t x1830 = INT16_MAX;
	int64_t x1832 = 1LL;
	int32_t t41 = -13;

	t41 = ((x1829%(x1830-x1831))<<x1832);

	if (t41 != 7872) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1873 = 103240;
	int8_t x1874 = INT8_MIN;
	int8_t x1875 = 3;

	t42 = ((x1873%(x1874-x1875))<<x1876);

	if (t42 != 12) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1977 = 39U;
	volatile int32_t x1978 = INT32_MIN;
	int64_t x1979 = INT64_MIN;
	uint16_t x1980 = 1U;
	int64_t t43 = -1LL;

	t43 = ((x1977%(x1978-x1979))<<x1980);

	if (t43 != 78LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1997 = -1;
	int8_t x1998 = INT8_MIN;
	static int16_t x1999 = -127;
	uint8_t x2000 = 11U;
	static int32_t t44 = 96427706;

	t44 = ((x1997%(x1998-x1999))<<x2000);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2005 = INT8_MIN;
	int16_t x2006 = INT16_MAX;
	uint32_t x2007 = 49625U;
	uint32_t x2008 = 16U;
	volatile uint32_t t45 = 33U;

	t45 = ((x2005%(x2006-x2007))<<x2008);

	if (t45 != 1096417280U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2054 = INT16_MAX;
	int8_t x2055 = -1;
	uint8_t x2056 = 5U;
	int32_t t46 = 73952447;

	t46 = ((x2053%(x2054-x2055))<<x2056);

	if (t46 != 32) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2257 = 2845U;
	volatile uint64_t x2259 = 6LLU;
	static int8_t x2260 = 0;
	uint64_t t47 = 59LLU;

	t47 = ((x2257%(x2258-x2259))<<x2260);

	if (t47 != 2845LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2302 = INT64_MIN;
	int32_t x2303 = INT32_MIN;
	volatile uint32_t x2304 = 7U;
	static volatile int64_t t48 = -171048232056702552LL;

	t48 = ((x2301%(x2302-x2303))<<x2304);

	if (t48 != 16256LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2362 = 5U;
	int16_t x2363 = INT16_MIN;
	volatile uint16_t x2364 = 8U;
	int32_t t49 = -3492232;

	t49 = ((x2361%(x2362-x2363))<<x2364);

	if (t49 != 6095360) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2433 = UINT8_MAX;
	int64_t x2435 = INT64_MIN;
	int16_t x2436 = 42;

	t50 = ((x2433%(x2434-x2435))<<x2436);

	if (t50 != 1121501860331520LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2437 = 108909531957LLU;
	uint16_t x2438 = 13U;
	static uint16_t x2439 = 2U;
	volatile uint32_t x2440 = 6U;
	static uint64_t t51 = 290LLU;

	t51 = ((x2437%(x2438-x2439))<<x2440);

	if (t51 != 384LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2593 = INT32_MAX;
	static int8_t x2594 = 3;
	int8_t x2595 = -7;
	int64_t x2596 = 1LL;

	t52 = ((x2593%(x2594-x2595))<<x2596);

	if (t52 != 14) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2630 = -265554;
	int8_t x2631 = -22;
	static uint32_t x2632 = 5U;

	t53 = ((x2629%(x2630-x2631))<<x2632);

	if (t53 != 4064) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2633 = 5;
	int64_t x2634 = -1LL;
	int32_t x2635 = INT32_MIN;
	volatile uint8_t x2636 = 1U;
	volatile int64_t t54 = -283LL;

	t54 = ((x2633%(x2634-x2635))<<x2636);

	if (t54 != 10LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2665 = INT32_MIN;
	volatile uint32_t x2666 = 36049U;
	volatile uint64_t x2667 = 2LLU;
	uint8_t x2668 = 32U;
	uint64_t t55 = 29820003935042262LLU;

	t55 = ((x2665%(x2666-x2667))<<x2668);

	if (t55 != 43288975376384LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2678 = INT64_MIN;
	volatile int64_t t56 = -33758881713350LL;

	t56 = ((x2677%(x2678-x2679))<<x2680);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2757 = 29051U;
	int16_t x2758 = 9897;
	volatile int8_t x2759 = -17;
	volatile uint32_t x2760 = 1U;

	t57 = ((x2757%(x2758-x2759))<<x2760);

	if (t57 != 18446U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2873 = 27891U;
	int8_t x2874 = INT8_MIN;
	int64_t x2875 = 54297093950LL;
	volatile uint64_t x2876 = 0LLU;
	int64_t t58 = -2167046891LL;

	t58 = ((x2873%(x2874-x2875))<<x2876);

	if (t58 != 27891LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x2926 = 7490LLU;
	static int16_t x2927 = INT16_MAX;
	static uint8_t x2928 = 5U;
	volatile uint64_t t59 = 1358LLU;

	t59 = ((x2925%(x2926-x2927))<<x2928);

	if (t59 != 8160LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3034 = 94305662LLU;
	uint64_t t60 = 95544LLU;

	t60 = ((x3033%(x3034-x3035))<<x3036);

	if (t60 != 108112967680LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3070 = INT8_MIN;
	int32_t x3071 = INT32_MIN;
	volatile uint32_t x3072 = 17U;

	t61 = ((x3069%(x3070-x3071))<<x3072);

	if (t61 != 1048576) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3089 = 953901;
	static int64_t x3090 = INT64_MIN;
	int32_t x3091 = INT32_MIN;
	int64_t t62 = 17057493118880946LL;

	t62 = ((x3089%(x3090-x3091))<<x3092);

	if (t62 != 953901LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3225 = INT16_MIN;
	int16_t x3226 = INT16_MAX;
	uint64_t x3227 = 6198918296220265LLU;
	int64_t x3228 = 0LL;

	t63 = ((x3225%(x3226-x3227))<<x3228);

	if (t63 != 6198918296154730LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3269 = INT64_MAX;
	volatile uint16_t x3270 = UINT16_MAX;
	uint32_t x3271 = 641U;
	uint16_t x3272 = 5U;
	volatile int64_t t64 = 263034648508LL;

	t64 = ((x3269%(x3270-x3271))<<x3272);

	if (t64 != 624928LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3294 = -1;
	int8_t x3295 = 3;
	volatile uint32_t x3296 = 28U;
	static uint32_t t65 = 235U;

	t65 = ((x3293%(x3294-x3295))<<x3296);

	if (t65 != 805306368U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x3349 = 366U;
	uint64_t x3350 = UINT64_MAX;
	int64_t x3351 = 1349442LL;
	volatile int8_t x3352 = 2;
	uint64_t t66 = 53236787723505LLU;

	t66 = ((x3349%(x3350-x3351))<<x3352);

	if (t66 != 1464LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3386 = -6;
	volatile uint16_t x3387 = 10548U;
	static uint16_t x3388 = 1U;
	volatile int32_t t67 = 171983;

	t67 = ((x3385%(x3386-x3387))<<x3388);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x3474 = 925455303462LLU;
	int8_t x3475 = INT8_MIN;
	uint16_t x3476 = 1U;
	uint64_t t68 = 35LLU;

	t68 = ((x3473%(x3474-x3475))<<x3476);

	if (t68 != 32LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x3581 = 2419U;
	int64_t x3582 = -1LL;
	int16_t x3583 = -8;
	int64_t t69 = 143879029LL;

	t69 = ((x3581%(x3582-x3583))<<x3584);

	if (t69 != 32LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3657 = INT32_MIN;
	static int8_t x3658 = INT8_MAX;
	int8_t x3659 = -1;
	volatile int32_t t70 = 0;

	t70 = ((x3657%(x3658-x3659))<<x3660);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3665 = 14U;
	static int64_t x3666 = INT64_MIN;
	static int32_t x3667 = -1;
	uint8_t x3668 = 12U;
	volatile int64_t t71 = -507570158LL;

	t71 = ((x3665%(x3666-x3667))<<x3668);

	if (t71 != 57344LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3669 = 0U;
	int64_t x3670 = INT64_MIN;
	uint16_t x3672 = 1U;

	t72 = ((x3669%(x3670-x3671))<<x3672);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3731 = INT8_MIN;
	static int8_t x3732 = 0;
	volatile int32_t t73 = -279;

	t73 = ((x3729%(x3730-x3731))<<x3732);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3746 = INT16_MIN;
	uint16_t x3747 = 13U;
	int8_t x3748 = 1;
	volatile int32_t t74 = 928;

	t74 = ((x3745%(x3746-x3747))<<x3748);

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3797 = INT16_MIN;
	int16_t x3798 = -5807;
	uint8_t x3800 = 8U;
	volatile uint32_t t75 = 1915342617U;

	t75 = ((x3797%(x3798-x3799))<<x3800);

	if (t75 != 4286578688U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3865 = 256920;
	int32_t x3866 = 1;
	int32_t x3867 = -1;
	uint8_t x3868 = 0U;

	t76 = ((x3865%(x3866-x3867))<<x3868);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x3897 = INT16_MIN;
	int8_t x3898 = -1;
	volatile int8_t x3899 = INT8_MAX;
	uint8_t x3900 = 12U;
	int32_t t77 = 75937335;

	t77 = ((x3897%(x3898-x3899))<<x3900);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3941 = INT16_MAX;
	int16_t x3942 = 15;
	volatile int16_t x3943 = -1;
	int32_t t78 = -365731;

	t78 = ((x3941%(x3942-x3943))<<x3944);

	if (t78 != 960) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3965 = 7723753146449LL;
	int8_t x3966 = INT8_MIN;
	uint16_t x3968 = 50U;
	int64_t t79 = -318922515308345LL;

	t79 = ((x3965%(x3966-x3967))<<x3968);

	if (t79 != 6755399441055744LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3970 = -1;
	uint8_t x3971 = 39U;
	uint8_t x3972 = 10U;
	int32_t t80 = 177378;

	t80 = ((x3969%(x3970-x3971))<<x3972);

	if (t80 != 15360) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4101 = UINT32_MAX;
	static int8_t x4102 = INT8_MIN;
	static int64_t x4103 = 164662010445908077LL;
	int16_t x4104 = 1;
	int64_t t81 = 5410758164LL;

	t81 = ((x4101%(x4102-x4103))<<x4104);

	if (t81 != 8589934590LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4129 = 103394347U;
	volatile int8_t x4130 = -5;
	int64_t x4131 = -1LL;
	static int16_t x4132 = 13;
	volatile int64_t t82 = -1LL;

	t82 = ((x4129%(x4130-x4131))<<x4132);

	if (t82 != 24576LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4138 = -37158LL;
	int64_t t83 = 0LL;

	t83 = ((x4137%(x4138-x4139))<<x4140);

	if (t83 != 510LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4143 = -1;
	volatile uint8_t x4144 = 1U;
	int32_t t84 = 293;

	t84 = ((x4141%(x4142-x4143))<<x4144);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4169 = 172U;
	uint16_t x4170 = UINT16_MAX;
	volatile int64_t t85 = -40LL;

	t85 = ((x4169%(x4170-x4171))<<x4172);

	if (t85 != 688LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4186 = INT16_MIN;
	volatile uint32_t x4187 = 640U;
	static uint64_t x4188 = 1LLU;
	uint32_t t86 = 454528U;

	t86 = ((x4185%(x4186-x4187))<<x4188);

	if (t86 != 66814U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4213 = INT8_MAX;
	int32_t x4214 = -1;
	int8_t x4215 = INT8_MIN;
	volatile uint8_t x4216 = 4U;

	t87 = ((x4213%(x4214-x4215))<<x4216);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4229 = 1;
	static int32_t x4230 = -1918;
	static volatile uint8_t x4232 = 6U;

	t88 = ((x4229%(x4230-x4231))<<x4232);

	if (t88 != 64LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4277 = 237U;
	int32_t x4279 = -1;

	t89 = ((x4277%(x4278-x4279))<<x4280);

	if (t89 != 474LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4370 = 105769723LLU;

	t90 = ((x4369%(x4370-x4371))<<x4372);

	if (t90 != 3141042880LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4433 = 13;
	volatile int8_t x4434 = INT8_MIN;
	volatile uint64_t x4435 = 781376960623LLU;
	int32_t x4436 = 20;
	volatile uint64_t t91 = 672324435556449548LLU;

	t91 = ((x4433%(x4434-x4435))<<x4436);

	if (t91 != 13631488LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4473 = INT64_MAX;
	uint32_t x4474 = 3510U;
	volatile int64_t t92 = 25157LL;

	t92 = ((x4473%(x4474-x4475))<<x4476);

	if (t92 != 3514368LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4533 = -30551386;
	static uint64_t x4534 = 421992552631LLU;
	volatile uint32_t x4535 = 156U;
	volatile uint8_t x4536 = 5U;
	static uint64_t t93 = 2LLU;

	t93 = ((x4533%(x4534-x4535))<<x4536);

	if (t93 != 1938527955360LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4542 = 878801836LLU;
	volatile int8_t x4543 = 0;
	uint8_t x4544 = 2U;
	volatile uint64_t t94 = 407510267122628LLU;

	t94 = ((x4541%(x4542-x4543))<<x4544);

	if (t94 != 1020LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4597 = UINT16_MAX;
	int8_t x4599 = -1;
	uint32_t x4600 = 1U;
	int32_t t95 = 6;

	t95 = ((x4597%(x4598-x4599))<<x4600);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x4633 = INT8_MIN;
	uint16_t x4634 = 3468U;
	int64_t x4636 = 1LL;

	t96 = ((x4633%(x4634-x4635))<<x4636);

	if (t96 != 3520U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4637 = -39;
	uint8_t x4638 = 26U;
	int8_t x4640 = 7;
	volatile uint64_t t97 = 48163335494101LLU;

	t97 = ((x4637%(x4638-x4639))<<x4640);

	if (t97 != 1664LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4745 = INT16_MAX;
	int32_t x4746 = INT32_MIN;
	uint16_t x4748 = 1U;
	int64_t t98 = -31323207088081LL;

	t98 = ((x4745%(x4746-x4747))<<x4748);

	if (t98 != 65534LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x4809 = 307;
	int32_t x4810 = INT32_MIN;
	uint8_t x4812 = 1U;
	int64_t t99 = -16054660189LL;

	t99 = ((x4809%(x4810-x4811))<<x4812);

	if (t99 != 614LL) { NG(); } else { ; }
	
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


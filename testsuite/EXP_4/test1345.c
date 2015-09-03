#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x433 = 74U;
uint64_t x434 = 10LLU;
uint64_t x465 = UINT64_MAX;
int64_t x525 = 7318181820LL;
static int16_t x543 = -173;
static uint32_t x596 = UINT32_MAX;
static int8_t x642 = 0;
int32_t x643 = INT32_MIN;
uint32_t t9 = 831541U;
uint64_t x788 = 552LLU;
static uint32_t x804 = 9779U;
static int32_t t12 = 0;
volatile int64_t x827 = -958782121970407319LL;
uint8_t x857 = UINT8_MAX;
volatile int8_t x858 = 1;
uint8_t x860 = 0U;
int32_t t15 = -1;
static volatile uint64_t t18 = 120446286LLU;
int8_t x1010 = 13;
int16_t x1069 = INT16_MAX;
static volatile int32_t t20 = -151;
int16_t x1078 = 1;
volatile int8_t x1079 = INT8_MIN;
static int16_t x1143 = -1;
volatile int32_t t23 = -118539960;
int8_t x1231 = INT8_MAX;
volatile uint64_t x1232 = UINT64_MAX;
int32_t x1408 = -2762;
static volatile int32_t t27 = 738;
static uint16_t x1501 = 18376U;
int8_t x1503 = 57;
uint8_t x1514 = 30U;
int64_t x1515 = -51147072666725828LL;
static uint64_t x1525 = UINT64_MAX;
int8_t x1526 = 0;
int8_t x1528 = INT8_MIN;
uint64_t x1547 = 110451524551681215LLU;
uint16_t x1550 = 21U;
volatile int32_t t33 = 1;
int8_t x1696 = INT8_MAX;
uint64_t x2404 = UINT64_MAX;
volatile int32_t t40 = -2260012;
int32_t x2435 = INT32_MAX;
uint32_t x2465 = UINT32_MAX;
int32_t x2473 = INT32_MAX;
int32_t x2496 = 122;
int8_t x2563 = INT8_MIN;
int16_t x2617 = 45;
volatile int32_t t48 = -419;
uint8_t x2745 = 75U;
int64_t x2747 = 470829157030LL;
static int8_t x2748 = -1;
int8_t x2759 = -1;
volatile uint16_t x2881 = 25351U;
uint8_t x2917 = UINT8_MAX;
uint8_t x2918 = 6U;
int32_t x3208 = -33623678;
volatile int8_t x3218 = 2;
volatile int32_t x3219 = INT32_MAX;
static uint16_t x3220 = 2U;
static volatile uint64_t t56 = 1988187446969353816LLU;
volatile int8_t x3324 = INT8_MIN;
int32_t x3335 = -1;
volatile uint32_t x3442 = 1U;
int32_t x3443 = INT32_MIN;
static int32_t x3549 = 0;
static int8_t x3672 = INT8_MIN;
int32_t x3791 = -40334;
static int8_t x3792 = 7;
volatile int32_t t65 = 1433169;
volatile uint64_t x3837 = UINT64_MAX;
volatile uint64_t x3839 = 510581204453208463LLU;
uint16_t x3894 = 1U;
static int64_t x3959 = INT64_MIN;
int32_t x4263 = INT32_MIN;
static volatile int32_t x4351 = -5;
uint8_t x4386 = 4U;
static int16_t x4387 = INT16_MAX;
static int16_t x4447 = INT16_MIN;
uint16_t x4448 = UINT16_MAX;
uint16_t x4525 = UINT16_MAX;
uint16_t x4526 = 10U;
volatile int64_t x4527 = INT64_MIN;
volatile int32_t t76 = -13133549;
uint16_t x4688 = UINT16_MAX;
int16_t x4731 = 0;
static int32_t t83 = 7145;
static uint8_t x4870 = 2U;
volatile int32_t x4871 = -1;
uint16_t x5289 = 16U;
uint32_t x5318 = 15U;
static int32_t x5345 = 213261;
uint64_t x5365 = 232413207921364083LLU;
uint64_t t92 = 90846416139LLU;
uint8_t x5461 = UINT8_MAX;
uint16_t x5464 = 27242U;
int32_t t93 = -18;
static uint8_t x5626 = 0U;
volatile int32_t x5627 = INT32_MIN;
int8_t x5635 = INT8_MAX;
int32_t t96 = -217;
uint8_t x5665 = UINT8_MAX;
static uint8_t x5666 = 2U;
volatile int16_t x5794 = 12;
int32_t t98 = -6717;


void f0(void) {
	uint32_t x101 = 2927488U;
	volatile uint32_t x102 = 0U;
	int64_t x103 = 12245338041818567LL;
	volatile int8_t x104 = -1;
	uint32_t t0 = 2136929593U;

	t0 = (x101<<(x102^(x103==x104)));

	if (t0 != 2927488U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x105 = 21862121708171LL;
	volatile uint16_t x106 = 0U;
	static int32_t x107 = INT32_MIN;
	static int8_t x108 = INT8_MIN;
	int64_t t1 = -247913273238107228LL;

	t1 = (x105<<(x106^(x107==x108)));

	if (t1 != 21862121708171LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x341 = 37U;
	static uint16_t x342 = 20U;
	volatile uint64_t x343 = UINT64_MAX;
	volatile int16_t x344 = INT16_MIN;
	int32_t t2 = -11;

	t2 = (x341<<(x342^(x343==x344)));

	if (t2 != 38797312) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x435 = 0;
	volatile uint64_t x436 = UINT64_MAX;
	int32_t t3 = -14;

	t3 = (x433<<(x434^(x435==x436)));

	if (t3 != 75776) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x466 = 22LLU;
	uint16_t x467 = 35U;
	int16_t x468 = -28;
	static volatile uint64_t t4 = 106048542LLU;

	t4 = (x465<<(x466^(x467==x468)));

	if (t4 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x526 = 21U;
	int32_t x527 = INT32_MAX;
	int64_t x528 = INT64_MAX;
	int64_t t5 = -2796739069841LL;

	t5 = (x525<<(x526^(x527==x528)));

	if (t5 != 15347339640176640LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x541 = 150106071034LLU;
	int8_t x542 = 1;
	volatile int64_t x544 = -4861948898273643LL;
	uint64_t t6 = 3690LLU;

	t6 = (x541<<(x542^(x543==x544)));

	if (t6 != 300212142068LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x593 = 89674102681LLU;
	volatile uint8_t x594 = 61U;
	uint32_t x595 = 11U;
	uint64_t t7 = 1313403LLU;

	t7 = (x593<<(x594^(x595==x596)));

	if (t7 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x641 = INT64_MAX;
	volatile uint8_t x644 = 0U;
	int64_t t8 = INT64_MAX;

	t8 = (x641<<(x642^(x643==x644)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x645 = 59628U;
	volatile int16_t x646 = 1;
	uint8_t x647 = 0U;
	int8_t x648 = 52;

	t9 = (x645<<(x646^(x647==x648)));

	if (t9 != 119256U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x785 = UINT8_MAX;
	int32_t x786 = 1;
	volatile int64_t x787 = 12329385331596379LL;
	volatile int32_t t10 = 0;

	t10 = (x785<<(x786^(x787==x788)));

	if (t10 != 510) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x801 = 31;
	uint8_t x802 = 2U;
	int32_t x803 = INT32_MIN;
	volatile int32_t t11 = -412;

	t11 = (x801<<(x802^(x803==x804)));

	if (t11 != 124) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x809 = 327U;
	uint32_t x810 = 12U;
	int8_t x811 = -1;
	static volatile uint64_t x812 = 2073735LLU;

	t12 = (x809<<(x810^(x811==x812)));

	if (t12 != 1339392) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x825 = 40;
	uint8_t x826 = 4U;
	uint16_t x828 = UINT16_MAX;
	volatile int32_t t13 = 87;

	t13 = (x825<<(x826^(x827==x828)));

	if (t13 != 640) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x837 = 1U;
	uint8_t x838 = 8U;
	volatile int8_t x839 = -51;
	int8_t x840 = -29;
	static volatile int32_t t14 = 342;

	t14 = (x837<<(x838^(x839==x840)));

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x859 = INT32_MAX;

	t15 = (x857<<(x858^(x859==x860)));

	if (t15 != 510) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x869 = INT64_MAX;
	int8_t x870 = 0;
	int64_t x871 = INT64_MAX;
	volatile int32_t x872 = INT32_MIN;
	volatile int64_t t16 = INT64_MAX;

	t16 = (x869<<(x870^(x871==x872)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x929 = 5217941LLU;
	int8_t x930 = 9;
	static uint8_t x931 = 58U;
	int32_t x932 = INT32_MIN;
	volatile uint64_t t17 = 18230704324LLU;

	t17 = (x929<<(x930^(x931==x932)));

	if (t17 != 2671585792LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x961 = 133076419LLU;
	volatile uint8_t x962 = 53U;
	volatile uint32_t x963 = 19126807U;
	static uint8_t x964 = 1U;

	t18 = (x961<<(x962^(x963==x964)));

	if (t18 != 13285618900742963200LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1009 = INT16_MAX;
	int64_t x1011 = INT64_MIN;
	uint32_t x1012 = UINT32_MAX;
	volatile int32_t t19 = -12263;

	t19 = (x1009<<(x1010^(x1011==x1012)));

	if (t19 != 268427264) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1070 = 16U;
	uint16_t x1071 = 3208U;
	static int8_t x1072 = INT8_MAX;

	t20 = (x1069<<(x1070^(x1071==x1072)));

	if (t20 != 2147418112) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1077 = 7420U;
	uint64_t x1080 = 31487567946480LLU;
	volatile int32_t t21 = 292423;

	t21 = (x1077<<(x1078^(x1079==x1080)));

	if (t21 != 14840) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1141 = 5837;
	int8_t x1142 = 0;
	int64_t x1144 = -1LL;
	volatile int32_t t22 = -442677;

	t22 = (x1141<<(x1142^(x1143==x1144)));

	if (t22 != 11674) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1169 = INT8_MAX;
	uint8_t x1170 = 24U;
	int16_t x1171 = -1;
	volatile uint16_t x1172 = UINT16_MAX;

	t23 = (x1169<<(x1170^(x1171==x1172)));

	if (t23 != 2130706432) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1229 = UINT32_MAX;
	static uint8_t x1230 = 0U;
	uint32_t t24 = UINT32_MAX;

	t24 = (x1229<<(x1230^(x1231==x1232)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1289 = 0U;
	volatile uint16_t x1290 = 16U;
	uint64_t x1291 = UINT64_MAX;
	static volatile int8_t x1292 = -1;
	static volatile int32_t t25 = -3749404;

	t25 = (x1289<<(x1290^(x1291==x1292)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1393 = INT8_MAX;
	uint8_t x1394 = 1U;
	static int16_t x1395 = -1;
	int16_t x1396 = INT16_MAX;
	volatile int32_t t26 = 235458;

	t26 = (x1393<<(x1394^(x1395==x1396)));

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1405 = 112U;
	int16_t x1406 = 0;
	volatile uint8_t x1407 = 2U;

	t27 = (x1405<<(x1406^(x1407==x1408)));

	if (t27 != 112) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1502 = 9U;
	static int64_t x1504 = INT64_MIN;
	int32_t t28 = -1;

	t28 = (x1501<<(x1502^(x1503==x1504)));

	if (t28 != 9408512) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1513 = 10785U;
	volatile int64_t x1516 = -1LL;
	uint32_t t29 = 1912214U;

	t29 = (x1513<<(x1514^(x1515==x1516)));

	if (t29 != 1073741824U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1527 = INT32_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (x1525<<(x1526^(x1527==x1528)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1533 = UINT64_MAX;
	uint8_t x1534 = 1U;
	uint16_t x1535 = 2044U;
	uint32_t x1536 = 3369849U;
	uint64_t t31 = 306923LLU;

	t31 = (x1533<<(x1534^(x1535==x1536)));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1545 = INT8_MAX;
	static volatile uint8_t x1546 = 1U;
	int16_t x1548 = -1;
	static volatile int32_t t32 = -77038;

	t32 = (x1545<<(x1546^(x1547==x1548)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1549 = 1U;
	int32_t x1551 = INT32_MAX;
	uint32_t x1552 = 860894U;

	t33 = (x1549<<(x1550^(x1551==x1552)));

	if (t33 != 2097152) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1617 = 3212U;
	uint8_t x1618 = 8U;
	volatile int64_t x1619 = 892651281831822533LL;
	int16_t x1620 = 0;
	volatile int32_t t34 = 15139;

	t34 = (x1617<<(x1618^(x1619==x1620)));

	if (t34 != 822272) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1693 = INT16_MAX;
	uint32_t x1694 = 14U;
	volatile int8_t x1695 = INT8_MAX;
	volatile int32_t t35 = -2661;

	t35 = (x1693<<(x1694^(x1695==x1696)));

	if (t35 != 1073709056) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1821 = 138487U;
	uint8_t x1822 = 4U;
	volatile int16_t x1823 = -1;
	int8_t x1824 = INT8_MAX;
	uint32_t t36 = 11U;

	t36 = (x1821<<(x1822^(x1823==x1824)));

	if (t36 != 2215792U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1853 = INT64_MAX;
	uint16_t x1854 = 1U;
	int32_t x1855 = -1;
	volatile int32_t x1856 = -1;
	volatile int64_t t37 = INT64_MAX;

	t37 = (x1853<<(x1854^(x1855==x1856)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2197 = 1U;
	uint8_t x2198 = 6U;
	uint8_t x2199 = UINT8_MAX;
	int8_t x2200 = -1;
	int32_t t38 = 3;

	t38 = (x2197<<(x2198^(x2199==x2200)));

	if (t38 != 64) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2225 = 8U;
	int8_t x2226 = 0;
	int8_t x2227 = INT8_MIN;
	static int8_t x2228 = INT8_MAX;
	static int32_t t39 = -4378432;

	t39 = (x2225<<(x2226^(x2227==x2228)));

	if (t39 != 8) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2401 = 6;
	int16_t x2402 = 18;
	uint8_t x2403 = 0U;

	t40 = (x2401<<(x2402^(x2403==x2404)));

	if (t40 != 1572864) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2433 = UINT16_MAX;
	static int8_t x2434 = 12;
	uint64_t x2436 = UINT64_MAX;
	static int32_t t41 = -382528321;

	t41 = (x2433<<(x2434^(x2435==x2436)));

	if (t41 != 268431360) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2466 = 23U;
	static volatile int16_t x2467 = INT16_MAX;
	static int32_t x2468 = 22;
	volatile uint32_t t42 = 12300266U;

	t42 = (x2465<<(x2466^(x2467==x2468)));

	if (t42 != 4286578688U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2474 = 0;
	static volatile uint16_t x2475 = UINT16_MAX;
	volatile int32_t x2476 = 31;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x2473<<(x2474^(x2475==x2476)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2477 = INT16_MAX;
	uint16_t x2478 = 3U;
	int32_t x2479 = -7538616;
	int64_t x2480 = INT64_MAX;
	volatile int32_t t44 = -1172753;

	t44 = (x2477<<(x2478^(x2479==x2480)));

	if (t44 != 262136) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2493 = 34U;
	int8_t x2494 = 1;
	static uint32_t x2495 = 1452950U;
	static volatile int32_t t45 = -5487915;

	t45 = (x2493<<(x2494^(x2495==x2496)));

	if (t45 != 68) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2505 = INT16_MAX;
	int16_t x2506 = 0;
	int64_t x2507 = INT64_MIN;
	volatile int16_t x2508 = 2;
	int32_t t46 = 136433110;

	t46 = (x2505<<(x2506^(x2507==x2508)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2561 = 120585LLU;
	uint16_t x2562 = 12U;
	volatile int16_t x2564 = -1;
	uint64_t t47 = 10809LLU;

	t47 = (x2561<<(x2562^(x2563==x2564)));

	if (t47 != 493916160LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x2618 = 2U;
	uint8_t x2619 = 38U;
	volatile uint32_t x2620 = 173U;

	t48 = (x2617<<(x2618^(x2619==x2620)));

	if (t48 != 180) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2705 = 935U;
	int16_t x2706 = 1;
	volatile int8_t x2707 = -1;
	volatile int8_t x2708 = INT8_MAX;
	int32_t t49 = 110761;

	t49 = (x2705<<(x2706^(x2707==x2708)));

	if (t49 != 1870) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2746 = 2;
	int32_t t50 = 1981;

	t50 = (x2745<<(x2746^(x2747==x2748)));

	if (t50 != 300) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2757 = UINT64_MAX;
	uint32_t x2758 = 1U;
	int32_t x2760 = INT32_MAX;
	volatile uint64_t t51 = 8308414650413LLU;

	t51 = (x2757<<(x2758^(x2759==x2760)));

	if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x2882 = 0U;
	int8_t x2883 = INT8_MIN;
	volatile int8_t x2884 = INT8_MAX;
	volatile int32_t t52 = -102598;

	t52 = (x2881<<(x2882^(x2883==x2884)));

	if (t52 != 25351) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x2919 = 5;
	int8_t x2920 = 31;
	int32_t t53 = -120584;

	t53 = (x2917<<(x2918^(x2919==x2920)));

	if (t53 != 16320) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3205 = UINT64_MAX;
	static int8_t x3206 = 3;
	static int8_t x3207 = -1;
	uint64_t t54 = 6778591LLU;

	t54 = (x3205<<(x3206^(x3207==x3208)));

	if (t54 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3217 = UINT8_MAX;
	volatile int32_t t55 = 68;

	t55 = (x3217<<(x3218^(x3219==x3220)));

	if (t55 != 1020) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3245 = 2804LLU;
	int8_t x3246 = 1;
	int8_t x3247 = -1;
	volatile int16_t x3248 = INT16_MIN;

	t56 = (x3245<<(x3246^(x3247==x3248)));

	if (t56 != 5608LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3321 = 13570U;
	int8_t x3322 = 7;
	uint64_t x3323 = 27LLU;
	int32_t t57 = 11162;

	t57 = (x3321<<(x3322^(x3323==x3324)));

	if (t57 != 1736960) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3333 = UINT8_MAX;
	volatile int16_t x3334 = 1;
	volatile int16_t x3336 = -1;
	int32_t t58 = -1;

	t58 = (x3333<<(x3334^(x3335==x3336)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3341 = INT64_MAX;
	uint16_t x3342 = 0U;
	int16_t x3343 = 164;
	volatile int8_t x3344 = -1;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x3341<<(x3342^(x3343==x3344)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3441 = 8;
	int16_t x3444 = INT16_MAX;
	static int32_t t60 = 10;

	t60 = (x3441<<(x3442^(x3443==x3444)));

	if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x3550 = 29U;
	int16_t x3551 = -16;
	static uint8_t x3552 = 8U;
	volatile int32_t t61 = 176538;

	t61 = (x3549<<(x3550^(x3551==x3552)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3553 = 23696U;
	uint8_t x3554 = 1U;
	int16_t x3555 = INT16_MAX;
	uint32_t x3556 = 2382U;
	volatile int32_t t62 = -311451267;

	t62 = (x3553<<(x3554^(x3555==x3556)));

	if (t62 != 47392) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x3669 = 1545034317776747LLU;
	uint8_t x3670 = 9U;
	volatile int8_t x3671 = INT8_MIN;
	uint64_t t63 = 2135961381871LLU;

	t63 = (x3669<<(x3670^(x3671==x3672)));

	if (t63 != 395528785350847232LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3709 = INT16_MAX;
	int16_t x3710 = 7;
	uint16_t x3711 = 638U;
	uint16_t x3712 = 7U;
	static volatile int32_t t64 = -7349;

	t64 = (x3709<<(x3710^(x3711==x3712)));

	if (t64 != 4194176) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3789 = INT16_MAX;
	int8_t x3790 = 0;

	t65 = (x3789<<(x3790^(x3791==x3792)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3838 = 6U;
	int64_t x3840 = -247198LL;
	static volatile uint64_t t66 = 27296403918LLU;

	t66 = (x3837<<(x3838^(x3839==x3840)));

	if (t66 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3893 = 0;
	uint16_t x3895 = 6U;
	static uint8_t x3896 = 3U;
	int32_t t67 = 26444;

	t67 = (x3893<<(x3894^(x3895==x3896)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3957 = UINT64_MAX;
	uint32_t x3958 = 0U;
	volatile int16_t x3960 = INT16_MIN;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x3957<<(x3958^(x3959==x3960)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3997 = 118U;
	int16_t x3998 = 5;
	uint8_t x3999 = UINT8_MAX;
	static int64_t x4000 = INT64_MIN;
	int32_t t69 = 6;

	t69 = (x3997<<(x3998^(x3999==x4000)));

	if (t69 != 3776) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4017 = INT8_MAX;
	uint8_t x4018 = 6U;
	uint8_t x4019 = 17U;
	static volatile int32_t x4020 = INT32_MAX;
	volatile int32_t t70 = -160440;

	t70 = (x4017<<(x4018^(x4019==x4020)));

	if (t70 != 8128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4261 = UINT16_MAX;
	int8_t x4262 = 7;
	int32_t x4264 = INT32_MAX;
	volatile int32_t t71 = 1555;

	t71 = (x4261<<(x4262^(x4263==x4264)));

	if (t71 != 8388480) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4321 = 3691547U;
	int16_t x4322 = 7;
	uint8_t x4323 = 95U;
	int64_t x4324 = 4093031312814LL;
	static volatile uint32_t t72 = 119723051U;

	t72 = (x4321<<(x4322^(x4323==x4324)));

	if (t72 != 472518016U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x4349 = 0U;
	volatile uint16_t x4350 = 1U;
	uint64_t x4352 = 1339LLU;
	int32_t t73 = 272088;

	t73 = (x4349<<(x4350^(x4351==x4352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x4385 = UINT16_MAX;
	uint64_t x4388 = 12681222LLU;
	int32_t t74 = 14766823;

	t74 = (x4385<<(x4386^(x4387==x4388)));

	if (t74 != 1048560) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4445 = 159021338958LL;
	static uint8_t x4446 = 1U;
	static int64_t t75 = 5124528652LL;

	t75 = (x4445<<(x4446^(x4447==x4448)));

	if (t75 != 318042677916LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x4528 = 115377;

	t76 = (x4525<<(x4526^(x4527==x4528)));

	if (t76 != 67107840) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4537 = 1699LLU;
	volatile int8_t x4538 = 19;
	int16_t x4539 = -53;
	int16_t x4540 = 70;
	uint64_t t77 = 958805252605046949LLU;

	t77 = (x4537<<(x4538^(x4539==x4540)));

	if (t77 != 890765312LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4585 = 96U;
	uint16_t x4586 = 1U;
	int32_t x4587 = INT32_MIN;
	volatile int8_t x4588 = 0;
	int32_t t78 = 50924;

	t78 = (x4585<<(x4586^(x4587==x4588)));

	if (t78 != 192) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4597 = UINT16_MAX;
	volatile int8_t x4598 = 7;
	int32_t x4599 = -1;
	int32_t x4600 = 3326739;
	volatile int32_t t79 = 54991;

	t79 = (x4597<<(x4598^(x4599==x4600)));

	if (t79 != 8388480) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4673 = UINT64_MAX;
	int16_t x4674 = 1;
	uint32_t x4675 = 270U;
	int64_t x4676 = INT64_MIN;
	uint64_t t80 = 15268LLU;

	t80 = (x4673<<(x4674^(x4675==x4676)));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4685 = 127U;
	int16_t x4686 = 12;
	static volatile int16_t x4687 = -1;
	volatile int32_t t81 = 87113;

	t81 = (x4685<<(x4686^(x4687==x4688)));

	if (t81 != 520192) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4729 = 0;
	int16_t x4730 = 1;
	static volatile uint64_t x4732 = UINT64_MAX;
	volatile int32_t t82 = 862;

	t82 = (x4729<<(x4730^(x4731==x4732)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x4809 = 30097U;
	uint32_t x4810 = 3U;
	int8_t x4811 = INT8_MAX;
	uint16_t x4812 = 2110U;

	t83 = (x4809<<(x4810^(x4811==x4812)));

	if (t83 != 240776) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4841 = UINT32_MAX;
	int8_t x4842 = 24;
	int64_t x4843 = INT64_MIN;
	static int64_t x4844 = INT64_MAX;
	uint32_t t84 = 26546U;

	t84 = (x4841<<(x4842^(x4843==x4844)));

	if (t84 != 4278190080U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4869 = 1254U;
	static int8_t x4872 = -1;
	volatile uint32_t t85 = 49U;

	t85 = (x4869<<(x4870^(x4871==x4872)));

	if (t85 != 10032U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5013 = 31;
	static uint8_t x5014 = 3U;
	volatile int32_t x5015 = 148;
	volatile int16_t x5016 = INT16_MAX;
	volatile int32_t t86 = 1;

	t86 = (x5013<<(x5014^(x5015==x5016)));

	if (t86 != 248) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x5290 = 1U;
	volatile int32_t x5291 = -15;
	volatile int32_t x5292 = -11808087;
	int32_t t87 = 0;

	t87 = (x5289<<(x5290^(x5291==x5292)));

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5305 = INT8_MAX;
	int16_t x5306 = 0;
	int64_t x5307 = INT64_MIN;
	int32_t x5308 = INT32_MIN;
	volatile int32_t t88 = -2029;

	t88 = (x5305<<(x5306^(x5307==x5308)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5317 = INT16_MAX;
	static int32_t x5319 = -1;
	static int32_t x5320 = INT32_MIN;
	int32_t t89 = 155165426;

	t89 = (x5317<<(x5318^(x5319==x5320)));

	if (t89 != 1073709056) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x5346 = 6;
	uint32_t x5347 = UINT32_MAX;
	volatile uint64_t x5348 = UINT64_MAX;
	int32_t t90 = -12;

	t90 = (x5345<<(x5346^(x5347==x5348)));

	if (t90 != 13648704) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5366 = 2U;
	uint8_t x5367 = UINT8_MAX;
	volatile int8_t x5368 = INT8_MIN;
	volatile uint64_t t91 = 106250937LLU;

	t91 = (x5365<<(x5366^(x5367==x5368)));

	if (t91 != 929652831685456332LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5433 = 495536LLU;
	uint8_t x5434 = 0U;
	uint32_t x5435 = 35900U;
	static uint8_t x5436 = UINT8_MAX;

	t92 = (x5433<<(x5434^(x5435==x5436)));

	if (t92 != 495536LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5462 = 0U;
	int16_t x5463 = INT16_MAX;

	t93 = (x5461<<(x5462^(x5463==x5464)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x5597 = 16321019LLU;
	uint8_t x5598 = 10U;
	int32_t x5599 = INT32_MAX;
	static int32_t x5600 = INT32_MAX;
	volatile uint64_t t94 = 1LLU;

	t94 = (x5597<<(x5598^(x5599==x5600)));

	if (t94 != 33425446912LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x5625 = UINT8_MAX;
	uint16_t x5628 = 114U;
	volatile int32_t t95 = 887933;

	t95 = (x5625<<(x5626^(x5627==x5628)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x5633 = 2308U;
	uint8_t x5634 = 7U;
	uint64_t x5636 = 5731903225559636872LLU;

	t96 = (x5633<<(x5634^(x5635==x5636)));

	if (t96 != 295424) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5667 = -154970LL;
	int8_t x5668 = -1;
	volatile int32_t t97 = -45894592;

	t97 = (x5665<<(x5666^(x5667==x5668)));

	if (t97 != 1020) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5793 = 5;
	static int64_t x5795 = -37996487618382LL;
	volatile uint64_t x5796 = 4385390600346540507LLU;

	t98 = (x5793<<(x5794^(x5795==x5796)));

	if (t98 != 20480) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5861 = UINT16_MAX;
	int32_t x5862 = 0;
	int16_t x5863 = INT16_MAX;
	volatile int16_t x5864 = INT16_MIN;
	volatile int32_t t99 = 95306;

	t99 = (x5861<<(x5862^(x5863==x5864)));

	if (t99 != 65535) { NG(); } else { ; }
	
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


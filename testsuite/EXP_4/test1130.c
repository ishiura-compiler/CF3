#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x279 = UINT8_MAX;
uint8_t x280 = 7U;
volatile int64_t x346 = INT64_MIN;
int16_t x347 = 0;
static int32_t x369 = 5410800;
uint8_t x372 = 7U;
int32_t x386 = INT32_MIN;
uint32_t x387 = 206U;
int64_t x406 = 116LL;
int64_t x411 = 5898349765014127LL;
static uint16_t x417 = 1781U;
uint8_t x420 = 1U;
volatile int32_t x677 = INT32_MIN;
int32_t t12 = INT32_MIN;
static uint8_t x692 = 1U;
int8_t x814 = INT8_MAX;
volatile int64_t t17 = 205660472LL;
int64_t x869 = INT64_MAX;
int8_t x962 = INT8_MIN;
int8_t x964 = 0;
int64_t x986 = 471LL;
int64_t x987 = 262198745484LL;
int64_t x988 = 23LL;
int64_t x1119 = INT64_MAX;
uint8_t x1120 = 1U;
uint64_t t23 = UINT64_MAX;
static int16_t x1337 = -1;
volatile int8_t x1338 = INT8_MAX;
uint32_t x1339 = UINT32_MAX;
uint32_t x1655 = 4646U;
volatile uint8_t x1675 = UINT8_MAX;
volatile int32_t t29 = 1036870612;
static volatile int8_t x1678 = 1;
static int32_t x1704 = 12;
int32_t t32 = 1;
int32_t x1717 = 245620;
uint8_t x1740 = 7U;
int8_t x1793 = INT8_MAX;
int16_t x1808 = 22;
uint64_t x1905 = 21069722542LLU;
uint64_t t39 = 1243145LLU;
volatile int32_t x1978 = -1;
uint32_t x2099 = 33539320U;
static uint8_t x2471 = 10U;
uint16_t x2511 = 23932U;
uint64_t x2572 = 11LLU;
volatile int32_t t52 = 61;
int64_t x2745 = INT64_MIN;
int16_t x2761 = INT16_MIN;
int64_t x2849 = INT64_MIN;
int16_t x2914 = INT16_MIN;
int64_t x3029 = INT64_MIN;
uint16_t x3128 = 0U;
static uint8_t x3163 = 87U;
volatile uint32_t t60 = 69195U;
int8_t x3199 = 0;
static int8_t x3200 = 1;
volatile uint64_t x3234 = 37395646750768LLU;
static int16_t x3291 = 1;
uint16_t x3351 = 41U;
static int16_t x3524 = 1;
int32_t x3545 = INT32_MAX;
static int8_t x3585 = INT8_MAX;
static uint16_t x3679 = 8U;
static int16_t x3733 = INT16_MIN;
uint16_t x3736 = 7U;
volatile uint16_t x3861 = 11U;
static int16_t x3862 = INT16_MAX;
uint32_t x4041 = UINT32_MAX;
volatile int32_t t78 = 3;
uint8_t x4232 = 1U;
int8_t x4255 = INT8_MAX;
volatile int32_t t81 = 1364489;
static int32_t x4329 = INT32_MIN;
int8_t x4388 = 0;
static int8_t x4547 = INT8_MAX;
int32_t t87 = INT32_MAX;
uint16_t x4611 = 16U;
int64_t t89 = -30748338856LL;
int32_t x4680 = 0;
int8_t x4769 = INT8_MIN;
uint16_t x4772 = 1U;
int32_t t92 = 240698574;
int64_t x4879 = 59739177563LL;
static volatile int64_t x4987 = INT64_MAX;
uint8_t x4991 = UINT8_MAX;
uint64_t x5103 = UINT64_MAX;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint16_t x1 = 1U;
	int8_t x2 = -3;
	volatile uint64_t x3 = 22LLU;
	static uint8_t x4 = 23U;
	volatile int32_t t0 = -210414872;

	t0 = (x1|(x2<(x3>>x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = -823771;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = 11U;
	volatile int32_t t1 = -38735900;

	t1 = (x49|(x50<(x51>>x52)));

	if (t1 != -823771) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x117 = 10U;
	int64_t x118 = INT64_MIN;
	int16_t x119 = 0;
	int16_t x120 = 0;
	static int32_t t2 = 15748083;

	t2 = (x117|(x118<(x119>>x120)));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MAX;
	uint16_t x195 = 4942U;
	int8_t x196 = 0;
	int32_t t3 = 376;

	t3 = (x193|(x194<(x195>>x196)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x269 = INT64_MAX;
	static int32_t x270 = INT32_MAX;
	int64_t x271 = 448LL;
	volatile uint16_t x272 = 8U;
	int64_t t4 = INT64_MAX;

	t4 = (x269|(x270<(x271>>x272)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x277 = INT16_MIN;
	volatile int32_t x278 = INT32_MIN;
	static volatile int32_t t5 = -117138917;

	t5 = (x277|(x278<(x279>>x280)));

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x345 = -1LL;
	int8_t x348 = 2;
	volatile int64_t t6 = -1849583142LL;

	t6 = (x345|(x346<(x347>>x348)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x370 = 2773U;
	static uint16_t x371 = 130U;
	int32_t t7 = -1;

	t7 = (x369|(x370<(x371>>x372)));

	if (t7 != 5410800) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x385 = INT8_MIN;
	int8_t x388 = 7;
	volatile int32_t t8 = 85;

	t8 = (x385|(x386<(x387>>x388)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x405 = INT16_MAX;
	uint8_t x407 = 103U;
	uint16_t x408 = 15U;
	volatile int32_t t9 = -621;

	t9 = (x405|(x406<(x407>>x408)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x409 = 1U;
	volatile uint8_t x410 = 98U;
	int8_t x412 = 2;
	volatile int32_t t10 = 433306989;

	t10 = (x409|(x410<(x411>>x412)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x418 = UINT32_MAX;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t t11 = 195230;

	t11 = (x417|(x418<(x419>>x420)));

	if (t11 != 1781) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x678 = UINT16_MAX;
	uint32_t x679 = 15170U;
	uint8_t x680 = 3U;

	t12 = (x677|(x678<(x679>>x680)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x689 = UINT64_MAX;
	uint32_t x690 = UINT32_MAX;
	uint8_t x691 = 24U;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x689|(x690<(x691>>x692)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x741 = UINT64_MAX;
	volatile int16_t x742 = INT16_MIN;
	uint16_t x743 = 27257U;
	int8_t x744 = 20;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x741|(x742<(x743>>x744)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x765 = -1LL;
	volatile int16_t x766 = -1;
	uint32_t x767 = 12369U;
	static volatile int8_t x768 = 1;
	volatile int64_t t15 = 8015990293729251LL;

	t15 = (x765|(x766<(x767>>x768)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x801 = INT64_MAX;
	int8_t x802 = 13;
	uint32_t x803 = 953U;
	uint8_t x804 = 0U;
	volatile int64_t t16 = INT64_MAX;

	t16 = (x801|(x802<(x803>>x804)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x813 = 176428519582LL;
	volatile uint64_t x815 = 105LLU;
	int64_t x816 = 1LL;

	t17 = (x813|(x814<(x815>>x816)));

	if (t17 != 176428519582LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x870 = INT8_MAX;
	volatile uint32_t x871 = 24U;
	uint32_t x872 = 0U;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x869|(x870<(x871>>x872)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x961 = UINT8_MAX;
	uint16_t x963 = 113U;
	static int32_t t19 = 43740;

	t19 = (x961|(x962<(x963>>x964)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x985 = UINT16_MAX;
	static int32_t t20 = 66908044;

	t20 = (x985|(x986<(x987>>x988)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1117 = 1130423259U;
	volatile int32_t x1118 = INT32_MIN;
	uint32_t t21 = 196862252U;

	t21 = (x1117|(x1118<(x1119>>x1120)));

	if (t21 != 1130423259U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1121 = 32;
	int16_t x1122 = INT16_MIN;
	int32_t x1123 = INT32_MAX;
	uint32_t x1124 = 30U;
	int32_t t22 = -12;

	t22 = (x1121|(x1122<(x1123>>x1124)));

	if (t22 != 33) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1169 = UINT64_MAX;
	int64_t x1170 = -1LL;
	int8_t x1171 = INT8_MAX;
	int32_t x1172 = 6;

	t23 = (x1169|(x1170<(x1171>>x1172)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1265 = -1;
	uint32_t x1266 = 0U;
	int16_t x1267 = INT16_MAX;
	uint16_t x1268 = 1U;
	static volatile int32_t t24 = -5361;

	t24 = (x1265|(x1266<(x1267>>x1268)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1340 = 3LL;
	volatile int32_t t25 = 118609;

	t25 = (x1337|(x1338<(x1339>>x1340)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1501 = INT8_MIN;
	volatile int8_t x1502 = 9;
	int64_t x1503 = INT64_MAX;
	volatile uint8_t x1504 = 55U;
	volatile int32_t t26 = -57834674;

	t26 = (x1501|(x1502<(x1503>>x1504)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1569 = 1U;
	int8_t x1570 = 16;
	static uint32_t x1571 = 2369936U;
	uint8_t x1572 = 28U;
	static int32_t t27 = 2;

	t27 = (x1569|(x1570<(x1571>>x1572)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1653 = 23LLU;
	uint32_t x1654 = 26U;
	static volatile uint64_t x1656 = 4LLU;
	static volatile uint64_t t28 = 43LLU;

	t28 = (x1653|(x1654<(x1655>>x1656)));

	if (t28 != 23LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1673 = 63;
	static int64_t x1674 = INT64_MAX;
	volatile uint8_t x1676 = 7U;

	t29 = (x1673|(x1674<(x1675>>x1676)));

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1677 = -1LL;
	volatile int16_t x1679 = 7539;
	int8_t x1680 = 20;
	int64_t t30 = -397247057635730819LL;

	t30 = (x1677|(x1678<(x1679>>x1680)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x1701 = INT8_MAX;
	static volatile int16_t x1702 = 4143;
	uint8_t x1703 = 24U;
	volatile int32_t t31 = 25175161;

	t31 = (x1701|(x1702<(x1703>>x1704)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1709 = INT8_MAX;
	volatile int16_t x1710 = INT16_MIN;
	static volatile int8_t x1711 = INT8_MAX;
	uint8_t x1712 = 2U;

	t32 = (x1709|(x1710<(x1711>>x1712)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1718 = UINT64_MAX;
	int64_t x1719 = INT64_MAX;
	uint16_t x1720 = 22U;
	volatile int32_t t33 = -2126;

	t33 = (x1717|(x1718<(x1719>>x1720)));

	if (t33 != 245620) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1737 = 70U;
	int64_t x1738 = -558926864521LL;
	uint16_t x1739 = 6372U;
	uint32_t t34 = 128U;

	t34 = (x1737|(x1738<(x1739>>x1740)));

	if (t34 != 71U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1794 = INT8_MIN;
	static int64_t x1795 = 112431LL;
	int8_t x1796 = 1;
	int32_t t35 = -77;

	t35 = (x1793|(x1794<(x1795>>x1796)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1797 = 744U;
	int64_t x1798 = -1LL;
	int16_t x1799 = INT16_MAX;
	int16_t x1800 = 0;
	volatile uint32_t t36 = 827U;

	t36 = (x1797|(x1798<(x1799>>x1800)));

	if (t36 != 745U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1805 = 63;
	static volatile int32_t x1806 = 705537;
	static uint64_t x1807 = UINT64_MAX;
	int32_t t37 = -2;

	t37 = (x1805|(x1806<(x1807>>x1808)));

	if (t37 != 63) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1893 = -114LL;
	volatile int64_t x1894 = -1LL;
	static volatile int64_t x1895 = INT64_MAX;
	volatile uint16_t x1896 = 49U;
	volatile int64_t t38 = -458938547139150517LL;

	t38 = (x1893|(x1894<(x1895>>x1896)));

	if (t38 != -113LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1906 = 26U;
	volatile int32_t x1907 = 1;
	uint16_t x1908 = 3U;

	t39 = (x1905|(x1906<(x1907>>x1908)));

	if (t39 != 21069722542LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1953 = INT16_MIN;
	static int32_t x1954 = INT32_MIN;
	uint16_t x1955 = UINT16_MAX;
	uint8_t x1956 = 28U;
	static int32_t t40 = 1;

	t40 = (x1953|(x1954<(x1955>>x1956)));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1977 = INT64_MIN;
	int32_t x1979 = INT32_MAX;
	uint8_t x1980 = 10U;
	volatile int64_t t41 = 65678LL;

	t41 = (x1977|(x1978<(x1979>>x1980)));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2049 = 8306U;
	uint64_t x2050 = 734571LLU;
	uint16_t x2051 = UINT16_MAX;
	volatile int16_t x2052 = 1;
	volatile uint32_t t42 = 792327U;

	t42 = (x2049|(x2050<(x2051>>x2052)));

	if (t42 != 8306U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x2097 = INT16_MAX;
	int32_t x2098 = INT32_MIN;
	volatile uint8_t x2100 = 4U;
	volatile int32_t t43 = 85356654;

	t43 = (x2097|(x2098<(x2099>>x2100)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2209 = 1709636105U;
	volatile int64_t x2210 = -1LL;
	static volatile uint8_t x2211 = 6U;
	static uint16_t x2212 = 1U;
	uint32_t t44 = 94U;

	t44 = (x2209|(x2210<(x2211>>x2212)));

	if (t44 != 1709636105U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2441 = UINT8_MAX;
	int8_t x2442 = 1;
	volatile uint32_t x2443 = 337U;
	int8_t x2444 = 0;
	volatile int32_t t45 = 220582;

	t45 = (x2441|(x2442<(x2443>>x2444)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2469 = -1;
	int64_t x2470 = INT64_MAX;
	uint8_t x2472 = 12U;
	int32_t t46 = -1;

	t46 = (x2469|(x2470<(x2471>>x2472)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2485 = 58683LLU;
	static int32_t x2486 = INT32_MIN;
	int32_t x2487 = INT32_MAX;
	uint16_t x2488 = 0U;
	uint64_t t47 = 2870544366044331LLU;

	t47 = (x2485|(x2486<(x2487>>x2488)));

	if (t47 != 58683LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2509 = INT64_MIN;
	int32_t x2510 = INT32_MIN;
	volatile int8_t x2512 = 1;
	int64_t t48 = 3LL;

	t48 = (x2509|(x2510<(x2511>>x2512)));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2549 = 235U;
	int32_t x2550 = -30;
	int64_t x2551 = 56713568048LL;
	int16_t x2552 = 56;
	static volatile int32_t t49 = -6;

	t49 = (x2549|(x2550<(x2551>>x2552)));

	if (t49 != 235) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2569 = UINT32_MAX;
	int8_t x2570 = INT8_MAX;
	static uint8_t x2571 = UINT8_MAX;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x2569|(x2570<(x2571>>x2572)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x2685 = 0U;
	int64_t x2686 = INT64_MAX;
	static int32_t x2687 = INT32_MAX;
	uint8_t x2688 = 1U;
	uint32_t t51 = 2573564U;

	t51 = (x2685|(x2686<(x2687>>x2688)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2729 = 51;
	volatile uint64_t x2730 = 1107667794796984052LLU;
	volatile uint32_t x2731 = 32284561U;
	uint32_t x2732 = 0U;

	t52 = (x2729|(x2730<(x2731>>x2732)));

	if (t52 != 51) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2746 = -1;
	uint8_t x2747 = 61U;
	volatile uint16_t x2748 = 1U;
	volatile int64_t t53 = -91706906511LL;

	t53 = (x2745|(x2746<(x2747>>x2748)));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2762 = -284;
	static volatile int16_t x2763 = INT16_MAX;
	uint8_t x2764 = 25U;
	int32_t t54 = -3;

	t54 = (x2761|(x2762<(x2763>>x2764)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2850 = UINT8_MAX;
	uint16_t x2851 = 3240U;
	volatile uint16_t x2852 = 4U;
	static volatile int64_t t55 = INT64_MIN;

	t55 = (x2849|(x2850<(x2851>>x2852)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2865 = -1LL;
	int16_t x2866 = 27;
	static volatile int64_t x2867 = 8898756002155641LL;
	uint16_t x2868 = 19U;
	volatile int64_t t56 = -96166441LL;

	t56 = (x2865|(x2866<(x2867>>x2868)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2913 = INT32_MAX;
	uint32_t x2915 = UINT32_MAX;
	static uint8_t x2916 = 2U;
	int32_t t57 = INT32_MAX;

	t57 = (x2913|(x2914<(x2915>>x2916)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3030 = INT64_MIN;
	static volatile uint32_t x3031 = 74U;
	uint8_t x3032 = 18U;
	volatile int64_t t58 = -901568582300LL;

	t58 = (x3029|(x3030<(x3031>>x3032)));

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3125 = -1;
	static int32_t x3126 = INT32_MIN;
	volatile int64_t x3127 = 3507634454LL;
	int32_t t59 = 35556329;

	t59 = (x3125|(x3126<(x3127>>x3128)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3161 = 48U;
	uint16_t x3162 = 0U;
	uint8_t x3164 = 1U;

	t60 = (x3161|(x3162<(x3163>>x3164)));

	if (t60 != 49U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3197 = 213U;
	int32_t x3198 = INT32_MIN;
	static int32_t t61 = -1;

	t61 = (x3197|(x3198<(x3199>>x3200)));

	if (t61 != 213) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3233 = -438653786;
	int64_t x3235 = 2850LL;
	uint16_t x3236 = 1U;
	static volatile int32_t t62 = -1;

	t62 = (x3233|(x3234<(x3235>>x3236)));

	if (t62 != -438653786) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3289 = INT32_MIN;
	uint64_t x3290 = UINT64_MAX;
	uint8_t x3292 = 0U;
	static int32_t t63 = INT32_MIN;

	t63 = (x3289|(x3290<(x3291>>x3292)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3349 = 0U;
	int64_t x3350 = INT64_MIN;
	uint64_t x3352 = 9LLU;
	int32_t t64 = -1091911;

	t64 = (x3349|(x3350<(x3351>>x3352)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3421 = -1;
	int16_t x3422 = -146;
	uint64_t x3423 = 964391617LLU;
	uint8_t x3424 = 1U;
	int32_t t65 = -311;

	t65 = (x3421|(x3422<(x3423>>x3424)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3521 = UINT8_MAX;
	int32_t x3522 = -3;
	uint64_t x3523 = 23804LLU;
	int32_t t66 = 26;

	t66 = (x3521|(x3522<(x3523>>x3524)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3546 = -1;
	uint64_t x3547 = UINT64_MAX;
	static uint8_t x3548 = 0U;
	int32_t t67 = INT32_MAX;

	t67 = (x3545|(x3546<(x3547>>x3548)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3586 = 1U;
	int32_t x3587 = INT32_MAX;
	volatile uint8_t x3588 = 1U;
	int32_t t68 = 916155;

	t68 = (x3585|(x3586<(x3587>>x3588)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3677 = -1LL;
	int64_t x3678 = INT64_MAX;
	static uint8_t x3680 = 9U;
	static volatile int64_t t69 = -30841927618777LL;

	t69 = (x3677|(x3678<(x3679>>x3680)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x3705 = INT64_MAX;
	int16_t x3706 = INT16_MIN;
	static int64_t x3707 = 590299036893956LL;
	uint8_t x3708 = 1U;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x3705|(x3706<(x3707>>x3708)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3717 = INT16_MIN;
	static uint64_t x3718 = 97797246969439782LLU;
	static uint16_t x3719 = UINT16_MAX;
	uint8_t x3720 = 1U;
	int32_t t71 = 6;

	t71 = (x3717|(x3718<(x3719>>x3720)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3734 = INT16_MAX;
	uint16_t x3735 = 922U;
	volatile int32_t t72 = -32199;

	t72 = (x3733|(x3734<(x3735>>x3736)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x3863 = 22065U;
	static uint16_t x3864 = 23U;
	static volatile int32_t t73 = 0;

	t73 = (x3861|(x3862<(x3863>>x3864)));

	if (t73 != 11) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3877 = 32400336916LL;
	volatile int16_t x3878 = 48;
	uint32_t x3879 = 1200743U;
	int8_t x3880 = 8;
	volatile int64_t t74 = -450217337083284856LL;

	t74 = (x3877|(x3878<(x3879>>x3880)));

	if (t74 != 32400336917LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x3905 = 10;
	int64_t x3906 = INT64_MIN;
	static uint16_t x3907 = 251U;
	uint64_t x3908 = 1LLU;
	volatile int32_t t75 = 37495;

	t75 = (x3905|(x3906<(x3907>>x3908)));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x4025 = 1408U;
	static uint32_t x4026 = 7953U;
	volatile uint8_t x4027 = UINT8_MAX;
	static volatile int8_t x4028 = 2;
	static volatile int32_t t76 = 16403;

	t76 = (x4025|(x4026<(x4027>>x4028)));

	if (t76 != 1408) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x4042 = -1;
	volatile int8_t x4043 = 7;
	uint16_t x4044 = 1U;
	uint32_t t77 = UINT32_MAX;

	t77 = (x4041|(x4042<(x4043>>x4044)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x4065 = UINT16_MAX;
	uint64_t x4066 = 427LLU;
	int16_t x4067 = INT16_MAX;
	uint16_t x4068 = 10U;

	t78 = (x4065|(x4066<(x4067>>x4068)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4073 = UINT16_MAX;
	int8_t x4074 = -7;
	int16_t x4075 = 0;
	static volatile int8_t x4076 = 30;
	int32_t t79 = 199161;

	t79 = (x4073|(x4074<(x4075>>x4076)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4229 = 1LL;
	static uint16_t x4230 = 156U;
	static uint32_t x4231 = 1182121U;
	volatile int64_t t80 = 1090296946LL;

	t80 = (x4229|(x4230<(x4231>>x4232)));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4253 = 0;
	volatile uint64_t x4254 = UINT64_MAX;
	static volatile uint8_t x4256 = 1U;

	t81 = (x4253|(x4254<(x4255>>x4256)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x4265 = INT32_MAX;
	uint16_t x4266 = 3953U;
	uint64_t x4267 = 6140557LLU;
	static uint8_t x4268 = 4U;
	int32_t t82 = INT32_MAX;

	t82 = (x4265|(x4266<(x4267>>x4268)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4330 = -1LL;
	uint64_t x4331 = 587LLU;
	volatile uint16_t x4332 = 3U;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x4329|(x4330<(x4331>>x4332)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4377 = UINT64_MAX;
	static uint16_t x4378 = UINT16_MAX;
	volatile int16_t x4379 = INT16_MAX;
	volatile uint32_t x4380 = 25U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x4377|(x4378<(x4379>>x4380)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4385 = INT8_MIN;
	volatile uint16_t x4386 = 17301U;
	uint64_t x4387 = UINT64_MAX;
	static volatile int32_t t85 = 1058646048;

	t85 = (x4385|(x4386<(x4387>>x4388)));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4493 = 48U;
	uint64_t x4494 = UINT64_MAX;
	volatile int64_t x4495 = 524044LL;
	uint8_t x4496 = 5U;
	volatile int32_t t86 = 5983690;

	t86 = (x4493|(x4494<(x4495>>x4496)));

	if (t86 != 48) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4545 = INT32_MAX;
	static uint64_t x4546 = 118890219657128LLU;
	uint8_t x4548 = 14U;

	t87 = (x4545|(x4546<(x4547>>x4548)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4609 = INT32_MAX;
	int16_t x4610 = -6534;
	uint32_t x4612 = 18U;
	int32_t t88 = INT32_MAX;

	t88 = (x4609|(x4610<(x4611>>x4612)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4673 = -1845758706LL;
	uint16_t x4674 = 1336U;
	uint8_t x4675 = 1U;
	uint64_t x4676 = 1LLU;

	t89 = (x4673|(x4674<(x4675>>x4676)));

	if (t89 != -1845758706LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4677 = 307U;
	uint8_t x4678 = 13U;
	int32_t x4679 = INT32_MAX;
	volatile int32_t t90 = -3008;

	t90 = (x4677|(x4678<(x4679>>x4680)));

	if (t90 != 307) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4745 = INT32_MIN;
	int64_t x4746 = INT64_MIN;
	int16_t x4747 = 368;
	static uint16_t x4748 = 20U;
	int32_t t91 = 14696828;

	t91 = (x4745|(x4746<(x4747>>x4748)));

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4770 = 7;
	uint32_t x4771 = UINT32_MAX;

	t92 = (x4769|(x4770<(x4771>>x4772)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4797 = -12LL;
	uint64_t x4798 = UINT64_MAX;
	uint8_t x4799 = UINT8_MAX;
	uint8_t x4800 = 1U;
	int64_t t93 = -195LL;

	t93 = (x4797|(x4798<(x4799>>x4800)));

	if (t93 != -12LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4877 = 79392967464LLU;
	volatile int16_t x4878 = INT16_MIN;
	int16_t x4880 = 0;
	volatile uint64_t t94 = 1792LLU;

	t94 = (x4877|(x4878<(x4879>>x4880)));

	if (t94 != 79392967465LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4985 = INT32_MIN;
	int8_t x4986 = -1;
	int8_t x4988 = 1;
	volatile int32_t t95 = -20696796;

	t95 = (x4985|(x4986<(x4987>>x4988)));

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x4989 = 2612;
	int8_t x4990 = 14;
	uint32_t x4992 = 4U;
	int32_t t96 = 4136784;

	t96 = (x4989|(x4990<(x4991>>x4992)));

	if (t96 != 2613) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5001 = UINT16_MAX;
	static uint16_t x5002 = UINT16_MAX;
	uint8_t x5003 = UINT8_MAX;
	int32_t x5004 = 1;
	int32_t t97 = -106961;

	t97 = (x5001|(x5002<(x5003>>x5004)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5017 = INT8_MIN;
	int16_t x5018 = INT16_MIN;
	int32_t x5019 = INT32_MAX;
	int8_t x5020 = 0;
	volatile int32_t t98 = 149629;

	t98 = (x5017|(x5018<(x5019>>x5020)));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5101 = UINT32_MAX;
	uint16_t x5102 = 4144U;
	int32_t x5104 = 3;

	t99 = (x5101|(x5102<(x5103>>x5104)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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


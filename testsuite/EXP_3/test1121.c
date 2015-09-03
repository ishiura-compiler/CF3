#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x9 = -1;
static int16_t x12 = 1;
uint32_t x107 = UINT32_MAX;
uint8_t x127 = 2U;
uint16_t x128 = 1U;
int16_t x185 = -134;
int64_t x188 = 1LL;
int16_t x219 = 43;
static int8_t x236 = 7;
uint16_t x353 = UINT16_MAX;
static int16_t x354 = INT16_MIN;
uint16_t x356 = 0U;
uint32_t t10 = 972918U;
uint8_t x489 = UINT8_MAX;
int64_t x490 = INT64_MIN;
int32_t x596 = 9;
static uint32_t x603 = 0U;
int32_t x622 = INT32_MIN;
int16_t x687 = INT16_MAX;
volatile int32_t t16 = 31950703;
static uint16_t x775 = 116U;
uint16_t x776 = 8U;
uint8_t x797 = 4U;
int32_t x799 = 2548;
int64_t x800 = 26LL;
static int8_t x823 = 4;
static volatile int32_t t19 = -64705126;
uint8_t x1004 = 26U;
int16_t x1038 = INT16_MIN;
int64_t x1254 = -4361532962LL;
int8_t x1255 = 5;
int64_t x1265 = -1LL;
static uint32_t x1266 = UINT32_MAX;
static volatile int64_t x1319 = 39LL;
uint8_t x1320 = 17U;
volatile uint32_t x1358 = 6U;
volatile int64_t x1514 = INT64_MAX;
static int32_t x1515 = 386061;
int16_t x1633 = INT16_MAX;
volatile uint16_t x1635 = 14U;
int32_t x1774 = -28157;
uint64_t x1859 = 4271703076LLU;
volatile int64_t x1944 = 4LL;
int32_t x1998 = -31656942;
int32_t t40 = 112406;
static volatile uint64_t t41 = 1003418483LLU;
int32_t x2201 = INT32_MAX;
int32_t t43 = 0;
volatile int64_t x2266 = 125LL;
int64_t x2291 = 3858394LL;
uint16_t x2347 = 0U;
uint64_t x2380 = 0LLU;
int32_t t48 = 6583968;
uint8_t x2567 = 0U;
int32_t x2585 = 11676746;
volatile int64_t x2705 = -1LL;
static int32_t x2706 = -103;
uint64_t x2723 = 2424LLU;
int32_t x2790 = INT32_MIN;
int64_t x2791 = 15198935555LL;
int8_t x2812 = 0;
volatile int64_t x3033 = INT64_MIN;
uint8_t x3320 = 2U;
int64_t t63 = -19897LL;
volatile uint32_t t65 = 1U;
int32_t t66 = -42865;
uint16_t x3435 = 3351U;
volatile uint64_t x3595 = UINT64_MAX;
static int16_t x3745 = -1;
uint8_t x3746 = 5U;
uint8_t x3747 = UINT8_MAX;
volatile int32_t x3757 = INT32_MIN;
int16_t x3790 = INT16_MIN;
volatile int64_t x3883 = 1718574546190856LL;
volatile int64_t t78 = -225LL;
volatile uint32_t x4040 = 1U;
uint16_t x4103 = UINT16_MAX;
int16_t x4104 = 1;
uint64_t x4113 = UINT64_MAX;
int32_t t85 = -20;
static volatile int8_t x4122 = -1;
volatile int8_t x4123 = INT8_MAX;
uint8_t x4136 = 1U;
int32_t x4189 = -7;
int64_t x4190 = 364885125984365LL;
int8_t x4234 = INT8_MIN;
uint16_t x4281 = 24U;
int8_t x4285 = INT8_MIN;
int32_t t92 = -4;
uint32_t x4332 = 7U;
volatile int64_t x4366 = INT64_MAX;
volatile int8_t x4367 = 3;
uint32_t x4430 = UINT32_MAX;
uint16_t x4431 = 1U;
uint8_t x4432 = 23U;
volatile int32_t t98 = 2;
volatile int32_t x4609 = -1;
uint8_t x4611 = 0U;


void f0(void) {
	static int8_t x10 = INT8_MAX;
	int16_t x11 = 1;
	volatile int32_t t0 = -4;

	t0 = ((x9<x10)*(x11>>x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x69 = -1;
	int32_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	volatile uint16_t x72 = 0U;
	static volatile uint32_t t1 = 1770475637U;

	t1 = ((x69<x70)*(x71>>x72));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MIN;
	int64_t x108 = 0LL;
	uint32_t t2 = 368U;

	t2 = ((x105<x106)*(x107>>x108));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x125 = 2089983;
	static int16_t x126 = 0;
	static int32_t t3 = -832344;

	t3 = ((x125<x126)*(x127>>x128));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x186 = -1;
	int64_t x187 = 998642896978LL;
	volatile int64_t t4 = -35697800218869LL;

	t4 = ((x185<x186)*(x187>>x188));

	if (t4 != 499321448489LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	volatile int32_t x220 = 29;
	int32_t t5 = 733589126;

	t5 = ((x217<x218)*(x219>>x220));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x233 = 73U;
	int16_t x234 = -12;
	uint64_t x235 = 1266696260227LLU;
	static volatile uint64_t t6 = 32905578950806LLU;

	t6 = ((x233<x234)*(x235>>x236));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x241 = 712U;
	int32_t x242 = -1;
	uint64_t x243 = 240LLU;
	static int8_t x244 = 13;
	static volatile uint64_t t7 = 7054LLU;

	t7 = ((x241<x242)*(x243>>x244));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x297 = -1;
	int8_t x298 = -1;
	int64_t x299 = 23270565575051295LL;
	int8_t x300 = 0;
	static volatile int64_t t8 = -1840088699301068LL;

	t8 = ((x297<x298)*(x299>>x300));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x333 = -90;
	static int64_t x334 = -200666187403370LL;
	volatile uint32_t x335 = UINT32_MAX;
	int8_t x336 = 15;
	uint32_t t9 = 1U;

	t9 = ((x333<x334)*(x335>>x336));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x355 = 2450381U;

	t10 = ((x353<x354)*(x355>>x356));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x377 = INT8_MIN;
	volatile int64_t x378 = INT64_MIN;
	static int64_t x379 = INT64_MAX;
	uint8_t x380 = 3U;
	static volatile int64_t t11 = 26960306158LL;

	t11 = ((x377<x378)*(x379>>x380));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x491 = UINT64_MAX;
	uint8_t x492 = 17U;
	uint64_t t12 = 1535451LLU;

	t12 = ((x489<x490)*(x491>>x492));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x593 = 88357785;
	volatile int32_t x594 = INT32_MIN;
	uint32_t x595 = 15536542U;
	volatile uint32_t t13 = 18628349U;

	t13 = ((x593<x594)*(x595>>x596));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x601 = -886759938650507407LL;
	int8_t x602 = -1;
	uint8_t x604 = 1U;
	uint32_t t14 = 1U;

	t14 = ((x601<x602)*(x603>>x604));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x621 = 47502643306475LLU;
	static volatile uint8_t x623 = 21U;
	uint16_t x624 = 11U;
	int32_t t15 = -3;

	t15 = ((x621<x622)*(x623>>x624));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x685 = 2U;
	int8_t x686 = INT8_MAX;
	uint8_t x688 = 28U;

	t16 = ((x685<x686)*(x687>>x688));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x773 = INT64_MAX;
	volatile int32_t x774 = -1;
	volatile int32_t t17 = -2622;

	t17 = ((x773<x774)*(x775>>x776));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x798 = INT32_MIN;
	volatile int32_t t18 = 7811156;

	t18 = ((x797<x798)*(x799>>x800));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x821 = UINT8_MAX;
	static int8_t x822 = INT8_MIN;
	uint8_t x824 = 1U;

	t19 = ((x821<x822)*(x823>>x824));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x845 = 5U;
	int32_t x846 = -149082941;
	uint16_t x847 = UINT16_MAX;
	static volatile uint8_t x848 = 20U;
	static volatile int32_t t20 = -28;

	t20 = ((x845<x846)*(x847>>x848));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1001 = INT16_MIN;
	uint32_t x1002 = UINT32_MAX;
	uint32_t x1003 = UINT32_MAX;
	uint32_t t21 = 13804U;

	t21 = ((x1001<x1002)*(x1003>>x1004));

	if (t21 != 63U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1037 = UINT8_MAX;
	int32_t x1039 = 29;
	int8_t x1040 = 28;
	int32_t t22 = -14;

	t22 = ((x1037<x1038)*(x1039>>x1040));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1253 = INT32_MIN;
	uint32_t x1256 = 6U;
	volatile int32_t t23 = -1;

	t23 = ((x1253<x1254)*(x1255>>x1256));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x1267 = UINT64_MAX;
	volatile uint8_t x1268 = 6U;
	uint64_t t24 = 10840LLU;

	t24 = ((x1265<x1266)*(x1267>>x1268));

	if (t24 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1317 = INT8_MIN;
	volatile int32_t x1318 = INT32_MIN;
	static volatile int64_t t25 = 2141LL;

	t25 = ((x1317<x1318)*(x1319>>x1320));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1357 = INT64_MIN;
	uint8_t x1359 = 1U;
	int8_t x1360 = 1;
	volatile int32_t t26 = 5;

	t26 = ((x1357<x1358)*(x1359>>x1360));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1369 = INT32_MIN;
	volatile int32_t x1370 = INT32_MIN;
	uint8_t x1371 = 1U;
	volatile uint16_t x1372 = 7U;
	int32_t t27 = -225563716;

	t27 = ((x1369<x1370)*(x1371>>x1372));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1413 = INT64_MAX;
	static volatile int16_t x1414 = -1;
	int8_t x1415 = 1;
	int8_t x1416 = 11;
	volatile int32_t t28 = -257306;

	t28 = ((x1413<x1414)*(x1415>>x1416));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1453 = 1U;
	static int64_t x1454 = -1LL;
	uint32_t x1455 = 867U;
	int8_t x1456 = 1;
	uint32_t t29 = 58U;

	t29 = ((x1453<x1454)*(x1455>>x1456));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1513 = 17;
	volatile uint8_t x1516 = 1U;
	static volatile int32_t t30 = -453;

	t30 = ((x1513<x1514)*(x1515>>x1516));

	if (t30 != 193030) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1634 = -59;
	int8_t x1636 = 0;
	volatile int32_t t31 = 1493;

	t31 = ((x1633<x1634)*(x1635>>x1636));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1673 = 1U;
	static int8_t x1674 = 1;
	volatile uint32_t x1675 = UINT32_MAX;
	uint16_t x1676 = 2U;
	uint32_t t32 = 3U;

	t32 = ((x1673<x1674)*(x1675>>x1676));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1773 = 33U;
	uint16_t x1775 = UINT16_MAX;
	static int16_t x1776 = 3;
	int32_t t33 = 3030;

	t33 = ((x1773<x1774)*(x1775>>x1776));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1853 = INT32_MIN;
	static int32_t x1854 = INT32_MIN;
	uint8_t x1855 = 106U;
	uint16_t x1856 = 30U;
	int32_t t34 = 47;

	t34 = ((x1853<x1854)*(x1855>>x1856));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1857 = 12LLU;
	int16_t x1858 = -385;
	int16_t x1860 = 7;
	volatile uint64_t t35 = 866LLU;

	t35 = ((x1857<x1858)*(x1859>>x1860));

	if (t35 != 33372680LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1941 = INT8_MIN;
	volatile int32_t x1942 = INT32_MAX;
	int64_t x1943 = INT64_MAX;
	int64_t t36 = -290718910779312LL;

	t36 = ((x1941<x1942)*(x1943>>x1944));

	if (t36 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1961 = INT16_MAX;
	static int8_t x1962 = INT8_MIN;
	int8_t x1963 = 0;
	uint8_t x1964 = 2U;
	volatile int32_t t37 = -1122581;

	t37 = ((x1961<x1962)*(x1963>>x1964));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1997 = UINT8_MAX;
	int32_t x1999 = 1252;
	static int8_t x2000 = 0;
	volatile int32_t t38 = 524277;

	t38 = ((x1997<x1998)*(x1999>>x2000));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2061 = -60519045266LL;
	uint32_t x2062 = 1282U;
	uint32_t x2063 = UINT32_MAX;
	uint32_t x2064 = 2U;
	static volatile uint32_t t39 = 939640U;

	t39 = ((x2061<x2062)*(x2063>>x2064));

	if (t39 != 1073741823U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2073 = -168087890871024575LL;
	uint32_t x2074 = 96U;
	uint16_t x2075 = 4695U;
	volatile int16_t x2076 = 1;

	t40 = ((x2073<x2074)*(x2075>>x2076));

	if (t40 != 2347) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2101 = INT64_MIN;
	uint8_t x2102 = 3U;
	static uint64_t x2103 = 3109225273516637872LLU;
	uint64_t x2104 = 2LLU;

	t41 = ((x2101<x2102)*(x2103>>x2104));

	if (t41 != 777306318379159468LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2157 = -1;
	static uint32_t x2158 = UINT32_MAX;
	int32_t x2159 = 0;
	uint32_t x2160 = 5U;
	int32_t t42 = -16;

	t42 = ((x2157<x2158)*(x2159>>x2160));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2202 = INT64_MAX;
	uint16_t x2203 = 20U;
	int64_t x2204 = 1LL;

	t43 = ((x2201<x2202)*(x2203>>x2204));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x2265 = INT32_MIN;
	int32_t x2267 = INT32_MAX;
	int8_t x2268 = 0;
	volatile int32_t t44 = INT32_MAX;

	t44 = ((x2265<x2266)*(x2267>>x2268));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2289 = -3;
	int64_t x2290 = INT64_MAX;
	volatile uint16_t x2292 = 35U;
	int64_t t45 = 345471796LL;

	t45 = ((x2289<x2290)*(x2291>>x2292));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2345 = INT16_MIN;
	int8_t x2346 = 4;
	uint32_t x2348 = 31U;
	static volatile int32_t t46 = 22357499;

	t46 = ((x2345<x2346)*(x2347>>x2348));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2377 = 171;
	uint32_t x2378 = UINT32_MAX;
	static volatile uint8_t x2379 = 6U;
	static int32_t t47 = -8147107;

	t47 = ((x2377<x2378)*(x2379>>x2380));

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2405 = UINT64_MAX;
	uint32_t x2406 = 1U;
	int16_t x2407 = 13;
	int8_t x2408 = 1;

	t48 = ((x2405<x2406)*(x2407>>x2408));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x2565 = 4LLU;
	volatile uint32_t x2566 = 26924U;
	volatile int8_t x2568 = 1;
	volatile int32_t t49 = -92;

	t49 = ((x2565<x2566)*(x2567>>x2568));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2573 = -41;
	int32_t x2574 = 11400961;
	volatile uint32_t x2575 = 16U;
	int8_t x2576 = 0;
	uint32_t t50 = 196U;

	t50 = ((x2573<x2574)*(x2575>>x2576));

	if (t50 != 16U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2586 = UINT8_MAX;
	int64_t x2587 = INT64_MAX;
	int16_t x2588 = 4;
	int64_t t51 = 128798610201LL;

	t51 = ((x2585<x2586)*(x2587>>x2588));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x2589 = INT64_MIN;
	int8_t x2590 = INT8_MIN;
	volatile uint64_t x2591 = UINT64_MAX;
	int16_t x2592 = 15;
	static volatile uint64_t t52 = 35170285LLU;

	t52 = ((x2589<x2590)*(x2591>>x2592));

	if (t52 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2637 = -1LL;
	volatile int8_t x2638 = INT8_MIN;
	uint32_t x2639 = 2363791U;
	volatile int8_t x2640 = 14;
	volatile uint32_t t53 = 3469435U;

	t53 = ((x2637<x2638)*(x2639>>x2640));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2707 = 6881990235428618LL;
	static int8_t x2708 = 3;
	int64_t t54 = -63LL;

	t54 = ((x2705<x2706)*(x2707>>x2708));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2721 = UINT16_MAX;
	int32_t x2722 = 109698;
	uint8_t x2724 = 0U;
	static volatile uint64_t t55 = 200221082LLU;

	t55 = ((x2721<x2722)*(x2723>>x2724));

	if (t55 != 2424LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2789 = UINT8_MAX;
	volatile uint16_t x2792 = 10U;
	volatile int64_t t56 = -67547882474LL;

	t56 = ((x2789<x2790)*(x2791>>x2792));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2809 = INT32_MIN;
	int8_t x2810 = INT8_MIN;
	static uint8_t x2811 = 15U;
	static volatile int32_t t57 = -199;

	t57 = ((x2809<x2810)*(x2811>>x2812));

	if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x2889 = -1;
	uint32_t x2890 = 125U;
	uint16_t x2891 = UINT16_MAX;
	volatile int32_t x2892 = 0;
	int32_t t58 = -5160;

	t58 = ((x2889<x2890)*(x2891>>x2892));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3034 = UINT16_MAX;
	uint8_t x3035 = 0U;
	static uint16_t x3036 = 6U;
	int32_t t59 = -1;

	t59 = ((x3033<x3034)*(x3035>>x3036));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3149 = INT16_MAX;
	volatile int32_t x3150 = -2133653;
	int8_t x3151 = 1;
	uint64_t x3152 = 8LLU;
	int32_t t60 = 35135;

	t60 = ((x3149<x3150)*(x3151>>x3152));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3197 = INT16_MIN;
	int64_t x3198 = INT64_MIN;
	static uint16_t x3199 = UINT16_MAX;
	uint32_t x3200 = 1U;
	volatile int32_t t61 = -14128;

	t61 = ((x3197<x3198)*(x3199>>x3200));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3317 = INT64_MIN;
	int32_t x3318 = -1;
	uint32_t x3319 = 844U;
	volatile uint32_t t62 = 8150U;

	t62 = ((x3317<x3318)*(x3319>>x3320));

	if (t62 != 211U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x3321 = INT64_MAX;
	int32_t x3322 = INT32_MAX;
	int64_t x3323 = INT64_MAX;
	uint16_t x3324 = 45U;

	t63 = ((x3321<x3322)*(x3323>>x3324));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3357 = -1;
	uint8_t x3358 = 25U;
	int8_t x3359 = INT8_MAX;
	uint64_t x3360 = 5LLU;
	int32_t t64 = 102447320;

	t64 = ((x3357<x3358)*(x3359>>x3360));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3381 = -1LL;
	volatile int16_t x3382 = INT16_MAX;
	uint32_t x3383 = 127U;
	int8_t x3384 = 0;

	t65 = ((x3381<x3382)*(x3383>>x3384));

	if (t65 != 127U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3425 = UINT64_MAX;
	static volatile int16_t x3426 = 33;
	uint8_t x3427 = 61U;
	uint32_t x3428 = 16U;

	t66 = ((x3425<x3426)*(x3427>>x3428));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3433 = 3;
	int32_t x3434 = -7;
	int8_t x3436 = 0;
	volatile int32_t t67 = 61;

	t67 = ((x3433<x3434)*(x3435>>x3436));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3593 = INT16_MIN;
	uint8_t x3594 = 7U;
	uint8_t x3596 = 59U;
	volatile uint64_t t68 = 1294820866627LLU;

	t68 = ((x3593<x3594)*(x3595>>x3596));

	if (t68 != 31LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3629 = UINT8_MAX;
	static int16_t x3630 = INT16_MIN;
	static uint64_t x3631 = 131760286648LLU;
	uint16_t x3632 = 11U;
	uint64_t t69 = 121062742999LLU;

	t69 = ((x3629<x3630)*(x3631>>x3632));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3657 = 9984U;
	int8_t x3658 = INT8_MIN;
	volatile int8_t x3659 = INT8_MAX;
	volatile uint32_t x3660 = 2U;
	int32_t t70 = -198483135;

	t70 = ((x3657<x3658)*(x3659>>x3660));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3685 = INT8_MIN;
	uint64_t x3686 = 3901688193545LLU;
	volatile uint64_t x3687 = 17497LLU;
	int8_t x3688 = 21;
	static volatile uint64_t t71 = 7LLU;

	t71 = ((x3685<x3686)*(x3687>>x3688));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3689 = 1009U;
	static uint8_t x3690 = 7U;
	volatile int32_t x3691 = INT32_MAX;
	static int64_t x3692 = 2LL;
	int32_t t72 = 7934;

	t72 = ((x3689<x3690)*(x3691>>x3692));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3748 = 1;
	static int32_t t73 = -6026353;

	t73 = ((x3745<x3746)*(x3747>>x3748));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3758 = UINT8_MAX;
	uint16_t x3759 = 0U;
	uint32_t x3760 = 1U;
	static int32_t t74 = -168;

	t74 = ((x3757<x3758)*(x3759>>x3760));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3789 = 47;
	volatile uint8_t x3791 = UINT8_MAX;
	uint64_t x3792 = 6LLU;
	int32_t t75 = -4556203;

	t75 = ((x3789<x3790)*(x3791>>x3792));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3793 = 854714665015LL;
	volatile int16_t x3794 = INT16_MIN;
	int32_t x3795 = INT32_MAX;
	uint8_t x3796 = 0U;
	int32_t t76 = 978716810;

	t76 = ((x3793<x3794)*(x3795>>x3796));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3841 = 2663289703048378LLU;
	int32_t x3842 = -114853;
	static int8_t x3843 = INT8_MAX;
	uint8_t x3844 = 5U;
	volatile int32_t t77 = 273;

	t77 = ((x3841<x3842)*(x3843>>x3844));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3881 = INT8_MIN;
	uint32_t x3882 = 8232510U;
	volatile int64_t x3884 = 12LL;

	t78 = ((x3881<x3882)*(x3883>>x3884));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3917 = INT8_MIN;
	uint64_t x3918 = UINT64_MAX;
	uint64_t x3919 = 38884018LLU;
	volatile int8_t x3920 = 0;
	volatile uint64_t t79 = 352636310088045413LLU;

	t79 = ((x3917<x3918)*(x3919>>x3920));

	if (t79 != 38884018LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3937 = 1;
	int64_t x3938 = 6235082LL;
	uint32_t x3939 = UINT32_MAX;
	uint8_t x3940 = 6U;
	uint32_t t80 = 144131U;

	t80 = ((x3937<x3938)*(x3939>>x3940));

	if (t80 != 67108863U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3957 = -10;
	int64_t x3958 = 3LL;
	static int8_t x3959 = INT8_MAX;
	int16_t x3960 = 1;
	int32_t t81 = -1;

	t81 = ((x3957<x3958)*(x3959>>x3960));

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4037 = 16;
	uint64_t x4038 = UINT64_MAX;
	int64_t x4039 = 94586644169LL;
	int64_t t82 = -8758879066LL;

	t82 = ((x4037<x4038)*(x4039>>x4040));

	if (t82 != 47293322084LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4045 = INT32_MIN;
	volatile int8_t x4046 = 1;
	int32_t x4047 = 78432;
	static uint16_t x4048 = 1U;
	int32_t t83 = -618752;

	t83 = ((x4045<x4046)*(x4047>>x4048));

	if (t83 != 39216) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4101 = UINT16_MAX;
	int32_t x4102 = -1;
	static int32_t t84 = -97;

	t84 = ((x4101<x4102)*(x4103>>x4104));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4114 = INT64_MIN;
	static int16_t x4115 = 3;
	static uint8_t x4116 = 14U;

	t85 = ((x4113<x4114)*(x4115>>x4116));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x4121 = INT8_MIN;
	static int8_t x4124 = 3;
	int32_t t86 = 2742303;

	t86 = ((x4121<x4122)*(x4123>>x4124));

	if (t86 != 15) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4133 = -7654855127175233LL;
	volatile uint64_t x4134 = 1413953828646LLU;
	uint64_t x4135 = UINT64_MAX;
	volatile uint64_t t87 = 63268438670LLU;

	t87 = ((x4133<x4134)*(x4135>>x4136));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4191 = UINT8_MAX;
	volatile int8_t x4192 = 28;
	volatile int32_t t88 = -1233;

	t88 = ((x4189<x4190)*(x4191>>x4192));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4233 = INT16_MAX;
	int64_t x4235 = 258270132039354549LL;
	int8_t x4236 = 23;
	int64_t t89 = 462955110749413058LL;

	t89 = ((x4233<x4234)*(x4235>>x4236));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4257 = -1;
	volatile int8_t x4258 = INT8_MIN;
	int32_t x4259 = 1;
	uint8_t x4260 = 3U;
	int32_t t90 = -41;

	t90 = ((x4257<x4258)*(x4259>>x4260));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4282 = INT8_MIN;
	uint64_t x4283 = 64368922197LLU;
	static uint16_t x4284 = 35U;
	volatile uint64_t t91 = 177353914463196343LLU;

	t91 = ((x4281<x4282)*(x4283>>x4284));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4286 = 1378189;
	static uint16_t x4287 = 4U;
	uint64_t x4288 = 3LLU;

	t92 = ((x4285<x4286)*(x4287>>x4288));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4329 = -1;
	uint32_t x4330 = 159337U;
	volatile uint64_t x4331 = 681835LLU;
	static uint64_t t93 = 782336082185350LLU;

	t93 = ((x4329<x4330)*(x4331>>x4332));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4365 = UINT32_MAX;
	static uint8_t x4368 = 13U;
	static volatile int32_t t94 = 226;

	t94 = ((x4365<x4366)*(x4367>>x4368));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4417 = 0;
	int64_t x4418 = -213936684463987287LL;
	int32_t x4419 = INT32_MAX;
	static uint16_t x4420 = 18U;
	static int32_t t95 = -8;

	t95 = ((x4417<x4418)*(x4419>>x4420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4429 = INT16_MIN;
	static int32_t t96 = -11203638;

	t96 = ((x4429<x4430)*(x4431>>x4432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x4497 = 13U;
	volatile int64_t x4498 = -796050035LL;
	static uint16_t x4499 = 8U;
	uint8_t x4500 = 9U;
	static int32_t t97 = 0;

	t97 = ((x4497<x4498)*(x4499>>x4500));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4541 = INT64_MAX;
	static int16_t x4542 = -1;
	int16_t x4543 = 3912;
	int16_t x4544 = 24;

	t98 = ((x4541<x4542)*(x4543>>x4544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4610 = -1;
	uint8_t x4612 = 0U;
	static volatile int32_t t99 = -1;

	t99 = ((x4609<x4610)*(x4611>>x4612));

	if (t99 != 0) { NG(); } else { ; }
	
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


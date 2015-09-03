#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x209 = 28;
uint32_t x212 = 18762U;
int16_t x241 = 54;
uint32_t x297 = 6U;
int8_t x299 = INT8_MIN;
static int32_t t5 = 58896066;
int64_t x659 = INT64_MAX;
uint32_t x660 = UINT32_MAX;
uint16_t x761 = UINT16_MAX;
int8_t x763 = INT8_MAX;
int32_t x796 = -2350625;
int8_t x815 = INT8_MAX;
int16_t x833 = 66;
uint8_t x982 = 11U;
int32_t t15 = 871;
int16_t x1099 = INT16_MIN;
int8_t x1131 = -2;
volatile int32_t t19 = -445;
volatile int8_t x1266 = 1;
volatile int8_t x1325 = INT8_MAX;
int8_t x1326 = 0;
int16_t x1346 = 2;
volatile int64_t x1348 = 14029LL;
int64_t x1377 = 7908600161566253LL;
uint32_t x1380 = UINT32_MAX;
uint64_t x1421 = UINT64_MAX;
int8_t x1424 = 1;
static int32_t x1491 = INT32_MIN;
static volatile uint8_t x1505 = UINT8_MAX;
static volatile uint32_t x1556 = 1685859379U;
static volatile int32_t t32 = 46635476;
static uint64_t x1657 = 2541471762797LLU;
int16_t x1660 = 6;
static int64_t x1886 = 21LL;
volatile int8_t x2040 = -1;
int32_t x2123 = INT32_MIN;
uint8_t x2148 = 5U;
uint8_t x2165 = 2U;
int32_t t40 = -75969871;
uint64_t x2385 = UINT64_MAX;
int16_t x2388 = -1;
int32_t x2564 = -180933576;
int8_t x2695 = INT8_MAX;
int32_t t46 = -536081315;
static volatile uint32_t x2701 = UINT32_MAX;
int64_t x2704 = -243LL;
int32_t t48 = 3000709;
volatile int16_t x2835 = INT16_MIN;
volatile int64_t x2878 = 22LL;
int32_t t51 = -3748;
volatile uint8_t x2910 = 3U;
int32_t x2911 = INT32_MIN;
int8_t x2925 = 0;
uint8_t x2926 = 1U;
int32_t t54 = -2;
uint8_t x3066 = 2U;
volatile int64_t x3171 = INT64_MIN;
static uint64_t x3189 = UINT64_MAX;
volatile uint16_t x3276 = 2U;
uint8_t x3585 = UINT8_MAX;
uint8_t x3586 = 1U;
volatile int32_t t64 = -4391;
volatile uint64_t x3693 = 2389081138096510376LLU;
static int64_t x3900 = -113963355190857LL;
volatile int32_t t69 = -16;
uint32_t x3997 = 43470363U;
int8_t x3998 = 0;
int64_t x4004 = INT64_MIN;
volatile int32_t t71 = -1;
uint32_t x4037 = UINT32_MAX;
uint16_t x4062 = 2U;
volatile int32_t t74 = 14;
volatile int32_t x4112 = INT32_MAX;
uint8_t x4130 = 3U;
int32_t t77 = 42121303;
int16_t x4366 = 0;
uint32_t x4487 = UINT32_MAX;
int16_t x4488 = 1298;
volatile int32_t t81 = -1165382;
int8_t x4514 = 5;
static int32_t x4516 = INT32_MIN;
int8_t x4724 = INT8_MIN;
volatile int32_t t84 = -495;
volatile uint64_t x4861 = 1LLU;
int32_t t85 = -87;
int32_t t86 = -197;
static int8_t x4908 = -1;
uint8_t x4918 = 9U;
static int64_t x4949 = 134LL;
int32_t x4962 = 0;
uint32_t x4963 = UINT32_MAX;
uint64_t x5225 = UINT64_MAX;
int8_t x5249 = 24;
static int16_t x5252 = -7;
uint16_t x5291 = UINT16_MAX;
static volatile int32_t t95 = -423;
int64_t x5360 = -13787628350LL;
uint16_t x5473 = 700U;
uint32_t x5696 = 655964815U;


void f0(void) {
	uint32_t x9 = 14327043U;
	static int8_t x10 = 0;
	uint8_t x11 = 1U;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t0 = -13;

	t0 = (((x9<<x10)%x11)<x12);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x205 = INT16_MAX;
	static int32_t x206 = 7;
	volatile int8_t x207 = INT8_MIN;
	uint32_t x208 = 125520838U;
	volatile int32_t t1 = -41;

	t1 = (((x205<<x206)%x207)<x208);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	volatile int32_t t2 = -3580;

	t2 = (((x209<<x210)%x211)<x212);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x242 = 14U;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = -198889228393LL;
	static int32_t t3 = -2404278;

	t3 = (((x241<<x242)%x243)<x244);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x298 = 0;
	uint8_t x300 = 44U;
	volatile int32_t t4 = 41867;

	t4 = (((x297<<x298)%x299)<x300);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x509 = INT16_MAX;
	int32_t x510 = 9;
	int32_t x511 = INT32_MIN;
	int16_t x512 = 44;

	t5 = (((x509<<x510)%x511)<x512);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x657 = 116417;
	uint8_t x658 = 10U;
	volatile int32_t t6 = 23;

	t6 = (((x657<<x658)%x659)<x660);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x762 = 14;
	int64_t x764 = -1LL;
	volatile int32_t t7 = -290573;

	t7 = (((x761<<x762)%x763)<x764);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x793 = INT16_MAX;
	static uint8_t x794 = 0U;
	uint32_t x795 = UINT32_MAX;
	int32_t t8 = 52769658;

	t8 = (((x793<<x794)%x795)<x796);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x813 = 737;
	uint8_t x814 = 1U;
	int32_t x816 = 14;
	static volatile int32_t t9 = 1088;

	t9 = (((x813<<x814)%x815)<x816);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x834 = 3U;
	int16_t x835 = INT16_MIN;
	static uint8_t x836 = 98U;
	int32_t t10 = -370670;

	t10 = (((x833<<x834)%x835)<x836);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x901 = 247944565572LLU;
	uint16_t x902 = 0U;
	int32_t x903 = 3;
	volatile uint64_t x904 = 59871891617232247LLU;
	int32_t t11 = 637;

	t11 = (((x901<<x902)%x903)<x904);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x913 = INT8_MAX;
	uint8_t x914 = 1U;
	int16_t x915 = INT16_MIN;
	int8_t x916 = INT8_MAX;
	int32_t t12 = 0;

	t12 = (((x913<<x914)%x915)<x916);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x981 = UINT32_MAX;
	volatile int16_t x983 = INT16_MIN;
	int32_t x984 = -1;
	volatile int32_t t13 = -6839762;

	t13 = (((x981<<x982)%x983)<x984);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x989 = UINT64_MAX;
	uint8_t x990 = 9U;
	int8_t x991 = INT8_MIN;
	int8_t x992 = 1;
	volatile int32_t t14 = -2768079;

	t14 = (((x989<<x990)%x991)<x992);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1033 = UINT32_MAX;
	int16_t x1034 = 1;
	volatile uint32_t x1035 = 10945147U;
	volatile uint32_t x1036 = 1724U;

	t15 = (((x1033<<x1034)%x1035)<x1036);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1085 = 3LLU;
	static uint8_t x1086 = 3U;
	int64_t x1087 = INT64_MIN;
	uint64_t x1088 = 344166893LLU;
	int32_t t16 = 3701429;

	t16 = (((x1085<<x1086)%x1087)<x1088);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1097 = 19U;
	int8_t x1098 = 0;
	int8_t x1100 = INT8_MIN;
	volatile int32_t t17 = -1945;

	t17 = (((x1097<<x1098)%x1099)<x1100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1109 = UINT16_MAX;
	uint8_t x1110 = 0U;
	int16_t x1111 = INT16_MAX;
	static int8_t x1112 = INT8_MIN;
	volatile int32_t t18 = 157323;

	t18 = (((x1109<<x1110)%x1111)<x1112);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1129 = 0U;
	int8_t x1130 = 0;
	int32_t x1132 = INT32_MAX;

	t19 = (((x1129<<x1130)%x1131)<x1132);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1265 = UINT32_MAX;
	uint32_t x1267 = 98897853U;
	static volatile int32_t x1268 = -1;
	volatile int32_t t20 = 301;

	t20 = (((x1265<<x1266)%x1267)<x1268);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1327 = 28387LLU;
	int8_t x1328 = INT8_MIN;
	volatile int32_t t21 = 0;

	t21 = (((x1325<<x1326)%x1327)<x1328);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1345 = 623241514LL;
	uint64_t x1347 = 35289993804013478LLU;
	static volatile int32_t t22 = -6053444;

	t22 = (((x1345<<x1346)%x1347)<x1348);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1357 = 931245141359LLU;
	int8_t x1358 = 18;
	static int8_t x1359 = -1;
	uint16_t x1360 = 6031U;
	static int32_t t23 = 81130604;

	t23 = (((x1357<<x1358)%x1359)<x1360);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1378 = 1U;
	static uint8_t x1379 = UINT8_MAX;
	static volatile int32_t t24 = 1;

	t24 = (((x1377<<x1378)%x1379)<x1380);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1397 = UINT32_MAX;
	int8_t x1398 = 0;
	static int32_t x1399 = -81515842;
	int64_t x1400 = INT64_MIN;
	int32_t t25 = 1003301;

	t25 = (((x1397<<x1398)%x1399)<x1400);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1422 = 3;
	int32_t x1423 = -1;
	int32_t t26 = 157;

	t26 = (((x1421<<x1422)%x1423)<x1424);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1489 = 62;
	uint8_t x1490 = 1U;
	uint32_t x1492 = 6U;
	volatile int32_t t27 = -646;

	t27 = (((x1489<<x1490)%x1491)<x1492);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1506 = 2U;
	int8_t x1507 = 7;
	static int64_t x1508 = 0LL;
	int32_t t28 = 1;

	t28 = (((x1505<<x1506)%x1507)<x1508);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1529 = 38LL;
	static uint8_t x1530 = 1U;
	int32_t x1531 = -1;
	uint8_t x1532 = 12U;
	volatile int32_t t29 = 18;

	t29 = (((x1529<<x1530)%x1531)<x1532);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1553 = 0U;
	static uint16_t x1554 = 7U;
	static uint64_t x1555 = 95575971994924LLU;
	int32_t t30 = 1015403909;

	t30 = (((x1553<<x1554)%x1555)<x1556);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1585 = 18U;
	uint8_t x1586 = 3U;
	volatile int8_t x1587 = INT8_MIN;
	uint8_t x1588 = 57U;
	static volatile int32_t t31 = -472;

	t31 = (((x1585<<x1586)%x1587)<x1588);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1629 = 389U;
	uint16_t x1630 = 0U;
	int8_t x1631 = INT8_MIN;
	volatile int16_t x1632 = -3;

	t32 = (((x1629<<x1630)%x1631)<x1632);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1658 = 18U;
	uint32_t x1659 = 7013U;
	volatile int32_t t33 = 203;

	t33 = (((x1657<<x1658)%x1659)<x1660);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1713 = UINT32_MAX;
	int16_t x1714 = 0;
	uint16_t x1715 = 1U;
	int32_t x1716 = INT32_MIN;
	int32_t t34 = 48401683;

	t34 = (((x1713<<x1714)%x1715)<x1716);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x1885 = UINT32_MAX;
	int64_t x1887 = INT64_MIN;
	volatile int16_t x1888 = INT16_MIN;
	static volatile int32_t t35 = 307297335;

	t35 = (((x1885<<x1886)%x1887)<x1888);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1921 = INT8_MAX;
	uint32_t x1922 = 11U;
	int64_t x1923 = 1335411244729840LL;
	volatile uint64_t x1924 = UINT64_MAX;
	volatile int32_t t36 = 5;

	t36 = (((x1921<<x1922)%x1923)<x1924);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2037 = 1;
	static int8_t x2038 = 1;
	uint16_t x2039 = 7614U;
	volatile int32_t t37 = -655;

	t37 = (((x2037<<x2038)%x2039)<x2040);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2121 = UINT8_MAX;
	volatile int8_t x2122 = 22;
	uint8_t x2124 = UINT8_MAX;
	volatile int32_t t38 = -246574;

	t38 = (((x2121<<x2122)%x2123)<x2124);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2145 = UINT32_MAX;
	uint8_t x2146 = 7U;
	int64_t x2147 = 2961523542636571616LL;
	int32_t t39 = 1;

	t39 = (((x2145<<x2146)%x2147)<x2148);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2166 = 1U;
	int64_t x2167 = 513945667488LL;
	uint8_t x2168 = 0U;

	t40 = (((x2165<<x2166)%x2167)<x2168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2197 = 4264U;
	volatile uint8_t x2198 = 3U;
	int64_t x2199 = -421037396428218428LL;
	volatile int8_t x2200 = -4;
	int32_t t41 = -753407;

	t41 = (((x2197<<x2198)%x2199)<x2200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2386 = 1U;
	static uint16_t x2387 = 164U;
	volatile int32_t t42 = 14;

	t42 = (((x2385<<x2386)%x2387)<x2388);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2437 = INT16_MAX;
	uint16_t x2438 = 2U;
	uint32_t x2439 = 652282U;
	int16_t x2440 = -10;
	static volatile int32_t t43 = -2290518;

	t43 = (((x2437<<x2438)%x2439)<x2440);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2493 = 183LL;
	uint64_t x2494 = 8LLU;
	int32_t x2495 = -1;
	int32_t x2496 = 14;
	volatile int32_t t44 = -29881752;

	t44 = (((x2493<<x2494)%x2495)<x2496);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2561 = 14024LLU;
	uint8_t x2562 = 8U;
	volatile int32_t x2563 = -103353744;
	volatile int32_t t45 = 2511;

	t45 = (((x2561<<x2562)%x2563)<x2564);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2693 = UINT16_MAX;
	static int16_t x2694 = 0;
	uint32_t x2696 = UINT32_MAX;

	t46 = (((x2693<<x2694)%x2695)<x2696);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2702 = 13U;
	uint8_t x2703 = UINT8_MAX;
	static int32_t t47 = -15;

	t47 = (((x2701<<x2702)%x2703)<x2704);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2717 = UINT16_MAX;
	uint8_t x2718 = 10U;
	int8_t x2719 = INT8_MIN;
	uint16_t x2720 = UINT16_MAX;

	t48 = (((x2717<<x2718)%x2719)<x2720);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2821 = 334U;
	uint8_t x2822 = 0U;
	int16_t x2823 = INT16_MIN;
	uint64_t x2824 = UINT64_MAX;
	volatile int32_t t49 = 1;

	t49 = (((x2821<<x2822)%x2823)<x2824);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2833 = 7495U;
	int16_t x2834 = 1;
	int8_t x2836 = -3;
	static int32_t t50 = -20;

	t50 = (((x2833<<x2834)%x2835)<x2836);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x2877 = 80063939U;
	static int64_t x2879 = -772LL;
	int8_t x2880 = 61;

	t51 = (((x2877<<x2878)%x2879)<x2880);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2909 = 177LLU;
	uint64_t x2912 = 60981516LLU;
	int32_t t52 = 1;

	t52 = (((x2909<<x2910)%x2911)<x2912);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2927 = 1U;
	int8_t x2928 = INT8_MAX;
	int32_t t53 = -72181071;

	t53 = (((x2925<<x2926)%x2927)<x2928);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2949 = 1U;
	uint8_t x2950 = 6U;
	int8_t x2951 = INT8_MIN;
	int8_t x2952 = -1;

	t54 = (((x2949<<x2950)%x2951)<x2952);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3065 = 956617198843644LLU;
	int8_t x3067 = INT8_MIN;
	static uint32_t x3068 = 4387U;
	volatile int32_t t55 = -178;

	t55 = (((x3065<<x3066)%x3067)<x3068);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3169 = UINT32_MAX;
	uint8_t x3170 = 0U;
	volatile int16_t x3172 = INT16_MIN;
	volatile int32_t t56 = 2;

	t56 = (((x3169<<x3170)%x3171)<x3172);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3173 = UINT16_MAX;
	uint8_t x3174 = 1U;
	uint8_t x3175 = UINT8_MAX;
	static volatile int16_t x3176 = -1;
	volatile int32_t t57 = 1163815;

	t57 = (((x3173<<x3174)%x3175)<x3176);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3190 = 1U;
	static uint32_t x3191 = UINT32_MAX;
	uint16_t x3192 = 1U;
	static int32_t t58 = 7804;

	t58 = (((x3189<<x3190)%x3191)<x3192);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3217 = 3U;
	int8_t x3218 = 0;
	uint8_t x3219 = 3U;
	int16_t x3220 = INT16_MIN;
	volatile int32_t t59 = 1;

	t59 = (((x3217<<x3218)%x3219)<x3220);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3273 = 29830;
	volatile int16_t x3274 = 1;
	volatile uint16_t x3275 = 6U;
	int32_t t60 = -118871925;

	t60 = (((x3273<<x3274)%x3275)<x3276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3537 = UINT16_MAX;
	int8_t x3538 = 6;
	uint64_t x3539 = 393LLU;
	int16_t x3540 = INT16_MAX;
	int32_t t61 = 374513194;

	t61 = (((x3537<<x3538)%x3539)<x3540);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3587 = -1;
	volatile int8_t x3588 = INT8_MAX;
	static int32_t t62 = 89717;

	t62 = (((x3585<<x3586)%x3587)<x3588);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3605 = 21;
	uint8_t x3606 = 3U;
	int32_t x3607 = -1;
	int16_t x3608 = -1;
	static volatile int32_t t63 = 5;

	t63 = (((x3605<<x3606)%x3607)<x3608);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3625 = UINT16_MAX;
	int8_t x3626 = 1;
	volatile uint8_t x3627 = UINT8_MAX;
	static uint32_t x3628 = 379465U;

	t64 = (((x3625<<x3626)%x3627)<x3628);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3694 = 7U;
	uint64_t x3695 = 387295667256LLU;
	volatile uint16_t x3696 = UINT16_MAX;
	volatile int32_t t65 = 733;

	t65 = (((x3693<<x3694)%x3695)<x3696);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x3697 = 26U;
	uint16_t x3698 = 3U;
	int16_t x3699 = 35;
	volatile int64_t x3700 = INT64_MIN;
	int32_t t66 = -225646;

	t66 = (((x3697<<x3698)%x3699)<x3700);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x3809 = 6U;
	volatile uint8_t x3810 = 22U;
	int64_t x3811 = -54512LL;
	int64_t x3812 = 4108967436499738LL;
	int32_t t67 = -3007;

	t67 = (((x3809<<x3810)%x3811)<x3812);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3897 = UINT16_MAX;
	static volatile int64_t x3898 = 0LL;
	int64_t x3899 = INT64_MAX;
	volatile int32_t t68 = -24;

	t68 = (((x3897<<x3898)%x3899)<x3900);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3965 = 526032836U;
	static int16_t x3966 = 0;
	int8_t x3967 = -1;
	int8_t x3968 = -1;

	t69 = (((x3965<<x3966)%x3967)<x3968);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3999 = -59;
	volatile uint64_t x4000 = UINT64_MAX;
	int32_t t70 = 16485806;

	t70 = (((x3997<<x3998)%x3999)<x4000);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4001 = 444U;
	uint8_t x4002 = 0U;
	volatile int32_t x4003 = INT32_MIN;

	t71 = (((x4001<<x4002)%x4003)<x4004);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4038 = 20U;
	uint32_t x4039 = 2524688U;
	static volatile int64_t x4040 = 1LL;
	static int32_t t72 = -3942;

	t72 = (((x4037<<x4038)%x4039)<x4040);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4061 = 33495036371576877LLU;
	static volatile uint32_t x4063 = UINT32_MAX;
	uint8_t x4064 = 7U;
	volatile int32_t t73 = -13175;

	t73 = (((x4061<<x4062)%x4063)<x4064);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x4065 = INT8_MAX;
	int16_t x4066 = 0;
	int64_t x4067 = 5324913602261LL;
	static volatile uint8_t x4068 = 5U;

	t74 = (((x4065<<x4066)%x4067)<x4068);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4109 = UINT64_MAX;
	volatile int8_t x4110 = 1;
	int64_t x4111 = INT64_MIN;
	static volatile int32_t t75 = -107496085;

	t75 = (((x4109<<x4110)%x4111)<x4112);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4121 = UINT32_MAX;
	volatile int8_t x4122 = 0;
	volatile int64_t x4123 = -1LL;
	int8_t x4124 = INT8_MAX;
	volatile int32_t t76 = -351360637;

	t76 = (((x4121<<x4122)%x4123)<x4124);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4129 = 96U;
	int32_t x4131 = INT32_MIN;
	int8_t x4132 = INT8_MIN;

	t77 = (((x4129<<x4130)%x4131)<x4132);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4225 = 24U;
	int16_t x4226 = 3;
	int16_t x4227 = INT16_MAX;
	int16_t x4228 = -1;
	static volatile int32_t t78 = 36147744;

	t78 = (((x4225<<x4226)%x4227)<x4228);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4249 = 861LLU;
	static uint8_t x4250 = 6U;
	int32_t x4251 = INT32_MIN;
	volatile uint64_t x4252 = 3355396367537427806LLU;
	int32_t t79 = -29043030;

	t79 = (((x4249<<x4250)%x4251)<x4252);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4365 = 16U;
	static uint32_t x4367 = 2855U;
	static int32_t x4368 = -1;
	static int32_t t80 = 1;

	t80 = (((x4365<<x4366)%x4367)<x4368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4485 = 7;
	int8_t x4486 = 14;

	t81 = (((x4485<<x4486)%x4487)<x4488);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4513 = 1738U;
	static volatile int8_t x4515 = -1;
	static volatile int32_t t82 = -26940;

	t82 = (((x4513<<x4514)%x4515)<x4516);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4625 = INT16_MAX;
	volatile uint16_t x4626 = 1U;
	static int16_t x4627 = INT16_MAX;
	int64_t x4628 = -1LL;
	volatile int32_t t83 = -59430;

	t83 = (((x4625<<x4626)%x4627)<x4628);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4721 = 1258866434982761867LLU;
	uint8_t x4722 = 2U;
	uint32_t x4723 = 10388U;

	t84 = (((x4721<<x4722)%x4723)<x4724);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x4862 = 26U;
	uint64_t x4863 = 69835801960463LLU;
	static uint16_t x4864 = 62U;

	t85 = (((x4861<<x4862)%x4863)<x4864);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4893 = 5;
	uint64_t x4894 = 4LLU;
	uint16_t x4895 = 1U;
	static volatile int8_t x4896 = INT8_MAX;

	t86 = (((x4893<<x4894)%x4895)<x4896);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4905 = 896;
	volatile uint8_t x4906 = 1U;
	int16_t x4907 = INT16_MIN;
	int32_t t87 = -113;

	t87 = (((x4905<<x4906)%x4907)<x4908);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4917 = INT8_MAX;
	volatile uint16_t x4919 = UINT16_MAX;
	static uint16_t x4920 = UINT16_MAX;
	int32_t t88 = -35836230;

	t88 = (((x4917<<x4918)%x4919)<x4920);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x4950 = 18U;
	static uint32_t x4951 = 115756U;
	int64_t x4952 = -4827LL;
	static volatile int32_t t89 = -1335876;

	t89 = (((x4949<<x4950)%x4951)<x4952);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4961 = 15U;
	int32_t x4964 = 2;
	volatile int32_t t90 = 541054400;

	t90 = (((x4961<<x4962)%x4963)<x4964);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4985 = 6U;
	volatile uint8_t x4986 = 17U;
	int64_t x4987 = INT64_MIN;
	static volatile int8_t x4988 = 2;
	static int32_t t91 = 90882;

	t91 = (((x4985<<x4986)%x4987)<x4988);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5226 = 0U;
	static volatile uint16_t x5227 = UINT16_MAX;
	uint16_t x5228 = UINT16_MAX;
	volatile int32_t t92 = -24;

	t92 = (((x5225<<x5226)%x5227)<x5228);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5250 = 25;
	static volatile int32_t x5251 = -255;
	volatile int32_t t93 = 395;

	t93 = (((x5249<<x5250)%x5251)<x5252);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x5289 = UINT8_MAX;
	static uint8_t x5290 = 3U;
	static uint8_t x5292 = 7U;
	volatile int32_t t94 = -6885171;

	t94 = (((x5289<<x5290)%x5291)<x5292);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5309 = 19LLU;
	uint8_t x5310 = 9U;
	int8_t x5311 = -1;
	static int64_t x5312 = 2537LL;

	t95 = (((x5309<<x5310)%x5311)<x5312);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5357 = UINT32_MAX;
	volatile int16_t x5358 = 5;
	static uint16_t x5359 = 179U;
	static volatile int32_t t96 = -1;

	t96 = (((x5357<<x5358)%x5359)<x5360);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5474 = 1;
	volatile uint8_t x5475 = 1U;
	uint8_t x5476 = UINT8_MAX;
	volatile int32_t t97 = -6718831;

	t97 = (((x5473<<x5474)%x5475)<x5476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5585 = 8158U;
	int32_t x5586 = 0;
	int16_t x5587 = 15854;
	int8_t x5588 = INT8_MAX;
	int32_t t98 = -62797;

	t98 = (((x5585<<x5586)%x5587)<x5588);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5693 = 10U;
	static volatile uint32_t x5694 = 9U;
	static uint16_t x5695 = 153U;
	int32_t t99 = 158580;

	t99 = (((x5693<<x5694)%x5695)<x5696);

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


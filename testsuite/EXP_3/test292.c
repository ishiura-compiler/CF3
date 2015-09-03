#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x189 = -1;
int8_t x190 = INT8_MIN;
volatile int32_t t2 = -306084746;
volatile int32_t t6 = -17732;
int8_t x577 = INT8_MAX;
static volatile int16_t x578 = INT16_MIN;
int64_t x625 = -3096074618LL;
volatile int32_t t8 = 1;
int8_t x643 = 26;
int64_t x683 = -1LL;
volatile int32_t x684 = -1;
int32_t t14 = -472659;
int16_t x811 = -1;
volatile int32_t t15 = -1;
uint32_t x884 = UINT32_MAX;
volatile uint8_t x1003 = 14U;
int8_t x1043 = 18;
uint8_t x1124 = UINT8_MAX;
volatile int32_t t24 = 63604;
volatile uint16_t x1199 = 5U;
volatile uint8_t x1352 = 0U;
static uint16_t x1361 = 20U;
int32_t t28 = -2590305;
uint8_t x1416 = UINT8_MAX;
static int16_t x1423 = INT16_MAX;
volatile int32_t t30 = 1016926100;
int16_t x1467 = INT16_MIN;
int16_t x1468 = INT16_MIN;
static int32_t t32 = -24;
uint8_t x1552 = 5U;
volatile int32_t t37 = -3;
int8_t x1823 = INT8_MAX;
volatile int8_t x1887 = -1;
int64_t x1888 = -1LL;
volatile int64_t x1896 = -1LL;
int32_t t43 = -28;
int8_t x2065 = INT8_MAX;
volatile int32_t t46 = -30;
int16_t x2211 = INT16_MIN;
volatile int32_t x2236 = -1;
volatile int32_t t48 = 110197;
static int32_t x2266 = INT32_MIN;
static int8_t x2267 = -1;
static int16_t x2385 = INT16_MAX;
int32_t x2386 = 0;
volatile uint8_t x2391 = 2U;
int32_t t52 = 28;
static int32_t t53 = -107;
uint16_t x2421 = 2371U;
uint16_t x2423 = 45U;
uint8_t x2424 = 29U;
static int32_t t55 = -1;
int32_t t57 = 990861558;
volatile int32_t t58 = -8;
int32_t x2590 = INT32_MAX;
int16_t x2902 = -1;
uint8_t x2970 = UINT8_MAX;
volatile int32_t t64 = 32;
int32_t x3052 = -1;
int16_t x3109 = -1;
volatile int16_t x3112 = -1;
int16_t x3139 = 1;
uint32_t x3165 = 309U;
static int32_t t71 = -1;
volatile int16_t x3345 = 1;
volatile int64_t x3358 = INT64_MAX;
int8_t x3360 = 1;
int8_t x3368 = INT8_MAX;
volatile uint32_t x3370 = UINT32_MAX;
uint64_t x3371 = UINT64_MAX;
int8_t x3437 = INT8_MIN;
volatile int32_t t78 = 99213333;
int32_t x3583 = -1;
static int32_t x3584 = -1;
uint16_t x3622 = UINT16_MAX;
static volatile uint8_t x3629 = 12U;
static uint16_t x3703 = 1U;
int8_t x3717 = -1;
static int64_t x3720 = -1LL;
uint64_t x3776 = UINT64_MAX;
static uint16_t x3810 = 0U;
int32_t t90 = 1013012673;
volatile int32_t t91 = 7581;
int32_t x3877 = INT32_MAX;
static int32_t t93 = -390593664;
uint32_t x4089 = 362046U;
volatile int16_t x4092 = -1;
uint32_t x4125 = 1U;
volatile int32_t t97 = 1609;
int8_t x4180 = INT8_MIN;


void f0(void) {
	uint32_t x89 = 82725871U;
	uint64_t x90 = 56475086LLU;
	static int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t0 = 97;

	t0 = ((x89<=x90)<<(x91-x92));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x129 = 12756;
	static int16_t x130 = INT16_MAX;
	uint32_t x131 = 1U;
	uint64_t x132 = UINT64_MAX;
	int32_t t1 = -28229232;

	t1 = ((x129<=x130)<<(x131-x132));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x191 = INT32_MIN;
	static int32_t x192 = INT32_MIN;

	t2 = ((x189<=x190)<<(x191-x192));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = 21;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;
	int32_t t3 = -1128126;

	t3 = ((x313<=x314)<<(x315-x316));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x333 = INT8_MAX;
	uint8_t x334 = UINT8_MAX;
	static int8_t x335 = INT8_MAX;
	volatile uint16_t x336 = 106U;
	volatile int32_t t4 = 3464168;

	t4 = ((x333<=x334)<<(x335-x336));

	if (t4 != 2097152) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x341 = -36;
	static volatile int8_t x342 = -20;
	static volatile int16_t x343 = INT16_MAX;
	static int16_t x344 = INT16_MAX;
	int32_t t5 = -2190;

	t5 = ((x341<=x342)<<(x343-x344));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x497 = INT64_MAX;
	int64_t x498 = -1LL;
	uint64_t x499 = UINT64_MAX;
	uint64_t x500 = UINT64_MAX;

	t6 = ((x497<=x498)<<(x499-x500));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x579 = -1;
	static uint64_t x580 = UINT64_MAX;
	int32_t t7 = 1;

	t7 = ((x577<=x578)<<(x579-x580));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x626 = -1;
	static uint8_t x627 = 1U;
	int32_t x628 = -1;

	t8 = ((x625<=x626)<<(x627-x628));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x641 = UINT16_MAX;
	uint16_t x642 = 1906U;
	static uint8_t x644 = 13U;
	volatile int32_t t9 = -3721;

	t9 = ((x641<=x642)<<(x643-x644));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x673 = 2U;
	int32_t x674 = 0;
	static int8_t x675 = -1;
	int8_t x676 = -3;
	volatile int32_t t10 = -4879;

	t10 = ((x673<=x674)<<(x675-x676));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x681 = -1;
	int8_t x682 = INT8_MIN;
	volatile int32_t t11 = 7611926;

	t11 = ((x681<=x682)<<(x683-x684));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x697 = INT64_MIN;
	static volatile int16_t x698 = INT16_MIN;
	static int16_t x699 = 3;
	static int8_t x700 = -1;
	volatile int32_t t12 = -12525;

	t12 = ((x697<=x698)<<(x699-x700));

	if (t12 != 16) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x729 = 20U;
	int64_t x730 = INT64_MAX;
	int16_t x731 = -1;
	static volatile int64_t x732 = -1LL;
	volatile int32_t t13 = 28619139;

	t13 = ((x729<=x730)<<(x731-x732));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x745 = 88U;
	static int32_t x746 = INT32_MIN;
	int8_t x747 = INT8_MIN;
	static int8_t x748 = INT8_MIN;

	t14 = ((x745<=x746)<<(x747-x748));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x809 = UINT8_MAX;
	int32_t x810 = INT32_MIN;
	static uint64_t x812 = UINT64_MAX;

	t15 = ((x809<=x810)<<(x811-x812));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x849 = INT64_MIN;
	int16_t x850 = INT16_MIN;
	int32_t x851 = 1;
	volatile int8_t x852 = -1;
	volatile int32_t t16 = -142;

	t16 = ((x849<=x850)<<(x851-x852));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x881 = -1003LL;
	uint64_t x882 = 17009022LLU;
	static int8_t x883 = 1;
	static volatile int32_t t17 = -1;

	t17 = ((x881<=x882)<<(x883-x884));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x937 = -1;
	int64_t x938 = INT64_MIN;
	uint8_t x939 = 3U;
	uint32_t x940 = UINT32_MAX;
	volatile int32_t t18 = -19;

	t18 = ((x937<=x938)<<(x939-x940));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x997 = INT64_MIN;
	volatile int32_t x998 = INT32_MIN;
	uint32_t x999 = UINT32_MAX;
	static volatile int16_t x1000 = -1;
	int32_t t19 = 13092799;

	t19 = ((x997<=x998)<<(x999-x1000));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1001 = UINT32_MAX;
	volatile int8_t x1002 = -9;
	uint32_t x1004 = UINT32_MAX;
	static volatile int32_t t20 = -1192;

	t20 = ((x1001<=x1002)<<(x1003-x1004));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1041 = 107;
	volatile uint64_t x1042 = UINT64_MAX;
	int64_t x1044 = -1LL;
	volatile int32_t t21 = 1;

	t21 = ((x1041<=x1042)<<(x1043-x1044));

	if (t21 != 524288) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1065 = INT64_MIN;
	static volatile int32_t x1066 = INT32_MIN;
	int32_t x1067 = -1;
	static int64_t x1068 = -1LL;
	int32_t t22 = -330;

	t22 = ((x1065<=x1066)<<(x1067-x1068));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1113 = UINT8_MAX;
	int64_t x1114 = -329581LL;
	static int32_t x1115 = 3;
	int8_t x1116 = -1;
	static int32_t t23 = 8291;

	t23 = ((x1113<=x1114)<<(x1115-x1116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1121 = -1;
	volatile int32_t x1122 = -30;
	static volatile uint8_t x1123 = UINT8_MAX;

	t24 = ((x1121<=x1122)<<(x1123-x1124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1153 = 552LLU;
	static int16_t x1154 = -1;
	volatile int8_t x1155 = 1;
	int8_t x1156 = 0;
	volatile int32_t t25 = -81892;

	t25 = ((x1153<=x1154)<<(x1155-x1156));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1197 = INT16_MIN;
	int32_t x1198 = -1;
	volatile int64_t x1200 = -1LL;
	static volatile int32_t t26 = 215;

	t26 = ((x1197<=x1198)<<(x1199-x1200));

	if (t26 != 64) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1349 = 32;
	int8_t x1350 = INT8_MAX;
	static int8_t x1351 = 0;
	volatile int32_t t27 = 1929;

	t27 = ((x1349<=x1350)<<(x1351-x1352));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x1362 = INT64_MIN;
	static uint64_t x1363 = UINT64_MAX;
	uint64_t x1364 = UINT64_MAX;

	t28 = ((x1361<=x1362)<<(x1363-x1364));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1413 = 1306210LLU;
	int8_t x1414 = 1;
	volatile uint8_t x1415 = UINT8_MAX;
	volatile int32_t t29 = -833934;

	t29 = ((x1413<=x1414)<<(x1415-x1416));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1421 = -2042188;
	volatile uint8_t x1422 = UINT8_MAX;
	int16_t x1424 = INT16_MAX;

	t30 = ((x1421<=x1422)<<(x1423-x1424));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1425 = INT32_MAX;
	int8_t x1426 = 1;
	int8_t x1427 = -1;
	int16_t x1428 = -1;
	volatile int32_t t31 = 340308731;

	t31 = ((x1425<=x1426)<<(x1427-x1428));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x1465 = INT32_MIN;
	volatile int8_t x1466 = INT8_MAX;

	t32 = ((x1465<=x1466)<<(x1467-x1468));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1497 = UINT8_MAX;
	int16_t x1498 = 10;
	uint64_t x1499 = UINT64_MAX;
	int32_t x1500 = -1;
	int32_t t33 = -1861;

	t33 = ((x1497<=x1498)<<(x1499-x1500));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1549 = 16U;
	static volatile int8_t x1550 = -1;
	uint8_t x1551 = 18U;
	volatile int32_t t34 = -1;

	t34 = ((x1549<=x1550)<<(x1551-x1552));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1581 = -1665;
	int64_t x1582 = INT64_MAX;
	int8_t x1583 = 34;
	uint8_t x1584 = 4U;
	volatile int32_t t35 = 196316;

	t35 = ((x1581<=x1582)<<(x1583-x1584));

	if (t35 != 1073741824) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1653 = 18563U;
	int16_t x1654 = INT16_MAX;
	uint32_t x1655 = UINT32_MAX;
	int16_t x1656 = -1;
	volatile int32_t t36 = 3;

	t36 = ((x1653<=x1654)<<(x1655-x1656));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1673 = INT16_MIN;
	uint64_t x1674 = 1031279554626LLU;
	uint32_t x1675 = UINT32_MAX;
	int32_t x1676 = -23;

	t37 = ((x1673<=x1674)<<(x1675-x1676));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1793 = 182U;
	static volatile uint64_t x1794 = 1627757783541156656LLU;
	int64_t x1795 = INT64_MAX;
	int64_t x1796 = INT64_MAX;
	int32_t t38 = 151;

	t38 = ((x1793<=x1794)<<(x1795-x1796));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1821 = INT64_MIN;
	int8_t x1822 = INT8_MAX;
	static int8_t x1824 = INT8_MAX;
	static volatile int32_t t39 = -209363;

	t39 = ((x1821<=x1822)<<(x1823-x1824));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1885 = 7612627926LLU;
	volatile int8_t x1886 = INT8_MAX;
	int32_t t40 = -522000377;

	t40 = ((x1885<=x1886)<<(x1887-x1888));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1889 = -14563;
	int64_t x1890 = INT64_MIN;
	uint8_t x1891 = 1U;
	int8_t x1892 = -1;
	static int32_t t41 = 1;

	t41 = ((x1889<=x1890)<<(x1891-x1892));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1893 = -478366050360LL;
	int16_t x1894 = 421;
	volatile int8_t x1895 = -1;
	int32_t t42 = -61651492;

	t42 = ((x1893<=x1894)<<(x1895-x1896));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1989 = -89;
	volatile uint64_t x1990 = UINT64_MAX;
	int32_t x1991 = -1;
	static uint64_t x1992 = UINT64_MAX;

	t43 = ((x1989<=x1990)<<(x1991-x1992));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1997 = INT64_MIN;
	int8_t x1998 = 2;
	volatile uint32_t x1999 = UINT32_MAX;
	int8_t x2000 = -1;
	int32_t t44 = -442287;

	t44 = ((x1997<=x1998)<<(x1999-x2000));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2029 = 1348108326U;
	uint8_t x2030 = UINT8_MAX;
	uint8_t x2031 = 31U;
	int8_t x2032 = 11;
	volatile int32_t t45 = -43;

	t45 = ((x2029<=x2030)<<(x2031-x2032));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2066 = 1935U;
	uint8_t x2067 = UINT8_MAX;
	volatile uint8_t x2068 = UINT8_MAX;

	t46 = ((x2065<=x2066)<<(x2067-x2068));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2209 = INT64_MAX;
	int8_t x2210 = -9;
	int16_t x2212 = INT16_MIN;
	int32_t t47 = -117;

	t47 = ((x2209<=x2210)<<(x2211-x2212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2233 = 2984LL;
	int8_t x2234 = INT8_MIN;
	uint32_t x2235 = UINT32_MAX;

	t48 = ((x2233<=x2234)<<(x2235-x2236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2265 = 25910LLU;
	int64_t x2268 = -1LL;
	static volatile int32_t t49 = 3768424;

	t49 = ((x2265<=x2266)<<(x2267-x2268));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2357 = 3811986;
	int64_t x2358 = -1LL;
	int32_t x2359 = -1;
	static int8_t x2360 = -1;
	volatile int32_t t50 = 1360;

	t50 = ((x2357<=x2358)<<(x2359-x2360));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2387 = UINT64_MAX;
	volatile int64_t x2388 = -1LL;
	volatile int32_t t51 = 17561;

	t51 = ((x2385<=x2386)<<(x2387-x2388));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2389 = 133U;
	int32_t x2390 = -15216512;
	uint8_t x2392 = 1U;

	t52 = ((x2389<=x2390)<<(x2391-x2392));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2413 = INT8_MAX;
	int32_t x2414 = 0;
	uint64_t x2415 = 2LLU;
	int64_t x2416 = -1LL;

	t53 = ((x2413<=x2414)<<(x2415-x2416));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2422 = -489798450LL;
	volatile int32_t t54 = -67279668;

	t54 = ((x2421<=x2422)<<(x2423-x2424));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2425 = -1;
	volatile int8_t x2426 = 29;
	static int8_t x2427 = INT8_MIN;
	static int8_t x2428 = INT8_MIN;

	t55 = ((x2425<=x2426)<<(x2427-x2428));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2433 = INT64_MAX;
	volatile int8_t x2434 = 0;
	int32_t x2435 = -1;
	int16_t x2436 = -1;
	volatile int32_t t56 = -68;

	t56 = ((x2433<=x2434)<<(x2435-x2436));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2473 = 1;
	static uint32_t x2474 = 479U;
	int64_t x2475 = INT64_MIN;
	int64_t x2476 = INT64_MIN;

	t57 = ((x2473<=x2474)<<(x2475-x2476));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2497 = 2902LL;
	static uint64_t x2498 = 2261006042851929LLU;
	uint16_t x2499 = UINT16_MAX;
	static uint16_t x2500 = UINT16_MAX;

	t58 = ((x2497<=x2498)<<(x2499-x2500));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2561 = 1031U;
	int32_t x2562 = -1;
	uint32_t x2563 = 2U;
	volatile int8_t x2564 = -1;
	int32_t t59 = 2759;

	t59 = ((x2561<=x2562)<<(x2563-x2564));

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2589 = INT8_MIN;
	int32_t x2591 = 5;
	static uint32_t x2592 = UINT32_MAX;
	int32_t t60 = -302656085;

	t60 = ((x2589<=x2590)<<(x2591-x2592));

	if (t60 != 64) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x2693 = -1;
	int64_t x2694 = INT64_MIN;
	volatile uint64_t x2695 = UINT64_MAX;
	volatile uint64_t x2696 = UINT64_MAX;
	static volatile int32_t t61 = 22620;

	t61 = ((x2693<=x2694)<<(x2695-x2696));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2901 = 45U;
	int8_t x2903 = -1;
	volatile int8_t x2904 = -3;
	volatile int32_t t62 = 77403;

	t62 = ((x2901<=x2902)<<(x2903-x2904));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2969 = -1;
	volatile uint8_t x2971 = 0U;
	volatile uint32_t x2972 = 0U;
	int32_t t63 = -194712;

	t63 = ((x2969<=x2970)<<(x2971-x2972));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2981 = 0;
	uint32_t x2982 = 13232U;
	int32_t x2983 = 1;
	uint16_t x2984 = 1U;

	t64 = ((x2981<=x2982)<<(x2983-x2984));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x3049 = 33U;
	int8_t x3050 = -2;
	uint8_t x3051 = 1U;
	int32_t t65 = -195899958;

	t65 = ((x3049<=x3050)<<(x3051-x3052));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3110 = 43U;
	volatile int8_t x3111 = 2;
	int32_t t66 = 219409;

	t66 = ((x3109<=x3110)<<(x3111-x3112));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3137 = 373U;
	int16_t x3138 = INT16_MAX;
	uint16_t x3140 = 1U;
	int32_t t67 = 21;

	t67 = ((x3137<=x3138)<<(x3139-x3140));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3166 = UINT8_MAX;
	volatile uint32_t x3167 = UINT32_MAX;
	uint32_t x3168 = UINT32_MAX;
	static volatile int32_t t68 = -1681;

	t68 = ((x3165<=x3166)<<(x3167-x3168));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3233 = INT16_MIN;
	volatile uint32_t x3234 = 33U;
	uint8_t x3235 = 5U;
	int8_t x3236 = -1;
	volatile int32_t t69 = 148;

	t69 = ((x3233<=x3234)<<(x3235-x3236));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x3305 = 62548LL;
	int8_t x3306 = -1;
	static uint64_t x3307 = UINT64_MAX;
	uint64_t x3308 = UINT64_MAX;
	int32_t t70 = 1;

	t70 = ((x3305<=x3306)<<(x3307-x3308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3317 = -1;
	int64_t x3318 = -275201415138407LL;
	int16_t x3319 = -1;
	static int8_t x3320 = -1;

	t71 = ((x3317<=x3318)<<(x3319-x3320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3346 = INT32_MIN;
	static uint8_t x3347 = 10U;
	volatile int64_t x3348 = -1LL;
	int32_t t72 = 1;

	t72 = ((x3345<=x3346)<<(x3347-x3348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3353 = UINT32_MAX;
	uint16_t x3354 = 1662U;
	uint32_t x3355 = UINT32_MAX;
	volatile int8_t x3356 = -1;
	int32_t t73 = -884;

	t73 = ((x3353<=x3354)<<(x3355-x3356));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3357 = INT8_MAX;
	int8_t x3359 = 1;
	int32_t t74 = 212478;

	t74 = ((x3357<=x3358)<<(x3359-x3360));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3365 = INT8_MIN;
	volatile int64_t x3366 = -1LL;
	int8_t x3367 = INT8_MAX;
	int32_t t75 = -4;

	t75 = ((x3365<=x3366)<<(x3367-x3368));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3369 = 12;
	int32_t x3372 = -1;
	volatile int32_t t76 = 3713987;

	t76 = ((x3369<=x3370)<<(x3371-x3372));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3425 = INT8_MIN;
	int8_t x3426 = -1;
	static uint8_t x3427 = 10U;
	int64_t x3428 = -1LL;
	int32_t t77 = 313;

	t77 = ((x3425<=x3426)<<(x3427-x3428));

	if (t77 != 2048) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3438 = UINT8_MAX;
	int8_t x3439 = -1;
	int64_t x3440 = -1LL;

	t78 = ((x3437<=x3438)<<(x3439-x3440));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x3461 = -1;
	static int8_t x3462 = INT8_MIN;
	uint8_t x3463 = 3U;
	volatile uint8_t x3464 = 1U;
	volatile int32_t t79 = -233561386;

	t79 = ((x3461<=x3462)<<(x3463-x3464));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3485 = 8301903LLU;
	static uint8_t x3486 = 7U;
	static volatile int8_t x3487 = -1;
	static volatile uint64_t x3488 = UINT64_MAX;
	volatile int32_t t80 = -199;

	t80 = ((x3485<=x3486)<<(x3487-x3488));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3509 = INT64_MIN;
	int8_t x3510 = INT8_MIN;
	int32_t x3511 = -1;
	uint32_t x3512 = UINT32_MAX;
	int32_t t81 = 118;

	t81 = ((x3509<=x3510)<<(x3511-x3512));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3581 = INT16_MIN;
	uint8_t x3582 = UINT8_MAX;
	volatile int32_t t82 = -69927400;

	t82 = ((x3581<=x3582)<<(x3583-x3584));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3621 = INT32_MIN;
	int64_t x3623 = -1LL;
	int8_t x3624 = -1;
	static int32_t t83 = -1;

	t83 = ((x3621<=x3622)<<(x3623-x3624));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3630 = 6936U;
	int8_t x3631 = 0;
	volatile int32_t x3632 = -1;
	int32_t t84 = 122892;

	t84 = ((x3629<=x3630)<<(x3631-x3632));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x3657 = INT64_MIN;
	static int8_t x3658 = INT8_MIN;
	static int64_t x3659 = -1LL;
	int64_t x3660 = -1LL;
	static int32_t t85 = -26921;

	t85 = ((x3657<=x3658)<<(x3659-x3660));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3701 = INT32_MIN;
	int8_t x3702 = -1;
	int16_t x3704 = 1;
	volatile int32_t t86 = 72802030;

	t86 = ((x3701<=x3702)<<(x3703-x3704));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x3718 = 655970994;
	int8_t x3719 = 2;
	volatile int32_t t87 = 1;

	t87 = ((x3717<=x3718)<<(x3719-x3720));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3773 = 18671LLU;
	volatile int8_t x3774 = 1;
	static int16_t x3775 = 0;
	volatile int32_t t88 = 0;

	t88 = ((x3773<=x3774)<<(x3775-x3776));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3809 = 26U;
	uint32_t x3811 = UINT32_MAX;
	volatile int8_t x3812 = -1;
	static volatile int32_t t89 = -9354444;

	t89 = ((x3809<=x3810)<<(x3811-x3812));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3837 = INT8_MIN;
	int32_t x3838 = -47045;
	int8_t x3839 = -1;
	int8_t x3840 = -1;

	t90 = ((x3837<=x3838)<<(x3839-x3840));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3841 = INT64_MIN;
	int32_t x3842 = -350;
	volatile uint32_t x3843 = 2U;
	uint32_t x3844 = UINT32_MAX;

	t91 = ((x3841<=x3842)<<(x3843-x3844));

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3878 = UINT32_MAX;
	uint32_t x3879 = 18U;
	int32_t x3880 = -1;
	int32_t t92 = -665590862;

	t92 = ((x3877<=x3878)<<(x3879-x3880));

	if (t92 != 524288) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3937 = UINT64_MAX;
	int8_t x3938 = -1;
	int8_t x3939 = 16;
	int8_t x3940 = -4;

	t93 = ((x3937<=x3938)<<(x3939-x3940));

	if (t93 != 1048576) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3965 = INT16_MIN;
	int32_t x3966 = -1;
	int64_t x3967 = -1LL;
	static int32_t x3968 = -1;
	static int32_t t94 = -1050046296;

	t94 = ((x3965<=x3966)<<(x3967-x3968));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x3977 = -5212152LL;
	volatile int64_t x3978 = -1LL;
	static int64_t x3979 = INT64_MIN;
	int64_t x3980 = INT64_MIN;
	static volatile int32_t t95 = 265910527;

	t95 = ((x3977<=x3978)<<(x3979-x3980));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x4090 = INT32_MIN;
	static int8_t x4091 = -1;
	volatile int32_t t96 = 10;

	t96 = ((x4089<=x4090)<<(x4091-x4092));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x4126 = 1U;
	uint16_t x4127 = 10U;
	static int8_t x4128 = -10;

	t97 = ((x4125<=x4126)<<(x4127-x4128));

	if (t97 != 1048576) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4177 = INT8_MIN;
	static int64_t x4178 = INT64_MIN;
	int8_t x4179 = INT8_MIN;
	static int32_t t98 = 538317922;

	t98 = ((x4177<=x4178)<<(x4179-x4180));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4229 = -465433;
	uint32_t x4230 = 829545120U;
	int8_t x4231 = -1;
	int16_t x4232 = -1;
	volatile int32_t t99 = -901854;

	t99 = ((x4229<=x4230)<<(x4231-x4232));

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


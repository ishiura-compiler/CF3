#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x14 = 6U;
uint32_t t0 = 0U;
int8_t x54 = INT8_MIN;
volatile int8_t x88 = INT8_MIN;
int32_t t3 = -75194358;
uint8_t x155 = 6U;
uint16_t x271 = 20U;
volatile uint64_t x279 = 0LLU;
volatile int32_t t8 = 12853802;
static int64_t x281 = INT64_MIN;
int64_t t9 = 256891229LL;
static volatile int32_t t10 = -391393;
volatile int32_t t11 = 418073;
int8_t x438 = INT8_MIN;
static volatile uint32_t t13 = 6620U;
int32_t x517 = -16346408;
uint32_t x519 = 2U;
static int32_t x690 = INT32_MIN;
uint64_t t17 = 2145834241518964237LLU;
uint16_t x903 = 7U;
int16_t x926 = -1;
int8_t x977 = INT8_MIN;
int32_t x1076 = INT32_MIN;
volatile int16_t x1085 = INT16_MIN;
uint32_t x1254 = UINT32_MAX;
uint64_t x1289 = 3928LLU;
volatile uint32_t x1309 = UINT32_MAX;
static volatile uint32_t x1346 = UINT32_MAX;
static volatile int64_t t33 = 801743569740938741LL;
volatile int8_t x1400 = -1;
int32_t t34 = -62318950;
static int64_t x1434 = -6321055152LL;
uint32_t x1448 = 71905467U;
volatile uint32_t t36 = 109U;
volatile int32_t x1470 = INT32_MIN;
uint16_t x1478 = UINT16_MAX;
static int8_t x1532 = -1;
int32_t x1569 = 1233;
uint8_t x1683 = 0U;
int64_t x1741 = INT64_MIN;
uint8_t x1743 = 7U;
volatile uint64_t x1744 = 71265830LLU;
volatile int32_t t44 = -2;
uint32_t x1944 = UINT32_MAX;
int8_t x1956 = -5;
int64_t x2130 = INT64_MIN;
static int64_t x2184 = INT64_MAX;
volatile uint8_t x2193 = UINT8_MAX;
volatile uint64_t x2249 = 1426402LLU;
static int8_t x2251 = 14;
int32_t x2294 = INT32_MIN;
volatile int32_t t54 = 15;
int64_t t56 = -2073400279164LL;
int32_t x2381 = INT32_MAX;
static int32_t t57 = -7603;
int8_t x2401 = -1;
static uint32_t x2402 = UINT32_MAX;
int32_t t60 = 3289245;
int32_t x2518 = 7;
int64_t x2549 = 643929LL;
int16_t x2551 = 27;
static uint32_t x2552 = UINT32_MAX;
uint8_t x2555 = 16U;
int64_t x2624 = -487323722LL;
static int16_t x2626 = 1;
static uint32_t x2628 = 10919U;
int8_t x2676 = 49;
int64_t x2700 = INT64_MAX;
static uint16_t x2735 = 3U;
static int32_t t72 = 668922;
int16_t x2784 = 8;
static volatile int16_t x2793 = -1;
volatile uint32_t x2796 = 1U;
int32_t x2813 = INT32_MIN;
uint8_t x2815 = 14U;
int16_t x2835 = 0;
uint64_t x2908 = 1866120774011LLU;
static uint32_t x3055 = 6U;
int32_t x3058 = INT32_MAX;
int32_t t86 = 1;
int8_t x3232 = 3;
int64_t x3262 = 1210LL;
static volatile int8_t x3263 = 8;
static volatile int64_t t88 = -15512LL;
int8_t x3370 = 14;
static volatile int16_t x3371 = 0;
int32_t t90 = 1034438;
int8_t x3459 = 1;
static volatile int32_t x3460 = -1;
int32_t t91 = 362967;
uint16_t x3475 = 27U;
int32_t t93 = 18005;
int32_t x3497 = -1;
int32_t x3541 = INT32_MAX;
int8_t x3586 = INT8_MIN;
uint8_t x3587 = 17U;
volatile int32_t t97 = 127;


void f0(void) {
	static int32_t x13 = INT32_MAX;
	static int8_t x15 = 1;
	uint32_t x16 = 13206U;

	t0 = (((x13<=x14)<<x15)/x16);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x37 = INT64_MIN;
	static volatile uint32_t x38 = 507U;
	int8_t x39 = 1;
	int64_t x40 = INT64_MIN;
	volatile int64_t t1 = 0LL;

	t1 = (((x37<=x38)<<x39)/x40);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x53 = INT16_MAX;
	uint16_t x55 = 12U;
	int64_t x56 = INT64_MIN;
	int64_t t2 = -960LL;

	t2 = (((x53<=x54)<<x55)/x56);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x85 = INT32_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 2U;

	t3 = (((x85<=x86)<<x87)/x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = -1;
	uint8_t x107 = 3U;
	static uint8_t x108 = 125U;
	volatile int32_t t4 = -42051838;

	t4 = (((x105<=x106)<<x107)/x108);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x121 = 93326815U;
	static uint16_t x122 = UINT16_MAX;
	int16_t x123 = 0;
	static volatile int64_t x124 = -1LL;
	static int64_t t5 = 1091288281LL;

	t5 = (((x121<=x122)<<x123)/x124);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x153 = UINT8_MAX;
	static int16_t x154 = -1;
	uint32_t x156 = 8U;
	static uint32_t t6 = 122057420U;

	t6 = (((x153<=x154)<<x155)/x156);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x269 = 0U;
	volatile int32_t x270 = 594504;
	static uint32_t x272 = 7818U;
	static uint32_t t7 = 254398737U;

	t7 = (((x269<=x270)<<x271)/x272);

	if (t7 != 134U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x277 = 28;
	uint8_t x278 = 5U;
	volatile int8_t x280 = 6;

	t8 = (((x277<=x278)<<x279)/x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x282 = 0;
	volatile uint32_t x283 = 19U;
	int64_t x284 = 9501104669387LL;

	t9 = (((x281<=x282)<<x283)/x284);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	uint16_t x319 = 3U;
	int8_t x320 = INT8_MIN;

	t10 = (((x317<=x318)<<x319)/x320);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x377 = 1U;
	int32_t x378 = INT32_MAX;
	static int8_t x379 = 0;
	static volatile int8_t x380 = -1;

	t11 = (((x377<=x378)<<x379)/x380);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x437 = UINT16_MAX;
	int16_t x439 = 1;
	uint8_t x440 = UINT8_MAX;
	int32_t t12 = 178;

	t12 = (((x437<=x438)<<x439)/x440);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x485 = 14;
	int16_t x486 = -152;
	uint32_t x487 = 0U;
	static uint32_t x488 = 354140255U;

	t13 = (((x485<=x486)<<x487)/x488);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x493 = 1U;
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 10U;
	int32_t x496 = INT32_MAX;
	volatile int32_t t14 = -97125446;

	t14 = (((x493<=x494)<<x495)/x496);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x518 = -1;
	static volatile int8_t x520 = -1;
	volatile int32_t t15 = 9;

	t15 = (((x517<=x518)<<x519)/x520);

	if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x613 = UINT64_MAX;
	int64_t x614 = INT64_MAX;
	uint16_t x615 = 0U;
	int64_t x616 = 1LL;
	int64_t t16 = 13424717743LL;

	t16 = (((x613<=x614)<<x615)/x616);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x689 = -1;
	static int8_t x691 = 1;
	uint64_t x692 = UINT64_MAX;

	t17 = (((x689<=x690)<<x691)/x692);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x725 = INT16_MIN;
	volatile int8_t x726 = INT8_MIN;
	uint8_t x727 = 0U;
	uint8_t x728 = 14U;
	int32_t t18 = 875524;

	t18 = (((x725<=x726)<<x727)/x728);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x781 = UINT64_MAX;
	volatile int64_t x782 = 41425104430LL;
	uint16_t x783 = 23U;
	volatile int64_t x784 = 3887616LL;
	volatile int64_t t19 = 0LL;

	t19 = (((x781<=x782)<<x783)/x784);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x805 = UINT32_MAX;
	int64_t x806 = INT64_MAX;
	int8_t x807 = 23;
	static uint8_t x808 = 13U;
	static volatile int32_t t20 = 1;

	t20 = (((x805<=x806)<<x807)/x808);

	if (t20 != 645277) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x901 = 127428199;
	volatile int8_t x902 = -1;
	uint16_t x904 = UINT16_MAX;
	volatile int32_t t21 = 24;

	t21 = (((x901<=x902)<<x903)/x904);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x925 = INT32_MAX;
	uint8_t x927 = 24U;
	int32_t x928 = 7016052;
	volatile int32_t t22 = -55;

	t22 = (((x925<=x926)<<x927)/x928);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x929 = 3470LLU;
	volatile uint64_t x930 = 5637611LLU;
	uint8_t x931 = 30U;
	uint32_t x932 = UINT32_MAX;
	static uint32_t t23 = 7329U;

	t23 = (((x929<=x930)<<x931)/x932);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x978 = INT16_MIN;
	static int8_t x979 = 11;
	static uint16_t x980 = UINT16_MAX;
	volatile int32_t t24 = -85669051;

	t24 = (((x977<=x978)<<x979)/x980);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1009 = -1023595361;
	static int8_t x1010 = INT8_MIN;
	static volatile int8_t x1011 = 21;
	volatile int16_t x1012 = INT16_MIN;
	volatile int32_t t25 = -2634276;

	t25 = (((x1009<=x1010)<<x1011)/x1012);

	if (t25 != -64) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1073 = 615205108;
	uint8_t x1074 = 14U;
	uint64_t x1075 = 28LLU;
	volatile int32_t t26 = 5364;

	t26 = (((x1073<=x1074)<<x1075)/x1076);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1086 = 127U;
	static uint8_t x1087 = 2U;
	uint64_t x1088 = UINT64_MAX;
	uint64_t t27 = 12688490224592122LLU;

	t27 = (((x1085<=x1086)<<x1087)/x1088);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1125 = INT16_MIN;
	int64_t x1126 = INT64_MIN;
	int8_t x1127 = 1;
	int16_t x1128 = INT16_MAX;
	int32_t t28 = 39;

	t28 = (((x1125<=x1126)<<x1127)/x1128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1253 = INT16_MIN;
	uint8_t x1255 = 30U;
	volatile int32_t x1256 = -1;
	volatile int32_t t29 = -63;

	t29 = (((x1253<=x1254)<<x1255)/x1256);

	if (t29 != -1073741824) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1290 = -34;
	uint16_t x1291 = 4U;
	uint8_t x1292 = UINT8_MAX;
	volatile int32_t t30 = -1776426;

	t30 = (((x1289<=x1290)<<x1291)/x1292);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1310 = INT8_MAX;
	int64_t x1311 = 0LL;
	static uint8_t x1312 = 39U;
	volatile int32_t t31 = -11;

	t31 = (((x1309<=x1310)<<x1311)/x1312);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1325 = 11190U;
	int32_t x1326 = -366704;
	uint8_t x1327 = 28U;
	int32_t x1328 = -1;
	volatile int32_t t32 = 15220534;

	t32 = (((x1325<=x1326)<<x1327)/x1328);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1345 = UINT16_MAX;
	int8_t x1347 = 0;
	int64_t x1348 = -3LL;

	t33 = (((x1345<=x1346)<<x1347)/x1348);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1397 = INT64_MIN;
	uint32_t x1398 = 0U;
	static int8_t x1399 = 1;

	t34 = (((x1397<=x1398)<<x1399)/x1400);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1433 = 213U;
	volatile uint32_t x1435 = 0U;
	int8_t x1436 = 9;
	static volatile int32_t t35 = -5511265;

	t35 = (((x1433<=x1434)<<x1435)/x1436);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1445 = UINT8_MAX;
	int8_t x1446 = INT8_MIN;
	int8_t x1447 = 1;

	t36 = (((x1445<=x1446)<<x1447)/x1448);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1469 = 22250U;
	uint32_t x1471 = 7U;
	uint16_t x1472 = 454U;
	int32_t t37 = -6123;

	t37 = (((x1469<=x1470)<<x1471)/x1472);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1477 = -1;
	uint32_t x1479 = 0U;
	static volatile int8_t x1480 = INT8_MIN;
	volatile int32_t t38 = -143;

	t38 = (((x1477<=x1478)<<x1479)/x1480);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1529 = INT8_MIN;
	int16_t x1530 = INT16_MIN;
	uint8_t x1531 = 1U;
	volatile int32_t t39 = -69;

	t39 = (((x1529<=x1530)<<x1531)/x1532);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1570 = 10656885U;
	uint16_t x1571 = 4U;
	int8_t x1572 = INT8_MAX;
	int32_t t40 = 440977;

	t40 = (((x1569<=x1570)<<x1571)/x1572);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1669 = 268U;
	int16_t x1670 = INT16_MIN;
	static uint8_t x1671 = 2U;
	int8_t x1672 = 61;
	static volatile int32_t t41 = -23907;

	t41 = (((x1669<=x1670)<<x1671)/x1672);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1681 = 1;
	volatile uint64_t x1682 = UINT64_MAX;
	uint16_t x1684 = 3U;
	int32_t t42 = 44375013;

	t42 = (((x1681<=x1682)<<x1683)/x1684);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1742 = 1869312204U;
	volatile uint64_t t43 = 2159576258754878177LLU;

	t43 = (((x1741<=x1742)<<x1743)/x1744);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1837 = -225LL;
	int8_t x1838 = INT8_MAX;
	uint8_t x1839 = 26U;
	int32_t x1840 = INT32_MIN;

	t44 = (((x1837<=x1838)<<x1839)/x1840);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1941 = INT64_MIN;
	int32_t x1942 = INT32_MIN;
	static volatile int16_t x1943 = 13;
	volatile uint32_t t45 = 30290232U;

	t45 = (((x1941<=x1942)<<x1943)/x1944);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1953 = 2U;
	uint16_t x1954 = 3U;
	uint8_t x1955 = 11U;
	int32_t t46 = -68;

	t46 = (((x1953<=x1954)<<x1955)/x1956);

	if (t46 != -409) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x2081 = INT16_MIN;
	uint16_t x2082 = UINT16_MAX;
	uint32_t x2083 = 11U;
	int64_t x2084 = INT64_MIN;
	volatile int64_t t47 = 893909829123LL;

	t47 = (((x2081<=x2082)<<x2083)/x2084);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2129 = UINT64_MAX;
	static uint16_t x2131 = 1U;
	volatile uint32_t x2132 = 11369612U;
	uint32_t t48 = 0U;

	t48 = (((x2129<=x2130)<<x2131)/x2132);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2173 = 44U;
	uint8_t x2174 = UINT8_MAX;
	static int16_t x2175 = 0;
	volatile uint16_t x2176 = UINT16_MAX;
	int32_t t49 = -125531952;

	t49 = (((x2173<=x2174)<<x2175)/x2176);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2177 = 216667U;
	int16_t x2178 = INT16_MIN;
	volatile int8_t x2179 = 1;
	uint16_t x2180 = UINT16_MAX;
	volatile int32_t t50 = -8791;

	t50 = (((x2177<=x2178)<<x2179)/x2180);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2181 = INT64_MAX;
	int16_t x2182 = 1;
	volatile uint8_t x2183 = 12U;
	volatile int64_t t51 = -1144937380363554558LL;

	t51 = (((x2181<=x2182)<<x2183)/x2184);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x2194 = 7784LLU;
	uint16_t x2195 = 12U;
	static volatile int64_t x2196 = INT64_MIN;
	volatile int64_t t52 = 405999391LL;

	t52 = (((x2193<=x2194)<<x2195)/x2196);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x2250 = 248491600LLU;
	int64_t x2252 = INT64_MAX;
	int64_t t53 = 0LL;

	t53 = (((x2249<=x2250)<<x2251)/x2252);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2293 = INT32_MIN;
	static uint16_t x2295 = 1U;
	int32_t x2296 = -442512;

	t54 = (((x2293<=x2294)<<x2295)/x2296);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2325 = 21346867324415573LLU;
	volatile int32_t x2326 = -1;
	volatile uint16_t x2327 = 0U;
	volatile uint8_t x2328 = 5U;
	int32_t t55 = 394406;

	t55 = (((x2325<=x2326)<<x2327)/x2328);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2373 = -44;
	uint8_t x2374 = UINT8_MAX;
	static volatile uint64_t x2375 = 0LLU;
	int64_t x2376 = INT64_MAX;

	t56 = (((x2373<=x2374)<<x2375)/x2376);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2382 = UINT16_MAX;
	int8_t x2383 = 29;
	int16_t x2384 = INT16_MAX;

	t57 = (((x2381<=x2382)<<x2383)/x2384);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2393 = UINT32_MAX;
	uint64_t x2394 = 3580830479095LLU;
	static uint16_t x2395 = 1U;
	static int64_t x2396 = -1913LL;
	volatile int64_t t58 = -162190669017804928LL;

	t58 = (((x2393<=x2394)<<x2395)/x2396);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2403 = 2;
	static uint32_t x2404 = 134121U;
	volatile uint32_t t59 = 322923U;

	t59 = (((x2401<=x2402)<<x2403)/x2404);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2413 = 731;
	static int32_t x2414 = 458065;
	int32_t x2415 = 0;
	int16_t x2416 = -12644;

	t60 = (((x2413<=x2414)<<x2415)/x2416);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2517 = INT32_MIN;
	static uint16_t x2519 = 1U;
	uint64_t x2520 = 14373LLU;
	volatile uint64_t t61 = 121LLU;

	t61 = (((x2517<=x2518)<<x2519)/x2520);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2550 = -1;
	uint32_t t62 = 2150U;

	t62 = (((x2549<=x2550)<<x2551)/x2552);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2553 = 24857496811487LL;
	int64_t x2554 = INT64_MIN;
	uint64_t x2556 = 3233469457596136LLU;
	uint64_t t63 = 3936021200LLU;

	t63 = (((x2553<=x2554)<<x2555)/x2556);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2557 = INT32_MAX;
	int64_t x2558 = -1LL;
	uint32_t x2559 = 15U;
	int8_t x2560 = INT8_MAX;
	static int32_t t64 = 13;

	t64 = (((x2557<=x2558)<<x2559)/x2560);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2601 = -1LL;
	int16_t x2602 = INT16_MIN;
	uint8_t x2603 = 2U;
	volatile int16_t x2604 = -304;
	int32_t t65 = -1155323;

	t65 = (((x2601<=x2602)<<x2603)/x2604);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2621 = -1LL;
	int64_t x2622 = -1LL;
	static uint16_t x2623 = 16U;
	volatile int64_t t66 = -866724388239LL;

	t66 = (((x2621<=x2622)<<x2623)/x2624);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2625 = -7;
	uint64_t x2627 = 8LLU;
	uint32_t t67 = 114911390U;

	t67 = (((x2625<=x2626)<<x2627)/x2628);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2673 = 3719U;
	int64_t x2674 = -119669113LL;
	static uint8_t x2675 = 17U;
	static volatile int32_t t68 = 239;

	t68 = (((x2673<=x2674)<<x2675)/x2676);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2697 = 0U;
	int32_t x2698 = INT32_MIN;
	static uint8_t x2699 = 3U;
	volatile int64_t t69 = 2059152LL;

	t69 = (((x2697<=x2698)<<x2699)/x2700);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2733 = 5U;
	uint32_t x2734 = UINT32_MAX;
	uint64_t x2736 = 12717151596LLU;
	static uint64_t t70 = 1266286549562LLU;

	t70 = (((x2733<=x2734)<<x2735)/x2736);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2749 = 41737832LL;
	volatile int16_t x2750 = INT16_MIN;
	uint8_t x2751 = 0U;
	uint32_t x2752 = 52U;
	volatile uint32_t t71 = 1042427417U;

	t71 = (((x2749<=x2750)<<x2751)/x2752);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2769 = INT32_MAX;
	static uint8_t x2770 = UINT8_MAX;
	static volatile int16_t x2771 = 6;
	int8_t x2772 = 22;

	t72 = (((x2769<=x2770)<<x2771)/x2772);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x2781 = -1;
	volatile uint32_t x2782 = 53U;
	volatile uint16_t x2783 = 10U;
	int32_t t73 = 2;

	t73 = (((x2781<=x2782)<<x2783)/x2784);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2794 = UINT16_MAX;
	int8_t x2795 = 0;
	static uint32_t t74 = 237739U;

	t74 = (((x2793<=x2794)<<x2795)/x2796);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2814 = INT64_MAX;
	int64_t x2816 = 494LL;
	int64_t t75 = -237LL;

	t75 = (((x2813<=x2814)<<x2815)/x2816);

	if (t75 != 33LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2833 = INT8_MAX;
	volatile uint32_t x2834 = 43884U;
	static volatile uint8_t x2836 = 1U;
	volatile int32_t t76 = 189105;

	t76 = (((x2833<=x2834)<<x2835)/x2836);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2901 = -1;
	int32_t x2902 = -11437046;
	static volatile int64_t x2903 = 18LL;
	int16_t x2904 = 60;
	int32_t t77 = -523340898;

	t77 = (((x2901<=x2902)<<x2903)/x2904);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2905 = UINT16_MAX;
	int32_t x2906 = INT32_MIN;
	int32_t x2907 = 0;
	static volatile uint64_t t78 = 12494762604LLU;

	t78 = (((x2905<=x2906)<<x2907)/x2908);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2997 = UINT32_MAX;
	int8_t x2998 = -37;
	volatile uint16_t x2999 = 28U;
	volatile uint8_t x3000 = 13U;
	static volatile int32_t t79 = 2729;

	t79 = (((x2997<=x2998)<<x2999)/x3000);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3053 = 68;
	int16_t x3054 = INT16_MAX;
	uint32_t x3056 = 13584131U;
	volatile uint32_t t80 = 125946U;

	t80 = (((x3053<=x3054)<<x3055)/x3056);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3057 = INT16_MAX;
	volatile uint8_t x3059 = 4U;
	int16_t x3060 = INT16_MAX;
	volatile int32_t t81 = -206;

	t81 = (((x3057<=x3058)<<x3059)/x3060);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3121 = INT32_MIN;
	uint32_t x3122 = UINT32_MAX;
	volatile uint8_t x3123 = 4U;
	volatile int8_t x3124 = 32;
	int32_t t82 = -882;

	t82 = (((x3121<=x3122)<<x3123)/x3124);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3129 = 450U;
	int64_t x3130 = -1LL;
	int8_t x3131 = 0;
	uint32_t x3132 = UINT32_MAX;
	volatile uint32_t t83 = 90079306U;

	t83 = (((x3129<=x3130)<<x3131)/x3132);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x3137 = INT64_MIN;
	uint32_t x3138 = UINT32_MAX;
	uint8_t x3139 = 4U;
	int32_t x3140 = INT32_MIN;
	volatile int32_t t84 = -36638894;

	t84 = (((x3137<=x3138)<<x3139)/x3140);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3141 = UINT8_MAX;
	volatile int8_t x3142 = INT8_MAX;
	static int8_t x3143 = 0;
	int32_t x3144 = INT32_MIN;
	int32_t t85 = -18;

	t85 = (((x3141<=x3142)<<x3143)/x3144);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3161 = -1;
	volatile int32_t x3162 = -1;
	volatile uint32_t x3163 = 26U;
	int32_t x3164 = -1;

	t86 = (((x3161<=x3162)<<x3163)/x3164);

	if (t86 != -67108864) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3229 = -1;
	volatile uint8_t x3230 = UINT8_MAX;
	uint8_t x3231 = 19U;
	int32_t t87 = 0;

	t87 = (((x3229<=x3230)<<x3231)/x3232);

	if (t87 != 174762) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3261 = INT8_MAX;
	static int64_t x3264 = INT64_MAX;

	t88 = (((x3261<=x3262)<<x3263)/x3264);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3361 = -379;
	volatile int16_t x3362 = -1;
	uint8_t x3363 = 1U;
	static uint8_t x3364 = 25U;
	static int32_t t89 = -42510855;

	t89 = (((x3361<=x3362)<<x3363)/x3364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x3369 = 1038070000196LL;
	static uint16_t x3372 = 72U;

	t90 = (((x3369<=x3370)<<x3371)/x3372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x3457 = 1U;
	uint64_t x3458 = 1669919277605862214LLU;

	t91 = (((x3457<=x3458)<<x3459)/x3460);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3473 = 1795U;
	int32_t x3474 = -1;
	static volatile int8_t x3476 = INT8_MIN;
	volatile int32_t t92 = -245;

	t92 = (((x3473<=x3474)<<x3475)/x3476);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x3485 = 1105987U;
	uint64_t x3486 = 17158390340762LLU;
	uint32_t x3487 = 3U;
	static uint8_t x3488 = 11U;

	t93 = (((x3485<=x3486)<<x3487)/x3488);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3498 = 221589503933LL;
	static volatile int8_t x3499 = 1;
	int16_t x3500 = INT16_MIN;
	int32_t t94 = 3700;

	t94 = (((x3497<=x3498)<<x3499)/x3500);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3542 = -1LL;
	static int8_t x3543 = 1;
	volatile int16_t x3544 = 1572;
	int32_t t95 = -982640589;

	t95 = (((x3541<=x3542)<<x3543)/x3544);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x3553 = 61U;
	static volatile uint8_t x3554 = 1U;
	int8_t x3555 = 1;
	int32_t x3556 = INT32_MIN;
	volatile int32_t t96 = 4575483;

	t96 = (((x3553<=x3554)<<x3555)/x3556);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3585 = INT16_MIN;
	int16_t x3588 = 1;

	t97 = (((x3585<=x3586)<<x3587)/x3588);

	if (t97 != 131072) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3617 = INT16_MIN;
	volatile int32_t x3618 = INT32_MAX;
	uint8_t x3619 = 5U;
	volatile int16_t x3620 = 1;
	volatile int32_t t98 = 44836;

	t98 = (((x3617<=x3618)<<x3619)/x3620);

	if (t98 != 32) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3637 = INT64_MIN;
	uint64_t x3638 = UINT64_MAX;
	volatile int8_t x3639 = 0;
	static volatile int64_t x3640 = INT64_MIN;
	static volatile int64_t t99 = 39724568LL;

	t99 = (((x3637<=x3638)<<x3639)/x3640);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


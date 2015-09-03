#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x57 = INT32_MAX;
static int64_t x58 = 7992424383LL;
int64_t t1 = -1431020049180LL;
int8_t x368 = INT8_MIN;
int32_t t6 = 72;
uint8_t x542 = UINT8_MAX;
volatile int8_t x677 = 12;
uint8_t x679 = 4U;
int16_t x996 = 118;
volatile int64_t t12 = 97262045226083303LL;
uint8_t x1071 = 11U;
static uint64_t x1072 = 232LLU;
uint64_t t14 = 449758312LLU;
volatile int32_t x1344 = INT32_MAX;
uint64_t t15 = 386556621857329500LLU;
static uint8_t x1394 = UINT8_MAX;
static uint16_t x1395 = 0U;
int32_t t17 = 1294;
volatile uint16_t x1427 = 1U;
int64_t x1482 = 1959806581056LL;
int64_t x1540 = -1LL;
uint64_t x1557 = 1787229275500518LLU;
int32_t x1558 = 24216891;
static int32_t x1569 = -1;
uint16_t x1571 = 3U;
uint16_t x1690 = 0U;
volatile uint8_t x1697 = UINT8_MAX;
int8_t x1773 = INT8_MAX;
int16_t x1865 = -1;
int8_t x1867 = 1;
volatile int16_t x2005 = INT16_MIN;
int16_t x2009 = -1;
static volatile uint8_t x2067 = 10U;
int32_t t33 = -11078;
volatile uint8_t x2323 = 0U;
uint32_t x2324 = 20505848U;
int8_t x2369 = -1;
uint64_t t39 = 1938823434016LLU;
volatile uint8_t x2442 = UINT8_MAX;
static int8_t x2455 = 1;
int32_t x2456 = INT32_MIN;
uint32_t x2484 = 13U;
volatile int32_t x2497 = 4516160;
uint16_t x2545 = UINT16_MAX;
volatile uint16_t x2548 = UINT16_MAX;
static uint16_t x2566 = UINT16_MAX;
int64_t x2567 = 24LL;
int64_t t46 = 476LL;
volatile int64_t x2890 = 18255372LL;
volatile int32_t x2894 = INT32_MAX;
int64_t x2896 = INT64_MIN;
int16_t x2898 = INT16_MAX;
volatile int8_t x2899 = 13;
int64_t t50 = 13797385LL;
int16_t x3026 = INT16_MAX;
int8_t x3027 = 1;
int64_t x3188 = INT64_MAX;
volatile uint32_t t53 = 9114U;
uint32_t x3238 = UINT32_MAX;
uint64_t x3269 = UINT64_MAX;
int8_t x3270 = 0;
uint64_t t56 = 11258LLU;
int8_t x3491 = 0;
int64_t x3514 = INT64_MAX;
static volatile uint8_t x3537 = 2U;
uint32_t x3540 = 936U;
volatile int16_t x3605 = -1;
uint64_t x3614 = 535833796110532LLU;
static int32_t x3745 = 50313356;
int32_t x3748 = INT32_MIN;
int32_t t64 = 27345244;
volatile uint8_t x3779 = 7U;
volatile int32_t t65 = 182143;
static uint32_t x3990 = 0U;
uint32_t t66 = 115844347U;
volatile int8_t x4029 = INT8_MAX;
static uint64_t x4032 = 381182454LLU;
int64_t x4276 = INT64_MIN;
volatile uint32_t x4322 = UINT32_MAX;
uint8_t x4343 = 0U;
int64_t x4402 = INT64_MAX;
static int16_t x4513 = INT16_MIN;
static int32_t x4730 = 249;
int32_t x4784 = -4144406;
static int32_t t78 = 42;
static int16_t x4918 = INT16_MAX;
uint16_t x4919 = 1U;
uint64_t t79 = 1670347767LLU;
volatile int16_t x5025 = -1278;
static int64_t t82 = 4346954064296LL;
int8_t x5145 = INT8_MAX;
uint8_t x5147 = 3U;
static volatile int64_t x5162 = INT64_MAX;
uint8_t x5374 = 2U;
uint16_t x5375 = 2U;
volatile int16_t x5453 = INT16_MIN;
int16_t x5457 = -1;
uint32_t x5665 = 545799123U;
volatile uint8_t x5667 = 29U;
int16_t x5668 = INT16_MAX;
int8_t x5744 = INT8_MIN;
volatile uint64_t t97 = 2900264LLU;
static int16_t x5871 = 0;


void f0(void) {
	static uint16_t x59 = 27U;
	int8_t x60 = INT8_MIN;
	int64_t t0 = -3865LL;

	t0 = ((x57-(x58>>x59))/x60);

	if (t0 != -16777215LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x93 = INT64_MAX;
	static volatile uint16_t x94 = 7342U;
	uint8_t x95 = 18U;
	int32_t x96 = -2;

	t1 = ((x93-(x94>>x95))/x96);

	if (t1 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x161 = INT32_MAX;
	volatile int16_t x162 = 7922;
	uint8_t x163 = 0U;
	static int64_t x164 = INT64_MIN;
	int64_t t2 = -469906LL;

	t2 = ((x161-(x162>>x163))/x164);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x257 = 3U;
	uint64_t x258 = UINT64_MAX;
	static uint8_t x259 = 6U;
	uint16_t x260 = 8070U;
	uint64_t t3 = 36772316817776LLU;

	t3 = ((x257-(x258>>x259))/x260);

	if (t3 != 2250125613080277LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x305 = -1LL;
	volatile uint32_t x306 = UINT32_MAX;
	int16_t x307 = 2;
	uint8_t x308 = 3U;
	static int64_t t4 = -4258333767601577LL;

	t4 = ((x305-(x306>>x307))/x308);

	if (t4 != -357913941LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	static int8_t x367 = 0;
	volatile int32_t t5 = 55;

	t5 = ((x365-(x366>>x367))/x368);

	if (t5 != 256) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x429 = INT8_MAX;
	volatile int8_t x430 = INT8_MAX;
	uint8_t x431 = 8U;
	int16_t x432 = INT16_MIN;

	t6 = ((x429-(x430>>x431))/x432);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x485 = -1;
	volatile int64_t x486 = 93412021067650LL;
	int32_t x487 = 29;
	volatile uint8_t x488 = 29U;
	static volatile int64_t t7 = 7613562534LL;

	t7 = ((x485-(x486>>x487))/x488);

	if (t7 != -5999LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x541 = 97U;
	static uint16_t x543 = 1U;
	volatile int32_t x544 = -1;
	volatile uint32_t t8 = 198083695U;

	t8 = ((x541-(x542>>x543))/x544);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x678 = 5321;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t9 = -4558;

	t9 = ((x677-(x678>>x679))/x680);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x833 = -1;
	int64_t x834 = 7LL;
	static int8_t x835 = 0;
	int32_t x836 = INT32_MIN;
	volatile int64_t t10 = 29434LL;

	t10 = ((x833-(x834>>x835))/x836);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x957 = INT16_MIN;
	int64_t x958 = INT64_MAX;
	static uint32_t x959 = 46U;
	volatile uint32_t x960 = 61935U;
	int64_t t11 = -225531179819784209LL;

	t11 = ((x957-(x958>>x959))/x960);

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x993 = -23LL;
	static int32_t x994 = INT32_MAX;
	uint8_t x995 = 12U;

	t12 = ((x993-(x994>>x995))/x996);

	if (t12 != -4443LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1069 = 20761LL;
	uint16_t x1070 = UINT16_MAX;
	volatile uint64_t t13 = 443926167262LLU;

	t13 = ((x1069-(x1070>>x1071))/x1072);

	if (t13 != 89LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1101 = 1456833U;
	volatile uint64_t x1102 = UINT64_MAX;
	uint32_t x1103 = 42U;
	int16_t x1104 = INT16_MIN;

	t14 = ((x1101-(x1102>>x1103))/x1104);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1341 = 128U;
	uint64_t x1342 = 3907652820LLU;
	static uint16_t x1343 = 0U;

	t15 = ((x1341-(x1342>>x1343))/x1344);

	if (t15 != 8589934594LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1377 = INT8_MIN;
	volatile uint16_t x1378 = UINT16_MAX;
	volatile int32_t x1379 = 1;
	static int64_t x1380 = -1LL;
	static int64_t t16 = 20920069LL;

	t16 = ((x1377-(x1378>>x1379))/x1380);

	if (t16 != 32895LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1393 = -1;
	int8_t x1396 = INT8_MIN;

	t17 = ((x1393-(x1394>>x1395))/x1396);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1425 = 62348216308LLU;
	int16_t x1426 = 621;
	static volatile uint32_t x1428 = UINT32_MAX;
	static uint64_t t18 = 174536LLU;

	t18 = ((x1425-(x1426>>x1427))/x1428);

	if (t18 != 14LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1481 = 113U;
	static uint8_t x1483 = 13U;
	static uint16_t x1484 = 35U;
	volatile int64_t t19 = -69660LL;

	t19 = ((x1481-(x1482>>x1483))/x1484);

	if (t19 != -6835259LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1525 = 7U;
	uint8_t x1526 = UINT8_MAX;
	uint64_t x1527 = 8LLU;
	static volatile int32_t x1528 = -1;
	volatile int32_t t20 = 31;

	t20 = ((x1525-(x1526>>x1527))/x1528);

	if (t20 != -7) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1537 = 7U;
	int8_t x1538 = 13;
	int32_t x1539 = 29;
	int64_t t21 = 32268215LL;

	t21 = ((x1537-(x1538>>x1539))/x1540);

	if (t21 != -7LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1559 = 1U;
	uint16_t x1560 = 464U;
	uint64_t t22 = 38016505761LLU;

	t22 = ((x1557-(x1558>>x1559))/x1560);

	if (t22 != 3851787205586LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1570 = UINT8_MAX;
	volatile int64_t x1572 = -1LL;
	volatile int64_t t23 = -3994465348047212LL;

	t23 = ((x1569-(x1570>>x1571))/x1572);

	if (t23 != 32LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1689 = 157093717545LL;
	volatile int8_t x1691 = 18;
	int16_t x1692 = INT16_MIN;
	volatile int64_t t24 = -100767607531718502LL;

	t24 = ((x1689-(x1690>>x1691))/x1692);

	if (t24 != -4794119LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1693 = INT16_MIN;
	uint64_t x1694 = UINT64_MAX;
	uint16_t x1695 = 3U;
	volatile uint8_t x1696 = 5U;
	static volatile uint64_t t25 = 6827LLU;

	t25 = ((x1693-(x1694>>x1695))/x1696);

	if (t25 != 3228180212899164979LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1698 = 763476144294LL;
	volatile uint8_t x1699 = 4U;
	volatile int64_t x1700 = INT64_MIN;
	int64_t t26 = 11751220LL;

	t26 = ((x1697-(x1698>>x1699))/x1700);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1774 = UINT32_MAX;
	volatile uint8_t x1775 = 2U;
	int8_t x1776 = INT8_MIN;
	uint32_t t27 = 3994U;

	t27 = ((x1773-(x1774>>x1775))/x1776);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1813 = 5;
	uint16_t x1814 = 26192U;
	volatile int8_t x1815 = 1;
	int16_t x1816 = INT16_MAX;
	volatile int32_t t28 = 903632;

	t28 = ((x1813-(x1814>>x1815))/x1816);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1866 = INT32_MAX;
	uint8_t x1868 = 79U;
	volatile int32_t t29 = 47;

	t29 = ((x1865-(x1866>>x1867))/x1868);

	if (t29 != -13591668) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2006 = 363073388340627LLU;
	uint8_t x2007 = 0U;
	volatile uint64_t x2008 = 193LLU;
	static volatile uint64_t t30 = 125034201711LLU;

	t30 = ((x2005-(x2006>>x2007))/x2008);

	if (t30 != 95577103628607141LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2010 = INT8_MAX;
	volatile uint16_t x2011 = 11U;
	int32_t x2012 = INT32_MIN;
	volatile int32_t t31 = 26658681;

	t31 = ((x2009-(x2010>>x2011))/x2012);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x2065 = 1564U;
	int32_t x2066 = INT32_MAX;
	int32_t x2068 = INT32_MAX;
	static volatile int32_t t32 = -56150;

	t32 = ((x2065-(x2066>>x2067))/x2068);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2241 = -1;
	volatile int8_t x2242 = INT8_MAX;
	static volatile uint8_t x2243 = 3U;
	static uint8_t x2244 = UINT8_MAX;

	t33 = ((x2241-(x2242>>x2243))/x2244);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x2313 = UINT8_MAX;
	uint8_t x2314 = 10U;
	uint32_t x2315 = 15U;
	uint16_t x2316 = 364U;
	volatile int32_t t34 = -1981;

	t34 = ((x2313-(x2314>>x2315))/x2316);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2321 = 994;
	volatile uint32_t x2322 = 237845U;
	volatile uint32_t t35 = 245570U;

	t35 = ((x2321-(x2322>>x2323))/x2324);

	if (t35 != 209U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2353 = INT16_MAX;
	int64_t x2354 = INT64_MAX;
	uint8_t x2355 = 0U;
	static int8_t x2356 = INT8_MIN;
	volatile int64_t t36 = 0LL;

	t36 = ((x2353-(x2354>>x2355))/x2356);

	if (t36 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2370 = INT32_MAX;
	volatile int16_t x2371 = 2;
	static int16_t x2372 = 3;
	volatile int32_t t37 = 8;

	t37 = ((x2369-(x2370>>x2371))/x2372);

	if (t37 != -178956970) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2405 = -1;
	int16_t x2406 = 782;
	int16_t x2407 = 0;
	uint8_t x2408 = UINT8_MAX;
	volatile int32_t t38 = -57854779;

	t38 = ((x2405-(x2406>>x2407))/x2408);

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2413 = 70;
	uint32_t x2414 = 340U;
	static uint8_t x2415 = 2U;
	static uint64_t x2416 = 1824345750813LLU;

	t39 = ((x2413-(x2414>>x2415))/x2416);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2441 = UINT16_MAX;
	volatile int8_t x2443 = 15;
	uint8_t x2444 = 2U;
	volatile int32_t t40 = -31400510;

	t40 = ((x2441-(x2442>>x2443))/x2444);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2453 = -1;
	int32_t x2454 = INT32_MAX;
	int32_t t41 = -40870866;

	t41 = ((x2453-(x2454>>x2455))/x2456);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2481 = INT16_MIN;
	uint64_t x2482 = 158926503581136LLU;
	static uint8_t x2483 = 3U;
	uint64_t t42 = 79LLU;

	t42 = ((x2481-(x2482>>x2483))/x2484);

	if (t42 != 1418978785222813169LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2498 = 10U;
	uint32_t x2499 = 3U;
	static int8_t x2500 = -1;
	int32_t t43 = -304;

	t43 = ((x2497-(x2498>>x2499))/x2500);

	if (t43 != -4516159) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2537 = 1U;
	static uint8_t x2538 = UINT8_MAX;
	static uint16_t x2539 = 28U;
	int8_t x2540 = INT8_MAX;
	uint32_t t44 = 539019U;

	t44 = ((x2537-(x2538>>x2539))/x2540);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2546 = 1007015LLU;
	static volatile uint32_t x2547 = 7U;
	volatile uint64_t t45 = 20552753LLU;

	t45 = ((x2545-(x2546>>x2547))/x2548);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2565 = 1;
	int64_t x2568 = -1LL;

	t46 = ((x2565-(x2566>>x2567))/x2568);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2889 = INT32_MIN;
	int16_t x2891 = 1;
	uint8_t x2892 = 86U;
	int64_t t47 = -1LL;

	t47 = ((x2889-(x2890>>x2891))/x2892);

	if (t47 != -25076875LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2893 = INT8_MIN;
	static uint8_t x2895 = 13U;
	int64_t t48 = -102LL;

	t48 = ((x2893-(x2894>>x2895))/x2896);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2897 = UINT16_MAX;
	int16_t x2900 = INT16_MAX;
	static int32_t t49 = 4;

	t49 = ((x2897-(x2898>>x2899))/x2900);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2989 = INT64_MIN;
	uint8_t x2990 = UINT8_MAX;
	uint8_t x2991 = 24U;
	uint8_t x2992 = UINT8_MAX;

	t50 = ((x2989-(x2990>>x2991))/x2992);

	if (t50 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3025 = 1U;
	volatile int32_t x3028 = INT32_MAX;
	int32_t t51 = -13090;

	t51 = ((x3025-(x3026>>x3027))/x3028);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3185 = -60;
	volatile uint64_t x3186 = 55LLU;
	int8_t x3187 = 1;
	volatile uint64_t t52 = 14202274LLU;

	t52 = ((x3185-(x3186>>x3187))/x3188);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3229 = 42949734U;
	int8_t x3230 = 0;
	volatile uint32_t x3231 = 22U;
	volatile uint16_t x3232 = 133U;

	t53 = ((x3229-(x3230>>x3231))/x3232);

	if (t53 != 322930U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3237 = UINT16_MAX;
	uint16_t x3239 = 0U;
	static int8_t x3240 = INT8_MIN;
	volatile uint32_t t54 = 89992U;

	t54 = ((x3237-(x3238>>x3239))/x3240);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3245 = INT16_MAX;
	uint16_t x3246 = 1031U;
	uint8_t x3247 = 5U;
	static volatile uint32_t x3248 = 880365212U;
	static uint32_t t55 = 120006878U;

	t55 = ((x3245-(x3246>>x3247))/x3248);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3271 = 10U;
	static int16_t x3272 = INT16_MAX;

	t56 = ((x3269-(x3270>>x3271))/x3272);

	if (t56 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3329 = UINT16_MAX;
	int8_t x3330 = 0;
	static int8_t x3331 = 5;
	volatile int32_t x3332 = -40014;
	int32_t t57 = -1261727;

	t57 = ((x3329-(x3330>>x3331))/x3332);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3417 = INT64_MAX;
	volatile int8_t x3418 = 1;
	int8_t x3419 = 0;
	uint16_t x3420 = 2199U;
	int64_t t58 = -1LL;

	t58 = ((x3417-(x3418>>x3419))/x3420);

	if (t58 != 4194348356914404LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3489 = 4U;
	uint8_t x3490 = 0U;
	int32_t x3492 = INT32_MIN;
	volatile int32_t t59 = 153144801;

	t59 = ((x3489-(x3490>>x3491))/x3492);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x3513 = 3U;
	uint8_t x3515 = 26U;
	int8_t x3516 = INT8_MAX;
	int64_t t60 = -61LL;

	t60 = ((x3513-(x3514>>x3515))/x3516);

	if (t60 != -1082196484LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3538 = UINT32_MAX;
	uint8_t x3539 = 22U;
	volatile uint32_t t61 = 3679454U;

	t61 = ((x3537-(x3538>>x3539))/x3540);

	if (t61 != 4588639U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3606 = 399447LLU;
	int32_t x3607 = 1;
	int32_t x3608 = INT32_MAX;
	uint64_t t62 = 290722528LLU;

	t62 = ((x3605-(x3606>>x3607))/x3608);

	if (t62 != 8589934595LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3613 = 6;
	static int16_t x3615 = 0;
	int64_t x3616 = INT64_MIN;
	uint64_t t63 = 0LLU;

	t63 = ((x3613-(x3614>>x3615))/x3616);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3746 = 0U;
	uint16_t x3747 = 2U;

	t64 = ((x3745-(x3746>>x3747))/x3748);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3777 = -1;
	volatile int8_t x3778 = 2;
	static int8_t x3780 = -1;

	t65 = ((x3777-(x3778>>x3779))/x3780);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3989 = INT16_MIN;
	int16_t x3991 = 0;
	int32_t x3992 = INT32_MIN;

	t66 = ((x3989-(x3990>>x3991))/x3992);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4030 = 772U;
	uint8_t x4031 = 3U;
	uint64_t t67 = 7730062056344725909LLU;

	t67 = ((x4029-(x4030>>x4031))/x4032);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4205 = INT32_MAX;
	uint8_t x4206 = 125U;
	int16_t x4207 = 13;
	int8_t x4208 = INT8_MIN;
	int32_t t68 = -16;

	t68 = ((x4205-(x4206>>x4207))/x4208);

	if (t68 != -16777215) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4273 = 194U;
	uint64_t x4274 = 59879200403LLU;
	static uint16_t x4275 = 34U;
	volatile uint64_t t69 = 14004012176368LLU;

	t69 = ((x4273-(x4274>>x4275))/x4276);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4321 = 0;
	uint8_t x4323 = 15U;
	int64_t x4324 = INT64_MIN;
	volatile int64_t t70 = 191938544043612480LL;

	t70 = ((x4321-(x4322>>x4323))/x4324);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4341 = 162671LL;
	int16_t x4342 = 101;
	uint8_t x4344 = UINT8_MAX;
	int64_t t71 = -5LL;

	t71 = ((x4341-(x4342>>x4343))/x4344);

	if (t71 != 637LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4401 = 2U;
	volatile uint32_t x4403 = 39U;
	static int8_t x4404 = -1;
	int64_t t72 = -5790LL;

	t72 = ((x4401-(x4402>>x4403))/x4404);

	if (t72 != 16777213LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x4514 = 16207718LLU;
	uint8_t x4515 = 20U;
	volatile int8_t x4516 = INT8_MIN;
	static volatile uint64_t t73 = 2LLU;

	t73 = ((x4513-(x4514>>x4515))/x4516);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4605 = UINT64_MAX;
	static uint32_t x4606 = 222575334U;
	volatile int16_t x4607 = 1;
	uint64_t x4608 = 7088941445563045LLU;
	uint64_t t74 = 8293211LLU;

	t74 = ((x4605-(x4606>>x4607))/x4608);

	if (t74 != 2602LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4729 = INT8_MAX;
	int64_t x4731 = 1LL;
	uint64_t x4732 = 12450953LLU;
	static uint64_t t75 = 870906076666537LLU;

	t75 = ((x4729-(x4730>>x4731))/x4732);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4781 = 3253U;
	static int32_t x4782 = INT32_MAX;
	uint8_t x4783 = 2U;
	static volatile int32_t t76 = -3147;

	t76 = ((x4781-(x4782>>x4783))/x4784);

	if (t76 != 129) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x4825 = UINT32_MAX;
	uint16_t x4826 = 3681U;
	static volatile uint8_t x4827 = 5U;
	uint8_t x4828 = UINT8_MAX;
	volatile uint32_t t77 = 17197690U;

	t77 = ((x4825-(x4826>>x4827))/x4828);

	if (t77 != 16843008U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4885 = 1;
	uint16_t x4886 = UINT16_MAX;
	int16_t x4887 = 0;
	static int8_t x4888 = INT8_MAX;

	t78 = ((x4885-(x4886>>x4887))/x4888);

	if (t78 != -516) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4917 = INT16_MIN;
	uint64_t x4920 = UINT64_MAX;

	t79 = ((x4917-(x4918>>x4919))/x4920);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4925 = -86;
	int16_t x4926 = 31;
	static uint32_t x4927 = 5U;
	volatile int16_t x4928 = INT16_MIN;
	static int32_t t80 = 22;

	t80 = ((x4925-(x4926>>x4927))/x4928);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x4981 = UINT64_MAX;
	int8_t x4982 = INT8_MAX;
	int16_t x4983 = 29;
	int64_t x4984 = 55LL;
	uint64_t t81 = 169881584530LLU;

	t81 = ((x4981-(x4982>>x4983))/x4984);

	if (t81 != 335395346794719120LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5026 = 12U;
	static volatile int8_t x5027 = 1;
	int64_t x5028 = -461075879741508475LL;

	t82 = ((x5025-(x5026>>x5027))/x5028);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5146 = 3302857824997303161LLU;
	int8_t x5148 = 3;
	volatile uint64_t t83 = 102305621653679804LLU;

	t83 = ((x5145-(x5146>>x5147))/x5148);

	if (t83 != 6011295615194962949LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5161 = INT16_MAX;
	int8_t x5163 = 2;
	uint16_t x5164 = 4384U;
	int64_t t84 = 59549341809LL;

	t84 = ((x5161-(x5162>>x5163))/x5164);

	if (t84 != -525967839692897LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5173 = 81U;
	static volatile uint16_t x5174 = UINT16_MAX;
	uint8_t x5175 = 4U;
	uint32_t x5176 = UINT32_MAX;
	uint32_t t85 = 96U;

	t85 = ((x5173-(x5174>>x5175))/x5176);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5257 = -123;
	volatile uint64_t x5258 = 6371599037LLU;
	volatile uint8_t x5259 = 2U;
	volatile uint8_t x5260 = 32U;
	volatile uint64_t t86 = 3409458403LLU;

	t86 = ((x5257-(x5258>>x5259))/x5260);

	if (t86 != 576460752253645366LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5297 = INT16_MIN;
	static uint16_t x5298 = 7952U;
	int32_t x5299 = 0;
	int32_t x5300 = -1;
	int32_t t87 = -6345;

	t87 = ((x5297-(x5298>>x5299))/x5300);

	if (t87 != 40720) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5305 = -7929;
	volatile uint8_t x5306 = 0U;
	static volatile uint8_t x5307 = 0U;
	int32_t x5308 = -1;
	volatile int32_t t88 = -8;

	t88 = ((x5305-(x5306>>x5307))/x5308);

	if (t88 != 7929) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5373 = 1080794187923683LL;
	int32_t x5376 = 46351;
	volatile int64_t t89 = 4668777843250872LL;

	t89 = ((x5373-(x5374>>x5375))/x5376);

	if (t89 != 23317602380LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5454 = 5284448;
	static int16_t x5455 = 0;
	uint16_t x5456 = UINT16_MAX;
	int32_t t90 = -182002;

	t90 = ((x5453-(x5454>>x5455))/x5456);

	if (t90 != -81) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5458 = 3468U;
	volatile uint8_t x5459 = 1U;
	uint32_t x5460 = 30979221U;
	uint32_t t91 = 105525260U;

	t91 = ((x5457-(x5458>>x5459))/x5460);

	if (t91 != 138U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5601 = INT16_MAX;
	uint64_t x5602 = 164013712LLU;
	int8_t x5603 = 1;
	uint16_t x5604 = 4U;
	uint64_t t92 = 57882134902777043LLU;

	t92 = ((x5601-(x5602>>x5603))/x5604);

	if (t92 != 4611686018406894381LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5661 = UINT16_MAX;
	int64_t x5662 = 3465639024LL;
	uint16_t x5663 = 33U;
	int64_t x5664 = INT64_MIN;
	volatile int64_t t93 = -192345LL;

	t93 = ((x5661-(x5662>>x5663))/x5664);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5666 = 31U;
	static volatile uint32_t t94 = 250U;

	t94 = ((x5665-(x5666>>x5667))/x5668);

	if (t94 != 16656U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5741 = -1;
	volatile uint64_t x5742 = 121LLU;
	uint32_t x5743 = 5U;
	static uint64_t t95 = 1297728LLU;

	t95 = ((x5741-(x5742>>x5743))/x5744);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5757 = 0U;
	static volatile uint32_t x5758 = UINT32_MAX;
	volatile uint32_t x5759 = 1U;
	int8_t x5760 = INT8_MIN;
	uint32_t t96 = 236U;

	t96 = ((x5757-(x5758>>x5759))/x5760);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5817 = 1740U;
	volatile uint64_t x5818 = 357547592621LLU;
	int32_t x5819 = 1;
	uint64_t x5820 = UINT64_MAX;

	t97 = ((x5817-(x5818>>x5819))/x5820);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x5829 = 7681333479119578LLU;
	int32_t x5830 = INT32_MAX;
	static volatile int8_t x5831 = 6;
	int64_t x5832 = INT64_MIN;
	volatile uint64_t t98 = 503250871279387LLU;

	t98 = ((x5829-(x5830>>x5831))/x5832);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5869 = INT8_MIN;
	static volatile int16_t x5870 = 1484;
	volatile int64_t x5872 = INT64_MIN;
	static int64_t t99 = 60197724074860510LL;

	t99 = ((x5869-(x5870>>x5871))/x5872);

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


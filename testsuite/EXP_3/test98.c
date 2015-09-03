#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x5 = 0U;
static int8_t x8 = 5;
volatile int32_t t0 = 0;
uint16_t x249 = UINT16_MAX;
volatile int32_t t3 = 104;
volatile uint64_t x290 = UINT64_MAX;
static int8_t x348 = 6;
int32_t t5 = -2215;
static int32_t x361 = -57196105;
int16_t x370 = INT16_MIN;
int32_t t7 = -1425;
static volatile int8_t x543 = -1;
int32_t x602 = INT32_MIN;
volatile uint64_t x603 = UINT64_MAX;
int16_t x673 = INT16_MIN;
static int32_t x701 = INT32_MIN;
uint8_t x704 = 7U;
volatile int32_t t13 = -318497;
int32_t t14 = 366;
int32_t t15 = 5;
uint8_t x904 = 0U;
int16_t x925 = INT16_MIN;
int8_t x927 = -1;
int32_t t18 = -24279299;
static uint32_t x1053 = 662342321U;
uint64_t x1054 = 120640514LLU;
uint64_t x1415 = UINT64_MAX;
int16_t x1417 = INT16_MAX;
static volatile uint64_t x1433 = 30455527252938428LLU;
static uint16_t x1435 = 3U;
static int16_t x1458 = 0;
volatile int64_t x1460 = -1LL;
static int32_t t26 = -1121;
int8_t x1801 = 3;
uint8_t x1804 = 12U;
static volatile int8_t x1899 = 2;
static int64_t x2081 = -873538201599LL;
static volatile int32_t x2082 = INT32_MAX;
static uint8_t x2083 = 1U;
static uint8_t x2295 = 17U;
int32_t t33 = 96;
uint8_t x2335 = 1U;
int32_t x2461 = INT32_MAX;
static uint8_t x2464 = 22U;
static volatile uint8_t x2480 = 2U;
uint16_t x2525 = 852U;
int8_t x2566 = 0;
static uint64_t x2749 = 153085894LLU;
int16_t x2750 = INT16_MIN;
uint8_t x2856 = 1U;
volatile int32_t x2921 = -23132760;
static volatile int16_t x2925 = INT16_MIN;
uint64_t x2961 = 1641275230790136LLU;
int32_t x3089 = 25360;
uint16_t x3339 = 22U;
uint64_t x3340 = UINT64_MAX;
volatile int32_t t51 = -3646;
uint8_t x3603 = 9U;
uint16_t x3659 = 2U;
int32_t x3878 = INT32_MIN;
volatile int32_t t57 = 0;
uint8_t x4188 = 3U;
int16_t x4206 = -1;
volatile int32_t t59 = 229521331;
int16_t x4297 = 93;
volatile int8_t x4299 = 6;
uint32_t x4327 = 4U;
static int32_t t61 = 0;
volatile int32_t x4342 = -1;
int64_t x4448 = -1LL;
static uint8_t x4669 = 63U;
int8_t x4672 = 1;
int32_t t65 = 1016783362;
int32_t t66 = -31155;
int64_t x4877 = INT64_MIN;
uint16_t x4878 = 3U;
volatile int32_t t71 = -851;
static uint16_t x5056 = 12U;
static int8_t x5061 = INT8_MAX;
uint32_t x5063 = 1U;
int32_t x5066 = 32017630;
int64_t x5306 = -26410LL;
int64_t x5385 = -364554LL;
static volatile uint8_t x5502 = 21U;
uint64_t x5707 = 1LLU;
static uint64_t x5894 = 545LLU;
int8_t x5895 = 1;
int16_t x5907 = 6;
int16_t x5957 = INT16_MAX;
uint64_t x5959 = UINT64_MAX;
static uint64_t x5982 = 413032298685LLU;
uint64_t x5984 = 5LLU;
static int32_t x6017 = INT32_MIN;
static int32_t x6019 = -1;
uint32_t x6020 = 6U;
uint64_t x6085 = 42978LLU;
int32_t t88 = -60;
static uint16_t x6305 = 358U;
uint8_t x6358 = UINT8_MAX;
volatile int32_t x6498 = -3528995;
volatile int32_t t92 = 32873156;
uint16_t x6565 = 70U;
static uint8_t x6567 = 1U;
int16_t x6734 = -1;
static int32_t x6872 = -1;
uint64_t x6950 = 912953184232524LLU;
volatile int16_t x7237 = 6796;
uint16_t x7239 = 31U;
int16_t x7240 = -5;


void f0(void) {
	static int32_t x6 = INT32_MIN;
	static uint32_t x7 = UINT32_MAX;

	t0 = ((x5==x6)>>(x7+x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x137 = 51U;
	int32_t x138 = -1;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = 5;
	volatile int32_t t1 = 26;

	t1 = ((x137==x138)>>(x139+x140));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	int8_t x247 = -50;
	uint8_t x248 = 81U;
	int32_t t2 = -219000;

	t2 = ((x245==x246)>>(x247+x248));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x250 = INT8_MAX;
	int32_t x251 = 1;
	int8_t x252 = -1;

	t3 = ((x249==x250)>>(x251+x252));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x289 = -3;
	static int32_t x291 = 3;
	static int64_t x292 = -1LL;
	int32_t t4 = 165693504;

	t4 = ((x289==x290)>>(x291+x292));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x345 = INT32_MIN;
	int8_t x346 = 47;
	static int8_t x347 = 0;

	t5 = ((x345==x346)>>(x347+x348));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x362 = INT8_MAX;
	volatile uint16_t x363 = 5U;
	int64_t x364 = 2LL;
	static int32_t t6 = -8445938;

	t6 = ((x361==x362)>>(x363+x364));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x371 = 2U;
	uint64_t x372 = UINT64_MAX;

	t7 = ((x369==x370)>>(x371+x372));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x537 = -9;
	static int64_t x538 = -18512242487LL;
	uint32_t x539 = 13U;
	uint8_t x540 = 7U;
	int32_t t8 = -5963700;

	t8 = ((x537==x538)>>(x539+x540));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x541 = 164U;
	static int8_t x542 = 2;
	int8_t x544 = 2;
	int32_t t9 = 6086;

	t9 = ((x541==x542)>>(x543+x544));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x545 = 5849277245576LLU;
	int8_t x546 = INT8_MIN;
	static uint8_t x547 = 2U;
	uint16_t x548 = 7U;
	volatile int32_t t10 = 885842;

	t10 = ((x545==x546)>>(x547+x548));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x601 = INT64_MIN;
	uint8_t x604 = 16U;
	int32_t t11 = -1;

	t11 = ((x601==x602)>>(x603+x604));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x674 = INT8_MAX;
	volatile int8_t x675 = INT8_MAX;
	static int64_t x676 = -116LL;
	volatile int32_t t12 = -5309;

	t12 = ((x673==x674)>>(x675+x676));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x702 = INT8_MIN;
	int32_t x703 = -1;

	t13 = ((x701==x702)>>(x703+x704));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x765 = INT16_MIN;
	int16_t x766 = 1;
	volatile int8_t x767 = -1;
	volatile uint8_t x768 = 7U;

	t14 = ((x765==x766)>>(x767+x768));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x785 = INT16_MIN;
	int32_t x786 = INT32_MAX;
	int32_t x787 = -1;
	volatile uint8_t x788 = 1U;

	t15 = ((x785==x786)>>(x787+x788));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x881 = 1724318834LLU;
	volatile int16_t x882 = -1;
	int8_t x883 = 1;
	int8_t x884 = -1;
	int32_t t16 = -330;

	t16 = ((x881==x882)>>(x883+x884));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x901 = -1492491;
	int8_t x902 = INT8_MIN;
	int8_t x903 = 25;
	volatile int32_t t17 = -25030101;

	t17 = ((x901==x902)>>(x903+x904));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x926 = INT64_MAX;
	uint32_t x928 = 6U;

	t18 = ((x925==x926)>>(x927+x928));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1055 = -1;
	uint16_t x1056 = 5U;
	int32_t t19 = 108408163;

	t19 = ((x1053==x1054)>>(x1055+x1056));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1081 = 29179438LL;
	uint16_t x1082 = 1750U;
	static uint64_t x1083 = UINT64_MAX;
	static uint64_t x1084 = 5LLU;
	int32_t t20 = -74265388;

	t20 = ((x1081==x1082)>>(x1083+x1084));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1157 = -1LL;
	int16_t x1158 = -1;
	uint8_t x1159 = 1U;
	uint32_t x1160 = UINT32_MAX;
	int32_t t21 = 0;

	t21 = ((x1157==x1158)>>(x1159+x1160));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1413 = INT16_MAX;
	uint8_t x1414 = 60U;
	uint16_t x1416 = 5U;
	int32_t t22 = -40;

	t22 = ((x1413==x1414)>>(x1415+x1416));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1418 = 1LL;
	int8_t x1419 = 1;
	int8_t x1420 = -1;
	int32_t t23 = -101428;

	t23 = ((x1417==x1418)>>(x1419+x1420));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1434 = 5U;
	static int32_t x1436 = 1;
	int32_t t24 = 448787073;

	t24 = ((x1433==x1434)>>(x1435+x1436));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1457 = -1;
	uint8_t x1459 = 16U;
	int32_t t25 = 223;

	t25 = ((x1457==x1458)>>(x1459+x1460));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1541 = 1550128U;
	int32_t x1542 = INT32_MAX;
	int32_t x1543 = -1;
	int8_t x1544 = 1;

	t26 = ((x1541==x1542)>>(x1543+x1544));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1802 = -1LL;
	uint64_t x1803 = UINT64_MAX;
	volatile int32_t t27 = 3474;

	t27 = ((x1801==x1802)>>(x1803+x1804));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1845 = INT16_MIN;
	int16_t x1846 = 6;
	static uint16_t x1847 = 1U;
	uint16_t x1848 = 6U;
	volatile int32_t t28 = 464547043;

	t28 = ((x1845==x1846)>>(x1847+x1848));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1897 = 22;
	static int32_t x1898 = INT32_MIN;
	static uint32_t x1900 = 10U;
	int32_t t29 = 837;

	t29 = ((x1897==x1898)>>(x1899+x1900));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1933 = UINT64_MAX;
	volatile uint16_t x1934 = 20474U;
	int8_t x1935 = 1;
	static volatile int8_t x1936 = -1;
	volatile int32_t t30 = 476682;

	t30 = ((x1933==x1934)>>(x1935+x1936));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2084 = 1U;
	volatile int32_t t31 = 14918841;

	t31 = ((x2081==x2082)>>(x2083+x2084));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2293 = 32LLU;
	int16_t x2294 = 19;
	int16_t x2296 = -1;
	int32_t t32 = 149284;

	t32 = ((x2293==x2294)>>(x2295+x2296));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2325 = 2952384045LLU;
	uint32_t x2326 = 35792U;
	int16_t x2327 = -1;
	uint8_t x2328 = 1U;

	t33 = ((x2325==x2326)>>(x2327+x2328));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2333 = INT8_MIN;
	uint16_t x2334 = UINT16_MAX;
	uint32_t x2336 = UINT32_MAX;
	int32_t t34 = 10189;

	t34 = ((x2333==x2334)>>(x2335+x2336));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2462 = INT32_MAX;
	int64_t x2463 = -1LL;
	int32_t t35 = -13492;

	t35 = ((x2461==x2462)>>(x2463+x2464));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2477 = 3460;
	int64_t x2478 = -20316945LL;
	int32_t x2479 = -1;
	int32_t t36 = 12834;

	t36 = ((x2477==x2478)>>(x2479+x2480));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2481 = UINT16_MAX;
	static uint8_t x2482 = 57U;
	uint16_t x2483 = 131U;
	int8_t x2484 = INT8_MIN;
	static volatile int32_t t37 = 1355710;

	t37 = ((x2481==x2482)>>(x2483+x2484));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2526 = 125U;
	static uint16_t x2527 = 2U;
	uint8_t x2528 = 0U;
	volatile int32_t t38 = 4;

	t38 = ((x2525==x2526)>>(x2527+x2528));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2565 = 133578U;
	volatile uint64_t x2567 = UINT64_MAX;
	static int8_t x2568 = 1;
	volatile int32_t t39 = 33500649;

	t39 = ((x2565==x2566)>>(x2567+x2568));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2751 = 6U;
	int16_t x2752 = -1;
	volatile int32_t t40 = -114425092;

	t40 = ((x2749==x2750)>>(x2751+x2752));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2753 = 10U;
	int32_t x2754 = -23;
	static uint16_t x2755 = 12U;
	int8_t x2756 = -1;
	int32_t t41 = -60484;

	t41 = ((x2753==x2754)>>(x2755+x2756));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2789 = 909356943804LLU;
	int64_t x2790 = 266606496868LL;
	uint64_t x2791 = 1LLU;
	uint8_t x2792 = 3U;
	volatile int32_t t42 = -3;

	t42 = ((x2789==x2790)>>(x2791+x2792));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2853 = INT8_MIN;
	static uint16_t x2854 = 28468U;
	static int64_t x2855 = -1LL;
	int32_t t43 = -2956909;

	t43 = ((x2853==x2854)>>(x2855+x2856));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2922 = INT64_MIN;
	int32_t x2923 = -1;
	uint32_t x2924 = 12U;
	volatile int32_t t44 = 460800;

	t44 = ((x2921==x2922)>>(x2923+x2924));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2926 = UINT32_MAX;
	int16_t x2927 = 1;
	volatile int8_t x2928 = -1;
	int32_t t45 = 4067;

	t45 = ((x2925==x2926)>>(x2927+x2928));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2953 = UINT64_MAX;
	static uint32_t x2954 = 1U;
	int8_t x2955 = -1;
	uint8_t x2956 = 7U;
	volatile int32_t t46 = 57317605;

	t46 = ((x2953==x2954)>>(x2955+x2956));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2962 = 85U;
	volatile int8_t x2963 = 21;
	uint64_t x2964 = UINT64_MAX;
	int32_t t47 = -6943;

	t47 = ((x2961==x2962)>>(x2963+x2964));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3090 = UINT64_MAX;
	volatile uint32_t x3091 = 7U;
	uint8_t x3092 = 16U;
	int32_t t48 = -13;

	t48 = ((x3089==x3090)>>(x3091+x3092));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x3337 = 8097U;
	volatile int8_t x3338 = INT8_MIN;
	int32_t t49 = 48743791;

	t49 = ((x3337==x3338)>>(x3339+x3340));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3505 = 0U;
	static int32_t x3506 = -1;
	volatile uint8_t x3507 = 1U;
	uint32_t x3508 = UINT32_MAX;
	volatile int32_t t50 = -630568;

	t50 = ((x3505==x3506)>>(x3507+x3508));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3589 = INT64_MIN;
	int32_t x3590 = INT32_MIN;
	volatile int32_t x3591 = 4;
	volatile int32_t x3592 = -1;

	t51 = ((x3589==x3590)>>(x3591+x3592));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3601 = UINT64_MAX;
	static int8_t x3602 = -1;
	volatile uint16_t x3604 = 5U;
	int32_t t52 = -282636;

	t52 = ((x3601==x3602)>>(x3603+x3604));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3629 = 992039U;
	int64_t x3630 = INT64_MIN;
	static int16_t x3631 = 25;
	uint8_t x3632 = 0U;
	int32_t t53 = -2561583;

	t53 = ((x3629==x3630)>>(x3631+x3632));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3657 = UINT64_MAX;
	static volatile int16_t x3658 = -154;
	int64_t x3660 = -1LL;
	static int32_t t54 = -22686;

	t54 = ((x3657==x3658)>>(x3659+x3660));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3701 = 1U;
	int64_t x3702 = INT64_MAX;
	uint64_t x3703 = 2LLU;
	int8_t x3704 = 1;
	static volatile int32_t t55 = 16;

	t55 = ((x3701==x3702)>>(x3703+x3704));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3877 = 38976;
	uint16_t x3879 = 0U;
	int16_t x3880 = 0;
	volatile int32_t t56 = -19953243;

	t56 = ((x3877==x3878)>>(x3879+x3880));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4009 = 3149U;
	volatile int8_t x4010 = INT8_MIN;
	uint16_t x4011 = 8U;
	int16_t x4012 = -1;

	t57 = ((x4009==x4010)>>(x4011+x4012));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4185 = INT32_MAX;
	static int16_t x4186 = INT16_MIN;
	int8_t x4187 = -1;
	int32_t t58 = -290753;

	t58 = ((x4185==x4186)>>(x4187+x4188));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4205 = 110U;
	int16_t x4207 = -1;
	int8_t x4208 = 1;

	t59 = ((x4205==x4206)>>(x4207+x4208));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4298 = 46;
	int8_t x4300 = -1;
	int32_t t60 = 1;

	t60 = ((x4297==x4298)>>(x4299+x4300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4325 = INT8_MIN;
	uint32_t x4326 = 219374257U;
	static uint16_t x4328 = 15U;

	t61 = ((x4325==x4326)>>(x4327+x4328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x4341 = INT32_MIN;
	static uint32_t x4343 = UINT32_MAX;
	uint16_t x4344 = 1U;
	static int32_t t62 = 952804770;

	t62 = ((x4341==x4342)>>(x4343+x4344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x4445 = UINT16_MAX;
	int64_t x4446 = INT64_MIN;
	uint8_t x4447 = 2U;
	volatile int32_t t63 = -42293024;

	t63 = ((x4445==x4446)>>(x4447+x4448));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4477 = -1;
	volatile uint16_t x4478 = UINT16_MAX;
	volatile int64_t x4479 = -1LL;
	int8_t x4480 = 8;
	static volatile int32_t t64 = 983479817;

	t64 = ((x4477==x4478)>>(x4479+x4480));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x4670 = -2279;
	int32_t x4671 = -1;

	t65 = ((x4669==x4670)>>(x4671+x4672));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4773 = -1;
	static uint16_t x4774 = UINT16_MAX;
	int32_t x4775 = -1;
	uint16_t x4776 = 26U;

	t66 = ((x4773==x4774)>>(x4775+x4776));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4829 = -7518206099LL;
	volatile int32_t x4830 = INT32_MAX;
	int8_t x4831 = -5;
	uint64_t x4832 = 16LLU;
	int32_t t67 = -3667;

	t67 = ((x4829==x4830)>>(x4831+x4832));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4865 = -1;
	static volatile uint64_t x4866 = 7099LLU;
	volatile uint16_t x4867 = 2U;
	static uint64_t x4868 = UINT64_MAX;
	volatile int32_t t68 = -5750;

	t68 = ((x4865==x4866)>>(x4867+x4868));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4879 = 2U;
	int16_t x4880 = -1;
	volatile int32_t t69 = 2278633;

	t69 = ((x4877==x4878)>>(x4879+x4880));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4885 = INT64_MAX;
	uint64_t x4886 = UINT64_MAX;
	int32_t x4887 = 3;
	int8_t x4888 = -1;
	int32_t t70 = -244366;

	t70 = ((x4885==x4886)>>(x4887+x4888));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4993 = UINT32_MAX;
	uint16_t x4994 = 2U;
	static volatile int16_t x4995 = 0;
	uint32_t x4996 = 25U;

	t71 = ((x4993==x4994)>>(x4995+x4996));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x5053 = UINT32_MAX;
	int16_t x5054 = -1;
	static int64_t x5055 = -1LL;
	volatile int32_t t72 = -1401;

	t72 = ((x5053==x5054)>>(x5055+x5056));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5062 = INT8_MIN;
	volatile int32_t x5064 = 1;
	volatile int32_t t73 = -14244;

	t73 = ((x5061==x5062)>>(x5063+x5064));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5065 = -1;
	uint64_t x5067 = 5LLU;
	volatile int32_t x5068 = -1;
	volatile int32_t t74 = -332;

	t74 = ((x5065==x5066)>>(x5067+x5068));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5305 = INT16_MAX;
	int32_t x5307 = -1;
	int16_t x5308 = 28;
	volatile int32_t t75 = 39;

	t75 = ((x5305==x5306)>>(x5307+x5308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x5386 = -2881560LL;
	static int8_t x5387 = 18;
	int8_t x5388 = 0;
	volatile int32_t t76 = 489091748;

	t76 = ((x5385==x5386)>>(x5387+x5388));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5429 = -7;
	uint8_t x5430 = UINT8_MAX;
	int32_t x5431 = -1;
	uint8_t x5432 = 3U;
	int32_t t77 = 981708000;

	t77 = ((x5429==x5430)>>(x5431+x5432));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x5501 = UINT16_MAX;
	uint16_t x5503 = 1U;
	int16_t x5504 = -1;
	static volatile int32_t t78 = -158430;

	t78 = ((x5501==x5502)>>(x5503+x5504));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x5545 = 8;
	static int8_t x5546 = -1;
	int16_t x5547 = 0;
	static uint64_t x5548 = 0LLU;
	volatile int32_t t79 = 42524978;

	t79 = ((x5545==x5546)>>(x5547+x5548));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5705 = INT16_MAX;
	volatile int32_t x5706 = -1;
	uint64_t x5708 = UINT64_MAX;
	int32_t t80 = -65496;

	t80 = ((x5705==x5706)>>(x5707+x5708));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5773 = 3301U;
	uint16_t x5774 = 24241U;
	int16_t x5775 = 1;
	int8_t x5776 = -1;
	volatile int32_t t81 = -1367778;

	t81 = ((x5773==x5774)>>(x5775+x5776));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5873 = INT16_MIN;
	static int32_t x5874 = INT32_MAX;
	volatile uint8_t x5875 = 2U;
	int32_t x5876 = -1;
	volatile int32_t t82 = -8765422;

	t82 = ((x5873==x5874)>>(x5875+x5876));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5893 = INT16_MIN;
	uint64_t x5896 = UINT64_MAX;
	int32_t t83 = -14152;

	t83 = ((x5893==x5894)>>(x5895+x5896));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5905 = UINT32_MAX;
	uint16_t x5906 = 124U;
	static int16_t x5908 = 0;
	int32_t t84 = 1;

	t84 = ((x5905==x5906)>>(x5907+x5908));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5958 = INT8_MAX;
	uint8_t x5960 = 7U;
	int32_t t85 = -1;

	t85 = ((x5957==x5958)>>(x5959+x5960));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5981 = UINT32_MAX;
	uint16_t x5983 = 1U;
	int32_t t86 = -62348;

	t86 = ((x5981==x5982)>>(x5983+x5984));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x6018 = 2696698LL;
	static int32_t t87 = -7638;

	t87 = ((x6017==x6018)>>(x6019+x6020));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6086 = -1;
	static volatile uint8_t x6087 = 1U;
	int32_t x6088 = 7;

	t88 = ((x6085==x6086)>>(x6087+x6088));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x6306 = 67343316;
	int64_t x6307 = 3LL;
	uint64_t x6308 = UINT64_MAX;
	static volatile int32_t t89 = 21036660;

	t89 = ((x6305==x6306)>>(x6307+x6308));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x6357 = INT32_MIN;
	int16_t x6359 = 15;
	int8_t x6360 = 1;
	int32_t t90 = 15992011;

	t90 = ((x6357==x6358)>>(x6359+x6360));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x6477 = -1;
	volatile int32_t x6478 = INT32_MAX;
	uint8_t x6479 = 1U;
	volatile uint8_t x6480 = 30U;
	int32_t t91 = 2;

	t91 = ((x6477==x6478)>>(x6479+x6480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6497 = 0;
	int8_t x6499 = -1;
	uint32_t x6500 = 18U;

	t92 = ((x6497==x6498)>>(x6499+x6500));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6513 = INT64_MIN;
	uint8_t x6514 = UINT8_MAX;
	uint16_t x6515 = 12U;
	uint32_t x6516 = 0U;
	static volatile int32_t t93 = -324;

	t93 = ((x6513==x6514)>>(x6515+x6516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6566 = UINT32_MAX;
	int16_t x6568 = -1;
	volatile int32_t t94 = -5487128;

	t94 = ((x6565==x6566)>>(x6567+x6568));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6733 = 807781056;
	int16_t x6735 = 0;
	uint8_t x6736 = 22U;
	int32_t t95 = 244565137;

	t95 = ((x6733==x6734)>>(x6735+x6736));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6869 = -705001174478369014LL;
	static uint64_t x6870 = 1374678743949231LLU;
	static int8_t x6871 = 10;
	static volatile int32_t t96 = -935187587;

	t96 = ((x6869==x6870)>>(x6871+x6872));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6949 = INT8_MIN;
	int16_t x6951 = -1;
	volatile uint8_t x6952 = 3U;
	int32_t t97 = 865612495;

	t97 = ((x6949==x6950)>>(x6951+x6952));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x7077 = 0LLU;
	static volatile int16_t x7078 = INT16_MIN;
	uint8_t x7079 = 4U;
	int64_t x7080 = -1LL;
	volatile int32_t t98 = 21;

	t98 = ((x7077==x7078)>>(x7079+x7080));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x7238 = 7U;
	volatile int32_t t99 = 7979;

	t99 = ((x7237==x7238)>>(x7239+x7240));

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


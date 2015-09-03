#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x144 = 0U;
int8_t x381 = INT8_MIN;
static int8_t x498 = 19;
static int8_t x500 = 5;
int8_t x594 = -1;
int8_t x596 = 6;
uint64_t t8 = 874965LLU;
volatile int64_t t9 = 12LL;
static uint8_t x961 = UINT8_MAX;
static uint64_t x1150 = 7136LLU;
volatile int32_t t13 = 0;
volatile int32_t x1242 = INT32_MIN;
uint8_t x1436 = 11U;
uint64_t x1453 = 44133420811463424LLU;
static volatile uint32_t t18 = 10U;
static volatile uint64_t x1733 = 408807LLU;
int8_t x1734 = -47;
static volatile uint32_t t22 = 745U;
volatile uint64_t x1862 = 104422082467642466LLU;
volatile uint64_t t23 = 53LLU;
volatile uint16_t x1923 = 598U;
int64_t x2151 = 6017744323069LL;
volatile int64_t t27 = 1020696759118419304LL;
volatile uint32_t x2165 = 26123U;
uint32_t x2329 = 1046313262U;
int64_t x2545 = 49537356209663LL;
static int16_t x2562 = -3091;
static volatile int64_t t35 = -1LL;
int32_t x2829 = INT32_MIN;
volatile int32_t t37 = 2036;
int8_t x2864 = 0;
volatile uint64_t t38 = UINT64_MAX;
uint64_t x3132 = 0LLU;
int16_t x3173 = -801;
uint64_t x3175 = 420630LLU;
int8_t x3441 = 2;
uint64_t x3444 = 59LLU;
volatile uint8_t x3572 = 3U;
static volatile int32_t t49 = 364816;
int64_t x3819 = 5689589205LL;
int32_t x3856 = 0;
static uint32_t x3874 = 911U;
static int32_t x3965 = -962331;
volatile uint32_t x3987 = 165525307U;
volatile uint64_t x3999 = 1322482211LLU;
static uint64_t t58 = 835296174479LLU;
static int16_t x4049 = -1;
static volatile int32_t x4229 = INT32_MIN;
int32_t x4385 = INT32_MAX;
uint64_t x4441 = 947433LLU;
int8_t x4442 = -1;
uint8_t x4443 = 83U;
static volatile int32_t x4452 = 12;
int64_t x4601 = INT64_MIN;
volatile uint16_t x4604 = 24U;
uint16_t x4695 = 816U;
int16_t x4804 = 13;
static uint8_t x4870 = UINT8_MAX;
uint32_t x5073 = 37648U;
uint8_t x5180 = 63U;
volatile int32_t x5286 = INT32_MIN;
volatile int8_t x5384 = 15;
static int64_t t79 = INT64_MAX;
uint32_t t81 = 494916312U;
volatile int16_t x5557 = INT16_MIN;
static uint16_t x5558 = UINT16_MAX;
int16_t x5559 = INT16_MAX;
volatile int16_t x5642 = INT16_MIN;
uint8_t x5644 = 0U;
int32_t x5722 = -1;
int16_t x5723 = 0;
int32_t x5785 = INT32_MAX;
uint64_t x5787 = 6354665659LLU;
volatile int64_t x5998 = INT64_MIN;
static volatile int32_t t91 = 927565;
int8_t x6013 = INT8_MIN;
int64_t x6014 = INT64_MAX;
volatile uint8_t x6016 = 0U;
uint8_t x6124 = 5U;
uint32_t x6141 = 20U;
volatile uint64_t t95 = 85327732891127LLU;
uint32_t x6150 = UINT32_MAX;
volatile int64_t x6189 = 120131458LL;
int32_t t97 = -90;
volatile int32_t t98 = -2;
volatile uint64_t t99 = 126747104LLU;


void f0(void) {
	volatile int8_t x141 = INT8_MIN;
	int32_t x142 = -999129144;
	int16_t x143 = INT16_MAX;
	int32_t t0 = -131128492;

	t0 = (((x141==x142)+x143)<<x144);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = 60619;
	int8_t x384 = 1;
	int32_t t1 = 7886;

	t1 = (((x381==x382)+x383)<<x384);

	if (t1 != 121238) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x413 = 9U;
	int64_t x414 = INT64_MAX;
	volatile uint32_t x415 = 867946011U;
	uint8_t x416 = 1U;
	uint32_t t2 = 113702576U;

	t2 = (((x413==x414)+x415)<<x416);

	if (t2 != 1735892022U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x425 = 31313063291219360LLU;
	uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 4845U;
	static uint8_t x428 = 0U;
	int32_t t3 = 133776955;

	t3 = (((x425==x426)+x427)<<x428);

	if (t3 != 4845) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x497 = INT16_MIN;
	uint32_t x499 = 14U;
	static uint32_t t4 = 15068947U;

	t4 = (((x497==x498)+x499)<<x500);

	if (t4 != 448U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x593 = INT64_MIN;
	static int8_t x595 = 3;
	int32_t t5 = 18;

	t5 = (((x593==x594)+x595)<<x596);

	if (t5 != 192) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x693 = INT64_MAX;
	static volatile int8_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	uint8_t x696 = 11U;
	int32_t t6 = -28736415;

	t6 = (((x693==x694)+x695)<<x696);

	if (t6 != 522240) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x733 = -13520593004078LL;
	static int64_t x734 = 26609319177LL;
	static int8_t x735 = INT8_MAX;
	uint8_t x736 = 5U;
	volatile int32_t t7 = -5910625;

	t7 = (((x733==x734)+x735)<<x736);

	if (t7 != 4064) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x813 = INT32_MAX;
	int64_t x814 = 716472LL;
	uint64_t x815 = UINT64_MAX;
	int8_t x816 = 1;

	t8 = (((x813==x814)+x815)<<x816);

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x881 = -4LL;
	uint16_t x882 = 7821U;
	int64_t x883 = 3269072497901589LL;
	uint8_t x884 = 10U;

	t9 = (((x881==x882)+x883)<<x884);

	if (t9 != 3347530237851227136LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x937 = UINT64_MAX;
	int64_t x938 = INT64_MIN;
	int16_t x939 = INT16_MAX;
	volatile uint8_t x940 = 3U;
	int32_t t10 = -50063;

	t10 = (((x937==x938)+x939)<<x940);

	if (t10 != 262136) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x962 = INT8_MIN;
	uint8_t x963 = 1U;
	static uint8_t x964 = 17U;
	int32_t t11 = 352654784;

	t11 = (((x961==x962)+x963)<<x964);

	if (t11 != 131072) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x1017 = INT8_MAX;
	int16_t x1018 = -167;
	uint16_t x1019 = 304U;
	int8_t x1020 = 0;
	int32_t t12 = -15761888;

	t12 = (((x1017==x1018)+x1019)<<x1020);

	if (t12 != 304) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1149 = INT64_MIN;
	static int16_t x1151 = 11;
	volatile uint8_t x1152 = 1U;

	t13 = (((x1149==x1150)+x1151)<<x1152);

	if (t13 != 22) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1241 = INT8_MAX;
	uint8_t x1243 = UINT8_MAX;
	uint16_t x1244 = 4U;
	volatile int32_t t14 = 2890;

	t14 = (((x1241==x1242)+x1243)<<x1244);

	if (t14 != 4080) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1341 = INT16_MAX;
	int32_t x1342 = -1;
	static uint16_t x1343 = 22U;
	uint8_t x1344 = 23U;
	int32_t t15 = -3311369;

	t15 = (((x1341==x1342)+x1343)<<x1344);

	if (t15 != 184549376) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1433 = INT8_MAX;
	volatile int16_t x1434 = -201;
	uint32_t x1435 = 2103447U;
	volatile uint32_t t16 = 159425202U;

	t16 = (((x1433==x1434)+x1435)<<x1436);

	if (t16 != 12892160U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1437 = UINT16_MAX;
	volatile uint8_t x1438 = 122U;
	volatile int16_t x1439 = INT16_MAX;
	volatile int32_t x1440 = 1;
	int32_t t17 = 9;

	t17 = (((x1437==x1438)+x1439)<<x1440);

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1454 = INT16_MIN;
	uint32_t x1455 = 3576U;
	volatile int8_t x1456 = 29;

	t18 = (((x1453==x1454)+x1455)<<x1456);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1457 = INT64_MIN;
	static volatile uint32_t x1458 = 83941U;
	int8_t x1459 = INT8_MAX;
	static uint16_t x1460 = 20U;
	volatile int32_t t19 = 8347419;

	t19 = (((x1457==x1458)+x1459)<<x1460);

	if (t19 != 133169152) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1557 = INT16_MIN;
	int8_t x1558 = INT8_MAX;
	int8_t x1559 = 31;
	uint16_t x1560 = 3U;
	volatile int32_t t20 = 23156917;

	t20 = (((x1557==x1558)+x1559)<<x1560);

	if (t20 != 248) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1735 = INT8_MAX;
	static uint32_t x1736 = 1U;
	volatile int32_t t21 = 0;

	t21 = (((x1733==x1734)+x1735)<<x1736);

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1853 = INT8_MAX;
	volatile int16_t x1854 = INT16_MAX;
	static uint32_t x1855 = 62897U;
	static volatile uint8_t x1856 = 1U;

	t22 = (((x1853==x1854)+x1855)<<x1856);

	if (t22 != 125794U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1861 = 2291U;
	static volatile uint64_t x1863 = UINT64_MAX;
	int8_t x1864 = 6;

	t23 = (((x1861==x1862)+x1863)<<x1864);

	if (t23 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1921 = 1868U;
	uint32_t x1922 = 3U;
	uint16_t x1924 = 5U;
	volatile int32_t t24 = -107;

	t24 = (((x1921==x1922)+x1923)<<x1924);

	if (t24 != 19136) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1937 = -331200054850708548LL;
	volatile int32_t x1938 = INT32_MAX;
	static int16_t x1939 = 4405;
	uint16_t x1940 = 11U;
	int32_t t25 = 224512184;

	t25 = (((x1937==x1938)+x1939)<<x1940);

	if (t25 != 9021440) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1997 = 150169573U;
	volatile int8_t x1998 = 0;
	static volatile uint32_t x1999 = 134U;
	volatile int8_t x2000 = 1;
	volatile uint32_t t26 = 3U;

	t26 = (((x1997==x1998)+x1999)<<x2000);

	if (t26 != 268U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x2149 = INT8_MAX;
	uint16_t x2150 = UINT16_MAX;
	static uint8_t x2152 = 13U;

	t27 = (((x2149==x2150)+x2151)<<x2152);

	if (t27 != 49297361494581248LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2166 = UINT32_MAX;
	uint32_t x2167 = 422131U;
	uint8_t x2168 = 1U;
	volatile uint32_t t28 = 5065211U;

	t28 = (((x2165==x2166)+x2167)<<x2168);

	if (t28 != 844262U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2209 = UINT64_MAX;
	int8_t x2210 = -1;
	int64_t x2211 = -1LL;
	volatile uint8_t x2212 = 0U;
	volatile int64_t t29 = -1019066460LL;

	t29 = (((x2209==x2210)+x2211)<<x2212);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2330 = 24U;
	volatile uint64_t x2331 = 15784LLU;
	uint8_t x2332 = 1U;
	uint64_t t30 = 396892307728157LLU;

	t30 = (((x2329==x2330)+x2331)<<x2332);

	if (t30 != 31568LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2333 = -1;
	int32_t x2334 = -1;
	int32_t x2335 = -1;
	uint16_t x2336 = 0U;
	volatile int32_t t31 = 2037224;

	t31 = (((x2333==x2334)+x2335)<<x2336);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2525 = 3926U;
	int64_t x2526 = -1315103042436687LL;
	int8_t x2527 = INT8_MAX;
	static uint8_t x2528 = 1U;
	static volatile int32_t t32 = -473201109;

	t32 = (((x2525==x2526)+x2527)<<x2528);

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2546 = INT16_MIN;
	uint64_t x2547 = 7762954518293934LLU;
	volatile uint32_t x2548 = 42U;
	uint64_t t33 = 3LLU;

	t33 = (((x2545==x2546)+x2547)<<x2548);

	if (t33 != 16264389414434635776LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2561 = INT8_MIN;
	uint16_t x2563 = 29U;
	volatile uint8_t x2564 = 1U;
	volatile int32_t t34 = 1;

	t34 = (((x2561==x2562)+x2563)<<x2564);

	if (t34 != 58) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2645 = INT16_MIN;
	int16_t x2646 = -1;
	volatile int64_t x2647 = 1349LL;
	static int8_t x2648 = 0;

	t35 = (((x2645==x2646)+x2647)<<x2648);

	if (t35 != 1349LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2653 = INT8_MIN;
	static int8_t x2654 = -1;
	uint32_t x2655 = 22604406U;
	int8_t x2656 = 2;
	uint32_t t36 = 1045U;

	t36 = (((x2653==x2654)+x2655)<<x2656);

	if (t36 != 90417624U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2830 = INT16_MIN;
	static uint16_t x2831 = 19586U;
	uint8_t x2832 = 14U;

	t37 = (((x2829==x2830)+x2831)<<x2832);

	if (t37 != 320897024) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2861 = INT64_MAX;
	volatile int32_t x2862 = -1;
	uint64_t x2863 = UINT64_MAX;

	t38 = (((x2861==x2862)+x2863)<<x2864);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2893 = INT32_MAX;
	uint16_t x2894 = UINT16_MAX;
	uint32_t x2895 = 7537U;
	uint8_t x2896 = 0U;
	uint32_t t39 = 2U;

	t39 = (((x2893==x2894)+x2895)<<x2896);

	if (t39 != 7537U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2905 = 15U;
	int8_t x2906 = -15;
	uint32_t x2907 = 46549122U;
	static int8_t x2908 = 1;
	volatile uint32_t t40 = 182544U;

	t40 = (((x2905==x2906)+x2907)<<x2908);

	if (t40 != 93098244U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2925 = -1LL;
	int8_t x2926 = INT8_MIN;
	uint8_t x2927 = 39U;
	volatile uint16_t x2928 = 4U;
	int32_t t41 = -11;

	t41 = (((x2925==x2926)+x2927)<<x2928);

	if (t41 != 624) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2941 = UINT8_MAX;
	static uint16_t x2942 = 108U;
	uint32_t x2943 = 6U;
	static int8_t x2944 = 4;
	volatile uint32_t t42 = 660913U;

	t42 = (((x2941==x2942)+x2943)<<x2944);

	if (t42 != 96U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2997 = 28U;
	int32_t x2998 = INT32_MIN;
	uint64_t x2999 = 6922269490LLU;
	static int8_t x3000 = 3;
	uint64_t t43 = 12299895830LLU;

	t43 = (((x2997==x2998)+x2999)<<x3000);

	if (t43 != 55378155920LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3129 = INT64_MIN;
	static int8_t x3130 = 0;
	static int8_t x3131 = 0;
	int32_t t44 = 35623;

	t44 = (((x3129==x3130)+x3131)<<x3132);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3174 = -1LL;
	static uint8_t x3176 = 14U;
	static uint64_t t45 = 953405635788286028LLU;

	t45 = (((x3173==x3174)+x3175)<<x3176);

	if (t45 != 6891601920LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x3313 = UINT16_MAX;
	uint64_t x3314 = UINT64_MAX;
	uint8_t x3315 = 93U;
	int8_t x3316 = 0;
	int32_t t46 = 481216866;

	t46 = (((x3313==x3314)+x3315)<<x3316);

	if (t46 != 93) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3442 = INT16_MIN;
	uint64_t x3443 = 29453405LLU;
	uint64_t t47 = 0LLU;

	t47 = (((x3441==x3442)+x3443)<<x3444);

	if (t47 != 16717361816799281152LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3517 = INT32_MIN;
	static volatile int16_t x3518 = -1;
	volatile uint32_t x3519 = 1406496U;
	volatile uint8_t x3520 = 0U;
	volatile uint32_t t48 = 1141U;

	t48 = (((x3517==x3518)+x3519)<<x3520);

	if (t48 != 1406496U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3569 = 35U;
	int32_t x3570 = 1317380;
	uint16_t x3571 = UINT16_MAX;

	t49 = (((x3569==x3570)+x3571)<<x3572);

	if (t49 != 524280) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3637 = INT64_MIN;
	int32_t x3638 = -1;
	volatile int16_t x3639 = 3382;
	int8_t x3640 = 0;
	int32_t t50 = -196;

	t50 = (((x3637==x3638)+x3639)<<x3640);

	if (t50 != 3382) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3801 = UINT64_MAX;
	int16_t x3802 = 278;
	int16_t x3803 = 0;
	int32_t x3804 = 6;
	volatile int32_t t51 = -66883500;

	t51 = (((x3801==x3802)+x3803)<<x3804);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3817 = 62;
	int64_t x3818 = INT64_MIN;
	uint32_t x3820 = 23U;
	static volatile int64_t t52 = -75024LL;

	t52 = (((x3817==x3818)+x3819)<<x3820);

	if (t52 != 47727733521776640LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3853 = INT32_MAX;
	int16_t x3854 = 655;
	uint8_t x3855 = 59U;
	static int32_t t53 = -46010008;

	t53 = (((x3853==x3854)+x3855)<<x3856);

	if (t53 != 59) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3873 = -1LL;
	static uint32_t x3875 = 13U;
	int8_t x3876 = 0;
	static uint32_t t54 = 1422873827U;

	t54 = (((x3873==x3874)+x3875)<<x3876);

	if (t54 != 13U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3966 = -1;
	int8_t x3967 = 25;
	static volatile int8_t x3968 = 0;
	static volatile int32_t t55 = -1;

	t55 = (((x3965==x3966)+x3967)<<x3968);

	if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3985 = INT8_MIN;
	int8_t x3986 = 0;
	uint32_t x3988 = 11U;
	static uint32_t t56 = 10817804U;

	t56 = (((x3985==x3986)+x3987)<<x3988);

	if (t56 != 3988379648U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3997 = -1LL;
	int64_t x3998 = -1LL;
	volatile int8_t x4000 = 2;
	uint64_t t57 = 26859491734996326LLU;

	t57 = (((x3997==x3998)+x3999)<<x4000);

	if (t57 != 5289928848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4017 = INT8_MAX;
	uint64_t x4018 = UINT64_MAX;
	uint64_t x4019 = 581546884390696904LLU;
	int8_t x4020 = 5;

	t58 = (((x4017==x4018)+x4019)<<x4020);

	if (t58 != 162756226792749312LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4050 = -36879604204075843LL;
	uint16_t x4051 = 12861U;
	static volatile uint8_t x4052 = 14U;
	int32_t t59 = -3;

	t59 = (((x4049==x4050)+x4051)<<x4052);

	if (t59 != 210714624) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4145 = -5;
	uint8_t x4146 = UINT8_MAX;
	uint64_t x4147 = UINT64_MAX;
	uint32_t x4148 = 49U;
	volatile uint64_t t60 = 26966743LLU;

	t60 = (((x4145==x4146)+x4147)<<x4148);

	if (t60 != 18446181123756130304LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4209 = INT64_MIN;
	uint32_t x4210 = 12260U;
	uint32_t x4211 = 4134U;
	static int8_t x4212 = 7;
	volatile uint32_t t61 = 361117U;

	t61 = (((x4209==x4210)+x4211)<<x4212);

	if (t61 != 529152U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4230 = 1210910LLU;
	uint32_t x4231 = 11U;
	int8_t x4232 = 12;
	volatile uint32_t t62 = 3U;

	t62 = (((x4229==x4230)+x4231)<<x4232);

	if (t62 != 45056U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4293 = INT8_MIN;
	static uint8_t x4294 = 9U;
	int16_t x4295 = 11;
	static uint16_t x4296 = 12U;
	static volatile int32_t t63 = 28496471;

	t63 = (((x4293==x4294)+x4295)<<x4296);

	if (t63 != 45056) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4386 = 87467057857LLU;
	volatile int8_t x4387 = 49;
	uint8_t x4388 = 3U;
	volatile int32_t t64 = 0;

	t64 = (((x4385==x4386)+x4387)<<x4388);

	if (t64 != 392) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4444 = 0U;
	int32_t t65 = -1;

	t65 = (((x4441==x4442)+x4443)<<x4444);

	if (t65 != 83) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x4449 = UINT8_MAX;
	static volatile uint8_t x4450 = 7U;
	uint64_t x4451 = 13318LLU;
	volatile uint64_t t66 = 11541624054850327LLU;

	t66 = (((x4449==x4450)+x4451)<<x4452);

	if (t66 != 54550528LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4473 = UINT8_MAX;
	int8_t x4474 = INT8_MIN;
	static uint64_t x4475 = UINT64_MAX;
	uint8_t x4476 = 3U;
	uint64_t t67 = 3075LLU;

	t67 = (((x4473==x4474)+x4475)<<x4476);

	if (t67 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x4602 = INT16_MAX;
	int8_t x4603 = INT8_MAX;
	static volatile int32_t t68 = 4824;

	t68 = (((x4601==x4602)+x4603)<<x4604);

	if (t68 != 2130706432) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4693 = INT16_MAX;
	int8_t x4694 = 1;
	uint8_t x4696 = 0U;
	volatile int32_t t69 = 346;

	t69 = (((x4693==x4694)+x4695)<<x4696);

	if (t69 != 816) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4801 = INT32_MAX;
	int8_t x4802 = -22;
	static int16_t x4803 = INT16_MAX;
	volatile int32_t t70 = -2641;

	t70 = (((x4801==x4802)+x4803)<<x4804);

	if (t70 != 268427264) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4869 = 4491U;
	volatile int8_t x4871 = 0;
	uint8_t x4872 = 4U;
	static volatile int32_t t71 = 0;

	t71 = (((x4869==x4870)+x4871)<<x4872);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x4889 = 8;
	static int32_t x4890 = -1;
	uint64_t x4891 = 124816LLU;
	uint32_t x4892 = 0U;
	volatile uint64_t t72 = 0LLU;

	t72 = (((x4889==x4890)+x4891)<<x4892);

	if (t72 != 124816LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x5074 = INT16_MIN;
	int64_t x5075 = 320615LL;
	static int16_t x5076 = 0;
	static volatile int64_t t73 = -44495LL;

	t73 = (((x5073==x5074)+x5075)<<x5076);

	if (t73 != 320615LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x5177 = UINT8_MAX;
	uint16_t x5178 = UINT16_MAX;
	uint64_t x5179 = 4843250LLU;
	uint64_t t74 = 1953748LLU;

	t74 = (((x5177==x5178)+x5179)<<x5180);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5201 = 4695414895670927610LLU;
	uint64_t x5202 = UINT64_MAX;
	uint8_t x5203 = UINT8_MAX;
	int8_t x5204 = 4;
	int32_t t75 = -3138800;

	t75 = (((x5201==x5202)+x5203)<<x5204);

	if (t75 != 4080) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5245 = -2LL;
	volatile int32_t x5246 = -196509;
	volatile int16_t x5247 = 13594;
	static uint8_t x5248 = 7U;
	volatile int32_t t76 = -2146;

	t76 = (((x5245==x5246)+x5247)<<x5248);

	if (t76 != 1740032) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x5285 = INT64_MIN;
	uint64_t x5287 = 100446675LLU;
	uint8_t x5288 = 13U;
	static uint64_t t77 = 13LLU;

	t77 = (((x5285==x5286)+x5287)<<x5288);

	if (t77 != 822859161600LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5381 = -1;
	static int8_t x5382 = INT8_MAX;
	uint32_t x5383 = UINT32_MAX;
	uint32_t t78 = 141U;

	t78 = (((x5381==x5382)+x5383)<<x5384);

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x5449 = UINT16_MAX;
	int16_t x5450 = -28;
	volatile int64_t x5451 = INT64_MAX;
	static volatile int16_t x5452 = 0;

	t79 = (((x5449==x5450)+x5451)<<x5452);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5469 = -1;
	uint64_t x5470 = UINT64_MAX;
	int8_t x5471 = -1;
	static int16_t x5472 = 1;
	int32_t t80 = -5;

	t80 = (((x5469==x5470)+x5471)<<x5472);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x5521 = INT64_MIN;
	int32_t x5522 = 0;
	uint32_t x5523 = 1407866355U;
	int8_t x5524 = 0;

	t81 = (((x5521==x5522)+x5523)<<x5524);

	if (t81 != 1407866355U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5560 = 0;
	int32_t t82 = 882288517;

	t82 = (((x5557==x5558)+x5559)<<x5560);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5621 = UINT8_MAX;
	int32_t x5622 = -5636;
	uint16_t x5623 = 125U;
	int16_t x5624 = 0;
	static volatile int32_t t83 = -29425;

	t83 = (((x5621==x5622)+x5623)<<x5624);

	if (t83 != 125) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x5641 = INT16_MAX;
	uint64_t x5643 = 1756246LLU;
	volatile uint64_t t84 = 138660969206498724LLU;

	t84 = (((x5641==x5642)+x5643)<<x5644);

	if (t84 != 1756246LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5721 = 265U;
	uint8_t x5724 = 12U;
	static int32_t t85 = 78087;

	t85 = (((x5721==x5722)+x5723)<<x5724);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5786 = 286991465484766681LL;
	uint8_t x5788 = 1U;
	uint64_t t86 = 579892086466388LLU;

	t86 = (((x5785==x5786)+x5787)<<x5788);

	if (t86 != 12709331318LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5813 = INT32_MIN;
	int32_t x5814 = -1;
	uint8_t x5815 = 64U;
	volatile uint8_t x5816 = 4U;
	volatile int32_t t87 = 2756044;

	t87 = (((x5813==x5814)+x5815)<<x5816);

	if (t87 != 1024) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5821 = UINT32_MAX;
	uint64_t x5822 = 5516892LLU;
	int8_t x5823 = INT8_MAX;
	int16_t x5824 = 0;
	volatile int32_t t88 = -10113;

	t88 = (((x5821==x5822)+x5823)<<x5824);

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5877 = 3U;
	int8_t x5878 = INT8_MIN;
	uint32_t x5879 = 2806122U;
	uint8_t x5880 = 16U;
	volatile uint32_t t89 = 2862U;

	t89 = (((x5877==x5878)+x5879)<<x5880);

	if (t89 != 3513384960U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5925 = 142909004300174112LL;
	int32_t x5926 = INT32_MIN;
	uint32_t x5927 = 67627U;
	int16_t x5928 = 6;
	static uint32_t t90 = 6U;

	t90 = (((x5925==x5926)+x5927)<<x5928);

	if (t90 != 4328128U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x5997 = INT64_MAX;
	uint8_t x5999 = 126U;
	static volatile uint16_t x6000 = 2U;

	t91 = (((x5997==x5998)+x5999)<<x6000);

	if (t91 != 504) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x6015 = 181;
	volatile int32_t t92 = -11480762;

	t92 = (((x6013==x6014)+x6015)<<x6016);

	if (t92 != 181) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6113 = INT16_MAX;
	static int16_t x6114 = 8785;
	uint8_t x6115 = 11U;
	uint8_t x6116 = 3U;
	volatile int32_t t93 = -22255810;

	t93 = (((x6113==x6114)+x6115)<<x6116);

	if (t93 != 88) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6121 = INT32_MAX;
	int16_t x6122 = 8896;
	volatile uint8_t x6123 = UINT8_MAX;
	volatile int32_t t94 = 67922110;

	t94 = (((x6121==x6122)+x6123)<<x6124);

	if (t94 != 8160) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6142 = UINT16_MAX;
	static volatile uint64_t x6143 = 48552LLU;
	uint64_t x6144 = 0LLU;

	t95 = (((x6141==x6142)+x6143)<<x6144);

	if (t95 != 48552LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6149 = INT32_MAX;
	static uint32_t x6151 = 7940U;
	int8_t x6152 = 0;
	volatile uint32_t t96 = 2336902U;

	t96 = (((x6149==x6150)+x6151)<<x6152);

	if (t96 != 7940U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x6190 = INT16_MIN;
	uint8_t x6191 = 3U;
	uint8_t x6192 = 0U;

	t97 = (((x6189==x6190)+x6191)<<x6192);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x6221 = -3LL;
	static volatile int64_t x6222 = INT64_MIN;
	uint16_t x6223 = UINT16_MAX;
	uint8_t x6224 = 0U;

	t98 = (((x6221==x6222)+x6223)<<x6224);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6253 = 23U;
	uint64_t x6254 = 63LLU;
	uint64_t x6255 = 548613215928598175LLU;
	int8_t x6256 = 18;

	t99 = (((x6253==x6254)+x6255)<<x6256);

	if (t99 != 4846077746775588864LLU) { NG(); } else { ; }
	
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


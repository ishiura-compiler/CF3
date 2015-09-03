#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = -5710;
uint8_t x7 = 7U;
static int32_t t0 = 320855;
uint64_t x26 = 11064974LLU;
static uint64_t t2 = 1979595875LLU;
volatile uint8_t x54 = 14U;
static volatile int64_t x280 = -266612195526LL;
int64_t x380 = INT64_MIN;
static int64_t t5 = 50651708723LL;
int32_t t6 = -347310;
volatile uint64_t t9 = 115181683646LLU;
volatile uint32_t t10 = 462308U;
uint32_t t11 = 8079785U;
uint16_t x894 = 0U;
int16_t x1210 = INT16_MAX;
volatile uint16_t x1539 = 1U;
int64_t x1565 = INT64_MIN;
uint64_t x1691 = 1LLU;
static uint16_t x1707 = 0U;
static volatile uint8_t x1723 = 3U;
uint64_t x1817 = UINT64_MAX;
uint8_t x1819 = 30U;
uint64_t x1822 = UINT64_MAX;
volatile uint64_t t28 = 12573718006LLU;
uint64_t x1829 = 17855LLU;
uint64_t t29 = 85664LLU;
static volatile uint16_t x1874 = 25989U;
uint16_t x1875 = 1U;
int8_t x1933 = -1;
uint32_t x2217 = UINT32_MAX;
static uint32_t t35 = 82U;
int32_t x2240 = -1;
int64_t x2338 = 2LL;
static volatile int64_t x2364 = INT64_MIN;
volatile int64_t t39 = 69993LL;
uint64_t x2368 = 1576LLU;
volatile uint64_t t40 = 1888375LLU;
volatile int8_t x2449 = -1;
int32_t x2450 = 3;
volatile uint8_t x2522 = UINT8_MAX;
static uint16_t x2523 = 0U;
int8_t x2572 = 0;
volatile int16_t x2649 = -1;
int8_t x2657 = 4;
uint32_t x2660 = 180075926U;
uint8_t x2731 = 6U;
int16_t x3339 = 31;
uint8_t x3354 = 2U;
int64_t x3450 = INT64_MAX;
int8_t x3767 = 3;
int16_t x3768 = 8631;
int64_t x3837 = INT64_MIN;
int32_t x3839 = 3;
int16_t x3907 = 1;
volatile int8_t x3952 = INT8_MIN;
uint16_t x4007 = 3U;
int64_t x4008 = INT64_MAX;
uint32_t x4033 = UINT32_MAX;
uint8_t x4034 = 13U;
int64_t x4037 = -1615233908238LL;
static int16_t x4039 = 1;
static volatile int64_t t61 = -1LL;
int8_t x4283 = 0;
volatile uint32_t t66 = 483632U;
static int16_t x4663 = 0;
int32_t x4904 = -106;
static int32_t x5161 = INT32_MAX;
uint16_t x5164 = 3037U;
uint32_t t73 = 13729314U;
static int64_t t74 = 281LL;
uint32_t x5309 = UINT32_MAX;
int8_t x5311 = 1;
int32_t x5406 = 1;
volatile uint32_t x5408 = 5421805U;
static int64_t x5496 = INT64_MIN;
int64_t x5806 = 245919464593537LL;
int16_t x5808 = INT16_MIN;
int64_t t81 = 50634420LL;
int32_t x5825 = -1;
int32_t x5964 = 2018749;
volatile uint32_t t84 = 491309248U;
uint16_t x6018 = 1584U;
volatile int32_t x6020 = -1;
static volatile int32_t t85 = 79;
int32_t x6025 = INT32_MAX;
uint8_t x6027 = 1U;
uint32_t x6028 = UINT32_MAX;
static uint32_t x6048 = 125549590U;
static uint8_t x6069 = UINT8_MAX;
volatile int32_t t90 = -433253;
volatile uint16_t x6081 = 2555U;
uint32_t x6165 = 1976230601U;
uint32_t x6167 = 0U;
static int8_t x6168 = INT8_MIN;
int8_t x6195 = 27;
int64_t x6290 = 617272152LL;
int64_t t95 = 62396812424531499LL;
static int32_t x6312 = INT32_MIN;
volatile uint32_t t96 = 12547019U;
uint64_t t98 = 16LLU;


void f0(void) {
	int8_t x6 = INT8_MAX;
	uint16_t x8 = UINT16_MAX;

	t0 = ((x5+(x6<<x7))+x8);

	if (t0 != 76081) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MAX;
	int32_t x19 = 0;
	int16_t x20 = INT16_MIN;
	volatile int64_t t1 = 235888467860055LL;

	t1 = ((x17+(x18<<x19))+x20);

	if (t1 != 9223372034707259391LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = INT64_MAX;
	int8_t x27 = 3;
	static uint64_t x28 = 1LLU;

	t2 = ((x25+(x26<<x27))+x28);

	if (t2 != 9223372036943295600LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x53 = INT16_MAX;
	int32_t x55 = 1;
	int32_t x56 = 353855701;
	volatile int32_t t3 = -1;

	t3 = ((x53+(x54<<x55))+x56);

	if (t3 != 353888496) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x277 = -1;
	uint64_t x278 = 30928LLU;
	uint16_t x279 = 0U;
	uint64_t t4 = 285LLU;

	t4 = ((x277+(x278<<x279))+x280);

	if (t4 != 18446743807097387017LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x377 = 65507035391LL;
	int32_t x378 = 423;
	int8_t x379 = 0;

	t5 = ((x377+(x378<<x379))+x380);

	if (t5 != -9223371971347739994LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x497 = INT32_MIN;
	static int8_t x498 = INT8_MAX;
	uint32_t x499 = 5U;
	int32_t x500 = -1;

	t6 = ((x497+(x498<<x499))+x500);

	if (t6 != -2147479585) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x513 = UINT8_MAX;
	uint64_t x514 = 366622LLU;
	uint64_t x515 = 17LLU;
	int32_t x516 = INT32_MIN;
	uint64_t t7 = 13347LLU;

	t7 = ((x513+(x514<<x515))+x516);

	if (t7 != 45906395391LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x561 = INT16_MAX;
	uint32_t x562 = 1U;
	volatile uint64_t x563 = 1LLU;
	int16_t x564 = INT16_MIN;
	volatile uint32_t t8 = 11306682U;

	t8 = ((x561+(x562<<x563))+x564);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x565 = -30414289961LL;
	volatile uint64_t x566 = 36LLU;
	uint64_t x567 = 6LLU;
	int64_t x568 = INT64_MIN;

	t9 = ((x565+(x566<<x567))+x568);

	if (t9 != 9223372006440488151LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x597 = -15798;
	uint32_t x598 = 212717233U;
	int8_t x599 = 4;
	uint16_t x600 = 4U;

	t10 = ((x597+(x598<<x599))+x600);

	if (t10 != 3403459934U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x829 = 645U;
	static uint8_t x830 = 2U;
	volatile uint8_t x831 = 3U;
	int32_t x832 = INT32_MAX;

	t11 = ((x829+(x830<<x831))+x832);

	if (t11 != 2147484308U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x873 = UINT32_MAX;
	volatile uint8_t x874 = 1U;
	int8_t x875 = 1;
	int64_t x876 = INT64_MIN;
	int64_t t12 = -138131194694LL;

	t12 = ((x873+(x874<<x875))+x876);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x893 = -16;
	static int32_t x895 = 1;
	static volatile uint64_t x896 = 113LLU;
	volatile uint64_t t13 = 51485196LLU;

	t13 = ((x893+(x894<<x895))+x896);

	if (t13 != 97LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1125 = 1;
	uint8_t x1126 = 13U;
	uint8_t x1127 = 3U;
	int64_t x1128 = -27LL;
	int64_t t14 = 290657909785LL;

	t14 = ((x1125+(x1126<<x1127))+x1128);

	if (t14 != 78LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1209 = UINT8_MAX;
	volatile uint8_t x1211 = 0U;
	int8_t x1212 = 35;
	int32_t t15 = 52676168;

	t15 = ((x1209+(x1210<<x1211))+x1212);

	if (t15 != 33057) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1313 = -1;
	volatile uint8_t x1314 = UINT8_MAX;
	uint8_t x1315 = 1U;
	int16_t x1316 = INT16_MAX;
	volatile int32_t t16 = 30269;

	t16 = ((x1313+(x1314<<x1315))+x1316);

	if (t16 != 33276) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1325 = -1;
	uint64_t x1326 = 240124683251172LLU;
	volatile uint8_t x1327 = 2U;
	uint16_t x1328 = 30462U;
	static uint64_t t17 = 3461879219225070476LLU;

	t17 = ((x1325+(x1326<<x1327))+x1328);

	if (t17 != 960498733035149LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1329 = 177921U;
	volatile int16_t x1330 = 1;
	static uint8_t x1331 = 1U;
	static int16_t x1332 = INT16_MIN;
	uint32_t t18 = 6732U;

	t18 = ((x1329+(x1330<<x1331))+x1332);

	if (t18 != 145155U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1397 = INT64_MIN;
	uint16_t x1398 = 25U;
	int16_t x1399 = 1;
	volatile uint16_t x1400 = 1U;
	int64_t t19 = 25LL;

	t19 = ((x1397+(x1398<<x1399))+x1400);

	if (t19 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1517 = -611;
	int32_t x1518 = 0;
	static uint8_t x1519 = 3U;
	uint32_t x1520 = UINT32_MAX;
	volatile uint32_t t20 = 15U;

	t20 = ((x1517+(x1518<<x1519))+x1520);

	if (t20 != 4294966684U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1537 = 39;
	uint32_t x1538 = UINT32_MAX;
	uint32_t x1540 = 954910U;
	uint32_t t21 = 2222262U;

	t21 = ((x1537+(x1538<<x1539))+x1540);

	if (t21 != 954947U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1566 = INT16_MAX;
	static int16_t x1567 = 0;
	volatile uint64_t x1568 = UINT64_MAX;
	static uint64_t t22 = 10230143990004134LLU;

	t22 = ((x1565+(x1566<<x1567))+x1568);

	if (t22 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1689 = INT32_MAX;
	uint64_t x1690 = UINT64_MAX;
	int16_t x1692 = INT16_MIN;
	uint64_t t23 = 399477935818LLU;

	t23 = ((x1689+(x1690<<x1691))+x1692);

	if (t23 != 2147450877LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1705 = INT32_MIN;
	uint64_t x1706 = UINT64_MAX;
	volatile uint32_t x1708 = 131684115U;
	uint64_t t24 = 5209909372993011LLU;

	t24 = ((x1705+(x1706<<x1707))+x1708);

	if (t24 != 18446744071693752082LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1721 = -1;
	uint32_t x1722 = UINT32_MAX;
	static volatile int8_t x1724 = INT8_MAX;
	static uint32_t t25 = 894224U;

	t25 = ((x1721+(x1722<<x1723))+x1724);

	if (t25 != 118U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1801 = INT8_MIN;
	uint32_t x1802 = 6U;
	static volatile uint16_t x1803 = 3U;
	int16_t x1804 = INT16_MIN;
	volatile uint32_t t26 = 23U;

	t26 = ((x1801+(x1802<<x1803))+x1804);

	if (t26 != 4294934448U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1818 = 1U;
	static int32_t x1820 = -60;
	uint64_t t27 = 49943949069LLU;

	t27 = ((x1817+(x1818<<x1819))+x1820);

	if (t27 != 1073741763LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1821 = 326;
	uint8_t x1823 = 5U;
	int32_t x1824 = -12674;

	t28 = ((x1821+(x1822<<x1823))+x1824);

	if (t28 != 18446744073709539236LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1830 = 17U;
	uint8_t x1831 = 3U;
	uint64_t x1832 = 46205214LLU;

	t29 = ((x1829+(x1830<<x1831))+x1832);

	if (t29 != 46223205LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1873 = INT8_MIN;
	int32_t x1876 = INT32_MIN;
	int32_t t30 = -20;

	t30 = ((x1873+(x1874<<x1875))+x1876);

	if (t30 != -2147431798) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1934 = INT16_MAX;
	uint8_t x1935 = 3U;
	static int32_t x1936 = -1;
	int32_t t31 = 1;

	t31 = ((x1933+(x1934<<x1935))+x1936);

	if (t31 != 262134) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2001 = -4;
	static uint8_t x2002 = UINT8_MAX;
	static volatile int8_t x2003 = 1;
	int16_t x2004 = INT16_MIN;
	static int32_t t32 = 3;

	t32 = ((x2001+(x2002<<x2003))+x2004);

	if (t32 != -32262) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x2041 = 9292609U;
	volatile int8_t x2042 = 8;
	uint64_t x2043 = 1LLU;
	static int64_t x2044 = -2861033552381833370LL;
	static volatile int64_t t33 = 177887009537576LL;

	t33 = ((x2041+(x2042<<x2043))+x2044);

	if (t33 != -2861033552372540745LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2157 = INT8_MIN;
	static volatile uint64_t x2158 = UINT64_MAX;
	int8_t x2159 = 11;
	volatile int64_t x2160 = INT64_MIN;
	uint64_t t34 = 133301896066LLU;

	t34 = ((x2157+(x2158<<x2159))+x2160);

	if (t34 != 9223372036854773632LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2218 = 0;
	volatile int16_t x2219 = 3;
	int16_t x2220 = INT16_MIN;

	t35 = ((x2217+(x2218<<x2219))+x2220);

	if (t35 != 4294934527U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2237 = INT8_MIN;
	uint64_t x2238 = UINT64_MAX;
	int16_t x2239 = 1;
	static volatile uint64_t t36 = 758LLU;

	t36 = ((x2237+(x2238<<x2239))+x2240);

	if (t36 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x2337 = -1LL;
	uint32_t x2339 = 4U;
	int32_t x2340 = 158894;
	int64_t t37 = 40160315065187LL;

	t37 = ((x2337+(x2338<<x2339))+x2340);

	if (t37 != 158925LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2353 = 94209LLU;
	volatile uint64_t x2354 = 55966079619461355LLU;
	uint8_t x2355 = 0U;
	int64_t x2356 = INT64_MAX;
	static uint64_t t38 = 379823LLU;

	t38 = ((x2353+(x2354<<x2355))+x2356);

	if (t38 != 9279338116474331371LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2361 = 11645U;
	int16_t x2362 = INT16_MAX;
	int16_t x2363 = 1;

	t39 = ((x2361+(x2362<<x2363))+x2364);

	if (t39 != -9223372036854698629LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2365 = 28334;
	static int8_t x2366 = 2;
	int32_t x2367 = 24;

	t40 = ((x2365+(x2366<<x2367))+x2368);

	if (t40 != 33584342LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2369 = -602259617152LL;
	int64_t x2370 = 126098551LL;
	static uint8_t x2371 = 32U;
	int8_t x2372 = INT8_MIN;
	volatile int64_t t41 = -3143112867133LL;

	t41 = ((x2369+(x2370<<x2371))+x2372);

	if (t41 != 541588550358370816LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2451 = 5U;
	int64_t x2452 = -5170LL;
	static volatile int64_t t42 = 2486348652456344LL;

	t42 = ((x2449+(x2450<<x2451))+x2452);

	if (t42 != -5075LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2521 = -21;
	int64_t x2524 = INT64_MIN;
	int64_t t43 = -553170071534134319LL;

	t43 = ((x2521+(x2522<<x2523))+x2524);

	if (t43 != -9223372036854775574LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2569 = 30U;
	uint16_t x2570 = UINT16_MAX;
	static uint16_t x2571 = 0U;
	static volatile int32_t t44 = 1225;

	t44 = ((x2569+(x2570<<x2571))+x2572);

	if (t44 != 65565) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x2650 = UINT16_MAX;
	int16_t x2651 = 5;
	uint32_t x2652 = 1U;
	uint32_t t45 = 727840U;

	t45 = ((x2649+(x2650<<x2651))+x2652);

	if (t45 != 2097120U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2658 = UINT32_MAX;
	volatile int8_t x2659 = 0;
	volatile uint32_t t46 = 13621U;

	t46 = ((x2657+(x2658<<x2659))+x2660);

	if (t46 != 180075929U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2729 = INT8_MIN;
	static uint32_t x2730 = 13660643U;
	static int16_t x2732 = INT16_MIN;
	volatile uint32_t t47 = 1457U;

	t47 = ((x2729+(x2730<<x2731))+x2732);

	if (t47 != 874248256U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2857 = -1LL;
	int16_t x2858 = 98;
	uint8_t x2859 = 3U;
	volatile int16_t x2860 = -1;
	volatile int64_t t48 = 1514500952612685471LL;

	t48 = ((x2857+(x2858<<x2859))+x2860);

	if (t48 != 782LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3225 = UINT32_MAX;
	static uint32_t x3226 = 9820542U;
	uint16_t x3227 = 23U;
	static volatile int8_t x3228 = 25;
	volatile uint32_t t49 = 317150U;

	t49 = ((x3225+(x3226<<x3227))+x3228);

	if (t49 != 3204448280U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x3337 = INT32_MAX;
	uint64_t x3338 = 34LLU;
	int16_t x3340 = INT16_MAX;
	volatile uint64_t t50 = 2051537047634LLU;

	t50 = ((x3337+(x3338<<x3339))+x3340);

	if (t50 != 75161960446LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x3353 = UINT16_MAX;
	volatile uint8_t x3355 = 9U;
	volatile uint16_t x3356 = 114U;
	volatile int32_t t51 = 3753391;

	t51 = ((x3353+(x3354<<x3355))+x3356);

	if (t51 != 66673) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x3449 = 4562775790531252856LLU;
	uint8_t x3451 = 0U;
	int32_t x3452 = 511793555;
	static uint64_t t52 = 34094079530LLU;

	t52 = ((x3449+(x3450<<x3451))+x3452);

	if (t52 != 13786147827897822218LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3481 = 1000995108696LL;
	uint8_t x3482 = 2U;
	uint32_t x3483 = 28U;
	static int16_t x3484 = -269;
	int64_t t53 = 214724601121981011LL;

	t53 = ((x3481+(x3482<<x3483))+x3484);

	if (t53 != 1001531979339LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3765 = UINT8_MAX;
	static volatile int16_t x3766 = INT16_MAX;
	int32_t t54 = 190;

	t54 = ((x3765+(x3766<<x3767))+x3768);

	if (t54 != 271022) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3838 = 175670024216LL;
	volatile int16_t x3840 = INT16_MIN;
	volatile int64_t t55 = -1LL;

	t55 = ((x3837+(x3838<<x3839))+x3840);

	if (t55 != -9223370631494614848LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3905 = -95751055093929098LL;
	int16_t x3906 = 1;
	static volatile int32_t x3908 = INT32_MIN;
	static volatile int64_t t56 = -1386074859507824LL;

	t56 = ((x3905+(x3906<<x3907))+x3908);

	if (t56 != -95751057241412744LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3925 = UINT64_MAX;
	int8_t x3926 = 28;
	volatile uint64_t x3927 = 17LLU;
	uint16_t x3928 = UINT16_MAX;
	volatile uint64_t t57 = 1419825LLU;

	t57 = ((x3925+(x3926<<x3927))+x3928);

	if (t57 != 3735550LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3949 = 5U;
	uint64_t x3950 = 18056095LLU;
	int8_t x3951 = 21;
	volatile uint64_t t58 = 934375LLU;

	t58 = ((x3949+(x3950<<x3951))+x3952);

	if (t58 != 37866375741317LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4005 = -3870069182501506LL;
	static int16_t x4006 = INT16_MAX;
	int64_t t59 = 45626LL;

	t59 = ((x4005+(x4006<<x4007))+x4008);

	if (t59 != 9219501967672536437LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x4035 = 7U;
	uint16_t x4036 = UINT16_MAX;
	uint32_t t60 = 43337U;

	t60 = ((x4033+(x4034<<x4035))+x4036);

	if (t60 != 67198U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x4038 = 68U;
	volatile uint32_t x4040 = 11516897U;

	t61 = ((x4037+(x4038<<x4039))+x4040);

	if (t61 != -1615222391205LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x4085 = 975U;
	uint64_t x4086 = 1946329652LLU;
	uint16_t x4087 = 25U;
	int8_t x4088 = -15;
	uint64_t t62 = 374451037LLU;

	t62 = ((x4085+(x4086<<x4087))+x4088);

	if (t62 != 65307985957618624LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x4133 = 788;
	volatile uint64_t x4134 = 1234556740687157704LLU;
	uint64_t x4135 = 39LLU;
	int32_t x4136 = INT32_MAX;
	uint64_t t63 = 1601739286509LLU;

	t63 = ((x4133+(x4134<<x4135))+x4136);

	if (t63 != 15883320676627514131LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x4281 = -1;
	uint64_t x4282 = UINT64_MAX;
	static volatile int64_t x4284 = INT64_MIN;
	volatile uint64_t t64 = 3877015322LLU;

	t64 = ((x4281+(x4282<<x4283))+x4284);

	if (t64 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x4285 = -14044;
	volatile uint16_t x4286 = 34U;
	static uint16_t x4287 = 1U;
	int64_t x4288 = INT64_MAX;
	int64_t t65 = -60LL;

	t65 = ((x4285+(x4286<<x4287))+x4288);

	if (t65 != 9223372036854761831LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4357 = INT16_MIN;
	volatile int8_t x4358 = 31;
	int32_t x4359 = 7;
	static uint32_t x4360 = UINT32_MAX;

	t66 = ((x4357+(x4358<<x4359))+x4360);

	if (t66 != 4294938495U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4633 = 2U;
	uint64_t x4634 = UINT64_MAX;
	static uint32_t x4635 = 7U;
	uint8_t x4636 = 1U;
	volatile uint64_t t67 = 27LLU;

	t67 = ((x4633+(x4634<<x4635))+x4636);

	if (t67 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4661 = 26U;
	int8_t x4662 = 1;
	int8_t x4664 = INT8_MAX;
	int32_t t68 = 1642;

	t68 = ((x4661+(x4662<<x4663))+x4664);

	if (t68 != 154) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4669 = UINT16_MAX;
	int16_t x4670 = 469;
	static uint8_t x4671 = 5U;
	int16_t x4672 = 2;
	int32_t t69 = -549272431;

	t69 = ((x4669+(x4670<<x4671))+x4672);

	if (t69 != 80545) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4685 = -1LL;
	volatile int8_t x4686 = 4;
	uint16_t x4687 = 5U;
	int64_t x4688 = -20914LL;
	int64_t t70 = 3LL;

	t70 = ((x4685+(x4686<<x4687))+x4688);

	if (t70 != -20787LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4901 = UINT16_MAX;
	int32_t x4902 = 53001;
	uint32_t x4903 = 1U;
	int32_t t71 = 5;

	t71 = ((x4901+(x4902<<x4903))+x4904);

	if (t71 != 171431) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4977 = UINT64_MAX;
	static uint8_t x4978 = 0U;
	int8_t x4979 = 1;
	int8_t x4980 = -5;
	static uint64_t t72 = 47LLU;

	t72 = ((x4977+(x4978<<x4979))+x4980);

	if (t72 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x5162 = 24U;
	uint8_t x5163 = 21U;

	t73 = ((x5161+(x5162<<x5163))+x5164);

	if (t73 != 2197818332U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x5169 = INT64_MAX;
	static uint8_t x5170 = 0U;
	volatile int8_t x5171 = 1;
	int16_t x5172 = -1322;

	t74 = ((x5169+(x5170<<x5171))+x5172);

	if (t74 != 9223372036854774485LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5310 = INT8_MAX;
	int8_t x5312 = INT8_MIN;
	volatile uint32_t t75 = 14527538U;

	t75 = ((x5309+(x5310<<x5311))+x5312);

	if (t75 != 125U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x5405 = INT32_MIN;
	uint8_t x5407 = 1U;
	volatile uint32_t t76 = 188054U;

	t76 = ((x5405+(x5406<<x5407))+x5408);

	if (t76 != 2152905455U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5433 = UINT8_MAX;
	uint64_t x5434 = UINT64_MAX;
	uint8_t x5435 = 6U;
	uint32_t x5436 = 1887641U;
	uint64_t t77 = 38646958044059106LLU;

	t77 = ((x5433+(x5434<<x5435))+x5436);

	if (t77 != 1887832LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5473 = UINT32_MAX;
	uint8_t x5474 = 19U;
	uint16_t x5475 = 0U;
	uint32_t x5476 = 11911U;
	static uint32_t t78 = 1U;

	t78 = ((x5473+(x5474<<x5475))+x5476);

	if (t78 != 11929U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x5485 = INT8_MIN;
	static uint64_t x5486 = 20204055LLU;
	uint32_t x5487 = 49U;
	int32_t x5488 = 49866;
	volatile uint64_t t79 = 5713LLU;

	t79 = ((x5485+(x5486<<x5487))+x5488);

	if (t79 != 10677471766542074442LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5493 = INT16_MAX;
	static volatile int32_t x5494 = 0;
	uint32_t x5495 = 1U;
	int64_t t80 = -62768034646961470LL;

	t80 = ((x5493+(x5494<<x5495))+x5496);

	if (t80 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x5805 = INT8_MAX;
	volatile uint8_t x5807 = 0U;

	t81 = ((x5805+(x5806<<x5807))+x5808);

	if (t81 != 245919464560896LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5826 = 2U;
	int8_t x5827 = 0;
	uint32_t x5828 = UINT32_MAX;
	volatile uint32_t t82 = 10219520U;

	t82 = ((x5825+(x5826<<x5827))+x5828);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5925 = UINT32_MAX;
	volatile uint32_t x5926 = UINT32_MAX;
	volatile uint8_t x5927 = 3U;
	uint8_t x5928 = 68U;
	uint32_t t83 = 67495722U;

	t83 = ((x5925+(x5926<<x5927))+x5928);

	if (t83 != 59U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5961 = UINT8_MAX;
	uint32_t x5962 = 498525082U;
	uint8_t x5963 = 3U;

	t84 = ((x5961+(x5962<<x5963))+x5964);

	if (t84 != 3990219660U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x6017 = INT8_MAX;
	uint16_t x6019 = 1U;

	t85 = ((x6017+(x6018<<x6019))+x6020);

	if (t85 != 3294) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6026 = 52LLU;
	static uint64_t t86 = 2215592398223126517LLU;

	t86 = ((x6025+(x6026<<x6027))+x6028);

	if (t86 != 6442451046LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x6033 = UINT32_MAX;
	uint16_t x6034 = UINT16_MAX;
	static uint16_t x6035 = 6U;
	int16_t x6036 = INT16_MIN;
	uint32_t t87 = 780821566U;

	t87 = ((x6033+(x6034<<x6035))+x6036);

	if (t87 != 4161471U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6045 = -2;
	static volatile uint64_t x6046 = 46138225091759029LLU;
	uint8_t x6047 = 39U;
	static volatile uint64_t t88 = 869019730582717603LLU;

	t88 = ((x6045+(x6046<<x6047))+x6048);

	if (t88 != 10711207532186811412LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x6049 = 16U;
	uint64_t x6050 = 468179472906LLU;
	uint32_t x6051 = 6U;
	int16_t x6052 = -1;
	uint64_t t89 = 41467131370505924LLU;

	t89 = ((x6049+(x6050<<x6051))+x6052);

	if (t89 != 29963486265999LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x6070 = 88U;
	int16_t x6071 = 0;
	static int32_t x6072 = -2033;

	t90 = ((x6069+(x6070<<x6071))+x6072);

	if (t90 != -1690) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x6082 = 34U;
	static uint8_t x6083 = 1U;
	int16_t x6084 = INT16_MIN;
	int32_t t91 = 52568235;

	t91 = ((x6081+(x6082<<x6083))+x6084);

	if (t91 != -30145) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6166 = 255435652601328LLU;
	static volatile uint64_t t92 = 1988191647317346139LLU;

	t92 = ((x6165+(x6166<<x6167))+x6168);

	if (t92 != 255437628831801LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6177 = -1;
	volatile uint32_t x6178 = 25818724U;
	uint16_t x6179 = 25U;
	int8_t x6180 = 6;
	static volatile uint32_t t93 = 203210749U;

	t93 = ((x6177+(x6178<<x6179))+x6180);

	if (t93 != 3355443205U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6193 = UINT16_MAX;
	volatile int8_t x6194 = 1;
	volatile uint32_t x6196 = 514301850U;
	uint32_t t94 = 56386U;

	t94 = ((x6193+(x6194<<x6195))+x6196);

	if (t94 != 648585113U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x6289 = -1;
	uint16_t x6291 = 3U;
	uint8_t x6292 = UINT8_MAX;

	t95 = ((x6289+(x6290<<x6291))+x6292);

	if (t95 != 4938177470LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6309 = INT8_MAX;
	uint32_t x6310 = UINT32_MAX;
	uint8_t x6311 = 9U;

	t96 = ((x6309+(x6310<<x6311))+x6312);

	if (t96 != 2147483263U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x6329 = INT32_MIN;
	static volatile int32_t x6330 = INT32_MAX;
	uint8_t x6331 = 0U;
	uint32_t x6332 = UINT32_MAX;
	static volatile uint32_t t97 = 168U;

	t97 = ((x6329+(x6330<<x6331))+x6332);

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6433 = UINT16_MAX;
	uint64_t x6434 = 134625190255415410LLU;
	static int8_t x6435 = 1;
	int16_t x6436 = INT16_MAX;

	t98 = ((x6433+(x6434<<x6435))+x6436);

	if (t98 != 269250380510929122LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6437 = INT8_MAX;
	uint64_t x6438 = 7185980707LLU;
	int16_t x6439 = 1;
	int8_t x6440 = 1;
	uint64_t t99 = 206203995377634604LLU;

	t99 = ((x6437+(x6438<<x6439))+x6440);

	if (t99 != 14371961542LLU) { NG(); } else { ; }
	
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


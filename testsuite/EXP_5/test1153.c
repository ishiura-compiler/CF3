#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 2U;
static volatile int32_t t1 = 182;
static volatile int64_t x49 = -1LL;
int16_t x52 = -1;
uint32_t x158 = 191859123U;
volatile uint32_t x163 = 9U;
uint8_t x258 = UINT8_MAX;
int8_t x280 = -1;
int32_t t8 = 898;
volatile int64_t x445 = INT64_MIN;
uint16_t x455 = 0U;
int32_t x497 = INT32_MIN;
uint32_t x499 = 2U;
int16_t x500 = -7426;
int64_t x521 = -1LL;
static uint8_t x522 = 0U;
static int8_t x660 = INT8_MAX;
int16_t x934 = INT16_MAX;
static uint32_t x1091 = 1U;
int64_t x1092 = INT64_MAX;
static int32_t t19 = 911664139;
uint8_t x1101 = 116U;
uint16_t x1137 = UINT16_MAX;
uint32_t x1138 = 5626U;
int16_t x1246 = INT16_MAX;
int16_t x1261 = INT16_MIN;
int8_t x1263 = 3;
int64_t x1325 = INT64_MIN;
static uint64_t x1677 = 637457388817476LLU;
uint8_t x1679 = 26U;
volatile int16_t x1728 = -7;
static int16_t x1924 = 120;
uint8_t x1925 = 22U;
int32_t x1927 = 5;
static int8_t x1928 = -1;
int64_t x1981 = -1LL;
uint16_t x1982 = UINT16_MAX;
uint64_t x2244 = UINT64_MAX;
uint16_t x2356 = UINT16_MAX;
int16_t x2361 = -1;
int8_t x2411 = 0;
static volatile uint16_t x2420 = UINT16_MAX;
volatile int8_t x2524 = 0;
volatile int32_t x2593 = INT32_MAX;
int64_t x2670 = INT64_MAX;
static volatile int32_t t47 = -468354039;
int32_t x2753 = 59;
uint8_t x2754 = 6U;
static int32_t x2755 = 3;
volatile int32_t x2829 = -1;
volatile int32_t t49 = -33274588;
uint8_t x2886 = UINT8_MAX;
uint16_t x2898 = UINT16_MAX;
volatile int32_t t52 = 74593;
volatile int16_t x3352 = 2;
static volatile int32_t t54 = 29374189;
int32_t t55 = -516271567;
uint64_t x3445 = 325926590594818LLU;
static volatile int32_t t57 = 51678;
uint64_t x3450 = UINT64_MAX;
int32_t x3497 = -1801972;
static uint8_t x3499 = 15U;
uint8_t x3500 = 10U;
static int8_t x3520 = -1;
int8_t x3565 = INT8_MAX;
volatile uint64_t x3649 = 1198908146662681787LLU;
volatile uint8_t x3713 = 1U;
int8_t x3715 = 2;
volatile int8_t x3716 = 4;
uint64_t x3762 = UINT64_MAX;
static uint16_t x3800 = UINT16_MAX;
uint8_t x3913 = UINT8_MAX;
int8_t x3914 = INT8_MAX;
uint8_t x3915 = 31U;
static int32_t x3922 = 63756452;
volatile uint8_t x3923 = 0U;
uint16_t x4095 = 13U;
static int32_t x4192 = 89215542;
volatile int32_t x4228 = -9822593;
uint16_t x4236 = 422U;
volatile uint32_t x4240 = UINT32_MAX;
int8_t x4273 = 12;
int16_t x4370 = 0;
uint8_t x4395 = 35U;
uint32_t x4474 = UINT32_MAX;
uint32_t x4475 = 10U;
int32_t t90 = 230658;
int32_t t92 = 1418893;
static volatile int64_t x4989 = INT64_MAX;
int8_t x5001 = INT8_MAX;
static uint16_t x5004 = 31839U;
uint8_t x5074 = UINT8_MAX;
static volatile uint64_t x5076 = 3506656855LLU;
uint64_t x5078 = UINT64_MAX;
int8_t x5080 = 29;
uint8_t x5146 = 77U;
volatile uint64_t x5148 = UINT64_MAX;
int8_t x5172 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 30627495U;
	static int8_t x2 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 4100400;

	t0 = (x1<((x2>>x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 27;
	volatile uint64_t x14 = 201783379LLU;
	uint8_t x15 = 1U;
	int32_t x16 = INT32_MIN;

	t1 = (x13<((x14>>x15)&x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = 3;
	volatile int32_t t2 = 76;

	t2 = (x49<((x50>>x51)&x52));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = 1445283LLU;
	volatile int8_t x63 = 1;
	int64_t x64 = INT64_MAX;
	volatile int32_t t3 = -10;

	t3 = (x61<((x62>>x63)&x64));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x149 = INT64_MIN;
	volatile int8_t x150 = INT8_MAX;
	static uint8_t x151 = 8U;
	int32_t x152 = 485081;
	int32_t t4 = 63307075;

	t4 = (x149<((x150>>x151)&x152));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x159 = 3U;
	static int16_t x160 = -4;
	int32_t t5 = -8056;

	t5 = (x157<((x158>>x159)&x160));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x161 = 100428LLU;
	uint8_t x162 = UINT8_MAX;
	int64_t x164 = INT64_MAX;
	volatile int32_t t6 = 1504116;

	t6 = (x161<((x162>>x163)&x164));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x257 = 57U;
	static int8_t x259 = 6;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t7 = 7;

	t7 = (x257<((x258>>x259)&x260));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x277 = -1;
	uint64_t x278 = 184248356762LLU;
	volatile uint8_t x279 = 15U;

	t8 = (x277<((x278>>x279)&x280));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x446 = 1082814656LLU;
	static volatile int8_t x447 = 5;
	static int32_t x448 = 13;
	volatile int32_t t9 = 3359;

	t9 = (x445<((x446>>x447)&x448));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x453 = UINT32_MAX;
	uint64_t x454 = UINT64_MAX;
	uint8_t x456 = 1U;
	int32_t t10 = 57;

	t10 = (x453<((x454>>x455)&x456));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x461 = 854724141LL;
	uint16_t x462 = 0U;
	static uint32_t x463 = 4U;
	int32_t x464 = INT32_MAX;
	int32_t t11 = 94177;

	t11 = (x461<((x462>>x463)&x464));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x498 = 596742U;
	static int32_t t12 = 6690861;

	t12 = (x497<((x498>>x499)&x500));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x509 = INT64_MIN;
	int64_t x510 = INT64_MAX;
	volatile int16_t x511 = 0;
	volatile int64_t x512 = INT64_MIN;
	static volatile int32_t t13 = -1;

	t13 = (x509<((x510>>x511)&x512));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x523 = 1U;
	int32_t x524 = -1;
	int32_t t14 = -8500996;

	t14 = (x521<((x522>>x523)&x524));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x657 = INT64_MIN;
	static int64_t x658 = INT64_MAX;
	volatile uint8_t x659 = 7U;
	static int32_t t15 = 0;

	t15 = (x657<((x658>>x659)&x660));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x869 = 0U;
	uint64_t x870 = 114004LLU;
	int8_t x871 = 1;
	static int32_t x872 = 14;
	volatile int32_t t16 = 261;

	t16 = (x869<((x870>>x871)&x872));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x917 = -1;
	int64_t x918 = INT64_MAX;
	uint16_t x919 = 3U;
	int16_t x920 = -1;
	volatile int32_t t17 = -226542;

	t17 = (x917<((x918>>x919)&x920));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x933 = INT16_MIN;
	uint64_t x935 = 16LLU;
	int8_t x936 = -1;
	volatile int32_t t18 = 335362841;

	t18 = (x933<((x934>>x935)&x936));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1089 = INT8_MIN;
	volatile uint16_t x1090 = 6U;

	t19 = (x1089<((x1090>>x1091)&x1092));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1102 = 19U;
	static uint8_t x1103 = 1U;
	int32_t x1104 = INT32_MIN;
	static int32_t t20 = 15857;

	t20 = (x1101<((x1102>>x1103)&x1104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1139 = 2U;
	static int16_t x1140 = INT16_MIN;
	volatile int32_t t21 = -978493;

	t21 = (x1137<((x1138>>x1139)&x1140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1245 = 12;
	int32_t x1247 = 0;
	uint64_t x1248 = UINT64_MAX;
	volatile int32_t t22 = -2838564;

	t22 = (x1245<((x1246>>x1247)&x1248));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1262 = 4U;
	volatile uint64_t x1264 = 117731290709LLU;
	volatile int32_t t23 = -1186283;

	t23 = (x1261<((x1262>>x1263)&x1264));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1305 = 2;
	static int8_t x1306 = INT8_MAX;
	static int16_t x1307 = 3;
	uint64_t x1308 = 475LLU;
	int32_t t24 = -315261595;

	t24 = (x1305<((x1306>>x1307)&x1308));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1326 = UINT32_MAX;
	static uint8_t x1327 = 8U;
	static int8_t x1328 = 0;
	int32_t t25 = 0;

	t25 = (x1325<((x1326>>x1327)&x1328));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1533 = INT16_MAX;
	uint32_t x1534 = 1588856U;
	uint16_t x1535 = 11U;
	volatile uint32_t x1536 = 68028U;
	int32_t t26 = -84830611;

	t26 = (x1533<((x1534>>x1535)&x1536));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1678 = 4380757813446692845LLU;
	int8_t x1680 = -17;
	int32_t t27 = -3969;

	t27 = (x1677<((x1678>>x1679)&x1680));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1725 = -1;
	static uint64_t x1726 = UINT64_MAX;
	uint8_t x1727 = 3U;
	int32_t t28 = 3;

	t28 = (x1725<((x1726>>x1727)&x1728));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1913 = INT16_MIN;
	int64_t x1914 = INT64_MAX;
	int8_t x1915 = 3;
	int8_t x1916 = INT8_MAX;
	int32_t t29 = -389781;

	t29 = (x1913<((x1914>>x1915)&x1916));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1921 = -350016941;
	volatile uint32_t x1922 = 153543U;
	uint64_t x1923 = 4LLU;
	static int32_t t30 = -799633;

	t30 = (x1921<((x1922>>x1923)&x1924));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1926 = 101;
	int32_t t31 = -944814615;

	t31 = (x1925<((x1926>>x1927)&x1928));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1983 = 0U;
	int64_t x1984 = 906361862LL;
	int32_t t32 = -819649506;

	t32 = (x1981<((x1982>>x1983)&x1984));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1985 = INT64_MIN;
	volatile int64_t x1986 = INT64_MAX;
	static int32_t x1987 = 1;
	static int8_t x1988 = -1;
	static int32_t t33 = 246057768;

	t33 = (x1985<((x1986>>x1987)&x1988));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2017 = INT64_MAX;
	uint64_t x2018 = 10152551580359237LLU;
	uint32_t x2019 = 7U;
	uint8_t x2020 = UINT8_MAX;
	volatile int32_t t34 = 87938;

	t34 = (x2017<((x2018>>x2019)&x2020));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2241 = -1;
	uint8_t x2242 = 0U;
	static uint32_t x2243 = 0U;
	volatile int32_t t35 = 900;

	t35 = (x2241<((x2242>>x2243)&x2244));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x2353 = 1;
	uint16_t x2354 = UINT16_MAX;
	static uint32_t x2355 = 2U;
	int32_t t36 = 1;

	t36 = (x2353<((x2354>>x2355)&x2356));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2362 = UINT64_MAX;
	int16_t x2363 = 2;
	volatile int16_t x2364 = -1;
	volatile int32_t t37 = 8620426;

	t37 = (x2361<((x2362>>x2363)&x2364));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2409 = 8;
	uint32_t x2410 = 17237U;
	volatile uint64_t x2412 = 1401804890725LLU;
	volatile int32_t t38 = -621;

	t38 = (x2409<((x2410>>x2411)&x2412));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2417 = INT8_MIN;
	uint64_t x2418 = 8130665788LLU;
	static uint8_t x2419 = 22U;
	int32_t t39 = -122669;

	t39 = (x2417<((x2418>>x2419)&x2420));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2517 = -30;
	int8_t x2518 = 2;
	uint8_t x2519 = 5U;
	volatile int64_t x2520 = INT64_MIN;
	int32_t t40 = -156;

	t40 = (x2517<((x2518>>x2519)&x2520));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2521 = -45338273610319LL;
	int8_t x2522 = INT8_MAX;
	volatile uint8_t x2523 = 2U;
	volatile int32_t t41 = -72361924;

	t41 = (x2521<((x2522>>x2523)&x2524));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2529 = INT32_MIN;
	int64_t x2530 = INT64_MAX;
	volatile uint8_t x2531 = 10U;
	int64_t x2532 = INT64_MIN;
	static volatile int32_t t42 = -295607229;

	t42 = (x2529<((x2530>>x2531)&x2532));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2545 = INT16_MIN;
	volatile uint64_t x2546 = 19365136549LLU;
	uint8_t x2547 = 5U;
	int64_t x2548 = INT64_MIN;
	static volatile int32_t t43 = -1834;

	t43 = (x2545<((x2546>>x2547)&x2548));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2594 = 1U;
	volatile uint16_t x2595 = 0U;
	int32_t x2596 = INT32_MIN;
	int32_t t44 = 890985;

	t44 = (x2593<((x2594>>x2595)&x2596));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2661 = INT8_MAX;
	int64_t x2662 = INT64_MAX;
	uint8_t x2663 = 7U;
	int8_t x2664 = INT8_MIN;
	int32_t t45 = 1185;

	t45 = (x2661<((x2662>>x2663)&x2664));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2669 = 10U;
	uint64_t x2671 = 13LLU;
	uint8_t x2672 = UINT8_MAX;
	volatile int32_t t46 = -90134;

	t46 = (x2669<((x2670>>x2671)&x2672));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2717 = UINT8_MAX;
	uint16_t x2718 = 19812U;
	int64_t x2719 = 1LL;
	uint32_t x2720 = 116827778U;

	t47 = (x2717<((x2718>>x2719)&x2720));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2756 = 28U;
	volatile int32_t t48 = 2;

	t48 = (x2753<((x2754>>x2755)&x2756));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2830 = 316U;
	uint8_t x2831 = 28U;
	int16_t x2832 = -1;

	t49 = (x2829<((x2830>>x2831)&x2832));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2885 = 580254339LLU;
	volatile int16_t x2887 = 1;
	static int64_t x2888 = INT64_MAX;
	int32_t t50 = -45342598;

	t50 = (x2885<((x2886>>x2887)&x2888));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2897 = INT16_MIN;
	uint8_t x2899 = 10U;
	int64_t x2900 = INT64_MAX;
	volatile int32_t t51 = -23989090;

	t51 = (x2897<((x2898>>x2899)&x2900));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3261 = -1;
	volatile int8_t x3262 = INT8_MAX;
	volatile uint8_t x3263 = 0U;
	static int8_t x3264 = 57;

	t52 = (x3261<((x3262>>x3263)&x3264));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3349 = INT64_MIN;
	int64_t x3350 = 1341153040425LL;
	volatile int8_t x3351 = 12;
	int32_t t53 = 203099240;

	t53 = (x3349<((x3350>>x3351)&x3352));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3365 = INT8_MIN;
	uint8_t x3366 = UINT8_MAX;
	uint8_t x3367 = 1U;
	int64_t x3368 = 74104371405651281LL;

	t54 = (x3365<((x3366>>x3367)&x3368));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3425 = INT64_MIN;
	uint8_t x3426 = 14U;
	volatile uint8_t x3427 = 0U;
	static int16_t x3428 = -112;

	t55 = (x3425<((x3426>>x3427)&x3428));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3441 = 1069656773928LLU;
	int8_t x3442 = 22;
	int16_t x3443 = 0;
	uint64_t x3444 = 102LLU;
	volatile int32_t t56 = 0;

	t56 = (x3441<((x3442>>x3443)&x3444));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3446 = INT64_MAX;
	uint16_t x3447 = 0U;
	volatile int8_t x3448 = 19;

	t57 = (x3445<((x3446>>x3447)&x3448));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3449 = 166589973944035LL;
	static int32_t x3451 = 1;
	int32_t x3452 = INT32_MIN;
	int32_t t58 = -62529160;

	t58 = (x3449<((x3450>>x3451)&x3452));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3498 = 3712495322322093LLU;
	int32_t t59 = 599808;

	t59 = (x3497<((x3498>>x3499)&x3500));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3517 = INT64_MAX;
	volatile int8_t x3518 = 0;
	int64_t x3519 = 16LL;
	volatile int32_t t60 = 0;

	t60 = (x3517<((x3518>>x3519)&x3520));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3566 = 1LLU;
	uint8_t x3567 = 5U;
	static volatile int16_t x3568 = 11528;
	static int32_t t61 = 63668;

	t61 = (x3565<((x3566>>x3567)&x3568));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3650 = 8972807332475203072LLU;
	uint16_t x3651 = 44U;
	int8_t x3652 = -1;
	int32_t t62 = -3094161;

	t62 = (x3649<((x3650>>x3651)&x3652));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x3681 = INT8_MAX;
	uint32_t x3682 = 1136U;
	static uint8_t x3683 = 29U;
	volatile int8_t x3684 = INT8_MAX;
	volatile int32_t t63 = -2079987;

	t63 = (x3681<((x3682>>x3683)&x3684));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3709 = 1;
	static uint64_t x3710 = UINT64_MAX;
	volatile int8_t x3711 = 0;
	int32_t x3712 = -1;
	static int32_t t64 = -991958568;

	t64 = (x3709<((x3710>>x3711)&x3712));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3714 = 1;
	int32_t t65 = -3;

	t65 = (x3713<((x3714>>x3715)&x3716));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3721 = INT8_MIN;
	volatile uint32_t x3722 = 1930880236U;
	static int16_t x3723 = 10;
	static int32_t x3724 = INT32_MAX;
	static int32_t t66 = -16;

	t66 = (x3721<((x3722>>x3723)&x3724));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3761 = 125069100;
	int8_t x3763 = 0;
	int8_t x3764 = -1;
	static volatile int32_t t67 = 97768;

	t67 = (x3761<((x3762>>x3763)&x3764));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3797 = INT8_MIN;
	static uint64_t x3798 = 389016020108675799LLU;
	uint16_t x3799 = 3U;
	volatile int32_t t68 = 836;

	t68 = (x3797<((x3798>>x3799)&x3800));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x3916 = UINT16_MAX;
	volatile int32_t t69 = 42015;

	t69 = (x3913<((x3914>>x3915)&x3916));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3921 = 17;
	volatile int64_t x3924 = 226029LL;
	volatile int32_t t70 = 11;

	t70 = (x3921<((x3922>>x3923)&x3924));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3969 = UINT8_MAX;
	volatile int8_t x3970 = INT8_MAX;
	uint32_t x3971 = 3U;
	int16_t x3972 = -107;
	int32_t t71 = -471;

	t71 = (x3969<((x3970>>x3971)&x3972));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4085 = INT8_MIN;
	int32_t x4086 = 7621;
	uint8_t x4087 = 3U;
	int64_t x4088 = INT64_MAX;
	volatile int32_t t72 = 82968;

	t72 = (x4085<((x4086>>x4087)&x4088));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4093 = 14;
	static uint8_t x4094 = 23U;
	static uint32_t x4096 = UINT32_MAX;
	volatile int32_t t73 = 635;

	t73 = (x4093<((x4094>>x4095)&x4096));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4133 = -1;
	uint8_t x4134 = 123U;
	uint8_t x4135 = 1U;
	int64_t x4136 = INT64_MAX;
	int32_t t74 = -861559760;

	t74 = (x4133<((x4134>>x4135)&x4136));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4189 = INT16_MAX;
	volatile uint16_t x4190 = UINT16_MAX;
	uint32_t x4191 = 0U;
	volatile int32_t t75 = -679846;

	t75 = (x4189<((x4190>>x4191)&x4192));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4225 = 1LLU;
	static uint8_t x4226 = UINT8_MAX;
	volatile uint64_t x4227 = 1LLU;
	volatile int32_t t76 = -7;

	t76 = (x4225<((x4226>>x4227)&x4228));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4233 = INT8_MIN;
	int32_t x4234 = 65206612;
	int64_t x4235 = 1LL;
	volatile int32_t t77 = 4820865;

	t77 = (x4233<((x4234>>x4235)&x4236));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4237 = 0;
	uint8_t x4238 = 7U;
	uint64_t x4239 = 15LLU;
	volatile int32_t t78 = 3695;

	t78 = (x4237<((x4238>>x4239)&x4240));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4241 = INT64_MAX;
	int64_t x4242 = 41LL;
	volatile int8_t x4243 = 39;
	static uint8_t x4244 = UINT8_MAX;
	static int32_t t79 = -503821;

	t79 = (x4241<((x4242>>x4243)&x4244));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4274 = 598643062092LL;
	uint32_t x4275 = 0U;
	int8_t x4276 = 0;
	int32_t t80 = -10575296;

	t80 = (x4273<((x4274>>x4275)&x4276));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4357 = INT64_MIN;
	int64_t x4358 = 1782923412LL;
	volatile uint32_t x4359 = 3U;
	int8_t x4360 = -1;
	static volatile int32_t t81 = -49;

	t81 = (x4357<((x4358>>x4359)&x4360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4369 = INT32_MAX;
	uint8_t x4371 = 0U;
	int32_t x4372 = INT32_MIN;
	volatile int32_t t82 = -894;

	t82 = (x4369<((x4370>>x4371)&x4372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4393 = INT16_MIN;
	int64_t x4394 = INT64_MAX;
	static int64_t x4396 = INT64_MAX;
	volatile int32_t t83 = -225;

	t83 = (x4393<((x4394>>x4395)&x4396));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4473 = INT8_MIN;
	uint8_t x4476 = 106U;
	static volatile int32_t t84 = -38789;

	t84 = (x4473<((x4474>>x4475)&x4476));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4521 = UINT32_MAX;
	uint64_t x4522 = UINT64_MAX;
	volatile int8_t x4523 = 0;
	int8_t x4524 = INT8_MIN;
	int32_t t85 = 1828;

	t85 = (x4521<((x4522>>x4523)&x4524));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4533 = 8U;
	static int16_t x4534 = INT16_MAX;
	uint64_t x4535 = 20LLU;
	volatile int64_t x4536 = INT64_MIN;
	volatile int32_t t86 = -3279880;

	t86 = (x4533<((x4534>>x4535)&x4536));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x4553 = INT16_MIN;
	uint16_t x4554 = 362U;
	static uint64_t x4555 = 0LLU;
	volatile int8_t x4556 = -11;
	int32_t t87 = -3;

	t87 = (x4553<((x4554>>x4555)&x4556));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4649 = 31674U;
	static uint64_t x4650 = 105280LLU;
	uint8_t x4651 = 40U;
	int64_t x4652 = INT64_MAX;
	volatile int32_t t88 = 5929;

	t88 = (x4649<((x4650>>x4651)&x4652));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4689 = INT8_MAX;
	volatile int32_t x4690 = 491;
	uint16_t x4691 = 0U;
	uint16_t x4692 = UINT16_MAX;
	volatile int32_t t89 = 17;

	t89 = (x4689<((x4690>>x4691)&x4692));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4757 = INT64_MIN;
	int16_t x4758 = 19;
	static volatile int8_t x4759 = 0;
	int16_t x4760 = INT16_MIN;

	t90 = (x4757<((x4758>>x4759)&x4760));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4809 = -1;
	static uint8_t x4810 = 89U;
	int8_t x4811 = 30;
	static uint8_t x4812 = UINT8_MAX;
	volatile int32_t t91 = 132791409;

	t91 = (x4809<((x4810>>x4811)&x4812));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4973 = -1;
	uint16_t x4974 = 625U;
	uint8_t x4975 = 0U;
	static uint32_t x4976 = 98182865U;

	t92 = (x4973<((x4974>>x4975)&x4976));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x4990 = UINT16_MAX;
	uint8_t x4991 = 2U;
	static int16_t x4992 = INT16_MIN;
	int32_t t93 = 2806522;

	t93 = (x4989<((x4990>>x4991)&x4992));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x5002 = 12606U;
	static uint8_t x5003 = 3U;
	int32_t t94 = 20799940;

	t94 = (x5001<((x5002>>x5003)&x5004));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5017 = UINT8_MAX;
	int16_t x5018 = INT16_MAX;
	int8_t x5019 = 1;
	volatile int8_t x5020 = 3;
	int32_t t95 = -803281;

	t95 = (x5017<((x5018>>x5019)&x5020));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5073 = 884U;
	uint32_t x5075 = 3U;
	volatile int32_t t96 = 48184;

	t96 = (x5073<((x5074>>x5075)&x5076));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5077 = INT32_MAX;
	uint8_t x5079 = 7U;
	volatile int32_t t97 = -1874305;

	t97 = (x5077<((x5078>>x5079)&x5080));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5145 = INT64_MIN;
	uint8_t x5147 = 8U;
	volatile int32_t t98 = -55;

	t98 = (x5145<((x5146>>x5147)&x5148));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5169 = INT16_MIN;
	static int8_t x5170 = 7;
	uint16_t x5171 = 10U;
	volatile int32_t t99 = -7;

	t99 = (x5169<((x5170>>x5171)&x5172));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = UINT32_MAX;
int16_t x53 = INT16_MIN;
int8_t x154 = -1;
int64_t x271 = 9493342225275791LL;
int64_t x272 = 34LL;
int64_t x354 = -123898765658917153LL;
int16_t x368 = 1;
uint8_t x494 = UINT8_MAX;
static uint32_t t8 = 28245183U;
int8_t x642 = 1;
volatile uint64_t t9 = 79364723LLU;
int16_t x649 = INT16_MAX;
int32_t x802 = INT32_MIN;
int8_t x847 = INT8_MAX;
int8_t x848 = 0;
int32_t t12 = 0;
volatile int32_t x883 = INT32_MAX;
uint8_t x901 = 0U;
int32_t t14 = -218003;
static int32_t x929 = INT32_MIN;
volatile int32_t x931 = INT32_MAX;
int16_t x932 = 1;
int64_t x1025 = -91579836088919708LL;
int8_t x1072 = 16;
int16_t x1145 = INT16_MAX;
uint64_t x1148 = 2LLU;
int32_t t20 = 3624;
int16_t x1240 = 4;
volatile int32_t t23 = 354594099;
static volatile uint16_t x1255 = UINT16_MAX;
static volatile int8_t x1312 = 0;
int64_t x1562 = -1LL;
int32_t t33 = 6121;
uint16_t x1820 = 13U;
static int32_t t34 = 364;
int32_t x1917 = INT32_MAX;
uint32_t x1978 = 134621U;
uint8_t x1980 = 15U;
volatile uint16_t x2019 = 0U;
int32_t x2121 = -3471;
int32_t t38 = -19649;
int64_t x2175 = INT64_MAX;
uint16_t x2257 = 23962U;
int32_t t42 = 0;
int32_t x2298 = INT32_MIN;
int8_t x2520 = 6;
uint8_t x2689 = 5U;
volatile uint8_t x2692 = 11U;
uint64_t x2753 = 7249188904795LLU;
volatile int64_t x2838 = INT64_MIN;
uint8_t x2876 = 29U;
static uint8_t x2940 = 27U;
int32_t x2973 = -1;
static volatile int16_t x2975 = INT16_MAX;
int8_t x3275 = INT8_MAX;
int32_t t56 = -292;
static int8_t x3333 = INT8_MIN;
int16_t x3336 = 5;
static volatile uint32_t t58 = 111U;
int64_t x3378 = INT64_MIN;
uint32_t x3379 = 1020974U;
uint32_t t59 = 32U;
uint16_t x3511 = 197U;
uint8_t x3513 = 1U;
volatile int32_t t63 = -2;
int8_t x3533 = INT8_MAX;
uint8_t x3534 = 10U;
int64_t x3621 = -1LL;
volatile int8_t x3633 = -9;
int64_t x3857 = -293413343325382LL;
uint16_t x3860 = 5U;
int32_t t69 = 210540809;
int16_t x3896 = 2;
int16_t x4037 = -11;
volatile int8_t x4072 = 1;
volatile int64_t t75 = 40903514498661547LL;
int8_t x4077 = -1;
static uint8_t x4182 = UINT8_MAX;
uint16_t x4233 = 2U;
uint16_t x4292 = 0U;
uint32_t x4406 = 16U;
static int64_t x4438 = -68LL;
uint8_t x4440 = 1U;
uint8_t x4566 = 5U;
volatile uint64_t t87 = 8518658172LLU;
int32_t t88 = -1928392;
volatile int32_t t89 = -2;
volatile int8_t x4829 = INT8_MAX;
volatile int16_t x4834 = INT16_MIN;
static volatile uint16_t x4988 = 1U;
int8_t x5074 = 7;
static volatile int16_t x5076 = 1;
volatile int32_t t97 = -6364640;
int64_t x5121 = INT64_MIN;
int16_t x5124 = 4;
int8_t x5144 = 10;


void f0(void) {
	static uint32_t x9 = 20860U;
	uint32_t x11 = UINT32_MAX;
	volatile uint16_t x12 = 25U;
	static volatile uint32_t t0 = 200858U;

	t0 = ((x9==x10)&(x11>>x12));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x54 = -1;
	uint32_t x55 = 285302067U;
	int8_t x56 = 0;
	volatile uint32_t t1 = 4U;

	t1 = ((x53==x54)&(x55>>x56));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x153 = 88U;
	static uint8_t x155 = UINT8_MAX;
	int16_t x156 = 7;
	int32_t t2 = -493532296;

	t2 = ((x153==x154)&(x155>>x156));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x269 = 97U;
	int8_t x270 = INT8_MAX;
	volatile int64_t t3 = -494492LL;

	t3 = ((x269==x270)&(x271>>x272));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x285 = -1;
	uint16_t x286 = 10U;
	int8_t x287 = 1;
	uint16_t x288 = 0U;
	volatile int32_t t4 = 6;

	t4 = ((x285==x286)&(x287>>x288));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x353 = INT64_MIN;
	uint16_t x355 = 0U;
	uint64_t x356 = 1LLU;
	static int32_t t5 = -31994;

	t5 = ((x353==x354)&(x355>>x356));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x366 = 977599U;
	volatile int32_t x367 = INT32_MAX;
	int32_t t6 = -124160577;

	t6 = ((x365==x366)&(x367>>x368));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x429 = UINT8_MAX;
	static int32_t x430 = INT32_MIN;
	uint32_t x431 = 53051039U;
	uint16_t x432 = 0U;
	uint32_t t7 = 119U;

	t7 = ((x429==x430)&(x431>>x432));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x493 = INT16_MAX;
	uint32_t x495 = UINT32_MAX;
	uint16_t x496 = 4U;

	t8 = ((x493==x494)&(x495>>x496));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x641 = -5890;
	uint64_t x643 = 32923LLU;
	int64_t x644 = 0LL;

	t9 = ((x641==x642)&(x643>>x644));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x650 = INT8_MIN;
	int32_t x651 = 7680779;
	static int32_t x652 = 0;
	volatile int32_t t10 = -698488263;

	t10 = ((x649==x650)&(x651>>x652));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x801 = -1LL;
	uint64_t x803 = 235835845428LLU;
	uint16_t x804 = 6U;
	uint64_t t11 = 715742301LLU;

	t11 = ((x801==x802)&(x803>>x804));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x845 = 10U;
	int64_t x846 = INT64_MAX;

	t12 = ((x845==x846)&(x847>>x848));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x881 = -1;
	int32_t x882 = -1;
	uint8_t x884 = 17U;
	static volatile int32_t t13 = 17073233;

	t13 = ((x881==x882)&(x883>>x884));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x902 = INT16_MIN;
	volatile uint8_t x903 = 61U;
	static int8_t x904 = 6;

	t14 = ((x901==x902)&(x903>>x904));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x930 = -56;
	int32_t t15 = -43;

	t15 = ((x929==x930)&(x931>>x932));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1013 = INT32_MAX;
	uint16_t x1014 = UINT16_MAX;
	static int8_t x1015 = INT8_MAX;
	uint8_t x1016 = 3U;
	volatile int32_t t16 = 1;

	t16 = ((x1013==x1014)&(x1015>>x1016));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1026 = 7U;
	uint64_t x1027 = 2839521872318465LLU;
	static uint32_t x1028 = 6U;
	volatile uint64_t t17 = 47146LLU;

	t17 = ((x1025==x1026)&(x1027>>x1028));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1069 = INT16_MIN;
	uint64_t x1070 = 159449970990LLU;
	int16_t x1071 = 881;
	int32_t t18 = -812638;

	t18 = ((x1069==x1070)&(x1071>>x1072));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1146 = 1U;
	static int8_t x1147 = INT8_MAX;
	volatile int32_t t19 = 23421583;

	t19 = ((x1145==x1146)&(x1147>>x1148));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1153 = UINT8_MAX;
	int16_t x1154 = 114;
	int8_t x1155 = INT8_MAX;
	volatile uint16_t x1156 = 2U;

	t20 = ((x1153==x1154)&(x1155>>x1156));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1197 = INT64_MAX;
	uint16_t x1198 = UINT16_MAX;
	static int8_t x1199 = 1;
	volatile int16_t x1200 = 3;
	int32_t t21 = -100907;

	t21 = ((x1197==x1198)&(x1199>>x1200));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1217 = -255509;
	static uint8_t x1218 = UINT8_MAX;
	uint32_t x1219 = 127292U;
	uint32_t x1220 = 8U;
	uint32_t t22 = 3555U;

	t22 = ((x1217==x1218)&(x1219>>x1220));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1237 = 0;
	int32_t x1238 = INT32_MAX;
	int8_t x1239 = INT8_MAX;

	t23 = ((x1237==x1238)&(x1239>>x1240));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1253 = 0U;
	volatile int8_t x1254 = INT8_MAX;
	uint16_t x1256 = 3U;
	int32_t t24 = 32343;

	t24 = ((x1253==x1254)&(x1255>>x1256));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1309 = INT16_MIN;
	int64_t x1310 = INT64_MIN;
	volatile uint8_t x1311 = UINT8_MAX;
	int32_t t25 = -2;

	t25 = ((x1309==x1310)&(x1311>>x1312));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1389 = 11432431U;
	int64_t x1390 = 13939LL;
	int64_t x1391 = 902935202LL;
	uint32_t x1392 = 0U;
	volatile int64_t t26 = 239408LL;

	t26 = ((x1389==x1390)&(x1391>>x1392));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1465 = INT64_MIN;
	int64_t x1466 = -1LL;
	int32_t x1467 = INT32_MAX;
	int8_t x1468 = 5;
	volatile int32_t t27 = -1662239;

	t27 = ((x1465==x1466)&(x1467>>x1468));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1501 = -1;
	volatile int64_t x1502 = INT64_MIN;
	static uint64_t x1503 = 171673LLU;
	volatile uint16_t x1504 = 1U;
	uint64_t t28 = 2003165209872662LLU;

	t28 = ((x1501==x1502)&(x1503>>x1504));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1529 = INT32_MAX;
	static int64_t x1530 = 37020LL;
	uint8_t x1531 = UINT8_MAX;
	uint32_t x1532 = 25U;
	static int32_t t29 = 0;

	t29 = ((x1529==x1530)&(x1531>>x1532));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1545 = -1;
	int16_t x1546 = -16;
	static int64_t x1547 = INT64_MAX;
	volatile uint8_t x1548 = 25U;
	volatile int64_t t30 = -16318289792567LL;

	t30 = ((x1545==x1546)&(x1547>>x1548));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1561 = INT32_MAX;
	uint16_t x1563 = 399U;
	static uint8_t x1564 = 10U;
	volatile int32_t t31 = -54949468;

	t31 = ((x1561==x1562)&(x1563>>x1564));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1589 = INT64_MIN;
	int32_t x1590 = INT32_MAX;
	volatile int8_t x1591 = INT8_MAX;
	static int64_t x1592 = 11LL;
	volatile int32_t t32 = -237520;

	t32 = ((x1589==x1590)&(x1591>>x1592));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1593 = -523651837480LL;
	int16_t x1594 = INT16_MIN;
	int32_t x1595 = INT32_MAX;
	int8_t x1596 = 1;

	t33 = ((x1593==x1594)&(x1595>>x1596));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1817 = INT8_MIN;
	volatile int8_t x1818 = 47;
	int16_t x1819 = 10;

	t34 = ((x1817==x1818)&(x1819>>x1820));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1918 = -1LL;
	volatile uint32_t x1919 = 574U;
	int8_t x1920 = 1;
	volatile uint32_t t35 = 481937U;

	t35 = ((x1917==x1918)&(x1919>>x1920));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1977 = 6;
	int64_t x1979 = INT64_MAX;
	volatile int64_t t36 = 0LL;

	t36 = ((x1977==x1978)&(x1979>>x1980));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2017 = 89214;
	uint16_t x2018 = 158U;
	uint32_t x2020 = 0U;
	int32_t t37 = 79954;

	t37 = ((x2017==x2018)&(x2019>>x2020));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2122 = -223118;
	static int32_t x2123 = INT32_MAX;
	uint64_t x2124 = 2LLU;

	t38 = ((x2121==x2122)&(x2123>>x2124));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2149 = INT16_MAX;
	int16_t x2150 = 320;
	uint64_t x2151 = 159226LLU;
	static int32_t x2152 = 0;
	volatile uint64_t t39 = 971LLU;

	t39 = ((x2149==x2150)&(x2151>>x2152));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2173 = -1;
	volatile uint16_t x2174 = 86U;
	int8_t x2176 = 21;
	volatile int64_t t40 = 46166LL;

	t40 = ((x2173==x2174)&(x2175>>x2176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2209 = -18LL;
	uint64_t x2210 = UINT64_MAX;
	int32_t x2211 = INT32_MAX;
	int8_t x2212 = 1;
	volatile int32_t t41 = 99957;

	t41 = ((x2209==x2210)&(x2211>>x2212));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2258 = INT32_MIN;
	uint8_t x2259 = 3U;
	static uint8_t x2260 = 0U;

	t42 = ((x2257==x2258)&(x2259>>x2260));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2297 = INT32_MIN;
	volatile uint8_t x2299 = UINT8_MAX;
	uint8_t x2300 = 3U;
	volatile int32_t t43 = 11;

	t43 = ((x2297==x2298)&(x2299>>x2300));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2517 = 293551369543LL;
	uint16_t x2518 = 6U;
	int32_t x2519 = INT32_MAX;
	volatile int32_t t44 = -5;

	t44 = ((x2517==x2518)&(x2519>>x2520));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2545 = UINT8_MAX;
	int8_t x2546 = -1;
	int64_t x2547 = 7136LL;
	volatile uint8_t x2548 = 0U;
	static volatile int64_t t45 = 170295405514052839LL;

	t45 = ((x2545==x2546)&(x2547>>x2548));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2690 = -46;
	static int8_t x2691 = INT8_MAX;
	volatile int32_t t46 = 1;

	t46 = ((x2689==x2690)&(x2691>>x2692));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2754 = -29;
	static uint16_t x2755 = UINT16_MAX;
	uint8_t x2756 = 14U;
	int32_t t47 = -2176402;

	t47 = ((x2753==x2754)&(x2755>>x2756));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2765 = 46;
	volatile int32_t x2766 = INT32_MAX;
	volatile int16_t x2767 = 0;
	uint8_t x2768 = 21U;
	int32_t t48 = 7;

	t48 = ((x2765==x2766)&(x2767>>x2768));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2837 = -1LL;
	uint64_t x2839 = 4625LLU;
	static uint8_t x2840 = 2U;
	volatile uint64_t t49 = 3619963706275136716LLU;

	t49 = ((x2837==x2838)&(x2839>>x2840));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2873 = INT64_MIN;
	int64_t x2874 = -221160LL;
	static uint8_t x2875 = 104U;
	int32_t t50 = -102469159;

	t50 = ((x2873==x2874)&(x2875>>x2876));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2937 = 67U;
	int16_t x2938 = -24;
	uint64_t x2939 = 23278LLU;
	uint64_t t51 = 159LLU;

	t51 = ((x2937==x2938)&(x2939>>x2940));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2974 = -1LL;
	volatile uint16_t x2976 = 7U;
	volatile int32_t t52 = 1061185;

	t52 = ((x2973==x2974)&(x2975>>x2976));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3145 = 35U;
	uint8_t x3146 = 30U;
	int64_t x3147 = 1LL;
	uint64_t x3148 = 12LLU;
	int64_t t53 = 13394944LL;

	t53 = ((x3145==x3146)&(x3147>>x3148));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3217 = INT16_MAX;
	int8_t x3218 = INT8_MIN;
	int64_t x3219 = 11717LL;
	int8_t x3220 = 1;
	int64_t t54 = -90513LL;

	t54 = ((x3217==x3218)&(x3219>>x3220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3221 = 429U;
	uint32_t x3222 = 531957U;
	uint64_t x3223 = 23966092079LLU;
	static int16_t x3224 = 1;
	uint64_t t55 = 23LLU;

	t55 = ((x3221==x3222)&(x3223>>x3224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3273 = 1334486468U;
	volatile int32_t x3274 = -1;
	int16_t x3276 = 0;

	t56 = ((x3273==x3274)&(x3275>>x3276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3334 = UINT64_MAX;
	static int64_t x3335 = 15537910LL;
	int64_t t57 = -3993738725544404LL;

	t57 = ((x3333==x3334)&(x3335>>x3336));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3337 = -1;
	int64_t x3338 = INT64_MIN;
	uint32_t x3339 = 45808450U;
	uint8_t x3340 = 12U;

	t58 = ((x3337==x3338)&(x3339>>x3340));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3377 = INT8_MIN;
	static volatile int8_t x3380 = 0;

	t59 = ((x3377==x3378)&(x3379>>x3380));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3485 = -1LL;
	uint16_t x3486 = UINT16_MAX;
	volatile int32_t x3487 = INT32_MAX;
	static uint16_t x3488 = 9U;
	int32_t t60 = -52197111;

	t60 = ((x3485==x3486)&(x3487>>x3488));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3497 = INT64_MAX;
	volatile uint16_t x3498 = UINT16_MAX;
	static uint32_t x3499 = UINT32_MAX;
	static int16_t x3500 = 5;
	volatile uint32_t t61 = 1620U;

	t61 = ((x3497==x3498)&(x3499>>x3500));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3509 = INT16_MAX;
	int16_t x3510 = 5;
	int8_t x3512 = 3;
	static int32_t t62 = -2260;

	t62 = ((x3509==x3510)&(x3511>>x3512));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3514 = UINT64_MAX;
	uint16_t x3515 = 16U;
	int16_t x3516 = 0;

	t63 = ((x3513==x3514)&(x3515>>x3516));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3535 = 0;
	uint8_t x3536 = 7U;
	static volatile int32_t t64 = -313584;

	t64 = ((x3533==x3534)&(x3535>>x3536));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3622 = -9;
	uint64_t x3623 = UINT64_MAX;
	int8_t x3624 = 29;
	uint64_t t65 = 15994LLU;

	t65 = ((x3621==x3622)&(x3623>>x3624));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x3634 = INT16_MIN;
	uint8_t x3635 = 3U;
	int16_t x3636 = 8;
	volatile int32_t t66 = 17825107;

	t66 = ((x3633==x3634)&(x3635>>x3636));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3693 = INT8_MIN;
	volatile uint64_t x3694 = UINT64_MAX;
	uint8_t x3695 = 1U;
	int16_t x3696 = 0;
	int32_t t67 = -21607;

	t67 = ((x3693==x3694)&(x3695>>x3696));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3858 = -1LL;
	uint8_t x3859 = 89U;
	int32_t t68 = -690883;

	t68 = ((x3857==x3858)&(x3859>>x3860));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3877 = 45;
	uint64_t x3878 = 491LLU;
	int32_t x3879 = INT32_MAX;
	int16_t x3880 = 0;

	t69 = ((x3877==x3878)&(x3879>>x3880));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3893 = 11786;
	volatile int8_t x3894 = 8;
	int32_t x3895 = 391530906;
	int32_t t70 = 0;

	t70 = ((x3893==x3894)&(x3895>>x3896));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3941 = -1;
	uint8_t x3942 = 60U;
	volatile int32_t x3943 = INT32_MAX;
	uint64_t x3944 = 1LLU;
	static volatile int32_t t71 = 28055504;

	t71 = ((x3941==x3942)&(x3943>>x3944));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3953 = -37;
	int16_t x3954 = -771;
	volatile int64_t x3955 = INT64_MAX;
	int8_t x3956 = 0;
	volatile int64_t t72 = -1161459123LL;

	t72 = ((x3953==x3954)&(x3955>>x3956));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4038 = 444U;
	static uint32_t x4039 = 1981070233U;
	volatile int8_t x4040 = 28;
	static uint32_t t73 = 19747U;

	t73 = ((x4037==x4038)&(x4039>>x4040));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x4069 = 0U;
	static int16_t x4070 = -1;
	int16_t x4071 = INT16_MAX;
	int32_t t74 = -2765415;

	t74 = ((x4069==x4070)&(x4071>>x4072));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4073 = INT32_MIN;
	int64_t x4074 = INT64_MAX;
	int64_t x4075 = INT64_MAX;
	static int8_t x4076 = 0;

	t75 = ((x4073==x4074)&(x4075>>x4076));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4078 = -1;
	int32_t x4079 = INT32_MAX;
	static int16_t x4080 = 1;
	static volatile int32_t t76 = 927819434;

	t76 = ((x4077==x4078)&(x4079>>x4080));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4181 = 56U;
	int64_t x4183 = 1740614LL;
	static volatile uint16_t x4184 = 31U;
	volatile int64_t t77 = -2794970035LL;

	t77 = ((x4181==x4182)&(x4183>>x4184));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4234 = INT64_MAX;
	uint64_t x4235 = UINT64_MAX;
	volatile uint8_t x4236 = 1U;
	volatile uint64_t t78 = 285LLU;

	t78 = ((x4233==x4234)&(x4235>>x4236));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4237 = INT32_MAX;
	static uint16_t x4238 = 237U;
	int64_t x4239 = INT64_MAX;
	int32_t x4240 = 3;
	volatile int64_t t79 = 102018210453226LL;

	t79 = ((x4237==x4238)&(x4239>>x4240));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4241 = INT64_MAX;
	int64_t x4242 = INT64_MIN;
	uint32_t x4243 = UINT32_MAX;
	uint8_t x4244 = 1U;
	static uint32_t t80 = 236U;

	t80 = ((x4241==x4242)&(x4243>>x4244));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4269 = 20411LLU;
	int8_t x4270 = -18;
	static int64_t x4271 = INT64_MAX;
	int8_t x4272 = 11;
	int64_t t81 = -6184LL;

	t81 = ((x4269==x4270)&(x4271>>x4272));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4289 = -1;
	static int16_t x4290 = INT16_MIN;
	int8_t x4291 = INT8_MAX;
	static volatile int32_t t82 = 19333;

	t82 = ((x4289==x4290)&(x4291>>x4292));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4305 = 1795LL;
	int64_t x4306 = 884LL;
	uint64_t x4307 = 70814950822LLU;
	uint8_t x4308 = 5U;
	uint64_t t83 = 7LLU;

	t83 = ((x4305==x4306)&(x4307>>x4308));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4405 = 81583403732025732LLU;
	int8_t x4407 = INT8_MAX;
	uint8_t x4408 = 24U;
	int32_t t84 = 3113;

	t84 = ((x4405==x4406)&(x4407>>x4408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4425 = 376LLU;
	int64_t x4426 = INT64_MIN;
	uint64_t x4427 = UINT64_MAX;
	int16_t x4428 = 2;
	uint64_t t85 = 13741343089918LLU;

	t85 = ((x4425==x4426)&(x4427>>x4428));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4437 = -29081701720636784LL;
	int64_t x4439 = 267885435973774574LL;
	static volatile int64_t t86 = 5LL;

	t86 = ((x4437==x4438)&(x4439>>x4440));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4565 = -1LL;
	volatile uint64_t x4567 = 14673088912838140LLU;
	uint8_t x4568 = 17U;

	t87 = ((x4565==x4566)&(x4567>>x4568));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4585 = UINT8_MAX;
	uint16_t x4586 = UINT16_MAX;
	int8_t x4587 = 0;
	int64_t x4588 = 2LL;

	t88 = ((x4585==x4586)&(x4587>>x4588));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4661 = 1916030;
	static int16_t x4662 = INT16_MAX;
	int8_t x4663 = 2;
	int16_t x4664 = 14;

	t89 = ((x4661==x4662)&(x4663>>x4664));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x4677 = -2019LL;
	int32_t x4678 = 15013;
	volatile int8_t x4679 = 1;
	static uint16_t x4680 = 12U;
	volatile int32_t t90 = -7;

	t90 = ((x4677==x4678)&(x4679>>x4680));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4789 = INT16_MAX;
	int32_t x4790 = INT32_MIN;
	static uint32_t x4791 = 103276U;
	static uint16_t x4792 = 27U;
	volatile uint32_t t91 = 60U;

	t91 = ((x4789==x4790)&(x4791>>x4792));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4830 = -15;
	int8_t x4831 = 18;
	uint8_t x4832 = 5U;
	int32_t t92 = 1;

	t92 = ((x4829==x4830)&(x4831>>x4832));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4833 = INT64_MIN;
	uint8_t x4835 = 6U;
	uint16_t x4836 = 1U;
	volatile int32_t t93 = 72;

	t93 = ((x4833==x4834)&(x4835>>x4836));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4861 = 4;
	static int8_t x4862 = -1;
	volatile int64_t x4863 = INT64_MAX;
	static int16_t x4864 = 1;
	volatile int64_t t94 = -6595560684123LL;

	t94 = ((x4861==x4862)&(x4863>>x4864));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4985 = 0;
	volatile int32_t x4986 = 96431;
	static uint32_t x4987 = 8001U;
	volatile uint32_t t95 = 196U;

	t95 = ((x4985==x4986)&(x4987>>x4988));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5009 = INT32_MAX;
	static int32_t x5010 = -1;
	volatile int8_t x5011 = INT8_MAX;
	static int16_t x5012 = 0;
	int32_t t96 = -12;

	t96 = ((x5009==x5010)&(x5011>>x5012));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5073 = -1;
	uint8_t x5075 = UINT8_MAX;

	t97 = ((x5073==x5074)&(x5075>>x5076));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5122 = INT16_MIN;
	volatile int64_t x5123 = INT64_MAX;
	int64_t t98 = -192284927900826LL;

	t98 = ((x5121==x5122)&(x5123>>x5124));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5141 = UINT32_MAX;
	int16_t x5142 = INT16_MIN;
	int32_t x5143 = INT32_MAX;
	int32_t t99 = -2391334;

	t99 = ((x5141==x5142)&(x5143>>x5144));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x115 = 1U;
int32_t t2 = 477;
static int8_t x224 = 8;
int16_t x229 = -247;
int8_t x312 = 3;
int64_t t8 = 6767221LL;
volatile int64_t x347 = -1LL;
int16_t x675 = INT16_MAX;
uint64_t x682 = UINT64_MAX;
static volatile uint16_t x684 = 7U;
int8_t x758 = -5;
uint8_t x759 = 18U;
uint8_t x897 = 4U;
uint8_t x898 = UINT8_MAX;
int32_t x913 = INT32_MIN;
volatile uint32_t x914 = 3501628U;
static uint8_t x916 = 11U;
volatile uint16_t x931 = 15U;
int32_t t17 = -2;
volatile uint64_t x934 = UINT64_MAX;
volatile uint64_t t18 = 12775310460LLU;
int64_t x1004 = 6LL;
int16_t x1027 = -20;
uint16_t x1275 = 81U;
uint16_t x1276 = 30U;
uint32_t x1303 = 4U;
uint8_t x1340 = 12U;
volatile uint64_t t26 = 33824285080685136LLU;
static int8_t x1420 = 1;
int16_t x1451 = -5;
int64_t t28 = -507960928731826413LL;
volatile int64_t x1585 = -1LL;
uint16_t x1586 = 3857U;
int8_t x1699 = INT8_MIN;
volatile int64_t x1717 = -1LL;
int64_t x1873 = INT64_MIN;
int32_t x1874 = 4991;
static volatile uint16_t x1898 = 5133U;
volatile int32_t t37 = -273;
uint8_t x1943 = 70U;
volatile uint32_t x1958 = 1843597U;
int16_t x1986 = INT16_MIN;
int64_t x1987 = 3000LL;
uint16_t x2047 = 1328U;
volatile uint64_t t45 = 2017433730LLU;
static uint16_t x2074 = 11U;
int64_t x2075 = INT64_MIN;
volatile int64_t t46 = -64036501912774LL;
static uint8_t x2100 = 6U;
uint16_t x2384 = 1U;
uint64_t t48 = 102954LLU;
static volatile int16_t x2410 = INT16_MIN;
int32_t t53 = 21;
uint8_t x2527 = UINT8_MAX;
volatile uint8_t x2556 = 16U;
static uint64_t x2580 = 1LLU;
int8_t x2629 = 41;
volatile uint32_t t58 = 7U;
static int16_t x2657 = -1;
static uint64_t x2658 = UINT64_MAX;
static volatile uint8_t x2674 = 13U;
static uint64_t x2745 = 627135465LLU;
uint8_t x2865 = UINT8_MAX;
int8_t x2921 = 9;
static int16_t x2970 = 178;
int64_t x2971 = -1LL;
static volatile int64_t t67 = 12LL;
static volatile uint8_t x3030 = UINT8_MAX;
static uint32_t x3090 = UINT32_MAX;
uint16_t x3156 = 12U;
int8_t x3176 = 3;
int8_t x3205 = -3;
static uint8_t x3266 = UINT8_MAX;
int16_t x3328 = 0;
volatile int64_t t78 = -15LL;
static int8_t x3358 = 5;
int64_t x3359 = 8384LL;
uint16_t x3403 = 2722U;
int64_t t81 = -1036052515LL;
uint64_t x3449 = 20514829746LLU;
volatile uint64_t t83 = 17793LLU;
uint16_t x3483 = 27954U;
uint16_t x3514 = 1U;
static volatile uint32_t t85 = 2282U;
int8_t x3530 = INT8_MAX;
volatile int32_t t86 = 896;
uint64_t t87 = 84460997LLU;
volatile int32_t x3625 = -1;
int32_t t89 = 226697;
uint16_t x3636 = 12U;
int16_t x3697 = -417;
uint64_t x3769 = 1155981143797331225LLU;
uint64_t x3770 = UINT64_MAX;
uint32_t x3789 = UINT32_MAX;
uint64_t t93 = 8372902872LLU;
static int64_t x3871 = 15LL;
volatile uint8_t x3892 = 14U;
static volatile uint32_t t95 = 14968U;
int64_t x3965 = -1LL;
volatile uint8_t x3968 = 1U;
static uint16_t x3970 = UINT16_MAX;
volatile int64_t x3990 = INT64_MIN;
int16_t x4017 = INT16_MAX;
int8_t x4019 = INT8_MIN;


void f0(void) {
	int32_t x93 = 70579;
	uint16_t x94 = 116U;
	static uint32_t x95 = 115U;
	int64_t x96 = 8LL;
	volatile uint32_t t0 = 512223147U;

	t0 = (x93*((x94&x95)<<x96));

	if (t0 != 2023641088U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x113 = UINT64_MAX;
	int16_t x114 = -3586;
	uint8_t x116 = 6U;
	static uint64_t t1 = 19427033612LLU;

	t1 = (x113*((x114&x115)<<x116));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x121 = 230;
	static int16_t x122 = 8;
	int32_t x123 = 1007;
	uint16_t x124 = 3U;

	t2 = (x121*((x122&x123)<<x124));

	if (t2 != 14720) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x133 = 19U;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 2621U;
	uint32_t x136 = 6U;
	volatile int32_t t3 = -248668134;

	t3 = (x133*((x134&x135)<<x136));

	if (t3 != 3187136) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x185 = -1;
	uint8_t x186 = UINT8_MAX;
	int64_t x187 = -1LL;
	uint8_t x188 = 24U;
	volatile int64_t t4 = 111238386675858344LL;

	t4 = (x185*((x186&x187)<<x188));

	if (t4 != -4278190080LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x221 = 60877U;
	uint32_t x222 = 125165318U;
	int8_t x223 = 33;
	static uint32_t t5 = 518413U;

	t5 = (x221*((x222&x223)<<x224));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x230 = 0;
	volatile int16_t x231 = -3;
	volatile uint16_t x232 = 2U;
	int32_t t6 = 126346;

	t6 = (x229*((x230&x231)<<x232));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x277 = 96U;
	volatile int64_t x278 = -61876042125974LL;
	volatile uint8_t x279 = 16U;
	uint64_t x280 = 1LLU;
	volatile int64_t t7 = 519567634LL;

	t7 = (x277*((x278&x279)<<x280));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x309 = 648847009U;
	static volatile int64_t x310 = INT64_MIN;
	uint8_t x311 = 1U;

	t8 = (x309*((x310&x311)<<x312));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x345 = INT8_MAX;
	uint64_t x346 = 780LLU;
	uint32_t x348 = 2U;
	volatile uint64_t t9 = 6037815878628LLU;

	t9 = (x345*((x346&x347)<<x348));

	if (t9 != 396240LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x517 = -622LL;
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = 15;
	uint16_t x520 = 15U;
	uint64_t t10 = 200014LLU;

	t10 = (x517*((x518&x519)<<x520));

	if (t10 != 18446744073403826176LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x561 = UINT8_MAX;
	int16_t x562 = INT16_MIN;
	volatile uint8_t x563 = 3U;
	volatile uint8_t x564 = 10U;
	int32_t t11 = 1;

	t11 = (x561*((x562&x563)<<x564));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x673 = -1;
	int16_t x674 = INT16_MIN;
	uint8_t x676 = 7U;
	static volatile int32_t t12 = -91081;

	t12 = (x673*((x674&x675)<<x676));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x681 = UINT16_MAX;
	static int8_t x683 = 1;
	volatile uint64_t t13 = 26876414755LLU;

	t13 = (x681*((x682&x683)<<x684));

	if (t13 != 8388480LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x757 = INT8_MAX;
	uint8_t x760 = 0U;
	volatile int32_t t14 = -22252653;

	t14 = (x757*((x758&x759)<<x760));

	if (t14 != 2286) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x899 = INT64_MIN;
	volatile int8_t x900 = 0;
	int64_t t15 = -15427050244LL;

	t15 = (x897*((x898&x899)<<x900));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x915 = INT16_MIN;
	uint32_t t16 = 6341243U;

	t16 = (x913*((x914&x915)<<x916));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x929 = INT16_MIN;
	int8_t x930 = INT8_MAX;
	static uint64_t x932 = 5LLU;

	t17 = (x929*((x930&x931)<<x932));

	if (t17 != -15728640) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x933 = INT64_MAX;
	int8_t x935 = -1;
	int8_t x936 = 1;

	t18 = (x933*((x934&x935)<<x936));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1001 = UINT32_MAX;
	uint32_t x1002 = 78U;
	volatile int32_t x1003 = INT32_MIN;
	uint32_t t19 = 1U;

	t19 = (x1001*((x1002&x1003)<<x1004));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1025 = -324152779892LL;
	uint16_t x1026 = UINT16_MAX;
	volatile int8_t x1028 = 1;
	int64_t t20 = -37074566LL;

	t20 = (x1025*((x1026&x1027)<<x1028));

	if (t20 != -42474387054808544LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1037 = INT8_MIN;
	static volatile uint64_t x1038 = UINT64_MAX;
	int64_t x1039 = INT64_MIN;
	static int32_t x1040 = 0;
	volatile uint64_t t21 = 584647LLU;

	t21 = (x1037*((x1038&x1039)<<x1040));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1273 = UINT64_MAX;
	static volatile int16_t x1274 = 7;
	static volatile uint64_t t22 = 329LLU;

	t22 = (x1273*((x1274&x1275)<<x1276));

	if (t22 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1301 = 23011228U;
	uint16_t x1302 = UINT16_MAX;
	int16_t x1304 = 1;
	volatile uint32_t t23 = 22455709U;

	t23 = (x1301*((x1302&x1303)<<x1304));

	if (t23 != 184089824U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1337 = INT32_MIN;
	int64_t x1338 = INT64_MAX;
	uint16_t x1339 = 106U;
	volatile int64_t t24 = 955764945584LL;

	t24 = (x1337*((x1338&x1339)<<x1340));

	if (t24 != -932385860354048LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1357 = 126U;
	int32_t x1358 = -1;
	static uint64_t x1359 = 770805896LLU;
	int8_t x1360 = 0;
	volatile uint64_t t25 = 773711998321281300LLU;

	t25 = (x1357*((x1358&x1359)<<x1360));

	if (t25 != 97121542896LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1381 = -1;
	int64_t x1382 = INT64_MIN;
	volatile uint64_t x1383 = UINT64_MAX;
	uint8_t x1384 = 24U;

	t26 = (x1381*((x1382&x1383)<<x1384));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1417 = 499U;
	int8_t x1418 = -1;
	int32_t x1419 = 16;
	uint32_t t27 = 183U;

	t27 = (x1417*((x1418&x1419)<<x1420));

	if (t27 != 15968U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1449 = INT64_MIN;
	uint16_t x1450 = 0U;
	int8_t x1452 = 29;

	t28 = (x1449*((x1450&x1451)<<x1452));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1505 = -1;
	int8_t x1506 = -12;
	uint64_t x1507 = 5672895925853LLU;
	int8_t x1508 = 2;
	uint64_t t29 = 2037379177529LLU;

	t29 = (x1505*((x1506&x1507)<<x1508));

	if (t29 != 18446721382125848240LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1565 = 31U;
	volatile int8_t x1566 = INT8_MAX;
	volatile int64_t x1567 = 3401299LL;
	int32_t x1568 = 7;
	int64_t t30 = -294LL;

	t30 = (x1565*((x1566&x1567)<<x1568));

	if (t30 != 329344LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1587 = INT32_MIN;
	volatile int32_t x1588 = 1;
	int64_t t31 = -214090038925560LL;

	t31 = (x1585*((x1586&x1587)<<x1588));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1697 = INT16_MIN;
	uint32_t x1698 = 1694126705U;
	int8_t x1700 = 0;
	volatile uint32_t t32 = 641593517U;

	t32 = (x1697*((x1698&x1699)<<x1700));

	if (t32 != 3607101440U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1718 = 1U;
	int16_t x1719 = 2;
	uint16_t x1720 = 17U;
	volatile int64_t t33 = 3LL;

	t33 = (x1717*((x1718&x1719)<<x1720));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1801 = -3167;
	volatile int16_t x1802 = INT16_MAX;
	int64_t x1803 = INT64_MAX;
	int32_t x1804 = 4;
	static int64_t t34 = -177LL;

	t34 = (x1801*((x1802&x1803)<<x1804));

	if (t34 != -1660369424LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1875 = 1021388356LLU;
	int16_t x1876 = 8;
	static uint64_t t35 = 26LLU;

	t35 = (x1873*((x1874&x1875)<<x1876));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1881 = -56236LL;
	int64_t x1882 = INT64_MIN;
	int32_t x1883 = INT32_MAX;
	static uint8_t x1884 = 34U;
	int64_t t36 = 644094948567245LL;

	t36 = (x1881*((x1882&x1883)<<x1884));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1897 = 7304;
	volatile int16_t x1899 = -1;
	int8_t x1900 = 0;

	t37 = (x1897*((x1898&x1899)<<x1900));

	if (t37 != 37491432) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1929 = -1;
	int16_t x1930 = 754;
	int8_t x1931 = 27;
	int32_t x1932 = 0;
	int32_t t38 = 828058;

	t38 = (x1929*((x1930&x1931)<<x1932));

	if (t38 != -18) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x1941 = -3;
	static int64_t x1942 = 0LL;
	uint32_t x1944 = 1U;
	int64_t t39 = 0LL;

	t39 = (x1941*((x1942&x1943)<<x1944));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1957 = 74090U;
	int32_t x1959 = 163099630;
	uint64_t x1960 = 5LLU;
	static uint32_t t40 = 3U;

	t40 = (x1957*((x1958&x1959)<<x1960));

	if (t40 != 4221435648U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1973 = -709;
	uint16_t x1974 = 1772U;
	static int32_t x1975 = INT32_MIN;
	volatile uint8_t x1976 = 0U;
	static volatile int32_t t41 = -649;

	t41 = (x1973*((x1974&x1975)<<x1976));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1977 = -1LL;
	uint32_t x1978 = UINT32_MAX;
	int8_t x1979 = INT8_MIN;
	int8_t x1980 = 2;
	int64_t t42 = 21LL;

	t42 = (x1977*((x1978&x1979)<<x1980));

	if (t42 != -4294966784LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1985 = INT64_MAX;
	int8_t x1988 = 0;
	volatile int64_t t43 = -5582LL;

	t43 = (x1985*((x1986&x1987)<<x1988));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2045 = -1;
	static volatile int64_t x2046 = INT64_MAX;
	static int8_t x2048 = 0;
	static int64_t t44 = 6798944272156319LL;

	t44 = (x2045*((x2046&x2047)<<x2048));

	if (t44 != -1328LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2049 = UINT64_MAX;
	int32_t x2050 = INT32_MIN;
	uint32_t x2051 = UINT32_MAX;
	int64_t x2052 = 1LL;

	t45 = (x2049*((x2050&x2051)<<x2052));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2073 = -1LL;
	uint16_t x2076 = 45U;

	t46 = (x2073*((x2074&x2075)<<x2076));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2097 = INT16_MAX;
	int16_t x2098 = -1;
	static volatile uint8_t x2099 = 0U;
	volatile int32_t t47 = -31315887;

	t47 = (x2097*((x2098&x2099)<<x2100));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2381 = INT16_MIN;
	uint64_t x2382 = 1726046409612080LLU;
	int8_t x2383 = 1;

	t48 = (x2381*((x2382&x2383)<<x2384));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2393 = -1LL;
	static int8_t x2394 = -1;
	uint16_t x2395 = 572U;
	int16_t x2396 = 0;
	static volatile int64_t t49 = 27902850171LL;

	t49 = (x2393*((x2394&x2395)<<x2396));

	if (t49 != -572LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2409 = 115845U;
	uint32_t x2411 = UINT32_MAX;
	uint8_t x2412 = 25U;
	uint32_t t50 = 28U;

	t50 = (x2409*((x2410&x2411)<<x2412));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x2417 = -1;
	int16_t x2418 = 4;
	uint16_t x2419 = 200U;
	int8_t x2420 = 1;
	volatile int32_t t51 = 66114805;

	t51 = (x2417*((x2418&x2419)<<x2420));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2481 = INT8_MIN;
	uint16_t x2482 = 229U;
	static uint8_t x2483 = 0U;
	volatile uint16_t x2484 = 10U;
	volatile int32_t t52 = 976942;

	t52 = (x2481*((x2482&x2483)<<x2484));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2505 = INT32_MIN;
	int16_t x2506 = 233;
	int16_t x2507 = INT16_MIN;
	int16_t x2508 = 1;

	t53 = (x2505*((x2506&x2507)<<x2508));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2525 = 233150313558575LL;
	volatile int64_t x2526 = -1LL;
	volatile int64_t x2528 = 1LL;
	int64_t t54 = -6256225LL;

	t54 = (x2525*((x2526&x2527)<<x2528));

	if (t54 != 118906659914873250LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2533 = INT16_MIN;
	int64_t x2534 = -662085303LL;
	static uint16_t x2535 = 2U;
	volatile uint16_t x2536 = 53U;
	int64_t t55 = -64097239768LL;

	t55 = (x2533*((x2534&x2535)<<x2536));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2553 = -1;
	uint16_t x2554 = UINT16_MAX;
	int64_t x2555 = INT64_MAX;
	int64_t t56 = 1365591036725LL;

	t56 = (x2553*((x2554&x2555)<<x2556));

	if (t56 != -4294901760LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x2577 = UINT8_MAX;
	static volatile int32_t x2578 = INT32_MIN;
	uint8_t x2579 = UINT8_MAX;
	volatile int32_t t57 = 82556;

	t57 = (x2577*((x2578&x2579)<<x2580));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2630 = 492188122U;
	volatile int32_t x2631 = INT32_MAX;
	uint32_t x2632 = 5U;

	t58 = (x2629*((x2630&x2631)<<x2632));

	if (t58 != 1505721664U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2659 = INT64_MAX;
	static int16_t x2660 = 0;
	uint64_t t59 = 55518667401LLU;

	t59 = (x2657*((x2658&x2659)<<x2660));

	if (t59 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2673 = 959247059U;
	int8_t x2675 = -1;
	uint8_t x2676 = 0U;
	volatile uint32_t t60 = 171U;

	t60 = (x2673*((x2674&x2675)<<x2676));

	if (t60 != 3880277175U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2733 = UINT64_MAX;
	volatile int32_t x2734 = INT32_MIN;
	uint64_t x2735 = 3480209205113854658LLU;
	uint16_t x2736 = 56U;
	volatile uint64_t t61 = 331533573506LLU;

	t61 = (x2733*((x2734&x2735)<<x2736));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2746 = 268347;
	int16_t x2747 = 12922;
	uint16_t x2748 = 5U;
	uint64_t t62 = 0LLU;

	t62 = (x2745*((x2746&x2747)<<x2748));

	if (t62 != 83363863091520LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2866 = 219LL;
	int32_t x2867 = -611149;
	static volatile uint64_t x2868 = 20LLU;
	static int64_t t63 = 117780910921264LL;

	t63 = (x2865*((x2866&x2867)<<x2868));

	if (t63 != 39305871360LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2873 = 61;
	static volatile int8_t x2874 = INT8_MIN;
	uint64_t x2875 = 234817LLU;
	uint16_t x2876 = 0U;
	volatile uint64_t t64 = 65LLU;

	t64 = (x2873*((x2874&x2875)<<x2876));

	if (t64 != 14319872LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2905 = INT64_MIN;
	uint16_t x2906 = UINT16_MAX;
	uint64_t x2907 = 207538522019486745LLU;
	uint32_t x2908 = 5U;
	static volatile uint64_t t65 = 67575936734407LLU;

	t65 = (x2905*((x2906&x2907)<<x2908));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2922 = 34864970178LLU;
	uint64_t x2923 = 6638016090125588726LLU;
	volatile int8_t x2924 = 51;
	volatile uint64_t t66 = 225551306LLU;

	t66 = (x2921*((x2922&x2923)<<x2924));

	if (t66 != 17766700529976606720LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2969 = INT16_MIN;
	uint8_t x2972 = 0U;

	t67 = (x2969*((x2970&x2971)<<x2972));

	if (t67 != -5832704LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2977 = 31472U;
	uint16_t x2978 = 162U;
	static uint64_t x2979 = 119248773LLU;
	int32_t x2980 = 17;
	uint64_t t68 = 2065100LLU;

	t68 = (x2977*((x2978&x2979)<<x2980));

	if (t68 != 528012541952LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3029 = 13;
	uint32_t x3031 = UINT32_MAX;
	int8_t x3032 = 2;
	volatile uint32_t t69 = 11609914U;

	t69 = (x3029*((x3030&x3031)<<x3032));

	if (t69 != 13260U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3089 = INT64_MAX;
	int64_t x3091 = INT64_MIN;
	int16_t x3092 = 1;
	int64_t t70 = 2007LL;

	t70 = (x3089*((x3090&x3091)<<x3092));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3153 = INT16_MIN;
	int32_t x3154 = INT32_MIN;
	uint64_t x3155 = UINT64_MAX;
	static volatile uint64_t t71 = 3762131273789648121LLU;

	t71 = (x3153*((x3154&x3155)<<x3156));

	if (t71 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3173 = 363LLU;
	int64_t x3174 = -57065175968087860LL;
	uint64_t x3175 = 3512307639288LLU;
	uint64_t t72 = 2805947291963596LLU;

	t72 = (x3173*((x3174&x3175)<<x3176));

	if (t72 != 9582124349316288LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3181 = INT16_MAX;
	static uint8_t x3182 = 71U;
	uint16_t x3183 = UINT16_MAX;
	uint8_t x3184 = 3U;
	static int32_t t73 = 303449614;

	t73 = (x3181*((x3182&x3183)<<x3184));

	if (t73 != 18611656) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3206 = INT32_MIN;
	uint64_t x3207 = 3560494379827LLU;
	volatile uint8_t x3208 = 0U;
	static uint64_t t74 = 16026LLU;

	t74 = (x3205*((x3206&x3207)<<x3208));

	if (t74 != 18446733398568337408LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3265 = INT8_MIN;
	int8_t x3267 = INT8_MIN;
	volatile uint8_t x3268 = 6U;
	int32_t t75 = -10543265;

	t75 = (x3265*((x3266&x3267)<<x3268));

	if (t75 != -1048576) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3285 = -4;
	int64_t x3286 = -20198767907LL;
	uint8_t x3287 = 33U;
	volatile uint8_t x3288 = 2U;
	volatile int64_t t76 = 1206LL;

	t76 = (x3285*((x3286&x3287)<<x3288));

	if (t76 != -16LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3309 = INT32_MAX;
	int16_t x3310 = 308;
	uint64_t x3311 = 3499499168877LLU;
	uint32_t x3312 = 0U;
	static uint64_t t77 = 37052151LLU;

	t77 = (x3309*((x3310&x3311)<<x3312));

	if (t77 != 77309411292LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x3325 = 537635643253LL;
	int64_t x3326 = INT64_MIN;
	uint16_t x3327 = 157U;

	t78 = (x3325*((x3326&x3327)<<x3328));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3357 = 2988616U;
	uint16_t x3360 = 1U;
	int64_t t79 = -26491433855852LL;

	t79 = (x3357*((x3358&x3359)<<x3360));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3401 = UINT16_MAX;
	int8_t x3402 = 1;
	uint8_t x3404 = 0U;
	volatile int32_t t80 = -1;

	t80 = (x3401*((x3402&x3403)<<x3404));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3409 = INT8_MIN;
	volatile int64_t x3410 = INT64_MIN;
	uint16_t x3411 = UINT16_MAX;
	int8_t x3412 = 15;

	t81 = (x3409*((x3410&x3411)<<x3412));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3450 = 106158U;
	uint16_t x3451 = 8U;
	uint8_t x3452 = 30U;
	volatile uint64_t t82 = 10096493935LLU;

	t82 = (x3449*((x3450&x3451)<<x3452));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3469 = 15973873LLU;
	uint16_t x3470 = 4U;
	uint32_t x3471 = UINT32_MAX;
	static volatile uint8_t x3472 = 1U;

	t83 = (x3469*((x3470&x3471)<<x3472));

	if (t83 != 127790984LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x3481 = INT32_MIN;
	int64_t x3482 = INT64_MIN;
	uint32_t x3484 = 0U;
	volatile int64_t t84 = 13378LL;

	t84 = (x3481*((x3482&x3483)<<x3484));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x3513 = UINT32_MAX;
	static volatile int32_t x3515 = INT32_MIN;
	int8_t x3516 = 1;

	t85 = (x3513*((x3514&x3515)<<x3516));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3529 = -1;
	volatile int32_t x3531 = -1;
	volatile uint8_t x3532 = 0U;

	t86 = (x3529*((x3530&x3531)<<x3532));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3569 = 5820440804LLU;
	int8_t x3570 = -53;
	uint32_t x3571 = UINT32_MAX;
	static volatile uint16_t x3572 = 2U;

	t87 = (x3569*((x3570&x3571)<<x3572));

	if (t87 != 6551857593840943920LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3617 = UINT64_MAX;
	uint8_t x3618 = UINT8_MAX;
	int64_t x3619 = INT64_MIN;
	volatile uint32_t x3620 = 31U;
	volatile uint64_t t88 = 1LLU;

	t88 = (x3617*((x3618&x3619)<<x3620));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3626 = UINT8_MAX;
	int16_t x3627 = INT16_MIN;
	static uint16_t x3628 = 1U;

	t89 = (x3625*((x3626&x3627)<<x3628));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3633 = -1;
	uint16_t x3634 = 93U;
	int8_t x3635 = 0;
	int32_t t90 = -476;

	t90 = (x3633*((x3634&x3635)<<x3636));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3698 = 918832213017464468LLU;
	volatile int8_t x3699 = INT8_MAX;
	static uint8_t x3700 = 60U;
	uint64_t t91 = 6430896259278942791LLU;

	t91 = (x3697*((x3698&x3699)<<x3700));

	if (t91 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x3771 = INT8_MIN;
	static volatile int8_t x3772 = 0;
	uint64_t t92 = 50890LLU;

	t92 = (x3769*((x3770&x3771)<<x3772));

	if (t92 != 18055110257327567744LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x3790 = 31512LLU;
	volatile int64_t x3791 = -1LL;
	uint64_t x3792 = 2LLU;

	t93 = (x3789*((x3790&x3791)<<x3792));

	if (t93 != 541372037600160LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3869 = -2;
	int8_t x3870 = INT8_MIN;
	int8_t x3872 = 0;
	int64_t t94 = -985015277503LL;

	t94 = (x3869*((x3870&x3871)<<x3872));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x3889 = 7U;
	uint32_t x3890 = 8151U;
	volatile int8_t x3891 = INT8_MAX;

	t95 = (x3889*((x3890&x3891)<<x3892));

	if (t95 != 9977856U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3966 = 1LL;
	int64_t x3967 = -1LL;
	int64_t t96 = -19980346LL;

	t96 = (x3965*((x3966&x3967)<<x3968));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x3969 = 1232U;
	uint64_t x3971 = 0LLU;
	uint16_t x3972 = 50U;
	static uint64_t t97 = 4122474753383828156LLU;

	t97 = (x3969*((x3970&x3971)<<x3972));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3989 = INT8_MIN;
	static volatile int8_t x3991 = 11;
	int8_t x3992 = 3;
	volatile int64_t t98 = -734286123LL;

	t98 = (x3989*((x3990&x3991)<<x3992));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4018 = 221859LLU;
	volatile uint32_t x4020 = 5U;
	static volatile uint64_t t99 = 12346378LLU;

	t99 = (x4017*((x4018&x4019)<<x4020));

	if (t99 != 232592224256LLU) { NG(); } else { ; }
	
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


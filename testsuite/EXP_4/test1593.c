#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x332 = 301U;
uint8_t x338 = 17U;
uint32_t x342 = 3U;
int8_t x663 = INT8_MIN;
static int32_t x805 = INT32_MAX;
static volatile int32_t t7 = -118143;
uint64_t x813 = 6801LLU;
uint64_t t8 = 47026700697813946LLU;
int64_t x872 = -1LL;
uint16_t x926 = 1U;
static int8_t x927 = INT8_MAX;
volatile uint16_t x928 = 1733U;
int8_t x1060 = INT8_MIN;
volatile int32_t t12 = 890;
uint16_t x1064 = 28039U;
static uint8_t x1214 = 18U;
static volatile uint8_t x1218 = 0U;
volatile uint32_t t16 = UINT32_MAX;
static uint32_t x1370 = 1U;
int16_t x1371 = INT16_MIN;
static int32_t t18 = -89708;
int8_t x1396 = INT8_MAX;
int16_t x1407 = INT16_MIN;
uint64_t t22 = 884233LLU;
static volatile int32_t t24 = -468603514;
int64_t x1685 = 659LL;
static uint32_t x1701 = 4690U;
volatile uint32_t x1702 = 0U;
uint64_t x1741 = 1189584070764LLU;
uint32_t x1742 = 18U;
uint64_t x1747 = 7139941LLU;
uint8_t x1806 = 0U;
int16_t x1837 = INT16_MAX;
uint32_t x1838 = 1U;
uint16_t x1878 = 23U;
uint64_t x1879 = UINT64_MAX;
uint8_t x1949 = 2U;
int32_t t36 = -32682007;
uint8_t x2039 = UINT8_MAX;
static int16_t x2040 = INT16_MAX;
volatile int32_t x2122 = 0;
int8_t x2123 = INT8_MIN;
volatile uint64_t x2124 = 59768552063LLU;
static uint64_t x2143 = UINT64_MAX;
volatile int32_t t40 = 195499705;
int16_t x2241 = 28;
static volatile int64_t x2412 = INT64_MIN;
volatile int32_t t43 = -52820660;
volatile uint8_t x2521 = 84U;
static uint8_t x2562 = 1U;
uint16_t x2586 = 2U;
int64_t x2587 = INT64_MIN;
volatile uint32_t x2594 = 1U;
static uint64_t x2740 = 2983LLU;
static volatile int16_t x2776 = INT16_MAX;
int8_t x2858 = 8;
int16_t x2859 = INT16_MIN;
int32_t x2887 = -1;
int16_t x2939 = INT16_MIN;
volatile int32_t t60 = 0;
int32_t x3084 = INT32_MIN;
static int16_t x3097 = INT16_MAX;
uint16_t x3238 = 1U;
uint32_t x3277 = 68U;
volatile uint8_t x3278 = 24U;
volatile uint64_t x3368 = 29497LLU;
uint16_t x3457 = 1U;
volatile int8_t x3458 = 1;
static volatile int16_t x3643 = INT16_MIN;
int32_t x3719 = INT32_MAX;
static volatile int8_t x3726 = 1;
uint16_t x3728 = 2162U;
static volatile uint64_t t75 = 12466929714922LLU;
int64_t x3825 = 2082253888263LL;
int8_t x3828 = INT8_MAX;
int64_t t77 = 524308833706903LL;
volatile int32_t t78 = 898716450;
volatile int64_t t79 = 17LL;
volatile uint16_t x4048 = UINT16_MAX;
uint8_t x4134 = 1U;
volatile uint64_t x4135 = UINT64_MAX;
uint64_t x4196 = 70290951543137441LLU;
static volatile int64_t x4243 = 457390LL;
static uint8_t x4393 = 101U;
int8_t x4395 = -2;
static int8_t x4483 = -1;
volatile int64_t x4505 = 1143105623480665044LL;
uint64_t x4507 = 1995805649835068LLU;
int32_t x4549 = 433530880;
static volatile uint8_t x4761 = 0U;


void f0(void) {
	uint8_t x329 = 0U;
	uint16_t x330 = 1U;
	volatile int32_t x331 = INT32_MIN;
	int32_t t0 = -1317630;

	t0 = (x329>>(x330<<(x331<=x332)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x337 = 14385876LL;
	int64_t x339 = 23370026608LL;
	static int64_t x340 = 26LL;
	int64_t t1 = 3562LL;

	t1 = (x337>>(x338<<(x339<=x340)));

	if (t1 != 109LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = -166272739762803155LL;
	volatile int32_t t2 = -124776;

	t2 = (x341>>(x342<<(x343<=x344)));

	if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x465 = UINT16_MAX;
	int8_t x466 = 12;
	uint64_t x467 = UINT64_MAX;
	volatile int32_t x468 = 262652;
	static volatile int32_t t3 = -117;

	t3 = (x465>>(x466<<(x467<=x468)));

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x521 = INT32_MAX;
	uint8_t x522 = 2U;
	int8_t x523 = INT8_MIN;
	volatile uint16_t x524 = 1575U;
	int32_t t4 = -10327;

	t4 = (x521>>(x522<<(x523<=x524)));

	if (t4 != 134217727) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x661 = INT32_MAX;
	volatile uint8_t x662 = 29U;
	int64_t x664 = -125664876845577694LL;
	int32_t t5 = 90761153;

	t5 = (x661>>(x662<<(x663<=x664)));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x793 = 23;
	static volatile int32_t x794 = 1;
	uint64_t x795 = UINT64_MAX;
	volatile int8_t x796 = 3;
	volatile int32_t t6 = -1;

	t6 = (x793>>(x794<<(x795<=x796)));

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x806 = 15U;
	int8_t x807 = INT8_MIN;
	int8_t x808 = INT8_MAX;

	t7 = (x805>>(x806<<(x807<=x808)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x814 = 20U;
	uint8_t x815 = 3U;
	int64_t x816 = -60204515359LL;

	t8 = (x813>>(x814<<(x815<=x816)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x869 = 5543LL;
	static uint16_t x870 = 18U;
	int8_t x871 = INT8_MIN;
	volatile int64_t t9 = -5063234905335LL;

	t9 = (x869>>(x870<<(x871<=x872)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x925 = 20182276U;
	static volatile uint32_t t10 = 490836U;

	t10 = (x925>>(x926<<(x927<=x928)));

	if (t10 != 5045569U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x969 = INT8_MAX;
	volatile int32_t x970 = 1;
	volatile uint32_t x971 = UINT32_MAX;
	static uint64_t x972 = UINT64_MAX;
	static volatile int32_t t11 = 125423;

	t11 = (x969>>(x970<<(x971<=x972)));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1057 = INT8_MAX;
	int8_t x1058 = 0;
	uint16_t x1059 = 19204U;

	t12 = (x1057>>(x1058<<(x1059<=x1060)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x1061 = 3U;
	uint8_t x1062 = 0U;
	int32_t x1063 = INT32_MAX;
	uint32_t t13 = 563295661U;

	t13 = (x1061>>(x1062<<(x1063<=x1064)));

	if (t13 != 3U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1089 = INT64_MAX;
	volatile int8_t x1090 = 0;
	int64_t x1091 = INT64_MIN;
	int8_t x1092 = -1;
	int64_t t14 = INT64_MAX;

	t14 = (x1089>>(x1090<<(x1091<=x1092)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1213 = 21423U;
	static uint16_t x1215 = 7U;
	volatile int8_t x1216 = 1;
	uint32_t t15 = 14212968U;

	t15 = (x1213>>(x1214<<(x1215<=x1216)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1217 = UINT32_MAX;
	int16_t x1219 = -2;
	volatile int8_t x1220 = -1;

	t16 = (x1217>>(x1218<<(x1219<=x1220)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1369 = INT8_MAX;
	int32_t x1372 = 12659;
	volatile int32_t t17 = -575;

	t17 = (x1369>>(x1370<<(x1371<=x1372)));

	if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1373 = 215;
	uint8_t x1374 = 0U;
	int32_t x1375 = INT32_MAX;
	uint64_t x1376 = 834LLU;

	t18 = (x1373>>(x1374<<(x1375<=x1376)));

	if (t18 != 215) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1393 = 512992195U;
	int32_t x1394 = 5;
	int64_t x1395 = INT64_MAX;
	volatile uint32_t t19 = 1774022U;

	t19 = (x1393>>(x1394<<(x1395<=x1396)));

	if (t19 != 16031006U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1405 = 4LL;
	int64_t x1406 = 26LL;
	static int16_t x1408 = INT16_MAX;
	volatile int64_t t20 = 522427190637030LL;

	t20 = (x1405>>(x1406<<(x1407<=x1408)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1413 = 223422U;
	int8_t x1414 = 0;
	uint32_t x1415 = 4U;
	uint16_t x1416 = UINT16_MAX;
	uint32_t t21 = 1739U;

	t21 = (x1413>>(x1414<<(x1415<=x1416)));

	if (t21 != 223422U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1453 = UINT64_MAX;
	uint8_t x1454 = 3U;
	int32_t x1455 = -1;
	int16_t x1456 = INT16_MIN;

	t22 = (x1453>>(x1454<<(x1455<=x1456)));

	if (t22 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1613 = 87U;
	uint8_t x1614 = 10U;
	static uint8_t x1615 = 2U;
	int16_t x1616 = 90;
	uint32_t t23 = 103792U;

	t23 = (x1613>>(x1614<<(x1615<=x1616)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1621 = INT32_MAX;
	volatile uint8_t x1622 = 1U;
	int64_t x1623 = INT64_MIN;
	static uint16_t x1624 = UINT16_MAX;

	t24 = (x1621>>(x1622<<(x1623<=x1624)));

	if (t24 != 536870911) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1661 = 6;
	uint32_t x1662 = 6U;
	volatile int16_t x1663 = INT16_MIN;
	int32_t x1664 = -1;
	volatile int32_t t25 = 1232693;

	t25 = (x1661>>(x1662<<(x1663<=x1664)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1686 = 23U;
	int64_t x1687 = 2LL;
	int64_t x1688 = INT64_MIN;
	int64_t t26 = 136999955LL;

	t26 = (x1685>>(x1686<<(x1687<=x1688)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1697 = 3936681701LLU;
	volatile int8_t x1698 = 1;
	uint16_t x1699 = 53U;
	static uint64_t x1700 = UINT64_MAX;
	static volatile uint64_t t27 = 93701120419986LLU;

	t27 = (x1697>>(x1698<<(x1699<=x1700)));

	if (t27 != 984170425LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1703 = -3;
	int32_t x1704 = INT32_MAX;
	volatile uint32_t t28 = 2344072U;

	t28 = (x1701>>(x1702<<(x1703<=x1704)));

	if (t28 != 4690U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1743 = -1;
	uint16_t x1744 = 40U;
	uint64_t t29 = 224485371158LLU;

	t29 = (x1741>>(x1742<<(x1743<=x1744)));

	if (t29 != 17LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1745 = 976693;
	uint8_t x1746 = 2U;
	volatile int8_t x1748 = -1;
	volatile int32_t t30 = -60517;

	t30 = (x1745>>(x1746<<(x1747<=x1748)));

	if (t30 != 61043) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1805 = UINT32_MAX;
	uint16_t x1807 = 1U;
	int64_t x1808 = INT64_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x1805>>(x1806<<(x1807<=x1808)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1839 = INT64_MIN;
	int64_t x1840 = -1LL;
	int32_t t32 = 7991;

	t32 = (x1837>>(x1838<<(x1839<=x1840)));

	if (t32 != 8191) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1877 = 12U;
	int32_t x1880 = INT32_MAX;
	volatile int32_t t33 = 91427;

	t33 = (x1877>>(x1878<<(x1879<=x1880)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1889 = UINT16_MAX;
	static uint8_t x1890 = 3U;
	int8_t x1891 = 0;
	uint64_t x1892 = UINT64_MAX;
	int32_t t34 = -1;

	t34 = (x1889>>(x1890<<(x1891<=x1892)));

	if (t34 != 1023) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1893 = INT16_MAX;
	static uint8_t x1894 = 4U;
	int16_t x1895 = 0;
	int32_t x1896 = -1;
	int32_t t35 = 1066;

	t35 = (x1893>>(x1894<<(x1895<=x1896)));

	if (t35 != 2047) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1950 = 0U;
	int64_t x1951 = INT64_MIN;
	int8_t x1952 = INT8_MIN;

	t36 = (x1949>>(x1950<<(x1951<=x1952)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1981 = INT64_MAX;
	uint64_t x1982 = 10LLU;
	static uint32_t x1983 = UINT32_MAX;
	static int8_t x1984 = -1;
	static int64_t t37 = -112449LL;

	t37 = (x1981>>(x1982<<(x1983<=x1984)));

	if (t37 != 8796093022207LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2037 = 1849;
	uint8_t x2038 = 3U;
	volatile int32_t t38 = 515;

	t38 = (x2037>>(x2038<<(x2039<=x2040)));

	if (t38 != 28) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2121 = 439316662193592698LLU;
	uint64_t t39 = 27750418764584LLU;

	t39 = (x2121>>(x2122<<(x2123<=x2124)));

	if (t39 != 439316662193592698LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2141 = 22U;
	volatile uint8_t x2142 = 1U;
	int16_t x2144 = -78;

	t40 = (x2141>>(x2142<<(x2143<=x2144)));

	if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2242 = 2;
	volatile int64_t x2243 = INT64_MIN;
	volatile int64_t x2244 = INT64_MAX;
	int32_t t41 = 19;

	t41 = (x2241>>(x2242<<(x2243<=x2244)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2361 = 112804U;
	static volatile int16_t x2362 = 1;
	int8_t x2363 = INT8_MAX;
	int16_t x2364 = -1;
	uint32_t t42 = 499089U;

	t42 = (x2361>>(x2362<<(x2363<=x2364)));

	if (t42 != 56402U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2409 = UINT8_MAX;
	uint8_t x2410 = 2U;
	int64_t x2411 = 2497074LL;

	t43 = (x2409>>(x2410<<(x2411<=x2412)));

	if (t43 != 63) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2522 = 10U;
	static uint64_t x2523 = 405511573334LLU;
	uint16_t x2524 = UINT16_MAX;
	int32_t t44 = 16174295;

	t44 = (x2521>>(x2522<<(x2523<=x2524)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2549 = INT32_MAX;
	volatile int8_t x2550 = 11;
	static int64_t x2551 = 998185585LL;
	int32_t x2552 = INT32_MIN;
	int32_t t45 = -437363350;

	t45 = (x2549>>(x2550<<(x2551<=x2552)));

	if (t45 != 1048575) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2561 = UINT8_MAX;
	uint16_t x2563 = UINT16_MAX;
	uint32_t x2564 = UINT32_MAX;
	int32_t t46 = 240;

	t46 = (x2561>>(x2562<<(x2563<=x2564)));

	if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2585 = 5U;
	uint32_t x2588 = UINT32_MAX;
	volatile int32_t t47 = -48385165;

	t47 = (x2585>>(x2586<<(x2587<=x2588)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2593 = UINT16_MAX;
	static int8_t x2595 = 3;
	uint8_t x2596 = 3U;
	volatile int32_t t48 = -3143;

	t48 = (x2593>>(x2594<<(x2595<=x2596)));

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2601 = INT32_MAX;
	int16_t x2602 = 1;
	static int64_t x2603 = INT64_MAX;
	uint8_t x2604 = UINT8_MAX;
	volatile int32_t t49 = -540015563;

	t49 = (x2601>>(x2602<<(x2603<=x2604)));

	if (t49 != 1073741823) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2625 = 2U;
	uint16_t x2626 = 6U;
	uint64_t x2627 = UINT64_MAX;
	int16_t x2628 = -1;
	int32_t t50 = 14;

	t50 = (x2625>>(x2626<<(x2627<=x2628)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2737 = UINT64_MAX;
	uint8_t x2738 = 9U;
	int16_t x2739 = -1;
	uint64_t t51 = 2907375529LLU;

	t51 = (x2737>>(x2738<<(x2739<=x2740)));

	if (t51 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2761 = INT8_MAX;
	int8_t x2762 = 1;
	int32_t x2763 = -1;
	uint32_t x2764 = 477807U;
	volatile int32_t t52 = -179;

	t52 = (x2761>>(x2762<<(x2763<=x2764)));

	if (t52 != 63) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x2773 = 47;
	uint16_t x2774 = 26U;
	static volatile uint64_t x2775 = 172166LLU;
	int32_t t53 = -1;

	t53 = (x2773>>(x2774<<(x2775<=x2776)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2829 = INT64_MAX;
	int16_t x2830 = 5;
	static int32_t x2831 = INT32_MIN;
	int32_t x2832 = INT32_MIN;
	int64_t t54 = 74040212517260LL;

	t54 = (x2829>>(x2830<<(x2831<=x2832)));

	if (t54 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2849 = 494713481LLU;
	volatile uint32_t x2850 = 4U;
	volatile uint8_t x2851 = 42U;
	int32_t x2852 = INT32_MAX;
	volatile uint64_t t55 = 124926879381LLU;

	t55 = (x2849>>(x2850<<(x2851<=x2852)));

	if (t55 != 1932474LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x2857 = 1853U;
	int64_t x2860 = INT64_MAX;
	static uint32_t t56 = 3714499U;

	t56 = (x2857>>(x2858<<(x2859<=x2860)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2885 = INT64_MAX;
	int8_t x2886 = 1;
	int8_t x2888 = 24;
	int64_t t57 = -786979235838103427LL;

	t57 = (x2885>>(x2886<<(x2887<=x2888)));

	if (t57 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2917 = 3389511849LL;
	int8_t x2918 = 1;
	int16_t x2919 = INT16_MIN;
	int64_t x2920 = 49LL;
	volatile int64_t t58 = -133LL;

	t58 = (x2917>>(x2918<<(x2919<=x2920)));

	if (t58 != 847377962LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2937 = INT8_MAX;
	static int8_t x2938 = 14;
	static int32_t x2940 = -129763668;
	volatile int32_t t59 = 1;

	t59 = (x2937>>(x2938<<(x2939<=x2940)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3001 = 1;
	uint8_t x3002 = 22U;
	volatile int8_t x3003 = INT8_MIN;
	static int16_t x3004 = INT16_MIN;

	t60 = (x3001>>(x3002<<(x3003<=x3004)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3041 = UINT16_MAX;
	int16_t x3042 = 1;
	int32_t x3043 = -6462782;
	int32_t x3044 = INT32_MAX;
	volatile int32_t t61 = 346689081;

	t61 = (x3041>>(x3042<<(x3043<=x3044)));

	if (t61 != 16383) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3045 = INT8_MAX;
	uint16_t x3046 = 1U;
	uint64_t x3047 = 31324420415LLU;
	static int16_t x3048 = INT16_MIN;
	volatile int32_t t62 = 20162705;

	t62 = (x3045>>(x3046<<(x3047<=x3048)));

	if (t62 != 31) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3061 = UINT16_MAX;
	uint8_t x3062 = 0U;
	static uint8_t x3063 = 2U;
	volatile int16_t x3064 = INT16_MIN;
	int32_t t63 = 230316;

	t63 = (x3061>>(x3062<<(x3063<=x3064)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3081 = 7839880671LLU;
	int8_t x3082 = 7;
	int32_t x3083 = -1;
	volatile uint64_t t64 = 244560LLU;

	t64 = (x3081>>(x3082<<(x3083<=x3084)));

	if (t64 != 61249067LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3098 = 17;
	static uint32_t x3099 = 3335770U;
	volatile uint8_t x3100 = 2U;
	int32_t t65 = 24963;

	t65 = (x3097>>(x3098<<(x3099<=x3100)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x3153 = INT16_MAX;
	static int32_t x3154 = 3;
	int16_t x3155 = INT16_MAX;
	int32_t x3156 = INT32_MIN;
	int32_t t66 = -1;

	t66 = (x3153>>(x3154<<(x3155<=x3156)));

	if (t66 != 4095) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3237 = UINT16_MAX;
	static int8_t x3239 = -1;
	int64_t x3240 = 892218LL;
	volatile int32_t t67 = -39;

	t67 = (x3237>>(x3238<<(x3239<=x3240)));

	if (t67 != 16383) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3279 = 3235041705853131001LLU;
	volatile int8_t x3280 = 0;
	volatile uint32_t t68 = 10389211U;

	t68 = (x3277>>(x3278<<(x3279<=x3280)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3285 = 1166330U;
	uint16_t x3286 = 9U;
	uint16_t x3287 = UINT16_MAX;
	static int8_t x3288 = -1;
	volatile uint32_t t69 = 815050U;

	t69 = (x3285>>(x3286<<(x3287<=x3288)));

	if (t69 != 2277U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3365 = UINT32_MAX;
	uint8_t x3366 = 0U;
	int8_t x3367 = INT8_MIN;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x3365>>(x3366<<(x3367<=x3368)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3459 = INT64_MAX;
	volatile int8_t x3460 = -1;
	int32_t t71 = 494130632;

	t71 = (x3457>>(x3458<<(x3459<=x3460)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3641 = INT16_MAX;
	uint8_t x3642 = 1U;
	int16_t x3644 = INT16_MIN;
	volatile int32_t t72 = 43878507;

	t72 = (x3641>>(x3642<<(x3643<=x3644)));

	if (t72 != 8191) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3717 = 5U;
	uint8_t x3718 = 2U;
	int64_t x3720 = -48039488216LL;
	volatile int32_t t73 = 10;

	t73 = (x3717>>(x3718<<(x3719<=x3720)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x3725 = UINT8_MAX;
	int64_t x3727 = -1LL;
	int32_t t74 = -2214;

	t74 = (x3725>>(x3726<<(x3727<=x3728)));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x3733 = 393289LLU;
	uint16_t x3734 = 0U;
	int8_t x3735 = INT8_MIN;
	int16_t x3736 = 2041;

	t75 = (x3733>>(x3734<<(x3735<=x3736)));

	if (t75 != 393289LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3817 = 152LLU;
	volatile uint8_t x3818 = 19U;
	int32_t x3819 = -1;
	int16_t x3820 = INT16_MIN;
	static volatile uint64_t t76 = 4255972790792222947LLU;

	t76 = (x3817>>(x3818<<(x3819<=x3820)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3826 = 2U;
	int32_t x3827 = 7;

	t77 = (x3825>>(x3826<<(x3827<=x3828)));

	if (t77 != 130140868016LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3861 = UINT16_MAX;
	int8_t x3862 = 0;
	uint8_t x3863 = 10U;
	int32_t x3864 = INT32_MIN;

	t78 = (x3861>>(x3862<<(x3863<=x3864)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3949 = 989626LL;
	int8_t x3950 = 47;
	uint32_t x3951 = UINT32_MAX;
	int8_t x3952 = INT8_MIN;

	t79 = (x3949>>(x3950<<(x3951<=x3952)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3985 = 30U;
	uint16_t x3986 = 4U;
	volatile int64_t x3987 = 2281131148531212LL;
	uint16_t x3988 = UINT16_MAX;
	volatile int32_t t80 = 4;

	t80 = (x3985>>(x3986<<(x3987<=x3988)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4045 = 1062751068143862LL;
	uint32_t x4046 = 7U;
	int32_t x4047 = INT32_MIN;
	int64_t t81 = 535827934276499367LL;

	t81 = (x4045>>(x4046<<(x4047<=x4048)));

	if (t81 != 64865177499LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4133 = 2;
	int64_t x4136 = -1LL;
	volatile int32_t t82 = -1;

	t82 = (x4133>>(x4134<<(x4135<=x4136)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x4161 = INT8_MAX;
	uint16_t x4162 = 0U;
	int32_t x4163 = INT32_MIN;
	volatile int32_t x4164 = INT32_MIN;
	int32_t t83 = -17811915;

	t83 = (x4161>>(x4162<<(x4163<=x4164)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4193 = INT16_MAX;
	int8_t x4194 = 2;
	int16_t x4195 = INT16_MIN;
	volatile int32_t t84 = 918541;

	t84 = (x4193>>(x4194<<(x4195<=x4196)));

	if (t84 != 8191) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4213 = 26685887272248LLU;
	volatile uint64_t x4214 = 1LLU;
	static uint32_t x4215 = 2470U;
	int32_t x4216 = INT32_MAX;
	uint64_t t85 = 128278516398483LLU;

	t85 = (x4213>>(x4214<<(x4215<=x4216)));

	if (t85 != 6671471818062LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4241 = 1;
	uint8_t x4242 = 14U;
	int64_t x4244 = INT64_MAX;
	static volatile int32_t t86 = -57129;

	t86 = (x4241>>(x4242<<(x4243<=x4244)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4394 = 2U;
	int32_t x4396 = INT32_MIN;
	volatile int32_t t87 = -224805;

	t87 = (x4393>>(x4394<<(x4395<=x4396)));

	if (t87 != 25) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4481 = 23;
	uint16_t x4482 = 12U;
	int8_t x4484 = INT8_MIN;
	int32_t t88 = 1;

	t88 = (x4481>>(x4482<<(x4483<=x4484)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4506 = 6;
	int64_t x4508 = -1LL;
	int64_t t89 = 925485LL;

	t89 = (x4505>>(x4506<<(x4507<=x4508)));

	if (t89 != 279078521357584LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4550 = 23U;
	volatile int16_t x4551 = -990;
	volatile int64_t x4552 = INT64_MIN;
	int32_t t90 = 12198987;

	t90 = (x4549>>(x4550<<(x4551<=x4552)));

	if (t90 != 51) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4593 = 2U;
	static int8_t x4594 = 0;
	int8_t x4595 = INT8_MIN;
	uint16_t x4596 = UINT16_MAX;
	int32_t t91 = -442;

	t91 = (x4593>>(x4594<<(x4595<=x4596)));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4649 = 0U;
	static int8_t x4650 = 1;
	int64_t x4651 = INT64_MAX;
	int32_t x4652 = INT32_MAX;
	volatile int32_t t92 = -13;

	t92 = (x4649>>(x4650<<(x4651<=x4652)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4762 = 20;
	int16_t x4763 = INT16_MAX;
	static volatile int8_t x4764 = INT8_MIN;
	static volatile int32_t t93 = 86;

	t93 = (x4761>>(x4762<<(x4763<=x4764)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x4961 = INT64_MAX;
	uint8_t x4962 = 2U;
	int8_t x4963 = -2;
	static int64_t x4964 = -2LL;
	volatile int64_t t94 = -4304367193175LL;

	t94 = (x4961>>(x4962<<(x4963<=x4964)));

	if (t94 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5025 = 2037517U;
	uint16_t x5026 = 18U;
	uint64_t x5027 = 6748939837LLU;
	int8_t x5028 = 61;
	static uint32_t t95 = 3801U;

	t95 = (x5025>>(x5026<<(x5027<=x5028)));

	if (t95 != 7U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5137 = INT16_MAX;
	static uint32_t x5138 = 8U;
	int16_t x5139 = 1;
	uint32_t x5140 = 12301403U;
	volatile int32_t t96 = -185457095;

	t96 = (x5137>>(x5138<<(x5139<=x5140)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5313 = UINT16_MAX;
	uint32_t x5314 = 4U;
	volatile uint32_t x5315 = 706297U;
	volatile int64_t x5316 = INT64_MAX;
	int32_t t97 = 6;

	t97 = (x5313>>(x5314<<(x5315<=x5316)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5373 = INT8_MAX;
	volatile int8_t x5374 = 14;
	volatile uint32_t x5375 = 1058560916U;
	uint16_t x5376 = 13968U;
	int32_t t98 = -914;

	t98 = (x5373>>(x5374<<(x5375<=x5376)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x5413 = UINT8_MAX;
	static uint16_t x5414 = 7U;
	int64_t x5415 = INT64_MAX;
	int16_t x5416 = INT16_MAX;
	int32_t t99 = 13816052;

	t99 = (x5413>>(x5414<<(x5415<=x5416)));

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


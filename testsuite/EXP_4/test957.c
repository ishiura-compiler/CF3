#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x69 = INT8_MIN;
uint16_t x87 = 938U;
volatile int32_t t2 = 1040;
volatile uint32_t x136 = 4U;
int32_t t3 = 4662194;
uint64_t x170 = 1581365212466205783LLU;
uint8_t x327 = 1U;
int32_t t5 = 202868;
int8_t x399 = INT8_MAX;
static int32_t x598 = -1;
int8_t x630 = -1;
int8_t x696 = 0;
int32_t t14 = -121153;
volatile int8_t x721 = 1;
static volatile uint8_t x725 = 10U;
volatile int32_t t17 = -33322524;
static uint64_t x826 = UINT64_MAX;
uint16_t x828 = 4U;
int32_t t18 = -1;
volatile int32_t x1034 = INT32_MIN;
volatile int32_t t19 = -125197750;
int8_t x1060 = 15;
volatile int64_t x1099 = 1LL;
int16_t x1173 = INT16_MIN;
uint32_t x1297 = 6U;
static volatile int32_t x1298 = 14;
int32_t t24 = 877;
uint8_t x1371 = UINT8_MAX;
volatile int32_t t27 = -11950;
uint8_t x1582 = 16U;
int64_t x1839 = 3LL;
int32_t t31 = -11838866;
static int16_t x1871 = INT16_MAX;
volatile uint8_t x1919 = 22U;
int32_t t35 = -91;
static uint32_t x1995 = UINT32_MAX;
static uint16_t x2038 = 2187U;
uint64_t x2145 = UINT64_MAX;
uint16_t x2148 = 6U;
static int8_t x2261 = -1;
int8_t x2366 = 44;
uint8_t x2368 = 1U;
int32_t x2377 = -38;
uint16_t x2379 = 338U;
volatile int16_t x2426 = -1;
uint8_t x2511 = 1U;
volatile int32_t t47 = -188;
uint64_t x2658 = 836689013LLU;
static int8_t x2659 = 7;
static volatile int32_t t49 = 35168;
static uint8_t x2907 = UINT8_MAX;
int8_t x2944 = 3;
int16_t x2946 = 15183;
int16_t x2947 = INT16_MAX;
static uint8_t x2994 = UINT8_MAX;
uint16_t x3016 = 2U;
uint64_t x3048 = 2LLU;
volatile int32_t t56 = 1;
volatile uint64_t x3329 = 209103428655383LLU;
uint64_t x3431 = 157598094201480061LLU;
int8_t x3485 = 42;
volatile int32_t t61 = 13192;
volatile int32_t t63 = 3;
static int32_t x3690 = 20040958;
static uint16_t x3692 = 38U;
volatile int32_t t64 = -723;
volatile uint64_t x3765 = 1LLU;
int32_t x3825 = 6;
int16_t x3827 = INT16_MAX;
uint8_t x3828 = 8U;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 15798U;
	uint16_t x3 = 28U;
	int64_t x4 = 4LL;
	volatile int32_t t0 = 968557544;

	t0 = (x1==(x2<(x3<<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x70 = UINT8_MAX;
	volatile uint8_t x71 = UINT8_MAX;
	int8_t x72 = 21;
	int32_t t1 = -12;

	t1 = (x69==(x70<(x71<<x72)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x85 = 246;
	uint8_t x86 = UINT8_MAX;
	int8_t x88 = 2;

	t2 = (x85==(x86<(x87<<x88)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile int8_t x134 = INT8_MIN;
	static uint32_t x135 = 52U;

	t3 = (x133==(x134<(x135<<x136)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x169 = INT8_MIN;
	volatile int8_t x171 = INT8_MAX;
	uint8_t x172 = 19U;
	volatile int32_t t4 = 2588;

	t4 = (x169==(x170<(x171<<x172)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x325 = INT16_MAX;
	int16_t x326 = INT16_MIN;
	int8_t x328 = 10;

	t5 = (x325==(x326<(x327<<x328)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	uint32_t x371 = 1U;
	uint8_t x372 = 1U;
	static int32_t t6 = -175;

	t6 = (x369==(x370<(x371<<x372)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = -1;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 0U;
	volatile int32_t t7 = 3723;

	t7 = (x389==(x390<(x391<<x392)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x397 = 3U;
	int32_t x398 = -1;
	uint32_t x400 = 2U;
	volatile int32_t t8 = 6925304;

	t8 = (x397==(x398<(x399<<x400)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x401 = -30;
	volatile int64_t x402 = -1763569046259725LL;
	int8_t x403 = 59;
	uint8_t x404 = 0U;
	volatile int32_t t9 = 1813;

	t9 = (x401==(x402<(x403<<x404)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x597 = INT8_MIN;
	static uint8_t x599 = 0U;
	uint32_t x600 = 7U;
	int32_t t10 = -1;

	t10 = (x597==(x598<(x599<<x600)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x613 = INT32_MAX;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 1592LLU;
	int8_t x616 = 2;
	int32_t t11 = 3;

	t11 = (x613==(x614<(x615<<x616)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x629 = UINT64_MAX;
	volatile int64_t x631 = 532007237657LL;
	static uint8_t x632 = 0U;
	volatile int32_t t12 = 8040;

	t12 = (x629==(x630<(x631<<x632)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x637 = 7U;
	int64_t x638 = INT64_MAX;
	static uint32_t x639 = UINT32_MAX;
	int16_t x640 = 0;
	int32_t t13 = -30286018;

	t13 = (x637==(x638<(x639<<x640)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x693 = INT8_MIN;
	volatile uint8_t x694 = 91U;
	uint32_t x695 = 889U;

	t14 = (x693==(x694<(x695<<x696)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x722 = INT32_MIN;
	uint16_t x723 = UINT16_MAX;
	uint8_t x724 = 1U;
	int32_t t15 = 114553;

	t15 = (x721==(x722<(x723<<x724)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x726 = INT16_MAX;
	uint64_t x727 = 5753978339351LLU;
	int32_t x728 = 56;
	int32_t t16 = 384943;

	t16 = (x725==(x726<(x727<<x728)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x745 = 412U;
	int16_t x746 = 60;
	static uint64_t x747 = 195812594070206019LLU;
	int16_t x748 = 1;

	t17 = (x745==(x746<(x747<<x748)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x825 = INT64_MIN;
	static uint32_t x827 = UINT32_MAX;

	t18 = (x825==(x826<(x827<<x828)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1033 = INT32_MAX;
	uint32_t x1035 = UINT32_MAX;
	static uint64_t x1036 = 3LLU;

	t19 = (x1033==(x1034<(x1035<<x1036)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1057 = -3;
	int64_t x1058 = INT64_MAX;
	uint32_t x1059 = 26679075U;
	volatile int32_t t20 = 7;

	t20 = (x1057==(x1058<(x1059<<x1060)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1097 = -1;
	static int16_t x1098 = -1;
	volatile uint16_t x1100 = 0U;
	int32_t t21 = -11155;

	t21 = (x1097==(x1098<(x1099<<x1100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1174 = UINT8_MAX;
	static volatile uint32_t x1175 = UINT32_MAX;
	static uint8_t x1176 = 0U;
	int32_t t22 = -1512627;

	t22 = (x1173==(x1174<(x1175<<x1176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1249 = INT32_MAX;
	volatile int8_t x1250 = 24;
	uint8_t x1251 = 0U;
	uint16_t x1252 = 12U;
	volatile int32_t t23 = 1259304;

	t23 = (x1249==(x1250<(x1251<<x1252)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1299 = 7113U;
	uint8_t x1300 = 11U;

	t24 = (x1297==(x1298<(x1299<<x1300)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1369 = -1;
	volatile int16_t x1370 = 18;
	int8_t x1372 = 1;
	int32_t t25 = -30200141;

	t25 = (x1369==(x1370<(x1371<<x1372)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1393 = UINT32_MAX;
	static uint16_t x1394 = 68U;
	int8_t x1395 = INT8_MAX;
	uint8_t x1396 = 17U;
	volatile int32_t t26 = 0;

	t26 = (x1393==(x1394<(x1395<<x1396)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1509 = 7U;
	int8_t x1510 = INT8_MIN;
	volatile uint32_t x1511 = UINT32_MAX;
	uint32_t x1512 = 2U;

	t27 = (x1509==(x1510<(x1511<<x1512)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1581 = 2072372LL;
	volatile uint64_t x1583 = 10586881325469439LLU;
	uint16_t x1584 = 0U;
	volatile int32_t t28 = 113;

	t28 = (x1581==(x1582<(x1583<<x1584)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1597 = UINT16_MAX;
	volatile int8_t x1598 = INT8_MAX;
	uint8_t x1599 = 2U;
	uint8_t x1600 = 14U;
	static int32_t t29 = 3;

	t29 = (x1597==(x1598<(x1599<<x1600)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1613 = -12;
	uint16_t x1614 = 247U;
	static uint16_t x1615 = UINT16_MAX;
	uint8_t x1616 = 4U;
	int32_t t30 = 152543717;

	t30 = (x1613==(x1614<(x1615<<x1616)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1837 = INT64_MIN;
	static int8_t x1838 = INT8_MIN;
	int8_t x1840 = 27;

	t31 = (x1837==(x1838<(x1839<<x1840)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1869 = UINT64_MAX;
	int64_t x1870 = -1LL;
	uint8_t x1872 = 2U;
	int32_t t32 = -29354;

	t32 = (x1869==(x1870<(x1871<<x1872)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1897 = -1;
	uint16_t x1898 = 0U;
	uint32_t x1899 = 51324732U;
	uint8_t x1900 = 12U;
	static volatile int32_t t33 = 51459;

	t33 = (x1897==(x1898<(x1899<<x1900)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1917 = 13057U;
	int16_t x1918 = 7;
	static int16_t x1920 = 15;
	static volatile int32_t t34 = 285;

	t34 = (x1917==(x1918<(x1919<<x1920)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1961 = -3;
	int32_t x1962 = 8804510;
	volatile int64_t x1963 = INT64_MAX;
	int32_t x1964 = 0;

	t35 = (x1961==(x1962<(x1963<<x1964)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1993 = 5U;
	volatile int32_t x1994 = INT32_MAX;
	uint8_t x1996 = 0U;
	int32_t t36 = -495;

	t36 = (x1993==(x1994<(x1995<<x1996)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2037 = 207U;
	uint64_t x2039 = 376LLU;
	static volatile int16_t x2040 = 1;
	int32_t t37 = -702567;

	t37 = (x2037==(x2038<(x2039<<x2040)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2117 = INT16_MIN;
	int32_t x2118 = -1;
	uint32_t x2119 = UINT32_MAX;
	uint16_t x2120 = 1U;
	volatile int32_t t38 = -1;

	t38 = (x2117==(x2118<(x2119<<x2120)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2146 = -1LL;
	volatile int64_t x2147 = 22827803498239LL;
	static int32_t t39 = 5120620;

	t39 = (x2145==(x2146<(x2147<<x2148)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2205 = 1129;
	static uint8_t x2206 = 91U;
	uint64_t x2207 = 1254LLU;
	static int8_t x2208 = 3;
	int32_t t40 = 439;

	t40 = (x2205==(x2206<(x2207<<x2208)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2253 = UINT64_MAX;
	int32_t x2254 = INT32_MIN;
	volatile int8_t x2255 = 27;
	volatile int16_t x2256 = 5;
	volatile int32_t t41 = 120;

	t41 = (x2253==(x2254<(x2255<<x2256)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2262 = INT8_MIN;
	volatile uint32_t x2263 = UINT32_MAX;
	volatile int8_t x2264 = 28;
	int32_t t42 = 212365366;

	t42 = (x2261==(x2262<(x2263<<x2264)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2365 = UINT16_MAX;
	int8_t x2367 = 35;
	static volatile int32_t t43 = 7043;

	t43 = (x2365==(x2366<(x2367<<x2368)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2378 = -1;
	uint32_t x2380 = 5U;
	volatile int32_t t44 = -45419;

	t44 = (x2377==(x2378<(x2379<<x2380)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2425 = INT8_MAX;
	uint64_t x2427 = 47LLU;
	uint16_t x2428 = 1U;
	int32_t t45 = -8;

	t45 = (x2425==(x2426<(x2427<<x2428)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2449 = INT64_MIN;
	volatile uint16_t x2450 = 1U;
	uint32_t x2451 = 1141631U;
	uint64_t x2452 = 5LLU;
	volatile int32_t t46 = -219;

	t46 = (x2449==(x2450<(x2451<<x2452)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2509 = 138;
	uint16_t x2510 = 0U;
	uint16_t x2512 = 18U;

	t47 = (x2509==(x2510<(x2511<<x2512)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2657 = 144380975U;
	uint8_t x2660 = 3U;
	volatile int32_t t48 = -2285939;

	t48 = (x2657==(x2658<(x2659<<x2660)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2785 = -389;
	uint32_t x2786 = 119058000U;
	uint16_t x2787 = 1992U;
	int16_t x2788 = 6;

	t49 = (x2785==(x2786<(x2787<<x2788)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2849 = 3741U;
	uint64_t x2850 = UINT64_MAX;
	int16_t x2851 = 8575;
	uint16_t x2852 = 1U;
	volatile int32_t t50 = 174142017;

	t50 = (x2849==(x2850<(x2851<<x2852)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2905 = UINT16_MAX;
	uint32_t x2906 = UINT32_MAX;
	static uint16_t x2908 = 1U;
	int32_t t51 = 2994;

	t51 = (x2905==(x2906<(x2907<<x2908)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2941 = INT16_MIN;
	uint64_t x2942 = 434348739620LLU;
	int64_t x2943 = 13086585770LL;
	int32_t t52 = 14382458;

	t52 = (x2941==(x2942<(x2943<<x2944)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x2945 = UINT64_MAX;
	int8_t x2948 = 0;
	volatile int32_t t53 = -1045160892;

	t53 = (x2945==(x2946<(x2947<<x2948)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2993 = 0;
	volatile uint8_t x2995 = UINT8_MAX;
	uint8_t x2996 = 0U;
	int32_t t54 = 23974;

	t54 = (x2993==(x2994<(x2995<<x2996)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3013 = INT16_MIN;
	uint32_t x3014 = 263363338U;
	uint32_t x3015 = 756831846U;
	int32_t t55 = -1977109;

	t55 = (x3013==(x3014<(x3015<<x3016)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3045 = INT64_MIN;
	static int16_t x3046 = INT16_MAX;
	uint64_t x3047 = 1031258LLU;

	t56 = (x3045==(x3046<(x3047<<x3048)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3277 = 1U;
	int64_t x3278 = INT64_MIN;
	int64_t x3279 = 27522LL;
	uint16_t x3280 = 46U;
	static int32_t t57 = 467038;

	t57 = (x3277==(x3278<(x3279<<x3280)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3330 = UINT32_MAX;
	uint32_t x3331 = UINT32_MAX;
	static int16_t x3332 = 1;
	volatile int32_t t58 = -7620730;

	t58 = (x3329==(x3330<(x3331<<x3332)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3373 = INT64_MIN;
	static uint8_t x3374 = UINT8_MAX;
	volatile uint64_t x3375 = 21448004221LLU;
	static int64_t x3376 = 2LL;
	int32_t t59 = -32352134;

	t59 = (x3373==(x3374<(x3375<<x3376)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3429 = 2;
	uint32_t x3430 = 7U;
	uint8_t x3432 = 0U;
	static volatile int32_t t60 = 99867;

	t60 = (x3429==(x3430<(x3431<<x3432)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3486 = -30;
	volatile uint8_t x3487 = 61U;
	int8_t x3488 = 2;

	t61 = (x3485==(x3486<(x3487<<x3488)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3537 = INT16_MIN;
	int32_t x3538 = INT32_MIN;
	int32_t x3539 = 218981;
	int16_t x3540 = 0;
	static volatile int32_t t62 = 357391461;

	t62 = (x3537==(x3538<(x3539<<x3540)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3581 = INT8_MIN;
	volatile int64_t x3582 = INT64_MIN;
	int64_t x3583 = 295514LL;
	int8_t x3584 = 31;

	t63 = (x3581==(x3582<(x3583<<x3584)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3689 = INT32_MIN;
	uint64_t x3691 = 22LLU;

	t64 = (x3689==(x3690<(x3691<<x3692)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3766 = 72U;
	volatile uint32_t x3767 = 119243198U;
	uint8_t x3768 = 18U;
	static volatile int32_t t65 = -20347297;

	t65 = (x3765==(x3766<(x3767<<x3768)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x3826 = INT64_MIN;
	int32_t t66 = 30462;

	t66 = (x3825==(x3826<(x3827<<x3828)));

	if (t66 != 0) { NG(); } else { ; }
	
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


    return 0;
}


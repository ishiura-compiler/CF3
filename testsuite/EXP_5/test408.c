#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x31 = 13634861LLU;
int8_t x32 = 44;
uint64_t t0 = 180807LLU;
volatile uint64_t x50 = UINT64_MAX;
uint8_t x115 = 1U;
int64_t t3 = 29864008LL;
uint64_t t5 = 1777675015LLU;
static uint32_t x441 = 626700U;
volatile int8_t x443 = 2;
volatile int32_t x595 = INT32_MIN;
int16_t x641 = INT16_MIN;
static uint64_t x643 = 3665200LLU;
int16_t x753 = -1;
int8_t x756 = 1;
volatile int64_t t14 = 46919LL;
int32_t x923 = -1;
int32_t x924 = 0;
uint32_t x966 = 833860769U;
static int32_t x967 = 3;
uint32_t t16 = 1983U;
volatile uint32_t t17 = 63654U;
uint8_t x1244 = 3U;
volatile int32_t t22 = 88846;
int32_t x1517 = -694629;
int8_t x1524 = 0;
uint32_t x1593 = UINT32_MAX;
int16_t x1594 = INT16_MIN;
volatile uint32_t t26 = 174104U;
static int64_t x1723 = 2188642906618LL;
static volatile uint64_t t28 = 49819239058LLU;
uint8_t x1776 = 2U;
static uint64_t t30 = 27513938LLU;
int64_t x1858 = -1952590LL;
static int32_t x1981 = INT32_MIN;
int64_t x1982 = -1775670LL;
volatile int32_t x2141 = -26;
static uint16_t x2244 = 1U;
uint32_t t38 = 2U;
uint64_t x2479 = UINT64_MAX;
uint32_t x2483 = 745207U;
volatile int16_t x2484 = 1;
int8_t x2641 = INT8_MAX;
volatile uint64_t t42 = 84502635645LLU;
uint16_t x2654 = 18U;
volatile int64_t t44 = 65643561751837LL;
static int16_t x2939 = -1;
int64_t x3137 = -11LL;
uint64_t x3138 = 8303902093986166090LLU;
int16_t x3185 = INT16_MIN;
uint32_t t49 = 463718319U;
volatile int8_t x3192 = 5;
int8_t x3234 = INT8_MAX;
static uint32_t t51 = 172471U;
int8_t x3364 = 51;
static volatile uint64_t t54 = 7332359LLU;
int64_t x3381 = INT64_MIN;
int16_t x3397 = -15;
uint64_t x3399 = 611552512090LLU;
volatile int16_t x3750 = INT16_MIN;
static volatile uint32_t x3816 = 1U;
uint8_t x3918 = 62U;
uint32_t x3969 = 1963759312U;
static volatile uint64_t t63 = 898506LLU;
int16_t x4300 = 1;
int32_t x4361 = INT32_MAX;
int8_t x4440 = 1;
uint16_t x4532 = 1U;
uint8_t x4833 = 10U;
uint8_t x5024 = 9U;
uint8_t x5492 = 5U;
static uint64_t x5550 = 14552183010469099LLU;
uint16_t x5602 = 93U;
int16_t x5935 = -14;
int8_t x6081 = INT8_MIN;
int8_t x6082 = INT8_MAX;
static uint16_t x6083 = 4U;
int32_t x6129 = INT32_MIN;
volatile int32_t x6130 = INT32_MIN;
uint32_t x6190 = 2U;
static int16_t x6428 = 1;
volatile uint32_t t89 = 29U;
static int64_t t90 = -12822464435415LL;
static uint8_t x6716 = 1U;
volatile uint64_t x6934 = 268512421737LLU;
static uint64_t x6974 = 352LLU;
volatile int32_t x7166 = -1;
int32_t t98 = -7262;


void f0(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x30 = -1;

	t0 = (x29%((x30*x31)<<x32));

	if (t0 != 59338443527815040LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x49 = -368;
	uint32_t x51 = 120561U;
	uint64_t x52 = 7LLU;
	volatile uint64_t t1 = 2249LLU;

	t1 = (x49%((x50*x51)<<x52));

	if (t1 != 15431440LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x113 = 59U;
	uint64_t x114 = 6988410301566364LLU;
	static volatile int8_t x116 = 0;
	uint64_t t2 = 0LLU;

	t2 = (x113%((x114*x115)<<x116));

	if (t2 != 59LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = -790056LL;
	int64_t x119 = -1LL;
	uint8_t x120 = 1U;

	t3 = (x117%((x118*x119)<<x120));

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x241 = INT8_MAX;
	uint64_t x242 = 225885200539LLU;
	int8_t x243 = 31;
	uint8_t x244 = 32U;
	volatile uint64_t t4 = 5830235LLU;

	t4 = (x241%((x242*x243)<<x244));

	if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x313 = -26350403975LL;
	uint16_t x314 = UINT16_MAX;
	uint64_t x315 = 2039734473557LLU;
	volatile uint8_t x316 = 7U;

	t5 = (x313%((x314*x315)<<x316));

	if (t5 != 1336472210615724281LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x442 = 79U;
	int8_t x444 = 0;
	static volatile uint32_t t6 = 2761805U;

	t6 = (x441%((x442*x443)<<x444));

	if (t6 != 72U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x593 = INT32_MAX;
	int64_t x594 = -120LL;
	uint64_t x596 = 0LLU;
	static int64_t t7 = -49211LL;

	t7 = (x593%((x594*x595)<<x596));

	if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x601 = 6077;
	uint64_t x602 = UINT64_MAX;
	uint8_t x603 = UINT8_MAX;
	volatile uint8_t x604 = 2U;
	volatile uint64_t t8 = 18803485346LLU;

	t8 = (x601%((x602*x603)<<x604));

	if (t8 != 6077LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x642 = -1;
	uint8_t x644 = 1U;
	volatile uint64_t t9 = 6254572031592243878LLU;

	t9 = (x641%((x642*x643)<<x644));

	if (t9 != 7297632LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x677 = -1LL;
	uint16_t x678 = 58U;
	volatile uint32_t x679 = 19482U;
	volatile uint8_t x680 = 2U;
	volatile int64_t t10 = -211272944LL;

	t10 = (x677%((x678*x679)<<x680));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x754 = -1;
	int16_t x755 = INT16_MIN;
	volatile int32_t t11 = -539;

	t11 = (x753%((x754*x755)<<x756));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x809 = -1LL;
	static uint32_t x810 = 295600362U;
	uint64_t x811 = UINT64_MAX;
	uint16_t x812 = 1U;
	static volatile uint64_t t12 = 2648514481627727LLU;

	t12 = (x809%((x810*x811)<<x812));

	if (t12 != 591200723LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x825 = INT16_MIN;
	int16_t x826 = -4621;
	static int64_t x827 = -1LL;
	int8_t x828 = 48;
	volatile int64_t t13 = 22177342LL;

	t13 = (x825%((x826*x827)<<x828));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x853 = INT64_MAX;
	volatile int32_t x854 = 384;
	uint8_t x855 = 16U;
	uint16_t x856 = 3U;

	t14 = (x853%((x854*x855)<<x856));

	if (t14 != 32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x921 = INT64_MIN;
	int8_t x922 = INT8_MIN;
	volatile int64_t t15 = -12977288LL;

	t15 = (x921%((x922*x923)<<x924));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x965 = UINT8_MAX;
	uint8_t x968 = 0U;

	t16 = (x965%((x966*x967)<<x968));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x985 = 4240363U;
	static int8_t x986 = -34;
	uint32_t x987 = UINT32_MAX;
	static volatile int16_t x988 = 16;

	t17 = (x985%((x986*x987)<<x988));

	if (t17 != 2012139U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1017 = 338U;
	static int16_t x1018 = INT16_MAX;
	static uint16_t x1019 = 6U;
	static int16_t x1020 = 3;
	volatile uint32_t t18 = 477U;

	t18 = (x1017%((x1018*x1019)<<x1020));

	if (t18 != 338U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1233 = INT8_MIN;
	int16_t x1234 = 1;
	uint64_t x1235 = 226101030250LLU;
	int16_t x1236 = 17;
	static uint64_t t19 = 4606LLU;

	t19 = (x1233%((x1234*x1235)<<x1236));

	if (t19 != 13454218340335488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1241 = INT16_MAX;
	int8_t x1242 = -14;
	int8_t x1243 = INT8_MIN;
	volatile int32_t t20 = 32646907;

	t20 = (x1241%((x1242*x1243)<<x1244));

	if (t20 != 4095) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1377 = -1;
	static uint8_t x1378 = UINT8_MAX;
	volatile uint32_t x1379 = 21175U;
	static volatile uint16_t x1380 = 22U;
	uint32_t t21 = 3U;

	t21 = (x1377%((x1378*x1379)<<x1380));

	if (t21 != 8388607U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1445 = -19636802;
	int16_t x1446 = INT16_MIN;
	static int8_t x1447 = -1;
	uint16_t x1448 = 2U;

	t22 = (x1445%((x1446*x1447)<<x1448));

	if (t22 != -107074) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1518 = UINT64_MAX;
	static int32_t x1519 = INT32_MAX;
	volatile uint8_t x1520 = 0U;
	volatile uint64_t t23 = 25229533LLU;

	t23 = (x1517%((x1518*x1519)<<x1520));

	if (t23 != 2146789018LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1521 = -1;
	static int8_t x1522 = INT8_MIN;
	static int8_t x1523 = -1;
	volatile int32_t t24 = 1;

	t24 = (x1521%((x1522*x1523)<<x1524));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1569 = 7LLU;
	static int64_t x1570 = INT64_MAX;
	int32_t x1571 = 1;
	int64_t x1572 = 0LL;
	volatile uint64_t t25 = 4460LLU;

	t25 = (x1569%((x1570*x1571)<<x1572));

	if (t25 != 7LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1595 = INT8_MIN;
	uint64_t x1596 = 1LLU;

	t26 = (x1593%((x1594*x1595)<<x1596));

	if (t26 != 8388607U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1697 = INT32_MIN;
	uint32_t x1698 = 693908U;
	static int8_t x1699 = INT8_MAX;
	int8_t x1700 = 1;
	uint32_t t27 = 10U;

	t27 = (x1697%((x1698*x1699)<<x1700));

	if (t27 != 32452064U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1721 = 4166840487567399134LLU;
	uint8_t x1722 = 5U;
	volatile int8_t x1724 = 1;

	t28 = (x1721%((x1722*x1723)<<x1724));

	if (t28 != 14576231786014LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1773 = -66952478;
	uint64_t x1774 = 259LLU;
	volatile uint64_t x1775 = 8477017298785228995LLU;
	static volatile uint64_t t29 = 69108677494689865LLU;

	t29 = (x1773%((x1774*x1775)<<x1776));

	if (t29 != 1509577060385233494LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1789 = UINT16_MAX;
	uint64_t x1790 = 552841041539103647LLU;
	static uint16_t x1791 = 930U;
	uint8_t x1792 = 1U;

	t30 = (x1789%((x1790*x1791)<<x1792));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1857 = 10U;
	int16_t x1859 = INT16_MIN;
	int8_t x1860 = 1;
	static int64_t t31 = 25121421204784LL;

	t31 = (x1857%((x1858*x1859)<<x1860));

	if (t31 != 10LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1925 = 3428963;
	volatile uint64_t x1926 = 359212194314990897LLU;
	int32_t x1927 = -1;
	uint8_t x1928 = 54U;
	static uint64_t t32 = 464798059938413LLU;

	t32 = (x1925%((x1926*x1927)<<x1928));

	if (t32 != 3428963LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1983 = INT8_MIN;
	uint16_t x1984 = 30U;
	volatile int64_t t33 = 1932480654LL;

	t33 = (x1981%((x1982*x1983)<<x1984));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1993 = -36447623;
	uint32_t x1994 = UINT32_MAX;
	static uint64_t x1995 = UINT64_MAX;
	volatile int8_t x1996 = 10;
	volatile uint64_t t34 = 869594119LLU;

	t34 = (x1993%((x1994*x1995)<<x1996));

	if (t34 != 4398010062457LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2033 = 1;
	uint8_t x2034 = 41U;
	int32_t x2035 = 69999;
	uint16_t x2036 = 8U;
	int32_t t35 = 8833;

	t35 = (x2033%((x2034*x2035)<<x2036));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x2142 = UINT32_MAX;
	int16_t x2143 = INT16_MIN;
	int8_t x2144 = 15;
	static uint32_t t36 = 283626U;

	t36 = (x2141%((x2142*x2143)<<x2144));

	if (t36 != 1073741798U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2241 = 0U;
	int64_t x2242 = -1LL;
	uint64_t x2243 = 1198592653728749LLU;
	static uint64_t t37 = 300192425758640LLU;

	t37 = (x2241%((x2242*x2243)<<x2244));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2317 = 4567U;
	volatile uint8_t x2318 = 23U;
	static uint8_t x2319 = 13U;
	static volatile int8_t x2320 = 0;

	t38 = (x2317%((x2318*x2319)<<x2320));

	if (t38 != 82U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2477 = 1U;
	uint16_t x2478 = 12U;
	int8_t x2480 = 35;
	uint64_t t39 = 3479671LLU;

	t39 = (x2477%((x2478*x2479)<<x2480));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2481 = 1LL;
	uint8_t x2482 = UINT8_MAX;
	static int64_t t40 = -2208047LL;

	t40 = (x2481%((x2482*x2483)<<x2484));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2497 = INT64_MAX;
	int64_t x2498 = INT64_MAX;
	static uint64_t x2499 = 5995921LLU;
	uint8_t x2500 = 26U;
	volatile uint64_t t41 = 6399003869LLU;

	t41 = (x2497%((x2498*x2499)<<x2500));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2642 = UINT64_MAX;
	int8_t x2643 = INT8_MIN;
	static uint8_t x2644 = 13U;

	t42 = (x2641%((x2642*x2643)<<x2644));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2653 = INT8_MIN;
	uint64_t x2655 = UINT64_MAX;
	uint8_t x2656 = 9U;
	static uint64_t t43 = 3LLU;

	t43 = (x2653%((x2654*x2655)<<x2656));

	if (t43 != 9088LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x2785 = INT64_MIN;
	int64_t x2786 = -1LL;
	int8_t x2787 = INT8_MIN;
	int8_t x2788 = 0;

	t44 = (x2785%((x2786*x2787)<<x2788));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2937 = 0;
	static uint64_t x2938 = 53745LLU;
	int8_t x2940 = 0;
	volatile uint64_t t45 = 105787LLU;

	t45 = (x2937%((x2938*x2939)<<x2940));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2949 = INT32_MIN;
	int8_t x2950 = INT8_MIN;
	uint64_t x2951 = UINT64_MAX;
	int16_t x2952 = 12;
	volatile uint64_t t46 = 95173925328148LLU;

	t46 = (x2949%((x2950*x2951)<<x2952));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x3125 = -1;
	static int16_t x3126 = 114;
	uint64_t x3127 = UINT64_MAX;
	static uint8_t x3128 = 1U;
	uint64_t t47 = 7155712LLU;

	t47 = (x3125%((x3126*x3127)<<x3128));

	if (t47 != 227LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3139 = INT16_MAX;
	static uint8_t x3140 = 55U;
	volatile uint64_t t48 = 542663629183LLU;

	t48 = (x3137%((x3138*x3139)<<x3140));

	if (t48 != 5332261958806667253LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3186 = UINT32_MAX;
	volatile int8_t x3187 = -6;
	int8_t x3188 = 6;

	t49 = (x3185%((x3186*x3187)<<x3188));

	if (t49 != 128U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3189 = 594001604U;
	volatile uint64_t x3190 = UINT64_MAX;
	static int64_t x3191 = INT64_MAX;
	volatile uint64_t t50 = 411992LLU;

	t50 = (x3189%((x3190*x3191)<<x3192));

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3233 = UINT16_MAX;
	uint32_t x3235 = 118876U;
	uint8_t x3236 = 3U;

	t51 = (x3233%((x3234*x3235)<<x3236));

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3313 = INT32_MIN;
	uint8_t x3314 = 3U;
	uint32_t x3315 = 1U;
	volatile int8_t x3316 = 1;
	volatile uint32_t t52 = 485353U;

	t52 = (x3313%((x3314*x3315)<<x3316));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3341 = INT32_MIN;
	int16_t x3342 = -1;
	volatile int64_t x3343 = -21406773LL;
	volatile int16_t x3344 = 13;
	volatile int64_t t53 = -66314217278979321LL;

	t53 = (x3341%((x3342*x3343)<<x3344));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3361 = INT8_MIN;
	uint64_t x3362 = UINT64_MAX;
	int32_t x3363 = INT32_MAX;

	t54 = (x3361%((x3362*x3363)<<x3364));

	if (t54 != 2251799813685120LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3382 = -1;
	int32_t x3383 = -1;
	uint8_t x3384 = 0U;
	static volatile int64_t t55 = 69074490LL;

	t55 = (x3381%((x3382*x3383)<<x3384));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3398 = INT32_MAX;
	int64_t x3400 = 3LL;
	static uint64_t t56 = 260354790LLU;

	t56 = (x3397%((x3398*x3399)<<x3400));

	if (t56 != 8251970054086083265LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3489 = INT32_MIN;
	int64_t x3490 = -122903686885LL;
	volatile int64_t x3491 = -1LL;
	static volatile uint8_t x3492 = 4U;
	int64_t t57 = 7396645LL;

	t57 = (x3489%((x3490*x3491)<<x3492));

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3701 = UINT64_MAX;
	int32_t x3702 = -117396913;
	uint32_t x3703 = UINT32_MAX;
	int16_t x3704 = 3;
	volatile uint64_t t58 = 20625914227973LLU;

	t58 = (x3701%((x3702*x3703)<<x3704));

	if (t58 != 260802383LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3749 = -1LL;
	uint32_t x3751 = UINT32_MAX;
	static uint8_t x3752 = 2U;
	static volatile int64_t t59 = 588089369950LL;

	t59 = (x3749%((x3750*x3751)<<x3752));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3813 = INT8_MAX;
	static uint64_t x3814 = 60844242604LLU;
	int16_t x3815 = INT16_MAX;
	volatile uint64_t t60 = 211553599LLU;

	t60 = (x3813%((x3814*x3815)<<x3816));

	if (t60 != 127LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3917 = -63229112;
	static volatile int64_t x3919 = 3140410LL;
	volatile int8_t x3920 = 28;
	static int64_t t61 = 37794108162LL;

	t61 = (x3917%((x3918*x3919)<<x3920));

	if (t61 != -63229112LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3970 = -29LL;
	int32_t x3971 = INT32_MIN;
	int8_t x3972 = 11;
	int64_t t62 = -57216409452LL;

	t62 = (x3969%((x3970*x3971)<<x3972));

	if (t62 != 1963759312LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4081 = 33259419933243LLU;
	uint16_t x4082 = 1467U;
	uint64_t x4083 = 30145613655268LLU;
	uint32_t x4084 = 1U;

	t63 = (x4081%((x4082*x4083)<<x4084));

	if (t63 != 33259419933243LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4093 = 1667LLU;
	int8_t x4094 = INT8_MIN;
	int16_t x4095 = INT16_MIN;
	uint32_t x4096 = 3U;
	uint64_t t64 = 9280158488728369LLU;

	t64 = (x4093%((x4094*x4095)<<x4096));

	if (t64 != 1667LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4297 = -364166358642LL;
	int32_t x4298 = 11;
	uint8_t x4299 = UINT8_MAX;
	int64_t t65 = -1LL;

	t65 = (x4297%((x4298*x4299)<<x4300));

	if (t65 != -2352LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4362 = 11U;
	static uint32_t x4363 = 3339U;
	static uint8_t x4364 = 30U;
	uint32_t t66 = 215838122U;

	t66 = (x4361%((x4362*x4363)<<x4364));

	if (t66 != 1073741823U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4381 = INT32_MIN;
	uint64_t x4382 = 28948902982LLU;
	uint16_t x4383 = UINT16_MAX;
	volatile int8_t x4384 = 0;
	volatile uint64_t t67 = 190LLU;

	t67 = (x4381%((x4382*x4383)<<x4384));

	if (t67 != 595583176695458LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4437 = 74U;
	int64_t x4438 = 20712LL;
	int64_t x4439 = 4423LL;
	static int64_t t68 = 1766999087242866503LL;

	t68 = (x4437%((x4438*x4439)<<x4440));

	if (t68 != 74LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4529 = INT8_MIN;
	uint32_t x4530 = 234U;
	int32_t x4531 = -1;
	static uint32_t t69 = 54U;

	t69 = (x4529%((x4530*x4531)<<x4532));

	if (t69 != 340U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4834 = 122083942665485374LLU;
	int8_t x4835 = INT8_MIN;
	uint64_t x4836 = 3LLU;
	uint64_t t70 = 125569594920083LLU;

	t70 = (x4833%((x4834*x4835)<<x4836));

	if (t70 != 10LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4933 = -1;
	static uint32_t x4934 = UINT32_MAX;
	int8_t x4935 = INT8_MIN;
	int8_t x4936 = 1;
	volatile uint32_t t71 = 37650127U;

	t71 = (x4933%((x4934*x4935)<<x4936));

	if (t71 != 255U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x5021 = -1LL;
	int32_t x5022 = -1;
	int16_t x5023 = -82;
	int64_t t72 = -412141573LL;

	t72 = (x5021%((x5022*x5023)<<x5024));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5065 = 0U;
	int8_t x5066 = INT8_MIN;
	volatile int64_t x5067 = -1LL;
	uint8_t x5068 = 15U;
	static int64_t t73 = -3950932730851031LL;

	t73 = (x5065%((x5066*x5067)<<x5068));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x5069 = INT64_MAX;
	int16_t x5070 = INT16_MIN;
	volatile int32_t x5071 = -1;
	uint64_t x5072 = 2LLU;
	static volatile int64_t t74 = -23833053899LL;

	t74 = (x5069%((x5070*x5071)<<x5072));

	if (t74 != 131071LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x5077 = 67U;
	int16_t x5078 = INT16_MAX;
	static volatile uint64_t x5079 = UINT64_MAX;
	volatile int32_t x5080 = 8;
	uint64_t t75 = 1442936827834LLU;

	t75 = (x5077%((x5078*x5079)<<x5080));

	if (t75 != 67LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5097 = INT8_MIN;
	volatile int16_t x5098 = -852;
	int64_t x5099 = -1LL;
	uint16_t x5100 = 2U;
	volatile int64_t t76 = -4396719148389LL;

	t76 = (x5097%((x5098*x5099)<<x5100));

	if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5329 = INT32_MAX;
	int8_t x5330 = -8;
	static uint64_t x5331 = 1066794321LLU;
	uint16_t x5332 = 55U;
	uint64_t t77 = 366125LLU;

	t77 = (x5329%((x5330*x5331)<<x5332));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5441 = -25LL;
	int16_t x5442 = -1;
	volatile int16_t x5443 = INT16_MIN;
	int8_t x5444 = 0;
	static volatile int64_t t78 = -91LL;

	t78 = (x5441%((x5442*x5443)<<x5444));

	if (t78 != -25LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5489 = 3561736LLU;
	int32_t x5490 = 168532;
	uint64_t x5491 = UINT64_MAX;
	static uint64_t t79 = 5503LLU;

	t79 = (x5489%((x5490*x5491)<<x5492));

	if (t79 != 3561736LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x5549 = INT32_MIN;
	volatile int8_t x5551 = -1;
	volatile uint32_t x5552 = 5U;
	static uint64_t t80 = 880210950LLU;

	t80 = (x5549%((x5550*x5551)<<x5552));

	if (t80 != 465669854187527520LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5601 = 165343536645827895LLU;
	int8_t x5603 = INT8_MAX;
	volatile uint16_t x5604 = 0U;
	uint64_t t81 = 42LLU;

	t81 = (x5601%((x5602*x5603)<<x5604));

	if (t81 != 3507LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5609 = 7;
	int16_t x5610 = INT16_MIN;
	uint64_t x5611 = UINT64_MAX;
	static uint8_t x5612 = 4U;
	uint64_t t82 = 781790898617227LLU;

	t82 = (x5609%((x5610*x5611)<<x5612));

	if (t82 != 7LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5933 = INT64_MIN;
	static volatile uint64_t x5934 = UINT64_MAX;
	static int16_t x5936 = 14;
	uint64_t t83 = 32602565LLU;

	t83 = (x5933%((x5934*x5935)<<x5936));

	if (t83 != 32768LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x6084 = 1U;
	volatile int32_t t84 = 2768301;

	t84 = (x6081%((x6082*x6083)<<x6084));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x6089 = INT16_MIN;
	volatile int16_t x6090 = -1;
	int8_t x6091 = -1;
	uint16_t x6092 = 1U;
	static volatile int32_t t85 = -106877;

	t85 = (x6089%((x6090*x6091)<<x6092));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x6131 = 187046LLU;
	uint32_t x6132 = 2U;
	uint64_t t86 = 1701212LLU;

	t86 = (x6129%((x6130*x6131)<<x6132));

	if (t86 != 1606710758211584LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x6189 = -61;
	int8_t x6191 = 33;
	int8_t x6192 = 1;
	uint32_t t87 = 32561U;

	t87 = (x6189%((x6190*x6191)<<x6192));

	if (t87 != 75U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6365 = UINT8_MAX;
	static uint32_t x6366 = 233142U;
	int8_t x6367 = INT8_MAX;
	uint8_t x6368 = 28U;
	volatile uint32_t t88 = 56U;

	t88 = (x6365%((x6366*x6367)<<x6368));

	if (t88 != 255U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6425 = 1;
	static uint32_t x6426 = UINT32_MAX;
	uint32_t x6427 = UINT32_MAX;

	t89 = (x6425%((x6426*x6427)<<x6428));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x6565 = INT32_MIN;
	int64_t x6566 = -1LL;
	int16_t x6567 = -674;
	uint8_t x6568 = 1U;

	t90 = (x6565%((x6566*x6567)<<x6568));

	if (t90 != -1024LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x6609 = -1;
	int8_t x6610 = INT8_MIN;
	uint64_t x6611 = 1358271967594LLU;
	static volatile int8_t x6612 = 48;
	static uint64_t t91 = 306879791LLU;

	t91 = (x6609%((x6610*x6611)<<x6612));

	if (t91 != 2233785415175766015LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6713 = INT32_MIN;
	int16_t x6714 = INT16_MIN;
	int16_t x6715 = -1;
	volatile int32_t t92 = -928771051;

	t92 = (x6713%((x6714*x6715)<<x6716));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6741 = 15764071023873LLU;
	int32_t x6742 = -1;
	uint64_t x6743 = 331067506648543359LLU;
	uint8_t x6744 = 7U;
	uint64_t t93 = 20110956575LLU;

	t93 = (x6741%((x6742*x6743)<<x6744));

	if (t93 != 15764071023873LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6817 = -1;
	int16_t x6818 = INT16_MIN;
	static volatile uint64_t x6819 = 280161871414246LLU;
	volatile uint8_t x6820 = 1U;
	uint64_t t94 = 3553LLU;

	t94 = (x6817%((x6818*x6819)<<x6820));

	if (t94 != 30830970727038975LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6933 = UINT16_MAX;
	volatile int16_t x6935 = INT16_MAX;
	uint8_t x6936 = 8U;
	uint64_t t95 = 4007665941LLU;

	t95 = (x6933%((x6934*x6935)<<x6936));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6973 = 4092U;
	uint16_t x6975 = UINT16_MAX;
	int16_t x6976 = 3;
	volatile uint64_t t96 = 18LLU;

	t96 = (x6973%((x6974*x6975)<<x6976));

	if (t96 != 4092LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x7033 = -7;
	static uint32_t x7034 = UINT32_MAX;
	volatile uint8_t x7035 = 2U;
	uint16_t x7036 = 1U;
	volatile uint32_t t97 = 27579U;

	t97 = (x7033%((x7034*x7035)<<x7036));

	if (t97 != 4294967289U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x7165 = INT32_MIN;
	static int16_t x7167 = INT16_MIN;
	static int32_t x7168 = 0;

	t98 = (x7165%((x7166*x7167)<<x7168));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7261 = 14;
	uint64_t x7262 = UINT64_MAX;
	uint64_t x7263 = 8554753198868382LLU;
	uint8_t x7264 = 1U;
	volatile uint64_t t99 = 3617925141LLU;

	t99 = (x7261%((x7262*x7263)<<x7264));

	if (t99 != 14LLU) { NG(); } else { ; }
	
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


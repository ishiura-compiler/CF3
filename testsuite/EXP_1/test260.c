#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x118 = -44166371773LL;
volatile uint64_t t2 = 5516LLU;
int64_t x121 = 589943598109LL;
volatile int16_t x123 = 12;
uint32_t x150 = 353034U;
static uint32_t x152 = 2095542657U;
static int32_t x245 = INT32_MAX;
static int32_t x246 = INT32_MAX;
uint64_t t7 = 170LLU;
uint16_t x320 = 1U;
uint64_t x361 = 182LLU;
static uint16_t x475 = 1U;
uint64_t x477 = 3730074529087488LLU;
int64_t x482 = -13913069LL;
uint64_t x494 = UINT64_MAX;
int16_t x517 = 119;
static volatile uint8_t x609 = 15U;
int32_t x632 = INT32_MAX;
static int8_t x671 = 0;
volatile int64_t t20 = 14213950044620LL;
uint64_t x701 = UINT64_MAX;
volatile uint64_t x818 = 13LLU;
uint16_t x819 = 8U;
volatile uint64_t t22 = 65489256563479476LLU;
volatile int32_t x842 = INT32_MIN;
uint64_t t24 = 105904791258LLU;
uint64_t x994 = 34715437721197540LLU;
static int16_t x996 = -1;
uint16_t x1069 = 1U;
int32_t x1070 = -1;
int32_t t27 = -1196418;
uint8_t x1241 = UINT8_MAX;
int64_t x1244 = -3LL;
int32_t t33 = 21943776;
volatile int32_t x1590 = -2601490;
int32_t x1646 = -1;
uint64_t t36 = 3099587719LLU;
int32_t x1861 = 1;
volatile uint64_t t38 = 243LLU;
uint64_t x2350 = UINT64_MAX;
int8_t x2409 = 10;
static int8_t x2410 = -1;
int8_t x2433 = INT8_MIN;
static volatile uint64_t t50 = 57479362LLU;
volatile int16_t x2565 = 65;
static int16_t x2621 = -1;
uint64_t x2622 = UINT64_MAX;
uint16_t x2678 = 52U;
uint16_t x2691 = 2U;
uint64_t x2698 = 2216753850LLU;
uint8_t x2700 = UINT8_MAX;
static volatile uint64_t x2789 = 999824854830032895LLU;
static int64_t x2838 = -1LL;
uint8_t x2840 = UINT8_MAX;
uint8_t x3003 = 0U;
volatile uint64_t x3141 = 1895876194LLU;
volatile int32_t x3151 = 3;
volatile uint32_t t66 = 55921408U;
uint8_t x3241 = UINT8_MAX;
volatile int32_t x3242 = -13472947;
int8_t x3243 = 1;
volatile int16_t x3362 = -1;
int64_t x3364 = INT64_MIN;
int16_t x3409 = -1;
volatile int16_t x3410 = INT16_MIN;
volatile int32_t t71 = -178860;
uint64_t x3597 = 1936180413684LLU;
volatile uint32_t x3617 = UINT32_MAX;
int8_t x3623 = 23;
uint32_t x3669 = 16464157U;
int16_t x3670 = -48;
int64_t x3737 = -189478784919LL;
int32_t x3886 = INT32_MIN;
int64_t t81 = 42879707130374LL;
int16_t x3926 = -9632;
static int8_t x3946 = 0;
int64_t x3948 = -1LL;
uint8_t x4033 = 46U;
int8_t x4057 = -1;
uint64_t x4060 = 1624LLU;
volatile uint64_t t86 = 13269011469874981LLU;
uint64_t x4189 = UINT64_MAX;
volatile uint64_t t89 = 594989435401896705LLU;
uint8_t x4219 = 1U;
int64_t x4220 = INT64_MIN;
int16_t x4242 = INT16_MIN;
static int8_t x4244 = 50;
int64_t x4255 = 28LL;
uint8_t x4295 = 50U;
int32_t x4296 = -1;
volatile int64_t t93 = -46429556288776LL;
volatile uint16_t x4319 = 3U;
volatile int8_t x4320 = INT8_MAX;
uint64_t t94 = 870730062353469LLU;
int16_t x4454 = -1;
volatile int64_t x4480 = -8381LL;
int8_t x4570 = -1;
static uint8_t x4571 = 2U;
uint32_t x4645 = 170068701U;
int16_t x4646 = 118;
volatile uint32_t t99 = 229610U;


void f0(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MAX;
	static uint16_t x19 = 1U;
	int8_t x20 = 2;
	volatile int64_t t0 = -3606LL;

	t0 = (((x17-x18)>>x19)^x20);

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x61 = 12226U;
	static uint8_t x62 = UINT8_MAX;
	static int32_t x63 = 2;
	int8_t x64 = -1;
	int32_t t1 = -244;

	t1 = (((x61-x62)>>x63)^x64);

	if (t1 != -2993) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x117 = 1640157262380LLU;
	int8_t x119 = 9;
	int16_t x120 = INT16_MAX;

	t2 = (((x117-x118)>>x119)^x120);

	if (t2 != 3289693818LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x122 = 2U;
	int8_t x124 = 1;
	int64_t t3 = -479901075587LL;

	t3 = (((x121-x122)>>x123)^x124);

	if (t3 != 144029199LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x149 = -19061;
	static uint16_t x151 = 12U;
	volatile uint32_t t4 = 13U;

	t4 = (((x149-x150)>>x151)^x152);

	if (t4 != 2095615524U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 6U;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t5 = 87093489;

	t5 = (((x177-x178)>>x179)^x180);

	if (t5 != -31745) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x247 = 1;
	int8_t x248 = -1;
	int32_t t6 = -80;

	t6 = (((x245-x246)>>x247)^x248);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x257 = 3U;
	int8_t x258 = 0;
	int16_t x259 = 0;
	uint64_t x260 = 100018846864337LLU;

	t7 = (((x257-x258)>>x259)^x260);

	if (t7 != 100018846864338LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x317 = -981LL;
	uint64_t x318 = UINT64_MAX;
	static uint8_t x319 = 33U;
	volatile uint64_t t8 = 16LLU;

	t8 = (((x317-x318)>>x319)^x320);

	if (t8 != 2147483646LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x337 = INT64_MAX;
	int64_t x338 = 4315329290832270LL;
	static uint8_t x339 = 14U;
	int32_t x340 = INT32_MAX;
	static int64_t t9 = -20894291LL;

	t9 = (((x337-x338)>>x339)^x340);

	if (t9 != 562687206725088LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x362 = INT8_MIN;
	uint64_t x363 = 3LLU;
	int8_t x364 = -1;
	uint64_t t10 = 510722205720660LLU;

	t10 = (((x361-x362)>>x363)^x364);

	if (t10 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = UINT64_MAX;
	int16_t x476 = -1;
	volatile uint64_t t11 = 8596655696967653979LLU;

	t11 = (((x473-x474)>>x475)^x476);

	if (t11 != 9223372037928517631LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x478 = -1049213292726575LL;
	uint64_t x479 = 3LLU;
	uint32_t x480 = 95465319U;
	volatile uint64_t t12 = 27748051291234LLU;

	t12 = (((x477-x478)>>x479)^x480);

	if (t12 != 597410903256642LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x481 = UINT64_MAX;
	int8_t x483 = 27;
	volatile int64_t x484 = INT64_MIN;
	static volatile uint64_t t13 = 710LLU;

	t13 = (((x481-x482)>>x483)^x484);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x485 = 466884711089381LLU;
	volatile uint64_t x486 = 66401169366231LLU;
	uint8_t x487 = 8U;
	int16_t x488 = 116;
	volatile uint64_t t14 = 3424LLU;

	t14 = (((x485-x486)>>x487)^x488);

	if (t14 != 1564388834908LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x493 = -1LL;
	volatile uint32_t x495 = 14U;
	static int16_t x496 = INT16_MIN;
	static uint64_t t15 = 7254222694028LLU;

	t15 = (((x493-x494)>>x495)^x496);

	if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x518 = -1;
	volatile int32_t x519 = 0;
	volatile int8_t x520 = INT8_MIN;
	static int32_t t16 = 7;

	t16 = (((x517-x518)>>x519)^x520);

	if (t16 != -8) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x541 = 7U;
	int16_t x542 = INT16_MIN;
	static uint8_t x543 = 9U;
	volatile int16_t x544 = -11707;
	int32_t t17 = 1548573;

	t17 = (((x541-x542)>>x543)^x544);

	if (t17 != -11771) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x610 = 113088493955247LLU;
	uint8_t x611 = 9U;
	uint8_t x612 = UINT8_MAX;
	uint64_t t18 = 47067292790LLU;

	t18 = (((x609-x610)>>x611)^x612);

	if (t18 != 36028576142999124LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x629 = INT32_MIN;
	int64_t x630 = -11725063180933505LL;
	volatile int64_t x631 = 52LL;
	int64_t t19 = 30748879LL;

	t19 = (((x629-x630)>>x631)^x632);

	if (t19 != 2147483645LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x669 = 45942717763LL;
	int32_t x670 = INT32_MIN;
	int64_t x672 = INT64_MIN;

	t20 = (((x669-x670)>>x671)^x672);

	if (t20 != -9223371988764574397LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x702 = 9U;
	int8_t x703 = 0;
	static int16_t x704 = 1854;
	uint64_t t21 = 1502782603521LLU;

	t21 = (((x701-x702)>>x703)^x704);

	if (t21 != 18446744073709549768LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x817 = 24095880808911LLU;
	static uint16_t x820 = 198U;

	t22 = (((x817-x818)>>x819)^x820);

	if (t22 != 94124534351LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x841 = -296;
	uint8_t x843 = 9U;
	static int32_t x844 = INT32_MIN;
	static int32_t t23 = 45316;

	t23 = (((x841-x842)>>x843)^x844);

	if (t23 != -2143289345) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x857 = UINT64_MAX;
	uint32_t x858 = 236U;
	volatile uint8_t x859 = 0U;
	int16_t x860 = INT16_MIN;

	t24 = (((x857-x858)>>x859)^x860);

	if (t24 != 32531LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x965 = -1;
	volatile uint32_t x966 = UINT32_MAX;
	uint16_t x967 = 3U;
	static int64_t x968 = -1036482818LL;
	volatile int64_t t25 = 517806LL;

	t25 = (((x965-x966)>>x967)^x968);

	if (t25 != -1036482818LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x993 = -16;
	uint32_t x995 = 8U;
	volatile uint64_t t26 = 112252LLU;

	t26 = (((x993-x994)>>x995)^x996);

	if (t26 != 18374822086850222107LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1071 = 0;
	static int32_t x1072 = INT32_MIN;

	t27 = (((x1069-x1070)>>x1071)^x1072);

	if (t27 != -2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1242 = 2U;
	static int8_t x1243 = 0;
	volatile int64_t t28 = 80874717LL;

	t28 = (((x1241-x1242)>>x1243)^x1244);

	if (t28 != -256LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1265 = UINT64_MAX;
	static uint8_t x1266 = 50U;
	volatile uint8_t x1267 = 46U;
	int64_t x1268 = INT64_MIN;
	uint64_t t29 = 8481826589889LLU;

	t29 = (((x1265-x1266)>>x1267)^x1268);

	if (t29 != 9223372036855037951LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1349 = 888481;
	uint8_t x1350 = 2U;
	volatile uint8_t x1351 = 11U;
	int8_t x1352 = INT8_MAX;
	volatile int32_t t30 = 43357;

	t30 = (((x1349-x1350)>>x1351)^x1352);

	if (t30 != 462) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1477 = 1045077412892192LLU;
	uint64_t x1478 = 1676370818LLU;
	int16_t x1479 = 1;
	static uint32_t x1480 = UINT32_MAX;
	volatile uint64_t t31 = 66217609LLU;

	t31 = (((x1477-x1478)>>x1479)^x1480);

	if (t31 != 522535049038512LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1517 = UINT16_MAX;
	static int8_t x1518 = INT8_MIN;
	int8_t x1519 = 1;
	int8_t x1520 = INT8_MAX;
	int32_t t32 = -138415;

	t32 = (((x1517-x1518)>>x1519)^x1520);

	if (t32 != 32832) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1525 = -88;
	int8_t x1526 = INT8_MIN;
	uint32_t x1527 = 1U;
	int16_t x1528 = -1;

	t33 = (((x1525-x1526)>>x1527)^x1528);

	if (t33 != -21) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1589 = -1;
	int8_t x1591 = 3;
	int8_t x1592 = -3;
	volatile int32_t t34 = -64;

	t34 = (((x1589-x1590)>>x1591)^x1592);

	if (t34 != -325185) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1645 = -1;
	static int8_t x1647 = 1;
	uint32_t x1648 = 30869646U;
	volatile uint32_t t35 = 40U;

	t35 = (((x1645-x1646)>>x1647)^x1648);

	if (t35 != 30869646U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1837 = INT64_MIN;
	uint64_t x1838 = 54611090LLU;
	int32_t x1839 = 10;
	static int32_t x1840 = INT32_MAX;

	t36 = (((x1837-x1838)>>x1839)^x1840);

	if (t36 != 9007197107310675LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1853 = INT8_MAX;
	uint8_t x1854 = 0U;
	int32_t x1855 = 7;
	int64_t x1856 = INT64_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = (((x1853-x1854)>>x1855)^x1856);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1862 = UINT64_MAX;
	int32_t x1863 = 1;
	volatile uint16_t x1864 = 224U;

	t38 = (((x1861-x1862)>>x1863)^x1864);

	if (t38 != 225LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1925 = 26U;
	int8_t x1926 = -1;
	uint8_t x1927 = 0U;
	int8_t x1928 = INT8_MIN;
	volatile int32_t t39 = 53385;

	t39 = (((x1925-x1926)>>x1927)^x1928);

	if (t39 != -101) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1957 = 13854671LLU;
	volatile int64_t x1958 = INT64_MIN;
	volatile uint8_t x1959 = 19U;
	int64_t x1960 = INT64_MIN;
	volatile uint64_t t40 = 118266421LLU;

	t40 = (((x1957-x1958)>>x1959)^x1960);

	if (t40 != 9223389629040820250LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2057 = -150;
	int64_t x2058 = INT64_MIN;
	volatile uint8_t x2059 = 1U;
	uint16_t x2060 = 106U;
	volatile int64_t t41 = 1907478321263LL;

	t41 = (((x2057-x2058)>>x2059)^x2060);

	if (t41 != 4611686018427387871LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2073 = UINT64_MAX;
	int32_t x2074 = INT32_MIN;
	uint16_t x2075 = 15U;
	uint8_t x2076 = 0U;
	uint64_t t42 = 601LLU;

	t42 = (((x2073-x2074)>>x2075)^x2076);

	if (t42 != 65535LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2077 = INT64_MAX;
	int32_t x2078 = 11;
	int16_t x2079 = 0;
	static int32_t x2080 = 56995372;
	int64_t t43 = 21LL;

	t43 = (((x2077-x2078)>>x2079)^x2080);

	if (t43 != 9223372036797780440LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2349 = -1;
	int64_t x2351 = 0LL;
	int32_t x2352 = -3;
	volatile uint64_t t44 = 2565855892541449027LLU;

	t44 = (((x2349-x2350)>>x2351)^x2352);

	if (t44 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2411 = 4U;
	uint8_t x2412 = 41U;
	int32_t t45 = 717;

	t45 = (((x2409-x2410)>>x2411)^x2412);

	if (t45 != 41) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2434 = INT8_MIN;
	int64_t x2435 = 28LL;
	static uint32_t x2436 = 670U;
	volatile uint32_t t46 = 61727U;

	t46 = (((x2433-x2434)>>x2435)^x2436);

	if (t46 != 670U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2437 = 2297485U;
	volatile uint16_t x2438 = 25048U;
	uint32_t x2439 = 1U;
	int64_t x2440 = INT64_MAX;
	static volatile int64_t t47 = 163527218482LL;

	t47 = (((x2437-x2438)>>x2439)^x2440);

	if (t47 != 9223372036853639589LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2473 = -1LL;
	int8_t x2474 = -1;
	static uint16_t x2475 = 17U;
	volatile int16_t x2476 = INT16_MIN;
	int64_t t48 = 2124LL;

	t48 = (((x2473-x2474)>>x2475)^x2476);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2481 = 4U;
	uint64_t x2482 = 4188LLU;
	uint16_t x2483 = 5U;
	uint32_t x2484 = 1U;
	volatile uint64_t t49 = 450LLU;

	t49 = (((x2481-x2482)>>x2483)^x2484);

	if (t49 != 576460752303423356LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2497 = -1LL;
	static int8_t x2498 = -47;
	uint8_t x2499 = 12U;
	volatile uint64_t x2500 = 25003518266916LLU;

	t50 = (((x2497-x2498)>>x2499)^x2500);

	if (t50 != 25003518266916LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2566 = 928535024417LLU;
	int8_t x2567 = 0;
	int32_t x2568 = -122529;
	static uint64_t t51 = 14462254523208770LLU;

	t51 = (((x2565-x2566)>>x2567)^x2568);

	if (t51 != 928535137407LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2623 = 6;
	volatile int8_t x2624 = -1;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (((x2621-x2622)>>x2623)^x2624);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2665 = INT16_MAX;
	volatile int64_t x2666 = -1LL;
	static int32_t x2667 = 52;
	uint16_t x2668 = UINT16_MAX;
	int64_t t53 = 31606LL;

	t53 = (((x2665-x2666)>>x2667)^x2668);

	if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2677 = INT64_MAX;
	uint8_t x2679 = 27U;
	uint64_t x2680 = UINT64_MAX;
	volatile uint64_t t54 = 14LLU;

	t54 = (((x2677-x2678)>>x2679)^x2680);

	if (t54 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2689 = INT32_MAX;
	int8_t x2690 = INT8_MAX;
	int8_t x2692 = 4;
	int32_t t55 = 2;

	t55 = (((x2689-x2690)>>x2691)^x2692);

	if (t55 != 536870884) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2697 = UINT16_MAX;
	int16_t x2699 = 14;
	static uint64_t t56 = 76288573323202LLU;

	t56 = (((x2697-x2698)>>x2699)^x2700);

	if (t56 != 1125899906707327LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2777 = UINT16_MAX;
	int16_t x2778 = -2109;
	uint16_t x2779 = 2U;
	int16_t x2780 = -3574;
	volatile int32_t t57 = 729615837;

	t57 = (((x2777-x2778)>>x2779)^x2780);

	if (t57 != -20475) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2790 = 22814U;
	uint32_t x2791 = 27U;
	static int16_t x2792 = INT16_MIN;
	uint64_t t58 = 47143426LLU;

	t58 = (((x2789-x2790)>>x2791)^x2792);

	if (t58 != 18446744066260299023LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2837 = 898780;
	uint64_t x2839 = 63LLU;
	int64_t t59 = 8848537279477LL;

	t59 = (((x2837-x2838)>>x2839)^x2840);

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2917 = 28;
	static int64_t x2918 = -1LL;
	uint8_t x2919 = 0U;
	volatile int8_t x2920 = -3;
	volatile int64_t t60 = -4LL;

	t60 = (((x2917-x2918)>>x2919)^x2920);

	if (t60 != -32LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x2977 = INT64_MAX;
	uint64_t x2978 = 227LLU;
	uint8_t x2979 = 2U;
	uint64_t x2980 = 114477307LLU;
	uint64_t t61 = 1827668126813116LLU;

	t61 = (((x2977-x2978)>>x2979)^x2980);

	if (t61 != 2305843009099216700LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3001 = INT16_MAX;
	int16_t x3002 = -238;
	static int32_t x3004 = 0;
	int32_t t62 = -373794346;

	t62 = (((x3001-x3002)>>x3003)^x3004);

	if (t62 != 33005) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3142 = 4040U;
	uint8_t x3143 = 9U;
	volatile uint32_t x3144 = UINT32_MAX;
	uint64_t t63 = 129603618696758LLU;

	t63 = (((x3141-x3142)>>x3143)^x3144);

	if (t63 != 4291264420LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x3149 = 333U;
	uint16_t x3150 = 17U;
	volatile int16_t x3152 = -1;
	static volatile int32_t t64 = 48488;

	t64 = (((x3149-x3150)>>x3151)^x3152);

	if (t64 != -40) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3221 = 2U;
	volatile int8_t x3222 = INT8_MIN;
	static uint8_t x3223 = 18U;
	uint16_t x3224 = 388U;
	volatile int32_t t65 = 1;

	t65 = (((x3221-x3222)>>x3223)^x3224);

	if (t65 != 388) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3229 = UINT16_MAX;
	uint32_t x3230 = UINT32_MAX;
	uint16_t x3231 = 2U;
	volatile int16_t x3232 = INT16_MAX;

	t66 = (((x3229-x3230)>>x3231)^x3232);

	if (t66 != 16383U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3244 = INT64_MIN;
	volatile int64_t t67 = -2413836022883LL;

	t67 = (((x3241-x3242)>>x3243)^x3244);

	if (t67 != -9223372036848039207LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3273 = 157U;
	int32_t x3274 = -1;
	volatile int16_t x3275 = 0;
	volatile uint64_t x3276 = 1591698547205501LLU;
	static volatile uint64_t t68 = 2LLU;

	t68 = (((x3273-x3274)>>x3275)^x3276);

	if (t68 != 1591698547205603LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3361 = 374;
	int8_t x3363 = 0;
	int64_t t69 = 301945785386045LL;

	t69 = (((x3361-x3362)>>x3363)^x3364);

	if (t69 != -9223372036854775433LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3411 = 1U;
	static uint16_t x3412 = 3U;
	int32_t t70 = 215850;

	t70 = (((x3409-x3410)>>x3411)^x3412);

	if (t70 != 16380) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x3569 = INT16_MAX;
	int16_t x3570 = 1;
	uint8_t x3571 = 20U;
	int8_t x3572 = INT8_MAX;

	t71 = (((x3569-x3570)>>x3571)^x3572);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x3598 = -3392;
	uint16_t x3599 = 59U;
	static int32_t x3600 = INT32_MIN;
	uint64_t t72 = 3140874429800724636LLU;

	t72 = (((x3597-x3598)>>x3599)^x3600);

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3618 = 47U;
	uint8_t x3619 = 23U;
	int32_t x3620 = 43170;
	volatile uint32_t t73 = 4270U;

	t73 = (((x3617-x3618)>>x3619)^x3620);

	if (t73 != 43357U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3621 = -1;
	uint64_t x3622 = UINT64_MAX;
	static int32_t x3624 = INT32_MAX;
	volatile uint64_t t74 = 2174LLU;

	t74 = (((x3621-x3622)>>x3623)^x3624);

	if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3671 = 1;
	uint8_t x3672 = 1U;
	uint32_t t75 = 323239U;

	t75 = (((x3669-x3670)>>x3671)^x3672);

	if (t75 != 8232103U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3733 = UINT16_MAX;
	int16_t x3734 = INT16_MAX;
	uint16_t x3735 = 30U;
	volatile uint8_t x3736 = UINT8_MAX;
	volatile int32_t t76 = 6;

	t76 = (((x3733-x3734)>>x3735)^x3736);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3738 = 8407670444958LLU;
	uint32_t x3739 = 2U;
	volatile uint32_t x3740 = 174U;
	volatile uint64_t t77 = 131093916045621LLU;

	t77 = (((x3737-x3738)>>x3739)^x3740);

	if (t77 != 4611683869140080540LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3777 = INT32_MIN;
	int64_t x3778 = INT64_MIN;
	static volatile uint8_t x3779 = 9U;
	int64_t x3780 = 360241245451829752LL;
	volatile int64_t t78 = -20LL;

	t78 = (((x3777-x3778)>>x3779)^x3780);

	if (t78 != 342320296417149432LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3865 = -531;
	uint32_t x3866 = UINT32_MAX;
	int8_t x3867 = 7;
	int64_t x3868 = INT64_MIN;
	int64_t t79 = -876732245721LL;

	t79 = (((x3865-x3866)>>x3867)^x3868);

	if (t79 != -9223372036821221381LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3881 = UINT8_MAX;
	uint32_t x3882 = 24U;
	uint8_t x3883 = 0U;
	int64_t x3884 = INT64_MIN;
	int64_t t80 = 19002191193LL;

	t80 = (((x3881-x3882)>>x3883)^x3884);

	if (t80 != -9223372036854775577LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3885 = -102LL;
	uint8_t x3887 = 3U;
	int8_t x3888 = -21;

	t81 = (((x3885-x3886)>>x3887)^x3888);

	if (t81 != -268435432LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3925 = 1;
	static uint8_t x3927 = 31U;
	static int8_t x3928 = INT8_MAX;
	volatile int32_t t82 = -192766;

	t82 = (((x3925-x3926)>>x3927)^x3928);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3945 = 6495990862LLU;
	int32_t x3947 = 1;
	static uint64_t t83 = 3779130667538919LLU;

	t83 = (((x3945-x3946)>>x3947)^x3948);

	if (t83 != 18446744070461556184LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3969 = -1;
	static volatile int16_t x3970 = -3;
	int8_t x3971 = 1;
	volatile uint64_t x3972 = 2104241843686LLU;
	uint64_t t84 = 57LLU;

	t84 = (((x3969-x3970)>>x3971)^x3972);

	if (t84 != 2104241843687LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x4034 = -1;
	static uint8_t x4035 = 12U;
	int16_t x4036 = 1;
	volatile int32_t t85 = 27819;

	t85 = (((x4033-x4034)>>x4035)^x4036);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4058 = -1;
	uint32_t x4059 = 0U;

	t86 = (((x4057-x4058)>>x4059)^x4060);

	if (t86 != 1624LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4069 = INT32_MIN;
	int64_t x4070 = INT64_MIN;
	uint8_t x4071 = 26U;
	int8_t x4072 = INT8_MAX;
	static volatile int64_t t87 = -1LL;

	t87 = (((x4069-x4070)>>x4071)^x4072);

	if (t87 != 137438953375LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4113 = INT16_MIN;
	uint64_t x4114 = 46269067503344LLU;
	int32_t x4115 = 19;
	uint64_t x4116 = 34774105439192LLU;
	volatile uint64_t t88 = 3797413786LLU;

	t88 = (((x4113-x4114)>>x4115)^x4116);

	if (t88 != 410178740045LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4190 = -104260181875208346LL;
	static int8_t x4191 = 1;
	static int8_t x4192 = -1;

	t89 = (((x4189-x4190)>>x4191)^x4192);

	if (t89 != 18394613982771947443LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x4217 = 117845U;
	volatile int16_t x4218 = 1;
	int64_t t90 = -677650LL;

	t90 = (((x4217-x4218)>>x4219)^x4220);

	if (t90 != -9223372036854716886LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4241 = INT8_MIN;
	uint8_t x4243 = 20U;
	volatile int32_t t91 = -49778336;

	t91 = (((x4241-x4242)>>x4243)^x4244);

	if (t91 != 50) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4253 = INT16_MAX;
	int64_t x4254 = 3LL;
	int8_t x4256 = INT8_MIN;
	static int64_t t92 = 4487LL;

	t92 = (((x4253-x4254)>>x4255)^x4256);

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4293 = INT64_MAX;
	static uint8_t x4294 = 0U;

	t93 = (((x4293-x4294)>>x4295)^x4296);

	if (t93 != -8192LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x4317 = 768804918U;
	uint64_t x4318 = UINT64_MAX;

	t94 = (((x4317-x4318)>>x4319)^x4320);

	if (t94 != 96100729LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4453 = 21631506;
	uint8_t x4455 = 14U;
	static uint16_t x4456 = 0U;
	static volatile int32_t t95 = 918525484;

	t95 = (((x4453-x4454)>>x4455)^x4456);

	if (t95 != 1320) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x4477 = UINT32_MAX;
	uint8_t x4478 = 19U;
	uint64_t x4479 = 1LLU;
	int64_t t96 = 94248497826LL;

	t96 = (((x4477-x4478)>>x4479)^x4480);

	if (t96 != -2147475275LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4561 = UINT16_MAX;
	int64_t x4562 = -1LL;
	volatile uint8_t x4563 = 30U;
	uint64_t x4564 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x4561-x4562)>>x4563)^x4564);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4569 = UINT64_MAX;
	static int32_t x4572 = -1554;
	volatile uint64_t t98 = 54379895LLU;

	t98 = (((x4569-x4570)>>x4571)^x4572);

	if (t98 != 18446744073709550062LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x4647 = 3U;
	int8_t x4648 = INT8_MIN;

	t99 = (((x4645-x4646)>>x4647)^x4648);

	if (t99 != 4273708748U) { NG(); } else { ; }
	
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


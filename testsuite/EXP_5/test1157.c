#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 46082169103LL;
uint32_t x38 = 56U;
static uint64_t t1 = 4226818493807LLU;
int16_t x165 = INT16_MAX;
int32_t x166 = 8104;
int32_t x210 = INT32_MAX;
volatile int8_t x211 = 1;
uint64_t x246 = UINT64_MAX;
volatile uint64_t t4 = 125831809LLU;
uint8_t x291 = 18U;
static volatile uint32_t x292 = 281U;
volatile uint32_t x324 = 766U;
int8_t x376 = INT8_MIN;
int16_t x404 = 3766;
int64_t t9 = 2165036696697522253LL;
int32_t t10 = -273;
int32_t t11 = 88433;
uint16_t x497 = UINT16_MAX;
static int32_t x500 = -903760;
static volatile int32_t t12 = 421984022;
uint64_t t13 = 9016555080470582LLU;
volatile int32_t x609 = 458;
uint8_t x611 = 2U;
volatile int8_t x1108 = -60;
int8_t x1351 = 1;
static int8_t x1357 = INT8_MAX;
volatile uint8_t x1358 = 41U;
uint64_t x1515 = 1LLU;
int64_t t20 = -113062LL;
int16_t x1646 = 52;
volatile int16_t x1654 = INT16_MAX;
volatile int16_t x1656 = INT16_MIN;
volatile int16_t x1765 = INT16_MIN;
int8_t x2003 = 19;
int16_t x2153 = INT16_MAX;
int32_t x2154 = INT32_MAX;
volatile int8_t x2155 = 0;
volatile int32_t x2156 = INT32_MIN;
uint8_t x2188 = 4U;
uint32_t x2317 = UINT32_MAX;
static int64_t t33 = -3527LL;
volatile uint32_t x2663 = 6U;
volatile int64_t t36 = 514276664827LL;
volatile uint32_t x2725 = UINT32_MAX;
volatile int64_t x2873 = -305302072276LL;
int16_t x2969 = 4848;
uint8_t x2971 = 3U;
uint32_t x2972 = UINT32_MAX;
uint16_t x2977 = UINT16_MAX;
int8_t x2978 = 5;
static int16_t x3002 = INT16_MAX;
int64_t x3003 = 1LL;
uint16_t x3004 = 6U;
static uint8_t x3039 = 14U;
uint32_t x3040 = 6061U;
uint32_t x3197 = 1902U;
volatile uint8_t x3278 = UINT8_MAX;
int32_t t46 = 8860;
int32_t t47 = -21520878;
static uint8_t x3408 = 0U;
uint16_t x3751 = 4U;
static uint8_t x3867 = 17U;
int64_t x3884 = INT64_MAX;
int64_t t53 = -54885415326872334LL;
uint64_t x3986 = 11465LLU;
uint16_t x3987 = 14U;
int64_t x4021 = 60LL;
volatile uint64_t x4023 = 3LLU;
uint64_t x4024 = 3434LLU;
uint64_t t57 = 309825LLU;
volatile uint32_t x4234 = 73550U;
volatile uint32_t t59 = 582469965U;
volatile uint16_t x4343 = 23U;
static uint32_t t60 = 69366346U;
uint8_t x4567 = 2U;
static uint64_t x4574 = UINT64_MAX;
int64_t x4576 = 3742942489786950LL;
volatile uint64_t t63 = 3906052945951114800LLU;
volatile int8_t x4589 = INT8_MAX;
static uint8_t x4631 = 45U;
uint8_t x4632 = 18U;
volatile uint8_t x4770 = 3U;
volatile int8_t x4772 = 27;
static int64_t t68 = 1138LL;
volatile int32_t t69 = 142879;
static volatile int16_t x4905 = 1;
uint64_t x4916 = 58527889294928359LLU;
static int8_t x5084 = -11;
uint16_t x5259 = 29U;
int16_t x5285 = INT16_MIN;
volatile int8_t x5287 = 9;
int16_t x5293 = -215;
uint16_t x5295 = 3U;
int64_t t77 = -1527308846473023LL;
uint32_t x5366 = 110U;
static int8_t x5409 = INT8_MIN;
static uint16_t x5411 = 1U;
static int16_t x5412 = -22;
int32_t t81 = 23839170;
int32_t x5413 = INT32_MIN;
int32_t x5415 = 1;
static volatile uint32_t t82 = 9U;
uint64_t x5426 = UINT64_MAX;
volatile uint64_t t83 = 1LLU;
static volatile int64_t x5465 = 62471703075LL;
int8_t x5466 = 10;
volatile uint64_t x5482 = UINT64_MAX;
volatile uint64_t t87 = 2020LLU;
uint32_t x5566 = 187U;
uint32_t x5578 = 11160649U;
int8_t x5580 = INT8_MIN;
volatile uint64_t t89 = 5722531LLU;
volatile int16_t x5632 = -39;
volatile uint64_t t91 = 618270433357704LLU;
static int16_t x5801 = -1;
int64_t x5802 = INT64_MAX;
static int8_t x5866 = 7;
uint16_t x5913 = 4U;
uint64_t t98 = 109206697951912461LLU;
volatile int8_t x6006 = 1;
int16_t x6008 = INT16_MIN;


void f0(void) {
	int32_t x5 = 130;
	int16_t x6 = 80;
	uint8_t x7 = 1U;
	volatile int64_t t0 = -606239039LL;

	t0 = (x5^((x6>>x7)&x8));

	if (t0 != 138LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x37 = 1;
	int8_t x39 = 0;
	static uint64_t x40 = 593LLU;

	t1 = (x37^((x38>>x39)&x40));

	if (t1 != 17LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x167 = 3;
	static int32_t x168 = -45242;
	int32_t t2 = -11494705;

	t2 = (x165^((x166>>x167)&x168));

	if (t2 != 31931) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x209 = -1LL;
	volatile uint8_t x212 = 3U;
	volatile int64_t t3 = 1138784458064LL;

	t3 = (x209^((x210>>x211)&x212));

	if (t3 != -4LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x245 = 2;
	int8_t x247 = 0;
	static uint16_t x248 = UINT16_MAX;

	t4 = (x245^((x246>>x247)&x248));

	if (t4 != 65533LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x289 = -1;
	volatile uint64_t x290 = 1046913420855LLU;
	volatile uint64_t t5 = 203124016158320LLU;

	t5 = (x289^((x290>>x291)&x292));

	if (t5 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 114U;
	volatile uint8_t x323 = 12U;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x321^((x322>>x323)&x324));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x369 = 16890026614578606LL;
	uint16_t x370 = 58U;
	static int8_t x371 = 8;
	int8_t x372 = -3;
	volatile int64_t t7 = -4898861820263LL;

	t7 = (x369^((x370>>x371)&x372));

	if (t7 != 16890026614578606LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x373 = 475U;
	uint32_t x374 = 49171191U;
	static volatile int16_t x375 = 1;
	uint32_t t8 = 184513U;

	t8 = (x373^((x374>>x375)&x376));

	if (t8 != 24585435U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x401 = -210LL;
	int32_t x402 = 2003760;
	static uint8_t x403 = 0U;

	t9 = (x401^((x402>>x403)&x404));

	if (t9 != -738LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x421 = -1550;
	uint8_t x422 = UINT8_MAX;
	static uint32_t x423 = 14U;
	static int8_t x424 = -1;

	t10 = (x421^((x422>>x423)&x424));

	if (t10 != -1550) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x433 = INT16_MIN;
	int8_t x434 = 12;
	static int8_t x435 = 23;
	uint16_t x436 = 20955U;

	t11 = (x433^((x434>>x435)&x436));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x498 = 1286U;
	int8_t x499 = 2;

	t12 = (x497^((x498>>x499)&x500));

	if (t12 != 65279) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x561 = INT16_MIN;
	uint64_t x562 = 319291135LLU;
	int8_t x563 = 1;
	int16_t x564 = -1;

	t13 = (x561^((x562>>x563)&x564));

	if (t13 != 18446744073549938559LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x610 = 31U;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t14 = 1;

	t14 = (x609^((x610>>x611)&x612));

	if (t14 != 461) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x897 = -1;
	int32_t x898 = 1;
	static uint8_t x899 = 0U;
	int64_t x900 = INT64_MAX;
	volatile int64_t t15 = -1821976712593552LL;

	t15 = (x897^((x898>>x899)&x900));

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1105 = -395452267073249LL;
	uint64_t x1106 = 26644LLU;
	volatile int8_t x1107 = 4;
	uint64_t t16 = 62221842703431525LLU;

	t16 = (x1105^((x1106>>x1107)&x1108));

	if (t16 != 18446348621442480031LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1349 = 12U;
	int32_t x1350 = INT32_MAX;
	volatile int64_t x1352 = INT64_MAX;
	volatile int64_t t17 = -22LL;

	t17 = (x1349^((x1350>>x1351)&x1352));

	if (t17 != 1073741811LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1359 = 25;
	int64_t x1360 = -3054767255776183LL;
	static int64_t t18 = 89LL;

	t18 = (x1357^((x1358>>x1359)&x1360));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1373 = INT16_MIN;
	static int32_t x1374 = INT32_MAX;
	volatile int8_t x1375 = 2;
	int16_t x1376 = INT16_MAX;
	int32_t t19 = -29213494;

	t19 = (x1373^((x1374>>x1375)&x1376));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1513 = INT64_MAX;
	volatile uint8_t x1514 = 9U;
	uint32_t x1516 = 135U;

	t20 = (x1513^((x1514>>x1515)&x1516));

	if (t20 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1581 = -1;
	static int32_t x1582 = INT32_MAX;
	int8_t x1583 = 1;
	volatile int32_t x1584 = INT32_MIN;
	int32_t t21 = -113;

	t21 = (x1581^((x1582>>x1583)&x1584));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1645 = INT8_MIN;
	uint8_t x1647 = 2U;
	volatile uint32_t x1648 = 4186669U;
	volatile uint32_t t22 = 12245917U;

	t22 = (x1645^((x1646>>x1647)&x1648));

	if (t22 != 4294967181U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1653 = 1621LLU;
	static int64_t x1655 = 0LL;
	volatile uint64_t t23 = 29751463352135939LLU;

	t23 = (x1653^((x1654>>x1655)&x1656));

	if (t23 != 1621LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1766 = 37174249348LL;
	uint64_t x1767 = 0LLU;
	int8_t x1768 = INT8_MIN;
	int64_t t24 = -7646528968LL;

	t24 = (x1765^((x1766>>x1767)&x1768));

	if (t24 != -37174278272LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1933 = -5;
	static uint16_t x1934 = 14545U;
	static int16_t x1935 = 3;
	uint64_t x1936 = 5569173712418291LLU;
	volatile uint64_t t25 = 224279230233LLU;

	t25 = (x1933^((x1934>>x1935)&x1936));

	if (t25 != 18446744073709550313LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x2001 = INT16_MIN;
	uint8_t x2002 = UINT8_MAX;
	int64_t x2004 = INT64_MAX;
	static volatile int64_t t26 = 1671483882328416167LL;

	t26 = (x2001^((x2002>>x2003)&x2004));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2097 = 2338;
	volatile uint16_t x2098 = 1U;
	volatile uint8_t x2099 = 0U;
	volatile uint32_t x2100 = 645582472U;
	volatile uint32_t t27 = 69U;

	t27 = (x2097^((x2098>>x2099)&x2100));

	if (t27 != 2338U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2101 = 461075U;
	uint8_t x2102 = UINT8_MAX;
	uint16_t x2103 = 7U;
	int16_t x2104 = -1;
	uint32_t t28 = 157U;

	t28 = (x2101^((x2102>>x2103)&x2104));

	if (t28 != 461074U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t t29 = 303;

	t29 = (x2153^((x2154>>x2155)&x2156));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2185 = INT8_MIN;
	volatile uint64_t x2186 = UINT64_MAX;
	volatile uint64_t x2187 = 3LLU;
	uint64_t t30 = 293349448366077LLU;

	t30 = (x2185^((x2186>>x2187)&x2188));

	if (t30 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2257 = UINT32_MAX;
	uint8_t x2258 = 2U;
	uint32_t x2259 = 1U;
	static int16_t x2260 = INT16_MAX;
	uint32_t t31 = 1730672U;

	t31 = (x2257^((x2258>>x2259)&x2260));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2318 = 58U;
	volatile int8_t x2319 = 5;
	static uint8_t x2320 = 8U;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x2317^((x2318>>x2319)&x2320));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2477 = UINT16_MAX;
	int64_t x2478 = INT64_MAX;
	static uint8_t x2479 = 3U;
	volatile int32_t x2480 = -1;

	t33 = (x2477^((x2478>>x2479)&x2480));

	if (t33 != 1152921504606781440LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2625 = INT64_MAX;
	uint64_t x2626 = 3178292958LLU;
	static uint8_t x2627 = 6U;
	int64_t x2628 = INT64_MAX;
	uint64_t t34 = 172003326444435823LLU;

	t34 = (x2625^((x2626>>x2627)&x2628));

	if (t34 != 9223372036805114980LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2645 = INT64_MAX;
	uint16_t x2646 = 2826U;
	volatile int16_t x2647 = 0;
	int8_t x2648 = INT8_MAX;
	int64_t t35 = 254432LL;

	t35 = (x2645^((x2646>>x2647)&x2648));

	if (t35 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2661 = UINT8_MAX;
	int8_t x2662 = 29;
	static int64_t x2664 = INT64_MAX;

	t36 = (x2661^((x2662>>x2663)&x2664));

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x2685 = 18U;
	int64_t x2686 = 893LL;
	int32_t x2687 = 22;
	int16_t x2688 = INT16_MIN;
	int64_t t37 = -3374201085LL;

	t37 = (x2685^((x2686>>x2687)&x2688));

	if (t37 != 18LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2726 = 394U;
	volatile int16_t x2727 = 5;
	int32_t x2728 = INT32_MIN;
	static volatile uint32_t t38 = UINT32_MAX;

	t38 = (x2725^((x2726>>x2727)&x2728));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2874 = 133713834400LLU;
	uint8_t x2875 = 48U;
	int32_t x2876 = INT32_MAX;
	volatile uint64_t t39 = 2110636469117186685LLU;

	t39 = (x2873^((x2874>>x2875)&x2876));

	if (t39 != 18446743768407479340LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2970 = 479461760;
	volatile uint32_t t40 = 224U;

	t40 = (x2969^((x2970>>x2971)&x2972));

	if (t40 != 59937472U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2979 = 9U;
	int32_t x2980 = -111;
	static int32_t t41 = 0;

	t41 = (x2977^((x2978>>x2979)&x2980));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x3001 = 1;
	volatile int32_t t42 = 82666910;

	t42 = (x3001^((x3002>>x3003)&x3004));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3037 = INT32_MIN;
	static int64_t x3038 = INT64_MAX;
	int64_t t43 = 42271781198010LL;

	t43 = (x3037^((x3038>>x3039)&x3040));

	if (t43 != -2147477587LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3093 = INT32_MIN;
	int64_t x3094 = 725992104452LL;
	int16_t x3095 = 42;
	volatile uint64_t x3096 = 54068791908738LLU;
	volatile uint64_t t44 = 305130828992LLU;

	t44 = (x3093^((x3094>>x3095)&x3096));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3198 = INT64_MAX;
	static int16_t x3199 = 11;
	static uint16_t x3200 = 1738U;
	volatile int64_t t45 = -83824LL;

	t45 = (x3197^((x3198>>x3199)&x3200));

	if (t45 != 420LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x3277 = UINT16_MAX;
	int8_t x3279 = 4;
	int8_t x3280 = INT8_MAX;

	t46 = (x3277^((x3278>>x3279)&x3280));

	if (t46 != 65520) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3281 = INT16_MIN;
	static volatile uint16_t x3282 = 131U;
	uint16_t x3283 = 1U;
	int32_t x3284 = INT32_MAX;

	t47 = (x3281^((x3282>>x3283)&x3284));

	if (t47 != -32703) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3405 = 4LL;
	int64_t x3406 = INT64_MAX;
	static int8_t x3407 = 57;
	int64_t t48 = -29098LL;

	t48 = (x3405^((x3406>>x3407)&x3408));

	if (t48 != 4LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3597 = 34U;
	uint8_t x3598 = UINT8_MAX;
	uint16_t x3599 = 15U;
	uint16_t x3600 = UINT16_MAX;
	volatile int32_t t49 = 0;

	t49 = (x3597^((x3598>>x3599)&x3600));

	if (t49 != 34) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3613 = -1;
	static volatile uint8_t x3614 = 11U;
	volatile int8_t x3615 = 0;
	static int8_t x3616 = INT8_MIN;
	volatile int32_t t50 = 738374;

	t50 = (x3613^((x3614>>x3615)&x3616));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x3749 = INT16_MAX;
	volatile uint16_t x3750 = 125U;
	volatile uint64_t x3752 = 231798LLU;
	uint64_t t51 = 31545001474844423LLU;

	t51 = (x3749^((x3750>>x3751)&x3752));

	if (t51 != 32761LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3865 = INT8_MIN;
	static uint64_t x3866 = 1031123828LLU;
	static uint16_t x3868 = UINT16_MAX;
	uint64_t t52 = 3846LLU;

	t52 = (x3865^((x3866>>x3867)&x3868));

	if (t52 != 18446744073709543738LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3881 = -1LL;
	volatile int8_t x3882 = 59;
	int16_t x3883 = 1;

	t53 = (x3881^((x3882>>x3883)&x3884));

	if (t53 != -30LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3985 = INT16_MIN;
	static volatile uint64_t x3988 = UINT64_MAX;
	volatile uint64_t t54 = 595192158191396LLU;

	t54 = (x3985^((x3986>>x3987)&x3988));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3993 = -1LL;
	uint64_t x3994 = 526393176907589LLU;
	volatile uint8_t x3995 = 0U;
	volatile uint16_t x3996 = UINT16_MAX;
	static volatile uint64_t t55 = 21570732LLU;

	t55 = (x3993^((x3994>>x3995)&x3996));

	if (t55 != 18446744073709527226LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4022 = 26U;
	volatile uint64_t t56 = 1LLU;

	t56 = (x4021^((x4022>>x4023)&x4024));

	if (t56 != 62LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4189 = 2U;
	volatile uint64_t x4190 = 73LLU;
	volatile int16_t x4191 = 1;
	static volatile int64_t x4192 = INT64_MIN;

	t57 = (x4189^((x4190>>x4191)&x4192));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4233 = UINT64_MAX;
	volatile uint8_t x4235 = 30U;
	volatile uint8_t x4236 = 3U;
	static uint64_t t58 = UINT64_MAX;

	t58 = (x4233^((x4234>>x4235)&x4236));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4237 = INT16_MAX;
	volatile int8_t x4238 = INT8_MAX;
	static int8_t x4239 = 1;
	volatile uint32_t x4240 = UINT32_MAX;

	t59 = (x4237^((x4238>>x4239)&x4240));

	if (t59 != 32704U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4341 = INT8_MIN;
	uint32_t x4342 = 121U;
	static int16_t x4344 = -1;

	t60 = (x4341^((x4342>>x4343)&x4344));

	if (t60 != 4294967168U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4357 = -1;
	uint64_t x4358 = 1643068034458767LLU;
	uint16_t x4359 = 10U;
	uint16_t x4360 = 13U;
	uint64_t t61 = 1329159590618LLU;

	t61 = (x4357^((x4358>>x4359)&x4360));

	if (t61 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x4565 = -1;
	uint8_t x4566 = UINT8_MAX;
	uint64_t x4568 = 8663888LLU;
	volatile uint64_t t62 = 4398449369181185LLU;

	t62 = (x4565^((x4566>>x4567)&x4568));

	if (t62 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4573 = -1;
	uint32_t x4575 = 0U;

	t63 = (x4573^((x4574>>x4575)&x4576));

	if (t63 != 18443001131219764665LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4590 = 236U;
	int8_t x4591 = 1;
	int16_t x4592 = 87;
	static int32_t t64 = 1013410;

	t64 = (x4589^((x4590>>x4591)&x4592));

	if (t64 != 41) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4629 = INT64_MIN;
	int64_t x4630 = INT64_MAX;
	static volatile int64_t t65 = 14153042LL;

	t65 = (x4629^((x4630>>x4631)&x4632));

	if (t65 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4725 = -1;
	uint32_t x4726 = 48561721U;
	int8_t x4727 = 1;
	int64_t x4728 = INT64_MIN;
	volatile int64_t t66 = -1LL;

	t66 = (x4725^((x4726>>x4727)&x4728));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x4769 = 6;
	uint32_t x4771 = 0U;
	volatile int32_t t67 = 6;

	t67 = (x4769^((x4770>>x4771)&x4772));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4785 = 18444;
	uint8_t x4786 = 1U;
	volatile uint16_t x4787 = 0U;
	volatile int64_t x4788 = -1LL;

	t68 = (x4785^((x4786>>x4787)&x4788));

	if (t68 != 18445LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4897 = INT32_MIN;
	int8_t x4898 = INT8_MAX;
	static uint64_t x4899 = 1LLU;
	int32_t x4900 = INT32_MAX;

	t69 = (x4897^((x4898>>x4899)&x4900));

	if (t69 != -2147483585) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4906 = INT64_MAX;
	uint16_t x4907 = 0U;
	int32_t x4908 = -10887;
	int64_t t70 = 9143320409845LL;

	t70 = (x4905^((x4906>>x4907)&x4908));

	if (t70 != 9223372036854764920LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4913 = UINT8_MAX;
	volatile uint64_t x4914 = 647864856804375LLU;
	static uint16_t x4915 = 0U;
	static uint64_t t71 = 656141121305459596LLU;

	t71 = (x4913^((x4914>>x4915)&x4916));

	if (t71 != 646555830888696LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4917 = UINT16_MAX;
	uint64_t x4918 = 1978118989235737089LLU;
	static uint32_t x4919 = 0U;
	static uint64_t x4920 = UINT64_MAX;
	volatile uint64_t t72 = 61188LLU;

	t72 = (x4917^((x4918>>x4919)&x4920));

	if (t72 != 1978118989235695102LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5081 = -742166268615472LL;
	volatile int16_t x5082 = INT16_MAX;
	static uint16_t x5083 = 4U;
	static int64_t t73 = 3427696555LL;

	t73 = (x5081^((x5082>>x5083)&x5084));

	if (t73 != -742166268615899LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5201 = INT16_MAX;
	volatile int32_t x5202 = INT32_MAX;
	uint8_t x5203 = 0U;
	int32_t x5204 = -3010;
	int32_t t74 = 170099338;

	t74 = (x5201^((x5202>>x5203)&x5204));

	if (t74 != 2147453889) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5257 = INT64_MIN;
	static volatile int32_t x5258 = 1644;
	uint64_t x5260 = UINT64_MAX;
	volatile uint64_t t75 = 1390795785116755681LLU;

	t75 = (x5257^((x5258>>x5259)&x5260));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x5286 = INT8_MAX;
	int64_t x5288 = -1LL;
	int64_t t76 = -207539667056LL;

	t76 = (x5285^((x5286>>x5287)&x5288));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5294 = INT64_MAX;
	int64_t x5296 = 23502204227LL;

	t77 = (x5293^((x5294>>x5295)&x5296));

	if (t77 != -23502204310LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x5317 = 181572215660LLU;
	uint64_t x5318 = 7532578243849266609LLU;
	uint8_t x5319 = 7U;
	volatile int32_t x5320 = INT32_MIN;
	uint64_t t78 = 345332100122LLU;

	t78 = (x5317^((x5318>>x5319)&x5320));

	if (t78 != 58848174194565996LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5329 = UINT64_MAX;
	volatile int64_t x5330 = 3890117815LL;
	volatile uint8_t x5331 = 13U;
	static uint32_t x5332 = 134312U;
	static volatile uint64_t t79 = 4121059832113416LLU;

	t79 = (x5329^((x5330>>x5331)&x5332));

	if (t79 != 18446744073709417311LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x5365 = INT8_MIN;
	uint8_t x5367 = 0U;
	static int16_t x5368 = 2;
	uint32_t t80 = 36000U;

	t80 = (x5365^((x5366>>x5367)&x5368));

	if (t80 != 4294967170U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x5410 = 3;

	t81 = (x5409^((x5410>>x5411)&x5412));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5414 = 186919254U;
	uint16_t x5416 = UINT16_MAX;

	t82 = (x5413^((x5414>>x5415)&x5416));

	if (t82 != 2147488939U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5425 = INT64_MIN;
	uint8_t x5427 = 5U;
	int32_t x5428 = INT32_MIN;

	t83 = (x5425^((x5426>>x5427)&x5428));

	if (t83 != 9799832787010715648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5429 = -51;
	volatile int32_t x5430 = INT32_MAX;
	int8_t x5431 = 0;
	int64_t x5432 = INT64_MIN;
	int64_t t84 = 112LL;

	t84 = (x5429^((x5430>>x5431)&x5432));

	if (t84 != -51LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5461 = 107091158LLU;
	volatile int16_t x5462 = INT16_MAX;
	int16_t x5463 = 0;
	static int16_t x5464 = INT16_MAX;
	uint64_t t85 = 32739239022961LLU;

	t85 = (x5461^((x5462>>x5463)&x5464));

	if (t85 != 107113257LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5467 = 1;
	int16_t x5468 = INT16_MAX;
	volatile int64_t t86 = -10344LL;

	t86 = (x5465^((x5466>>x5467)&x5468));

	if (t86 != 62471703078LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x5481 = INT32_MAX;
	uint8_t x5483 = 1U;
	static int16_t x5484 = -2;

	t87 = (x5481^((x5482>>x5483)&x5484));

	if (t87 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5565 = -1;
	int32_t x5567 = 13;
	int32_t x5568 = -1;
	uint32_t t88 = UINT32_MAX;

	t88 = (x5565^((x5566>>x5567)&x5568));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5577 = 63143230050LLU;
	int8_t x5579 = 0;

	t89 = (x5577^((x5578>>x5579)&x5580));

	if (t89 != 63133415010LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5609 = 17626143092644847LLU;
	uint8_t x5610 = UINT8_MAX;
	int8_t x5611 = 13;
	int64_t x5612 = INT64_MAX;
	uint64_t t90 = 87576252806308LLU;

	t90 = (x5609^((x5610>>x5611)&x5612));

	if (t90 != 17626143092644847LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5629 = 1259142611375LLU;
	volatile uint16_t x5630 = 1U;
	uint16_t x5631 = 3U;

	t91 = (x5629^((x5630>>x5631)&x5632));

	if (t91 != 1259142611375LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5645 = UINT16_MAX;
	int16_t x5646 = INT16_MAX;
	uint8_t x5647 = 27U;
	uint64_t x5648 = 388LLU;
	uint64_t t92 = 3809LLU;

	t92 = (x5645^((x5646>>x5647)&x5648));

	if (t92 != 65535LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5673 = UINT8_MAX;
	uint64_t x5674 = 4276495196460992288LLU;
	uint32_t x5675 = 1U;
	volatile int64_t x5676 = 0LL;
	volatile uint64_t t93 = 44012050LLU;

	t93 = (x5673^((x5674>>x5675)&x5676));

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x5803 = 0LLU;
	static int64_t x5804 = INT64_MIN;
	volatile int64_t t94 = 283915610501616373LL;

	t94 = (x5801^((x5802>>x5803)&x5804));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5865 = 6732U;
	uint8_t x5867 = 6U;
	int64_t x5868 = INT64_MIN;
	volatile int64_t t95 = -22LL;

	t95 = (x5865^((x5866>>x5867)&x5868));

	if (t95 != 6732LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5914 = 275114526052266182LLU;
	uint32_t x5915 = 0U;
	int8_t x5916 = 1;
	static volatile uint64_t t96 = 1LLU;

	t96 = (x5913^((x5914>>x5915)&x5916));

	if (t96 != 4LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5957 = 0;
	uint64_t x5958 = 438521474245953LLU;
	uint8_t x5959 = 11U;
	int16_t x5960 = INT16_MIN;
	static uint64_t t97 = 196625662LLU;

	t97 = (x5957^((x5958>>x5959)&x5960));

	if (t97 != 214121807872LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5965 = 232U;
	volatile uint64_t x5966 = UINT64_MAX;
	static uint16_t x5967 = 25U;
	int32_t x5968 = -44348534;

	t98 = (x5965^((x5966>>x5967)&x5968));

	if (t98 != 549711465314LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6005 = 1212220LLU;
	uint8_t x6007 = 16U;
	volatile uint64_t t99 = 60986LLU;

	t99 = (x6005^((x6006>>x6007)&x6008));

	if (t99 != 1212220LLU) { NG(); } else { ; }
	
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


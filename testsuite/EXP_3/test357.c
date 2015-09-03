#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x38 = -1LL;
int32_t t1 = 373792;
volatile uint32_t x234 = 2U;
volatile int32_t x357 = 320207343;
volatile uint32_t t4 = 1U;
int64_t x447 = -1LL;
uint64_t x498 = UINT64_MAX;
static int8_t x645 = -1;
uint8_t x647 = 15U;
uint8_t x803 = 0U;
uint32_t x913 = UINT32_MAX;
volatile int32_t t14 = 1133752;
int8_t x1040 = -1;
volatile int16_t x1062 = INT16_MAX;
uint32_t x1368 = 78835848U;
int32_t x1571 = -1;
volatile uint64_t t22 = 16480249207382000LLU;
int8_t x1772 = 0;
volatile int32_t t24 = 14025;
static int32_t x1800 = 0;
int8_t x2010 = 62;
int32_t t26 = 13570;
static uint16_t x2051 = 2557U;
uint64_t x2074 = 38LLU;
volatile int64_t x2076 = -1LL;
int64_t x2541 = 404977904LL;
int8_t x2542 = INT8_MIN;
int32_t x2543 = INT32_MIN;
int64_t t35 = -35785LL;
static volatile int32_t t36 = -6;
int32_t t37 = 19;
volatile uint8_t x2629 = UINT8_MAX;
int16_t x2876 = 0;
int16_t x2951 = 0;
int64_t x2993 = 321212160527745924LL;
int64_t x3083 = INT64_MIN;
volatile uint32_t t42 = 8469861U;
uint32_t x3098 = UINT32_MAX;
uint64_t x3099 = UINT64_MAX;
volatile uint32_t x3301 = 13U;
uint64_t x3443 = 92106581980691182LLU;
static int32_t x3598 = -1;
int64_t x3839 = -1LL;
int64_t x4029 = -1LL;
volatile uint64_t t56 = 29268660664LLU;
volatile uint32_t t57 = 0U;
int32_t x4232 = INT32_MIN;
int16_t x4520 = -3;
uint64_t x4723 = UINT64_MAX;
uint16_t x4805 = 5U;
uint64_t t69 = 1663LLU;
volatile int64_t t70 = 20271791681726LL;
volatile int64_t x4864 = INT64_MIN;
uint64_t x5050 = 137029LLU;
int32_t x5052 = INT32_MIN;
volatile uint64_t t73 = 129032349947LLU;
uint16_t x5057 = 2697U;
int16_t x5171 = -2;
uint64_t t77 = 3LLU;
volatile uint32_t t78 = 99575U;
int64_t x5821 = INT64_MAX;
volatile uint16_t x5822 = 22U;
static volatile int16_t x5932 = -22;
static uint16_t x6042 = 467U;
volatile int16_t x6170 = INT16_MIN;
int64_t x6486 = -43902728384237LL;
static int64_t t89 = -463LL;
int32_t t91 = 1;
uint32_t t92 = 1426941469U;
int8_t x6790 = 4;
static int64_t x6796 = -1LL;
uint32_t x6837 = UINT32_MAX;
static volatile int16_t x6838 = INT16_MIN;
static int8_t x6975 = INT8_MIN;
volatile int16_t x7040 = -1;


void f0(void) {
	int8_t x37 = INT8_MAX;
	int8_t x39 = -1;
	volatile int8_t x40 = -1;
	int64_t t0 = -1651706LL;

	t0 = ((x37-x38)<<(x39*x40));

	if (t0 != 256LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x197 = INT16_MAX;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = 0;
	int64_t x200 = -104741910826577752LL;

	t1 = ((x197-x198)<<(x199*x200));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x233 = UINT16_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	uint32_t x236 = 0U;
	uint32_t t2 = 481U;

	t2 = ((x233-x234)<<(x235*x236));

	if (t2 != 65533U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x358 = 6U;
	int32_t x359 = INT32_MIN;
	int8_t x360 = 0;
	volatile int32_t t3 = -422;

	t3 = ((x357-x358)<<(x359*x360));

	if (t3 != 320207337) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x393 = 653U;
	uint32_t x394 = 122363102U;
	int64_t x395 = INT64_MIN;
	static uint64_t x396 = 492LLU;

	t4 = ((x393-x394)<<(x395*x396));

	if (t4 != 4172604847U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x445 = INT32_MIN;
	static int32_t x446 = INT32_MIN;
	volatile uint32_t x448 = 0U;
	int32_t t5 = 1;

	t5 = ((x445-x446)<<(x447*x448));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	uint8_t x491 = 15U;
	uint8_t x492 = 0U;
	volatile uint64_t t6 = 30812105804516LLU;

	t6 = ((x489-x490)<<(x491*x492));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x497 = 6;
	int64_t x499 = -1LL;
	int64_t x500 = -1LL;
	static uint64_t t7 = 34LLU;

	t7 = ((x497-x498)<<(x499*x500));

	if (t7 != 14LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x646 = INT32_MIN;
	static int8_t x648 = 0;
	int32_t t8 = INT32_MAX;

	t8 = ((x645-x646)<<(x647*x648));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x673 = 6208188U;
	int32_t x674 = INT32_MIN;
	volatile uint32_t x675 = UINT32_MAX;
	volatile int16_t x676 = -1;
	volatile uint32_t t9 = 3168U;

	t9 = ((x673-x674)<<(x675*x676));

	if (t9 != 12416376U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x713 = INT32_MIN;
	volatile int32_t x714 = INT32_MIN;
	volatile int8_t x715 = INT8_MAX;
	int8_t x716 = 0;
	int32_t t10 = 121145990;

	t10 = ((x713-x714)<<(x715*x716));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x801 = INT16_MAX;
	uint64_t x802 = UINT64_MAX;
	int8_t x804 = INT8_MIN;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x801-x802)<<(x803*x804));

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x821 = UINT64_MAX;
	volatile int64_t x822 = 263960367LL;
	int8_t x823 = -1;
	volatile uint64_t x824 = UINT64_MAX;
	uint64_t t12 = 45777647600946370LLU;

	t12 = ((x821-x822)<<(x823*x824));

	if (t12 != 18446744073181630880LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x914 = 4779U;
	uint32_t x915 = UINT32_MAX;
	uint8_t x916 = 0U;
	uint32_t t13 = 622168U;

	t13 = ((x913-x914)<<(x915*x916));

	if (t13 != 4294962516U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1033 = 0;
	int8_t x1034 = -1;
	int16_t x1035 = -1;
	int8_t x1036 = -1;

	t14 = ((x1033-x1034)<<(x1035*x1036));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1037 = INT64_MIN;
	uint64_t x1038 = 395555862579874LLU;
	int8_t x1039 = -1;
	uint64_t t15 = 2LLU;

	t15 = ((x1037-x1038)<<(x1039*x1040));

	if (t15 != 18445952961984391868LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1061 = 4225749LLU;
	int16_t x1063 = -1;
	int64_t x1064 = -1LL;
	volatile uint64_t t16 = 6LLU;

	t16 = ((x1061-x1062)<<(x1063*x1064));

	if (t16 != 8385964LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1201 = 34U;
	static uint16_t x1202 = 2U;
	int32_t x1203 = INT32_MIN;
	uint32_t x1204 = 2U;
	volatile int32_t t17 = 182;

	t17 = ((x1201-x1202)<<(x1203*x1204));

	if (t17 != 32) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1365 = -1;
	int8_t x1366 = -1;
	static int32_t x1367 = 0;
	volatile int32_t t18 = 48860;

	t18 = ((x1365-x1366)<<(x1367*x1368));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1377 = 397LL;
	uint16_t x1378 = 139U;
	volatile int16_t x1379 = -1;
	int32_t x1380 = -1;
	volatile int64_t t19 = 130945232194LL;

	t19 = ((x1377-x1378)<<(x1379*x1380));

	if (t19 != 516LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1425 = -1LL;
	int64_t x1426 = -160LL;
	volatile int16_t x1427 = INT16_MAX;
	int8_t x1428 = 0;
	int64_t t20 = -36510468223533688LL;

	t20 = ((x1425-x1426)<<(x1427*x1428));

	if (t20 != 159LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1557 = -1;
	int32_t x1558 = -1;
	static volatile int8_t x1559 = 0;
	int8_t x1560 = INT8_MAX;
	int32_t t21 = 12;

	t21 = ((x1557-x1558)<<(x1559*x1560));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1569 = 32704U;
	uint64_t x1570 = 637LLU;
	static int8_t x1572 = -28;

	t22 = ((x1569-x1570)<<(x1571*x1572));

	if (t22 != 8607919767552LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1585 = INT16_MIN;
	uint32_t x1586 = 15663U;
	int64_t x1587 = -1LL;
	uint32_t x1588 = 0U;
	uint32_t t23 = 1629U;

	t23 = ((x1585-x1586)<<(x1587*x1588));

	if (t23 != 4294918865U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1769 = UINT8_MAX;
	int8_t x1770 = INT8_MIN;
	static uint8_t x1771 = 0U;

	t24 = ((x1769-x1770)<<(x1771*x1772));

	if (t24 != 383) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1797 = UINT64_MAX;
	static int16_t x1798 = 14;
	int32_t x1799 = -32515;
	volatile uint64_t t25 = 2028017LLU;

	t25 = ((x1797-x1798)<<(x1799*x1800));

	if (t25 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x2009 = UINT8_MAX;
	volatile int32_t x2011 = -1;
	int16_t x2012 = -1;

	t26 = ((x2009-x2010)<<(x2011*x2012));

	if (t26 != 386) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2049 = INT32_MIN;
	static uint64_t x2050 = 1081LLU;
	static int16_t x2052 = 0;
	volatile uint64_t t27 = 51202066726LLU;

	t27 = ((x2049-x2050)<<(x2051*x2052));

	if (t27 != 18446744071562066887LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2073 = 1;
	volatile int8_t x2075 = -1;
	static uint64_t t28 = 4LLU;

	t28 = ((x2073-x2074)<<(x2075*x2076));

	if (t28 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2077 = INT16_MAX;
	uint8_t x2078 = UINT8_MAX;
	uint32_t x2079 = 0U;
	int64_t x2080 = 2095817777LL;
	int32_t t29 = 7;

	t29 = ((x2077-x2078)<<(x2079*x2080));

	if (t29 != 32512) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2193 = -1LL;
	uint64_t x2194 = 53386516378024LLU;
	int8_t x2195 = -7;
	uint32_t x2196 = UINT32_MAX;
	volatile uint64_t t30 = 172130LLU;

	t30 = ((x2193-x2194)<<(x2195*x2196));

	if (t30 != 18439910599613164416LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2277 = INT16_MAX;
	uint16_t x2278 = 3337U;
	int8_t x2279 = 0;
	int64_t x2280 = INT64_MIN;
	int32_t t31 = 182358333;

	t31 = ((x2277-x2278)<<(x2279*x2280));

	if (t31 != 29430) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2441 = INT16_MIN;
	volatile int16_t x2442 = INT16_MIN;
	uint64_t x2443 = 89951741601LLU;
	volatile uint8_t x2444 = 0U;
	volatile int32_t t32 = -118639;

	t32 = ((x2441-x2442)<<(x2443*x2444));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x2485 = 10U;
	volatile int64_t x2486 = 1LL;
	int32_t x2487 = 510171947;
	uint8_t x2488 = 0U;
	volatile int64_t t33 = -10429LL;

	t33 = ((x2485-x2486)<<(x2487*x2488));

	if (t33 != 9LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2497 = UINT64_MAX;
	volatile int64_t x2498 = -1LL;
	int16_t x2499 = 0;
	static uint8_t x2500 = 3U;
	uint64_t t34 = 4068861972LLU;

	t34 = ((x2497-x2498)<<(x2499*x2500));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2544 = 0;

	t35 = ((x2541-x2542)<<(x2543*x2544));

	if (t35 != 404978032LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2545 = -1;
	static int32_t x2546 = -1;
	volatile int16_t x2547 = -20;
	int32_t x2548 = -1;

	t36 = ((x2545-x2546)<<(x2547*x2548));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x2601 = -1;
	static int16_t x2602 = INT16_MIN;
	int64_t x2603 = -1LL;
	static int32_t x2604 = -1;

	t37 = ((x2601-x2602)<<(x2603*x2604));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2630 = 6;
	int16_t x2631 = 73;
	int16_t x2632 = 0;
	volatile int32_t t38 = -450451;

	t38 = ((x2629-x2630)<<(x2631*x2632));

	if (t38 != 249) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2873 = INT64_MAX;
	uint64_t x2874 = 7471223LLU;
	static int8_t x2875 = 17;
	uint64_t t39 = 64902216787925LLU;

	t39 = ((x2873-x2874)<<(x2875*x2876));

	if (t39 != 9223372036847304584LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2949 = -140;
	int32_t x2950 = -73357107;
	uint32_t x2952 = 95979U;
	int32_t t40 = -726191689;

	t40 = ((x2949-x2950)<<(x2951*x2952));

	if (t40 != 73356967) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2994 = INT8_MIN;
	uint32_t x2995 = UINT32_MAX;
	uint32_t x2996 = UINT32_MAX;
	int64_t t41 = -5LL;

	t41 = ((x2993-x2994)<<(x2995*x2996));

	if (t41 != 642424321055492104LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3081 = UINT16_MAX;
	uint32_t x3082 = UINT32_MAX;
	static uint64_t x3084 = 440381347755108LLU;

	t42 = ((x3081-x3082)<<(x3083*x3084));

	if (t42 != 65536U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3097 = 0U;
	int8_t x3100 = -1;
	uint32_t t43 = 10055U;

	t43 = ((x3097-x3098)<<(x3099*x3100));

	if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3189 = UINT64_MAX;
	int32_t x3190 = -1;
	static uint64_t x3191 = UINT64_MAX;
	int16_t x3192 = -1;
	uint64_t t44 = 382LLU;

	t44 = ((x3189-x3190)<<(x3191*x3192));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3237 = UINT8_MAX;
	static int16_t x3238 = INT16_MIN;
	static int16_t x3239 = 0;
	int8_t x3240 = -45;
	volatile int32_t t45 = -1569527;

	t45 = ((x3237-x3238)<<(x3239*x3240));

	if (t45 != 33023) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3265 = 3367U;
	int32_t x3266 = -53078068;
	static int16_t x3267 = 0;
	volatile uint32_t x3268 = UINT32_MAX;
	uint32_t t46 = 6973622U;

	t46 = ((x3265-x3266)<<(x3267*x3268));

	if (t46 != 53081435U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3302 = INT32_MIN;
	int8_t x3303 = 0;
	static uint64_t x3304 = 162156669LLU;
	volatile uint32_t t47 = 11U;

	t47 = ((x3301-x3302)<<(x3303*x3304));

	if (t47 != 2147483661U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3349 = -1LL;
	static int16_t x3350 = INT16_MIN;
	static volatile int64_t x3351 = 3LL;
	int16_t x3352 = 1;
	volatile int64_t t48 = -641387312LL;

	t48 = ((x3349-x3350)<<(x3351*x3352));

	if (t48 != 262136LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3441 = 279290852941513647LLU;
	uint8_t x3442 = 0U;
	volatile int8_t x3444 = 0;
	volatile uint64_t t49 = 341021LLU;

	t49 = ((x3441-x3442)<<(x3443*x3444));

	if (t49 != 279290852941513647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3513 = -1;
	static int8_t x3514 = INT8_MIN;
	static volatile int16_t x3515 = -1;
	static int64_t x3516 = -1LL;
	static int32_t t50 = -851961;

	t50 = ((x3513-x3514)<<(x3515*x3516));

	if (t50 != 254) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3597 = 1961343696U;
	int8_t x3599 = INT8_MAX;
	uint32_t x3600 = 0U;
	uint32_t t51 = 91415U;

	t51 = ((x3597-x3598)<<(x3599*x3600));

	if (t51 != 1961343697U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x3753 = 5U;
	int32_t x3754 = -40353147;
	static int32_t x3755 = -1;
	int16_t x3756 = -1;
	volatile int32_t t52 = 269695918;

	t52 = ((x3753-x3754)<<(x3755*x3756));

	if (t52 != 80706304) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x3837 = INT16_MIN;
	static uint64_t x3838 = 29351295640092384LLU;
	static uint8_t x3840 = 0U;
	static volatile uint64_t t53 = 122117035220LLU;

	t53 = ((x3837-x3838)<<(x3839*x3840));

	if (t53 != 18417392778069426464LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3945 = 4U;
	volatile int8_t x3946 = -1;
	uint32_t x3947 = UINT32_MAX;
	static volatile int8_t x3948 = 0;
	static int32_t t54 = -1866524;

	t54 = ((x3945-x3946)<<(x3947*x3948));

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4030 = INT64_MIN;
	int32_t x4031 = 0;
	uint64_t x4032 = UINT64_MAX;
	static int64_t t55 = INT64_MAX;

	t55 = ((x4029-x4030)<<(x4031*x4032));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4069 = INT8_MAX;
	uint64_t x4070 = UINT64_MAX;
	volatile int64_t x4071 = -1LL;
	static int8_t x4072 = -1;

	t56 = ((x4069-x4070)<<(x4071*x4072));

	if (t56 != 256LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x4161 = INT16_MIN;
	uint32_t x4162 = 741U;
	volatile int8_t x4163 = -6;
	int32_t x4164 = -1;

	t57 = ((x4161-x4162)<<(x4163*x4164));

	if (t57 != 4292822720U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x4229 = INT32_MAX;
	static uint64_t x4230 = 16LLU;
	uint32_t x4231 = 578U;
	volatile uint64_t t58 = 188222LLU;

	t58 = ((x4229-x4230)<<(x4231*x4232));

	if (t58 != 2147483631LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4385 = 1898038;
	static int16_t x4386 = INT16_MIN;
	static int32_t x4387 = 0;
	int8_t x4388 = 0;
	static int32_t t59 = 0;

	t59 = ((x4385-x4386)<<(x4387*x4388));

	if (t59 != 1930806) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x4405 = INT16_MAX;
	uint16_t x4406 = 226U;
	int8_t x4407 = -1;
	uint32_t x4408 = UINT32_MAX;
	static volatile int32_t t60 = -1022666;

	t60 = ((x4405-x4406)<<(x4407*x4408));

	if (t60 != 65082) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4485 = INT8_MIN;
	uint64_t x4486 = 828385851LLU;
	static int8_t x4487 = -8;
	static int16_t x4488 = -4;
	uint64_t t61 = 1809617LLU;

	t61 = ((x4485-x4486)<<(x4487*x4488));

	if (t61 != 14888853385439608832LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x4517 = 3U;
	uint8_t x4518 = UINT8_MAX;
	uint64_t x4519 = UINT64_MAX;
	volatile uint32_t t62 = 95U;

	t62 = ((x4517-x4518)<<(x4519*x4520));

	if (t62 != 4294965280U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x4529 = 1047220785U;
	int8_t x4530 = 2;
	int64_t x4531 = -1LL;
	int8_t x4532 = -5;
	uint32_t t63 = 56894188U;

	t63 = ((x4529-x4530)<<(x4531*x4532));

	if (t63 != 3446293984U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4565 = UINT16_MAX;
	static volatile uint8_t x4566 = 25U;
	uint16_t x4567 = UINT16_MAX;
	volatile int8_t x4568 = 0;
	volatile int32_t t64 = 3536522;

	t64 = ((x4565-x4566)<<(x4567*x4568));

	if (t64 != 65510) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4693 = -2;
	volatile int8_t x4694 = INT8_MIN;
	volatile uint32_t x4695 = 236U;
	int32_t x4696 = INT32_MIN;
	volatile int32_t t65 = -264;

	t65 = ((x4693-x4694)<<(x4695*x4696));

	if (t65 != 126) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4721 = INT8_MAX;
	int8_t x4722 = INT8_MIN;
	int16_t x4724 = -1;
	int32_t t66 = -131;

	t66 = ((x4721-x4722)<<(x4723*x4724));

	if (t66 != 510) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x4725 = 157772;
	int64_t x4726 = 0LL;
	uint32_t x4727 = UINT32_MAX;
	int32_t x4728 = -1;
	int64_t t67 = 1449894635910501729LL;

	t67 = ((x4725-x4726)<<(x4727*x4728));

	if (t67 != 315544LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4789 = -1;
	int32_t x4790 = INT32_MIN;
	uint8_t x4791 = 0U;
	uint64_t x4792 = 16609845787662384LLU;
	volatile int32_t t68 = INT32_MAX;

	t68 = ((x4789-x4790)<<(x4791*x4792));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4806 = 6441747379644577LLU;
	int32_t x4807 = -1;
	volatile uint16_t x4808 = 0U;

	t69 = ((x4805-x4806)<<(x4807*x4808));

	if (t69 != 18440302326329907044LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4845 = -1LL;
	int64_t x4846 = -20LL;
	static int8_t x4847 = 2;
	uint8_t x4848 = 9U;

	t70 = ((x4845-x4846)<<(x4847*x4848));

	if (t70 != 4980736LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4861 = 1001393401899LLU;
	volatile int16_t x4862 = -6;
	int64_t x4863 = 0LL;
	static volatile uint64_t t71 = 192474408402LLU;

	t71 = ((x4861-x4862)<<(x4863*x4864));

	if (t71 != 1001393401905LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4993 = INT8_MIN;
	uint32_t x4994 = 1199053U;
	volatile int64_t x4995 = -1LL;
	int8_t x4996 = -1;
	uint32_t t72 = 0U;

	t72 = ((x4993-x4994)<<(x4995*x4996));

	if (t72 != 4292568934U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5049 = 314672459583LLU;
	int8_t x5051 = 0;

	t73 = ((x5049-x5050)<<(x5051*x5052));

	if (t73 != 314672322554LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5058 = 58149U;
	volatile uint64_t x5059 = 909122580017719570LLU;
	int8_t x5060 = 0;
	uint32_t t74 = 49814472U;

	t74 = ((x5057-x5058)<<(x5059*x5060));

	if (t74 != 4294911844U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5169 = INT8_MIN;
	volatile uint64_t x5170 = 234445537195345242LLU;
	volatile int16_t x5172 = -19;
	static uint64_t t75 = 203400LLU;

	t75 = ((x5169-x5170)<<(x5171*x5172));

	if (t75 != 1364178919988658176LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5517 = UINT64_MAX;
	int8_t x5518 = INT8_MIN;
	static int8_t x5519 = 3;
	uint64_t x5520 = 0LLU;
	volatile uint64_t t76 = 37LLU;

	t76 = ((x5517-x5518)<<(x5519*x5520));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5525 = 24968LLU;
	uint64_t x5526 = UINT64_MAX;
	int32_t x5527 = INT32_MIN;
	int64_t x5528 = 0LL;

	t77 = ((x5525-x5526)<<(x5527*x5528));

	if (t77 != 24969LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5545 = 1U;
	int32_t x5546 = -1;
	int64_t x5547 = INT64_MIN;
	uint64_t x5548 = 479406LLU;

	t78 = ((x5545-x5546)<<(x5547*x5548));

	if (t78 != 2U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5569 = -1;
	static int32_t x5570 = INT32_MIN;
	int16_t x5571 = -1;
	volatile uint8_t x5572 = 0U;
	int32_t t79 = INT32_MAX;

	t79 = ((x5569-x5570)<<(x5571*x5572));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x5621 = INT32_MIN;
	uint32_t x5622 = 61U;
	int8_t x5623 = -1;
	static volatile int32_t x5624 = -1;
	uint32_t t80 = 50113U;

	t80 = ((x5621-x5622)<<(x5623*x5624));

	if (t80 != 4294967174U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5823 = UINT64_MAX;
	uint16_t x5824 = 0U;
	int64_t t81 = 2341625043427LL;

	t81 = ((x5821-x5822)<<(x5823*x5824));

	if (t81 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5893 = 22846U;
	uint64_t x5894 = 765531724LLU;
	volatile int16_t x5895 = -1;
	int64_t x5896 = -1LL;
	volatile uint64_t t82 = 1LLU;

	t82 = ((x5893-x5894)<<(x5895*x5896));

	if (t82 != 18446744072178533860LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5897 = UINT64_MAX;
	uint16_t x5898 = 58U;
	uint64_t x5899 = UINT64_MAX;
	int32_t x5900 = -1;
	uint64_t t83 = 4116448587502LLU;

	t83 = ((x5897-x5898)<<(x5899*x5900));

	if (t83 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5929 = 28274LL;
	uint8_t x5930 = UINT8_MAX;
	int32_t x5931 = -1;
	int64_t t84 = -410265956023LL;

	t84 = ((x5929-x5930)<<(x5931*x5932));

	if (t84 != 117520203776LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x6041 = UINT64_MAX;
	int64_t x6043 = INT64_MIN;
	volatile int16_t x6044 = 0;
	volatile uint64_t t85 = 1048086507702329LLU;

	t85 = ((x6041-x6042)<<(x6043*x6044));

	if (t85 != 18446744073709551148LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6105 = UINT64_MAX;
	int32_t x6106 = -1;
	static int32_t x6107 = -1;
	volatile int32_t x6108 = -1;
	static uint64_t t86 = 1627LLU;

	t86 = ((x6105-x6106)<<(x6107*x6108));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x6169 = -1LL;
	int8_t x6171 = -2;
	int16_t x6172 = -1;
	int64_t t87 = 225324LL;

	t87 = ((x6169-x6170)<<(x6171*x6172));

	if (t87 != 131068LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x6277 = 153;
	static int64_t x6278 = -151121560271LL;
	uint64_t x6279 = UINT64_MAX;
	int8_t x6280 = -1;
	int64_t t88 = -18877964LL;

	t88 = ((x6277-x6278)<<(x6279*x6280));

	if (t88 != 302243120848LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x6485 = 0;
	int32_t x6487 = -1;
	int16_t x6488 = -1;

	t89 = ((x6485-x6486)<<(x6487*x6488));

	if (t89 != 87805456768474LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6625 = INT16_MAX;
	static uint16_t x6626 = 14682U;
	static int64_t x6627 = -443LL;
	uint16_t x6628 = 0U;
	int32_t t90 = -54;

	t90 = ((x6625-x6626)<<(x6627*x6628));

	if (t90 != 18085) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6641 = -1;
	static int16_t x6642 = -1;
	int64_t x6643 = -1LL;
	int8_t x6644 = -1;

	t91 = ((x6641-x6642)<<(x6643*x6644));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6745 = -1;
	static uint32_t x6746 = 7U;
	uint8_t x6747 = 1U;
	uint8_t x6748 = 4U;

	t92 = ((x6745-x6746)<<(x6747*x6748));

	if (t92 != 4294967168U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6789 = 1462433U;
	int32_t x6791 = 1;
	uint8_t x6792 = 12U;
	static volatile uint32_t t93 = 3235922U;

	t93 = ((x6789-x6790)<<(x6791*x6792));

	if (t93 != 1695141888U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x6793 = 1U;
	volatile int32_t x6794 = INT32_MAX;
	int16_t x6795 = -12;
	static uint32_t t94 = 95473U;

	t94 = ((x6793-x6794)<<(x6795*x6796));

	if (t94 != 8192U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6839 = 1U;
	static volatile int8_t x6840 = 6;
	static volatile uint32_t t95 = 47197U;

	t95 = ((x6837-x6838)<<(x6839*x6840));

	if (t95 != 2097088U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6945 = 22;
	int16_t x6946 = INT16_MIN;
	int64_t x6947 = -1LL;
	static int16_t x6948 = -1;
	static volatile int32_t t96 = -1;

	t96 = ((x6945-x6946)<<(x6947*x6948));

	if (t96 != 65580) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6973 = -1LL;
	int32_t x6974 = INT32_MIN;
	int16_t x6976 = 0;
	static int64_t t97 = 7496738821385LL;

	t97 = ((x6973-x6974)<<(x6975*x6976));

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7037 = INT32_MAX;
	uint64_t x7038 = 1460LLU;
	uint32_t x7039 = UINT32_MAX;
	uint64_t t98 = 5706434131612LLU;

	t98 = ((x7037-x7038)<<(x7039*x7040));

	if (t98 != 4294964374LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7045 = 859U;
	int32_t x7046 = INT32_MIN;
	static uint8_t x7047 = 0U;
	static int64_t x7048 = INT64_MIN;
	volatile uint32_t t99 = 291U;

	t99 = ((x7045-x7046)<<(x7047*x7048));

	if (t99 != 2147484507U) { NG(); } else { ; }
	
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


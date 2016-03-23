
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x2 = INT32_MAX;
int16_t x36 = INT16_MIN;
int8_t x62 = INT8_MAX;
volatile int32_t x108 = 45;
volatile int64_t t3 = 0LL;
int8_t x183 = 9;
int64_t t4 = 8053LL;
volatile int64_t x346 = INT64_MAX;
int8_t x347 = 1;
uint8_t x366 = UINT8_MAX;
uint16_t x367 = 0U;
static volatile uint32_t x471 = 1U;
static uint8_t x472 = 12U;
volatile uint8_t x651 = 4U;
uint16_t x963 = 28U;
int64_t x973 = INT64_MAX;
uint8_t x976 = UINT8_MAX;
uint64_t t16 = 69238684LLU;
uint32_t x1019 = 23U;
volatile int64_t x1164 = 8072LL;
volatile uint16_t x1181 = 198U;
uint64_t x1193 = 67116321584074LLU;
int64_t t22 = 9601299280436378LL;
volatile int8_t x1401 = INT8_MIN;
uint16_t x1402 = 689U;
uint8_t x1475 = 1U;
volatile int64_t x1545 = -1LL;
volatile uint64_t t27 = 5LLU;
volatile uint32_t x1714 = 7533400U;
uint32_t x1761 = 113552437U;
volatile int32_t x1813 = 4903220;
static int32_t t33 = -6;
int16_t x2189 = -1;
static uint64_t t36 = 89270587142LLU;
int32_t t37 = 11245;
static int64_t x2304 = INT64_MIN;
volatile uint64_t t39 = 6493626588LLU;
uint64_t x2323 = 25LLU;
uint64_t x2324 = 2LLU;
int8_t x2387 = 1;
uint8_t x2543 = 15U;
static uint8_t x2667 = 0U;
int8_t x2668 = INT8_MIN;
volatile uint64_t t45 = 213408391493LLU;
int8_t x2817 = -2;
static int8_t x2820 = INT8_MIN;
int32_t t47 = -13187;
static uint64_t x2822 = 253342145004288132LLU;
int32_t x2823 = 11;
volatile int64_t x2824 = INT64_MIN;
uint8_t x2835 = 31U;
int64_t x2857 = INT64_MIN;
int64_t x2886 = INT64_MAX;
uint64_t x2902 = 0LLU;
uint64_t t54 = 4LLU;
uint16_t x2966 = 1246U;
volatile int64_t t55 = -219297720494260186LL;
uint8_t x3024 = 51U;
volatile int32_t x3122 = INT32_MAX;
static int16_t x3129 = INT16_MAX;
volatile int64_t x3130 = INT64_MAX;
int64_t x3132 = 115767022439LL;
static volatile int64_t t59 = -8336947710180453LL;
uint64_t t61 = 48851626212107110LLU;
volatile uint8_t x3207 = 0U;
static uint8_t x3310 = 74U;
static int16_t x3311 = 30;
int32_t t65 = -54126406;
int64_t x3328 = 72412160999704LL;
volatile int16_t x3419 = 0;
int32_t t70 = -7;
int32_t x3668 = -42;
int32_t x3680 = -56050226;
volatile uint64_t t73 = 1375LLU;
uint32_t x3698 = 863523U;
static uint32_t t74 = 1667853U;
volatile uint16_t x3752 = UINT16_MAX;
volatile uint64_t t76 = 467529573354073LLU;
int16_t x3858 = INT16_MAX;
uint32_t t78 = 2073436U;
int8_t x3957 = 3;
int32_t x3960 = INT32_MIN;
volatile int32_t t79 = -1;
int64_t x3996 = INT64_MIN;
uint64_t x4038 = 15198193893LLU;
uint32_t x4040 = UINT32_MAX;
uint32_t x4097 = UINT32_MAX;
uint8_t x4099 = 9U;
uint32_t t83 = 531U;
uint64_t x4177 = 49293202LLU;
int8_t x4280 = 1;
uint32_t t86 = 18517U;
uint16_t x4509 = UINT16_MAX;
uint32_t x4512 = 303909U;
int32_t x4531 = 10;
static int8_t x4532 = INT8_MIN;
uint32_t t91 = 36U;
uint64_t x4851 = 3LLU;
int64_t t94 = 32764LL;
volatile int16_t x4948 = INT16_MAX;
uint16_t x4981 = 237U;
static uint64_t x5081 = 84480837295LLU;
static volatile uint32_t x5196 = UINT32_MAX;
volatile int8_t x5282 = 5;
int8_t x5293 = 1;
volatile int32_t x5327 = 2;
volatile int8_t x5330 = 45;
int64_t x5332 = -5LL;
static uint8_t x5359 = 9U;
int16_t x5360 = -1;
static volatile uint32_t x5595 = 1U;
volatile uint64_t x5613 = UINT64_MAX;
int8_t x5658 = 1;
uint64_t x5710 = UINT64_MAX;
uint64_t x5918 = 59958LLU;
static int64_t x5920 = 1751352536291LL;
volatile int16_t x5930 = 1348;
volatile uint32_t x5931 = 1U;
static int16_t x5932 = 6;
int32_t x6182 = 94439068;
int32_t t119 = 12;
int8_t x6535 = 11;
int8_t x6631 = 1;
static volatile int32_t t122 = 6451;
static int8_t x6750 = 1;
uint64_t t124 = 58763754789LLU;
volatile int16_t x6865 = -25;
int8_t x6867 = 0;
static volatile uint16_t x6883 = 2U;
static volatile int64_t x6937 = INT64_MAX;
uint8_t x6938 = 5U;
int8_t x6940 = INT8_MIN;
uint32_t x7046 = UINT32_MAX;
uint8_t x7047 = 7U;
volatile int64_t x7048 = INT64_MIN;
int64_t t130 = 113333LL;
static uint8_t x7051 = 23U;
volatile int64_t t131 = 2121394639172LL;
static volatile int8_t x7155 = 0;
int32_t x7324 = 11836;
int8_t x7331 = 0;
static volatile uint32_t x7374 = 239U;
int8_t x7376 = INT8_MAX;
uint8_t x7498 = 7U;
uint16_t x7500 = UINT16_MAX;
int64_t x7774 = 255LL;
static int16_t x7806 = INT16_MAX;
int64_t t147 = -569544209539916LL;
static int16_t x7845 = 6870;
uint8_t x7911 = 12U;
volatile int16_t x8022 = 728;
int32_t t153 = 2094;
int16_t x8201 = 98;
uint8_t x8202 = 6U;
uint16_t x8203 = 0U;
volatile int32_t t155 = 8;
static int16_t x8213 = -870;
int8_t x8283 = 4;
uint64_t x8430 = 16611146LLU;
static uint32_t x8720 = 119550262U;
uint64_t t163 = 18652LLU;
int64_t x8745 = INT64_MIN;
uint64_t x8746 = 1044838LLU;
uint8_t x8934 = 12U;
static uint64_t x9062 = UINT64_MAX;
uint16_t x9117 = 29U;
uint32_t x9128 = UINT32_MAX;
volatile uint32_t t169 = 15U;
uint8_t x9142 = 28U;
int8_t x9409 = -20;
static int32_t x9440 = 80259469;
volatile int16_t x9486 = 19;
volatile int32_t t176 = 12;
static volatile uint64_t t178 = 348341476LLU;
int8_t x9730 = INT8_MAX;
int32_t x9732 = INT32_MIN;
static volatile uint16_t x9871 = 15U;
int8_t x9909 = 1;
uint32_t x10096 = 3U;
uint16_t x10162 = 96U;
int8_t x10225 = -12;
int32_t t189 = -7471573;
int8_t x10386 = INT8_MAX;
static uint8_t x10463 = 4U;
volatile int32_t t192 = 1;
volatile int8_t x10750 = INT8_MAX;
int32_t x10929 = -36429185;
static volatile int32_t t198 = -191822543;
uint32_t x11055 = 29U;


void f0(void) {
    	volatile int32_t x1 = -1;
	uint8_t x3 = 3U;
	static volatile int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 73LL;

    t0 = ((x1-(x2>>x3))%x4);

    if (t0 != -268435456LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 244LLU;
	static int8_t x35 = 11;
	static volatile uint64_t t1 = 1564753258590382LLU;

    t1 = ((x33-(x34>>x35))%x36);

    if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x61 = 28;
	static volatile int32_t x63 = 0;
	uint64_t x64 = UINT64_MAX;
	uint64_t t2 = 73581LLU;

    t2 = ((x61-(x62>>x63))%x64);

    if (t2 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x105 = INT64_MAX;
	static volatile uint8_t x106 = 13U;
	static uint64_t x107 = 1LLU;

    t3 = ((x105-(x106>>x107))%x108);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x181 = 1305120LL;
	int64_t x182 = 623497874472LL;
	volatile int16_t x184 = INT16_MIN;

    t4 = ((x181-(x182>>x183))%x184);

    if (t4 != -17702LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x289 = UINT64_MAX;
	int8_t x290 = 59;
	uint8_t x291 = 9U;
	static int32_t x292 = -1;
	static volatile uint64_t t5 = 734391519925LLU;

    t5 = ((x289-(x290>>x291))%x292);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x345 = INT16_MIN;
	int64_t x348 = -91420285469LL;
	int64_t t6 = -210119380883LL;

    t6 = ((x345-(x346>>x347))%x348);

    if (t6 != -48435973668LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x365 = 835439;
	volatile int64_t x368 = -70LL;
	int64_t t7 = -3930932LL;

    t7 = ((x365-(x366>>x367))%x368);

    if (t7 != 14LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x385 = 11U;
	uint32_t x386 = 100U;
	static volatile int8_t x387 = 2;
	int64_t x388 = INT64_MIN;
	int64_t t8 = -499216973139129LL;

    t8 = ((x385-(x386>>x387))%x388);

    if (t8 != 4294967282LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x449 = -544366;
	int8_t x450 = 0;
	uint8_t x451 = 7U;
	static uint8_t x452 = 24U;
	static int32_t t9 = 330713;

    t9 = ((x449-(x450>>x451))%x452);

    if (t9 != -22) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x469 = UINT64_MAX;
	volatile int16_t x470 = INT16_MAX;
	volatile uint64_t t10 = 3LLU;

    t10 = ((x469-(x470>>x471))%x472);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x605 = -20;
	static int64_t x606 = 806885LL;
	volatile uint8_t x607 = 30U;
	volatile uint16_t x608 = UINT16_MAX;
	static int64_t t11 = 1469LL;

    t11 = ((x605-(x606>>x607))%x608);

    if (t11 != -20LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x649 = 2356;
	volatile int32_t x650 = 170512858;
	static uint64_t x652 = 240201676397LLU;
	uint64_t t12 = 284LLU;

    t12 = ((x649-(x650>>x651))%x652);

    if (t12 != 191807804016LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x761 = -1LL;
	static uint64_t x762 = 224022498455757LLU;
	static uint32_t x763 = 1U;
	uint32_t x764 = UINT32_MAX;
	volatile uint64_t t13 = 10065LLU;

    t13 = ((x761-(x762>>x763))%x764);

    if (t13 != 1497825722LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x941 = 233514521919236120LL;
	uint32_t x942 = 241U;
	uint16_t x943 = 17U;
	uint64_t x944 = 1016905LLU;
	volatile uint64_t t14 = 17LLU;

    t14 = ((x941-(x942>>x943))%x944);

    if (t14 != 913715LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x961 = 9U;
	uint32_t x962 = 122U;
	static int8_t x964 = 1;
	uint32_t t15 = 4402597U;

    t15 = ((x961-(x962>>x963))%x964);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x974 = 6391262LLU;
	uint8_t x975 = 3U;

    t16 = ((x973-(x974>>x975))%x976);

    if (t16 != 135LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1017 = 54U;
	int8_t x1018 = 1;
	static int64_t x1020 = 3LL;
	int64_t t17 = 1575LL;

    t17 = ((x1017-(x1018>>x1019))%x1020);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1049 = -1;
	static int16_t x1050 = 2653;
	static uint8_t x1051 = 2U;
	int8_t x1052 = INT8_MIN;
	int32_t t18 = -2;

    t18 = ((x1049-(x1050>>x1051))%x1052);

    if (t18 != -24) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1161 = UINT8_MAX;
	static uint16_t x1162 = UINT16_MAX;
	uint16_t x1163 = 28U;
	int64_t t19 = -66780413508LL;

    t19 = ((x1161-(x1162>>x1163))%x1164);

    if (t19 != 255LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1182 = 38452374LL;
	int8_t x1183 = 1;
	volatile uint32_t x1184 = 7U;
	volatile int64_t t20 = 344LL;

    t20 = ((x1181-(x1182>>x1183))%x1184);

    if (t20 != -6LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x1194 = 0LL;
	uint8_t x1195 = 8U;
	int16_t x1196 = INT16_MIN;
	volatile uint64_t t21 = 2173952256236143748LLU;

    t21 = ((x1193-(x1194>>x1195))%x1196);

    if (t21 != 67116321584074LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x1197 = UINT16_MAX;
	volatile int64_t x1198 = 15458631LL;
	int64_t x1199 = 1LL;
	uint32_t x1200 = UINT32_MAX;

    t22 = ((x1197-(x1198>>x1199))%x1200);

    if (t22 != -7663780LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1403 = 1;
	int64_t x1404 = 12862151049629384LL;
	volatile int64_t t23 = -241697513LL;

    t23 = ((x1401-(x1402>>x1403))%x1404);

    if (t23 != -472LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x1473 = UINT16_MAX;
	int8_t x1474 = 1;
	static int8_t x1476 = INT8_MIN;
	static volatile int32_t t24 = 0;

    t24 = ((x1473-(x1474>>x1475))%x1476);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1513 = 30358U;
	int16_t x1514 = 0;
	volatile uint64_t x1515 = 17LLU;
	int64_t x1516 = -778052689LL;
	volatile int64_t t25 = 138LL;

    t25 = ((x1513-(x1514>>x1515))%x1516);

    if (t25 != 30358LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1546 = UINT8_MAX;
	uint8_t x1547 = 2U;
	volatile int32_t x1548 = INT32_MAX;
	volatile int64_t t26 = 13702000683273671LL;

    t26 = ((x1545-(x1546>>x1547))%x1548);

    if (t26 != -64LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x1633 = 825218558U;
	uint64_t x1634 = 48207943907081929LLU;
	uint8_t x1635 = 3U;
	static uint32_t x1636 = 3478U;

    t27 = ((x1633-(x1634>>x1635))%x1636);

    if (t27 != 2121LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x1713 = 47346113478LLU;
	int8_t x1715 = 23;
	int16_t x1716 = INT16_MIN;
	volatile uint64_t t28 = 3504LLU;

    t28 = ((x1713-(x1714>>x1715))%x1716);

    if (t28 != 47346113478LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1762 = 25;
	uint8_t x1763 = 3U;
	int8_t x1764 = INT8_MAX;
	volatile uint32_t t29 = 3U;

    t29 = ((x1761-(x1762>>x1763))%x1764);

    if (t29 != 83U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1814 = 182780482422214LL;
	int8_t x1815 = 2;
	uint16_t x1816 = UINT16_MAX;
	volatile int64_t t30 = 1127541LL;

    t30 = ((x1813-(x1814>>x1815))%x1816);

    if (t30 != -4848LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1957 = INT16_MIN;
	uint32_t x1958 = 103467998U;
	int32_t x1959 = 1;
	volatile int32_t x1960 = INT32_MIN;
	volatile uint32_t t31 = 3U;

    t31 = ((x1957-(x1958>>x1959))%x1960);

    if (t31 != 2095716881U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x1977 = INT8_MAX;
	static volatile int8_t x1978 = 0;
	uint16_t x1979 = 0U;
	int8_t x1980 = INT8_MAX;
	volatile int32_t t32 = 19;

    t32 = ((x1977-(x1978>>x1979))%x1980);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2025 = -85;
	volatile uint16_t x2026 = UINT16_MAX;
	uint64_t x2027 = 1LLU;
	int16_t x2028 = 49;

    t33 = ((x2025-(x2026>>x2027))%x2028);

    if (t33 != -22) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2037 = INT64_MIN;
	uint64_t x2038 = UINT64_MAX;
	uint8_t x2039 = 2U;
	int16_t x2040 = 892;
	volatile uint64_t t34 = 252342705235LLU;

    t34 = ((x2037-(x2038>>x2039))%x2040);

    if (t34 != 69LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x2185 = INT64_MAX;
	static int64_t x2186 = 5712934LL;
	volatile uint8_t x2187 = 1U;
	int16_t x2188 = INT16_MIN;
	volatile int64_t t35 = 64040552LL;

    t35 = ((x2185-(x2186>>x2187))%x2188);

    if (t35 != 27116LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2190 = 2231732228343544001LLU;
	static uint8_t x2191 = 36U;
	volatile int32_t x2192 = INT32_MAX;

    t36 = ((x2189-(x2190>>x2191))%x2192);

    if (t36 != 2115007672LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x2205 = INT8_MIN;
	uint16_t x2206 = 11401U;
	int8_t x2207 = 29;
	int32_t x2208 = INT32_MIN;

    t37 = ((x2205-(x2206>>x2207))%x2208);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x2249 = UINT16_MAX;
	int16_t x2250 = 1;
	int16_t x2251 = 0;
	int16_t x2252 = INT16_MIN;
	volatile int32_t t38 = -222001;

    t38 = ((x2249-(x2250>>x2251))%x2252);

    if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2301 = 820578680106LLU;
	int16_t x2302 = 61;
	uint8_t x2303 = 15U;

    t39 = ((x2301-(x2302>>x2303))%x2304);

    if (t39 != 820578680106LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x2321 = -1LL;
	uint64_t x2322 = 26316931LLU;
	uint64_t t40 = 8698029302045LLU;

    t40 = ((x2321-(x2322>>x2323))%x2324);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2385 = -1;
	uint32_t x2386 = 57U;
	uint8_t x2388 = 3U;
	uint32_t t41 = 3297708U;

    t41 = ((x2385-(x2386>>x2387))%x2388);

    if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2541 = -1LL;
	uint16_t x2542 = UINT16_MAX;
	static volatile int32_t x2544 = INT32_MIN;
	int64_t t42 = 51888235872217LL;

    t42 = ((x2541-(x2542>>x2543))%x2544);

    if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2649 = 3249LLU;
	uint64_t x2650 = 1534845LLU;
	uint16_t x2651 = 0U;
	volatile int8_t x2652 = INT8_MIN;
	volatile uint64_t t43 = 3947850098231102290LLU;

    t43 = ((x2649-(x2650>>x2651))%x2652);

    if (t43 != 18446744073708020020LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2665 = -1;
	int8_t x2666 = 0;
	int32_t t44 = 2;

    t44 = ((x2665-(x2666>>x2667))%x2668);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2705 = -1;
	uint64_t x2706 = 62462954LLU;
	uint32_t x2707 = 1U;
	int8_t x2708 = -1;

    t45 = ((x2705-(x2706>>x2707))%x2708);

    if (t45 != 18446744073678320138LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2745 = -1;
	uint16_t x2746 = UINT16_MAX;
	uint16_t x2747 = 10U;
	static uint32_t x2748 = 5U;
	uint32_t t46 = 0U;

    t46 = ((x2745-(x2746>>x2747))%x2748);

    if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x2818 = INT8_MAX;
	uint16_t x2819 = 3U;

    t47 = ((x2817-(x2818>>x2819))%x2820);

    if (t47 != -17) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x2821 = UINT16_MAX;
	static uint64_t t48 = 970LLU;

    t48 = ((x2821-(x2822>>x2823))%x2824);

    if (t48 != 9223248334635600968LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2825 = -2;
	uint32_t x2826 = 202U;
	uint16_t x2827 = 1U;
	int32_t x2828 = INT32_MIN;
	volatile uint32_t t49 = 251903430U;

    t49 = ((x2825-(x2826>>x2827))%x2828);

    if (t49 != 2147483545U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2833 = -10254328072LL;
	int8_t x2834 = 3;
	int32_t x2836 = INT32_MIN;
	volatile int64_t t50 = -756654LL;

    t50 = ((x2833-(x2834>>x2835))%x2836);

    if (t50 != -1664393480LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x2858 = 448599LLU;
	static int16_t x2859 = 15;
	volatile int8_t x2860 = INT8_MIN;
	volatile uint64_t t51 = 5483167168082287886LLU;

    t51 = ((x2857-(x2858>>x2859))%x2860);

    if (t51 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2877 = INT32_MAX;
	volatile uint64_t x2878 = 48386551LLU;
	volatile int32_t x2879 = 1;
	int8_t x2880 = INT8_MIN;
	uint64_t t52 = 4LLU;

    t52 = ((x2877-(x2878>>x2879))%x2880);

    if (t52 != 2123290372LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2885 = -1;
	uint16_t x2887 = 17U;
	static int64_t x2888 = -1LL;
	static int64_t t53 = 13LL;

    t53 = ((x2885-(x2886>>x2887))%x2888);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x2901 = 6U;
	static int32_t x2903 = 0;
	static int8_t x2904 = -22;

    t54 = ((x2901-(x2902>>x2903))%x2904);

    if (t54 != 6LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2965 = -1;
	int8_t x2967 = 16;
	int64_t x2968 = INT64_MIN;

    t55 = ((x2965-(x2966>>x2967))%x2968);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x3021 = INT16_MIN;
	volatile uint16_t x3022 = 231U;
	uint8_t x3023 = 1U;
	int32_t t56 = 522881415;

    t56 = ((x3021-(x3022>>x3023))%x3024);

    if (t56 != -39) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x3081 = 1;
	uint32_t x3082 = UINT32_MAX;
	uint16_t x3083 = 27U;
	uint32_t x3084 = 186575U;
	uint32_t t57 = 17594U;

    t57 = ((x3081-(x3082>>x3083))%x3084);

    if (t57 != 10766U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3121 = 15123U;
	static uint16_t x3123 = 2U;
	volatile int16_t x3124 = -8281;
	int32_t t58 = 2;

    t58 = ((x3121-(x3122>>x3123))%x3124);

    if (t58 != -6839) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x3131 = 4;

    t59 = ((x3129-(x3130>>x3131))%x3132);

    if (t59 != -21738614610LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3133 = INT32_MIN;
	volatile int16_t x3134 = 19;
	int8_t x3135 = 10;
	int8_t x3136 = -1;
	volatile int32_t t60 = -6033878;

    t60 = ((x3133-(x3134>>x3135))%x3136);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x3177 = INT8_MAX;
	uint64_t x3178 = 4LLU;
	volatile uint16_t x3179 = 3U;
	uint16_t x3180 = 3096U;

    t61 = ((x3177-(x3178>>x3179))%x3180);

    if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x3181 = INT8_MIN;
	int16_t x3182 = INT16_MAX;
	int8_t x3183 = 0;
	int16_t x3184 = INT16_MAX;
	int32_t t62 = 52179;

    t62 = ((x3181-(x3182>>x3183))%x3184);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x3205 = 7;
	uint8_t x3206 = 15U;
	uint8_t x3208 = UINT8_MAX;
	int32_t t63 = -13;

    t63 = ((x3205-(x3206>>x3207))%x3208);

    if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3305 = UINT32_MAX;
	static uint64_t x3306 = UINT64_MAX;
	int64_t x3307 = 7LL;
	volatile int64_t x3308 = 348953043421669LL;
	static volatile uint64_t t64 = 125279LLU;

    t64 = ((x3305-(x3306>>x3307))%x3308);

    if (t64 != 41762462123990LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x3309 = -18;
	uint16_t x3312 = 3U;

    t65 = ((x3309-(x3310>>x3311))%x3312);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x3325 = UINT8_MAX;
	static int32_t x3326 = 586;
	volatile uint8_t x3327 = 3U;
	volatile int64_t t66 = 1267302575033854073LL;

    t66 = ((x3325-(x3326>>x3327))%x3328);

    if (t66 != 182LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x3401 = INT32_MIN;
	uint64_t x3402 = 194440705128LLU;
	int8_t x3403 = 0;
	uint8_t x3404 = 6U;
	volatile uint64_t t67 = 976325304LLU;

    t67 = ((x3401-(x3402>>x3403))%x3404);

    if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3417 = UINT32_MAX;
	volatile int32_t x3418 = INT32_MAX;
	uint32_t x3420 = UINT32_MAX;
	uint32_t t68 = 17709U;

    t68 = ((x3417-(x3418>>x3419))%x3420);

    if (t68 != 2147483648U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x3565 = 30811146495188713LL;
	uint16_t x3566 = 1U;
	static volatile int32_t x3567 = 7;
	static int8_t x3568 = INT8_MIN;
	int64_t t69 = -2830147979879590674LL;

    t69 = ((x3565-(x3566>>x3567))%x3568);

    if (t69 != 105LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x3573 = INT16_MIN;
	static uint16_t x3574 = UINT16_MAX;
	static int32_t x3575 = 1;
	uint16_t x3576 = 150U;

    t70 = ((x3573-(x3574>>x3575))%x3576);

    if (t70 != -135) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3657 = UINT32_MAX;
	uint32_t x3658 = UINT32_MAX;
	int32_t x3659 = 28;
	uint16_t x3660 = 2915U;
	volatile uint32_t t71 = 1414475384U;

    t71 = ((x3657-(x3658>>x3659))%x3660);

    if (t71 != 450U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x3665 = 0U;
	volatile uint64_t x3666 = 134LLU;
	uint16_t x3667 = 15U;
	volatile uint64_t t72 = 18178132948930986LLU;

    t72 = ((x3665-(x3666>>x3667))%x3668);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x3677 = INT16_MIN;
	static volatile uint64_t x3678 = 2483700LLU;
	int8_t x3679 = 26;

    t73 = ((x3677-(x3678>>x3679))%x3680);

    if (t73 != 56017458LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3697 = INT32_MAX;
	static int8_t x3699 = 0;
	int32_t x3700 = -20709595;

    t74 = ((x3697-(x3698>>x3699))%x3700);

    if (t74 != 2146620124U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x3749 = -1;
	static uint64_t x3750 = UINT64_MAX;
	uint8_t x3751 = 0U;
	static uint64_t t75 = 11446498272534189LLU;

    t75 = ((x3749-(x3750>>x3751))%x3752);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x3837 = -1;
	uint64_t x3838 = UINT64_MAX;
	static volatile int8_t x3839 = 1;
	int32_t x3840 = -1;

    t76 = ((x3837-(x3838>>x3839))%x3840);

    if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x3857 = -810;
	int8_t x3859 = 0;
	uint32_t x3860 = 4138U;
	static uint32_t t77 = 43U;

    t77 = ((x3857-(x3858>>x3859))%x3860);

    if (t77 != 69U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x3913 = INT8_MIN;
	uint32_t x3914 = UINT32_MAX;
	int16_t x3915 = 24;
	static int32_t x3916 = -13034;

    t78 = ((x3913-(x3914>>x3915))%x3916);

    if (t78 != 12651U) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x3958 = 27U;
	static int8_t x3959 = 31;

    t79 = ((x3957-(x3958>>x3959))%x3960);

    if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x3993 = UINT32_MAX;
	static uint16_t x3994 = 28U;
	volatile uint8_t x3995 = 28U;
	int64_t t80 = 46057556976LL;

    t80 = ((x3993-(x3994>>x3995))%x3996);

    if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x4037 = INT8_MIN;
	static uint8_t x4039 = 5U;
	volatile uint64_t t81 = 7027179962152571LLU;

    t81 = ((x4037-(x4038>>x4039))%x4040);

    if (t81 != 3820023609LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x4065 = INT64_MAX;
	uint8_t x4066 = 17U;
	static volatile uint16_t x4067 = 14U;
	int64_t x4068 = INT64_MAX;
	int64_t t82 = -4424200131088LL;

    t82 = ((x4065-(x4066>>x4067))%x4068);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4098 = INT32_MAX;
	int8_t x4100 = INT8_MAX;

    t83 = ((x4097-(x4098>>x4099))%x4100);

    if (t83 != 14U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x4178 = UINT64_MAX;
	static uint8_t x4179 = 3U;
	int16_t x4180 = INT16_MAX;
	uint64_t t84 = 21780490174794221LLU;

    t84 = ((x4177-(x4178>>x4179))%x4180);

    if (t84 != 11649LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x4213 = -1LL;
	int64_t x4214 = 1391948LL;
	int8_t x4215 = 2;
	uint16_t x4216 = 6U;
	volatile int64_t t85 = -3810986352LL;

    t85 = ((x4213-(x4214>>x4215))%x4216);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x4277 = 2738660;
	uint32_t x4278 = UINT32_MAX;
	static int8_t x4279 = 7;

    t86 = ((x4277-(x4278>>x4279))%x4280);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x4337 = 0;
	uint64_t x4338 = 93LLU;
	int8_t x4339 = 2;
	int16_t x4340 = INT16_MIN;
	volatile uint64_t t87 = 69676499939026LLU;

    t87 = ((x4337-(x4338>>x4339))%x4340);

    if (t87 != 32745LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x4497 = 20U;
	static volatile int64_t x4498 = INT64_MAX;
	uint8_t x4499 = 8U;
	volatile uint16_t x4500 = UINT16_MAX;
	volatile int64_t t88 = -861LL;

    t88 = ((x4497-(x4498>>x4499))%x4500);

    if (t88 != -107LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x4510 = 712537563U;
	static uint32_t x4511 = 11U;
	volatile uint32_t t89 = 526U;

    t89 = ((x4509-(x4510>>x4511))%x4512);

    if (t89 != 146834U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4529 = INT16_MIN;
	uint32_t x4530 = 105991U;
	volatile uint32_t t90 = 7198788U;

    t90 = ((x4529-(x4530>>x4531))%x4532);

    if (t90 != 4294934425U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x4665 = 118;
	uint8_t x4666 = UINT8_MAX;
	int8_t x4667 = 4;
	uint32_t x4668 = UINT32_MAX;

    t91 = ((x4665-(x4666>>x4667))%x4668);

    if (t91 != 103U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x4801 = UINT32_MAX;
	int32_t x4802 = INT32_MAX;
	uint8_t x4803 = 3U;
	int16_t x4804 = -1;
	static uint32_t t92 = 7U;

    t92 = ((x4801-(x4802>>x4803))%x4804);

    if (t92 != 4026531840U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x4849 = INT16_MIN;
	uint32_t x4850 = 15U;
	int8_t x4852 = 9;
	volatile uint32_t t93 = 119U;

    t93 = ((x4849-(x4850>>x4851))%x4852);

    if (t93 != 4U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x4941 = INT16_MAX;
	static int64_t x4942 = 65358068778879544LL;
	volatile uint8_t x4943 = 49U;
	uint16_t x4944 = 19993U;

    t94 = ((x4941-(x4942>>x4943))%x4944);

    if (t94 != 12658LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x4945 = INT8_MIN;
	static int32_t x4946 = INT32_MAX;
	uint16_t x4947 = 6U;
	volatile int32_t t95 = -1;

    t95 = ((x4945-(x4946>>x4947))%x4948);

    if (t95 != -1151) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x4982 = 2;
	uint16_t x4983 = 6U;
	int64_t x4984 = INT64_MIN;
	int64_t t96 = -203307LL;

    t96 = ((x4981-(x4982>>x4983))%x4984);

    if (t96 != 237LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x5009 = 3883888LLU;
	volatile uint8_t x5010 = 14U;
	uint8_t x5011 = 2U;
	uint32_t x5012 = 8731U;
	uint64_t t97 = 3899174586205998604LLU;

    t97 = ((x5009-(x5010>>x5011))%x5012);

    if (t97 != 7321LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x5061 = -1;
	uint8_t x5062 = 30U;
	uint8_t x5063 = 2U;
	int32_t x5064 = INT32_MIN;
	static int32_t t98 = -186702212;

    t98 = ((x5061-(x5062>>x5063))%x5064);

    if (t98 != -8) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x5082 = 1952271702255LLU;
	volatile int8_t x5083 = 1;
	volatile int64_t x5084 = -1383LL;
	uint64_t t99 = 5549107083LLU;

    t99 = ((x5081-(x5082>>x5083))%x5084);

    if (t99 != 18446743182054537784LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x5193 = 376906U;
	static uint8_t x5194 = UINT8_MAX;
	static uint32_t x5195 = 0U;
	volatile uint32_t t100 = 0U;

    t100 = ((x5193-(x5194>>x5195))%x5196);

    if (t100 != 376651U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x5265 = -1LL;
	uint64_t x5266 = UINT64_MAX;
	int16_t x5267 = 1;
	int16_t x5268 = 14816;
	volatile uint64_t t101 = 31461497405LLU;

    t101 = ((x5265-(x5266>>x5267))%x5268);

    if (t101 != 4992LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x5281 = INT16_MIN;
	int8_t x5283 = 19;
	volatile int16_t x5284 = INT16_MIN;
	int32_t t102 = 1426272;

    t102 = ((x5281-(x5282>>x5283))%x5284);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x5294 = INT16_MAX;
	int8_t x5295 = 2;
	volatile uint16_t x5296 = UINT16_MAX;
	int32_t t103 = 94;

    t103 = ((x5293-(x5294>>x5295))%x5296);

    if (t103 != -8190) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x5325 = 0;
	uint64_t x5326 = 3356641LLU;
	volatile int16_t x5328 = -328;
	volatile uint64_t t104 = 1847472LLU;

    t104 = ((x5325-(x5326>>x5327))%x5328);

    if (t104 != 18446744073708712456LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x5329 = 228U;
	int8_t x5331 = 0;
	static int64_t t105 = 713464390583LL;

    t105 = ((x5329-(x5330>>x5331))%x5332);

    if (t105 != 3LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x5357 = INT16_MAX;
	uint8_t x5358 = UINT8_MAX;
	int32_t t106 = 424645855;

    t106 = ((x5357-(x5358>>x5359))%x5360);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5361 = 6243958058110339LLU;
	uint32_t x5362 = UINT32_MAX;
	uint8_t x5363 = 2U;
	volatile int64_t x5364 = -1LL;
	volatile uint64_t t107 = 5229481608261140883LLU;

    t107 = ((x5361-(x5362>>x5363))%x5364);

    if (t107 != 6243956984368516LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x5549 = INT64_MAX;
	volatile int32_t x5550 = INT32_MAX;
	uint8_t x5551 = 20U;
	int32_t x5552 = 30506;
	int64_t t108 = -3808932187329877LL;

    t108 = ((x5549-(x5550>>x5551))%x5552);

    if (t108 != 17350LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5573 = 116U;
	int16_t x5574 = 1;
	static int8_t x5575 = 0;
	uint64_t x5576 = 427690106838624LLU;
	uint64_t t109 = 861LLU;

    t109 = ((x5573-(x5574>>x5575))%x5576);

    if (t109 != 115LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x5593 = 2;
	uint16_t x5594 = 3232U;
	int8_t x5596 = INT8_MIN;
	volatile int32_t t110 = 587;

    t110 = ((x5593-(x5594>>x5595))%x5596);

    if (t110 != -78) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x5614 = UINT32_MAX;
	static uint8_t x5615 = 0U;
	uint64_t x5616 = 111164067432LLU;
	volatile uint64_t t111 = 2048242LLU;

    t111 = ((x5613-(x5614>>x5615))%x5616);

    if (t111 != 79092141096LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x5657 = UINT64_MAX;
	uint32_t x5659 = 1U;
	static volatile int32_t x5660 = INT32_MIN;
	uint64_t t112 = 55173LLU;

    t112 = ((x5657-(x5658>>x5659))%x5660);

    if (t112 != 2147483647LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x5709 = -1LL;
	uint16_t x5711 = 1U;
	int8_t x5712 = INT8_MIN;
	volatile uint64_t t113 = 1455050LLU;

    t113 = ((x5709-(x5710>>x5711))%x5712);

    if (t113 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x5773 = 120U;
	volatile uint64_t x5774 = 96671LLU;
	uint8_t x5775 = 1U;
	int16_t x5776 = 2938;
	volatile uint64_t t114 = 16752361LLU;

    t114 = ((x5773-(x5774>>x5775))%x5776);

    if (t114 != 2891LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x5917 = INT8_MIN;
	uint64_t x5919 = 5LLU;
	volatile uint64_t t115 = 215850749LLU;

    t115 = ((x5917-(x5918>>x5919))%x5920);

    if (t115 != 3721672519LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x5929 = INT32_MAX;
	int32_t t116 = 6;

    t116 = ((x5929-(x5930>>x5931))%x5932);

    if (t116 != 5) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x6057 = UINT64_MAX;
	int8_t x6058 = 0;
	volatile int16_t x6059 = 7;
	int32_t x6060 = INT32_MIN;
	static volatile uint64_t t117 = 27LLU;

    t117 = ((x6057-(x6058>>x6059))%x6060);

    if (t117 != 2147483647LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x6181 = UINT8_MAX;
	uint16_t x6183 = 6U;
	int32_t x6184 = INT32_MIN;
	volatile int32_t t118 = -2;

    t118 = ((x6181-(x6182>>x6183))%x6184);

    if (t118 != -1475355) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x6189 = INT8_MIN;
	int16_t x6190 = INT16_MAX;
	int8_t x6191 = 0;
	static int8_t x6192 = INT8_MIN;

    t119 = ((x6189-(x6190>>x6191))%x6192);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x6289 = 4775879642759930LL;
	uint8_t x6290 = 5U;
	int8_t x6291 = 6;
	static uint8_t x6292 = UINT8_MAX;
	int64_t t120 = -65444888444822LL;

    t120 = ((x6289-(x6290>>x6291))%x6292);

    if (t120 != 35LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x6533 = UINT64_MAX;
	volatile uint8_t x6534 = 7U;
	int8_t x6536 = 7;
	volatile uint64_t t121 = 252685397670915LLU;

    t121 = ((x6533-(x6534>>x6535))%x6536);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x6629 = -2;
	static int32_t x6630 = 175;
	int8_t x6632 = -1;

    t122 = ((x6629-(x6630>>x6631))%x6632);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x6749 = -1;
	uint16_t x6751 = 6U;
	static uint64_t x6752 = 461807438236956LLU;
	uint64_t t123 = 601LLU;

    t123 = ((x6749-(x6750>>x6751))%x6752);

    if (t123 != 307760772581151LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6781 = -1;
	uint64_t x6782 = 2848124221274484LLU;
	uint8_t x6783 = 1U;
	static uint16_t x6784 = UINT16_MAX;

    t124 = ((x6781-(x6782>>x6783))%x6784);

    if (t124 != 34773LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x6866 = 9U;
	int32_t x6868 = INT32_MAX;
	volatile int32_t t125 = 60284;

    t125 = ((x6865-(x6866>>x6867))%x6868);

    if (t125 != -34) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x6881 = INT16_MAX;
	int64_t x6882 = 1172LL;
	int16_t x6884 = INT16_MIN;
	int64_t t126 = 2536434067318412647LL;

    t126 = ((x6881-(x6882>>x6883))%x6884);

    if (t126 != 32474LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x6901 = 4U;
	uint32_t x6902 = 1929918U;
	static uint8_t x6903 = 2U;
	int16_t x6904 = INT16_MAX;
	uint32_t t127 = 102U;

    t127 = ((x6901-(x6902>>x6903))%x6904);

    if (t127 != 9034U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x6909 = 41U;
	volatile int32_t x6910 = 5369;
	uint32_t x6911 = 1U;
	volatile int16_t x6912 = INT16_MAX;
	volatile int32_t t128 = 4;

    t128 = ((x6909-(x6910>>x6911))%x6912);

    if (t128 != -2643) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x6939 = 3U;
	static int64_t t129 = 7075824LL;

    t129 = ((x6937-(x6938>>x6939))%x6940);

    if (t129 != 127LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x7045 = 2257549030056000861LL;

    t130 = ((x7045-(x7046>>x7047))%x7048);

    if (t130 != 2257549030022446430LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x7049 = -854259LL;
	int16_t x7050 = 240;
	int8_t x7052 = INT8_MAX;

    t131 = ((x7049-(x7050>>x7051))%x7052);

    if (t131 != -57LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x7053 = -1LL;
	uint8_t x7054 = 23U;
	int32_t x7055 = 1;
	int16_t x7056 = INT16_MIN;
	int64_t t132 = 2181757865128496LL;

    t132 = ((x7053-(x7054>>x7055))%x7056);

    if (t132 != -12LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x7061 = 6;
	uint8_t x7062 = 1U;
	int16_t x7063 = 15;
	static int64_t x7064 = -14346480288682LL;
	int64_t t133 = -206LL;

    t133 = ((x7061-(x7062>>x7063))%x7064);

    if (t133 != 6LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x7153 = INT64_MAX;
	int16_t x7154 = 4;
	volatile int64_t x7156 = -1LL;
	static volatile int64_t t134 = 1078198189196809LL;

    t134 = ((x7153-(x7154>>x7155))%x7156);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x7237 = UINT32_MAX;
	volatile uint64_t x7238 = 653809570660584891LLU;
	int16_t x7239 = 3;
	int16_t x7240 = INT16_MAX;
	static volatile uint64_t t135 = 13134512093960249LLU;

    t135 = ((x7237-(x7238>>x7239))%x7240);

    if (t135 != 5279LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x7321 = -1132;
	uint16_t x7322 = UINT16_MAX;
	int8_t x7323 = 9;
	volatile int32_t t136 = 12042;

    t136 = ((x7321-(x7322>>x7323))%x7324);

    if (t136 != -1259) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x7325 = 0U;
	int8_t x7326 = INT8_MAX;
	uint32_t x7327 = 1U;
	int64_t x7328 = 3433247635034485LL;
	int64_t t137 = 67292522LL;

    t137 = ((x7325-(x7326>>x7327))%x7328);

    if (t137 != -63LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x7329 = 9U;
	static int64_t x7330 = INT64_MAX;
	uint8_t x7332 = UINT8_MAX;
	volatile int64_t t138 = -3296862154686LL;

    t138 = ((x7329-(x7330>>x7331))%x7332);

    if (t138 != -118LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x7349 = INT8_MIN;
	static int32_t x7350 = INT32_MAX;
	static uint8_t x7351 = 8U;
	volatile int8_t x7352 = INT8_MIN;
	int32_t t139 = 110497918;

    t139 = ((x7349-(x7350>>x7351))%x7352);

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x7373 = -1299;
	static int64_t x7375 = 21LL;
	uint32_t t140 = 1592290331U;

    t140 = ((x7373-(x7374>>x7375))%x7376);

    if (t140 != 114U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x7497 = 174U;
	static volatile int8_t x7499 = 1;
	uint32_t t141 = 3U;

    t141 = ((x7497-(x7498>>x7499))%x7500);

    if (t141 != 171U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x7549 = INT32_MIN;
	int16_t x7550 = INT16_MAX;
	uint16_t x7551 = 28U;
	uint8_t x7552 = UINT8_MAX;
	int32_t t142 = -1;

    t142 = ((x7549-(x7550>>x7551))%x7552);

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x7753 = -47;
	uint64_t x7754 = 1091934624131267LLU;
	uint8_t x7755 = 9U;
	volatile int64_t x7756 = INT64_MAX;
	volatile uint64_t t143 = 11021535LLU;

    t143 = ((x7753-(x7754>>x7755))%x7756);

    if (t143 != 9223369904169963006LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x7765 = -1;
	uint32_t x7766 = UINT32_MAX;
	static uint8_t x7767 = 0U;
	static int8_t x7768 = INT8_MIN;
	static uint32_t t144 = 1658935748U;

    t144 = ((x7765-(x7766>>x7767))%x7768);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x7773 = -21;
	int8_t x7775 = 15;
	static int16_t x7776 = -1;
	volatile int64_t t145 = 381916846LL;

    t145 = ((x7773-(x7774>>x7775))%x7776);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7801 = INT8_MAX;
	int64_t x7802 = INT64_MAX;
	uint8_t x7803 = 30U;
	int64_t x7804 = -1LL;
	volatile int64_t t146 = -807558547707806LL;

    t146 = ((x7801-(x7802>>x7803))%x7804);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x7805 = -34LL;
	static uint8_t x7807 = 1U;
	int64_t x7808 = -1LL;

    t147 = ((x7805-(x7806>>x7807))%x7808);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x7837 = 9839;
	volatile uint32_t x7838 = 924455U;
	int8_t x7839 = 1;
	uint8_t x7840 = 50U;
	uint32_t t148 = 22881U;

    t148 = ((x7837-(x7838>>x7839))%x7840);

    if (t148 != 8U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7846 = 157495181769339LLU;
	uint16_t x7847 = 2U;
	volatile int16_t x7848 = INT16_MAX;
	uint64_t t149 = 5401449699LLU;

    t149 = ((x7845-(x7846>>x7847))%x7848);

    if (t149 != 29402LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x7869 = 5218;
	uint16_t x7870 = 6107U;
	uint64_t x7871 = 2LLU;
	uint32_t x7872 = UINT32_MAX;
	static uint32_t t150 = 61592378U;

    t150 = ((x7869-(x7870>>x7871))%x7872);

    if (t150 != 3692U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x7909 = 16742U;
	uint8_t x7910 = 36U;
	static int8_t x7912 = INT8_MIN;
	volatile int32_t t151 = 128605;

    t151 = ((x7909-(x7910>>x7911))%x7912);

    if (t151 != 102) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x7985 = 16U;
	int64_t x7986 = INT64_MAX;
	int8_t x7987 = 7;
	uint64_t x7988 = 3207014770293LLU;
	uint64_t t152 = 969317947852659338LLU;

    t152 = ((x7985-(x7986>>x7987))%x7988);

    if (t152 != 2349849541700LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x8021 = -1;
	uint8_t x8023 = 15U;
	uint8_t x8024 = 125U;

    t153 = ((x8021-(x8022>>x8023))%x8024);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x8197 = 42177915716648LLU;
	uint8_t x8198 = 0U;
	static uint16_t x8199 = 3U;
	int8_t x8200 = 42;
	volatile uint64_t t154 = 1010463110260LLU;

    t154 = ((x8197-(x8198>>x8199))%x8200);

    if (t154 != 26LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x8204 = UINT16_MAX;

    t155 = ((x8201-(x8202>>x8203))%x8204);

    if (t155 != 92) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x8214 = 488098399LLU;
	static int64_t x8215 = 0LL;
	int16_t x8216 = INT16_MAX;
	uint64_t t156 = 248LLU;

    t156 = ((x8213-(x8214>>x8215))%x8216);

    if (t156 != 30746LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x8281 = INT64_MAX;
	static int32_t x8282 = INT32_MAX;
	int64_t x8284 = INT64_MIN;
	int64_t t157 = -35615958155LL;

    t157 = ((x8281-(x8282>>x8283))%x8284);

    if (t157 != 9223372036720558080LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x8429 = INT32_MAX;
	int8_t x8431 = 29;
	volatile int64_t x8432 = INT64_MAX;
	uint64_t t158 = 532765052517728LLU;

    t158 = ((x8429-(x8430>>x8431))%x8432);

    if (t158 != 2147483647LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x8481 = INT8_MAX;
	uint32_t x8482 = 122137U;
	uint8_t x8483 = 1U;
	uint32_t x8484 = 7U;
	static uint32_t t159 = 27329U;

    t159 = ((x8481-(x8482>>x8483))%x8484);

    if (t159 != 5U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x8541 = INT64_MAX;
	int64_t x8542 = 1046LL;
	uint8_t x8543 = 1U;
	volatile int32_t x8544 = INT32_MIN;
	static int64_t t160 = 1311893603080LL;

    t160 = ((x8541-(x8542>>x8543))%x8544);

    if (t160 != 2147483124LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x8605 = 6147792795447184LLU;
	static int64_t x8606 = INT64_MAX;
	uint8_t x8607 = 7U;
	uint64_t x8608 = 22512803478710LLU;
	static volatile uint64_t t161 = 8122811863129LLU;

    t161 = ((x8605-(x8606>>x8607))%x8608);

    if (t161 != 8231436025555LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x8609 = -1;
	static uint8_t x8610 = 4U;
	int8_t x8611 = 0;
	int64_t x8612 = INT64_MIN;
	static int64_t t162 = 2LL;

    t162 = ((x8609-(x8610>>x8611))%x8612);

    if (t162 != -5LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x8717 = 1U;
	static uint64_t x8718 = 1937237237438084LLU;
	uint8_t x8719 = 0U;

    t163 = ((x8717-(x8718>>x8719))%x8720);

    if (t163 != 47608165LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x8747 = 12;
	static volatile int8_t x8748 = 31;
	uint64_t t164 = 261LLU;

    t164 = ((x8745-(x8746>>x8747))%x8748);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x8781 = INT8_MIN;
	static int8_t x8782 = INT8_MAX;
	volatile uint16_t x8783 = 0U;
	int64_t x8784 = INT64_MIN;
	int64_t t165 = -37595LL;

    t165 = ((x8781-(x8782>>x8783))%x8784);

    if (t165 != -255LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x8933 = INT32_MIN;
	uint8_t x8935 = 5U;
	int32_t x8936 = -6472061;
	static volatile int32_t t166 = 448;

    t166 = ((x8933-(x8934>>x8935))%x8936);

    if (t166 != -5231457) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x9061 = UINT16_MAX;
	int8_t x9063 = 23;
	int64_t x9064 = -16819318LL;
	volatile uint64_t t167 = 8966LLU;

    t167 = ((x9061-(x9062>>x9063))%x9064);

    if (t167 != 18446741874686361600LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x9118 = INT16_MAX;
	int8_t x9119 = 1;
	int16_t x9120 = INT16_MIN;
	int32_t t168 = 211;

    t168 = ((x9117-(x9118>>x9119))%x9120);

    if (t168 != -16354) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x9125 = INT32_MAX;
	volatile int32_t x9126 = 152;
	int16_t x9127 = 6;

    t169 = ((x9125-(x9126>>x9127))%x9128);

    if (t169 != 2147483645U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x9141 = 1;
	int8_t x9143 = 1;
	int32_t x9144 = INT32_MAX;
	volatile int32_t t170 = -90318707;

    t170 = ((x9141-(x9142>>x9143))%x9144);

    if (t170 != -13) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x9145 = 0;
	int16_t x9146 = 143;
	static uint8_t x9147 = 20U;
	volatile int64_t x9148 = INT64_MAX;
	static int64_t t171 = 191LL;

    t171 = ((x9145-(x9146>>x9147))%x9148);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x9321 = 3467U;
	uint8_t x9322 = UINT8_MAX;
	volatile int8_t x9323 = 1;
	static int8_t x9324 = -1;
	static volatile int32_t t172 = -85;

    t172 = ((x9321-(x9322>>x9323))%x9324);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x9393 = INT16_MIN;
	volatile uint64_t x9394 = 2518443925319666758LLU;
	volatile uint8_t x9395 = 4U;
	int32_t x9396 = -620806;
	static volatile uint64_t t173 = 11624262309LLU;

    t173 = ((x9393-(x9394>>x9395))%x9396);

    if (t173 != 18289341328377039676LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x9410 = INT16_MAX;
	uint8_t x9411 = 0U;
	int8_t x9412 = -2;
	int32_t t174 = 103575;

    t174 = ((x9409-(x9410>>x9411))%x9412);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x9437 = INT8_MAX;
	int8_t x9438 = INT8_MAX;
	volatile uint8_t x9439 = 1U;
	volatile int32_t t175 = 472157;

    t175 = ((x9437-(x9438>>x9439))%x9440);

    if (t175 != 64) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x9485 = INT16_MIN;
	int16_t x9487 = 1;
	volatile int16_t x9488 = -1;

    t176 = ((x9485-(x9486>>x9487))%x9488);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9565 = UINT16_MAX;
	volatile int16_t x9566 = INT16_MAX;
	static uint8_t x9567 = 17U;
	uint16_t x9568 = 442U;
	volatile int32_t t177 = 7469463;

    t177 = ((x9565-(x9566>>x9567))%x9568);

    if (t177 != 119) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x9701 = UINT64_MAX;
	volatile int8_t x9702 = INT8_MAX;
	static int8_t x9703 = 8;
	int64_t x9704 = 1LL;

    t178 = ((x9701-(x9702>>x9703))%x9704);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x9729 = 63783343400654187LLU;
	int8_t x9731 = 15;
	uint64_t t179 = 242537733784119LLU;

    t179 = ((x9729-(x9730>>x9731))%x9732);

    if (t179 != 63783343400654187LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x9817 = -1;
	int16_t x9818 = INT16_MAX;
	int64_t x9819 = 11LL;
	int16_t x9820 = -2078;
	volatile int32_t t180 = 24;

    t180 = ((x9817-(x9818>>x9819))%x9820);

    if (t180 != -16) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x9869 = 8U;
	static uint16_t x9870 = 2759U;
	int64_t x9872 = INT64_MAX;
	static volatile int64_t t181 = -14923105876806578LL;

    t181 = ((x9869-(x9870>>x9871))%x9872);

    if (t181 != 8LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x9910 = UINT16_MAX;
	uint16_t x9911 = 3U;
	volatile uint8_t x9912 = 9U;
	int32_t t182 = 26348;

    t182 = ((x9909-(x9910>>x9911))%x9912);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x10093 = -1;
	uint16_t x10094 = 38U;
	uint16_t x10095 = 2U;
	volatile uint32_t t183 = 950U;

    t183 = ((x10093-(x10094>>x10095))%x10096);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x10137 = INT32_MIN;
	uint32_t x10138 = 112401450U;
	int8_t x10139 = 28;
	int64_t x10140 = INT64_MAX;
	static volatile int64_t t184 = 1141LL;

    t184 = ((x10137-(x10138>>x10139))%x10140);

    if (t184 != 2147483648LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x10161 = INT32_MIN;
	uint16_t x10163 = 30U;
	int16_t x10164 = INT16_MAX;
	volatile int32_t t185 = -842211;

    t185 = ((x10161-(x10162>>x10163))%x10164);

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x10193 = UINT32_MAX;
	int8_t x10194 = INT8_MAX;
	uint32_t x10195 = 1U;
	int64_t x10196 = -1LL;
	int64_t t186 = -21781364LL;

    t186 = ((x10193-(x10194>>x10195))%x10196);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x10209 = INT8_MIN;
	int16_t x10210 = 3;
	uint32_t x10211 = 0U;
	uint8_t x10212 = 1U;
	int32_t t187 = -3049;

    t187 = ((x10209-(x10210>>x10211))%x10212);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x10226 = 127331572753LLU;
	uint16_t x10227 = 6U;
	static int32_t x10228 = INT32_MIN;
	volatile uint64_t t188 = 1LLU;

    t188 = ((x10225-(x10226>>x10227))%x10228);

    if (t188 != 157927812LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x10237 = 0;
	uint8_t x10238 = 21U;
	int8_t x10239 = 0;
	static int16_t x10240 = INT16_MIN;

    t189 = ((x10237-(x10238>>x10239))%x10240);

    if (t189 != -21) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x10381 = INT8_MAX;
	int64_t x10382 = 98291LL;
	uint8_t x10383 = 49U;
	int32_t x10384 = 21;
	int64_t t190 = 1LL;

    t190 = ((x10381-(x10382>>x10383))%x10384);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x10385 = INT32_MAX;
	uint8_t x10387 = 26U;
	uint16_t x10388 = UINT16_MAX;
	int32_t t191 = -9;

    t191 = ((x10385-(x10386>>x10387))%x10388);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x10461 = 1U;
	int8_t x10462 = 1;
	int8_t x10464 = INT8_MIN;

    t192 = ((x10461-(x10462>>x10463))%x10464);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x10549 = 4291612;
	int64_t x10550 = 1275750398981380903LL;
	uint8_t x10551 = 2U;
	int16_t x10552 = -1;
	static volatile int64_t t193 = -16567600LL;

    t193 = ((x10549-(x10550>>x10551))%x10552);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x10585 = 31U;
	uint32_t x10586 = 31484U;
	static volatile uint32_t x10587 = 1U;
	volatile int16_t x10588 = INT16_MAX;
	volatile uint32_t t194 = 70727224U;

    t194 = ((x10585-(x10586>>x10587))%x10588);

    if (t194 != 17060U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x10749 = -1;
	static volatile uint8_t x10751 = 10U;
	static int32_t x10752 = 206873;
	static int32_t t195 = 66628651;

    t195 = ((x10749-(x10750>>x10751))%x10752);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x10897 = -6;
	uint32_t x10898 = UINT32_MAX;
	uint8_t x10899 = 10U;
	static uint16_t x10900 = 6833U;
	static volatile uint32_t t196 = 9976730U;

    t196 = ((x10897-(x10898>>x10899))%x10900);

    if (t196 != 4303U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x10905 = INT64_MAX;
	uint8_t x10906 = 17U;
	uint8_t x10907 = 17U;
	static volatile int16_t x10908 = -1;
	volatile int64_t t197 = 276202027LL;

    t197 = ((x10905-(x10906>>x10907))%x10908);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x10930 = 1U;
	uint16_t x10931 = 1U;
	int32_t x10932 = -1;

    t198 = ((x10929-(x10930>>x10931))%x10932);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x11053 = 1286U;
	static int32_t x11054 = 103404239;
	static uint16_t x11056 = UINT16_MAX;
	int32_t t199 = -388579;

    t199 = ((x11053-(x11054>>x11055))%x11056);

    if (t199 != 1286) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}


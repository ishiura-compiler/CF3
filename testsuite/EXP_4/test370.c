#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -167;
uint32_t x39 = 10U;
static volatile int8_t x40 = INT8_MIN;
volatile int32_t t1 = 20932;
int16_t x103 = 0;
volatile uint64_t t12 = 1340707559514516299LLU;
static int64_t x792 = INT64_MAX;
uint8_t x830 = 6U;
static volatile uint16_t x832 = 19430U;
volatile int32_t t14 = 225;
uint64_t x914 = UINT64_MAX;
int32_t x950 = 17;
int32_t x1101 = 247610;
static uint8_t x1243 = 0U;
volatile uint64_t t20 = 708316572925LLU;
static int16_t x1258 = INT16_MIN;
static volatile uint64_t x1260 = 382205867837LLU;
int8_t x1451 = -1;
static volatile uint32_t x1498 = UINT32_MAX;
uint16_t x1499 = 9U;
volatile int8_t x1537 = INT8_MAX;
static int32_t x1612 = 1;
int32_t t29 = 5;
volatile uint32_t x1769 = 20U;
uint32_t t30 = 111748U;
static uint8_t x1822 = 1U;
static volatile int32_t t31 = -687;
static volatile uint32_t x1940 = UINT32_MAX;
volatile uint16_t x1995 = 0U;
int16_t x1996 = 867;
int8_t x2038 = -44;
uint32_t x2262 = 27806885U;
volatile uint32_t x2541 = 839782U;
uint8_t x2543 = 0U;
int8_t x2561 = 0;
int8_t x2940 = 0;
int16_t x3185 = 38;
uint32_t x3267 = 121616U;
uint64_t x3419 = UINT64_MAX;
static volatile int32_t x3454 = INT32_MIN;
int8_t x3470 = -1;
static volatile uint32_t t53 = 419096U;
uint32_t x3946 = 3U;
uint8_t x3948 = 0U;
volatile int32_t t55 = 1441225;
static int32_t x4045 = 109;
static uint32_t x4048 = 8U;
volatile int32_t t57 = 15021053;
uint64_t x4091 = 193814268LLU;
uint32_t x4112 = 54268U;
int64_t t60 = INT64_MAX;
volatile uint16_t x4324 = 0U;
int32_t x4414 = 512933;
uint64_t x4645 = 19982LLU;
uint64_t t66 = 714617863741365910LLU;
uint16_t x4697 = 3625U;
static uint16_t x4773 = UINT16_MAX;
int32_t x4774 = INT32_MIN;
volatile uint16_t x4860 = 3U;
uint8_t x4906 = 0U;
volatile int8_t x4991 = 0;
uint32_t x4992 = 1509972537U;
static int32_t x4998 = 10786452;
int32_t x5052 = INT32_MAX;
uint32_t x5265 = 15U;
int16_t x5268 = -1;
uint64_t x5545 = 475173800633105890LLU;
volatile uint8_t x5546 = 0U;


void f0(void) {
	volatile uint16_t x1 = 3294U;
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	volatile int32_t x4 = INT32_MIN;

	t0 = (x1<<(x2*(x3*x4)));

	if (t0 != 3294) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x37 = 28157U;
	int32_t x38 = INT32_MIN;

	t1 = (x37<<(x38*(x39*x40)));

	if (t1 != 28157) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x45 = 0;
	int8_t x46 = 0;
	static uint64_t x47 = UINT64_MAX;
	static uint16_t x48 = 0U;
	volatile int32_t t2 = -29;

	t2 = (x45<<(x46*(x47*x48)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x65 = 58U;
	uint32_t x66 = 3U;
	uint16_t x67 = UINT16_MAX;
	int16_t x68 = 0;
	volatile int32_t t3 = -9400101;

	t3 = (x65<<(x66*(x67*x68)));

	if (t3 != 58) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x101 = 0;
	uint16_t x102 = UINT16_MAX;
	static uint64_t x104 = 251682LLU;
	volatile int32_t t4 = 271881963;

	t4 = (x101<<(x102*(x103*x104)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x117 = 1188026LLU;
	static int8_t x118 = 0;
	volatile int8_t x119 = INT8_MAX;
	static int16_t x120 = INT16_MAX;
	uint64_t t5 = 186022249784737270LLU;

	t5 = (x117<<(x118*(x119*x120)));

	if (t5 != 1188026LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t6 = INT32_MAX;

	t6 = (x137<<(x138*(x139*x140)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MIN;
	volatile uint32_t x223 = 242575730U;
	uint32_t x224 = UINT32_MAX;
	int32_t t7 = 457472;

	t7 = (x221<<(x222*(x223*x224)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x233 = INT32_MAX;
	volatile int32_t x234 = 0;
	uint32_t x235 = UINT32_MAX;
	static int8_t x236 = INT8_MIN;
	int32_t t8 = INT32_MAX;

	t8 = (x233<<(x234*(x235*x236)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x329 = 133499335246024LLU;
	int16_t x330 = -1;
	int8_t x331 = -1;
	volatile uint32_t x332 = 13U;
	volatile uint64_t t9 = 273LLU;

	t9 = (x329<<(x330*(x331*x332)));

	if (t9 != 1093626554335428608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x605 = UINT16_MAX;
	int16_t x606 = INT16_MIN;
	uint8_t x607 = 0U;
	uint32_t x608 = 191U;
	volatile int32_t t10 = -1;

	t10 = (x605<<(x606*(x607*x608)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x749 = 97764402;
	int16_t x750 = -1;
	uint16_t x751 = 0U;
	uint8_t x752 = 51U;
	static int32_t t11 = 3764;

	t11 = (x749<<(x750*(x751*x752)));

	if (t11 != 97764402) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x777 = 20420LLU;
	uint16_t x778 = 6169U;
	int16_t x779 = 11;
	uint8_t x780 = 0U;

	t12 = (x777<<(x778*(x779*x780)));

	if (t12 != 20420LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x789 = 1736633121LL;
	uint8_t x790 = 0U;
	static int16_t x791 = 1;
	static volatile int64_t t13 = 31283583LL;

	t13 = (x789<<(x790*(x791*x792)));

	if (t13 != 1736633121LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x829 = INT16_MAX;
	int8_t x831 = 0;

	t14 = (x829<<(x830*(x831*x832)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x913 = INT32_MAX;
	uint64_t x915 = 1802636629364708808LLU;
	int64_t x916 = INT64_MIN;
	int32_t t15 = INT32_MAX;

	t15 = (x913<<(x914*(x915*x916)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x917 = 12;
	int32_t x918 = INT32_MIN;
	int8_t x919 = INT8_MIN;
	uint32_t x920 = 70543881U;
	volatile int32_t t16 = 8464355;

	t16 = (x917<<(x918*(x919*x920)));

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x949 = 2946U;
	int16_t x951 = 0;
	volatile uint64_t x952 = 126844712171143683LLU;
	volatile int32_t t17 = 5;

	t17 = (x949<<(x950*(x951*x952)));

	if (t17 != 2946) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1102 = 343655540192403LLU;
	int8_t x1103 = 0;
	volatile int64_t x1104 = -1LL;
	int32_t t18 = -6688256;

	t18 = (x1101<<(x1102*(x1103*x1104)));

	if (t18 != 247610) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1185 = UINT64_MAX;
	uint16_t x1186 = 0U;
	int16_t x1187 = INT16_MIN;
	volatile int8_t x1188 = INT8_MIN;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x1185<<(x1186*(x1187*x1188)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1241 = 299LLU;
	volatile int8_t x1242 = INT8_MIN;
	static uint32_t x1244 = 809928U;

	t20 = (x1241<<(x1242*(x1243*x1244)));

	if (t20 != 299LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1257 = 6;
	volatile uint8_t x1259 = 0U;
	volatile int32_t t21 = 476;

	t21 = (x1257<<(x1258*(x1259*x1260)));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1333 = 207349170010LLU;
	static int8_t x1334 = -12;
	static uint64_t x1335 = 1827LLU;
	volatile int64_t x1336 = INT64_MIN;
	uint64_t t22 = 986784933611426581LLU;

	t22 = (x1333<<(x1334*(x1335*x1336)));

	if (t22 != 207349170010LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1449 = UINT16_MAX;
	int64_t x1450 = INT64_MAX;
	int8_t x1452 = 0;
	int32_t t23 = -3;

	t23 = (x1449<<(x1450*(x1451*x1452)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1497 = 5750U;
	int16_t x1500 = -1;
	int32_t t24 = 528;

	t24 = (x1497<<(x1498*(x1499*x1500)));

	if (t24 != 2944000) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1538 = 17LLU;
	volatile uint64_t x1539 = UINT64_MAX;
	volatile uint64_t x1540 = UINT64_MAX;
	volatile int32_t t25 = 1259536;

	t25 = (x1537<<(x1538*(x1539*x1540)));

	if (t25 != 16646144) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1609 = UINT32_MAX;
	uint32_t x1610 = 0U;
	int16_t x1611 = -1;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x1609<<(x1610*(x1611*x1612)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1617 = 1217U;
	int32_t x1618 = -1;
	uint32_t x1619 = 0U;
	int8_t x1620 = 1;
	volatile int32_t t27 = 365;

	t27 = (x1617<<(x1618*(x1619*x1620)));

	if (t27 != 1217) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1649 = 165003214068959433LL;
	int64_t x1650 = INT64_MIN;
	static uint64_t x1651 = 8572702646643LLU;
	int64_t x1652 = INT64_MIN;
	int64_t t28 = -3939320297LL;

	t28 = (x1649<<(x1650*(x1651*x1652)));

	if (t28 != 165003214068959433LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1749 = INT8_MAX;
	uint8_t x1750 = 0U;
	int64_t x1751 = 13859061651351LL;
	static int16_t x1752 = INT16_MAX;

	t29 = (x1749<<(x1750*(x1751*x1752)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1770 = -2;
	static uint8_t x1771 = 0U;
	int16_t x1772 = 4;

	t30 = (x1769<<(x1770*(x1771*x1772)));

	if (t30 != 20U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1821 = 2;
	uint16_t x1823 = 0U;
	int16_t x1824 = -4;

	t31 = (x1821<<(x1822*(x1823*x1824)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1937 = 67U;
	int8_t x1938 = -8;
	uint8_t x1939 = 2U;
	int32_t t32 = 6;

	t32 = (x1937<<(x1938*(x1939*x1940)));

	if (t32 != 4390912) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1993 = INT16_MAX;
	volatile uint32_t x1994 = 3591U;
	int32_t t33 = 42865714;

	t33 = (x1993<<(x1994*(x1995*x1996)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2037 = INT16_MAX;
	volatile int32_t x2039 = -1;
	int16_t x2040 = 0;
	volatile int32_t t34 = 5;

	t34 = (x2037<<(x2038*(x2039*x2040)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2189 = 283LL;
	int64_t x2190 = -378756395699893946LL;
	volatile uint32_t x2191 = 0U;
	uint8_t x2192 = UINT8_MAX;
	static volatile int64_t t35 = 673LL;

	t35 = (x2189<<(x2190*(x2191*x2192)));

	if (t35 != 283LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x2197 = UINT32_MAX;
	int64_t x2198 = -1LL;
	volatile int64_t x2199 = 150112000LL;
	static uint8_t x2200 = 0U;
	uint32_t t36 = UINT32_MAX;

	t36 = (x2197<<(x2198*(x2199*x2200)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2261 = 271167LLU;
	static int32_t x2263 = INT32_MAX;
	static volatile int8_t x2264 = 0;
	uint64_t t37 = 41660197427LLU;

	t37 = (x2261<<(x2262*(x2263*x2264)));

	if (t37 != 271167LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2397 = UINT8_MAX;
	static int64_t x2398 = -1LL;
	volatile uint16_t x2399 = 6U;
	uint64_t x2400 = UINT64_MAX;
	int32_t t38 = 66015;

	t38 = (x2397<<(x2398*(x2399*x2400)));

	if (t38 != 16320) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2509 = 6927238612LLU;
	volatile uint32_t x2510 = 520029566U;
	uint16_t x2511 = 0U;
	static int32_t x2512 = -1;
	uint64_t t39 = 342281311933375LLU;

	t39 = (x2509<<(x2510*(x2511*x2512)));

	if (t39 != 6927238612LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2542 = INT32_MIN;
	volatile int16_t x2544 = INT16_MIN;
	uint32_t t40 = 60275U;

	t40 = (x2541<<(x2542*(x2543*x2544)));

	if (t40 != 839782U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2553 = UINT8_MAX;
	int8_t x2554 = -1;
	int8_t x2555 = 0;
	int32_t x2556 = INT32_MAX;
	volatile int32_t t41 = -13;

	t41 = (x2553<<(x2554*(x2555*x2556)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2562 = 0;
	uint64_t x2563 = UINT64_MAX;
	volatile uint16_t x2564 = 59U;
	int32_t t42 = -201586;

	t42 = (x2561<<(x2562*(x2563*x2564)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2937 = 0;
	volatile int16_t x2938 = -285;
	int64_t x2939 = INT64_MIN;
	volatile int32_t t43 = 0;

	t43 = (x2937<<(x2938*(x2939*x2940)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2961 = UINT64_MAX;
	int16_t x2962 = 8;
	int32_t x2963 = 0;
	int8_t x2964 = INT8_MIN;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x2961<<(x2962*(x2963*x2964)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2985 = 40U;
	volatile int8_t x2986 = 0;
	static int64_t x2987 = -1LL;
	int8_t x2988 = INT8_MAX;
	static uint32_t t45 = 224339U;

	t45 = (x2985<<(x2986*(x2987*x2988)));

	if (t45 != 40U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3149 = 1;
	uint8_t x3150 = 4U;
	volatile uint16_t x3151 = 10U;
	volatile uint16_t x3152 = 0U;
	volatile int32_t t46 = -2578936;

	t46 = (x3149<<(x3150*(x3151*x3152)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x3186 = 31;
	volatile int8_t x3187 = 0;
	int64_t x3188 = -1LL;
	static int32_t t47 = 1;

	t47 = (x3185<<(x3186*(x3187*x3188)));

	if (t47 != 38) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3265 = 435U;
	int32_t x3266 = INT32_MIN;
	static uint16_t x3268 = 1U;
	volatile int32_t t48 = -4112712;

	t48 = (x3265<<(x3266*(x3267*x3268)));

	if (t48 != 435) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3329 = UINT16_MAX;
	int64_t x3330 = INT64_MAX;
	static uint16_t x3331 = 0U;
	uint16_t x3332 = UINT16_MAX;
	int32_t t49 = -168;

	t49 = (x3329<<(x3330*(x3331*x3332)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3417 = UINT32_MAX;
	static int32_t x3418 = 0;
	volatile uint64_t x3420 = 1LLU;
	uint32_t t50 = UINT32_MAX;

	t50 = (x3417<<(x3418*(x3419*x3420)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3453 = UINT32_MAX;
	int8_t x3455 = -10;
	static uint32_t x3456 = UINT32_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = (x3453<<(x3454*(x3455*x3456)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3469 = 12U;
	int8_t x3471 = -1;
	int64_t x3472 = 1LL;
	int32_t t52 = -47;

	t52 = (x3469<<(x3470*(x3471*x3472)));

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3581 = UINT32_MAX;
	uint64_t x3582 = UINT64_MAX;
	int32_t x3583 = -1;
	int16_t x3584 = 1;

	t53 = (x3581<<(x3582*(x3583*x3584)));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3945 = 12;
	int16_t x3947 = INT16_MAX;
	volatile int32_t t54 = 29;

	t54 = (x3945<<(x3946*(x3947*x3948)));

	if (t54 != 12) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3993 = 421U;
	static uint32_t x3994 = 0U;
	int16_t x3995 = INT16_MIN;
	volatile uint64_t x3996 = 26887LLU;

	t55 = (x3993<<(x3994*(x3995*x3996)));

	if (t55 != 421) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x4046 = INT32_MAX;
	int32_t x4047 = INT32_MAX;
	int32_t t56 = -83233075;

	t56 = (x4045<<(x4046*(x4047*x4048)));

	if (t56 != 27904) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4057 = 14;
	volatile int64_t x4058 = INT64_MIN;
	static volatile int8_t x4059 = 63;
	int32_t x4060 = 0;

	t57 = (x4057<<(x4058*(x4059*x4060)));

	if (t57 != 14) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4089 = 2U;
	int8_t x4090 = -40;
	int32_t x4092 = 0;
	int32_t t58 = -8250846;

	t58 = (x4089<<(x4090*(x4091*x4092)));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4109 = 0U;
	int16_t x4110 = INT16_MAX;
	static int16_t x4111 = 0;
	static int32_t t59 = -27;

	t59 = (x4109<<(x4110*(x4111*x4112)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4113 = INT64_MAX;
	int32_t x4114 = INT32_MIN;
	uint8_t x4115 = 0U;
	static uint64_t x4116 = 67481579888LLU;

	t60 = (x4113<<(x4114*(x4115*x4116)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x4185 = INT8_MAX;
	static volatile int32_t x4186 = INT32_MIN;
	uint16_t x4187 = 0U;
	volatile uint16_t x4188 = 103U;
	int32_t t61 = -356734;

	t61 = (x4185<<(x4186*(x4187*x4188)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x4321 = UINT8_MAX;
	int64_t x4322 = INT64_MIN;
	volatile int64_t x4323 = -1746654621249194719LL;
	static volatile int32_t t62 = 42754880;

	t62 = (x4321<<(x4322*(x4323*x4324)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4413 = 189999U;
	int32_t x4415 = INT32_MIN;
	volatile uint32_t x4416 = 2504U;
	uint32_t t63 = 31488826U;

	t63 = (x4413<<(x4414*(x4415*x4416)));

	if (t63 != 189999U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4501 = 43338892122430083LLU;
	uint8_t x4502 = 0U;
	int32_t x4503 = -1;
	uint16_t x4504 = UINT16_MAX;
	uint64_t t64 = 881140LLU;

	t64 = (x4501<<(x4502*(x4503*x4504)));

	if (t64 != 43338892122430083LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x4625 = UINT16_MAX;
	static volatile int32_t x4626 = INT32_MIN;
	int32_t x4627 = 0;
	int64_t x4628 = INT64_MIN;
	static volatile int32_t t65 = 24217;

	t65 = (x4625<<(x4626*(x4627*x4628)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4646 = -1;
	static uint8_t x4647 = 20U;
	volatile int64_t x4648 = -1LL;

	t66 = (x4645<<(x4646*(x4647*x4648)));

	if (t66 != 20952645632LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4698 = UINT32_MAX;
	uint8_t x4699 = 1U;
	int8_t x4700 = 0;
	volatile int32_t t67 = -3664;

	t67 = (x4697<<(x4698*(x4699*x4700)));

	if (t67 != 3625) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4749 = 1U;
	uint8_t x4750 = 0U;
	uint64_t x4751 = 6378LLU;
	int8_t x4752 = INT8_MIN;
	volatile int32_t t68 = 4;

	t68 = (x4749<<(x4750*(x4751*x4752)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4775 = INT64_MIN;
	uint64_t x4776 = 2LLU;
	volatile int32_t t69 = 899754119;

	t69 = (x4773<<(x4774*(x4775*x4776)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4857 = 184LL;
	static int64_t x4858 = 0LL;
	static uint32_t x4859 = 17908942U;
	int64_t t70 = -85398914400LL;

	t70 = (x4857<<(x4858*(x4859*x4860)));

	if (t70 != 184LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4861 = 88U;
	int32_t x4862 = -1;
	static volatile int8_t x4863 = 3;
	int64_t x4864 = -1LL;
	static volatile uint32_t t71 = 194031516U;

	t71 = (x4861<<(x4862*(x4863*x4864)));

	if (t71 != 704U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4905 = 13LL;
	volatile uint8_t x4907 = UINT8_MAX;
	int16_t x4908 = INT16_MIN;
	int64_t t72 = 109662344296513LL;

	t72 = (x4905<<(x4906*(x4907*x4908)));

	if (t72 != 13LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4989 = 1U;
	static int8_t x4990 = 4;
	int32_t t73 = 7;

	t73 = (x4989<<(x4990*(x4991*x4992)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4997 = 4125;
	uint32_t x4999 = UINT32_MAX;
	static int32_t x5000 = INT32_MIN;
	int32_t t74 = 513362;

	t74 = (x4997<<(x4998*(x4999*x5000)));

	if (t74 != 4125) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x5049 = INT8_MAX;
	volatile int16_t x5050 = -1;
	static volatile int16_t x5051 = 0;
	int32_t t75 = 5;

	t75 = (x5049<<(x5050*(x5051*x5052)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x5093 = 528138U;
	uint8_t x5094 = 15U;
	int16_t x5095 = -1;
	int64_t x5096 = -1LL;
	volatile uint32_t t76 = 1U;

	t76 = (x5093<<(x5094*(x5095*x5096)));

	if (t76 != 126156800U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5266 = 11U;
	volatile int8_t x5267 = -1;
	uint32_t t77 = 0U;

	t77 = (x5265<<(x5266*(x5267*x5268)));

	if (t77 != 30720U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5317 = 1U;
	int64_t x5318 = -1896666130LL;
	int64_t x5319 = INT64_MIN;
	uint64_t x5320 = 19LLU;
	volatile int32_t t78 = -637;

	t78 = (x5317<<(x5318*(x5319*x5320)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5497 = 72U;
	int16_t x5498 = INT16_MIN;
	volatile int8_t x5499 = 0;
	int64_t x5500 = INT64_MIN;
	int32_t t79 = 182;

	t79 = (x5497<<(x5498*(x5499*x5500)));

	if (t79 != 72) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5547 = 7U;
	int8_t x5548 = INT8_MAX;
	uint64_t t80 = 13197545LLU;

	t80 = (x5545<<(x5546*(x5547*x5548)));

	if (t80 != 475173800633105890LLU) { NG(); } else { ; }
	
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


    return 0;
}


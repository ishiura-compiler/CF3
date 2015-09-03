#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x31 = 21U;
volatile int64_t t1 = -1LL;
int8_t x137 = INT8_MAX;
int64_t x289 = 1404488LL;
int16_t x306 = INT16_MAX;
static uint64_t x309 = UINT64_MAX;
uint8_t x312 = 23U;
volatile int32_t x360 = 10;
volatile int8_t x383 = -1;
int32_t x653 = -1701;
static int8_t x654 = INT8_MIN;
int8_t x738 = INT8_MIN;
uint64_t x975 = 3LLU;
static int64_t x1091 = INT64_MIN;
uint16_t x1092 = 26U;
static uint64_t x1202 = 54864398719409539LLU;
int64_t x1203 = -1LL;
int16_t x1338 = INT16_MIN;
int8_t x1340 = 8;
uint16_t x1694 = UINT16_MAX;
int64_t x1930 = 0LL;
volatile uint32_t x1931 = UINT32_MAX;
volatile int64_t t29 = 1890650317844097232LL;
int64_t x2169 = -1LL;
int8_t x2172 = 46;
volatile uint64_t t33 = 60624LLU;
static volatile int32_t x2316 = 1;
volatile int32_t t38 = -25077568;
int8_t x2609 = INT8_MAX;
uint8_t x2684 = 2U;
int16_t x2793 = INT16_MAX;
uint64_t t41 = 519728819LLU;
int32_t t42 = 1986785;
volatile uint64_t t44 = 526481389910167029LLU;
int32_t x3058 = INT32_MIN;
static int32_t t46 = 509440;
static volatile int64_t x3073 = INT64_MIN;
static int32_t t49 = 53461732;
int64_t x3169 = INT64_MIN;
static volatile int32_t x3171 = -2955036;
volatile int64_t t50 = 206898026491914LL;
int32_t x3230 = INT32_MAX;
volatile uint32_t x3231 = 3357U;
uint64_t x3503 = UINT64_MAX;
static int8_t x3568 = 1;
uint8_t x3809 = 18U;
uint64_t t56 = 4322794988687LLU;
int8_t x3821 = 0;
int32_t x3823 = 192;
uint32_t t59 = 85U;
int16_t x3962 = -1;
int32_t x3964 = 1;
uint32_t x4005 = 66955782U;
uint16_t x4072 = 9U;
static uint64_t t62 = 1883432306494611LLU;
uint32_t x4482 = 58489719U;
int16_t x4484 = 1;
volatile uint64_t t71 = 7185681497LLU;
int8_t x4634 = INT8_MIN;
uint32_t x4635 = 96431U;
static int16_t x4734 = -6;
uint32_t x4847 = 0U;
volatile int32_t x4848 = 0;
uint64_t x5173 = 11222026932215000LLU;
uint32_t t76 = 1928U;
uint16_t x5292 = 3U;
int16_t x5527 = 9;
int8_t x5528 = 0;
volatile uint32_t x5634 = 2533535U;
uint16_t x5635 = UINT16_MAX;
volatile uint64_t t84 = 2447276801588152LLU;
static int16_t x5693 = 30;
int64_t x5738 = INT64_MIN;
int16_t x5754 = -51;
int8_t x5760 = 2;


void f0(void) {
	int32_t x29 = 1;
	int64_t x30 = 502239464104181LL;
	static uint32_t x32 = 6U;
	int64_t t0 = -1001LL;

	t0 = (x29%((x30^x31)<<x32));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x57 = 180LL;
	int32_t x58 = 61;
	int64_t x59 = 452860LL;
	int8_t x60 = 25;

	t1 = (x57%((x58^x59)<<x60));

	if (t1 != 180LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = -842LL;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 3;
	volatile int64_t t2 = -11LL;

	t2 = (x121%((x122^x123)<<x124));

	if (t2 != 25423LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x138 = INT8_MIN;
	int16_t x139 = -1;
	int8_t x140 = 1;
	int32_t t3 = 1;

	t3 = (x137%((x138^x139)<<x140));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x233 = 82578LLU;
	volatile int16_t x234 = INT16_MIN;
	uint64_t x235 = 14158LLU;
	int32_t x236 = 0;
	uint64_t t4 = 15735917579544073LLU;

	t4 = (x233%((x234^x235)<<x236));

	if (t4 != 82578LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x285 = INT8_MIN;
	static int8_t x286 = -1;
	uint64_t x287 = 115242704325LLU;
	uint32_t x288 = 3U;
	uint64_t t5 = 2553565664LLU;

	t5 = (x285%((x286^x287)<<x288));

	if (t5 != 921941634480LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x290 = 72LLU;
	uint8_t x291 = 7U;
	static uint8_t x292 = 0U;
	static uint64_t t6 = 1922118685LLU;

	t6 = (x289%((x290^x291)<<x292));

	if (t6 != 26LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x293 = 3U;
	int64_t x294 = 1LL;
	uint32_t x295 = 8153U;
	volatile int64_t x296 = 21LL;
	int64_t t7 = -1749LL;

	t7 = (x293%((x294^x295)<<x296));

	if (t7 != 3LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x305 = -1;
	int8_t x307 = 0;
	static uint8_t x308 = 11U;
	static int32_t t8 = 367065;

	t8 = (x305%((x306^x307)<<x308));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x310 = 3;
	int8_t x311 = 42;
	volatile uint64_t t9 = 497890LLU;

	t9 = (x309%((x310^x311)<<x312));

	if (t9 != 16777215LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x321 = 7085503387LL;
	static volatile int8_t x322 = 1;
	static volatile uint8_t x323 = UINT8_MAX;
	uint8_t x324 = 1U;
	volatile int64_t t10 = 7294318245659LL;

	t10 = (x321%((x322^x323)<<x324));

	if (t10 != 159LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 68951236844684LLU;
	int32_t x351 = -1;
	int16_t x352 = 8;
	volatile uint64_t t11 = 6LLU;

	t11 = (x349%((x350^x351)<<x352));

	if (t11 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x357 = 1LLU;
	int64_t x358 = 638014900769785LL;
	int32_t x359 = INT32_MAX;
	uint64_t t12 = 271275659573LLU;

	t12 = (x357%((x358^x359)<<x360));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x381 = 5U;
	static volatile int8_t x382 = INT8_MIN;
	int32_t x384 = 1;
	static int32_t t13 = 13882;

	t13 = (x381%((x382^x383)<<x384));

	if (t13 != 5) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x655 = -1;
	int64_t x656 = 1LL;
	int32_t t14 = -1792061;

	t14 = (x653%((x654^x655)<<x656));

	if (t14 != -177) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x689 = UINT64_MAX;
	uint32_t x690 = 117U;
	uint32_t x691 = UINT32_MAX;
	uint8_t x692 = 2U;
	uint64_t t15 = 1146474221786726LLU;

	t15 = (x689%((x690^x691)<<x692));

	if (t15 != 222783LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x737 = 7U;
	uint32_t x739 = 2068U;
	uint8_t x740 = 7U;
	static volatile uint32_t t16 = 6143U;

	t16 = (x737%((x738^x739)<<x740));

	if (t16 != 7U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x793 = 4520U;
	int32_t x794 = INT32_MAX;
	uint64_t x795 = UINT64_MAX;
	volatile uint64_t x796 = 1LLU;
	uint64_t t17 = 864LLU;

	t17 = (x793%((x794^x795)<<x796));

	if (t17 != 4520LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x973 = INT64_MIN;
	uint32_t x974 = 73U;
	volatile uint64_t x976 = 56LLU;
	uint64_t t18 = 23751821203203LLU;

	t18 = (x973%((x974^x975)<<x976));

	if (t18 != 3891110078048108544LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1089 = -423188;
	static uint64_t x1090 = 238379LLU;
	volatile uint64_t t19 = 204904068LLU;

	t19 = (x1089%((x1090^x1091)<<x1092));

	if (t19 != 14864344517356LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1201 = 0U;
	int8_t x1204 = 38;
	volatile uint64_t t20 = 494074LLU;

	t20 = (x1201%((x1202^x1203)<<x1204));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1337 = UINT8_MAX;
	uint64_t x1339 = UINT64_MAX;
	static uint64_t t21 = 0LLU;

	t21 = (x1337%((x1338^x1339)<<x1340));

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x1369 = -30600475853195024LL;
	volatile uint16_t x1370 = 1327U;
	uint64_t x1371 = 1240139298277800LLU;
	uint16_t x1372 = 23U;
	static uint64_t t22 = 2LLU;

	t22 = (x1369%((x1370^x1371)<<x1372));

	if (t22 != 890618442628987120LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1489 = UINT8_MAX;
	static uint64_t x1490 = UINT64_MAX;
	uint16_t x1491 = 1264U;
	static uint16_t x1492 = 2U;
	volatile uint64_t t23 = 3909596364667664LLU;

	t23 = (x1489%((x1490^x1491)<<x1492));

	if (t23 != 255LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1509 = -1;
	int32_t x1510 = INT32_MIN;
	uint64_t x1511 = 3904403118LLU;
	int8_t x1512 = 0;
	static volatile uint64_t t24 = 317955537661LLU;

	t24 = (x1509%((x1510^x1511)<<x1512));

	if (t24 != 2538047825LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1525 = INT8_MIN;
	int32_t x1526 = INT32_MAX;
	uint64_t x1527 = UINT64_MAX;
	uint8_t x1528 = 3U;
	uint64_t t25 = 93185LLU;

	t25 = (x1525%((x1526^x1527)<<x1528));

	if (t25 != 17179869056LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1665 = INT32_MIN;
	int16_t x1666 = INT16_MAX;
	uint32_t x1667 = 95117U;
	uint8_t x1668 = 26U;
	volatile uint32_t t26 = 90U;

	t26 = (x1665%((x1666^x1667)<<x1668));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1693 = INT32_MAX;
	uint8_t x1695 = 4U;
	int8_t x1696 = 3;
	volatile int32_t t27 = -231378924;

	t27 = (x1693%((x1694^x1695)<<x1696));

	if (t27 != 163839) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1825 = UINT32_MAX;
	uint8_t x1826 = UINT8_MAX;
	uint16_t x1827 = 90U;
	volatile uint32_t x1828 = 8U;
	volatile uint32_t t28 = 1U;

	t28 = (x1825%((x1826^x1827)<<x1828));

	if (t28 != 4095U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1929 = 2U;
	uint8_t x1932 = 16U;

	t29 = (x1929%((x1930^x1931)<<x1932));

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x2013 = 1U;
	volatile int32_t x2014 = -9017404;
	int64_t x2015 = -6955110246LL;
	int8_t x2016 = 0;
	int64_t t30 = -4994393090705LL;

	t30 = (x2013%((x2014^x2015)<<x2016));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2025 = INT8_MIN;
	volatile uint16_t x2026 = 1778U;
	static uint8_t x2027 = UINT8_MAX;
	volatile int64_t x2028 = 0LL;
	int32_t t31 = -488162;

	t31 = (x2025%((x2026^x2027)<<x2028));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2109 = 247;
	int16_t x2110 = INT16_MAX;
	uint64_t x2111 = 202LLU;
	uint8_t x2112 = 14U;
	uint64_t t32 = 3357498351407012087LLU;

	t32 = (x2109%((x2110^x2111)<<x2112));

	if (t32 != 247LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2170 = UINT16_MAX;
	uint64_t x2171 = 281342668824285LLU;

	t33 = (x2169%((x2170^x2171)<<x2172));

	if (t33 != 2821082954082549759LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2225 = INT16_MIN;
	volatile uint16_t x2226 = UINT16_MAX;
	static volatile uint64_t x2227 = 66333LLU;
	int8_t x2228 = 7;
	volatile uint64_t t34 = 4117979488229LLU;

	t34 = (x2225%((x2226^x2227)<<x2228));

	if (t34 != 10215168LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2313 = -1;
	int32_t x2314 = 0;
	static uint16_t x2315 = 342U;
	static int32_t t35 = -13015560;

	t35 = (x2313%((x2314^x2315)<<x2316));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2401 = -1;
	int64_t x2402 = 755048990812424068LL;
	static volatile uint32_t x2403 = 43359U;
	uint8_t x2404 = 1U;
	static volatile int64_t t36 = -1LL;

	t36 = (x2401%((x2402^x2403)<<x2404));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2409 = 14LL;
	static uint64_t x2410 = 4428LLU;
	int8_t x2411 = INT8_MIN;
	int8_t x2412 = 2;
	volatile uint64_t t37 = 308807669413789LLU;

	t37 = (x2409%((x2410^x2411)<<x2412));

	if (t37 != 14LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2505 = 80914107;
	int32_t x2506 = -6412;
	static volatile int32_t x2507 = -1;
	volatile uint8_t x2508 = 1U;

	t38 = (x2505%((x2506^x2507)<<x2508));

	if (t38 != 7287) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2610 = UINT32_MAX;
	int32_t x2611 = 960765311;
	uint8_t x2612 = 4U;
	uint32_t t39 = 2972366U;

	t39 = (x2609%((x2610^x2611)<<x2612));

	if (t39 != 127U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2681 = INT64_MAX;
	uint16_t x2682 = 5U;
	volatile uint32_t x2683 = 1U;
	static volatile int64_t t40 = 835435620031423LL;

	t40 = (x2681%((x2682^x2683)<<x2684));

	if (t40 != 15LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2794 = UINT64_MAX;
	int64_t x2795 = INT64_MIN;
	int16_t x2796 = 6;

	t41 = (x2793%((x2794^x2795)<<x2796));

	if (t41 != 32767LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2997 = -1;
	volatile int8_t x2998 = -36;
	int8_t x2999 = INT8_MIN;
	int8_t x3000 = 7;

	t42 = (x2997%((x2998^x2999)<<x3000));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x3001 = 23251421439435LL;
	int16_t x3002 = -1;
	int32_t x3003 = -43424567;
	volatile uint64_t x3004 = 3LLU;
	volatile int64_t t43 = -6322887095LL;

	t43 = (x3001%((x3002^x3003)<<x3004));

	if (t43 != 171820395LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3029 = INT8_MIN;
	static volatile uint16_t x3030 = 469U;
	uint64_t x3031 = UINT64_MAX;
	uint32_t x3032 = 1U;

	t44 = (x3029%((x3030^x3031)<<x3032));

	if (t44 != 812LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x3057 = 1U;
	uint64_t x3059 = 7LLU;
	uint16_t x3060 = 23U;
	volatile uint64_t t45 = 9446626437LLU;

	t45 = (x3057%((x3058^x3059)<<x3060));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x3061 = 58U;
	int32_t x3062 = 25;
	static uint16_t x3063 = UINT16_MAX;
	int16_t x3064 = 1;

	t46 = (x3061%((x3062^x3063)<<x3064));

	if (t46 != 58) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3074 = -5845;
	static volatile uint64_t x3075 = 0LLU;
	int8_t x3076 = 1;
	static uint64_t t47 = 181005593514698LLU;

	t47 = (x3073%((x3074^x3075)<<x3076));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x3113 = INT16_MIN;
	int16_t x3114 = 3;
	uint64_t x3115 = 17762368619LLU;
	int16_t x3116 = 5;
	static uint64_t t48 = 9233691585636LLU;

	t48 = (x3113%((x3114^x3115)<<x3116));

	if (t48 != 205069872384LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3141 = INT32_MAX;
	int8_t x3142 = -1;
	int8_t x3143 = -5;
	uint8_t x3144 = 10U;

	t49 = (x3141%((x3142^x3143)<<x3144));

	if (t49 != 4095) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x3170 = -1;
	volatile uint8_t x3172 = 7U;

	t50 = (x3169%((x3170^x3171)<<x3172));

	if (t50 != -145996928LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3229 = -1;
	volatile uint8_t x3232 = 19U;
	static uint32_t t51 = 4830U;

	t51 = (x3229%((x3230^x3231)<<x3232));

	if (t51 != 1760559103U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3325 = INT32_MAX;
	int32_t x3326 = INT32_MIN;
	volatile int64_t x3327 = -262569210LL;
	uint8_t x3328 = 31U;
	int64_t t52 = 421985LL;

	t52 = (x3325%((x3326^x3327)<<x3328));

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3501 = 719;
	int16_t x3502 = INT16_MAX;
	static uint8_t x3504 = 1U;
	static uint64_t t53 = 244315LLU;

	t53 = (x3501%((x3502^x3503)<<x3504));

	if (t53 != 719LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x3565 = 0;
	volatile int64_t x3566 = -13187306480246LL;
	int32_t x3567 = INT32_MIN;
	volatile int64_t t54 = 41540LL;

	t54 = (x3565%((x3566^x3567)<<x3568));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3685 = UINT32_MAX;
	uint8_t x3686 = UINT8_MAX;
	static uint64_t x3687 = 17LLU;
	int16_t x3688 = 0;
	static volatile uint64_t t55 = 1370747606896968224LLU;

	t55 = (x3685%((x3686^x3687)<<x3688));

	if (t55 != 17LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3810 = INT16_MIN;
	uint64_t x3811 = 1471082039129302LLU;
	uint16_t x3812 = 10U;

	t56 = (x3809%((x3810^x3811)<<x3812));

	if (t56 != 18LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3813 = 6252U;
	uint64_t x3814 = 465264106689707671LLU;
	int8_t x3815 = -1;
	uint16_t x3816 = 3U;
	static uint64_t t57 = 1628932LLU;

	t57 = (x3813%((x3814^x3815)<<x3816));

	if (t57 != 6252LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3822 = 99U;
	static int8_t x3824 = 0;
	static int32_t t58 = -96404;

	t58 = (x3821%((x3822^x3823)<<x3824));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x3857 = 223U;
	uint32_t x3858 = 419077583U;
	int8_t x3859 = -1;
	uint16_t x3860 = 4U;

	t59 = (x3857%((x3858^x3859)<<x3860));

	if (t59 != 223U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3961 = 4945LLU;
	int8_t x3963 = -10;
	uint64_t t60 = 6420LLU;

	t60 = (x3961%((x3962^x3963)<<x3964));

	if (t60 != 13LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4006 = -1;
	volatile uint32_t x4007 = 126760U;
	uint16_t x4008 = 3U;
	uint32_t t61 = 9910U;

	t61 = (x4005%((x4006^x4007)<<x4008));

	if (t61 != 66955782U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4069 = 7;
	int16_t x4070 = INT16_MIN;
	uint64_t x4071 = UINT64_MAX;

	t62 = (x4069%((x4070^x4071)<<x4072));

	if (t62 != 7LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4081 = INT32_MIN;
	int64_t x4082 = -1LL;
	int16_t x4083 = -1817;
	int16_t x4084 = 15;
	static int64_t t63 = -3546LL;

	t63 = (x4081%((x4082^x4083)<<x4084));

	if (t63 != -5242880LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x4169 = -397;
	int8_t x4170 = 7;
	uint32_t x4171 = UINT32_MAX;
	volatile uint16_t x4172 = 3U;
	volatile uint32_t t64 = 3955U;

	t64 = (x4169%((x4170^x4171)<<x4172));

	if (t64 != 4294966899U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4257 = INT8_MIN;
	int64_t x4258 = -131330398LL;
	static volatile int16_t x4259 = -3;
	int32_t x4260 = 1;
	int64_t t65 = -47325314538LL;

	t65 = (x4257%((x4258^x4259)<<x4260));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4465 = -10318002LL;
	uint32_t x4466 = 1902U;
	uint16_t x4467 = UINT16_MAX;
	static volatile int8_t x4468 = 1;
	int64_t t66 = 18221LL;

	t66 = (x4465%((x4466^x4467)<<x4468));

	if (t66 != -9456LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x4481 = INT64_MAX;
	static int8_t x4483 = INT8_MIN;
	static int64_t t67 = 624101656LL;

	t67 = (x4481%((x4482^x4483)<<x4484));

	if (t67 != 3257961373LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4485 = 10695316713LLU;
	uint32_t x4486 = 974737802U;
	uint64_t x4487 = UINT64_MAX;
	int32_t x4488 = 40;
	uint64_t t68 = 12LLU;

	t68 = (x4485%((x4486^x4487)<<x4488));

	if (t68 != 10695316713LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4501 = 1;
	volatile uint32_t x4502 = UINT32_MAX;
	int16_t x4503 = -14686;
	static volatile uint8_t x4504 = 6U;
	static uint32_t t69 = 35792U;

	t69 = (x4501%((x4502^x4503)<<x4504));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4585 = 2U;
	static int16_t x4586 = -1;
	static volatile uint64_t x4587 = 190796508948LLU;
	volatile int16_t x4588 = 1;
	volatile uint64_t t70 = 1388890LLU;

	t70 = (x4585%((x4586^x4587)<<x4588));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4593 = UINT8_MAX;
	volatile uint64_t x4594 = UINT64_MAX;
	uint16_t x4595 = 3U;
	static uint8_t x4596 = 3U;

	t71 = (x4593%((x4594^x4595)<<x4596));

	if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x4633 = -456LL;
	int32_t x4636 = 1;
	volatile int64_t t72 = 266LL;

	t72 = (x4633%((x4634^x4635)<<x4636));

	if (t72 != -456LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4733 = -1;
	int32_t x4735 = -22;
	volatile uint16_t x4736 = 0U;
	static volatile int32_t t73 = -144721040;

	t73 = (x4733%((x4734^x4735)<<x4736));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4845 = 272U;
	uint64_t x4846 = 418535249LLU;
	volatile uint64_t t74 = 5LLU;

	t74 = (x4845%((x4846^x4847)<<x4848));

	if (t74 != 272LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5174 = 37203512314242LLU;
	int16_t x5175 = INT16_MAX;
	static int32_t x5176 = 2;
	static volatile uint64_t t75 = 976LLU;

	t75 = (x5173%((x5174^x5175)<<x5176));

	if (t75 != 60973239403100LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5193 = 5U;
	static int16_t x5194 = INT16_MIN;
	uint32_t x5195 = 73519U;
	uint32_t x5196 = 7U;

	t76 = (x5193%((x5194^x5195)<<x5196));

	if (t76 != 5U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x5233 = INT16_MAX;
	volatile uint64_t x5234 = UINT64_MAX;
	uint32_t x5235 = 0U;
	uint8_t x5236 = 60U;
	uint64_t t77 = 3237217274LLU;

	t77 = (x5233%((x5234^x5235)<<x5236));

	if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5277 = INT64_MIN;
	int8_t x5278 = INT8_MAX;
	int16_t x5279 = INT16_MAX;
	int8_t x5280 = 1;
	int64_t t78 = -12998577537LL;

	t78 = (x5277%((x5278^x5279)<<x5280));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x5289 = -1817906069541581207LL;
	volatile int16_t x5290 = INT16_MIN;
	int8_t x5291 = -49;
	static int64_t t79 = -4582106034738LL;

	t79 = (x5289%((x5290^x5291)<<x5292));

	if (t79 != -18735LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5297 = 46;
	uint64_t x5298 = UINT64_MAX;
	int8_t x5299 = -55;
	uint16_t x5300 = 15U;
	volatile uint64_t t80 = 432658387375LLU;

	t80 = (x5297%((x5298^x5299)<<x5300));

	if (t80 != 46LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5309 = 1308LL;
	int8_t x5310 = -1;
	volatile int64_t x5311 = INT64_MIN;
	static int8_t x5312 = 0;
	int64_t t81 = 43833982543LL;

	t81 = (x5309%((x5310^x5311)<<x5312));

	if (t81 != 1308LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x5525 = 184029U;
	int8_t x5526 = 0;
	volatile uint32_t t82 = 4978601U;

	t82 = (x5525%((x5526^x5527)<<x5528));

	if (t82 != 6U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5633 = 843350606915725LLU;
	static int8_t x5636 = 1;
	uint64_t t83 = 9753354166529LLU;

	t83 = (x5633%((x5634^x5635)<<x5636));

	if (t83 != 3064909LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x5673 = 291679U;
	uint64_t x5674 = 4213207LLU;
	int32_t x5675 = INT32_MAX;
	uint32_t x5676 = 7U;

	t84 = (x5673%((x5674^x5675)<<x5676));

	if (t84 != 291679LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5694 = INT8_MIN;
	volatile uint32_t x5695 = 3U;
	uint16_t x5696 = 7U;
	uint32_t t85 = 1U;

	t85 = (x5693%((x5694^x5695)<<x5696));

	if (t85 != 30U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5737 = 2609U;
	uint64_t x5739 = 76LLU;
	volatile int8_t x5740 = 16;
	static uint64_t t86 = 289LLU;

	t86 = (x5737%((x5738^x5739)<<x5740));

	if (t86 != 2609LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5753 = -1;
	int64_t x5755 = -1LL;
	uint8_t x5756 = 2U;
	int64_t t87 = 19481881298452304LL;

	t87 = (x5753%((x5754^x5755)<<x5756));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x5757 = -1LL;
	uint32_t x5758 = 10U;
	int32_t x5759 = -1;
	volatile int64_t t88 = 47650742612LL;

	t88 = (x5757%((x5758^x5759)<<x5760));

	if (t88 != -1LL) { NG(); } else { ; }
	
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


    return 0;
}


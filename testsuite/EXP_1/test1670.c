#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x132 = 6U;
int32_t t2 = -1808;
static uint16_t x248 = 18U;
int64_t x310 = INT64_MAX;
int32_t x533 = INT32_MIN;
int32_t t5 = 3112029;
volatile uint8_t x630 = 1U;
uint64_t x632 = 6LLU;
uint16_t x633 = UINT16_MAX;
uint32_t x650 = 737348U;
uint8_t x750 = UINT8_MAX;
uint16_t x751 = 397U;
int32_t x819 = 0;
static int8_t x998 = -6;
uint32_t x1049 = 6U;
volatile int32_t x1052 = 5;
static uint32_t t13 = 1810U;
volatile int32_t x1177 = -1;
uint8_t x1178 = 4U;
int8_t x1454 = 61;
uint8_t x1455 = 70U;
volatile int32_t t20 = -469890603;
uint64_t x1601 = 7962074LLU;
int64_t x1621 = -1LL;
uint64_t t25 = 68590878LLU;
volatile int32_t t26 = 7427664;
volatile uint16_t x1842 = 4U;
volatile int8_t x1915 = INT8_MAX;
static uint64_t x1976 = 5LLU;
static int32_t t32 = 103686676;
uint16_t x2223 = 2486U;
static int8_t x2224 = 1;
static volatile uint8_t x2276 = 2U;
uint8_t x2453 = 101U;
static uint16_t x2456 = 1U;
uint32_t t39 = 13572685U;
int32_t x2697 = INT32_MIN;
static uint16_t x2700 = 0U;
volatile int64_t x2770 = INT64_MIN;
uint64_t x2771 = UINT64_MAX;
int32_t x2929 = INT32_MIN;
static volatile int8_t x2950 = INT8_MAX;
uint32_t x2951 = 3U;
static volatile int8_t x3001 = -1;
volatile uint16_t x3003 = UINT16_MAX;
static int16_t x3004 = 0;
int32_t t47 = 73870;
uint64_t x3375 = UINT64_MAX;
uint16_t x3428 = 8U;
int16_t x3459 = 55;
uint8_t x3517 = 3U;
int16_t x3519 = INT16_MAX;
int32_t x3534 = INT32_MAX;
int8_t x3561 = INT8_MIN;
int8_t x3564 = 56;
static uint8_t x3717 = 73U;
uint8_t x3772 = 13U;
uint32_t x3809 = 244622U;
uint64_t x3811 = 607137LLU;
uint64_t t59 = 4643640770LLU;
uint8_t x3999 = UINT8_MAX;
uint8_t x4111 = UINT8_MAX;
volatile uint8_t x4147 = UINT8_MAX;
int32_t t65 = 61;
uint64_t x4273 = UINT64_MAX;
static volatile int32_t t66 = 205110;
int8_t x4558 = INT8_MIN;
volatile int32_t t70 = -1;
int32_t x4593 = INT32_MIN;
uint8_t x4596 = 33U;
volatile uint8_t x4639 = 113U;
volatile int32_t t73 = 450;
int8_t x4937 = INT8_MIN;
uint64_t x5199 = UINT64_MAX;
static uint32_t x5236 = 36U;
int64_t x5242 = 5237311202849470LL;
uint64_t x5243 = 511328773225398LLU;
int64_t x5244 = 45LL;
int8_t x5312 = 17;
volatile int8_t x5456 = 0;
static int32_t x5458 = INT32_MIN;
uint8_t x5514 = 6U;
uint8_t x5543 = UINT8_MAX;
static uint8_t x5559 = 13U;
int32_t t88 = -1289117;
volatile int16_t x5717 = INT16_MIN;
uint8_t x5720 = 11U;
volatile uint16_t x5965 = UINT16_MAX;
volatile int64_t x5968 = 0LL;
int32_t t93 = -1907;
int8_t x6064 = 1;
volatile int32_t t96 = -67;
volatile int16_t x6173 = 4;
volatile uint64_t t97 = 718272483855LLU;
uint16_t x6312 = 9U;


void f0(void) {
	int32_t x61 = 1;
	int64_t x62 = INT64_MIN;
	volatile uint8_t x63 = 1U;
	int8_t x64 = 0;
	volatile int32_t t0 = -1;

	t0 = (((x61<=x62)|x63)<<x64);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x129 = 120U;
	uint64_t x130 = 182513258123LLU;
	int64_t x131 = 11244901004867536LL;
	int64_t t1 = -1LL;

	t1 = (((x129<=x130)|x131)<<x132);

	if (t1 != 719673664311522368LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x213 = -1;
	static int32_t x214 = 41;
	int32_t x215 = 10902;
	static volatile uint8_t x216 = 1U;

	t2 = (((x213<=x214)|x215)<<x216);

	if (t2 != 21806) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = 27921092;
	static volatile uint8_t x247 = UINT8_MAX;
	int32_t t3 = -4339759;

	t3 = (((x245<=x246)|x247)<<x248);

	if (t3 != 66846720) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = 2;
	static volatile int32_t t4 = -108691;

	t4 = (((x309<=x310)|x311)<<x312);

	if (t4 != 131068) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x534 = -57;
	volatile uint8_t x535 = 64U;
	uint8_t x536 = 0U;

	t5 = (((x533<=x534)|x535)<<x536);

	if (t5 != 65) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x629 = 11;
	uint8_t x631 = UINT8_MAX;
	int32_t t6 = -2;

	t6 = (((x629<=x630)|x631)<<x632);

	if (t6 != 16320) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x634 = -1;
	uint32_t x635 = UINT32_MAX;
	static int8_t x636 = 1;
	volatile uint32_t t7 = 2359U;

	t7 = (((x633<=x634)|x635)<<x636);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x649 = INT8_MIN;
	static volatile int8_t x651 = INT8_MAX;
	volatile uint8_t x652 = 0U;
	volatile int32_t t8 = -4396117;

	t8 = (((x649<=x650)|x651)<<x652);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x749 = -863906920362LL;
	uint64_t x752 = 0LLU;
	volatile int32_t t9 = -844;

	t9 = (((x749<=x750)|x751)<<x752);

	if (t9 != 397) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x817 = UINT16_MAX;
	int16_t x818 = INT16_MIN;
	uint16_t x820 = 1U;
	volatile int32_t t10 = -4264;

	t10 = (((x817<=x818)|x819)<<x820);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x997 = 518472U;
	int64_t x999 = 2182381736111060LL;
	static volatile int16_t x1000 = 3;
	volatile int64_t t11 = -2982379389421808LL;

	t11 = (((x997<=x998)|x999)<<x1000);

	if (t11 != 17459053888888488LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x1050 = 59943011U;
	uint8_t x1051 = UINT8_MAX;
	volatile int32_t t12 = 1603;

	t12 = (((x1049<=x1050)|x1051)<<x1052);

	if (t12 != 8160) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x1061 = 0U;
	int16_t x1062 = 1021;
	uint32_t x1063 = UINT32_MAX;
	static volatile uint8_t x1064 = 3U;

	t13 = (((x1061<=x1062)|x1063)<<x1064);

	if (t13 != 4294967288U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1109 = -1;
	int8_t x1110 = -2;
	static uint64_t x1111 = UINT64_MAX;
	uint16_t x1112 = 61U;
	uint64_t t14 = 27519226960292LLU;

	t14 = (((x1109<=x1110)|x1111)<<x1112);

	if (t14 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x1121 = INT16_MAX;
	int32_t x1122 = INT32_MIN;
	int8_t x1123 = 1;
	int8_t x1124 = 0;
	int32_t t15 = -11239815;

	t15 = (((x1121<=x1122)|x1123)<<x1124);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1179 = 21U;
	int16_t x1180 = 1;
	volatile int32_t t16 = 62707207;

	t16 = (((x1177<=x1178)|x1179)<<x1180);

	if (t16 != 42) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1413 = INT16_MIN;
	static int8_t x1414 = 20;
	uint32_t x1415 = UINT32_MAX;
	uint16_t x1416 = 6U;
	volatile uint32_t t17 = 224395U;

	t17 = (((x1413<=x1414)|x1415)<<x1416);

	if (t17 != 4294967232U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1453 = 31777737;
	volatile int8_t x1456 = 1;
	int32_t t18 = 1886201;

	t18 = (((x1453<=x1454)|x1455)<<x1456);

	if (t18 != 140) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1469 = INT8_MIN;
	int16_t x1470 = 678;
	uint32_t x1471 = 114484U;
	static uint16_t x1472 = 2U;
	static uint32_t t19 = 161U;

	t19 = (((x1469<=x1470)|x1471)<<x1472);

	if (t19 != 457940U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1485 = -1;
	int32_t x1486 = INT32_MIN;
	static uint16_t x1487 = 8198U;
	static uint16_t x1488 = 4U;

	t20 = (((x1485<=x1486)|x1487)<<x1488);

	if (t20 != 131168) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1529 = 529LLU;
	uint32_t x1530 = 38U;
	uint8_t x1531 = UINT8_MAX;
	int8_t x1532 = 1;
	volatile int32_t t21 = -16235;

	t21 = (((x1529<=x1530)|x1531)<<x1532);

	if (t21 != 510) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1602 = 1876LL;
	uint8_t x1603 = 19U;
	static uint8_t x1604 = 1U;
	volatile int32_t t22 = -6704321;

	t22 = (((x1601<=x1602)|x1603)<<x1604);

	if (t22 != 38) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1622 = INT64_MIN;
	int64_t x1623 = INT64_MAX;
	int32_t x1624 = 0;
	int64_t t23 = INT64_MAX;

	t23 = (((x1621<=x1622)|x1623)<<x1624);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1701 = 14;
	int16_t x1702 = INT16_MIN;
	volatile int8_t x1703 = 0;
	int8_t x1704 = 7;
	volatile int32_t t24 = 2;

	t24 = (((x1701<=x1702)|x1703)<<x1704);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1817 = UINT32_MAX;
	int8_t x1818 = INT8_MIN;
	uint64_t x1819 = 195LLU;
	int8_t x1820 = 1;

	t25 = (((x1817<=x1818)|x1819)<<x1820);

	if (t25 != 390LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1821 = INT32_MAX;
	int64_t x1822 = INT64_MAX;
	int8_t x1823 = INT8_MAX;
	int32_t x1824 = 0;

	t26 = (((x1821<=x1822)|x1823)<<x1824);

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1841 = UINT16_MAX;
	volatile uint8_t x1843 = 1U;
	int8_t x1844 = 0;
	int32_t t27 = -915569345;

	t27 = (((x1841<=x1842)|x1843)<<x1844);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1877 = INT16_MAX;
	uint8_t x1878 = UINT8_MAX;
	uint32_t x1879 = UINT32_MAX;
	uint16_t x1880 = 2U;
	static uint32_t t28 = 428625U;

	t28 = (((x1877<=x1878)|x1879)<<x1880);

	if (t28 != 4294967292U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1913 = 18U;
	uint8_t x1914 = 69U;
	volatile uint32_t x1916 = 0U;
	static int32_t t29 = 253673;

	t29 = (((x1913<=x1914)|x1915)<<x1916);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1921 = 331291U;
	int64_t x1922 = INT64_MIN;
	uint16_t x1923 = 1U;
	uint8_t x1924 = 7U;
	static int32_t t30 = 2485;

	t30 = (((x1921<=x1922)|x1923)<<x1924);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1965 = INT16_MIN;
	static uint64_t x1966 = 532619LLU;
	int16_t x1967 = 10285;
	uint8_t x1968 = 7U;
	volatile int32_t t31 = 11;

	t31 = (((x1965<=x1966)|x1967)<<x1968);

	if (t31 != 1316480) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1973 = INT16_MIN;
	uint32_t x1974 = 4675691U;
	int32_t x1975 = 305;

	t32 = (((x1973<=x1974)|x1975)<<x1976);

	if (t32 != 9760) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2033 = UINT32_MAX;
	int16_t x2034 = 1659;
	volatile uint32_t x2035 = 1814566511U;
	uint8_t x2036 = 1U;
	volatile uint32_t t33 = 12415028U;

	t33 = (((x2033<=x2034)|x2035)<<x2036);

	if (t33 != 3629133022U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2221 = 63907302031439LLU;
	volatile uint8_t x2222 = UINT8_MAX;
	volatile int32_t t34 = -13;

	t34 = (((x2221<=x2222)|x2223)<<x2224);

	if (t34 != 4972) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2273 = 3U;
	volatile uint16_t x2274 = UINT16_MAX;
	volatile int8_t x2275 = INT8_MAX;
	volatile int32_t t35 = 17717146;

	t35 = (((x2273<=x2274)|x2275)<<x2276);

	if (t35 != 508) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2429 = -13721;
	static int8_t x2430 = INT8_MIN;
	int16_t x2431 = 7973;
	uint16_t x2432 = 1U;
	volatile int32_t t36 = -9045269;

	t36 = (((x2429<=x2430)|x2431)<<x2432);

	if (t36 != 15946) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2454 = 901U;
	volatile int16_t x2455 = 1;
	volatile int32_t t37 = -225598068;

	t37 = (((x2453<=x2454)|x2455)<<x2456);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2473 = 5985U;
	int16_t x2474 = -1;
	static int64_t x2475 = 3617642442LL;
	int8_t x2476 = 1;
	volatile int64_t t38 = 1434631884058LL;

	t38 = (((x2473<=x2474)|x2475)<<x2476);

	if (t38 != 7235284886LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2493 = 109U;
	uint16_t x2494 = 32654U;
	static volatile uint32_t x2495 = 60U;
	uint16_t x2496 = 1U;

	t39 = (((x2493<=x2494)|x2495)<<x2496);

	if (t39 != 122U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2698 = 490759319130704095LLU;
	uint64_t x2699 = 437LLU;
	static uint64_t t40 = 190169109175353339LLU;

	t40 = (((x2697<=x2698)|x2699)<<x2700);

	if (t40 != 437LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2769 = 115U;
	int16_t x2772 = 59;
	uint64_t t41 = 2086583076816766LLU;

	t41 = (((x2769<=x2770)|x2771)<<x2772);

	if (t41 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2909 = 1U;
	uint64_t x2910 = UINT64_MAX;
	uint16_t x2911 = UINT16_MAX;
	uint8_t x2912 = 4U;
	volatile int32_t t42 = -109510196;

	t42 = (((x2909<=x2910)|x2911)<<x2912);

	if (t42 != 1048560) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2930 = INT64_MIN;
	volatile uint64_t x2931 = 720345330967077219LLU;
	int8_t x2932 = 0;
	volatile uint64_t t43 = 7854038389242LLU;

	t43 = (((x2929<=x2930)|x2931)<<x2932);

	if (t43 != 720345330967077219LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2949 = 8;
	static volatile uint8_t x2952 = 16U;
	volatile uint32_t t44 = 42629U;

	t44 = (((x2949<=x2950)|x2951)<<x2952);

	if (t44 != 196608U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2965 = INT64_MIN;
	static int64_t x2966 = -1LL;
	volatile int16_t x2967 = INT16_MAX;
	uint8_t x2968 = 10U;
	static volatile int32_t t45 = 74;

	t45 = (((x2965<=x2966)|x2967)<<x2968);

	if (t45 != 33553408) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3002 = UINT8_MAX;
	volatile int32_t t46 = 44;

	t46 = (((x3001<=x3002)|x3003)<<x3004);

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3273 = -1LL;
	int8_t x3274 = INT8_MAX;
	uint8_t x3275 = UINT8_MAX;
	uint64_t x3276 = 5LLU;

	t47 = (((x3273<=x3274)|x3275)<<x3276);

	if (t47 != 8160) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3325 = -1LL;
	int8_t x3326 = 1;
	static uint16_t x3327 = UINT16_MAX;
	uint16_t x3328 = 15U;
	volatile int32_t t48 = -123186;

	t48 = (((x3325<=x3326)|x3327)<<x3328);

	if (t48 != 2147450880) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3373 = INT16_MAX;
	static int64_t x3374 = INT64_MIN;
	static uint16_t x3376 = 0U;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x3373<=x3374)|x3375)<<x3376);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3425 = INT32_MAX;
	uint8_t x3426 = UINT8_MAX;
	volatile uint32_t x3427 = 1752871U;
	static volatile uint32_t t50 = 65413440U;

	t50 = (((x3425<=x3426)|x3427)<<x3428);

	if (t50 != 448734976U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3457 = -1;
	uint16_t x3458 = UINT16_MAX;
	uint8_t x3460 = 5U;
	volatile int32_t t51 = -2050907;

	t51 = (((x3457<=x3458)|x3459)<<x3460);

	if (t51 != 1760) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3461 = -516554298393483LL;
	int8_t x3462 = 1;
	uint8_t x3463 = 8U;
	static volatile uint64_t x3464 = 6LLU;
	int32_t t52 = -229;

	t52 = (((x3461<=x3462)|x3463)<<x3464);

	if (t52 != 576) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x3518 = INT64_MIN;
	uint8_t x3520 = 10U;
	int32_t t53 = 26953;

	t53 = (((x3517<=x3518)|x3519)<<x3520);

	if (t53 != 33553408) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3533 = INT16_MIN;
	uint32_t x3535 = 579U;
	uint16_t x3536 = 26U;
	volatile uint32_t t54 = 26U;

	t54 = (((x3533<=x3534)|x3535)<<x3536);

	if (t54 != 201326592U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3562 = 3623U;
	uint64_t x3563 = 1LLU;
	static volatile uint64_t t55 = 3449184439LLU;

	t55 = (((x3561<=x3562)|x3563)<<x3564);

	if (t55 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3718 = INT64_MIN;
	volatile uint64_t x3719 = 242119118295702830LLU;
	uint16_t x3720 = 17U;
	volatile uint64_t t56 = 2962284913LLU;

	t56 = (((x3717<=x3718)|x3719)<<x3720);

	if (t56 != 6637266473932554240LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3769 = INT16_MIN;
	volatile int8_t x3770 = -1;
	volatile int8_t x3771 = INT8_MAX;
	volatile int32_t t57 = 17271645;

	t57 = (((x3769<=x3770)|x3771)<<x3772);

	if (t57 != 1040384) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x3801 = -206893LL;
	static volatile int16_t x3802 = INT16_MAX;
	uint8_t x3803 = 12U;
	volatile uint16_t x3804 = 12U;
	volatile int32_t t58 = 1;

	t58 = (((x3801<=x3802)|x3803)<<x3804);

	if (t58 != 53248) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3810 = -30;
	static uint32_t x3812 = 36U;

	t59 = (((x3809<=x3810)|x3811)<<x3812);

	if (t59 != 41722136947064832LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x3841 = -1;
	int8_t x3842 = INT8_MIN;
	uint8_t x3843 = 20U;
	static volatile uint64_t x3844 = 4LLU;
	volatile int32_t t60 = 55;

	t60 = (((x3841<=x3842)|x3843)<<x3844);

	if (t60 != 320) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3893 = -1;
	uint16_t x3894 = 1U;
	int8_t x3895 = 3;
	uint16_t x3896 = 2U;
	volatile int32_t t61 = -9373984;

	t61 = (((x3893<=x3894)|x3895)<<x3896);

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3997 = 1U;
	volatile int8_t x3998 = -30;
	uint32_t x4000 = 1U;
	static volatile int32_t t62 = 46338783;

	t62 = (((x3997<=x3998)|x3999)<<x4000);

	if (t62 != 510) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4109 = 1;
	int8_t x4110 = INT8_MAX;
	uint8_t x4112 = 3U;
	static int32_t t63 = 1550;

	t63 = (((x4109<=x4110)|x4111)<<x4112);

	if (t63 != 2040) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4121 = 1;
	int8_t x4122 = INT8_MAX;
	static uint8_t x4123 = 12U;
	int32_t x4124 = 10;
	int32_t t64 = 647500208;

	t64 = (((x4121<=x4122)|x4123)<<x4124);

	if (t64 != 13312) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4145 = INT16_MIN;
	int16_t x4146 = INT16_MIN;
	static uint16_t x4148 = 13U;

	t65 = (((x4145<=x4146)|x4147)<<x4148);

	if (t65 != 2088960) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4274 = INT8_MIN;
	int16_t x4275 = INT16_MAX;
	uint8_t x4276 = 2U;

	t66 = (((x4273<=x4274)|x4275)<<x4276);

	if (t66 != 131068) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4425 = 2;
	volatile uint32_t x4426 = 5U;
	int8_t x4427 = INT8_MAX;
	uint32_t x4428 = 5U;
	int32_t t67 = 100;

	t67 = (((x4425<=x4426)|x4427)<<x4428);

	if (t67 != 4064) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4537 = 11;
	static int8_t x4538 = INT8_MAX;
	static uint32_t x4539 = 1493769U;
	uint8_t x4540 = 11U;
	uint32_t t68 = 7485516U;

	t68 = (((x4537<=x4538)|x4539)<<x4540);

	if (t68 != 3059238912U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4549 = 2U;
	uint16_t x4550 = 735U;
	uint32_t x4551 = 1461492491U;
	uint32_t x4552 = 23U;
	uint32_t t69 = 12631U;

	t69 = (((x4549<=x4550)|x4551)<<x4552);

	if (t69 != 2239758336U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4557 = UINT32_MAX;
	int16_t x4559 = 0;
	volatile int16_t x4560 = 0;

	t70 = (((x4557<=x4558)|x4559)<<x4560);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4594 = 3412035408LLU;
	static uint64_t x4595 = 435783LLU;
	uint64_t t71 = 6256938LLU;

	t71 = (((x4593<=x4594)|x4595)<<x4596);

	if (t71 != 3743347466305536LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4637 = -1;
	uint64_t x4638 = 46095698931LLU;
	static uint32_t x4640 = 2U;
	volatile int32_t t72 = -8229139;

	t72 = (((x4637<=x4638)|x4639)<<x4640);

	if (t72 != 452) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x4789 = INT8_MIN;
	static int16_t x4790 = INT16_MAX;
	static uint8_t x4791 = UINT8_MAX;
	static uint32_t x4792 = 0U;

	t73 = (((x4789<=x4790)|x4791)<<x4792);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4938 = 5;
	int16_t x4939 = INT16_MAX;
	static uint8_t x4940 = 1U;
	int32_t t74 = -1;

	t74 = (((x4937<=x4938)|x4939)<<x4940);

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5145 = INT16_MAX;
	int16_t x5146 = INT16_MAX;
	static uint32_t x5147 = 639U;
	static uint32_t x5148 = 2U;
	static volatile uint32_t t75 = 1786087U;

	t75 = (((x5145<=x5146)|x5147)<<x5148);

	if (t75 != 2556U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5197 = INT32_MIN;
	int8_t x5198 = INT8_MIN;
	int8_t x5200 = 1;
	uint64_t t76 = 22LLU;

	t76 = (((x5197<=x5198)|x5199)<<x5200);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5233 = 38;
	int8_t x5234 = -1;
	static uint64_t x5235 = UINT64_MAX;
	volatile uint64_t t77 = 824LLU;

	t77 = (((x5233<=x5234)|x5235)<<x5236);

	if (t77 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x5241 = INT8_MAX;
	volatile uint64_t t78 = 229525LLU;

	t78 = (((x5241<=x5242)|x5243)<<x5244);

	if (t78 != 9761235532976750592LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5309 = INT16_MIN;
	static int64_t x5310 = -1LL;
	uint64_t x5311 = 2014271LLU;
	volatile uint64_t t79 = 171776361454897LLU;

	t79 = (((x5309<=x5310)|x5311)<<x5312);

	if (t79 != 264014528512LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5405 = UINT64_MAX;
	static int64_t x5406 = INT64_MIN;
	int64_t x5407 = INT64_MAX;
	volatile uint16_t x5408 = 0U;
	static int64_t t80 = INT64_MAX;

	t80 = (((x5405<=x5406)|x5407)<<x5408);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x5441 = UINT8_MAX;
	volatile int16_t x5442 = -1;
	static int64_t x5443 = 2470533238340LL;
	volatile int16_t x5444 = 15;
	volatile int64_t t81 = 830346360LL;

	t81 = (((x5441<=x5442)|x5443)<<x5444);

	if (t81 != 80954433153925120LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x5453 = INT16_MIN;
	int32_t x5454 = 12682;
	uint64_t x5455 = UINT64_MAX;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x5453<=x5454)|x5455)<<x5456);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5457 = INT32_MAX;
	uint64_t x5459 = 1059374193758LLU;
	int8_t x5460 = 63;
	uint64_t t83 = 7LLU;

	t83 = (((x5457<=x5458)|x5459)<<x5460);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5501 = INT64_MIN;
	int16_t x5502 = INT16_MAX;
	int64_t x5503 = 3079944LL;
	uint8_t x5504 = 22U;
	static volatile int64_t t84 = 268662544728881149LL;

	t84 = (((x5501<=x5502)|x5503)<<x5504);

	if (t84 != 12918225633280LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x5513 = -1LL;
	uint32_t x5515 = UINT32_MAX;
	volatile int8_t x5516 = 1;
	uint32_t t85 = 3119U;

	t85 = (((x5513<=x5514)|x5515)<<x5516);

	if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5541 = 13150U;
	static volatile uint8_t x5542 = 0U;
	uint16_t x5544 = 3U;
	volatile int32_t t86 = -896831;

	t86 = (((x5541<=x5542)|x5543)<<x5544);

	if (t86 != 2040) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5557 = INT8_MAX;
	int16_t x5558 = INT16_MIN;
	int32_t x5560 = 1;
	static int32_t t87 = 0;

	t87 = (((x5557<=x5558)|x5559)<<x5560);

	if (t87 != 26) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5561 = INT8_MAX;
	static int16_t x5562 = -13;
	int16_t x5563 = INT16_MAX;
	volatile uint16_t x5564 = 0U;

	t88 = (((x5561<=x5562)|x5563)<<x5564);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5718 = 1;
	volatile int32_t x5719 = 973469;
	int32_t t89 = 13562;

	t89 = (((x5717<=x5718)|x5719)<<x5720);

	if (t89 != 1993664512) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5785 = 3U;
	int16_t x5786 = -243;
	int8_t x5787 = INT8_MAX;
	uint16_t x5788 = 2U;
	int32_t t90 = 35023447;

	t90 = (((x5785<=x5786)|x5787)<<x5788);

	if (t90 != 508) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5861 = -1;
	uint8_t x5862 = 3U;
	volatile uint64_t x5863 = 1712718615363410672LLU;
	volatile uint8_t x5864 = 14U;
	static uint64_t t91 = 196516LLU;

	t91 = (((x5861<=x5862)|x5863)<<x5864);

	if (t91 != 3684058001892458496LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5966 = INT16_MIN;
	uint16_t x5967 = 1391U;
	volatile int32_t t92 = 561485346;

	t92 = (((x5965<=x5966)|x5967)<<x5968);

	if (t92 != 1391) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x5973 = UINT32_MAX;
	int32_t x5974 = INT32_MIN;
	uint16_t x5975 = 883U;
	uint16_t x5976 = 3U;

	t93 = (((x5973<=x5974)|x5975)<<x5976);

	if (t93 != 7064) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x6061 = UINT16_MAX;
	uint16_t x6062 = 1745U;
	int16_t x6063 = 8;
	volatile int32_t t94 = -58;

	t94 = (((x6061<=x6062)|x6063)<<x6064);

	if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6089 = INT16_MIN;
	int8_t x6090 = -5;
	volatile uint32_t x6091 = UINT32_MAX;
	uint8_t x6092 = 0U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (((x6089<=x6090)|x6091)<<x6092);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x6145 = INT32_MAX;
	uint64_t x6146 = UINT64_MAX;
	int8_t x6147 = INT8_MAX;
	uint64_t x6148 = 2LLU;

	t96 = (((x6145<=x6146)|x6147)<<x6148);

	if (t96 != 508) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6174 = -1;
	uint64_t x6175 = 7100583176477LLU;
	uint8_t x6176 = 2U;

	t97 = (((x6173<=x6174)|x6175)<<x6176);

	if (t97 != 28402332705908LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x6309 = INT32_MAX;
	int64_t x6310 = INT64_MIN;
	int8_t x6311 = 62;
	volatile int32_t t98 = 0;

	t98 = (((x6309<=x6310)|x6311)<<x6312);

	if (t98 != 31744) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6449 = INT8_MIN;
	int8_t x6450 = INT8_MAX;
	int32_t x6451 = 22;
	volatile uint16_t x6452 = 1U;
	static int32_t t99 = -8801607;

	t99 = (((x6449<=x6450)|x6451)<<x6452);

	if (t99 != 46) { NG(); } else { ; }
	
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


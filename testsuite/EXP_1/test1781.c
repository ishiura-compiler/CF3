#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x25 = UINT16_MAX;
uint16_t x28 = 251U;
static volatile int16_t x31 = 0;
int32_t x32 = INT32_MAX;
int64_t x49 = -1LL;
int16_t x105 = INT16_MIN;
volatile uint16_t x106 = 46U;
int32_t t5 = -1017522673;
volatile int32_t t6 = 5;
uint32_t x173 = UINT32_MAX;
volatile int8_t x235 = 15;
volatile int32_t x263 = 3;
volatile int32_t x369 = INT32_MIN;
int16_t x372 = INT16_MAX;
int32_t t12 = 331;
volatile int32_t x406 = INT32_MAX;
int8_t x407 = 1;
volatile int64_t t14 = -53339070736502660LL;
static int8_t x441 = 1;
int64_t x483 = 0LL;
int64_t x542 = INT64_MAX;
int32_t x544 = INT32_MIN;
int16_t x598 = INT16_MIN;
static int32_t x635 = 11;
int16_t x639 = 1;
volatile int32_t t23 = 1352141;
volatile uint8_t x669 = 2U;
int8_t x730 = 0;
volatile uint8_t x743 = 1U;
volatile int32_t t28 = -47355;
uint32_t t30 = 17U;
static int8_t x1059 = 0;
static int32_t t32 = 221859;
static volatile int64_t x1084 = -2520LL;
int16_t x1274 = 1;
volatile int32_t t38 = INT32_MIN;
int32_t x1313 = 0;
volatile uint16_t x1315 = 0U;
volatile uint32_t x1329 = 233718385U;
static uint32_t x1331 = 2U;
volatile int32_t x1332 = INT32_MIN;
int32_t x1417 = INT32_MIN;
static uint8_t x1428 = UINT8_MAX;
static int32_t t44 = 20;
int32_t x1665 = INT32_MIN;
uint16_t x1667 = 2U;
int16_t x1673 = -3;
volatile uint32_t x1958 = UINT32_MAX;
int64_t x1960 = -1LL;
uint16_t x1977 = 48U;
uint64_t x1978 = UINT64_MAX;
uint8_t x1979 = 17U;
static int64_t x1980 = INT64_MIN;
uint16_t x2075 = 1U;
static uint64_t x2122 = 2457973473LLU;
uint64_t t58 = 198319153708610212LLU;
static int32_t x2205 = 130170;
volatile int16_t x2206 = INT16_MIN;
int64_t x2232 = INT64_MAX;
int8_t x2306 = 0;
int32_t t62 = INT32_MAX;
volatile uint32_t x2310 = UINT32_MAX;
static uint8_t x2311 = 0U;
int64_t x2318 = INT64_MAX;
volatile uint32_t x2645 = 1940238U;
int32_t x2648 = INT32_MIN;
volatile uint64_t x2673 = 19271376925LLU;
uint64_t x2682 = 1474480587984614395LLU;
int8_t x2692 = INT8_MIN;
uint16_t x2772 = 1635U;
int16_t x2788 = 0;
int8_t x2931 = 53;
volatile int32_t x2977 = INT32_MAX;
volatile uint16_t x2978 = 3461U;
int32_t x2986 = INT32_MIN;
int16_t x2987 = 18;
static volatile int8_t x3043 = 1;
int32_t x3060 = INT32_MIN;
int32_t t82 = INT32_MIN;
volatile int32_t t84 = -1826;
uint64_t x3213 = UINT64_MAX;
uint64_t x3274 = 483276435136315LLU;
int16_t x3377 = INT16_MIN;
int8_t x3382 = INT8_MAX;
volatile uint16_t x3383 = 30U;
static int8_t x3390 = INT8_MIN;
uint8_t x3603 = 4U;
volatile int16_t x3687 = 8;
int8_t x3689 = -52;
static uint16_t x3803 = 1U;
int16_t x3818 = -1;


void f0(void) {
	int8_t x26 = -1;
	int16_t x27 = 4;
	int32_t t0 = -54;

	t0 = (((x25&x26)>>x27)^x28);

	if (t0 != 3844) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x29 = -1;
	static volatile int8_t x30 = 0;
	int32_t t1 = INT32_MAX;

	t1 = (((x29&x30)>>x31)^x32);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x50 = 64U;
	int8_t x51 = 6;
	static int64_t x52 = INT64_MAX;
	volatile int64_t t2 = -330300897696600LL;

	t2 = (((x49&x50)>>x51)^x52);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x61 = 61;
	volatile uint64_t x62 = UINT64_MAX;
	static int8_t x63 = 24;
	volatile int16_t x64 = INT16_MIN;
	uint64_t t3 = 9LLU;

	t3 = (((x61&x62)>>x63)^x64);

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x107 = 5U;
	int32_t x108 = -1;
	volatile int32_t t4 = 143;

	t4 = (((x105&x106)>>x107)^x108);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = 2;
	int8_t x135 = 5;
	int16_t x136 = INT16_MAX;

	t5 = (((x133&x134)>>x135)^x136);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x161 = -1;
	int32_t x162 = INT32_MAX;
	int16_t x163 = 1;
	int8_t x164 = 1;

	t6 = (((x161&x162)>>x163)^x164);

	if (t6 != 1073741822) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = 7U;
	int8_t x176 = INT8_MIN;
	volatile uint32_t t7 = 240904U;

	t7 = (((x173&x174)>>x175)^x176);

	if (t7 != 4261412991U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x213 = 3U;
	int16_t x214 = -154;
	static volatile int64_t x215 = 3LL;
	int16_t x216 = INT16_MAX;
	static int32_t t8 = -2;

	t8 = (((x213&x214)>>x215)^x216);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = (((x233&x234)>>x235)^x236);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x261 = INT8_MIN;
	volatile uint8_t x262 = 4U;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t10 = 765034667;

	t10 = (((x261&x262)>>x263)^x264);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = -58;
	uint8_t x359 = 0U;
	int8_t x360 = -38;
	int64_t t11 = -16192187669LL;

	t11 = (((x357&x358)>>x359)^x360);

	if (t11 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x370 = UINT16_MAX;
	volatile uint16_t x371 = 1U;

	t12 = (((x369&x370)>>x371)^x372);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x405 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t13 = -123711;

	t13 = (((x405&x406)>>x407)^x408);

	if (t13 != -1073725568) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x417 = 0U;
	int64_t x418 = 3189630902601LL;
	uint8_t x419 = 5U;
	static int64_t x420 = -1LL;

	t14 = (((x417&x418)>>x419)^x420);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x442 = INT8_MIN;
	int8_t x443 = 1;
	volatile int64_t x444 = INT64_MIN;
	static int64_t t15 = INT64_MIN;

	t15 = (((x441&x442)>>x443)^x444);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x481 = 0U;
	int16_t x482 = INT16_MIN;
	uint32_t x484 = UINT32_MAX;
	uint32_t t16 = UINT32_MAX;

	t16 = (((x481&x482)>>x483)^x484);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x489 = INT16_MAX;
	int32_t x490 = -340885704;
	int8_t x491 = 1;
	volatile int32_t x492 = INT32_MAX;
	volatile int32_t t17 = 27;

	t17 = (((x489&x490)>>x491)^x492);

	if (t17 != 2147467363) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x541 = 13458LLU;
	uint32_t x543 = 0U;
	uint64_t t18 = 22LLU;

	t18 = (((x541&x542)>>x543)^x544);

	if (t18 != 18446744071562081426LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x597 = 35;
	int8_t x599 = 2;
	int16_t x600 = 1;
	volatile int32_t t19 = -6688232;

	t19 = (((x597&x598)>>x599)^x600);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x617 = 47U;
	uint16_t x618 = 9307U;
	volatile int16_t x619 = 0;
	int64_t x620 = 688729LL;
	int64_t t20 = -26121593899LL;

	t20 = (((x617&x618)>>x619)^x620);

	if (t20 != 688722LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x633 = 5778U;
	int64_t x634 = -1LL;
	int64_t x636 = INT64_MIN;
	int64_t t21 = 7991516652054432LL;

	t21 = (((x633&x634)>>x635)^x636);

	if (t21 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x637 = 56U;
	uint16_t x638 = 4745U;
	int16_t x640 = -1;
	volatile int32_t t22 = 67;

	t22 = (((x637&x638)>>x639)^x640);

	if (t22 != -5) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x641 = INT32_MIN;
	int32_t x642 = INT32_MAX;
	int8_t x643 = 3;
	uint16_t x644 = UINT16_MAX;

	t23 = (((x641&x642)>>x643)^x644);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x670 = -4;
	uint8_t x671 = 7U;
	static int64_t x672 = 393393119LL;
	static volatile int64_t t24 = 1042LL;

	t24 = (((x669&x670)>>x671)^x672);

	if (t24 != 393393119LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x729 = UINT64_MAX;
	static volatile int8_t x731 = 22;
	int16_t x732 = INT16_MIN;
	static uint64_t t25 = 1920244482532096202LLU;

	t25 = (((x729&x730)>>x731)^x732);

	if (t25 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x733 = -555921012561LL;
	static uint64_t x734 = UINT64_MAX;
	static volatile uint16_t x735 = 31U;
	int64_t x736 = INT64_MAX;
	volatile uint64_t t26 = 72133016185388822LLU;

	t26 = (((x733&x734)>>x735)^x736);

	if (t26 != 9223372028264841474LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x741 = 3124254577LLU;
	volatile int64_t x742 = INT64_MAX;
	volatile uint8_t x744 = 115U;
	uint64_t t27 = 8901LLU;

	t27 = (((x741&x742)>>x743)^x744);

	if (t27 != 1562127307LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x745 = 1;
	int32_t x746 = INT32_MAX;
	static uint16_t x747 = 13U;
	int16_t x748 = INT16_MIN;

	t28 = (((x745&x746)>>x747)^x748);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x833 = 343936LLU;
	int64_t x834 = INT64_MIN;
	volatile int8_t x835 = 2;
	static uint64_t x836 = UINT64_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (((x833&x834)>>x835)^x836);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x849 = INT8_MAX;
	static uint32_t x850 = UINT32_MAX;
	int8_t x851 = 8;
	int32_t x852 = -2;

	t30 = (((x849&x850)>>x851)^x852);

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x949 = INT8_MIN;
	int32_t x950 = INT32_MAX;
	uint16_t x951 = 5U;
	int64_t x952 = -1LL;
	volatile int64_t t31 = -2906036131LL;

	t31 = (((x949&x950)>>x951)^x952);

	if (t31 != -67108861LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1057 = -127;
	uint16_t x1058 = 56U;
	int16_t x1060 = 94;

	t32 = (((x1057&x1058)>>x1059)^x1060);

	if (t32 != 94) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1061 = -1981LL;
	int32_t x1062 = INT32_MAX;
	int16_t x1063 = 4;
	uint8_t x1064 = UINT8_MAX;
	int64_t t33 = 931078377174LL;

	t33 = (((x1061&x1062)>>x1063)^x1064);

	if (t33 != 134217595LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1081 = INT8_MIN;
	static int32_t x1082 = 781;
	volatile uint8_t x1083 = 1U;
	volatile int64_t t34 = -6152232550765970LL;

	t34 = (((x1081&x1082)>>x1083)^x1084);

	if (t34 != -2136LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1089 = INT32_MIN;
	volatile int32_t x1090 = INT32_MAX;
	volatile uint8_t x1091 = 8U;
	volatile int32_t x1092 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = (((x1089&x1090)>>x1091)^x1092);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1145 = INT32_MAX;
	uint8_t x1146 = 1U;
	static volatile uint8_t x1147 = 7U;
	int64_t x1148 = 305964119708037128LL;
	static int64_t t36 = 1055283005293790627LL;

	t36 = (((x1145&x1146)>>x1147)^x1148);

	if (t36 != 305964119708037128LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1205 = INT16_MAX;
	int8_t x1206 = -1;
	uint8_t x1207 = 27U;
	volatile int8_t x1208 = -1;
	int32_t t37 = 49016;

	t37 = (((x1205&x1206)>>x1207)^x1208);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1273 = INT8_MIN;
	int8_t x1275 = 0;
	int32_t x1276 = INT32_MIN;

	t38 = (((x1273&x1274)>>x1275)^x1276);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1314 = INT16_MAX;
	int16_t x1316 = -1735;
	volatile int32_t t39 = 5370;

	t39 = (((x1313&x1314)>>x1315)^x1316);

	if (t39 != -1735) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1330 = INT32_MIN;
	uint32_t t40 = 21U;

	t40 = (((x1329&x1330)>>x1331)^x1332);

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1385 = 56;
	int32_t x1386 = 56162;
	volatile int64_t x1387 = 3LL;
	int32_t x1388 = INT32_MIN;
	static int32_t t41 = 14150;

	t41 = (((x1385&x1386)>>x1387)^x1388);

	if (t41 != -2147483644) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1418 = UINT16_MAX;
	uint8_t x1419 = 2U;
	int8_t x1420 = -1;
	volatile int32_t t42 = 0;

	t42 = (((x1417&x1418)>>x1419)^x1420);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1425 = UINT32_MAX;
	int16_t x1426 = -669;
	volatile uint8_t x1427 = 3U;
	static uint32_t t43 = 131154048U;

	t43 = (((x1425&x1426)>>x1427)^x1428);

	if (t43 != 536870739U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1513 = -1;
	uint16_t x1514 = 219U;
	static uint16_t x1515 = 0U;
	uint8_t x1516 = UINT8_MAX;

	t44 = (((x1513&x1514)>>x1515)^x1516);

	if (t44 != 36) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1557 = -1;
	static uint8_t x1558 = 0U;
	volatile int16_t x1559 = 0;
	volatile uint64_t x1560 = 3509LLU;
	static volatile uint64_t t45 = 783LLU;

	t45 = (((x1557&x1558)>>x1559)^x1560);

	if (t45 != 3509LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1666 = INT16_MAX;
	static int32_t x1668 = -1;
	volatile int32_t t46 = -14092699;

	t46 = (((x1665&x1666)>>x1667)^x1668);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1674 = UINT16_MAX;
	uint32_t x1675 = 12U;
	volatile uint32_t x1676 = 532808U;
	volatile uint32_t t47 = 0U;

	t47 = (((x1673&x1674)>>x1675)^x1676);

	if (t47 != 532807U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1705 = INT32_MIN;
	uint64_t x1706 = UINT64_MAX;
	volatile uint64_t x1707 = 0LLU;
	static int16_t x1708 = INT16_MIN;
	uint64_t t48 = 1567893LLU;

	t48 = (((x1705&x1706)>>x1707)^x1708);

	if (t48 != 2147450880LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1717 = -1;
	static int16_t x1718 = 974;
	int32_t x1719 = 7;
	int8_t x1720 = INT8_MAX;
	static volatile int32_t t49 = -1;

	t49 = (((x1717&x1718)>>x1719)^x1720);

	if (t49 != 120) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1757 = UINT64_MAX;
	int16_t x1758 = INT16_MIN;
	uint16_t x1759 = 3U;
	static int32_t x1760 = INT32_MIN;
	uint64_t t50 = 42572LLU;

	t50 = (((x1757&x1758)>>x1759)^x1760);

	if (t50 != 16140901066643337216LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1765 = 3U;
	uint64_t x1766 = 2299753447332LLU;
	uint32_t x1767 = 4U;
	volatile int64_t x1768 = INT64_MIN;
	volatile uint64_t t51 = 255491605LLU;

	t51 = (((x1765&x1766)>>x1767)^x1768);

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1769 = INT16_MIN;
	uint8_t x1770 = UINT8_MAX;
	static int64_t x1771 = 1LL;
	int16_t x1772 = -11330;
	int32_t t52 = 374;

	t52 = (((x1769&x1770)>>x1771)^x1772);

	if (t52 != -11330) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1957 = INT64_MIN;
	static uint16_t x1959 = 54U;
	static int64_t t53 = -1457053280261862LL;

	t53 = (((x1957&x1958)>>x1959)^x1960);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t t54 = 65737879021520637LLU;

	t54 = (((x1977&x1978)>>x1979)^x1980);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2001 = 1U;
	uint64_t x2002 = 1923543LLU;
	int8_t x2003 = 0;
	uint64_t x2004 = 4404482659680LLU;
	uint64_t t55 = 1698620759374103LLU;

	t55 = (((x2001&x2002)>>x2003)^x2004);

	if (t55 != 4404482659681LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2069 = 2006LLU;
	volatile int32_t x2070 = 0;
	volatile uint8_t x2071 = 14U;
	volatile int32_t x2072 = INT32_MIN;
	static uint64_t t56 = 961189277946000543LLU;

	t56 = (((x2069&x2070)>>x2071)^x2072);

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2073 = 0;
	volatile int8_t x2074 = -11;
	int16_t x2076 = INT16_MIN;
	volatile int32_t t57 = 1734617;

	t57 = (((x2073&x2074)>>x2075)^x2076);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2121 = 48509601U;
	int16_t x2123 = 15;
	static volatile uint32_t x2124 = UINT32_MAX;

	t58 = (((x2121&x2122)>>x2123)^x2124);

	if (t58 != 4294966015LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2207 = 4LLU;
	uint32_t x2208 = UINT32_MAX;
	uint32_t t59 = 5U;

	t59 = (((x2205&x2206)>>x2207)^x2208);

	if (t59 != 4294961151U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2225 = 111U;
	volatile int16_t x2226 = INT16_MIN;
	uint8_t x2227 = 0U;
	int32_t x2228 = -833918;
	int32_t t60 = 0;

	t60 = (((x2225&x2226)>>x2227)^x2228);

	if (t60 != -833918) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2229 = UINT64_MAX;
	static int32_t x2230 = INT32_MAX;
	uint16_t x2231 = 7U;
	uint64_t t61 = 42353064151285842LLU;

	t61 = (((x2229&x2230)>>x2231)^x2232);

	if (t61 != 9223372036837998592LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2305 = INT8_MIN;
	uint8_t x2307 = 0U;
	int32_t x2308 = INT32_MAX;

	t62 = (((x2305&x2306)>>x2307)^x2308);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2309 = UINT32_MAX;
	int8_t x2312 = 25;
	volatile uint32_t t63 = 30208517U;

	t63 = (((x2309&x2310)>>x2311)^x2312);

	if (t63 != 4294967270U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2317 = 29LLU;
	int16_t x2319 = 0;
	int8_t x2320 = -1;
	volatile uint64_t t64 = 25164LLU;

	t64 = (((x2317&x2318)>>x2319)^x2320);

	if (t64 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2425 = 1U;
	static int8_t x2426 = -54;
	int16_t x2427 = 2;
	uint32_t x2428 = UINT32_MAX;
	static volatile uint32_t t65 = UINT32_MAX;

	t65 = (((x2425&x2426)>>x2427)^x2428);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2517 = -1;
	uint8_t x2518 = 1U;
	static uint32_t x2519 = 24U;
	uint16_t x2520 = 0U;
	int32_t t66 = 8;

	t66 = (((x2517&x2518)>>x2519)^x2520);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2537 = 39896LL;
	volatile uint64_t x2538 = 3249LLU;
	volatile uint16_t x2539 = 50U;
	int16_t x2540 = 8;
	uint64_t t67 = 8093479946502337LLU;

	t67 = (((x2537&x2538)>>x2539)^x2540);

	if (t67 != 8LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2605 = 664671391341344083LLU;
	int64_t x2606 = 3826147026LL;
	int8_t x2607 = 45;
	static volatile uint64_t x2608 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (((x2605&x2606)>>x2607)^x2608);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2646 = 891810678535LLU;
	uint8_t x2647 = 27U;
	volatile uint64_t t69 = 244831728083647850LLU;

	t69 = (((x2645&x2646)>>x2647)^x2648);

	if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2674 = UINT16_MAX;
	uint8_t x2675 = 0U;
	int8_t x2676 = INT8_MAX;
	volatile uint64_t t70 = 14722703448775LLU;

	t70 = (((x2673&x2674)>>x2675)^x2676);

	if (t70 != 57442LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2681 = 1025197776U;
	uint32_t x2683 = 15U;
	int32_t x2684 = INT32_MIN;
	uint64_t t71 = 141183590360258323LLU;

	t71 = (((x2681&x2682)>>x2683)^x2684);

	if (t71 != 18446744071562080784LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2689 = 13163139790LL;
	static uint16_t x2690 = 10770U;
	int8_t x2691 = 0;
	int64_t t72 = 0LL;

	t72 = (((x2689&x2690)>>x2691)^x2692);

	if (t72 != -638LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2737 = 58U;
	int32_t x2738 = INT32_MIN;
	uint32_t x2739 = 13U;
	volatile int64_t x2740 = INT64_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x2737&x2738)>>x2739)^x2740);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2761 = 101U;
	uint8_t x2762 = 11U;
	static int8_t x2763 = 0;
	static uint32_t x2764 = UINT32_MAX;
	volatile uint32_t t74 = 0U;

	t74 = (((x2761&x2762)>>x2763)^x2764);

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2769 = 8118;
	int32_t x2770 = -1;
	uint16_t x2771 = 9U;
	int32_t t75 = -32152695;

	t75 = (((x2769&x2770)>>x2771)^x2772);

	if (t75 != 1644) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2785 = 13060U;
	uint8_t x2786 = 12U;
	volatile uint8_t x2787 = 10U;
	static int32_t t76 = -399;

	t76 = (((x2785&x2786)>>x2787)^x2788);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2929 = 135292638362130935LL;
	int16_t x2930 = INT16_MAX;
	static int16_t x2932 = 4;
	volatile int64_t t77 = 16219372402383142LL;

	t77 = (((x2929&x2930)>>x2931)^x2932);

	if (t77 != 4LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2979 = 1U;
	int64_t x2980 = INT64_MIN;
	int64_t t78 = 4799127345194LL;

	t78 = (((x2977&x2978)>>x2979)^x2980);

	if (t78 != -9223372036854774078LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x2985 = 451;
	uint8_t x2988 = UINT8_MAX;
	static int32_t t79 = 1;

	t79 = (((x2985&x2986)>>x2987)^x2988);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x2989 = UINT16_MAX;
	int64_t x2990 = INT64_MIN;
	int8_t x2991 = 13;
	uint8_t x2992 = UINT8_MAX;
	volatile int64_t t80 = 12299425300427LL;

	t80 = (((x2989&x2990)>>x2991)^x2992);

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3041 = INT8_MIN;
	uint8_t x3042 = 0U;
	volatile int16_t x3044 = -1135;
	volatile int32_t t81 = 1426314;

	t81 = (((x3041&x3042)>>x3043)^x3044);

	if (t81 != -1135) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3057 = INT32_MIN;
	uint16_t x3058 = UINT16_MAX;
	static uint32_t x3059 = 0U;

	t82 = (((x3057&x3058)>>x3059)^x3060);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3081 = 47;
	volatile int64_t x3082 = 1309755368LL;
	uint8_t x3083 = 5U;
	uint32_t x3084 = 77347748U;
	int64_t t83 = 984LL;

	t83 = (((x3081&x3082)>>x3083)^x3084);

	if (t83 != 77347749LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3125 = 0;
	volatile uint8_t x3126 = 15U;
	uint16_t x3127 = 0U;
	int32_t x3128 = -1;

	t84 = (((x3125&x3126)>>x3127)^x3128);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x3157 = 77U;
	int8_t x3158 = -11;
	int8_t x3159 = 5;
	int32_t x3160 = INT32_MIN;
	volatile int32_t t85 = -6543;

	t85 = (((x3157&x3158)>>x3159)^x3160);

	if (t85 != -2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3214 = -1;
	volatile uint8_t x3215 = 39U;
	uint32_t x3216 = UINT32_MAX;
	static volatile uint64_t t86 = 6330LLU;

	t86 = (((x3213&x3214)>>x3215)^x3216);

	if (t86 != 4261412864LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3273 = UINT16_MAX;
	uint32_t x3275 = 19U;
	static int16_t x3276 = INT16_MAX;
	volatile uint64_t t87 = 574LLU;

	t87 = (((x3273&x3274)>>x3275)^x3276);

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x3378 = 117LLU;
	uint8_t x3379 = 2U;
	int8_t x3380 = -41;
	volatile uint64_t t88 = 96074LLU;

	t88 = (((x3377&x3378)>>x3379)^x3380);

	if (t88 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x3381 = 2499U;
	uint8_t x3384 = UINT8_MAX;
	static uint32_t t89 = 367U;

	t89 = (((x3381&x3382)>>x3383)^x3384);

	if (t89 != 255U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3389 = 114U;
	int8_t x3391 = 0;
	int16_t x3392 = INT16_MAX;
	int32_t t90 = -245086;

	t90 = (((x3389&x3390)>>x3391)^x3392);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3417 = 10U;
	int16_t x3418 = 679;
	int8_t x3419 = 4;
	int32_t x3420 = 389728;
	volatile int32_t t91 = -10604869;

	t91 = (((x3417&x3418)>>x3419)^x3420);

	if (t91 != 389728) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3425 = INT64_MAX;
	volatile int8_t x3426 = INT8_MIN;
	uint32_t x3427 = 1U;
	volatile int64_t x3428 = INT64_MIN;
	volatile int64_t t92 = 8LL;

	t92 = (((x3425&x3426)>>x3427)^x3428);

	if (t92 != -4611686018427387968LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3561 = UINT8_MAX;
	int32_t x3562 = 544;
	static uint16_t x3563 = 27U;
	uint64_t x3564 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (((x3561&x3562)>>x3563)^x3564);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3597 = 136;
	volatile uint64_t x3598 = UINT64_MAX;
	uint32_t x3599 = 1U;
	int64_t x3600 = -1974542295609333LL;
	static volatile uint64_t t94 = 1077590558722527007LLU;

	t94 = (((x3597&x3598)>>x3599)^x3600);

	if (t94 != 18444769531413942351LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3601 = INT64_MIN;
	uint16_t x3602 = UINT16_MAX;
	int64_t x3604 = INT64_MIN;
	static volatile int64_t t95 = INT64_MIN;

	t95 = (((x3601&x3602)>>x3603)^x3604);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x3685 = INT64_MAX;
	volatile int16_t x3686 = 272;
	int32_t x3688 = 13426600;
	int64_t t96 = -946358697296359319LL;

	t96 = (((x3685&x3686)>>x3687)^x3688);

	if (t96 != 13426601LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3690 = 4159156933148147LL;
	static volatile uint8_t x3691 = 0U;
	uint64_t x3692 = 1674646883LLU;
	uint64_t t97 = 3580458006559409LLU;

	t97 = (((x3689&x3690)>>x3691)^x3692);

	if (t97 != 4159157414504611LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3801 = 2;
	int16_t x3802 = -337;
	uint16_t x3804 = 0U;
	volatile int32_t t98 = 1;

	t98 = (((x3801&x3802)>>x3803)^x3804);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3817 = 61U;
	int8_t x3819 = 0;
	int64_t x3820 = INT64_MIN;
	static int64_t t99 = -9390193LL;

	t99 = (((x3817&x3818)>>x3819)^x3820);

	if (t99 != -9223372036854775747LL) { NG(); } else { ; }
	
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


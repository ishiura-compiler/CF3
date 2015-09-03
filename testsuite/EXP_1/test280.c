#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x211 = UINT32_MAX;
volatile int32_t t1 = 52;
int16_t x231 = INT16_MIN;
static int16_t x266 = INT16_MAX;
int16_t x267 = INT16_MIN;
uint32_t x410 = 20060402U;
volatile int32_t t4 = -109836;
int64_t x449 = -1LL;
uint64_t x450 = UINT64_MAX;
uint16_t x496 = 1U;
int16_t x537 = -1;
static uint8_t x538 = 30U;
uint32_t x540 = 29U;
int64_t x581 = -1LL;
int32_t t8 = -403002641;
volatile int32_t t9 = -3229154;
int16_t x649 = -1;
int32_t x667 = INT32_MIN;
int32_t t12 = -1;
int32_t x686 = INT32_MIN;
static uint8_t x688 = 3U;
static volatile int32_t t18 = 32467277;
uint16_t x1069 = 2666U;
int16_t x1072 = 3;
uint32_t x1097 = 2313U;
uint32_t x1106 = 24U;
volatile uint32_t x1108 = 1U;
int16_t x1125 = -8469;
int16_t x1142 = INT16_MIN;
static int32_t t26 = -819;
static uint16_t x1314 = 0U;
uint8_t x1376 = 22U;
static volatile int32_t t33 = -448908496;
static uint8_t x1448 = 1U;
static int32_t t35 = 203860285;
int32_t t36 = 23617486;
int16_t x1632 = 2;
int32_t x1797 = INT32_MIN;
volatile int8_t x1844 = 6;
int32_t t43 = 1116;
uint8_t x1854 = UINT8_MAX;
int16_t x1897 = 8;
volatile int32_t t45 = -4573011;
int32_t t46 = 4;
uint8_t x1912 = 10U;
int16_t x1968 = 1;
volatile int32_t t49 = 293473293;
uint16_t x1983 = 905U;
int8_t x1984 = 11;
int16_t x1993 = -473;
int8_t x2032 = 29;
int32_t t55 = 1046299968;
int32_t x2062 = INT32_MIN;
volatile uint8_t x2064 = 16U;
static uint8_t x2085 = 3U;
static uint16_t x2097 = 3970U;
volatile int32_t t60 = 111327;
uint16_t x2170 = 1U;
int64_t x2171 = INT64_MIN;
uint8_t x2172 = 2U;
int32_t t62 = 44585911;
static uint32_t x2317 = 265239U;
int64_t x2318 = -859314274LL;
int8_t x2425 = INT8_MIN;
int8_t x2480 = 9;
uint64_t x2521 = 20LLU;
int16_t x2522 = INT16_MIN;
uint16_t x2600 = 0U;
static int8_t x2626 = INT8_MIN;
int16_t x2653 = -2046;
int64_t x2654 = INT64_MIN;
int16_t x2656 = 10;
int32_t t78 = -1951;
volatile int32_t t79 = -1564605;
int8_t x2721 = -1;
uint16_t x2724 = 19U;
volatile int32_t t80 = 33;
volatile int32_t t81 = 258812;
int16_t x2847 = 2;
int16_t x2848 = 21;
volatile int32_t t82 = 180140;
volatile uint8_t x2931 = 0U;
uint16_t x2932 = 0U;
int32_t t86 = 7677522;
static volatile int8_t x3094 = 1;
static int32_t t88 = -152733;
int32_t t90 = -24296;
int32_t x3185 = -6;
uint32_t x3222 = 26759U;
int8_t x3330 = INT8_MAX;
static int32_t x3331 = -23778467;
int16_t x3332 = 7;
static int32_t x3383 = -674610375;
volatile uint32_t x3384 = 3U;
volatile int32_t t94 = 52;
int8_t x3405 = -1;
volatile uint32_t x3407 = 2578734U;
volatile uint16_t x3464 = 12U;
static volatile uint8_t x3465 = 0U;
volatile int32_t t98 = -396811;
uint8_t x3481 = 3U;
volatile int8_t x3484 = 0;


void f0(void) {
	static int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	static int8_t x199 = -1;
	int8_t x200 = 15;
	int32_t t0 = -238329;

	t0 = (((x197-x198)<x199)>>x200);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x209 = 33472165749564LL;
	int16_t x210 = INT16_MAX;
	int64_t x212 = 5LL;

	t1 = (((x209-x210)<x211)>>x212);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x229 = -23;
	int16_t x230 = -1;
	volatile uint8_t x232 = 0U;
	int32_t t2 = -3;

	t2 = (((x229-x230)<x231)>>x232);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x265 = INT64_MAX;
	volatile uint8_t x268 = 11U;
	volatile int32_t t3 = -16;

	t3 = (((x265-x266)<x267)>>x268);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x409 = 16LLU;
	int8_t x411 = 3;
	uint32_t x412 = 7U;

	t4 = (((x409-x410)<x411)>>x412);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x451 = 25684855;
	int16_t x452 = 1;
	volatile int32_t t5 = 34;

	t5 = (((x449-x450)<x451)>>x452);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x493 = UINT16_MAX;
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = INT8_MAX;
	volatile int32_t t6 = 24466530;

	t6 = (((x493-x494)<x495)>>x496);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x539 = -19618LL;
	volatile int32_t t7 = 6369564;

	t7 = (((x537-x538)<x539)>>x540);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x582 = INT8_MIN;
	uint32_t x583 = UINT32_MAX;
	int8_t x584 = 1;

	t8 = (((x581-x582)<x583)>>x584);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x641 = INT8_MIN;
	int64_t x642 = -1LL;
	int32_t x643 = INT32_MIN;
	static uint8_t x644 = 2U;

	t9 = (((x641-x642)<x643)>>x644);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x645 = -1;
	volatile uint32_t x646 = 20U;
	static int32_t x647 = INT32_MIN;
	static uint16_t x648 = 0U;
	volatile int32_t t10 = 12802;

	t10 = (((x645-x646)<x647)>>x648);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x650 = 6U;
	volatile int16_t x651 = INT16_MIN;
	int8_t x652 = 1;
	volatile int32_t t11 = 180052495;

	t11 = (((x649-x650)<x651)>>x652);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x665 = 1U;
	volatile int32_t x666 = 1088;
	int8_t x668 = 26;

	t12 = (((x665-x666)<x667)>>x668);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x685 = 3035505U;
	volatile int64_t x687 = -1LL;
	volatile int32_t t13 = -3;

	t13 = (((x685-x686)<x687)>>x688);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x705 = INT8_MAX;
	int8_t x706 = INT8_MAX;
	static volatile int32_t x707 = -37;
	uint8_t x708 = 1U;
	volatile int32_t t14 = -168768;

	t14 = (((x705-x706)<x707)>>x708);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x713 = 0;
	static int8_t x714 = INT8_MAX;
	int8_t x715 = INT8_MIN;
	uint8_t x716 = 1U;
	volatile int32_t t15 = 4016;

	t15 = (((x713-x714)<x715)>>x716);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x733 = 1;
	int32_t x734 = -13;
	uint16_t x735 = 0U;
	uint32_t x736 = 2U;
	volatile int32_t t16 = 15048719;

	t16 = (((x733-x734)<x735)>>x736);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x769 = INT16_MIN;
	static int32_t x770 = INT32_MIN;
	int32_t x771 = INT32_MIN;
	uint8_t x772 = 27U;
	int32_t t17 = 8262556;

	t17 = (((x769-x770)<x771)>>x772);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x821 = -1;
	volatile uint16_t x822 = 1478U;
	static int8_t x823 = INT8_MIN;
	int16_t x824 = 0;

	t18 = (((x821-x822)<x823)>>x824);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x825 = INT8_MAX;
	static uint32_t x826 = 11528749U;
	int64_t x827 = INT64_MIN;
	int8_t x828 = 0;
	int32_t t19 = -11825928;

	t19 = (((x825-x826)<x827)>>x828);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x881 = -1;
	volatile int64_t x882 = INT64_MAX;
	static uint16_t x883 = 1U;
	int32_t x884 = 19;
	volatile int32_t t20 = 132616;

	t20 = (((x881-x882)<x883)>>x884);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1021 = UINT64_MAX;
	static int8_t x1022 = -7;
	int64_t x1023 = -1LL;
	uint16_t x1024 = 5U;
	static volatile int32_t t21 = -2340;

	t21 = (((x1021-x1022)<x1023)>>x1024);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1070 = -72;
	int8_t x1071 = INT8_MIN;
	volatile int32_t t22 = -10409567;

	t22 = (((x1069-x1070)<x1071)>>x1072);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1098 = INT16_MIN;
	int64_t x1099 = -1LL;
	uint8_t x1100 = 0U;
	volatile int32_t t23 = -13387;

	t23 = (((x1097-x1098)<x1099)>>x1100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1105 = UINT8_MAX;
	int64_t x1107 = INT64_MIN;
	volatile int32_t t24 = -57;

	t24 = (((x1105-x1106)<x1107)>>x1108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1126 = INT8_MAX;
	uint16_t x1127 = 44U;
	uint8_t x1128 = 1U;
	volatile int32_t t25 = 2060;

	t25 = (((x1125-x1126)<x1127)>>x1128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1141 = UINT32_MAX;
	int64_t x1143 = -1LL;
	static uint8_t x1144 = 4U;

	t26 = (((x1141-x1142)<x1143)>>x1144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1185 = INT16_MIN;
	int8_t x1186 = INT8_MIN;
	uint64_t x1187 = 1630741079LLU;
	uint8_t x1188 = 1U;
	volatile int32_t t27 = 2;

	t27 = (((x1185-x1186)<x1187)>>x1188);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1201 = INT16_MIN;
	static uint64_t x1202 = UINT64_MAX;
	static uint64_t x1203 = 0LLU;
	int8_t x1204 = 3;
	volatile int32_t t28 = -540734640;

	t28 = (((x1201-x1202)<x1203)>>x1204);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1209 = 63U;
	uint32_t x1210 = 48U;
	int8_t x1211 = INT8_MAX;
	volatile uint8_t x1212 = 15U;
	static int32_t t29 = -63;

	t29 = (((x1209-x1210)<x1211)>>x1212);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1245 = -1;
	static volatile int64_t x1246 = INT64_MAX;
	static int64_t x1247 = -1LL;
	static uint8_t x1248 = 18U;
	volatile int32_t t30 = 0;

	t30 = (((x1245-x1246)<x1247)>>x1248);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1313 = UINT8_MAX;
	static volatile int16_t x1315 = -1;
	int16_t x1316 = 1;
	static int32_t t31 = 2551;

	t31 = (((x1313-x1314)<x1315)>>x1316);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1373 = -1;
	uint64_t x1374 = 49LLU;
	uint8_t x1375 = 11U;
	volatile int32_t t32 = -10;

	t32 = (((x1373-x1374)<x1375)>>x1376);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1381 = INT32_MIN;
	int32_t x1382 = INT32_MIN;
	int64_t x1383 = INT64_MIN;
	volatile uint32_t x1384 = 26U;

	t33 = (((x1381-x1382)<x1383)>>x1384);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1445 = -1;
	int16_t x1446 = -710;
	int8_t x1447 = INT8_MAX;
	volatile int32_t t34 = -24167834;

	t34 = (((x1445-x1446)<x1447)>>x1448);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1457 = INT16_MIN;
	volatile uint16_t x1458 = 19U;
	static volatile int8_t x1459 = 1;
	int16_t x1460 = 1;

	t35 = (((x1457-x1458)<x1459)>>x1460);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1513 = 0U;
	uint64_t x1514 = 98632459254685LLU;
	int64_t x1515 = 3574342332408LL;
	uint8_t x1516 = 6U;

	t36 = (((x1513-x1514)<x1515)>>x1516);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1545 = 7145430;
	uint8_t x1546 = UINT8_MAX;
	int64_t x1547 = INT64_MIN;
	int16_t x1548 = 10;
	int32_t t37 = 3;

	t37 = (((x1545-x1546)<x1547)>>x1548);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1629 = INT8_MAX;
	static volatile uint8_t x1630 = 93U;
	static int8_t x1631 = -8;
	volatile int32_t t38 = 0;

	t38 = (((x1629-x1630)<x1631)>>x1632);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1789 = INT16_MIN;
	volatile uint32_t x1790 = UINT32_MAX;
	static int8_t x1791 = 0;
	static int8_t x1792 = 3;
	volatile int32_t t39 = -83946758;

	t39 = (((x1789-x1790)<x1791)>>x1792);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x1798 = UINT64_MAX;
	int64_t x1799 = -1LL;
	static volatile uint8_t x1800 = 9U;
	static volatile int32_t t40 = 48520;

	t40 = (((x1797-x1798)<x1799)>>x1800);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1829 = -1;
	int8_t x1830 = -1;
	int32_t x1831 = INT32_MIN;
	static uint16_t x1832 = 5U;
	volatile int32_t t41 = -1;

	t41 = (((x1829-x1830)<x1831)>>x1832);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1841 = 69875358;
	int64_t x1842 = -1LL;
	uint64_t x1843 = 7584524129824LLU;
	int32_t t42 = 51;

	t42 = (((x1841-x1842)<x1843)>>x1844);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1849 = 7U;
	int8_t x1850 = INT8_MAX;
	volatile int8_t x1851 = 1;
	uint32_t x1852 = 7U;

	t43 = (((x1849-x1850)<x1851)>>x1852);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1853 = INT64_MAX;
	static int8_t x1855 = -1;
	uint16_t x1856 = 1U;
	volatile int32_t t44 = 38775067;

	t44 = (((x1853-x1854)<x1855)>>x1856);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1898 = 6750520LLU;
	int64_t x1899 = INT64_MIN;
	int16_t x1900 = 3;

	t45 = (((x1897-x1898)<x1899)>>x1900);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x1901 = INT32_MIN;
	volatile uint64_t x1902 = UINT64_MAX;
	int8_t x1903 = INT8_MAX;
	uint8_t x1904 = 1U;

	t46 = (((x1901-x1902)<x1903)>>x1904);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1909 = -1;
	uint16_t x1910 = UINT16_MAX;
	int64_t x1911 = -639LL;
	static int32_t t47 = -89967;

	t47 = (((x1909-x1910)<x1911)>>x1912);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1925 = INT32_MAX;
	int32_t x1926 = 1;
	int64_t x1927 = 1725983LL;
	int8_t x1928 = 6;
	int32_t t48 = 1224;

	t48 = (((x1925-x1926)<x1927)>>x1928);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1965 = -252;
	static uint8_t x1966 = 11U;
	static int16_t x1967 = -1;

	t49 = (((x1965-x1966)<x1967)>>x1968);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1981 = -4714;
	volatile int8_t x1982 = -1;
	volatile int32_t t50 = 887264694;

	t50 = (((x1981-x1982)<x1983)>>x1984);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1994 = -1734;
	int64_t x1995 = -1LL;
	int64_t x1996 = 3LL;
	int32_t t51 = -14990205;

	t51 = (((x1993-x1994)<x1995)>>x1996);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2021 = INT16_MAX;
	static int8_t x2022 = -1;
	int64_t x2023 = INT64_MIN;
	uint8_t x2024 = 6U;
	volatile int32_t t52 = -190;

	t52 = (((x2021-x2022)<x2023)>>x2024);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2025 = -29;
	volatile uint32_t x2026 = 1U;
	int64_t x2027 = INT64_MIN;
	int16_t x2028 = 1;
	volatile int32_t t53 = 246947;

	t53 = (((x2025-x2026)<x2027)>>x2028);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2029 = INT64_MIN;
	volatile int8_t x2030 = -40;
	static int8_t x2031 = INT8_MIN;
	volatile int32_t t54 = -12261;

	t54 = (((x2029-x2030)<x2031)>>x2032);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2045 = INT32_MAX;
	int8_t x2046 = 1;
	uint64_t x2047 = 47630330110864LLU;
	volatile uint32_t x2048 = 6U;

	t55 = (((x2045-x2046)<x2047)>>x2048);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x2049 = INT64_MAX;
	static int32_t x2050 = INT32_MAX;
	int16_t x2051 = -10;
	uint8_t x2052 = 1U;
	volatile int32_t t56 = 55025337;

	t56 = (((x2049-x2050)<x2051)>>x2052);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2061 = -75394;
	int64_t x2063 = INT64_MAX;
	int32_t t57 = 110526;

	t57 = (((x2061-x2062)<x2063)>>x2064);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2069 = INT16_MIN;
	uint8_t x2070 = UINT8_MAX;
	static uint64_t x2071 = 28228940974147889LLU;
	uint32_t x2072 = 2U;
	volatile int32_t t58 = -24645687;

	t58 = (((x2069-x2070)<x2071)>>x2072);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2086 = 2;
	static int32_t x2087 = INT32_MAX;
	static uint8_t x2088 = 0U;
	volatile int32_t t59 = -15815248;

	t59 = (((x2085-x2086)<x2087)>>x2088);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2098 = -51;
	static int64_t x2099 = INT64_MIN;
	static uint8_t x2100 = 4U;

	t60 = (((x2097-x2098)<x2099)>>x2100);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x2149 = UINT16_MAX;
	static int8_t x2150 = -1;
	static int64_t x2151 = INT64_MIN;
	volatile int16_t x2152 = 30;
	volatile int32_t t61 = 0;

	t61 = (((x2149-x2150)<x2151)>>x2152);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2169 = 5;

	t62 = (((x2169-x2170)<x2171)>>x2172);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2205 = 3121;
	int8_t x2206 = INT8_MAX;
	static uint64_t x2207 = 8083LLU;
	static volatile uint16_t x2208 = 1U;
	static volatile int32_t t63 = 2;

	t63 = (((x2205-x2206)<x2207)>>x2208);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2245 = -1;
	int8_t x2246 = 3;
	volatile uint64_t x2247 = 440478433107670LLU;
	uint16_t x2248 = 31U;
	int32_t t64 = 221;

	t64 = (((x2245-x2246)<x2247)>>x2248);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x2319 = 16473161U;
	static uint8_t x2320 = 1U;
	volatile int32_t t65 = 66584;

	t65 = (((x2317-x2318)<x2319)>>x2320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2357 = -1;
	uint8_t x2358 = 0U;
	int32_t x2359 = -1;
	int32_t x2360 = 1;
	static volatile int32_t t66 = -1473309;

	t66 = (((x2357-x2358)<x2359)>>x2360);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2426 = -96;
	volatile uint16_t x2427 = 12523U;
	static int8_t x2428 = 1;
	int32_t t67 = 101670;

	t67 = (((x2425-x2426)<x2427)>>x2428);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2433 = INT16_MAX;
	static int8_t x2434 = INT8_MIN;
	uint32_t x2435 = 5958U;
	int8_t x2436 = 24;
	int32_t t68 = -3;

	t68 = (((x2433-x2434)<x2435)>>x2436);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2469 = INT8_MAX;
	int8_t x2470 = 3;
	static int64_t x2471 = -57232402063LL;
	int8_t x2472 = 1;
	volatile int32_t t69 = 0;

	t69 = (((x2469-x2470)<x2471)>>x2472);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2477 = 342;
	int64_t x2478 = -476LL;
	static volatile int32_t x2479 = 291;
	volatile int32_t t70 = 2311110;

	t70 = (((x2477-x2478)<x2479)>>x2480);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2523 = 78U;
	uint16_t x2524 = 0U;
	static int32_t t71 = 1599345;

	t71 = (((x2521-x2522)<x2523)>>x2524);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2537 = UINT64_MAX;
	int8_t x2538 = -1;
	volatile int16_t x2539 = INT16_MAX;
	int8_t x2540 = 2;
	static int32_t t72 = 38837621;

	t72 = (((x2537-x2538)<x2539)>>x2540);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2597 = INT16_MIN;
	int16_t x2598 = INT16_MIN;
	int16_t x2599 = -1;
	volatile int32_t t73 = -1;

	t73 = (((x2597-x2598)<x2599)>>x2600);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2601 = 68573983447386LLU;
	int32_t x2602 = -1;
	volatile int32_t x2603 = INT32_MIN;
	int64_t x2604 = 0LL;
	static volatile int32_t t74 = 803454135;

	t74 = (((x2601-x2602)<x2603)>>x2604);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2625 = INT64_MIN;
	static uint64_t x2627 = UINT64_MAX;
	int16_t x2628 = 1;
	static volatile int32_t t75 = -3070;

	t75 = (((x2625-x2626)<x2627)>>x2628);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2655 = 28;
	volatile int32_t t76 = 395;

	t76 = (((x2653-x2654)<x2655)>>x2656);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2657 = 3837642;
	volatile uint16_t x2658 = UINT16_MAX;
	static int16_t x2659 = INT16_MIN;
	volatile uint8_t x2660 = 5U;
	volatile int32_t t77 = -6473030;

	t77 = (((x2657-x2658)<x2659)>>x2660);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2665 = -1LL;
	static int64_t x2666 = INT64_MIN;
	int64_t x2667 = -55232658LL;
	int8_t x2668 = 0;

	t78 = (((x2665-x2666)<x2667)>>x2668);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2713 = -7;
	volatile uint16_t x2714 = UINT16_MAX;
	int16_t x2715 = INT16_MAX;
	uint32_t x2716 = 10U;

	t79 = (((x2713-x2714)<x2715)>>x2716);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2722 = -5;
	int16_t x2723 = INT16_MAX;

	t80 = (((x2721-x2722)<x2723)>>x2724);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x2761 = 1U;
	uint8_t x2762 = UINT8_MAX;
	static volatile uint8_t x2763 = UINT8_MAX;
	static uint8_t x2764 = 1U;

	t81 = (((x2761-x2762)<x2763)>>x2764);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2845 = -4;
	int16_t x2846 = 1;

	t82 = (((x2845-x2846)<x2847)>>x2848);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2901 = -1;
	int32_t x2902 = -496550642;
	volatile int8_t x2903 = INT8_MAX;
	uint32_t x2904 = 2U;
	int32_t t83 = 16519404;

	t83 = (((x2901-x2902)<x2903)>>x2904);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2909 = UINT8_MAX;
	static uint16_t x2910 = UINT16_MAX;
	uint64_t x2911 = 3960291014498973LLU;
	volatile uint8_t x2912 = 7U;
	int32_t t84 = 2166;

	t84 = (((x2909-x2910)<x2911)>>x2912);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2929 = -13;
	int32_t x2930 = INT32_MIN;
	volatile int32_t t85 = -5332;

	t85 = (((x2929-x2930)<x2931)>>x2932);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2941 = 2U;
	static uint64_t x2942 = 34690LLU;
	uint32_t x2943 = 7U;
	uint8_t x2944 = 0U;

	t86 = (((x2941-x2942)<x2943)>>x2944);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3093 = -1LL;
	static int64_t x3095 = INT64_MAX;
	int32_t x3096 = 2;
	int32_t t87 = 83;

	t87 = (((x3093-x3094)<x3095)>>x3096);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x3161 = INT8_MAX;
	uint64_t x3162 = 15151887LLU;
	static volatile int8_t x3163 = 57;
	int8_t x3164 = 0;

	t88 = (((x3161-x3162)<x3163)>>x3164);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3165 = -18;
	volatile int16_t x3166 = 6;
	int64_t x3167 = INT64_MIN;
	int64_t x3168 = 1LL;
	volatile int32_t t89 = -1;

	t89 = (((x3165-x3166)<x3167)>>x3168);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3181 = -1;
	int16_t x3182 = 0;
	int32_t x3183 = 56592928;
	int16_t x3184 = 1;

	t90 = (((x3181-x3182)<x3183)>>x3184);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x3186 = -1;
	static int32_t x3187 = INT32_MAX;
	uint8_t x3188 = 7U;
	int32_t t91 = 1804866;

	t91 = (((x3185-x3186)<x3187)>>x3188);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3221 = INT32_MAX;
	volatile int8_t x3223 = 1;
	static uint32_t x3224 = 4U;
	volatile int32_t t92 = -245;

	t92 = (((x3221-x3222)<x3223)>>x3224);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3329 = -1;
	static int32_t t93 = -27;

	t93 = (((x3329-x3330)<x3331)>>x3332);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3381 = 1LL;
	int16_t x3382 = -1;

	t94 = (((x3381-x3382)<x3383)>>x3384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3393 = INT8_MIN;
	int32_t x3394 = INT32_MIN;
	volatile uint8_t x3395 = 18U;
	uint8_t x3396 = 1U;
	static int32_t t95 = 565689;

	t95 = (((x3393-x3394)<x3395)>>x3396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3406 = INT64_MAX;
	uint8_t x3408 = 13U;
	static volatile int32_t t96 = 223442466;

	t96 = (((x3405-x3406)<x3407)>>x3408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3461 = INT64_MIN;
	static volatile int64_t x3462 = INT64_MIN;
	uint16_t x3463 = 68U;
	volatile int32_t t97 = 75581676;

	t97 = (((x3461-x3462)<x3463)>>x3464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3466 = -952164646927729325LL;
	static volatile int16_t x3467 = INT16_MIN;
	uint32_t x3468 = 6U;

	t98 = (((x3465-x3466)<x3467)>>x3468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3482 = 1686556173720197LLU;
	static int64_t x3483 = INT64_MAX;
	volatile int32_t t99 = 57897;

	t99 = (((x3481-x3482)<x3483)>>x3484);

	if (t99 != 0) { NG(); } else { ; }
	
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


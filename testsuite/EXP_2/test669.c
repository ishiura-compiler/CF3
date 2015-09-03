#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -2LL;
int8_t x143 = -1;
uint16_t x352 = 3U;
uint64_t x390 = UINT64_MAX;
uint16_t x424 = 3U;
uint64_t x451 = 148623895031LLU;
int8_t x452 = 1;
uint8_t x472 = 5U;
uint64_t t12 = 25862570LLU;
volatile uint32_t x550 = 14127586U;
volatile int64_t x569 = 26401985431LL;
volatile uint64_t x689 = 21LLU;
volatile int8_t x853 = INT8_MIN;
int32_t x929 = -27343;
static uint8_t x972 = 0U;
volatile uint8_t x1052 = 2U;
uint16_t x1182 = 2U;
static int32_t x1183 = 83;
static volatile uint16_t x1191 = UINT16_MAX;
volatile int8_t x1203 = -4;
int32_t t26 = 73481758;
volatile uint32_t t27 = 207U;
int8_t x1257 = -5;
volatile int32_t t30 = 312234715;
volatile uint32_t t31 = 64U;
static uint32_t x1451 = UINT32_MAX;
int32_t x1503 = INT32_MIN;
int32_t x1603 = INT32_MIN;
static uint16_t x1604 = 0U;
static volatile int32_t x1659 = -1;
uint32_t x1665 = UINT32_MAX;
uint32_t x1701 = 2143696341U;
volatile int64_t x1759 = -130099LL;
int32_t x1778 = INT32_MAX;
int32_t t42 = -3496050;
static volatile int16_t x1782 = -29;
static uint32_t t43 = 81638584U;
static uint32_t x1825 = 85014U;
uint8_t x1827 = 13U;
uint32_t x1828 = 12U;
int8_t x1864 = 0;
volatile int32_t t45 = -139157;
static uint64_t x1907 = 261954203054019LLU;
uint32_t x1908 = 5U;
volatile uint64_t t46 = 494088317031672LLU;
uint16_t x1932 = 53U;
int32_t t50 = 83002258;
int64_t x1967 = -1LL;
static int64_t t51 = -134LL;
static uint32_t x2111 = 12813938U;
volatile uint64_t t52 = 486636766239LLU;
volatile int32_t x2237 = INT32_MAX;
uint64_t x2240 = 6LLU;
uint64_t x2275 = UINT64_MAX;
int64_t x2395 = INT64_MAX;
uint8_t x2481 = UINT8_MAX;
uint8_t x2561 = 7U;
int8_t x2564 = 7;
int16_t x2673 = INT16_MAX;
uint64_t x2831 = 338823LLU;
static uint64_t x2881 = 1368031643LLU;
static int8_t x2882 = 1;
uint64_t t68 = 2997634LLU;
volatile int32_t t69 = -722110066;
volatile uint16_t x2965 = 116U;
volatile int32_t t70 = -510;
uint32_t x3077 = 741220899U;
int8_t x3079 = -1;
static volatile int32_t x3105 = INT32_MIN;
static volatile int16_t x3108 = 23;
int64_t x3131 = 131833811197LL;
volatile int64_t x3171 = INT64_MAX;
volatile int8_t x3172 = 27;
uint64_t x3290 = 191120LLU;
uint16_t x3400 = 59U;
int32_t x3563 = INT32_MIN;
volatile uint32_t t81 = 29046043U;
uint16_t x3852 = 1U;
volatile uint64_t x4003 = UINT64_MAX;
int32_t x4105 = INT32_MAX;
static int16_t x4225 = -1;
uint16_t x4228 = 5U;
int32_t x4328 = 1;
static int16_t x4614 = INT16_MIN;
static uint64_t x4772 = 31LLU;
static int8_t x4794 = -3;
static volatile int32_t x4801 = INT32_MIN;
int8_t x4834 = 0;
volatile uint64_t t98 = 0LLU;


void f0(void) {
	static volatile int32_t x25 = 0;
	uint16_t x26 = 1U;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 25U;

	t0 = ((x25^(x26/x27))<<x28);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x133 = INT16_MIN;
	static volatile uint16_t x134 = 25U;
	static uint64_t x135 = 924534886945602LLU;
	volatile int8_t x136 = 0;
	volatile uint64_t t1 = 153338011756799289LLU;

	t1 = ((x133^(x134/x135))<<x136);

	if (t1 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x141 = UINT64_MAX;
	int8_t x142 = 0;
	int32_t x144 = 0;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x141^(x142/x143))<<x144);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	int32_t x208 = 14;
	volatile uint64_t t3 = 8359740304718LLU;

	t3 = ((x205^(x206/x207))<<x208);

	if (t3 != 536838144LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = UINT32_MAX;
	static uint64_t x279 = 6650897211459198LLU;
	uint8_t x280 = 12U;
	uint64_t t4 = 5491858179207LLU;

	t4 = ((x277^(x278/x279))<<x280);

	if (t4 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x293 = -1;
	uint16_t x294 = 6U;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t x296 = 1LLU;
	volatile uint64_t t5 = 529090299774235658LLU;

	t5 = ((x293^(x294/x295))<<x296);

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x349 = INT8_MIN;
	volatile uint64_t x350 = 4057464LLU;
	int16_t x351 = 7;
	volatile uint64_t t6 = 43407741096LLU;

	t6 = ((x349^(x350/x351))<<x352);

	if (t6 != 18446744073704914344LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = 6733527025LLU;
	int32_t x364 = 0;
	uint64_t t7 = 409513040829531LLU;

	t7 = ((x361^(x362/x363))<<x364);

	if (t7 != 18446744070970014858LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x389 = 248;
	static int8_t x391 = -1;
	uint8_t x392 = 41U;
	volatile uint64_t t8 = 7586162217636557LLU;

	t8 = ((x389^(x390/x391))<<x392);

	if (t8 != 547556790632448LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x421 = INT64_MAX;
	static volatile uint16_t x422 = UINT16_MAX;
	uint64_t x423 = 8320635363727237LLU;
	uint64_t t9 = 103172781LLU;

	t9 = ((x421^(x422/x423))<<x424);

	if (t9 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x433 = 12575509;
	volatile int8_t x434 = INT8_MIN;
	static uint8_t x435 = UINT8_MAX;
	int8_t x436 = 7;
	static volatile int32_t t10 = -314108470;

	t10 = ((x433^(x434/x435))<<x436);

	if (t10 != 1609665152) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x449 = UINT8_MAX;
	static int64_t x450 = INT64_MIN;
	volatile uint64_t t11 = 4866834554710889307LLU;

	t11 = ((x449^(x450/x451))<<x452);

	if (t11 != 124116524LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x469 = -1;
	volatile uint64_t x470 = 750508LLU;
	int64_t x471 = -470LL;

	t12 = ((x469^(x470/x471))<<x472);

	if (t12 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x549 = INT16_MAX;
	int8_t x551 = -49;
	static volatile uint8_t x552 = 8U;
	volatile uint32_t t13 = 2767U;

	t13 = ((x549^(x550/x551))<<x552);

	if (t13 != 8388352U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x570 = UINT32_MAX;
	uint16_t x571 = 31U;
	static uint16_t x572 = 7U;
	volatile int64_t t14 = -360219LL;

	t14 = ((x569^(x570/x571))<<x572);

	if (t14 != 3397153556864LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x613 = 462U;
	volatile uint32_t x614 = 50253U;
	int8_t x615 = INT8_MIN;
	volatile int8_t x616 = 0;
	volatile uint32_t t15 = 686U;

	t15 = ((x613^(x614/x615))<<x616);

	if (t15 != 462U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x641 = 7966;
	static int8_t x642 = INT8_MIN;
	static int8_t x643 = INT8_MIN;
	volatile int8_t x644 = 6;
	volatile int32_t t16 = -9;

	t16 = ((x641^(x642/x643))<<x644);

	if (t16 != 509888) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x685 = 1;
	int32_t x686 = INT32_MIN;
	uint32_t x687 = 149586U;
	static uint8_t x688 = 17U;
	volatile uint32_t t17 = 21007929U;

	t17 = ((x685^(x686/x687))<<x688);

	if (t17 != 1881800704U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x690 = INT32_MAX;
	int8_t x691 = 1;
	static int16_t x692 = 0;
	volatile uint64_t t18 = 16749278LLU;

	t18 = ((x689^(x690/x691))<<x692);

	if (t18 != 2147483626LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x854 = INT8_MIN;
	int8_t x855 = INT8_MAX;
	uint8_t x856 = 1U;
	int32_t t19 = -68821465;

	t19 = ((x853^(x854/x855))<<x856);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x930 = INT32_MIN;
	static uint32_t x931 = UINT32_MAX;
	uint8_t x932 = 2U;
	volatile uint32_t t20 = 798497819U;

	t20 = ((x929^(x930/x931))<<x932);

	if (t20 != 4294857924U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x969 = INT32_MIN;
	int16_t x970 = INT16_MAX;
	int8_t x971 = -1;
	int32_t t21 = -463796248;

	t21 = ((x969^(x970/x971))<<x972);

	if (t21 != 2147450881) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1049 = 269LLU;
	static uint16_t x1050 = UINT16_MAX;
	int8_t x1051 = INT8_MIN;
	uint64_t t22 = 547573265685637LLU;

	t22 = ((x1049^(x1050/x1051))<<x1052);

	if (t22 != 18446744073709550640LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1053 = -1;
	uint8_t x1054 = UINT8_MAX;
	int64_t x1055 = -1LL;
	uint32_t x1056 = 1U;
	volatile int64_t t23 = -14LL;

	t23 = ((x1053^(x1054/x1055))<<x1056);

	if (t23 != 508LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1181 = 1960012LL;
	int16_t x1184 = 1;
	int64_t t24 = -1086352369927173527LL;

	t24 = ((x1181^(x1182/x1183))<<x1184);

	if (t24 != 3920024LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1189 = UINT64_MAX;
	volatile uint32_t x1190 = 46U;
	static int8_t x1192 = 10;
	volatile uint64_t t25 = 1068767074LLU;

	t25 = ((x1189^(x1190/x1191))<<x1192);

	if (t25 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1201 = -1;
	uint8_t x1202 = UINT8_MAX;
	int16_t x1204 = 15;

	t26 = ((x1201^(x1202/x1203))<<x1204);

	if (t26 != 2031616) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1245 = 1U;
	static uint32_t x1246 = UINT32_MAX;
	uint8_t x1247 = 2U;
	static int8_t x1248 = 1;

	t27 = ((x1245^(x1246/x1247))<<x1248);

	if (t27 != 4294967292U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1258 = -1;
	uint64_t x1259 = 94932384532826163LLU;
	uint8_t x1260 = 43U;
	volatile uint64_t t28 = 9241245846035LLU;

	t28 = ((x1257^(x1258/x1259))<<x1260);

	if (t28 != 18444993651198132224LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1285 = 5670324LLU;
	uint64_t x1286 = 1975589804678LLU;
	int32_t x1287 = -1;
	static uint8_t x1288 = 6U;
	static volatile uint64_t t29 = 8518940294865LLU;

	t29 = ((x1285^(x1286/x1287))<<x1288);

	if (t29 != 362900736LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1321 = 11803U;
	int8_t x1322 = -1;
	int8_t x1323 = INT8_MAX;
	volatile uint64_t x1324 = 1LLU;

	t30 = ((x1321^(x1322/x1323))<<x1324);

	if (t30 != 23606) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1425 = 20212U;
	volatile uint16_t x1426 = UINT16_MAX;
	uint16_t x1427 = 9317U;
	uint8_t x1428 = 1U;

	t31 = ((x1425^(x1426/x1427))<<x1428);

	if (t31 != 40422U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1449 = -1;
	volatile uint16_t x1450 = 15686U;
	static uint8_t x1452 = 6U;
	volatile uint32_t t32 = 2916493U;

	t32 = ((x1449^(x1450/x1451))<<x1452);

	if (t32 != 4294967232U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1501 = INT32_MAX;
	uint8_t x1502 = 60U;
	int64_t x1504 = 0LL;
	volatile int32_t t33 = INT32_MAX;

	t33 = ((x1501^(x1502/x1503))<<x1504);

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1569 = 2LLU;
	int8_t x1570 = INT8_MIN;
	static int32_t x1571 = INT32_MIN;
	uint8_t x1572 = 27U;
	uint64_t t34 = 1LLU;

	t34 = ((x1569^(x1570/x1571))<<x1572);

	if (t34 != 268435456LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1601 = 1U;
	uint16_t x1602 = 0U;
	volatile int32_t t35 = -3111377;

	t35 = ((x1601^(x1602/x1603))<<x1604);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1625 = 125362U;
	int32_t x1626 = 75020580;
	int32_t x1627 = -1;
	static uint32_t x1628 = 2U;
	uint32_t t36 = 21U;

	t36 = ((x1625^(x1626/x1627))<<x1628);

	if (t36 != 3994729912U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1657 = 7U;
	static uint64_t x1658 = UINT64_MAX;
	uint8_t x1660 = 1U;
	volatile uint64_t t37 = 61784LLU;

	t37 = ((x1657^(x1658/x1659))<<x1660);

	if (t37 != 12LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1666 = -3281;
	uint64_t x1667 = 51337911LLU;
	uint16_t x1668 = 8U;
	volatile uint64_t t38 = 823025LLU;

	t38 = ((x1665^(x1666/x1667))<<x1668);

	if (t38 != 91632492451584LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1702 = -438;
	static uint32_t x1703 = UINT32_MAX;
	uint16_t x1704 = 13U;
	uint32_t t39 = 5U;

	t39 = ((x1701^(x1702/x1703))<<x1704);

	if (t39 != 3334119424U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1737 = UINT32_MAX;
	int32_t x1738 = 5008695;
	int32_t x1739 = INT32_MIN;
	uint8_t x1740 = 5U;
	volatile uint32_t t40 = 37947U;

	t40 = ((x1737^(x1738/x1739))<<x1740);

	if (t40 != 4294967264U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1757 = UINT64_MAX;
	volatile int64_t x1758 = -138077LL;
	volatile int32_t x1760 = 1;
	volatile uint64_t t41 = 139700569717236195LLU;

	t41 = ((x1757^(x1758/x1759))<<x1760);

	if (t41 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1777 = -1;
	int32_t x1779 = -92498;
	static int8_t x1780 = 14;

	t42 = ((x1777^(x1778/x1779))<<x1780);

	if (t42 != 380354560) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x1781 = 496845114U;
	uint32_t x1783 = 181798268U;
	int16_t x1784 = 0;

	t43 = ((x1781^(x1782/x1783))<<x1784);

	if (t43 != 496845101U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x1826 = 0LL;
	int64_t t44 = -18611314632905LL;

	t44 = ((x1825^(x1826/x1827))<<x1828);

	if (t44 != 348217344LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1861 = INT16_MAX;
	int8_t x1862 = INT8_MIN;
	int8_t x1863 = -3;

	t45 = ((x1861^(x1862/x1863))<<x1864);

	if (t45 != 32725) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1905 = INT8_MIN;
	static int8_t x1906 = INT8_MIN;

	t46 = ((x1905^(x1906/x1907))<<x1908);

	if (t46 != 18446744073707295328LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1909 = -1;
	volatile int16_t x1910 = INT16_MIN;
	uint32_t x1911 = 15212662U;
	static volatile uint8_t x1912 = 0U;
	volatile uint32_t t47 = 238U;

	t47 = ((x1909^(x1910/x1911))<<x1912);

	if (t47 != 4294967013U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1913 = 4636016U;
	int16_t x1914 = -393;
	volatile int16_t x1915 = INT16_MIN;
	uint16_t x1916 = 3U;
	uint32_t t48 = 213057217U;

	t48 = ((x1913^(x1914/x1915))<<x1916);

	if (t48 != 37088128U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x1929 = 2;
	int32_t x1930 = INT32_MIN;
	volatile int64_t x1931 = INT64_MIN;
	volatile int64_t t49 = -387809118LL;

	t49 = ((x1929^(x1930/x1931))<<x1932);

	if (t49 != 18014398509481984LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1933 = 6341;
	static volatile int16_t x1934 = INT16_MAX;
	int32_t x1935 = INT32_MIN;
	int32_t x1936 = 0;

	t50 = ((x1933^(x1934/x1935))<<x1936);

	if (t50 != 6341) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1965 = 5U;
	volatile int8_t x1966 = INT8_MIN;
	static int8_t x1968 = 3;

	t51 = ((x1965^(x1966/x1967))<<x1968);

	if (t51 != 1064LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2109 = 608U;
	uint64_t x2110 = UINT64_MAX;
	volatile int32_t x2112 = 0;

	t52 = ((x2109^(x2110/x2111))<<x2112);

	if (t52 != 1439584308951LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2125 = INT32_MAX;
	volatile uint16_t x2126 = 31U;
	uint32_t x2127 = 5827284U;
	volatile uint8_t x2128 = 6U;
	uint32_t t53 = 13032771U;

	t53 = ((x2125^(x2126/x2127))<<x2128);

	if (t53 != 4294967232U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2161 = 0U;
	int16_t x2162 = -1;
	static int64_t x2163 = INT64_MIN;
	int8_t x2164 = 15;
	volatile int64_t t54 = -67265LL;

	t54 = ((x2161^(x2162/x2163))<<x2164);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2238 = 218081879836642306LLU;
	int16_t x2239 = INT16_MIN;
	volatile uint64_t t55 = 16905046239535LLU;

	t55 = ((x2237^(x2238/x2239))<<x2240);

	if (t55 != 137438953408LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2273 = INT8_MIN;
	uint8_t x2274 = 15U;
	int16_t x2276 = 1;
	uint64_t t56 = 858LLU;

	t56 = ((x2273^(x2274/x2275))<<x2276);

	if (t56 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2285 = 197347U;
	static uint64_t x2286 = 321899533LLU;
	static int8_t x2287 = INT8_MIN;
	uint8_t x2288 = 10U;
	static uint64_t t57 = 5039LLU;

	t57 = ((x2285^(x2286/x2287))<<x2288);

	if (t57 != 202083328LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2385 = -1;
	uint64_t x2386 = 1334125183LLU;
	int16_t x2387 = INT16_MIN;
	uint16_t x2388 = 15U;
	volatile uint64_t t58 = 2194LLU;

	t58 = ((x2385^(x2386/x2387))<<x2388);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2393 = UINT64_MAX;
	static int8_t x2394 = INT8_MIN;
	static uint32_t x2396 = 15U;
	uint64_t t59 = 266561664386253034LLU;

	t59 = ((x2393^(x2394/x2395))<<x2396);

	if (t59 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2482 = -1;
	int8_t x2483 = -1;
	static volatile int16_t x2484 = 5;
	int32_t t60 = -2;

	t60 = ((x2481^(x2482/x2483))<<x2484);

	if (t60 != 8128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2562 = 48U;
	static uint8_t x2563 = 1U;
	static volatile int32_t t61 = 0;

	t61 = ((x2561^(x2562/x2563))<<x2564);

	if (t61 != 7040) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x2674 = UINT8_MAX;
	int16_t x2675 = 3;
	uint16_t x2676 = 2U;
	volatile int32_t t62 = 10;

	t62 = ((x2673^(x2674/x2675))<<x2676);

	if (t62 != 130728) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2737 = 25U;
	int16_t x2738 = -2726;
	int64_t x2739 = -1LL;
	static volatile uint8_t x2740 = 2U;
	int64_t t63 = 104800737106LL;

	t63 = ((x2737^(x2738/x2739))<<x2740);

	if (t63 != 11004LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2777 = UINT64_MAX;
	volatile int16_t x2778 = INT16_MAX;
	int64_t x2779 = -1LL;
	static uint8_t x2780 = 1U;
	uint64_t t64 = 117107LLU;

	t64 = ((x2777^(x2778/x2779))<<x2780);

	if (t64 != 65532LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2805 = 1855030150608243247LL;
	int16_t x2806 = INT16_MIN;
	int64_t x2807 = -1LL;
	uint8_t x2808 = 0U;
	volatile int64_t t65 = -19748546163722LL;

	t65 = ((x2805^(x2806/x2807))<<x2808);

	if (t65 != 1855030150608210479LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2829 = INT32_MAX;
	static int8_t x2830 = 7;
	int8_t x2832 = 8;
	uint64_t t66 = 1006354LLU;

	t66 = ((x2829^(x2830/x2831))<<x2832);

	if (t66 != 549755813632LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2865 = 28U;
	int16_t x2866 = -1;
	int8_t x2867 = INT8_MIN;
	int8_t x2868 = 0;
	static int32_t t67 = 8714463;

	t67 = ((x2865^(x2866/x2867))<<x2868);

	if (t67 != 28) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2883 = UINT8_MAX;
	uint8_t x2884 = 48U;

	t68 = ((x2881^(x2882/x2883))<<x2884);

	if (t68 != 9339058252282855424LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2925 = 0;
	int16_t x2926 = INT16_MIN;
	int8_t x2927 = -3;
	uint8_t x2928 = 0U;

	t69 = ((x2925^(x2926/x2927))<<x2928);

	if (t69 != 10922) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2966 = UINT8_MAX;
	volatile uint8_t x2967 = 47U;
	uint16_t x2968 = 0U;

	t70 = ((x2965^(x2966/x2967))<<x2968);

	if (t70 != 113) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3053 = 2555U;
	static uint64_t x3054 = 10644779LLU;
	volatile int16_t x3055 = INT16_MIN;
	uint8_t x3056 = 4U;
	static uint64_t t71 = 589LLU;

	t71 = ((x3053^(x3054/x3055))<<x3056);

	if (t71 != 40880LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3078 = 0U;
	uint8_t x3080 = 3U;
	uint32_t t72 = 1230552316U;

	t72 = ((x3077^(x3078/x3079))<<x3080);

	if (t72 != 1634799896U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3106 = 1477702690818513LLU;
	static uint32_t x3107 = UINT32_MAX;
	volatile uint64_t t73 = 123583LLU;

	t73 = ((x3105^(x3106/x3107))<<x3108);

	if (t73 != 18428732561334206464LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3129 = UINT8_MAX;
	static volatile int64_t x3130 = -1LL;
	uint16_t x3132 = 28U;
	volatile int64_t t74 = -27293076LL;

	t74 = ((x3129^(x3130/x3131))<<x3132);

	if (t74 != 68451041280LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3169 = UINT16_MAX;
	int16_t x3170 = INT16_MIN;
	int64_t t75 = -40LL;

	t75 = ((x3169^(x3170/x3171))<<x3172);

	if (t75 != 8795958804480LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3177 = INT64_MIN;
	volatile int32_t x3178 = INT32_MIN;
	volatile uint64_t x3179 = 21753000497167176LLU;
	volatile uint8_t x3180 = 37U;
	static uint64_t t76 = 486686154LLU;

	t76 = ((x3177^(x3178/x3179))<<x3180);

	if (t76 != 116548232544256LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3269 = -1;
	uint16_t x3270 = 459U;
	int32_t x3271 = -1;
	int8_t x3272 = 1;
	volatile int32_t t77 = 327474129;

	t77 = ((x3269^(x3270/x3271))<<x3272);

	if (t77 != 916) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3289 = 513798958868LLU;
	volatile int16_t x3291 = INT16_MAX;
	volatile uint8_t x3292 = 28U;
	volatile uint64_t t78 = 690LLU;

	t78 = ((x3289^(x3290/x3291))<<x3292);

	if (t78 != 8794649299284656128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3397 = 1U;
	static uint64_t x3398 = 458659185153LLU;
	int8_t x3399 = INT8_MIN;
	uint64_t t79 = 1415LLU;

	t79 = ((x3397^(x3398/x3399))<<x3400);

	if (t79 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3557 = 82265720436874LLU;
	int32_t x3558 = 3292;
	int16_t x3559 = -1;
	int16_t x3560 = 41;
	uint64_t t80 = 468102652278362LLU;

	t80 = ((x3557^(x3558/x3559))<<x3560);

	if (t80 != 16832023287390273536LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3561 = 22589U;
	int32_t x3562 = INT32_MAX;
	uint32_t x3564 = 0U;

	t81 = ((x3561^(x3562/x3563))<<x3564);

	if (t81 != 22589U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3733 = 2128LL;
	static int16_t x3734 = INT16_MIN;
	uint32_t x3735 = UINT32_MAX;
	volatile int8_t x3736 = 14;
	volatile int64_t t82 = 8206795939580LL;

	t82 = ((x3733^(x3734/x3735))<<x3736);

	if (t82 != 34865152LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3849 = 22U;
	volatile int16_t x3850 = INT16_MIN;
	int32_t x3851 = INT32_MIN;
	volatile int32_t t83 = -231006;

	t83 = ((x3849^(x3850/x3851))<<x3852);

	if (t83 != 44) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4001 = INT64_MIN;
	int8_t x4002 = 49;
	uint8_t x4004 = 4U;
	volatile uint64_t t84 = 489134516627012633LLU;

	t84 = ((x4001^(x4002/x4003))<<x4004);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4053 = 5U;
	int64_t x4054 = INT64_MIN;
	volatile int16_t x4055 = INT16_MIN;
	uint8_t x4056 = 8U;
	int64_t t85 = 31527LL;

	t85 = ((x4053^(x4054/x4055))<<x4056);

	if (t85 != 72057594037929216LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4061 = 6;
	int16_t x4062 = INT16_MAX;
	int32_t x4063 = INT32_MAX;
	volatile int64_t x4064 = 15LL;
	int32_t t86 = 21884;

	t86 = ((x4061^(x4062/x4063))<<x4064);

	if (t86 != 196608) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4106 = 12U;
	int32_t x4107 = INT32_MIN;
	int16_t x4108 = 26;
	static uint32_t t87 = 7897U;

	t87 = ((x4105^(x4106/x4107))<<x4108);

	if (t87 != 4227858432U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4169 = 796488349412693900LL;
	volatile int64_t x4170 = -1LL;
	uint16_t x4171 = 15U;
	static int32_t x4172 = 0;
	int64_t t88 = -199325468059LL;

	t88 = ((x4169^(x4170/x4171))<<x4172);

	if (t88 != 796488349412693900LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4226 = INT64_MAX;
	uint64_t x4227 = UINT64_MAX;
	volatile uint64_t t89 = 1605123113LLU;

	t89 = ((x4225^(x4226/x4227))<<x4228);

	if (t89 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4305 = 0;
	static uint32_t x4306 = 202927677U;
	static int8_t x4307 = INT8_MAX;
	static uint64_t x4308 = 15LLU;
	uint32_t t90 = 305U;

	t90 = ((x4305^(x4306/x4307))<<x4308);

	if (t90 != 818905088U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4325 = 2U;
	uint16_t x4326 = 242U;
	uint32_t x4327 = 952504U;
	volatile uint32_t t91 = 1695U;

	t91 = ((x4325^(x4326/x4327))<<x4328);

	if (t91 != 4U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4613 = 2946547728LLU;
	static volatile uint32_t x4615 = 499783U;
	uint16_t x4616 = 2U;
	volatile uint64_t t92 = 204850927LLU;

	t92 = ((x4613^(x4614/x4615))<<x4616);

	if (t92 != 11786225156LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4713 = 5U;
	int64_t x4714 = -1LL;
	static volatile uint8_t x4715 = UINT8_MAX;
	uint8_t x4716 = 26U;
	volatile int64_t t93 = -765337471LL;

	t93 = ((x4713^(x4714/x4715))<<x4716);

	if (t93 != 335544320LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4717 = -1;
	static uint64_t x4718 = 1021619700528LLU;
	volatile int64_t x4719 = -6706637LL;
	uint8_t x4720 = 2U;
	static volatile uint64_t t94 = 58LLU;

	t94 = ((x4717^(x4718/x4719))<<x4720);

	if (t94 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4769 = 61226478394LLU;
	int64_t x4770 = -1LL;
	int64_t x4771 = INT64_MAX;
	volatile uint64_t t95 = 230576718703LLU;

	t95 = ((x4769^(x4770/x4771))<<x4772);

	if (t95 != 2355652659773440000LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4793 = 202865800119733610LLU;
	int16_t x4795 = -1;
	volatile int32_t x4796 = 1;
	static volatile uint64_t t96 = 5263472LLU;

	t96 = ((x4793^(x4794/x4795))<<x4796);

	if (t96 != 405731600239467218LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4802 = 1364LLU;
	volatile int8_t x4803 = INT8_MIN;
	int32_t x4804 = 63;
	uint64_t t97 = 0LLU;

	t97 = ((x4801^(x4802/x4803))<<x4804);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4833 = 68U;
	volatile uint64_t x4835 = UINT64_MAX;
	uint16_t x4836 = 44U;

	t98 = ((x4833^(x4834/x4835))<<x4836);

	if (t98 != 1196268651020288LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4881 = 0LL;
	int8_t x4882 = INT8_MIN;
	int8_t x4883 = -1;
	int16_t x4884 = 0;
	volatile int64_t t99 = -9864111979301LL;

	t99 = ((x4881^(x4882/x4883))<<x4884);

	if (t99 != 128LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = 34;
int16_t x77 = INT16_MAX;
volatile int32_t t1 = -47709689;
uint64_t x114 = 9534LLU;
uint64_t t3 = 31592154347099LLU;
volatile int8_t x198 = INT8_MAX;
int32_t x282 = 461628097;
int16_t x379 = INT16_MIN;
int8_t x646 = -20;
static int8_t x654 = -1;
static int64_t x655 = -1LL;
volatile int64_t t11 = -220563235LL;
volatile uint64_t t14 = 23484913568645722LLU;
uint8_t x725 = 1U;
volatile uint8_t x753 = 1U;
int8_t x758 = -41;
int64_t x759 = -1LL;
int32_t x760 = 1;
volatile int64_t t17 = -3577202491LL;
static uint64_t x925 = UINT64_MAX;
uint32_t x969 = UINT32_MAX;
uint32_t x970 = UINT32_MAX;
uint16_t x1164 = 5U;
uint32_t t26 = 26U;
uint8_t x1258 = UINT8_MAX;
uint8_t x1390 = 31U;
int8_t x1391 = INT8_MAX;
static uint16_t x1456 = 14U;
int16_t x1503 = -1;
int8_t x1621 = INT8_MIN;
uint64_t t31 = 10LLU;
uint8_t x1746 = 28U;
uint8_t x1748 = 3U;
uint8_t x1752 = 23U;
int64_t t34 = 1538095296539LL;
int8_t x1765 = INT8_MAX;
uint8_t x1767 = 20U;
static int8_t x1854 = INT8_MAX;
volatile int64_t x1963 = -2210LL;
int64_t t41 = 509918085939487LL;
static volatile int32_t t42 = -404185964;
uint64_t x2147 = 40126729LLU;
static uint8_t x2175 = 14U;
uint64_t t44 = 1057343677LLU;
static int64_t x2301 = INT64_MIN;
volatile uint64_t t47 = 26309666461089763LLU;
uint32_t x2339 = 41122U;
int64_t x2345 = INT64_MIN;
uint8_t x2348 = 35U;
volatile int64_t t49 = -900636408968003LL;
volatile uint64_t t50 = 251865034LLU;
int16_t x2633 = 162;
volatile int32_t x2649 = -1;
int32_t x2650 = INT32_MIN;
static volatile int64_t x2719 = -1LL;
int32_t t56 = -3664;
int8_t x2832 = 6;
int16_t x2926 = INT16_MIN;
uint16_t x2928 = 27U;
static volatile uint64_t t61 = 27LLU;
static int32_t x3009 = INT32_MIN;
uint64_t x3011 = 2656LLU;
static uint16_t x3012 = 1U;
int16_t x3074 = -1;
int16_t x3075 = INT16_MAX;
static uint64_t x3113 = 26LLU;
static volatile uint8_t x3116 = 44U;
uint64_t t64 = 2545204478LLU;
int64_t x3126 = INT64_MIN;
uint64_t x3127 = 397633LLU;
int8_t x3128 = 2;
uint32_t x3131 = 14U;
uint8_t x3332 = 11U;
volatile int64_t t70 = -1821170875779248LL;
volatile uint64_t t72 = 102618468LLU;
static volatile int64_t t74 = 62029168870LL;
int16_t x3652 = 12;
int32_t x3685 = INT32_MAX;
static int8_t x3739 = 1;
int64_t x3755 = -1LL;
int64_t t80 = 7559628183668LL;
static int8_t x3799 = INT8_MIN;
static uint8_t x3800 = 0U;
uint32_t t81 = 55738U;
uint16_t x3958 = 976U;
volatile uint32_t t82 = 4041U;
uint64_t t84 = 1904932LLU;
uint16_t x4125 = 10U;
int64_t x4127 = -1LL;
uint8_t x4224 = 1U;
int64_t t88 = -579215357LL;
static int32_t x4305 = 228;
volatile int64_t x4306 = INT64_MAX;
static uint8_t x4380 = 7U;
volatile int64_t t92 = -4211900808112LL;
uint64_t x4598 = 1130869185484LLU;
int8_t x4599 = -1;
uint8_t x4651 = 103U;
uint8_t x4843 = UINT8_MAX;


void f0(void) {
	static int16_t x10 = -4;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = 5U;
	volatile uint64_t t0 = 62218374608481875LLU;

	t0 = (((x9|x10)%x11)>>x12);

	if (t0 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x78 = -1;
	int8_t x79 = 1;
	static volatile uint8_t x80 = 0U;

	t1 = (((x77|x78)%x79)>>x80);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x109 = 18;
	volatile int8_t x110 = INT8_MAX;
	uint16_t x111 = 2635U;
	uint8_t x112 = 29U;
	volatile int32_t t2 = -816;

	t2 = (((x109|x110)%x111)>>x112);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x113 = 395214435U;
	int32_t x115 = -54483822;
	int8_t x116 = 2;

	t3 = (((x113|x114)%x115)>>x116);

	if (t3 != 98803679LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x125 = -1023;
	uint64_t x126 = 1691LLU;
	uint16_t x127 = UINT16_MAX;
	static uint16_t x128 = 55U;
	uint64_t t4 = 439930606609707879LLU;

	t4 = (((x125|x126)%x127)>>x128);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x197 = INT16_MIN;
	uint32_t x199 = 13530U;
	volatile uint16_t x200 = 1U;
	volatile uint32_t t5 = 105668979U;

	t5 = (((x197|x198)%x199)>>x200);

	if (t5 != 6022U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x213 = 1885203LLU;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	volatile int8_t x216 = 0;
	volatile uint64_t t6 = 316123729865115231LLU;

	t6 = (((x213|x214)%x215)>>x216);

	if (t6 != 1885204LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x281 = 3LLU;
	volatile int16_t x283 = 2;
	int16_t x284 = 27;
	static volatile uint64_t t7 = 1021025801LLU;

	t7 = (((x281|x282)%x283)>>x284);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x377 = 57;
	uint64_t x378 = 182120LLU;
	uint16_t x380 = 2U;
	uint64_t t8 = 33424434LLU;

	t8 = (((x377|x378)%x379)>>x380);

	if (t8 != 45534LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x533 = INT32_MAX;
	volatile uint32_t x534 = 228585119U;
	int16_t x535 = -1;
	int8_t x536 = 1;
	static uint32_t t9 = 56049348U;

	t9 = (((x533|x534)%x535)>>x536);

	if (t9 != 1073741823U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x645 = INT32_MIN;
	int8_t x647 = 2;
	int16_t x648 = 0;
	int32_t t10 = 56841;

	t10 = (((x645|x646)%x647)>>x648);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x653 = 0U;
	int32_t x656 = 8;

	t11 = (((x653|x654)%x655)>>x656);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x665 = UINT32_MAX;
	static int32_t x666 = 4028;
	int64_t x667 = INT64_MAX;
	volatile uint32_t x668 = 0U;
	int64_t t12 = 107950611668799454LL;

	t12 = (((x665|x666)%x667)>>x668);

	if (t12 != 4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x693 = INT8_MIN;
	int16_t x694 = INT16_MAX;
	int8_t x695 = -1;
	static volatile uint8_t x696 = 1U;
	static volatile int32_t t13 = -860497016;

	t13 = (((x693|x694)%x695)>>x696);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MIN;
	uint64_t x719 = 21575544350LLU;
	int32_t x720 = 22;

	t14 = (((x717|x718)%x719)>>x720);

	if (t14 != 1078LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x726 = INT32_MAX;
	static int32_t x727 = INT32_MAX;
	int8_t x728 = 0;
	static volatile int32_t t15 = -4;

	t15 = (((x725|x726)%x727)>>x728);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x754 = 0;
	static int64_t x755 = -1231853250443835851LL;
	uint8_t x756 = 32U;
	static int64_t t16 = 57049155737093683LL;

	t16 = (((x753|x754)%x755)>>x756);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x757 = -1;

	t17 = (((x757|x758)%x759)>>x760);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x773 = 1;
	uint16_t x774 = 11678U;
	uint16_t x775 = UINT16_MAX;
	volatile int8_t x776 = 1;
	int32_t t18 = -60;

	t18 = (((x773|x774)%x775)>>x776);

	if (t18 != 5839) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x781 = 4888LLU;
	int16_t x782 = -1;
	int32_t x783 = 619050;
	static uint16_t x784 = 1U;
	volatile uint64_t t19 = 7353LLU;

	t19 = (((x781|x782)%x783)>>x784);

	if (t19 != 48307LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x857 = 65576U;
	static int16_t x858 = -1;
	int32_t x859 = 26686;
	volatile uint16_t x860 = 3U;
	uint32_t t20 = 1571208399U;

	t20 = (((x857|x858)%x859)>>x860);

	if (t20 != 1963U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x926 = -1;
	volatile uint8_t x927 = UINT8_MAX;
	volatile int8_t x928 = 0;
	volatile uint64_t t21 = 0LLU;

	t21 = (((x925|x926)%x927)>>x928);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x929 = UINT32_MAX;
	uint32_t x930 = 7556818U;
	static volatile int32_t x931 = INT32_MIN;
	uint8_t x932 = 1U;
	uint32_t t22 = 0U;

	t22 = (((x929|x930)%x931)>>x932);

	if (t22 != 1073741823U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x971 = 23U;
	volatile uint8_t x972 = 0U;
	uint32_t t23 = 820590U;

	t23 = (((x969|x970)%x971)>>x972);

	if (t23 != 11U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1041 = -1;
	static uint64_t x1042 = 1296251905742279LLU;
	volatile uint32_t x1043 = UINT32_MAX;
	static uint8_t x1044 = 44U;
	volatile uint64_t t24 = 2223161171549991614LLU;

	t24 = (((x1041|x1042)%x1043)>>x1044);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1065 = 0U;
	static uint32_t x1066 = 1U;
	int32_t x1067 = -811;
	volatile uint8_t x1068 = 1U;
	static uint32_t t25 = 98U;

	t25 = (((x1065|x1066)%x1067)>>x1068);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1161 = -1;
	uint32_t x1162 = 446U;
	int8_t x1163 = -7;

	t26 = (((x1161|x1162)%x1163)>>x1164);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1257 = 1951183839463977863LLU;
	static uint32_t x1259 = 80U;
	int16_t x1260 = 18;
	uint64_t t27 = 321532911LLU;

	t27 = (((x1257|x1258)%x1259)>>x1260);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1389 = INT64_MAX;
	uint8_t x1392 = 2U;
	int64_t t28 = 764518LL;

	t28 = (((x1389|x1390)%x1391)>>x1392);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1453 = INT16_MAX;
	uint32_t x1454 = 2692U;
	int64_t x1455 = 2633LL;
	int64_t t29 = -27361398765015855LL;

	t29 = (((x1453|x1454)%x1455)>>x1456);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1501 = 690922661703006LLU;
	int64_t x1502 = 856821400439613LL;
	uint8_t x1504 = 5U;
	uint64_t t30 = 65407539309LLU;

	t30 = (((x1501|x1502)%x1503)>>x1504);

	if (t30 != 30765920268155LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1622 = 4LL;
	static uint64_t x1623 = UINT64_MAX;
	uint8_t x1624 = 2U;

	t31 = (((x1621|x1622)%x1623)>>x1624);

	if (t31 != 4611686018427387873LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1629 = 12133373716212LLU;
	int8_t x1630 = -50;
	uint32_t x1631 = 1U;
	static uint16_t x1632 = 13U;
	uint64_t t32 = 108211267272LLU;

	t32 = (((x1629|x1630)%x1631)>>x1632);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1745 = 631;
	int16_t x1747 = -27;
	int32_t t33 = -17483190;

	t33 = (((x1745|x1746)%x1747)>>x1748);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1749 = -256280LL;
	uint16_t x1750 = 6U;
	volatile int8_t x1751 = -1;

	t34 = (((x1749|x1750)%x1751)>>x1752);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1766 = 1895LLU;
	uint16_t x1768 = 2U;
	volatile uint64_t t35 = 470LLU;

	t35 = (((x1765|x1766)%x1767)>>x1768);

	if (t35 != 4LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1801 = 19596371515463816LL;
	int64_t x1802 = INT64_MAX;
	int64_t x1803 = INT64_MIN;
	static volatile uint8_t x1804 = 0U;
	volatile int64_t t36 = INT64_MAX;

	t36 = (((x1801|x1802)%x1803)>>x1804);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1825 = 800853837;
	int64_t x1826 = INT64_MAX;
	uint64_t x1827 = 3LLU;
	int64_t x1828 = 41LL;
	uint64_t t37 = 1154810LLU;

	t37 = (((x1825|x1826)%x1827)>>x1828);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1853 = 1550432616LLU;
	uint16_t x1855 = 1354U;
	static volatile int8_t x1856 = 3;
	volatile uint64_t t38 = 824810641867462374LLU;

	t38 = (((x1853|x1854)%x1855)>>x1856);

	if (t38 != 136LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1913 = UINT32_MAX;
	int32_t x1914 = INT32_MAX;
	int32_t x1915 = 7517;
	uint8_t x1916 = 28U;
	uint32_t t39 = 1U;

	t39 = (((x1913|x1914)%x1915)>>x1916);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1921 = 1;
	uint16_t x1922 = 35U;
	uint8_t x1923 = UINT8_MAX;
	int16_t x1924 = 5;
	int32_t t40 = -250681277;

	t40 = (((x1921|x1922)%x1923)>>x1924);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1961 = 3U;
	static uint16_t x1962 = UINT16_MAX;
	uint8_t x1964 = 21U;

	t41 = (((x1961|x1962)%x1963)>>x1964);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2133 = 42;
	int16_t x2134 = -821;
	static int16_t x2135 = -1;
	uint16_t x2136 = 3U;

	t42 = (((x2133|x2134)%x2135)>>x2136);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2145 = UINT64_MAX;
	volatile uint8_t x2146 = UINT8_MAX;
	int16_t x2148 = 1;
	volatile uint64_t t43 = 390150LLU;

	t43 = (((x2145|x2146)%x2147)>>x2148);

	if (t43 != 9439026LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2173 = 166904934351831779LLU;
	int32_t x2174 = INT32_MAX;
	uint8_t x2176 = 46U;

	t44 = (((x2173|x2174)%x2175)>>x2176);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2229 = UINT8_MAX;
	uint16_t x2230 = 1949U;
	static int16_t x2231 = -2037;
	int8_t x2232 = 0;
	volatile int32_t t45 = 0;

	t45 = (((x2229|x2230)%x2231)>>x2232);

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2297 = -520487995;
	volatile uint64_t x2298 = UINT64_MAX;
	volatile int64_t x2299 = INT64_MAX;
	uint16_t x2300 = 3U;
	uint64_t t46 = 767792LLU;

	t46 = (((x2297|x2298)%x2299)>>x2300);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2302 = 2946850078496982068LLU;
	int8_t x2303 = 1;
	uint32_t x2304 = 8U;

	t47 = (((x2301|x2302)%x2303)>>x2304);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2337 = INT64_MAX;
	static uint32_t x2338 = UINT32_MAX;
	volatile uint8_t x2340 = 8U;
	static int64_t t48 = 0LL;

	t48 = (((x2337|x2338)%x2339)>>x2340);

	if (t48 != 105LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2346 = -630;
	volatile int16_t x2347 = 3;

	t49 = (((x2345|x2346)%x2347)>>x2348);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2389 = -1;
	uint64_t x2390 = 17098646411801790LLU;
	int64_t x2391 = -259LL;
	int32_t x2392 = 13;

	t50 = (((x2389|x2390)%x2391)>>x2392);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2521 = -60713;
	uint32_t x2522 = 172U;
	int8_t x2523 = INT8_MIN;
	volatile uint8_t x2524 = 1U;
	static volatile uint32_t t51 = 216197746U;

	t51 = (((x2521|x2522)%x2523)>>x2524);

	if (t51 != 2147453311U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x2613 = 8U;
	volatile uint16_t x2614 = 121U;
	static uint64_t x2615 = UINT64_MAX;
	static volatile int32_t x2616 = 56;
	volatile uint64_t t52 = 136541310450LLU;

	t52 = (((x2613|x2614)%x2615)>>x2616);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2634 = 29361956LL;
	uint32_t x2635 = 5501084U;
	uint32_t x2636 = 1U;
	int64_t t53 = -4332223LL;

	t53 = (((x2633|x2634)%x2635)>>x2636);

	if (t53 != 928333LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2651 = 435547663363868LLU;
	static uint8_t x2652 = 10U;
	static uint64_t t54 = 23LLU;

	t54 = (((x2649|x2650)%x2651)>>x2652);

	if (t54 != 419370042005LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2717 = UINT32_MAX;
	static uint8_t x2718 = UINT8_MAX;
	int8_t x2720 = 6;
	int64_t t55 = -14415LL;

	t55 = (((x2717|x2718)%x2719)>>x2720);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x2769 = INT32_MIN;
	uint16_t x2770 = 0U;
	static volatile int8_t x2771 = -1;
	static int16_t x2772 = 28;

	t56 = (((x2769|x2770)%x2771)>>x2772);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x2829 = UINT64_MAX;
	static volatile int16_t x2830 = INT16_MAX;
	int16_t x2831 = INT16_MIN;
	static uint64_t t57 = 157113029LLU;

	t57 = (((x2829|x2830)%x2831)>>x2832);

	if (t57 != 511LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2841 = 358282450U;
	int64_t x2842 = -1LL;
	static int8_t x2843 = 1;
	uint8_t x2844 = 16U;
	volatile int64_t t58 = 113929339477LL;

	t58 = (((x2841|x2842)%x2843)>>x2844);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2905 = INT16_MAX;
	uint64_t x2906 = 7927473LLU;
	int64_t x2907 = -1LL;
	int8_t x2908 = 15;
	uint64_t t59 = 3120409LLU;

	t59 = (((x2905|x2906)%x2907)>>x2908);

	if (t59 != 241LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2925 = UINT64_MAX;
	uint16_t x2927 = UINT16_MAX;
	uint64_t t60 = 49965LLU;

	t60 = (((x2925|x2926)%x2927)>>x2928);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2949 = 174241476177679265LLU;
	static uint8_t x2950 = 0U;
	static volatile uint16_t x2951 = 1U;
	uint16_t x2952 = 6U;

	t61 = (((x2949|x2950)%x2951)>>x2952);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3010 = INT8_MIN;
	static uint64_t t62 = 2LLU;

	t62 = (((x3009|x3010)%x3011)>>x3012);

	if (t62 != 784LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3073 = 311U;
	int64_t x3076 = 0LL;
	static uint32_t t63 = 361U;

	t63 = (((x3073|x3074)%x3075)>>x3076);

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3114 = INT32_MIN;
	uint16_t x3115 = 4877U;

	t64 = (((x3113|x3114)%x3115)>>x3116);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3125 = -1;
	volatile uint64_t t65 = 684172071525LLU;

	t65 = (((x3125|x3126)%x3127)>>x3128);

	if (t65 != 84938LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3129 = INT8_MIN;
	uint16_t x3130 = 1U;
	uint8_t x3132 = 5U;
	uint32_t t66 = 3U;

	t66 = (((x3129|x3130)%x3131)>>x3132);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3157 = 279992413068407LLU;
	uint64_t x3158 = UINT64_MAX;
	int8_t x3159 = INT8_MAX;
	static uint8_t x3160 = 42U;
	uint64_t t67 = 14LLU;

	t67 = (((x3157|x3158)%x3159)>>x3160);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3277 = INT8_MAX;
	uint16_t x3278 = UINT16_MAX;
	static uint8_t x3279 = 3U;
	static uint8_t x3280 = 3U;
	int32_t t68 = 0;

	t68 = (((x3277|x3278)%x3279)>>x3280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3309 = INT8_MAX;
	int8_t x3310 = 2;
	int32_t x3311 = -1867069;
	uint16_t x3312 = 1U;
	volatile int32_t t69 = 299798071;

	t69 = (((x3309|x3310)%x3311)>>x3312);

	if (t69 != 63) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3329 = 0;
	int8_t x3330 = INT8_MAX;
	static int64_t x3331 = INT64_MIN;

	t70 = (((x3329|x3330)%x3331)>>x3332);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x3385 = 63174270U;
	int32_t x3386 = INT32_MIN;
	int64_t x3387 = -32782823716LL;
	int32_t x3388 = 5;
	volatile int64_t t71 = 937LL;

	t71 = (((x3385|x3386)%x3387)>>x3388);

	if (t71 != 69083059LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3441 = 1699506066234LLU;
	int16_t x3442 = -1;
	uint16_t x3443 = 1069U;
	int64_t x3444 = 15LL;

	t72 = (((x3441|x3442)%x3443)>>x3444);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3569 = 3U;
	static uint8_t x3570 = UINT8_MAX;
	int8_t x3571 = INT8_MIN;
	int8_t x3572 = 6;
	volatile int32_t t73 = 8101;

	t73 = (((x3569|x3570)%x3571)>>x3572);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3573 = INT64_MIN;
	static int8_t x3574 = -1;
	static int32_t x3575 = -1;
	uint8_t x3576 = 15U;

	t74 = (((x3573|x3574)%x3575)>>x3576);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3581 = UINT64_MAX;
	int8_t x3582 = 0;
	int32_t x3583 = INT32_MIN;
	int32_t x3584 = 8;
	volatile uint64_t t75 = 2LLU;

	t75 = (((x3581|x3582)%x3583)>>x3584);

	if (t75 != 8388607LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x3649 = -1;
	uint64_t x3650 = 28430739LLU;
	int16_t x3651 = -47;
	static uint64_t t76 = 1061788476LLU;

	t76 = (((x3649|x3650)%x3651)>>x3652);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3686 = 27LL;
	uint32_t x3687 = UINT32_MAX;
	static uint8_t x3688 = 0U;
	static int64_t t77 = 143324799613LL;

	t77 = (((x3685|x3686)%x3687)>>x3688);

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3737 = INT64_MAX;
	int32_t x3738 = INT32_MIN;
	int8_t x3740 = 3;
	volatile int64_t t78 = -2976618305LL;

	t78 = (((x3737|x3738)%x3739)>>x3740);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x3753 = 16339065LLU;
	uint8_t x3754 = UINT8_MAX;
	uint16_t x3756 = 3U;
	volatile uint64_t t79 = 3003740032633LLU;

	t79 = (((x3753|x3754)%x3755)>>x3756);

	if (t79 != 2042399LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3765 = UINT32_MAX;
	static int64_t x3766 = INT64_MAX;
	volatile int8_t x3767 = INT8_MAX;
	int16_t x3768 = 7;

	t80 = (((x3765|x3766)%x3767)>>x3768);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3797 = INT8_MIN;
	uint32_t x3798 = UINT32_MAX;

	t81 = (((x3797|x3798)%x3799)>>x3800);

	if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3957 = 5141199U;
	int8_t x3959 = 1;
	volatile uint8_t x3960 = 22U;

	t82 = (((x3957|x3958)%x3959)>>x3960);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4021 = INT64_MIN;
	uint32_t x4022 = 32715U;
	uint64_t x4023 = 140298636LLU;
	static int16_t x4024 = 0;
	volatile uint64_t t83 = 41437211499LLU;

	t83 = (((x4021|x4022)%x4023)>>x4024);

	if (t83 != 59948351LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4077 = 2;
	uint16_t x4078 = 2U;
	static uint64_t x4079 = 74298221506918LLU;
	int8_t x4080 = 0;

	t84 = (((x4077|x4078)%x4079)>>x4080);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4126 = -1;
	static int8_t x4128 = 0;
	int64_t t85 = -1LL;

	t85 = (((x4125|x4126)%x4127)>>x4128);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4145 = UINT8_MAX;
	volatile uint16_t x4146 = 16173U;
	uint64_t x4147 = UINT64_MAX;
	int8_t x4148 = 1;
	volatile uint64_t t86 = 303244LLU;

	t86 = (((x4145|x4146)%x4147)>>x4148);

	if (t86 != 8191LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4185 = INT16_MIN;
	uint64_t x4186 = 37455LLU;
	int8_t x4187 = INT8_MAX;
	volatile int16_t x4188 = 1;
	static uint64_t t87 = 57LLU;

	t87 = (((x4185|x4186)%x4187)>>x4188);

	if (t87 != 57LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4221 = 40;
	int64_t x4222 = INT64_MIN;
	static int8_t x4223 = -1;

	t88 = (((x4221|x4222)%x4223)>>x4224);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4307 = -2;
	int16_t x4308 = 1;
	int64_t t89 = -25443853282188018LL;

	t89 = (((x4305|x4306)%x4307)>>x4308);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4349 = 83710513U;
	int8_t x4350 = INT8_MIN;
	static int8_t x4351 = INT8_MIN;
	uint16_t x4352 = 2U;
	volatile uint32_t t90 = 0U;

	t90 = (((x4349|x4350)%x4351)>>x4352);

	if (t90 != 12U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4369 = INT32_MAX;
	int8_t x4370 = 61;
	int16_t x4371 = -329;
	volatile int16_t x4372 = 0;
	static int32_t t91 = -35;

	t91 = (((x4369|x4370)%x4371)>>x4372);

	if (t91 != 302) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4377 = -53242;
	static int64_t x4378 = -1LL;
	static volatile int64_t x4379 = -1LL;

	t92 = (((x4377|x4378)%x4379)>>x4380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4569 = 70U;
	volatile int64_t x4570 = INT64_MAX;
	uint16_t x4571 = UINT16_MAX;
	int8_t x4572 = 0;
	static volatile int64_t t93 = 718785609741LL;

	t93 = (((x4569|x4570)%x4571)>>x4572);

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4597 = -8;
	uint8_t x4600 = 23U;
	volatile uint64_t t94 = 409062796665443LLU;

	t94 = (((x4597|x4598)%x4599)>>x4600);

	if (t94 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x4649 = UINT64_MAX;
	uint8_t x4650 = 0U;
	int16_t x4652 = 1;
	uint64_t t95 = 2982326249329248LLU;

	t95 = (((x4649|x4650)%x4651)>>x4652);

	if (t95 != 27LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x4745 = INT16_MIN;
	volatile uint64_t x4746 = 87818302274180157LLU;
	static volatile uint32_t x4747 = UINT32_MAX;
	static uint16_t x4748 = 32U;
	uint64_t t96 = 407078633LLU;

	t96 = (((x4745|x4746)%x4747)>>x4748);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4797 = -1;
	static int32_t x4798 = -428;
	static int16_t x4799 = -1;
	uint8_t x4800 = 2U;
	volatile int32_t t97 = -1;

	t97 = (((x4797|x4798)%x4799)>>x4800);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4841 = 28U;
	static uint8_t x4842 = 40U;
	uint8_t x4844 = 8U;
	int32_t t98 = 38;

	t98 = (((x4841|x4842)%x4843)>>x4844);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4957 = 587092LL;
	int64_t x4958 = INT64_MAX;
	int64_t x4959 = -111LL;
	int16_t x4960 = 1;
	volatile int64_t t99 = 4879774298348LL;

	t99 = (((x4957|x4958)%x4959)>>x4960);

	if (t99 != 39LL) { NG(); } else { ; }
	
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


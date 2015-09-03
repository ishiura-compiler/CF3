#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int32_t t1 = -41;
int8_t x144 = -1;
volatile int32_t t4 = 360666;
volatile int32_t t7 = 114726;
int32_t t8 = 1;
static volatile int32_t t9 = -575;
volatile int16_t x641 = INT16_MAX;
volatile int32_t t10 = -59141;
int16_t x645 = INT16_MAX;
int32_t x705 = INT32_MAX;
uint16_t x738 = 11U;
uint16_t x740 = 9472U;
uint8_t x798 = 4U;
static int32_t x810 = 0;
volatile uint32_t x812 = 3U;
int16_t x851 = 636;
uint16_t x852 = 12U;
volatile int32_t t16 = 4;
int64_t x897 = 9820678773463LL;
uint32_t x898 = 3U;
static int64_t x899 = -130470974601288LL;
int32_t x968 = INT32_MIN;
volatile int16_t x1006 = 4;
uint8_t x1022 = 0U;
static uint32_t x1102 = 33U;
volatile int32_t x1141 = 78893;
int32_t x1346 = 2;
uint8_t x1347 = 40U;
uint32_t x1429 = 50U;
int16_t x1432 = 1;
uint32_t x1436 = UINT32_MAX;
int16_t x1516 = INT16_MAX;
uint8_t x1570 = 0U;
int64_t x1572 = -144LL;
int16_t x1895 = INT16_MAX;
int32_t x1923 = -1;
uint8_t x1955 = 7U;
int32_t x1956 = -115;
static volatile int32_t t41 = -6777110;
int32_t x1970 = 18;
int8_t x1971 = -2;
int64_t x2123 = INT64_MAX;
static volatile int32_t t44 = -14848;
volatile uint16_t x2146 = 2U;
static int16_t x2150 = 18;
int16_t x2173 = INT16_MAX;
uint8_t x2245 = UINT8_MAX;
int8_t x2256 = INT8_MIN;
static int32_t t50 = -94106437;
int8_t x2303 = -1;
int64_t t51 = -17LL;
uint32_t x2369 = 993641391U;
int32_t t53 = 40773682;
volatile int8_t x2390 = 1;
static volatile uint32_t x2706 = 19U;
volatile int32_t t58 = -7921997;
int64_t x2863 = INT64_MIN;
volatile uint64_t x2864 = 560855488LLU;
int16_t x2908 = -1;
volatile int32_t t60 = -8143;
int16_t x3001 = INT16_MAX;
uint16_t x3125 = 2572U;
uint8_t x3126 = 1U;
uint8_t x3181 = 6U;
int8_t x3368 = INT8_MIN;
static uint64_t x3393 = 20016174LLU;
int32_t x3394 = 1;
int8_t x3396 = -1;
int8_t x3464 = -3;
int32_t t74 = 183;
int8_t x3752 = INT8_MIN;
int32_t t78 = 436581;
int32_t x3776 = INT32_MIN;
volatile int32_t t81 = 11439;
static uint8_t x3898 = 13U;
static uint16_t x3962 = 2U;
volatile uint64_t x3963 = UINT64_MAX;
uint64_t x3970 = 1LLU;
static uint64_t x4218 = 14LLU;
uint64_t t88 = 37989777LLU;
uint32_t x4373 = UINT32_MAX;
static int8_t x4570 = 0;
static int32_t t93 = -47089585;
int16_t x4645 = 1334;
static int64_t t95 = -168444653966769LL;
volatile int8_t x4800 = INT8_MIN;
uint8_t x4818 = 13U;
static volatile int64_t x4820 = 425533297892983LL;
volatile int64_t t97 = -461913138438404LL;
int64_t x4848 = INT64_MIN;
volatile int32_t t99 = -745048953;


void f0(void) {
	uint32_t x2 = 43U;
	static int64_t x3 = 0LL;
	int64_t x4 = -1LL;
	int64_t t0 = 823563LL;

	t0 = (((x1>>x2)<=x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x61 = INT16_MAX;
	volatile uint8_t x62 = 31U;
	static int32_t x63 = -590;
	volatile uint8_t x64 = UINT8_MAX;

	t1 = (((x61>>x62)<=x63)&x64);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x141 = UINT32_MAX;
	uint8_t x142 = 2U;
	static int8_t x143 = -1;
	static volatile int32_t t2 = 25931180;

	t2 = (((x141>>x142)<=x143)&x144);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x149 = 1U;
	uint8_t x150 = 1U;
	int64_t x151 = -2740651231748206052LL;
	int8_t x152 = INT8_MIN;
	int32_t t3 = 634607505;

	t3 = (((x149>>x150)<=x151)&x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x201 = 32;
	uint32_t x202 = 15U;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MIN;

	t4 = (((x201>>x202)<=x203)&x204);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x221 = INT64_MAX;
	static uint64_t x222 = 17LLU;
	int32_t x223 = -1;
	int64_t x224 = INT64_MIN;
	int64_t t5 = 571681158LL;

	t5 = (((x221>>x222)<=x223)&x224);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = 23;
	int8_t x239 = -1;
	int8_t x240 = INT8_MAX;
	volatile int32_t t6 = -221620839;

	t6 = (((x237>>x238)<=x239)&x240);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x333 = 13U;
	volatile uint8_t x334 = 5U;
	int32_t x335 = INT32_MIN;
	static volatile int8_t x336 = -1;

	t7 = (((x333>>x334)<=x335)&x336);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x493 = UINT64_MAX;
	static uint16_t x494 = 8U;
	int16_t x495 = 77;
	int16_t x496 = INT16_MIN;

	t8 = (((x493>>x494)<=x495)&x496);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x549 = INT8_MAX;
	int8_t x550 = 26;
	static int16_t x551 = INT16_MIN;
	static uint16_t x552 = 1228U;

	t9 = (((x549>>x550)<=x551)&x552);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x642 = 0;
	uint16_t x643 = UINT16_MAX;
	int32_t x644 = INT32_MIN;

	t10 = (((x641>>x642)<=x643)&x644);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x646 = 0U;
	int64_t x647 = -1978714055561LL;
	volatile int32_t x648 = -1;
	volatile int32_t t11 = -22;

	t11 = (((x645>>x646)<=x647)&x648);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x706 = 6U;
	int8_t x707 = INT8_MIN;
	uint32_t x708 = 111423736U;
	uint32_t t12 = 8980969U;

	t12 = (((x705>>x706)<=x707)&x708);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x737 = 10593;
	int32_t x739 = INT32_MIN;
	int32_t t13 = -424;

	t13 = (((x737>>x738)<=x739)&x740);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x797 = UINT64_MAX;
	volatile int32_t x799 = -1;
	int64_t x800 = -3147118788072LL;
	volatile int64_t t14 = -2375499049214803728LL;

	t14 = (((x797>>x798)<=x799)&x800);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x809 = 14916U;
	volatile uint32_t x811 = UINT32_MAX;
	volatile uint32_t t15 = 226U;

	t15 = (((x809>>x810)<=x811)&x812);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x849 = 0;
	int16_t x850 = 3;

	t16 = (((x849>>x850)<=x851)&x852);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x877 = UINT32_MAX;
	static uint32_t x878 = 0U;
	uint8_t x879 = UINT8_MAX;
	static int16_t x880 = 145;
	volatile int32_t t17 = 1041311;

	t17 = (((x877>>x878)<=x879)&x880);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x900 = INT8_MAX;
	int32_t t18 = -181;

	t18 = (((x897>>x898)<=x899)&x900);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x905 = UINT64_MAX;
	static volatile int8_t x906 = 2;
	int16_t x907 = INT16_MIN;
	volatile int64_t x908 = -79089LL;
	int64_t t19 = -243203452473LL;

	t19 = (((x905>>x906)<=x907)&x908);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x941 = 10U;
	static int16_t x942 = 1;
	int64_t x943 = INT64_MIN;
	int32_t x944 = INT32_MIN;
	int32_t t20 = -258062;

	t20 = (((x941>>x942)<=x943)&x944);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x965 = 21429LLU;
	uint8_t x966 = 59U;
	volatile int64_t x967 = -1LL;
	volatile int32_t t21 = -1221259;

	t21 = (((x965>>x966)<=x967)&x968);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1005 = INT8_MAX;
	static volatile uint64_t x1007 = 636025525LLU;
	static int16_t x1008 = -243;
	int32_t t22 = -1128;

	t22 = (((x1005>>x1006)<=x1007)&x1008);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1021 = UINT32_MAX;
	static volatile int64_t x1023 = -1LL;
	uint64_t x1024 = UINT64_MAX;
	uint64_t t23 = 60225LLU;

	t23 = (((x1021>>x1022)<=x1023)&x1024);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1045 = 916U;
	uint32_t x1046 = 16U;
	int64_t x1047 = -1LL;
	static int8_t x1048 = -4;
	static volatile int32_t t24 = 5;

	t24 = (((x1045>>x1046)<=x1047)&x1048);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1101 = INT64_MAX;
	uint32_t x1103 = 38942527U;
	int64_t x1104 = -33487362LL;
	volatile int64_t t25 = 906507LL;

	t25 = (((x1101>>x1102)<=x1103)&x1104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1142 = 1U;
	int16_t x1143 = 9;
	int64_t x1144 = 928428712LL;
	volatile int64_t t26 = -39117744LL;

	t26 = (((x1141>>x1142)<=x1143)&x1144);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1149 = 664U;
	uint64_t x1150 = 1LLU;
	volatile uint32_t x1151 = 3382805U;
	int16_t x1152 = INT16_MAX;
	static volatile int32_t t27 = -3367;

	t27 = (((x1149>>x1150)<=x1151)&x1152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1161 = 950U;
	int8_t x1162 = 2;
	int16_t x1163 = INT16_MAX;
	uint16_t x1164 = 13U;
	int32_t t28 = -105976;

	t28 = (((x1161>>x1162)<=x1163)&x1164);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1221 = UINT32_MAX;
	volatile uint16_t x1222 = 18U;
	static uint64_t x1223 = 30905LLU;
	int8_t x1224 = -7;
	volatile int32_t t29 = 0;

	t29 = (((x1221>>x1222)<=x1223)&x1224);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1345 = 6754619U;
	uint32_t x1348 = UINT32_MAX;
	static uint32_t t30 = 2U;

	t30 = (((x1345>>x1346)<=x1347)&x1348);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1430 = 2U;
	volatile int8_t x1431 = INT8_MAX;
	volatile int32_t t31 = -8425;

	t31 = (((x1429>>x1430)<=x1431)&x1432);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1433 = UINT64_MAX;
	uint8_t x1434 = 17U;
	int16_t x1435 = 0;
	volatile uint32_t t32 = 177369U;

	t32 = (((x1433>>x1434)<=x1435)&x1436);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1457 = 124U;
	static uint16_t x1458 = 3U;
	int64_t x1459 = -1LL;
	int8_t x1460 = INT8_MIN;
	volatile int32_t t33 = 276042;

	t33 = (((x1457>>x1458)<=x1459)&x1460);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1513 = 1891062U;
	uint64_t x1514 = 1LLU;
	uint64_t x1515 = UINT64_MAX;
	volatile int32_t t34 = -7984;

	t34 = (((x1513>>x1514)<=x1515)&x1516);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1569 = UINT64_MAX;
	int64_t x1571 = INT64_MAX;
	static volatile int64_t t35 = 25188009197430475LL;

	t35 = (((x1569>>x1570)<=x1571)&x1572);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1717 = INT64_MAX;
	static uint8_t x1718 = 2U;
	int16_t x1719 = -1;
	uint8_t x1720 = 8U;
	static volatile int32_t t36 = -24355093;

	t36 = (((x1717>>x1718)<=x1719)&x1720);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1725 = INT64_MAX;
	static int8_t x1726 = 13;
	static volatile uint8_t x1727 = 4U;
	int32_t x1728 = -172;
	static int32_t t37 = 26;

	t37 = (((x1725>>x1726)<=x1727)&x1728);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1873 = 5LL;
	static volatile int64_t x1874 = 9LL;
	volatile uint16_t x1875 = UINT16_MAX;
	uint64_t x1876 = 8298365LLU;
	volatile uint64_t t38 = 656971729362994LLU;

	t38 = (((x1873>>x1874)<=x1875)&x1876);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1893 = INT16_MAX;
	volatile uint8_t x1894 = 1U;
	static int64_t x1896 = INT64_MIN;
	volatile int64_t t39 = -1LL;

	t39 = (((x1893>>x1894)<=x1895)&x1896);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1921 = INT32_MAX;
	uint8_t x1922 = 19U;
	static int32_t x1924 = INT32_MIN;
	int32_t t40 = 21;

	t40 = (((x1921>>x1922)<=x1923)&x1924);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x1953 = INT64_MAX;
	int8_t x1954 = 4;

	t41 = (((x1953>>x1954)<=x1955)&x1956);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1969 = 154U;
	volatile uint16_t x1972 = 4139U;
	volatile int32_t t42 = -525066;

	t42 = (((x1969>>x1970)<=x1971)&x1972);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1981 = 483996592281896LLU;
	uint16_t x1982 = 13U;
	uint64_t x1983 = 4704LLU;
	int64_t x1984 = INT64_MAX;
	static int64_t t43 = 8002756631LL;

	t43 = (((x1981>>x1982)<=x1983)&x1984);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2121 = UINT64_MAX;
	int8_t x2122 = 28;
	int32_t x2124 = 190185;

	t44 = (((x2121>>x2122)<=x2123)&x2124);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2145 = UINT32_MAX;
	int64_t x2147 = 200030570271323354LL;
	int16_t x2148 = INT16_MAX;
	static volatile int32_t t45 = 176018802;

	t45 = (((x2145>>x2146)<=x2147)&x2148);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2149 = 5U;
	int32_t x2151 = -1;
	int16_t x2152 = INT16_MAX;
	int32_t t46 = 177;

	t46 = (((x2149>>x2150)<=x2151)&x2152);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2157 = INT8_MAX;
	uint8_t x2158 = 3U;
	uint8_t x2159 = 106U;
	volatile uint8_t x2160 = 1U;
	int32_t t47 = 463;

	t47 = (((x2157>>x2158)<=x2159)&x2160);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2174 = 0U;
	int32_t x2175 = INT32_MIN;
	static int64_t x2176 = -1LL;
	int64_t t48 = -202816LL;

	t48 = (((x2173>>x2174)<=x2175)&x2176);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2246 = 5U;
	uint32_t x2247 = 1U;
	static int16_t x2248 = -73;
	int32_t t49 = -5613;

	t49 = (((x2245>>x2246)<=x2247)&x2248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2253 = UINT16_MAX;
	uint8_t x2254 = 7U;
	uint32_t x2255 = 407U;

	t50 = (((x2253>>x2254)<=x2255)&x2256);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2301 = UINT16_MAX;
	uint8_t x2302 = 10U;
	int64_t x2304 = 1609638970489LL;

	t51 = (((x2301>>x2302)<=x2303)&x2304);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2353 = 44LLU;
	volatile uint16_t x2354 = 18U;
	int32_t x2355 = INT32_MAX;
	static int8_t x2356 = -1;
	volatile int32_t t52 = -19185;

	t52 = (((x2353>>x2354)<=x2355)&x2356);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x2370 = 7;
	uint8_t x2371 = UINT8_MAX;
	static int16_t x2372 = INT16_MIN;

	t53 = (((x2369>>x2370)<=x2371)&x2372);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2389 = 35U;
	uint16_t x2391 = 4U;
	static volatile int16_t x2392 = INT16_MAX;
	volatile int32_t t54 = 5;

	t54 = (((x2389>>x2390)<=x2391)&x2392);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2509 = 1163692LLU;
	int8_t x2510 = 30;
	int8_t x2511 = -34;
	uint16_t x2512 = UINT16_MAX;
	static int32_t t55 = -11;

	t55 = (((x2509>>x2510)<=x2511)&x2512);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x2517 = 24838U;
	int8_t x2518 = 1;
	int32_t x2519 = INT32_MIN;
	int16_t x2520 = INT16_MIN;
	volatile int32_t t56 = 8217171;

	t56 = (((x2517>>x2518)<=x2519)&x2520);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2593 = 36U;
	int8_t x2594 = 18;
	int64_t x2595 = -1LL;
	int8_t x2596 = INT8_MAX;
	volatile int32_t t57 = -12;

	t57 = (((x2593>>x2594)<=x2595)&x2596);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2705 = UINT32_MAX;
	volatile int32_t x2707 = INT32_MAX;
	int8_t x2708 = 4;

	t58 = (((x2705>>x2706)<=x2707)&x2708);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2861 = 0U;
	volatile uint8_t x2862 = 7U;
	static volatile uint64_t t59 = 7102262231877007121LLU;

	t59 = (((x2861>>x2862)<=x2863)&x2864);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2905 = 150LL;
	volatile uint16_t x2906 = 1U;
	static int32_t x2907 = INT32_MAX;

	t60 = (((x2905>>x2906)<=x2907)&x2908);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3002 = 3;
	volatile int8_t x3003 = 52;
	int8_t x3004 = -1;
	volatile int32_t t61 = 1376;

	t61 = (((x3001>>x3002)<=x3003)&x3004);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3061 = 1;
	uint8_t x3062 = 6U;
	static int8_t x3063 = INT8_MAX;
	volatile uint16_t x3064 = UINT16_MAX;
	int32_t t62 = -94477249;

	t62 = (((x3061>>x3062)<=x3063)&x3064);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3073 = 0U;
	int8_t x3074 = 8;
	int32_t x3075 = INT32_MAX;
	static int16_t x3076 = INT16_MIN;
	static volatile int32_t t63 = -15;

	t63 = (((x3073>>x3074)<=x3075)&x3076);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3101 = UINT8_MAX;
	uint8_t x3102 = 3U;
	int32_t x3103 = 8045586;
	int8_t x3104 = 42;
	volatile int32_t t64 = 97;

	t64 = (((x3101>>x3102)<=x3103)&x3104);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3117 = UINT32_MAX;
	volatile int8_t x3118 = 0;
	int32_t x3119 = INT32_MIN;
	int64_t x3120 = -1LL;
	static int64_t t65 = 99864865344520LL;

	t65 = (((x3117>>x3118)<=x3119)&x3120);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3127 = UINT16_MAX;
	static int64_t x3128 = -1LL;
	static int64_t t66 = 939212611105342LL;

	t66 = (((x3125>>x3126)<=x3127)&x3128);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3141 = INT16_MAX;
	uint32_t x3142 = 3U;
	int32_t x3143 = 55;
	uint8_t x3144 = UINT8_MAX;
	static volatile int32_t t67 = -1611;

	t67 = (((x3141>>x3142)<=x3143)&x3144);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3182 = 0U;
	uint64_t x3183 = 85108958584396496LLU;
	int16_t x3184 = 37;
	volatile int32_t t68 = -1575;

	t68 = (((x3181>>x3182)<=x3183)&x3184);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3365 = INT8_MAX;
	volatile int32_t x3366 = 0;
	static uint16_t x3367 = 198U;
	int32_t t69 = 29;

	t69 = (((x3365>>x3366)<=x3367)&x3368);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3377 = 26U;
	static uint32_t x3378 = 9U;
	int16_t x3379 = -1492;
	volatile int8_t x3380 = INT8_MIN;
	int32_t t70 = -150;

	t70 = (((x3377>>x3378)<=x3379)&x3380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3395 = INT64_MIN;
	volatile int32_t t71 = -56420482;

	t71 = (((x3393>>x3394)<=x3395)&x3396);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x3461 = 59532202187LLU;
	volatile uint16_t x3462 = 0U;
	volatile uint64_t x3463 = 1302537LLU;
	int32_t t72 = -3145;

	t72 = (((x3461>>x3462)<=x3463)&x3464);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3489 = 0U;
	uint8_t x3490 = 2U;
	uint64_t x3491 = UINT64_MAX;
	uint16_t x3492 = 153U;
	volatile int32_t t73 = 37;

	t73 = (((x3489>>x3490)<=x3491)&x3492);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3581 = 53U;
	static uint8_t x3582 = 0U;
	volatile uint64_t x3583 = 59170821882775337LLU;
	uint8_t x3584 = 2U;

	t74 = (((x3581>>x3582)<=x3583)&x3584);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x3641 = 513420U;
	uint8_t x3642 = 3U;
	int64_t x3643 = INT64_MIN;
	uint32_t x3644 = UINT32_MAX;
	volatile uint32_t t75 = 22U;

	t75 = (((x3641>>x3642)<=x3643)&x3644);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3657 = 1256646540036253533LLU;
	uint8_t x3658 = 40U;
	static int16_t x3659 = -457;
	int32_t x3660 = INT32_MIN;
	volatile int32_t t76 = -38;

	t76 = (((x3657>>x3658)<=x3659)&x3660);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3733 = UINT32_MAX;
	uint64_t x3734 = 5LLU;
	static int64_t x3735 = 89082LL;
	int16_t x3736 = INT16_MIN;
	int32_t t77 = 3560;

	t77 = (((x3733>>x3734)<=x3735)&x3736);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3749 = 241640050697450357LLU;
	uint8_t x3750 = 29U;
	uint64_t x3751 = 3LLU;

	t78 = (((x3749>>x3750)<=x3751)&x3752);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3773 = INT32_MAX;
	uint8_t x3774 = 11U;
	int8_t x3775 = -24;
	volatile int32_t t79 = 380607012;

	t79 = (((x3773>>x3774)<=x3775)&x3776);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3785 = 244;
	int8_t x3786 = 11;
	volatile uint64_t x3787 = UINT64_MAX;
	int64_t x3788 = -1LL;
	int64_t t80 = -1866408350LL;

	t80 = (((x3785>>x3786)<=x3787)&x3788);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3797 = UINT32_MAX;
	int8_t x3798 = 1;
	int32_t x3799 = INT32_MAX;
	int8_t x3800 = INT8_MIN;

	t81 = (((x3797>>x3798)<=x3799)&x3800);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3897 = 2U;
	int64_t x3899 = INT64_MAX;
	static uint64_t x3900 = 1936546LLU;
	static uint64_t t82 = 8LLU;

	t82 = (((x3897>>x3898)<=x3899)&x3900);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3941 = 0;
	static volatile uint8_t x3942 = 9U;
	static volatile int16_t x3943 = INT16_MIN;
	volatile int64_t x3944 = 9129665LL;
	int64_t t83 = 51193009425LL;

	t83 = (((x3941>>x3942)<=x3943)&x3944);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3961 = 51004091LLU;
	uint8_t x3964 = 31U;
	volatile int32_t t84 = 5;

	t84 = (((x3961>>x3962)<=x3963)&x3964);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3969 = 581942;
	int16_t x3971 = 101;
	volatile int8_t x3972 = -1;
	int32_t t85 = 6;

	t85 = (((x3969>>x3970)<=x3971)&x3972);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4053 = INT64_MAX;
	int8_t x4054 = 4;
	uint16_t x4055 = 3U;
	int32_t x4056 = -6;
	static int32_t t86 = 1;

	t86 = (((x4053>>x4054)<=x4055)&x4056);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4089 = UINT64_MAX;
	uint16_t x4090 = 1U;
	int32_t x4091 = 4;
	int64_t x4092 = 15658272430383733LL;
	static int64_t t87 = -254LL;

	t87 = (((x4089>>x4090)<=x4091)&x4092);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4217 = INT8_MAX;
	int32_t x4219 = INT32_MIN;
	uint64_t x4220 = 1999LLU;

	t88 = (((x4217>>x4218)<=x4219)&x4220);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4297 = INT16_MAX;
	static int8_t x4298 = 0;
	uint16_t x4299 = UINT16_MAX;
	static int16_t x4300 = 1;
	static volatile int32_t t89 = -120832354;

	t89 = (((x4297>>x4298)<=x4299)&x4300);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4374 = 1U;
	uint16_t x4375 = 31405U;
	volatile int16_t x4376 = -1;
	int32_t t90 = 181272;

	t90 = (((x4373>>x4374)<=x4375)&x4376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4429 = INT8_MAX;
	static int8_t x4430 = 26;
	int8_t x4431 = INT8_MIN;
	volatile uint64_t x4432 = UINT64_MAX;
	static uint64_t t91 = 341671389LLU;

	t91 = (((x4429>>x4430)<=x4431)&x4432);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4533 = UINT64_MAX;
	static int8_t x4534 = 22;
	uint64_t x4535 = 5LLU;
	uint8_t x4536 = UINT8_MAX;
	int32_t t92 = -5313;

	t92 = (((x4533>>x4534)<=x4535)&x4536);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4569 = 107976539722LLU;
	static int32_t x4571 = INT32_MIN;
	int32_t x4572 = -1;

	t93 = (((x4569>>x4570)<=x4571)&x4572);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x4646 = 0;
	int16_t x4647 = INT16_MIN;
	static uint64_t x4648 = UINT64_MAX;
	volatile uint64_t t94 = 24282LLU;

	t94 = (((x4645>>x4646)<=x4647)&x4648);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x4733 = INT64_MAX;
	uint16_t x4734 = 0U;
	int8_t x4735 = INT8_MIN;
	int64_t x4736 = INT64_MIN;

	t95 = (((x4733>>x4734)<=x4735)&x4736);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4797 = INT16_MAX;
	static uint8_t x4798 = 3U;
	int16_t x4799 = 340;
	volatile int32_t t96 = -43321829;

	t96 = (((x4797>>x4798)<=x4799)&x4800);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4817 = 371;
	volatile uint32_t x4819 = 5377U;

	t97 = (((x4817>>x4818)<=x4819)&x4820);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x4845 = UINT64_MAX;
	static int8_t x4846 = 12;
	volatile int32_t x4847 = -105683586;
	int64_t t98 = 2704518LL;

	t98 = (((x4845>>x4846)<=x4847)&x4848);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4921 = 4117U;
	volatile uint32_t x4922 = 3U;
	uint32_t x4923 = 27U;
	int16_t x4924 = INT16_MIN;

	t99 = (((x4921>>x4922)<=x4923)&x4924);

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


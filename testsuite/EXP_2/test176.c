#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x150 = INT16_MIN;
static uint8_t x152 = 6U;
uint16_t x161 = UINT16_MAX;
int64_t x162 = 510059576549094LL;
int16_t x164 = 8;
int64_t t2 = -230180LL;
static int16_t x186 = INT16_MAX;
static int8_t x187 = -1;
int16_t x191 = -236;
static uint64_t x211 = 9769LLU;
int16_t x379 = INT16_MIN;
int64_t x382 = -1LL;
int32_t x383 = -1;
uint64_t x481 = UINT64_MAX;
uint32_t x493 = 188766U;
int16_t x494 = INT16_MIN;
static int32_t x534 = -96277;
uint64_t t13 = 2LLU;
uint32_t x583 = 509511104U;
volatile int16_t x738 = INT16_MAX;
int64_t x746 = -2LL;
uint8_t x748 = 0U;
int64_t t17 = -134LL;
uint32_t x793 = UINT32_MAX;
uint8_t x794 = 3U;
int8_t x795 = 0;
int8_t x824 = 10;
uint16_t x889 = 0U;
static int16_t x890 = -1;
static uint64_t x892 = 1LLU;
int8_t x932 = 24;
uint64_t x950 = UINT64_MAX;
static int8_t x952 = 3;
uint32_t x1097 = 317209U;
volatile uint64_t x1205 = 190637791988LLU;
uint32_t x1239 = 19U;
int16_t x1378 = -1;
int16_t x1380 = 3;
uint64_t x1419 = 229146817LLU;
volatile uint64_t t31 = 12225029045LLU;
uint64_t x1426 = UINT64_MAX;
int16_t x1459 = -1475;
uint32_t t33 = 9565U;
int8_t x1492 = 0;
uint64_t t35 = 91140279165LLU;
uint64_t x1533 = 240129716423332249LLU;
volatile uint64_t t37 = 1339LLU;
int64_t x1565 = INT64_MAX;
int32_t x1568 = 8;
static int8_t x1632 = 59;
int8_t x1774 = INT8_MIN;
volatile uint64_t t42 = 19884682LLU;
int32_t t43 = 10;
static int16_t x1968 = 4;
int16_t x2043 = INT16_MAX;
int64_t x2051 = -1LL;
uint16_t x2070 = UINT16_MAX;
int64_t x2137 = 233181009383LL;
volatile int16_t x2190 = INT16_MIN;
volatile uint16_t x2192 = 13U;
volatile uint64_t x2221 = 2170LLU;
uint64_t x2224 = 0LLU;
static volatile uint16_t x2353 = 20284U;
static int8_t x2354 = INT8_MIN;
int8_t x2410 = INT8_MIN;
uint8_t x2488 = 10U;
int8_t x2731 = INT8_MAX;
uint32_t x2777 = 7885U;
static int16_t x2830 = -1;
int32_t t63 = -6679;
uint16_t x2947 = UINT16_MAX;
volatile int32_t t64 = -3017282;
int32_t x3046 = INT32_MAX;
static volatile int32_t t67 = -52;
int32_t x3062 = -1;
int32_t x3063 = -1;
uint64_t x3265 = 7138602609813LLU;
int32_t x3274 = INT32_MAX;
int8_t x3300 = 0;
uint8_t x3387 = 0U;
uint64_t x3532 = 0LLU;
uint64_t x3681 = 135220519176LLU;
int32_t x3684 = 9;
volatile int32_t t78 = 7767;
uint8_t x3804 = 30U;
uint8_t x4108 = 2U;
static int8_t x4273 = INT8_MIN;
uint8_t x4354 = UINT8_MAX;
int64_t x4385 = INT64_MIN;
volatile uint64_t t88 = 818LLU;
uint32_t x4389 = 210079U;
int8_t x4413 = INT8_MIN;
int32_t x4414 = 9879;
static int32_t x4581 = 24;
static int64_t x4650 = 301666890996LL;
int16_t x4693 = INT16_MAX;
int8_t x4694 = INT8_MIN;
int8_t x4696 = 9;
int8_t x4704 = 41;
static int64_t x4717 = 2LL;
int32_t x4720 = 58;
volatile int64_t t98 = -257166301LL;


void f0(void) {
	volatile int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = -1;
	static uint16_t x88 = 5U;
	int32_t t0 = 800;

	t0 = ((x85+(x86-x87))>>x88);

	if (t0 != 2047) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int64_t x151 = -9790LL;
	int64_t t1 = -34418LL;

	t1 = ((x149+(x150-x151))>>x152);

	if (t1 != 664LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x163 = -1;

	t2 = ((x161+(x162-x163))>>x164);

	if (t2 != 1992420221150LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x185 = 9LLU;
	uint8_t x188 = 1U;
	uint64_t t3 = 1556261747484079512LLU;

	t3 = ((x185+(x186-x187))>>x188);

	if (t3 != 16388LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x189 = 68U;
	int16_t x190 = INT16_MAX;
	static uint8_t x192 = 2U;
	int32_t t4 = -955825;

	t4 = ((x189+(x190-x191))>>x192);

	if (t4 != 8267) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x209 = UINT8_MAX;
	static int64_t x210 = INT64_MIN;
	static uint8_t x212 = 1U;
	uint64_t t5 = 0LLU;

	t5 = ((x209+(x210-x211))>>x212);

	if (t5 != 4611686018427383147LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x229 = 173U;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = 3;
	uint16_t x232 = 3U;
	volatile uint32_t t6 = 13U;

	t6 = ((x229+(x230-x231))>>x232);

	if (t6 != 8213U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 19683531652019410LLU;
	int64_t x307 = -1LL;
	int16_t x308 = 1;
	uint64_t t7 = 46618733LLU;

	t7 = ((x305+(x306-x307))>>x308);

	if (t7 != 9841765826009641LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x377 = 1;
	static uint32_t x378 = 52605U;
	volatile int8_t x380 = 17;
	volatile uint32_t t8 = 1255U;

	t8 = ((x377+(x378-x379))>>x380);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x381 = UINT8_MAX;
	static int16_t x384 = 17;
	volatile int64_t t9 = 685515548971453764LL;

	t9 = ((x381+(x382-x383))>>x384);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x465 = -10625020LL;
	uint32_t x466 = UINT32_MAX;
	uint16_t x467 = 14142U;
	int8_t x468 = 3;
	volatile int64_t t10 = -121502009702440555LL;

	t10 = ((x465+(x466-x467))>>x468);

	if (t10 != 535541016LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x482 = -73;
	int8_t x483 = INT8_MAX;
	uint64_t x484 = 8LLU;
	volatile uint64_t t11 = 11146985497110507LLU;

	t11 = ((x481+(x482-x483))>>x484);

	if (t11 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x495 = -1;
	volatile uint8_t x496 = 1U;
	volatile uint32_t t12 = 1U;

	t12 = ((x493+(x494-x495))>>x496);

	if (t12 != 77999U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x533 = -1;
	uint64_t x535 = UINT64_MAX;
	volatile int16_t x536 = 0;

	t13 = ((x533+(x534-x535))>>x536);

	if (t13 != 18446744073709455339LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x581 = -1;
	static uint32_t x582 = 54U;
	uint8_t x584 = 0U;
	uint32_t t14 = 50353421U;

	t14 = ((x581+(x582-x583))>>x584);

	if (t14 != 3785456245U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x665 = INT8_MIN;
	int32_t x666 = INT32_MAX;
	static int64_t x667 = -1LL;
	volatile uint64_t x668 = 49LLU;
	static volatile int64_t t15 = 93105527521609646LL;

	t15 = ((x665+(x666-x667))>>x668);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x737 = 39U;
	static int32_t x739 = -2263;
	int32_t x740 = 0;
	int32_t t16 = 740;

	t16 = ((x737+(x738-x739))>>x740);

	if (t16 != 35069) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x745 = 54U;
	volatile int16_t x747 = INT16_MIN;

	t17 = ((x745+(x746-x747))>>x748);

	if (t17 != 32820LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x769 = -1;
	int64_t x770 = INT64_MAX;
	uint8_t x771 = 91U;
	uint16_t x772 = 0U;
	static volatile int64_t t18 = 2776LL;

	t18 = ((x769+(x770-x771))>>x772);

	if (t18 != 9223372036854775715LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x796 = 1;
	volatile uint32_t t19 = 118430U;

	t19 = ((x793+(x794-x795))>>x796);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x821 = INT8_MIN;
	int8_t x822 = INT8_MAX;
	int32_t x823 = -1;
	volatile int32_t t20 = 0;

	t20 = ((x821+(x822-x823))>>x824);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x891 = UINT64_MAX;
	volatile uint64_t t21 = 9LLU;

	t21 = ((x889+(x890-x891))>>x892);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x929 = -1;
	static uint32_t x930 = 849U;
	uint64_t x931 = 1LLU;
	uint64_t t22 = 170570061762854864LLU;

	t22 = ((x929+(x930-x931))>>x932);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x949 = -4;
	volatile uint16_t x951 = UINT16_MAX;
	uint64_t t23 = 546542LLU;

	t23 = ((x949+(x950-x951))>>x952);

	if (t23 != 2305843009213685759LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1098 = UINT16_MAX;
	static volatile int32_t x1099 = -5821285;
	volatile uint8_t x1100 = 0U;
	uint32_t t24 = 305510981U;

	t24 = ((x1097+(x1098-x1099))>>x1100);

	if (t24 != 6204029U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1169 = UINT64_MAX;
	int32_t x1170 = -289490390;
	volatile int32_t x1171 = -6;
	volatile int16_t x1172 = 1;
	uint64_t t25 = 1602294439LLU;

	t25 = ((x1169+(x1170-x1171))>>x1172);

	if (t25 != 9223372036710030615LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1206 = -1;
	int16_t x1207 = INT16_MAX;
	volatile int8_t x1208 = 0;
	uint64_t t26 = 2142255662LLU;

	t26 = ((x1205+(x1206-x1207))>>x1208);

	if (t26 != 190637759220LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1225 = UINT64_MAX;
	int32_t x1226 = INT32_MIN;
	static volatile int64_t x1227 = INT64_MIN;
	uint16_t x1228 = 29U;
	uint64_t t27 = 13LLU;

	t27 = ((x1225+(x1226-x1227))>>x1228);

	if (t27 != 17179869179LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1237 = INT32_MIN;
	uint16_t x1238 = 1U;
	int8_t x1240 = 1;
	uint32_t t28 = 1U;

	t28 = ((x1237+(x1238-x1239))>>x1240);

	if (t28 != 1073741815U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1249 = INT8_MIN;
	uint32_t x1250 = UINT32_MAX;
	int32_t x1251 = INT32_MAX;
	static volatile int8_t x1252 = 4;
	uint32_t t29 = 960654U;

	t29 = ((x1249+(x1250-x1251))>>x1252);

	if (t29 != 134217720U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1377 = 0U;
	int16_t x1379 = -1;
	static int32_t t30 = 99255;

	t30 = ((x1377+(x1378-x1379))>>x1380);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1417 = -1;
	int64_t x1418 = -1LL;
	static uint16_t x1420 = 14U;

	t31 = ((x1417+(x1418-x1419))>>x1420);

	if (t31 != 1125899906828637LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1425 = -129437924LL;
	uint8_t x1427 = 1U;
	uint8_t x1428 = 2U;
	uint64_t t32 = 104491340944260LLU;

	t32 = ((x1425+(x1426-x1427))>>x1428);

	if (t32 != 4611686018395028422LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1457 = 6813574U;
	static uint16_t x1458 = 0U;
	int8_t x1460 = 13;

	t33 = ((x1457+(x1458-x1459))>>x1460);

	if (t33 != 831U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1489 = -1;
	uint16_t x1490 = 29597U;
	volatile uint32_t x1491 = 3734U;
	uint32_t t34 = 214329505U;

	t34 = ((x1489+(x1490-x1491))>>x1492);

	if (t34 != 25862U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1493 = 16177;
	static uint64_t x1494 = UINT64_MAX;
	volatile uint32_t x1495 = UINT32_MAX;
	volatile uint16_t x1496 = 1U;

	t35 = ((x1493+(x1494-x1495))>>x1496);

	if (t35 != 9223372034707300248LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1513 = INT16_MIN;
	uint32_t x1514 = 592U;
	int32_t x1515 = -1;
	uint16_t x1516 = 6U;
	uint32_t t36 = 266699398U;

	t36 = ((x1513+(x1514-x1515))>>x1516);

	if (t36 != 67108361U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1534 = INT16_MAX;
	static volatile int64_t x1535 = -1LL;
	uint64_t x1536 = 7LLU;

	t37 = ((x1533+(x1534-x1535))>>x1536);

	if (t37 != 1876013409557539LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1566 = 65U;
	uint16_t x1567 = UINT16_MAX;
	int64_t t38 = 151LL;

	t38 = ((x1565+(x1566-x1567))>>x1568);

	if (t38 != 36028797018963712LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1569 = 3U;
	volatile int32_t x1570 = 162911;
	volatile int32_t x1571 = -1;
	uint16_t x1572 = 11U;
	volatile int32_t t39 = -954524;

	t39 = ((x1569+(x1570-x1571))>>x1572);

	if (t39 != 79) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1629 = -1LL;
	int16_t x1630 = INT16_MAX;
	static uint64_t x1631 = 503LLU;
	volatile uint64_t t40 = 192424693LLU;

	t40 = ((x1629+(x1630-x1631))>>x1632);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1773 = INT8_MIN;
	int16_t x1775 = -1497;
	static int32_t x1776 = 6;
	static int32_t t41 = 106;

	t41 = ((x1773+(x1774-x1775))>>x1776);

	if (t41 != 19) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1785 = 135326854455LLU;
	static volatile int64_t x1786 = INT64_MIN;
	static int16_t x1787 = -1;
	uint8_t x1788 = 1U;

	t42 = ((x1785+(x1786-x1787))>>x1788);

	if (t42 != 4611686086090815132LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1849 = INT32_MAX;
	uint16_t x1850 = 10850U;
	static volatile uint16_t x1851 = UINT16_MAX;
	int8_t x1852 = 0;

	t43 = ((x1849+(x1850-x1851))>>x1852);

	if (t43 != 2147428962) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x1965 = 5U;
	uint32_t x1966 = 0U;
	static uint8_t x1967 = 28U;
	volatile uint32_t t44 = 7896U;

	t44 = ((x1965+(x1966-x1967))>>x1968);

	if (t44 != 268435454U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1993 = -1;
	static volatile uint8_t x1994 = 1U;
	int32_t x1995 = -29445330;
	int8_t x1996 = 4;
	int32_t t45 = -3689914;

	t45 = ((x1993+(x1994-x1995))>>x1996);

	if (t45 != 1840333) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2009 = INT16_MIN;
	uint32_t x2010 = 16U;
	int32_t x2011 = INT32_MIN;
	uint32_t x2012 = 3U;
	uint32_t t46 = 12700427U;

	t46 = ((x2009+(x2010-x2011))>>x2012);

	if (t46 != 268431362U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2041 = 50965U;
	static volatile uint64_t x2042 = 1889279263091464176LLU;
	int32_t x2044 = 0;
	volatile uint64_t t47 = 3739480420635159LLU;

	t47 = ((x2041+(x2042-x2043))>>x2044);

	if (t47 != 1889279263091482374LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2049 = INT8_MIN;
	uint64_t x2050 = 1112LLU;
	uint8_t x2052 = 61U;
	volatile uint64_t t48 = 2014309117045LLU;

	t48 = ((x2049+(x2050-x2051))>>x2052);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2069 = 9U;
	int8_t x2071 = 5;
	static int8_t x2072 = 1;
	volatile int32_t t49 = 0;

	t49 = ((x2069+(x2070-x2071))>>x2072);

	if (t49 != 32769) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2093 = 1U;
	uint8_t x2094 = UINT8_MAX;
	uint32_t x2095 = UINT32_MAX;
	static uint16_t x2096 = 7U;
	volatile uint32_t t50 = 17U;

	t50 = ((x2093+(x2094-x2095))>>x2096);

	if (t50 != 2U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2138 = 6487212911706LLU;
	int32_t x2139 = INT32_MIN;
	volatile uint8_t x2140 = 3U;
	static volatile uint64_t t51 = 1382LLU;

	t51 = ((x2137+(x2138-x2139))>>x2140);

	if (t51 != 840317675592LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2189 = 36999U;
	int32_t x2191 = -1;
	uint32_t t52 = 2094986251U;

	t52 = ((x2189+(x2190-x2191))>>x2192);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x2222 = 214LLU;
	uint64_t x2223 = 137LLU;
	uint64_t t53 = 108LLU;

	t53 = ((x2221+(x2222-x2223))>>x2224);

	if (t53 != 2247LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2355 = 4;
	int8_t x2356 = 7;
	static int32_t t54 = 919259666;

	t54 = ((x2353+(x2354-x2355))>>x2356);

	if (t54 != 157) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2409 = INT8_MIN;
	uint64_t x2411 = 73347LLU;
	uint8_t x2412 = 62U;
	uint64_t t55 = 507182894908LLU;

	t55 = ((x2409+(x2410-x2411))>>x2412);

	if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2485 = 38425801376036LL;
	static uint16_t x2486 = UINT16_MAX;
	static int16_t x2487 = INT16_MIN;
	int64_t t56 = -24361LL;

	t56 = ((x2485+(x2486-x2487))>>x2488);

	if (t56 != 37525196752LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2501 = 102U;
	static volatile int16_t x2502 = INT16_MAX;
	uint16_t x2503 = 13U;
	int8_t x2504 = 8;
	uint32_t t57 = 30U;

	t57 = ((x2501+(x2502-x2503))>>x2504);

	if (t57 != 128U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2569 = 5560;
	int32_t x2570 = -15138;
	volatile uint64_t x2571 = 2542900669361LLU;
	uint8_t x2572 = 22U;
	uint64_t t58 = 1038294016606083LLU;

	t58 = ((x2569+(x2570-x2571))>>x2572);

	if (t58 != 4398045904829LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x2729 = 338526065U;
	int8_t x2730 = INT8_MIN;
	volatile uint16_t x2732 = 0U;
	static volatile uint32_t t59 = 417261U;

	t59 = ((x2729+(x2730-x2731))>>x2732);

	if (t59 != 338525810U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2778 = -61;
	uint32_t x2779 = 113806584U;
	static volatile uint8_t x2780 = 17U;
	volatile uint32_t t60 = 1487072U;

	t60 = ((x2777+(x2778-x2779))>>x2780);

	if (t60 != 31899U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2829 = INT8_MIN;
	volatile uint64_t x2831 = 3180516529795231431LLU;
	static volatile uint16_t x2832 = 0U;
	uint64_t t61 = 142488690260766LLU;

	t61 = ((x2829+(x2830-x2831))>>x2832);

	if (t61 != 15266227543914320056LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2837 = 51;
	uint8_t x2838 = 3U;
	int8_t x2839 = -1;
	uint16_t x2840 = 5U;
	int32_t t62 = 23;

	t62 = ((x2837+(x2838-x2839))>>x2840);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2905 = INT32_MAX;
	int8_t x2906 = INT8_MIN;
	uint8_t x2907 = 0U;
	int16_t x2908 = 2;

	t63 = ((x2905+(x2906-x2907))>>x2908);

	if (t63 != 536870879) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2945 = UINT16_MAX;
	uint8_t x2946 = UINT8_MAX;
	static int16_t x2948 = 2;

	t64 = ((x2945+(x2946-x2947))>>x2948);

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2993 = UINT16_MAX;
	uint16_t x2994 = 15519U;
	int16_t x2995 = 2;
	int8_t x2996 = 7;
	volatile int32_t t65 = -244;

	t65 = ((x2993+(x2994-x2995))>>x2996);

	if (t65 != 633) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3029 = 511U;
	int64_t x3030 = -1LL;
	uint32_t x3031 = 2U;
	uint64_t x3032 = 0LLU;
	volatile int64_t t66 = -225046665920039064LL;

	t66 = ((x3029+(x3030-x3031))>>x3032);

	if (t66 != 508LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3045 = -1;
	uint8_t x3047 = 80U;
	static int16_t x3048 = 1;

	t67 = ((x3045+(x3046-x3047))>>x3048);

	if (t67 != 1073741783) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3057 = INT64_MAX;
	volatile int8_t x3058 = -1;
	int8_t x3059 = -1;
	static uint8_t x3060 = 30U;
	int64_t t68 = -34790LL;

	t68 = ((x3057+(x3058-x3059))>>x3060);

	if (t68 != 8589934591LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3061 = INT16_MAX;
	uint8_t x3064 = 6U;
	int32_t t69 = 25970007;

	t69 = ((x3061+(x3062-x3063))>>x3064);

	if (t69 != 511) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3266 = INT8_MAX;
	int32_t x3267 = -1;
	static int32_t x3268 = 12;
	volatile uint64_t t70 = 2493LLU;

	t70 = ((x3265+(x3266-x3267))>>x3268);

	if (t70 != 1742822902LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3273 = 26783U;
	uint64_t x3275 = 2053494109591LLU;
	uint8_t x3276 = 10U;
	uint64_t t71 = 141065662609451LLU;

	t71 = ((x3273+(x3274-x3275))>>x3276);

	if (t71 != 18014396506213820LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3297 = INT32_MAX;
	int32_t x3298 = 1;
	static int8_t x3299 = 6;
	volatile int32_t t72 = -1;

	t72 = ((x3297+(x3298-x3299))>>x3300);

	if (t72 != 2147483642) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3385 = 29811;
	static int8_t x3386 = INT8_MAX;
	int32_t x3388 = 0;
	volatile int32_t t73 = -1;

	t73 = ((x3385+(x3386-x3387))>>x3388);

	if (t73 != 29938) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3409 = INT8_MAX;
	int32_t x3410 = INT32_MIN;
	int32_t x3411 = INT32_MIN;
	uint8_t x3412 = 1U;
	volatile int32_t t74 = -53081496;

	t74 = ((x3409+(x3410-x3411))>>x3412);

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x3453 = 20;
	int32_t x3454 = -711015;
	int32_t x3455 = INT32_MIN;
	volatile int32_t x3456 = 1;
	volatile int32_t t75 = 0;

	t75 = ((x3453+(x3454-x3455))>>x3456);

	if (t75 != 1073386326) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3529 = 745266643LL;
	static int32_t x3530 = -391;
	uint8_t x3531 = 6U;
	volatile int64_t t76 = -888685841681168LL;

	t76 = ((x3529+(x3530-x3531))>>x3532);

	if (t76 != 745266246LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3682 = -10;
	int64_t x3683 = 1051181977429799LL;
	volatile uint64_t t77 = 1510LLU;

	t77 = ((x3681+(x3682-x3683))>>x3684);

	if (t77 != 36026744193266876LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3709 = -11892;
	volatile int32_t x3710 = INT32_MAX;
	int8_t x3711 = 11;
	uint32_t x3712 = 30U;

	t78 = ((x3709+(x3710-x3711))>>x3712);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3801 = INT32_MIN;
	uint64_t x3802 = 132LLU;
	uint16_t x3803 = 22548U;
	volatile uint64_t t79 = 37271850286LLU;

	t79 = ((x3801+(x3802-x3803))>>x3804);

	if (t79 != 17179869181LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3805 = 1966300080LL;
	int8_t x3806 = INT8_MIN;
	uint64_t x3807 = 843014LLU;
	static uint16_t x3808 = 29U;
	static uint64_t t80 = 375763LLU;

	t80 = ((x3805+(x3806-x3807))>>x3808);

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3809 = 15792901108001LLU;
	volatile int16_t x3810 = INT16_MAX;
	int8_t x3811 = INT8_MAX;
	static uint16_t x3812 = 3U;
	static uint64_t t81 = 6035998199LLU;

	t81 = ((x3809+(x3810-x3811))>>x3812);

	if (t81 != 1974112642580LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3857 = INT16_MAX;
	static int32_t x3858 = -1;
	static int16_t x3859 = -7;
	uint16_t x3860 = 2U;
	volatile int32_t t82 = 11;

	t82 = ((x3857+(x3858-x3859))>>x3860);

	if (t82 != 8193) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4045 = INT8_MIN;
	static int32_t x4046 = INT32_MIN;
	int64_t x4047 = -5174727552057261LL;
	static uint8_t x4048 = 1U;
	volatile int64_t t83 = 2184057875977154082LL;

	t83 = ((x4045+(x4046-x4047))>>x4048);

	if (t83 != 2587362702286742LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4105 = INT8_MAX;
	uint16_t x4106 = 76U;
	volatile uint32_t x4107 = 0U;
	static uint32_t t84 = 72881U;

	t84 = ((x4105+(x4106-x4107))>>x4108);

	if (t84 != 50U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x4169 = INT64_MAX;
	static int32_t x4170 = INT32_MIN;
	int8_t x4171 = -1;
	static uint8_t x4172 = 3U;
	static volatile int64_t t85 = -8077110035413646LL;

	t85 = ((x4169+(x4170-x4171))>>x4172);

	if (t85 != 1152921504338411520LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4274 = INT16_MIN;
	int64_t x4275 = INT64_MIN;
	uint16_t x4276 = 23U;
	int64_t t86 = -3656009430576LL;

	t86 = ((x4273+(x4274-x4275))>>x4276);

	if (t86 != 1099511627775LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4353 = 6LLU;
	static volatile uint64_t x4355 = 9758973425467744LLU;
	int16_t x4356 = 0;
	uint64_t t87 = 977824438796591347LLU;

	t87 = ((x4353+(x4354-x4355))>>x4356);

	if (t87 != 18436985100284084133LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4386 = 1LLU;
	uint8_t x4387 = UINT8_MAX;
	volatile uint64_t x4388 = 1LLU;

	t88 = ((x4385+(x4386-x4387))>>x4388);

	if (t88 != 4611686018427387777LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4390 = INT8_MIN;
	int16_t x4391 = INT16_MIN;
	uint16_t x4392 = 0U;
	volatile uint32_t t89 = 4140741U;

	t89 = ((x4389+(x4390-x4391))>>x4392);

	if (t89 != 242719U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4415 = INT8_MIN;
	static uint16_t x4416 = 3U;
	int32_t t90 = -256773910;

	t90 = ((x4413+(x4414-x4415))>>x4416);

	if (t90 != 1234) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4429 = INT32_MIN;
	int32_t x4430 = INT32_MAX;
	static volatile uint32_t x4431 = 78393030U;
	static int16_t x4432 = 1;
	uint32_t t91 = 743U;

	t91 = ((x4429+(x4430-x4431))>>x4432);

	if (t91 != 2108287132U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4513 = -1LL;
	uint8_t x4514 = 7U;
	static volatile int8_t x4515 = -1;
	static uint8_t x4516 = 1U;
	int64_t t92 = 86824LL;

	t92 = ((x4513+(x4514-x4515))>>x4516);

	if (t92 != 3LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x4582 = UINT64_MAX;
	int16_t x4583 = -228;
	uint32_t x4584 = 43U;
	uint64_t t93 = 712598843109503LLU;

	t93 = ((x4581+(x4582-x4583))>>x4584);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x4621 = 469974267U;
	uint8_t x4622 = UINT8_MAX;
	uint32_t x4623 = 609209U;
	int8_t x4624 = 0;
	volatile uint32_t t94 = 1862915639U;

	t94 = ((x4621+(x4622-x4623))>>x4624);

	if (t94 != 469365313U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4649 = INT16_MIN;
	volatile uint64_t x4651 = 109LLU;
	int8_t x4652 = 0;
	uint64_t t95 = 1845726LLU;

	t95 = ((x4649+(x4650-x4651))>>x4652);

	if (t95 != 301666858119LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4695 = 990U;
	volatile uint32_t t96 = 29U;

	t96 = ((x4693+(x4694-x4695))>>x4696);

	if (t96 != 61U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4701 = 9156255857154262280LLU;
	int16_t x4702 = 4901;
	volatile uint8_t x4703 = UINT8_MAX;
	uint64_t t97 = 2501961472545015LLU;

	t97 = ((x4701+(x4702-x4703))>>x4704);

	if (t97 != 4163783LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4718 = UINT8_MAX;
	volatile uint8_t x4719 = UINT8_MAX;

	t98 = ((x4717+(x4718-x4719))>>x4720);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4741 = UINT64_MAX;
	static uint8_t x4742 = UINT8_MAX;
	int64_t x4743 = -2072107LL;
	uint8_t x4744 = 0U;
	volatile uint64_t t99 = 1228214536674911LLU;

	t99 = ((x4741+(x4742-x4743))>>x4744);

	if (t99 != 2072361LLU) { NG(); } else { ; }
	
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


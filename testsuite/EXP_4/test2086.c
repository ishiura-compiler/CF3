#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 1187;
static volatile uint16_t x85 = UINT16_MAX;
uint16_t x219 = 30U;
uint32_t x265 = 0U;
volatile int32_t x266 = INT32_MIN;
int16_t x268 = INT16_MIN;
static volatile int8_t x302 = 4;
uint32_t x385 = 695493730U;
static int16_t x490 = -1;
uint16_t x492 = 12U;
volatile uint64_t t10 = 3161589951745228535LLU;
int8_t x498 = INT8_MAX;
int32_t t11 = 15;
uint32_t x537 = UINT32_MAX;
volatile int16_t x540 = INT16_MIN;
static int8_t x564 = -3;
int64_t x596 = -1LL;
static int64_t x604 = INT64_MIN;
volatile int32_t t15 = 119;
uint32_t x705 = UINT32_MAX;
uint8_t x766 = 0U;
uint32_t x767 = 118U;
uint16_t x777 = 303U;
uint64_t x793 = UINT64_MAX;
int32_t x795 = -1;
volatile uint64_t t22 = 2073882LLU;
int32_t x809 = 46748833;
uint32_t x918 = UINT32_MAX;
static int64_t x920 = -1LL;
static uint16_t x921 = UINT16_MAX;
volatile int16_t x922 = INT16_MIN;
static uint32_t x923 = UINT32_MAX;
static uint32_t x965 = UINT32_MAX;
int16_t x980 = INT16_MIN;
volatile int32_t t28 = -32956;
volatile int64_t x1065 = 1670356896600LL;
static int8_t x1171 = INT8_MIN;
uint16_t x1172 = 98U;
volatile uint16_t x1274 = UINT16_MAX;
int32_t x1275 = -1;
static uint32_t x1377 = UINT32_MAX;
volatile uint32_t t36 = 5U;
int32_t t37 = -19125;
uint64_t x1393 = 3237148509LLU;
uint8_t x1395 = 0U;
static volatile int32_t t40 = 13788081;
int64_t x1771 = INT64_MAX;
volatile uint64_t x1802 = UINT64_MAX;
volatile int32_t x1867 = -1;
volatile uint32_t t48 = 483414U;
int64_t x2030 = -1LL;
uint64_t x2037 = 766831LLU;
volatile int16_t x2079 = INT16_MAX;
int32_t t54 = 148799589;
uint32_t x2093 = 23329130U;
int64_t x2095 = INT64_MAX;
uint16_t x2096 = 31504U;
volatile uint16_t x2110 = 1U;
int16_t x2111 = -1;
static volatile int64_t x2133 = INT64_MAX;
int32_t x2148 = INT32_MAX;
uint32_t x2160 = UINT32_MAX;
static int64_t x2230 = INT64_MIN;
uint16_t x2296 = 548U;
int64_t x2338 = INT64_MIN;
int64_t x2376 = INT64_MIN;
static volatile int16_t x2444 = INT16_MAX;
static int8_t x2464 = -1;
uint8_t x2490 = 7U;
volatile uint32_t t69 = 339472U;
int16_t x2512 = -1;
int16_t x2543 = 106;
int8_t x2632 = INT8_MAX;
int32_t t72 = 199;
int16_t x2707 = 1;
volatile int8_t x2713 = 0;
int8_t x2716 = INT8_MIN;
volatile int32_t t75 = 31;
int32_t x2722 = -1;
volatile uint8_t x2733 = 2U;
int32_t t78 = 140676797;
int8_t x2855 = 1;
uint64_t t82 = 1578750951LLU;
int64_t x2932 = -1LL;
int16_t x3038 = INT16_MAX;
static volatile int8_t x3040 = -1;
uint32_t x3078 = UINT32_MAX;
int32_t x3080 = -1;
uint64_t t86 = 52443LLU;
int8_t x3161 = INT8_MAX;
int16_t x3162 = INT16_MAX;
volatile int32_t t87 = 3;
uint8_t x3215 = 0U;
int8_t x3222 = INT8_MAX;
static volatile int16_t x3280 = -255;
static volatile int32_t t93 = 2704098;
uint8_t x3374 = 1U;
uint64_t t95 = 1856381181157LLU;
volatile int32_t x3546 = INT32_MAX;


void f0(void) {
	int8_t x57 = 11;
	volatile int8_t x58 = 8;
	uint8_t x59 = 85U;
	int32_t x60 = 124995567;
	volatile int32_t t0 = 18589;

	t0 = (x57<<(x58%(x59^x60)));

	if (t0 != 2816) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x81 = 1U;
	uint8_t x82 = 6U;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;

	t1 = (x81<<(x82%(x83^x84)));

	if (t1 != 64) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x86 = 1U;
	static uint32_t x87 = 926101607U;
	int16_t x88 = INT16_MAX;
	volatile int32_t t2 = -76886;

	t2 = (x85<<(x86%(x87^x88)));

	if (t2 != 131070) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x217 = 488U;
	static uint8_t x218 = 2U;
	volatile int8_t x220 = -1;
	volatile int32_t t3 = 1579243;

	t3 = (x217<<(x218%(x219^x220)));

	if (t3 != 1952) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x267 = UINT64_MAX;
	volatile uint32_t t4 = 69U;

	t4 = (x265<<(x266%(x267^x268)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x301 = 2304995LLU;
	volatile int8_t x303 = -18;
	int64_t x304 = INT64_MIN;
	static volatile uint64_t t5 = 1886LLU;

	t5 = (x301<<(x302%(x303^x304)));

	if (t5 != 36879920LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x341 = 0U;
	uint8_t x342 = 12U;
	uint64_t x343 = 17633813903790436LLU;
	uint64_t x344 = 8420619285152181442LLU;
	volatile int32_t t6 = -3904398;

	t6 = (x341<<(x342%(x343^x344)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x386 = 7U;
	uint32_t x387 = UINT32_MAX;
	volatile uint64_t x388 = 174177LLU;
	volatile uint32_t t7 = 55755616U;

	t7 = (x385<<(x386%(x387^x388)));

	if (t7 != 3123851520U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x413 = 12272609LLU;
	int16_t x414 = INT16_MAX;
	static uint8_t x415 = 53U;
	int32_t x416 = 77;
	uint64_t t8 = 476LLU;

	t8 = (x413<<(x414%(x415^x416)));

	if (t8 != 1570893952LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x417 = INT16_MAX;
	static volatile int32_t x418 = INT32_MIN;
	int32_t x419 = 7;
	static int16_t x420 = -1;
	int32_t t9 = 1;

	t9 = (x417<<(x418%(x419^x420)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x489 = 161376LLU;
	static uint64_t x491 = UINT64_MAX;

	t10 = (x489<<(x490%(x491^x492)));

	if (t10 != 660996096LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x497 = 0U;
	int8_t x499 = 57;
	uint8_t x500 = 35U;

	t11 = (x497<<(x498%(x499^x500)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x538 = INT32_MAX;
	int8_t x539 = -1;
	uint32_t t12 = 378396U;

	t12 = (x537<<(x538%(x539^x540)));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x561 = 13U;
	uint8_t x562 = 0U;
	uint32_t x563 = 0U;
	volatile int32_t t13 = -3099;

	t13 = (x561<<(x562%(x563^x564)));

	if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x593 = 291617U;
	int32_t x594 = INT32_MIN;
	uint16_t x595 = UINT16_MAX;
	static volatile uint32_t t14 = 226197U;

	t14 = (x593<<(x594%(x595^x596)));

	if (t14 != 291617U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x601 = 6U;
	uint16_t x602 = 1U;
	static int16_t x603 = -1;

	t15 = (x601<<(x602%(x603^x604)));

	if (t15 != 12) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x605 = UINT32_MAX;
	static uint32_t x606 = 1095396991U;
	uint64_t x607 = UINT64_MAX;
	int8_t x608 = INT8_MIN;
	static uint32_t t16 = 2U;

	t16 = (x605<<(x606%(x607^x608)));

	if (t16 != 4293918720U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x633 = 188LLU;
	uint16_t x634 = 341U;
	int8_t x635 = -1;
	uint16_t x636 = 0U;
	static uint64_t t17 = 3731801698689748LLU;

	t17 = (x633<<(x634%(x635^x636)));

	if (t17 != 188LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x706 = 13U;
	static int64_t x707 = INT64_MIN;
	int16_t x708 = INT16_MAX;
	uint32_t t18 = 465560497U;

	t18 = (x705<<(x706%(x707^x708)));

	if (t18 != 4294959104U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x765 = 33822973503637412LLU;
	uint64_t x768 = UINT64_MAX;
	volatile uint64_t t19 = 1486693785071946545LLU;

	t19 = (x765<<(x766%(x767^x768)));

	if (t19 != 33822973503637412LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x773 = 3181LL;
	static uint8_t x774 = 38U;
	volatile int8_t x775 = -2;
	int8_t x776 = -17;
	int64_t t20 = -2269726176LL;

	t20 = (x773<<(x774%(x775^x776)));

	if (t20 != 50896LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x778 = -56;
	int8_t x779 = -1;
	static uint16_t x780 = 1U;
	static int32_t t21 = -2;

	t21 = (x777<<(x778%(x779^x780)));

	if (t21 != 303) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x794 = 26;
	int8_t x796 = 13;

	t22 = (x793<<(x794%(x795^x796)));

	if (t22 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x810 = INT32_MIN;
	static int16_t x811 = INT16_MIN;
	int16_t x812 = INT16_MAX;
	static volatile int32_t t23 = 1;

	t23 = (x809<<(x810%(x811^x812)));

	if (t23 != 46748833) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x917 = UINT32_MAX;
	int8_t x919 = INT8_MIN;
	uint32_t t24 = 49488U;

	t24 = (x917<<(x918%(x919^x920)));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x924 = -8;
	int32_t t25 = -3;

	t25 = (x921<<(x922%(x923^x924)));

	if (t25 != 524280) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x925 = INT8_MAX;
	volatile int64_t x926 = INT64_MIN;
	int64_t x927 = INT64_MAX;
	int8_t x928 = -1;
	int32_t t26 = 432965075;

	t26 = (x925<<(x926%(x927^x928)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x966 = -1;
	static volatile int16_t x967 = 30;
	static uint32_t x968 = UINT32_MAX;
	uint32_t t27 = 351455530U;

	t27 = (x965<<(x966%(x967^x968)));

	if (t27 != 3221225472U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x977 = INT16_MAX;
	uint32_t x978 = 1U;
	static int16_t x979 = INT16_MAX;

	t28 = (x977<<(x978%(x979^x980)));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1021 = INT16_MAX;
	static uint16_t x1022 = 9U;
	int32_t x1023 = INT32_MAX;
	volatile int64_t x1024 = 633550632862LL;
	volatile int32_t t29 = 8054;

	t29 = (x1021<<(x1022%(x1023^x1024)));

	if (t29 != 16776704) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1066 = -1;
	int32_t x1067 = INT32_MIN;
	int32_t x1068 = INT32_MAX;
	int64_t t30 = 1LL;

	t30 = (x1065<<(x1066%(x1067^x1068)));

	if (t30 != 1670356896600LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1081 = 563118173LLU;
	uint8_t x1082 = 26U;
	int16_t x1083 = INT16_MAX;
	int32_t x1084 = INT32_MIN;
	uint64_t t31 = 397659944LLU;

	t31 = (x1081<<(x1082%(x1083^x1084)));

	if (t31 != 37790220887785472LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1085 = INT8_MAX;
	uint32_t x1086 = 1U;
	uint16_t x1087 = 9U;
	volatile int32_t x1088 = INT32_MIN;
	int32_t t32 = -20;

	t32 = (x1085<<(x1086%(x1087^x1088)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1169 = 1;
	static uint16_t x1170 = 8001U;
	volatile int32_t t33 = 2043;

	t33 = (x1169<<(x1170%(x1171^x1172)));

	if (t33 != 2097152) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1209 = 1878U;
	int64_t x1210 = INT64_MIN;
	int32_t x1211 = -1;
	static int8_t x1212 = -3;
	uint32_t t34 = 993900U;

	t34 = (x1209<<(x1210%(x1211^x1212)));

	if (t34 != 1878U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1273 = 12;
	volatile int8_t x1276 = INT8_MIN;
	volatile int32_t t35 = 951875;

	t35 = (x1273<<(x1274%(x1275^x1276)));

	if (t35 != 96) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x1378 = INT16_MAX;
	int16_t x1379 = -1;
	static uint16_t x1380 = 2U;

	t36 = (x1377<<(x1378%(x1379^x1380)));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1381 = 2833;
	volatile uint8_t x1382 = 1U;
	static volatile int32_t x1383 = 35393;
	static int16_t x1384 = INT16_MIN;

	t37 = (x1381<<(x1382%(x1383^x1384)));

	if (t37 != 5666) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1394 = 2U;
	int32_t x1396 = INT32_MIN;
	volatile uint64_t t38 = 12LLU;

	t38 = (x1393<<(x1394%(x1395^x1396)));

	if (t38 != 12948594036LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1517 = 16;
	volatile uint8_t x1518 = 3U;
	static int16_t x1519 = INT16_MIN;
	volatile uint32_t x1520 = UINT32_MAX;
	volatile int32_t t39 = -2929331;

	t39 = (x1517<<(x1518%(x1519^x1520)));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1645 = INT8_MAX;
	int8_t x1646 = INT8_MIN;
	int32_t x1647 = -1;
	volatile int8_t x1648 = INT8_MAX;

	t40 = (x1645<<(x1646%(x1647^x1648)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1677 = UINT8_MAX;
	uint16_t x1678 = UINT16_MAX;
	static volatile int8_t x1679 = 1;
	static volatile int16_t x1680 = -50;
	int32_t t41 = -25;

	t41 = (x1677<<(x1678%(x1679^x1680)));

	if (t41 != 1069547520) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1681 = UINT32_MAX;
	uint8_t x1682 = 1U;
	uint32_t x1683 = UINT32_MAX;
	uint64_t x1684 = 3355920663515LLU;
	static uint32_t t42 = 469824U;

	t42 = (x1681<<(x1682%(x1683^x1684)));

	if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1709 = INT8_MAX;
	volatile int32_t x1710 = INT32_MIN;
	int32_t x1711 = 4;
	uint32_t x1712 = 10U;
	int32_t t43 = 6564327;

	t43 = (x1709<<(x1710%(x1711^x1712)));

	if (t43 != 508) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1733 = 19342751319761899LLU;
	int16_t x1734 = 47;
	uint8_t x1735 = 123U;
	static uint32_t x1736 = UINT32_MAX;
	uint64_t t44 = 5281868513868LLU;

	t44 = (x1733<<(x1734%(x1735^x1736)));

	if (t44 != 5905767223854628864LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1761 = 1;
	uint16_t x1762 = 16402U;
	uint16_t x1763 = 97U;
	int8_t x1764 = INT8_MIN;
	volatile int32_t t45 = 183;

	t45 = (x1761<<(x1762%(x1763^x1764)));

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1769 = UINT64_MAX;
	volatile int16_t x1770 = 1;
	int32_t x1772 = 8750387;
	uint64_t t46 = 388201LLU;

	t46 = (x1769<<(x1770%(x1771^x1772)));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1801 = INT8_MAX;
	static int16_t x1803 = -1;
	volatile int8_t x1804 = INT8_MIN;
	int32_t t47 = 2142801;

	t47 = (x1801<<(x1802%(x1803^x1804)));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x1865 = 346187U;
	uint8_t x1866 = 0U;
	static volatile int64_t x1868 = 3129628272046LL;

	t48 = (x1865<<(x1866%(x1867^x1868)));

	if (t48 != 346187U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1869 = 3;
	volatile uint32_t x1870 = 6U;
	uint64_t x1871 = UINT64_MAX;
	volatile uint8_t x1872 = UINT8_MAX;
	volatile int32_t t49 = 173;

	t49 = (x1869<<(x1870%(x1871^x1872)));

	if (t49 != 192) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1957 = 34932LL;
	static int32_t x1958 = 4;
	uint8_t x1959 = UINT8_MAX;
	volatile int8_t x1960 = INT8_MIN;
	static int64_t t50 = -223566LL;

	t50 = (x1957<<(x1958%(x1959^x1960)));

	if (t50 != 558912LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1961 = UINT8_MAX;
	static uint8_t x1962 = 1U;
	int8_t x1963 = INT8_MAX;
	static int8_t x1964 = INT8_MIN;
	volatile int32_t t51 = -706;

	t51 = (x1961<<(x1962%(x1963^x1964)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2029 = 53U;
	volatile uint8_t x2031 = 0U;
	int8_t x2032 = -1;
	volatile int32_t t52 = -28;

	t52 = (x2029<<(x2030%(x2031^x2032)));

	if (t52 != 53) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2038 = -3;
	uint32_t x2039 = UINT32_MAX;
	volatile int8_t x2040 = INT8_MIN;
	uint64_t t53 = 682675330425368LLU;

	t53 = (x2037<<(x2038%(x2039^x2040)));

	if (t53 != 6281879552LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2077 = INT8_MAX;
	static int32_t x2078 = INT32_MIN;
	uint16_t x2080 = UINT16_MAX;

	t54 = (x2077<<(x2078%(x2079^x2080)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2094 = 0;
	uint32_t t55 = 5985368U;

	t55 = (x2093<<(x2094%(x2095^x2096)));

	if (t55 != 23329130U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2109 = UINT32_MAX;
	int64_t x2112 = 113641969LL;
	volatile uint32_t t56 = 25492313U;

	t56 = (x2109<<(x2110%(x2111^x2112)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2117 = UINT32_MAX;
	int16_t x2118 = INT16_MIN;
	volatile int64_t x2119 = -3LL;
	int16_t x2120 = -1;
	uint32_t t57 = UINT32_MAX;

	t57 = (x2117<<(x2118%(x2119^x2120)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2134 = INT16_MAX;
	int16_t x2135 = INT16_MIN;
	uint32_t x2136 = UINT32_MAX;
	int64_t t58 = INT64_MAX;

	t58 = (x2133<<(x2134%(x2135^x2136)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2145 = 26943U;
	uint8_t x2146 = 2U;
	static volatile int64_t x2147 = -1LL;
	static volatile int32_t t59 = 1022540;

	t59 = (x2145<<(x2146%(x2147^x2148)));

	if (t59 != 107772) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2157 = 1;
	uint32_t x2158 = 0U;
	volatile int8_t x2159 = -51;
	volatile int32_t t60 = -50;

	t60 = (x2157<<(x2158%(x2159^x2160)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2185 = 35;
	int16_t x2186 = 6;
	int64_t x2187 = 16326LL;
	volatile int16_t x2188 = INT16_MIN;
	volatile int32_t t61 = -23;

	t61 = (x2185<<(x2186%(x2187^x2188)));

	if (t61 != 2240) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2229 = 15;
	volatile uint8_t x2231 = UINT8_MAX;
	static int8_t x2232 = INT8_MAX;
	volatile int32_t t62 = 947;

	t62 = (x2229<<(x2230%(x2231^x2232)));

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x2293 = 6U;
	uint8_t x2294 = 0U;
	uint16_t x2295 = 2U;
	int32_t t63 = -3037387;

	t63 = (x2293<<(x2294%(x2295^x2296)));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2337 = INT8_MAX;
	int16_t x2339 = -1;
	int32_t x2340 = INT32_MAX;
	int32_t t64 = 1814340;

	t64 = (x2337<<(x2338%(x2339^x2340)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2361 = 244244400LLU;
	uint16_t x2362 = UINT16_MAX;
	int8_t x2363 = INT8_MIN;
	int8_t x2364 = INT8_MAX;
	static volatile uint64_t t65 = 53577054692673908LLU;

	t65 = (x2361<<(x2362%(x2363^x2364)));

	if (t65 != 244244400LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2373 = 2553751672078929LL;
	volatile uint16_t x2374 = 4U;
	static uint16_t x2375 = UINT16_MAX;
	static int64_t t66 = -16693760LL;

	t66 = (x2373<<(x2374%(x2375^x2376)));

	if (t66 != 40860026753262864LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2441 = 28687LLU;
	int16_t x2442 = INT16_MAX;
	int8_t x2443 = 0;
	volatile uint64_t t67 = 4420LLU;

	t67 = (x2441<<(x2442%(x2443^x2444)));

	if (t67 != 28687LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2461 = 86U;
	int32_t x2462 = INT32_MIN;
	uint8_t x2463 = UINT8_MAX;
	volatile int32_t t68 = 369;

	t68 = (x2461<<(x2462%(x2463^x2464)));

	if (t68 != 86) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2489 = UINT32_MAX;
	volatile uint64_t x2491 = UINT64_MAX;
	volatile int32_t x2492 = 33878;

	t69 = (x2489<<(x2490%(x2491^x2492)));

	if (t69 != 4294967168U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2509 = 5994U;
	uint8_t x2510 = UINT8_MAX;
	uint8_t x2511 = 1U;
	int32_t t70 = 329985725;

	t70 = (x2509<<(x2510%(x2511^x2512)));

	if (t70 != 11988) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2541 = UINT64_MAX;
	static uint16_t x2542 = UINT16_MAX;
	int8_t x2544 = INT8_MIN;
	uint64_t t71 = 6587069030LLU;

	t71 = (x2541<<(x2542%(x2543^x2544)));

	if (t71 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2629 = INT8_MAX;
	volatile uint16_t x2630 = 12U;
	volatile int8_t x2631 = -1;

	t72 = (x2629<<(x2630%(x2631^x2632)));

	if (t72 != 520192) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2661 = 3266;
	int8_t x2662 = -1;
	uint32_t x2663 = 2U;
	uint16_t x2664 = 1U;
	static volatile int32_t t73 = 12979;

	t73 = (x2661<<(x2662%(x2663^x2664)));

	if (t73 != 3266) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2705 = 3124U;
	int16_t x2706 = 4;
	volatile int16_t x2708 = 38;
	static volatile int32_t t74 = 2483936;

	t74 = (x2705<<(x2706%(x2707^x2708)));

	if (t74 != 49984) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2714 = INT16_MAX;
	int8_t x2715 = -1;

	t75 = (x2713<<(x2714%(x2715^x2716)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2721 = 8016;
	uint32_t x2723 = UINT32_MAX;
	int16_t x2724 = 3;
	static int32_t t76 = 60;

	t76 = (x2721<<(x2722%(x2723^x2724)));

	if (t76 != 64128) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2725 = UINT32_MAX;
	int8_t x2726 = 1;
	int64_t x2727 = -1LL;
	static int64_t x2728 = INT64_MIN;
	volatile uint32_t t77 = 1086105U;

	t77 = (x2725<<(x2726%(x2727^x2728)));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2734 = 16;
	volatile int32_t x2735 = INT32_MAX;
	uint32_t x2736 = 453U;

	t78 = (x2733<<(x2734%(x2735^x2736)));

	if (t78 != 131072) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2817 = 0;
	static int32_t x2818 = 3992;
	volatile uint8_t x2819 = 61U;
	int64_t x2820 = -1LL;
	int32_t t79 = -4336531;

	t79 = (x2817<<(x2818%(x2819^x2820)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x2853 = 1738U;
	static int64_t x2854 = INT64_MAX;
	int16_t x2856 = -1;
	uint32_t t80 = 790261304U;

	t80 = (x2853<<(x2854%(x2855^x2856)));

	if (t80 != 3476U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2885 = 3447U;
	int8_t x2886 = -7;
	uint16_t x2887 = 4U;
	static volatile uint8_t x2888 = 5U;
	volatile int32_t t81 = 9249;

	t81 = (x2885<<(x2886%(x2887^x2888)));

	if (t81 != 3447) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2893 = 5235221LLU;
	int64_t x2894 = 1824534LL;
	int8_t x2895 = INT8_MIN;
	volatile int8_t x2896 = 2;

	t82 = (x2893<<(x2894%(x2895^x2896)));

	if (t82 != 9601674405553897472LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x2897 = 32763LLU;
	static uint64_t x2898 = UINT64_MAX;
	int16_t x2899 = -1;
	uint8_t x2900 = 45U;
	volatile uint64_t t83 = 226779884421LLU;

	t83 = (x2897<<(x2898%(x2899^x2900)));

	if (t83 != 1152745582746402816LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2929 = 1852901096LLU;
	uint32_t x2930 = 55U;
	static uint16_t x2931 = 242U;
	static volatile uint64_t t84 = 24613144021329417LLU;

	t84 = (x2929<<(x2930%(x2931^x2932)));

	if (t84 != 8358680908399640576LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3037 = 5835U;
	int8_t x3039 = 0;
	int32_t t85 = 10253103;

	t85 = (x3037<<(x3038%(x3039^x3040)));

	if (t85 != 5835) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3077 = 2LLU;
	int32_t x3079 = INT32_MIN;

	t86 = (x3077<<(x3078%(x3079^x3080)));

	if (t86 != 4LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x3163 = 83U;
	int8_t x3164 = INT8_MIN;

	t87 = (x3161<<(x3162%(x3163^x3164)));

	if (t87 != 16256) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3213 = 11814527U;
	volatile int64_t x3214 = INT64_MIN;
	uint8_t x3216 = 1U;
	static volatile uint32_t t88 = 25U;

	t88 = (x3213<<(x3214%(x3215^x3216)));

	if (t88 != 11814527U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3221 = INT8_MAX;
	int8_t x3223 = INT8_MIN;
	volatile uint8_t x3224 = 3U;
	int32_t t89 = 589007547;

	t89 = (x3221<<(x3222%(x3223^x3224)));

	if (t89 != 508) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x3265 = 20970U;
	int32_t x3266 = INT32_MIN;
	int32_t x3267 = INT32_MAX;
	uint32_t x3268 = UINT32_MAX;
	static volatile int32_t t90 = 1474;

	t90 = (x3265<<(x3266%(x3267^x3268)));

	if (t90 != 20970) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3277 = 1988LLU;
	uint32_t x3278 = UINT32_MAX;
	int8_t x3279 = -2;
	static uint64_t t91 = 7267485673845420LLU;

	t91 = (x3277<<(x3278%(x3279^x3280)));

	if (t91 != 1988LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3281 = UINT64_MAX;
	int8_t x3282 = 1;
	static int16_t x3283 = INT16_MIN;
	int8_t x3284 = INT8_MIN;
	static volatile uint64_t t92 = 416886461866LLU;

	t92 = (x3281<<(x3282%(x3283^x3284)));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x3285 = 30U;
	int16_t x3286 = INT16_MIN;
	uint8_t x3287 = UINT8_MAX;
	int8_t x3288 = INT8_MAX;

	t93 = (x3285<<(x3286%(x3287^x3288)));

	if (t93 != 30) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3373 = UINT64_MAX;
	int16_t x3375 = INT16_MIN;
	int8_t x3376 = INT8_MIN;
	uint64_t t94 = 852LLU;

	t94 = (x3373<<(x3374%(x3375^x3376)));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3385 = 1083801LLU;
	static uint8_t x3386 = 1U;
	uint64_t x3387 = UINT64_MAX;
	uint64_t x3388 = 2308417750185907721LLU;

	t95 = (x3385<<(x3386%(x3387^x3388)));

	if (t95 != 2167602LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3393 = UINT32_MAX;
	int8_t x3394 = 5;
	volatile int64_t x3395 = 79946305791939LL;
	static int8_t x3396 = INT8_MAX;
	uint32_t t96 = 1U;

	t96 = (x3393<<(x3394%(x3395^x3396)));

	if (t96 != 4294967264U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3429 = 164853952086030042LLU;
	int8_t x3430 = 0;
	int8_t x3431 = -1;
	int32_t x3432 = -30377;
	uint64_t t97 = 261136838LLU;

	t97 = (x3429<<(x3430%(x3431^x3432)));

	if (t97 != 164853952086030042LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3545 = INT16_MAX;
	int16_t x3547 = -1;
	int8_t x3548 = 5;
	int32_t t98 = 10065;

	t98 = (x3545<<(x3546%(x3547^x3548)));

	if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3581 = 1;
	int16_t x3582 = 788;
	volatile uint64_t x3583 = UINT64_MAX;
	int8_t x3584 = INT8_MIN;
	volatile int32_t t99 = 66;

	t99 = (x3581<<(x3582%(x3583^x3584)));

	if (t99 != 67108864) { NG(); } else { ; }
	
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


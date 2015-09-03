#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t2 = 515315084928268LL;
volatile uint64_t t4 = 70181LLU;
uint16_t x239 = UINT16_MAX;
volatile int64_t t5 = 98745504843LL;
uint8_t x246 = 29U;
uint32_t x247 = 4U;
int32_t x255 = -963;
volatile int8_t x264 = 5;
static volatile int64_t t8 = 302786584LL;
static int8_t x372 = 0;
int8_t x382 = -1;
int64_t x383 = -522684143180552LL;
int32_t x410 = 145112989;
int32_t t11 = -72870034;
static int64_t x522 = -8004LL;
uint16_t x561 = 0U;
int8_t x597 = INT8_MAX;
uint8_t x605 = 5U;
int16_t x803 = 1225;
uint64_t t20 = 7072151220621545LLU;
uint8_t x820 = 0U;
static uint16_t x929 = 213U;
int8_t x937 = INT8_MIN;
int16_t x938 = 930;
uint64_t x939 = UINT64_MAX;
int32_t x981 = INT32_MIN;
int64_t x982 = -1LL;
uint8_t x984 = 23U;
static int16_t x985 = 1;
int32_t x1193 = INT32_MAX;
uint64_t x1195 = UINT64_MAX;
int8_t x1248 = 0;
static int32_t x1370 = INT32_MIN;
int32_t x1371 = 24088785;
int64_t x1374 = INT64_MIN;
int32_t t32 = -2371;
uint32_t x1485 = 64U;
static int8_t x1570 = -1;
int8_t x1888 = 22;
volatile uint8_t x2002 = 2U;
int32_t x2025 = -1;
volatile int8_t x2027 = INT8_MIN;
static int64_t x2074 = INT64_MAX;
uint64_t t50 = 1781LLU;
int64_t x2181 = -1LL;
int64_t x2183 = -654633541LL;
int16_t x2270 = -2;
static int16_t x2271 = INT16_MAX;
int32_t x2457 = INT32_MIN;
uint16_t x2458 = 326U;
uint64_t x2459 = 109938774453168787LLU;
static int8_t x2461 = INT8_MIN;
static volatile uint16_t x2463 = 442U;
static int32_t x2505 = INT32_MIN;
static uint8_t x2508 = 0U;
uint16_t x2613 = 143U;
static volatile uint64_t t61 = 12993LLU;
uint32_t x2674 = 109302U;
uint8_t x2675 = UINT8_MAX;
volatile int8_t x2739 = INT8_MAX;
uint8_t x2766 = 1U;
uint32_t x2809 = 12U;
int32_t x2810 = -688;
volatile int8_t x2812 = 2;
volatile uint16_t x3031 = 391U;
static volatile int16_t x3042 = INT16_MAX;
static int8_t x3055 = INT8_MAX;
int16_t x3067 = -47;
uint64_t x3102 = 931371596662508LLU;
int64_t x3103 = INT64_MIN;
static uint16_t x3110 = UINT16_MAX;
static uint8_t x3112 = 5U;
uint64_t x3188 = 1LLU;
static int8_t x3213 = INT8_MIN;
uint16_t x3222 = 1018U;
uint16_t x3227 = 3988U;
int32_t x3273 = INT32_MIN;
static int16_t x3274 = -1;
uint8_t x3276 = 3U;
uint32_t t79 = 23560U;
uint64_t x3410 = 7476696482727339LLU;
volatile uint32_t x3441 = 220U;
uint32_t x3573 = 2U;
uint64_t x3575 = 45953949008279427LLU;
volatile uint16_t x3581 = 52U;
static uint64_t x3671 = 830867955439LLU;
volatile uint64_t t85 = 463536412815403LLU;
static int32_t x3722 = INT32_MIN;
int16_t x3781 = 54;
int32_t t87 = -10640;
uint8_t x3943 = UINT8_MAX;
static int64_t x3945 = INT64_MIN;
int8_t x3946 = INT8_MIN;
int16_t x3981 = INT16_MIN;
int64_t x3982 = INT64_MIN;
static uint64_t x3984 = 3LLU;
uint64_t x4005 = UINT64_MAX;
volatile uint16_t x4008 = 58U;
volatile uint64_t t94 = 355276088161LLU;
uint32_t x4029 = 77604U;
uint32_t x4030 = 8249U;
uint64_t t95 = 868416LLU;
uint16_t x4301 = UINT16_MAX;
uint8_t x4304 = 14U;
int16_t x4341 = INT16_MIN;
volatile uint64_t x4342 = 57LLU;
uint64_t x4344 = 14LLU;
int32_t x4399 = INT32_MAX;


void f0(void) {
	volatile int16_t x65 = 351;
	int32_t x66 = INT32_MIN;
	int64_t x67 = INT64_MAX;
	int8_t x68 = 3;
	static int64_t t0 = -31015915LL;

	t0 = ((x65/(x66%x67))>>x68);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x109 = -1;
	static uint16_t x110 = UINT16_MAX;
	volatile uint16_t x111 = 3355U;
	volatile int16_t x112 = 13;
	int32_t t1 = -904787;

	t1 = ((x109/(x110%x111))>>x112);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x145 = INT32_MIN;
	volatile int32_t x146 = -90;
	int64_t x147 = 24419365129224304LL;
	static uint8_t x148 = 1U;

	t2 = ((x145/(x146%x147))>>x148);

	if (t2 != 11930464LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x153 = INT64_MIN;
	static uint64_t x154 = 10983946LLU;
	int32_t x155 = INT32_MAX;
	volatile int8_t x156 = 7;
	static uint64_t t3 = 5227632698LLU;

	t3 = ((x153/(x154%x155))>>x156);

	if (t3 != 6560264775LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x225 = INT8_MIN;
	static uint32_t x226 = 944U;
	uint64_t x227 = 305LLU;
	static volatile uint8_t x228 = 1U;

	t4 = ((x225/(x226%x227))>>x228);

	if (t4 != 318047311615681922LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x237 = 2649296402659258LL;
	static int32_t x238 = 506384;
	int8_t x240 = 29;

	t5 = ((x237/(x238%x239))>>x240);

	if (t5 != 103LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x245 = UINT64_MAX;
	volatile uint16_t x248 = 3U;
	volatile uint64_t t6 = 276302886989954143LLU;

	t6 = ((x245/(x246%x247))>>x248);

	if (t6 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x253 = -13;
	static int64_t x254 = -1LL;
	uint32_t x256 = 32U;
	static volatile int64_t t7 = -2659LL;

	t7 = ((x253/(x254%x255))>>x256);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x261 = INT32_MIN;
	volatile int8_t x262 = -1;
	int64_t x263 = -5138733LL;

	t8 = ((x261/(x262%x263))>>x264);

	if (t8 != 67108864LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x369 = 3;
	int32_t x370 = 1911;
	uint8_t x371 = 18U;
	volatile int32_t t9 = 1599;

	t9 = ((x369/(x370%x371))>>x372);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x381 = -443LL;
	volatile int8_t x384 = 0;
	int64_t t10 = -16544LL;

	t10 = ((x381/(x382%x383))>>x384);

	if (t10 != 443LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x409 = INT8_MIN;
	int16_t x411 = -2767;
	uint32_t x412 = 0U;

	t11 = ((x409/(x410%x411))>>x412);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x497 = UINT8_MAX;
	int64_t x498 = INT64_MIN;
	uint64_t x499 = UINT64_MAX;
	int16_t x500 = 5;
	uint64_t t12 = 233852LLU;

	t12 = ((x497/(x498%x499))>>x500);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x521 = 2;
	int64_t x523 = INT64_MAX;
	static uint64_t x524 = 2LLU;
	static int64_t t13 = -15530093417LL;

	t13 = ((x521/(x522%x523))>>x524);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x562 = INT64_MIN;
	uint8_t x563 = 12U;
	static volatile uint8_t x564 = 34U;
	int64_t t14 = 6686081150LL;

	t14 = ((x561/(x562%x563))>>x564);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x598 = -46880009;
	int64_t x599 = -6591155602364789LL;
	uint64_t x600 = 53LLU;
	int64_t t15 = -956295027LL;

	t15 = ((x597/(x598%x599))>>x600);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x606 = -4655;
	int16_t x607 = INT16_MIN;
	int16_t x608 = 1;
	int32_t t16 = -17;

	t16 = ((x605/(x606%x607))>>x608);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x721 = INT8_MAX;
	volatile uint8_t x722 = 6U;
	int8_t x723 = INT8_MAX;
	int32_t x724 = 14;
	int32_t t17 = -47095971;

	t17 = ((x721/(x722%x723))>>x724);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x733 = INT16_MIN;
	int32_t x734 = 10770042;
	static int64_t x735 = INT64_MIN;
	uint8_t x736 = 47U;
	static int64_t t18 = -24877LL;

	t18 = ((x733/(x734%x735))>>x736);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x797 = INT16_MAX;
	volatile int64_t x798 = INT64_MIN;
	volatile uint64_t x799 = 480554LLU;
	static uint8_t x800 = 0U;
	static volatile uint64_t t19 = 153LLU;

	t19 = ((x797/(x798%x799))>>x800);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x801 = UINT64_MAX;
	uint64_t x802 = 3LLU;
	static int8_t x804 = 17;

	t20 = ((x801/(x802%x803))>>x804);

	if (t20 != 46912496118442LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x817 = -493;
	int8_t x818 = INT8_MIN;
	volatile int64_t x819 = INT64_MAX;
	volatile int64_t t21 = -11659284LL;

	t21 = ((x817/(x818%x819))>>x820);

	if (t21 != 3LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x930 = 3;
	volatile int8_t x931 = 28;
	static int32_t x932 = 8;
	int32_t t22 = 79;

	t22 = ((x929/(x930%x931))>>x932);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x940 = 1;
	uint64_t t23 = 9393986398929663LLU;

	t23 = ((x937/(x938%x939))>>x940);

	if (t23 != 9917604340704059LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x983 = 12LLU;
	uint64_t t24 = 19829068444026933LLU;

	t24 = ((x981/(x982%x983))>>x984);

	if (t24 != 733007751765LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x986 = UINT8_MAX;
	static int8_t x987 = INT8_MAX;
	int8_t x988 = 4;
	static int32_t t25 = 1;

	t25 = ((x985/(x986%x987))>>x988);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1057 = -1LL;
	int8_t x1058 = INT8_MIN;
	int64_t x1059 = INT64_MIN;
	uint32_t x1060 = 23U;
	volatile int64_t t26 = 61LL;

	t26 = ((x1057/(x1058%x1059))>>x1060);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1194 = UINT16_MAX;
	static volatile uint8_t x1196 = 22U;
	static uint64_t t27 = 8616055438179LLU;

	t27 = ((x1193/(x1194%x1195))>>x1196);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1245 = INT8_MIN;
	int8_t x1246 = -1;
	uint32_t x1247 = 3179U;
	uint32_t t28 = 100709180U;

	t28 = ((x1245/(x1246%x1247))>>x1248);

	if (t28 != 2687714U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1369 = INT64_MIN;
	static uint8_t x1372 = 1U;
	static volatile int64_t t29 = 3311004853131527609LL;

	t29 = ((x1369/(x1370%x1371))>>x1372);

	if (t29 != 1287539200009LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x1373 = -1LL;
	uint64_t x1375 = 27219519LLU;
	static volatile int16_t x1376 = 2;
	uint64_t t30 = 0LLU;

	t30 = ((x1373/(x1374%x1375))>>x1376);

	if (t30 != 194113360678LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1389 = -1;
	int16_t x1390 = INT16_MAX;
	static int64_t x1391 = INT64_MIN;
	volatile uint8_t x1392 = 30U;
	volatile int64_t t31 = -20001LL;

	t31 = ((x1389/(x1390%x1391))>>x1392);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1397 = 13;
	volatile uint16_t x1398 = UINT16_MAX;
	uint8_t x1399 = 124U;
	volatile int32_t x1400 = 0;

	t32 = ((x1397/(x1398%x1399))>>x1400);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1421 = 5;
	static volatile uint64_t x1422 = 4517658685986477769LLU;
	int16_t x1423 = -1;
	volatile int8_t x1424 = 30;
	static uint64_t t33 = 28785LLU;

	t33 = ((x1421/(x1422%x1423))>>x1424);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1469 = 22635670U;
	uint32_t x1470 = 23U;
	int64_t x1471 = INT64_MIN;
	uint8_t x1472 = 25U;
	volatile int64_t t34 = 61371381LL;

	t34 = ((x1469/(x1470%x1471))>>x1472);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x1486 = INT32_MIN;
	uint32_t x1487 = UINT32_MAX;
	uint8_t x1488 = 16U;
	static uint32_t t35 = 101467U;

	t35 = ((x1485/(x1486%x1487))>>x1488);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1497 = 1104U;
	uint16_t x1498 = 1U;
	uint16_t x1499 = UINT16_MAX;
	int8_t x1500 = 3;
	static uint32_t t36 = 10U;

	t36 = ((x1497/(x1498%x1499))>>x1500);

	if (t36 != 138U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1529 = 1653192LLU;
	int8_t x1530 = INT8_MAX;
	uint16_t x1531 = 10U;
	int8_t x1532 = 16;
	uint64_t t37 = 727706175279632LLU;

	t37 = ((x1529/(x1530%x1531))>>x1532);

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1569 = UINT64_MAX;
	int8_t x1571 = 27;
	static uint8_t x1572 = 1U;
	uint64_t t38 = 1436230LLU;

	t38 = ((x1569/(x1570%x1571))>>x1572);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1633 = 6515034LL;
	int8_t x1634 = 19;
	uint32_t x1635 = UINT32_MAX;
	volatile uint16_t x1636 = 0U;
	volatile int64_t t39 = -2288455930494708LL;

	t39 = ((x1633/(x1634%x1635))>>x1636);

	if (t39 != 342896LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1661 = -1;
	uint8_t x1662 = 3U;
	uint32_t x1663 = 93286306U;
	int16_t x1664 = 1;
	static uint32_t t40 = 947U;

	t40 = ((x1661/(x1662%x1663))>>x1664);

	if (t40 != 715827882U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1669 = INT16_MAX;
	volatile int8_t x1670 = INT8_MAX;
	static int64_t x1671 = INT64_MIN;
	uint64_t x1672 = 30LLU;
	static int64_t t41 = -184258340345095323LL;

	t41 = ((x1669/(x1670%x1671))>>x1672);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1733 = 189LLU;
	static int16_t x1734 = 708;
	int8_t x1735 = -27;
	int16_t x1736 = 0;
	uint64_t t42 = 3829262262669469LLU;

	t42 = ((x1733/(x1734%x1735))>>x1736);

	if (t42 != 31LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1797 = 486U;
	int32_t x1798 = INT32_MAX;
	int8_t x1799 = 15;
	int8_t x1800 = 1;
	int32_t t43 = -43;

	t43 = ((x1797/(x1798%x1799))>>x1800);

	if (t43 != 34) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1885 = -1LL;
	uint16_t x1886 = 13539U;
	int8_t x1887 = INT8_MIN;
	volatile int64_t t44 = -3675727281564LL;

	t44 = ((x1885/(x1886%x1887))>>x1888);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x1921 = 1U;
	uint64_t x1922 = 243LLU;
	volatile int16_t x1923 = INT16_MAX;
	uint16_t x1924 = 6U;
	volatile uint64_t t45 = 1973447953541574430LLU;

	t45 = ((x1921/(x1922%x1923))>>x1924);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1977 = 102U;
	int16_t x1978 = -1;
	uint64_t x1979 = 9409998910378LLU;
	uint8_t x1980 = 3U;
	uint64_t t46 = 75819470537LLU;

	t46 = ((x1977/(x1978%x1979))>>x1980);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2001 = 204U;
	uint64_t x2003 = UINT64_MAX;
	int8_t x2004 = 1;
	volatile uint64_t t47 = 1693221LLU;

	t47 = ((x2001/(x2002%x2003))>>x2004);

	if (t47 != 51LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2026 = INT16_MAX;
	uint8_t x2028 = 3U;
	int32_t t48 = -22711;

	t48 = ((x2025/(x2026%x2027))>>x2028);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2041 = 0;
	static uint32_t x2042 = UINT32_MAX;
	static uint64_t x2043 = 2300374LLU;
	uint64_t x2044 = 7LLU;
	volatile uint64_t t49 = 14823130575808074LLU;

	t49 = ((x2041/(x2042%x2043))>>x2044);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2073 = 1625468LLU;
	volatile uint8_t x2075 = 31U;
	int16_t x2076 = 7;

	t50 = ((x2073/(x2074%x2075))>>x2076);

	if (t50 != 1814LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2169 = -17;
	volatile int32_t x2170 = -1;
	int64_t x2171 = 27109526857588LL;
	volatile uint16_t x2172 = 7U;
	int64_t t51 = 127529591197541LL;

	t51 = ((x2169/(x2170%x2171))>>x2172);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2182 = 3U;
	volatile uint8_t x2184 = 12U;
	volatile int64_t t52 = -107301870387841861LL;

	t52 = ((x2181/(x2182%x2183))>>x2184);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2221 = INT16_MIN;
	uint64_t x2222 = 1095390548762546LLU;
	int8_t x2223 = INT8_MIN;
	static int8_t x2224 = 1;
	volatile uint64_t t53 = 77799379011395893LLU;

	t53 = ((x2221/(x2222%x2223))>>x2224);

	if (t53 != 8420LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2269 = -1;
	uint16_t x2272 = 1U;
	int32_t t54 = 15;

	t54 = ((x2269/(x2270%x2271))>>x2272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2293 = INT16_MIN;
	int16_t x2294 = INT16_MIN;
	volatile int32_t x2295 = INT32_MIN;
	int16_t x2296 = 11;
	volatile int32_t t55 = -109179248;

	t55 = ((x2293/(x2294%x2295))>>x2296);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2460 = 15U;
	uint64_t t56 = 43587811LLU;

	t56 = ((x2457/(x2458%x2459))>>x2460);

	if (t56 != 1726840347717LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2462 = UINT32_MAX;
	int8_t x2464 = 1;
	uint32_t t57 = 7U;

	t57 = ((x2461/(x2462%x2463))>>x2464);

	if (t57 != 8421504U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2485 = INT32_MIN;
	int8_t x2486 = INT8_MIN;
	uint64_t x2487 = 1904LLU;
	uint8_t x2488 = 27U;
	uint64_t t58 = 113LLU;

	t58 = ((x2485/(x2486%x2487))>>x2488);

	if (t58 != 204522252LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2506 = INT32_MIN;
	int64_t x2507 = INT64_MIN;
	volatile int64_t t59 = -603873LL;

	t59 = ((x2505/(x2506%x2507))>>x2508);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2545 = INT16_MIN;
	int8_t x2546 = -10;
	uint16_t x2547 = 43U;
	uint8_t x2548 = 1U;
	volatile int32_t t60 = -286737;

	t60 = ((x2545/(x2546%x2547))>>x2548);

	if (t60 != 1638) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2614 = INT16_MIN;
	uint64_t x2615 = 1059479312LLU;
	uint8_t x2616 = 7U;

	t61 = ((x2613/(x2614%x2615))>>x2616);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x2673 = -4;
	static uint16_t x2676 = 28U;
	static uint32_t t62 = 8002U;

	t62 = ((x2673/(x2674%x2675))>>x2676);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2737 = INT64_MIN;
	int64_t x2738 = -1092639030998678638LL;
	static int8_t x2740 = 19;
	volatile int64_t t63 = 34LL;

	t63 = ((x2737/(x2738%x2739))>>x2740);

	if (t63 != 234562480592LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x2765 = 74LLU;
	int32_t x2767 = INT32_MAX;
	static uint16_t x2768 = 0U;
	volatile uint64_t t64 = 6837122LLU;

	t64 = ((x2765/(x2766%x2767))>>x2768);

	if (t64 != 74LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2811 = 258U;
	volatile uint32_t t65 = 3156U;

	t65 = ((x2809/(x2810%x2811))>>x2812);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3025 = INT8_MIN;
	volatile int8_t x3026 = 1;
	uint32_t x3027 = UINT32_MAX;
	static int8_t x3028 = 3;
	volatile uint32_t t66 = 279503U;

	t66 = ((x3025/(x3026%x3027))>>x3028);

	if (t66 != 536870896U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3029 = 1476;
	uint32_t x3030 = 90391U;
	volatile int64_t x3032 = 1LL;
	uint32_t t67 = 1535997U;

	t67 = ((x3029/(x3030%x3031))>>x3032);

	if (t67 != 10U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3041 = 4U;
	int16_t x3043 = INT16_MIN;
	volatile uint8_t x3044 = 0U;
	uint32_t t68 = 4440936U;

	t68 = ((x3041/(x3042%x3043))>>x3044);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3053 = UINT8_MAX;
	static int16_t x3054 = 237;
	uint16_t x3056 = 27U;
	volatile int32_t t69 = -4252;

	t69 = ((x3053/(x3054%x3055))>>x3056);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3065 = INT8_MIN;
	volatile int32_t x3066 = INT32_MIN;
	int16_t x3068 = 4;
	volatile int32_t t70 = -1;

	t70 = ((x3065/(x3066%x3067))>>x3068);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3093 = 438134107LLU;
	int16_t x3094 = -1579;
	volatile int8_t x3095 = INT8_MIN;
	int8_t x3096 = 58;
	volatile uint64_t t71 = 1680005847564098LLU;

	t71 = ((x3093/(x3094%x3095))>>x3096);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3101 = UINT8_MAX;
	static uint8_t x3104 = 2U;
	volatile uint64_t t72 = 288450989727828LLU;

	t72 = ((x3101/(x3102%x3103))>>x3104);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3109 = 22890U;
	static int32_t x3111 = INT32_MAX;
	volatile uint32_t t73 = 3438413U;

	t73 = ((x3109/(x3110%x3111))>>x3112);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3185 = 9747U;
	int32_t x3186 = INT32_MAX;
	volatile uint32_t x3187 = 2724036U;
	uint32_t t74 = 95U;

	t74 = ((x3185/(x3186%x3187))>>x3188);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3214 = -3;
	static int64_t x3215 = INT64_MIN;
	int64_t x3216 = 4LL;
	volatile int64_t t75 = 815LL;

	t75 = ((x3213/(x3214%x3215))>>x3216);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3221 = 6U;
	int8_t x3223 = INT8_MIN;
	uint16_t x3224 = 2U;
	volatile int32_t t76 = 1;

	t76 = ((x3221/(x3222%x3223))>>x3224);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3225 = 165652LLU;
	int32_t x3226 = -1;
	static volatile int8_t x3228 = 5;
	volatile uint64_t t77 = 731121425359099LLU;

	t77 = ((x3225/(x3226%x3227))>>x3228);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3275 = INT64_MIN;
	int64_t t78 = 3248998883230LL;

	t78 = ((x3273/(x3274%x3275))>>x3276);

	if (t78 != 268435456LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3277 = INT16_MIN;
	int16_t x3278 = 3721;
	volatile uint32_t x3279 = 2439U;
	uint16_t x3280 = 0U;

	t79 = ((x3277/(x3278%x3279))>>x3280);

	if (t79 != 3350182U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x3313 = INT8_MIN;
	static uint64_t x3314 = 33770726015848LLU;
	uint32_t x3315 = 1907U;
	static int8_t x3316 = 2;
	volatile uint64_t t80 = 2LLU;

	t80 = ((x3313/(x3314%x3315))>>x3316);

	if (t80 != 2536680978232886LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3409 = -1;
	static uint16_t x3411 = UINT16_MAX;
	static volatile int8_t x3412 = 1;
	volatile uint64_t t81 = 29083041LLU;

	t81 = ((x3409/(x3410%x3411))>>x3412);

	if (t81 != 158208065950612LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3442 = 60008345LLU;
	uint64_t x3443 = 7LLU;
	static volatile uint8_t x3444 = 33U;
	static volatile uint64_t t82 = 44531252LLU;

	t82 = ((x3441/(x3442%x3443))>>x3444);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3574 = 76704;
	uint16_t x3576 = 26U;
	uint64_t t83 = 826980684789053754LLU;

	t83 = ((x3573/(x3574%x3575))>>x3576);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3582 = -135733676818563642LL;
	int16_t x3583 = INT16_MIN;
	int16_t x3584 = 26;
	volatile int64_t t84 = 2001132499551LL;

	t84 = ((x3581/(x3582%x3583))>>x3584);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3669 = INT16_MAX;
	static int8_t x3670 = INT8_MIN;
	volatile uint32_t x3672 = 6U;

	t85 = ((x3669/(x3670%x3671))>>x3672);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3721 = 1U;
	static volatile int64_t x3723 = 4708864800935LL;
	uint64_t x3724 = 0LLU;
	static int64_t t86 = 3190919LL;

	t86 = ((x3721/(x3722%x3723))>>x3724);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3782 = INT32_MAX;
	static int32_t x3783 = 8622620;
	uint16_t x3784 = 1U;

	t87 = ((x3781/(x3782%x3783))>>x3784);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3941 = INT32_MIN;
	static int16_t x3942 = -16;
	int8_t x3944 = 1;
	volatile int32_t t88 = -43820;

	t88 = ((x3941/(x3942%x3943))>>x3944);

	if (t88 != 67108864) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3947 = UINT8_MAX;
	uint32_t x3948 = 32U;
	int64_t t89 = 68202381857650LL;

	t89 = ((x3945/(x3946%x3947))>>x3948);

	if (t89 != 16777216LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3977 = UINT64_MAX;
	static int32_t x3978 = INT32_MIN;
	int16_t x3979 = 62;
	volatile uint8_t x3980 = 7U;
	static uint64_t t90 = 628391885027LLU;

	t90 = ((x3977/(x3978%x3979))>>x3980);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x3983 = 6U;
	int64_t t91 = 0LL;

	t91 = ((x3981/(x3982%x3983))>>x3984);

	if (t91 != 2048LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x3989 = INT32_MAX;
	volatile uint32_t x3990 = 7873978U;
	uint16_t x3991 = 3539U;
	static volatile int16_t x3992 = 1;
	uint32_t t92 = 547982199U;

	t92 = ((x3989/(x3990%x3991))>>x3992);

	if (t92 != 331197U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4006 = INT64_MAX;
	static int32_t x4007 = INT32_MIN;
	uint64_t t93 = 9079LLU;

	t93 = ((x4005/(x4006%x4007))>>x4008);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4025 = 26214060568701143LLU;
	int64_t x4026 = INT64_MIN;
	uint64_t x4027 = 977LLU;
	uint64_t x4028 = 2LLU;

	t94 = ((x4025/(x4026%x4027))>>x4028);

	if (t94 != 8412728038735LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4031 = 21621203225438LLU;
	volatile int8_t x4032 = 2;

	t95 = ((x4029/(x4030%x4031))>>x4032);

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x4302 = -1;
	volatile uint64_t x4303 = 183107004113LLU;
	volatile uint64_t t96 = 505249377213029LLU;

	t96 = ((x4301/(x4302%x4303))>>x4304);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4305 = 1;
	volatile int16_t x4306 = 5;
	int32_t x4307 = INT32_MIN;
	int8_t x4308 = 0;
	int32_t t97 = -717872;

	t97 = ((x4305/(x4306%x4307))>>x4308);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4343 = -1;
	volatile uint64_t t98 = 15605955161251LLU;

	t98 = ((x4341/(x4342%x4343))>>x4344);

	if (t98 != 19752629944607LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4397 = UINT32_MAX;
	int32_t x4398 = INT32_MIN;
	uint32_t x4400 = 4U;
	uint32_t t99 = 1U;

	t99 = ((x4397/(x4398%x4399))>>x4400);

	if (t99 != 0U) { NG(); } else { ; }
	
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


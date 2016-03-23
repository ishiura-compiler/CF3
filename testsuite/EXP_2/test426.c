
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = -1LL;
int32_t x102 = -1;
int8_t x172 = 1;
uint8_t x436 = 1U;
int8_t x439 = INT8_MIN;
int32_t t7 = 571004582;
uint32_t t8 = 2U;
uint16_t x555 = 1085U;
int8_t x773 = INT8_MAX;
static volatile int64_t x825 = -1LL;
int32_t x910 = INT32_MAX;
static volatile uint16_t x933 = 16514U;
static int64_t x971 = 1521806LL;
static int64_t t15 = -8481357397LL;
int8_t x1157 = -1;
static uint64_t t17 = 1LLU;
uint64_t x1353 = UINT64_MAX;
int64_t x1354 = -1LL;
int8_t x1419 = -11;
volatile uint8_t x1420 = 1U;
volatile uint64_t x1538 = UINT64_MAX;
int8_t x1540 = 6;
volatile uint64_t t20 = 541325272282404568LLU;
uint64_t x1597 = UINT64_MAX;
int32_t x1599 = -15071472;
static volatile uint64_t t21 = 21389310LLU;
static int32_t x1701 = -53;
uint32_t t23 = 3280U;
uint8_t x1724 = 1U;
static uint64_t x1814 = 34845LLU;
uint16_t x1995 = 8376U;
static uint8_t x2152 = 7U;
volatile uint8_t x2172 = 1U;
uint16_t x2406 = 115U;
static volatile int64_t x2418 = 44549774326988867LL;
uint64_t x2419 = 57736061LLU;
int32_t x2445 = INT32_MIN;
uint8_t x2446 = 1U;
static int8_t x2574 = INT8_MIN;
int8_t x2744 = 0;
int32_t t41 = 7003067;
int8_t x2883 = 1;
uint8_t x3037 = 0U;
volatile uint64_t t44 = 91788430206493LLU;
static volatile int32_t x3119 = 1;
int32_t x3214 = INT32_MAX;
static uint16_t x3277 = UINT16_MAX;
int16_t x3279 = -1;
int32_t x3365 = INT32_MIN;
volatile int64_t x3367 = INT64_MAX;
static volatile int64_t t51 = -1947015880673307712LL;
uint64_t t54 = 260LLU;
int16_t x3501 = INT16_MIN;
uint16_t x3502 = 294U;
static int32_t x3638 = 0;
uint64_t x3707 = 1LLU;
static uint64_t t58 = 50947264958546344LLU;
int8_t x3889 = 1;
volatile int8_t x3903 = INT8_MIN;
static volatile uint16_t x3904 = 1U;
int16_t x3965 = -1;
int16_t x4007 = INT16_MIN;
uint32_t x4041 = 847190600U;
volatile uint32_t t67 = 440384858U;
static int32_t x4176 = 3;
int8_t x4249 = INT8_MIN;
int8_t x4277 = -1;
volatile uint32_t x4303 = 2U;
static volatile uint64_t t75 = 21LLU;
int64_t x4622 = 0LL;
uint64_t x4782 = 7097LLU;
uint32_t x4783 = UINT32_MAX;
uint16_t x4784 = 1U;
uint16_t x4961 = 3U;
int8_t x5068 = 1;
uint16_t x5212 = 55U;
int64_t x5294 = -1500LL;
uint64_t t87 = 548248403724LLU;
int64_t x5458 = -15LL;
static int16_t x5477 = INT16_MIN;
volatile uint64_t t90 = 73LLU;
uint32_t x5528 = 1U;
uint8_t x5536 = 15U;
volatile int64_t x5561 = INT64_MIN;
volatile int32_t x5605 = -1;
uint64_t x5606 = 8544060LLU;
int8_t x5693 = -3;
static volatile int32_t t96 = -56438273;
uint64_t x5718 = 27482LLU;
uint64_t x5719 = 10262LLU;
volatile uint8_t x5720 = 1U;
int32_t x5769 = -1;
int64_t x5771 = INT64_MIN;
uint16_t x5837 = 10U;
static uint64_t x5903 = 20132834270LLU;
uint64_t t101 = 2256351218707382LLU;
uint16_t x5928 = 12U;
uint64_t x5938 = UINT64_MAX;
int64_t x6077 = -1LL;
int8_t x6078 = INT8_MAX;
int8_t x6080 = 0;
volatile int16_t x6085 = -1;
int8_t x6088 = 47;
static uint64_t x6214 = UINT64_MAX;
volatile uint64_t t107 = 1551186030487585LLU;
volatile uint32_t x6317 = UINT32_MAX;
int16_t x6378 = INT16_MIN;
int16_t x6379 = 0;
uint16_t x6450 = 291U;
uint64_t x6451 = 48349359432195277LLU;
static int16_t x6453 = -1;
uint16_t x6455 = UINT16_MAX;
uint32_t x6456 = 14U;
int32_t t113 = 29604859;
int32_t x6594 = INT32_MIN;
uint64_t x6596 = 0LLU;
volatile int32_t x6629 = INT32_MIN;
uint64_t x6761 = 270806510357LLU;
uint64_t t118 = 15224341LLU;
volatile int8_t x6837 = INT8_MIN;
uint64_t x6839 = UINT64_MAX;
int16_t x7061 = INT16_MAX;
volatile uint8_t x7063 = UINT8_MAX;
uint32_t t123 = 155381U;
static int64_t x7245 = -1LL;
uint8_t x7247 = 1U;
uint8_t x7248 = 13U;
uint8_t x7377 = UINT8_MAX;
int16_t x7378 = INT16_MIN;
int64_t x7379 = 0LL;
int64_t x7505 = INT64_MIN;
int64_t x7510 = -2318639271LL;
volatile int8_t x7697 = INT8_MIN;
int8_t x7698 = -1;
uint32_t x7707 = 626U;
int16_t x7708 = 56;
static int8_t x7777 = 0;
int32_t t133 = -183;
uint64_t x7810 = 35763372550442LLU;
uint16_t x7908 = 0U;
volatile int32_t x7933 = INT32_MIN;
int64_t x8002 = -6655LL;
uint64_t t144 = 1919907212232397717LLU;
int8_t x8285 = 23;
int16_t x8359 = INT16_MAX;
uint8_t x8360 = 3U;
static volatile int32_t x8469 = -1;
uint32_t x8471 = 69U;
static uint64_t t149 = 5605223LLU;
int16_t x8607 = -3;
uint8_t x8716 = 25U;
int8_t x8748 = 1;
int32_t x8756 = 2;
uint32_t t155 = 27017066U;


void f0(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x11 = 1374;
	int64_t x12 = 9LL;
	static int64_t t0 = -39LL;

    t0 = ((x9*(x10*x11))<<x12);

    if (t0 != 90046464LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x101 = 82U;
	int64_t x103 = -1LL;
	uint8_t x104 = 2U;
	int64_t t1 = 149279297LL;

    t1 = ((x101*(x102*x103))<<x104);

    if (t1 != 328LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x169 = 4553122279363319274LLU;
	static int16_t x170 = -1;
	static uint64_t x171 = 22LLU;
	uint64_t t2 = 96713700037807LLU;

    t2 = ((x169*(x170*x171))<<x172);

    if (t2 != 2576804518819019720LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MIN;
	uint64_t x335 = 600510LLU;
	int8_t x336 = 3;
	volatile uint64_t t3 = 18749LLU;

    t3 = ((x333*(x334*x335))<<x336);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x357 = -1LL;
	static volatile uint64_t x358 = 1864591LLU;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 12;
	volatile uint64_t t4 = 260707LLU;

    t4 = ((x357*(x358*x359))<<x360);

    if (t4 != 16401115884371836928LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x409 = 6;
	int16_t x410 = -11523;
	uint32_t x411 = 332524174U;
	static int8_t x412 = 0;
	uint32_t t5 = 27027U;

    t5 = ((x409*(x410*x411))<<x412);

    if (t5 != 903593476U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x433 = -1;
	uint32_t x434 = 2445705U;
	static int32_t x435 = 2;
	uint32_t t6 = 4739066U;

    t6 = ((x433*(x434*x435))<<x436);

    if (t6 != 4285184476U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x437 = -8565;
	volatile int8_t x438 = INT8_MAX;
	int16_t x440 = 0;

    t7 = ((x437*(x438*x439))<<x440);

    if (t7 != 139232640) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x473 = 61U;
	int8_t x474 = INT8_MAX;
	int16_t x475 = 2039;
	uint16_t x476 = 19U;

    t8 = ((x473*(x474*x475))<<x476);

    if (t8 != 1026031616U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x553 = UINT32_MAX;
	static int8_t x554 = -1;
	uint8_t x556 = 6U;
	uint32_t t9 = 2U;

    t9 = ((x553*(x554*x555))<<x556);

    if (t9 != 69440U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x774 = -1;
	uint64_t x775 = 1LLU;
	static int8_t x776 = 1;
	uint64_t t10 = 7412289168LLU;

    t10 = ((x773*(x774*x775))<<x776);

    if (t10 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x826 = -1LL;
	static uint64_t x827 = UINT64_MAX;
	volatile uint16_t x828 = 4U;
	uint64_t t11 = 3LLU;

    t11 = ((x825*(x826*x827))<<x828);

    if (t11 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x909 = INT8_MIN;
	uint64_t x911 = 909289LLU;
	uint8_t x912 = 53U;
	uint64_t t12 = 853514343624067LLU;

    t12 = ((x909*(x910*x911))<<x912);

    if (t12 != 10376293541461622784LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x917 = INT16_MIN;
	int8_t x918 = INT8_MIN;
	uint32_t x919 = 3599U;
	static uint32_t x920 = 25U;
	static volatile uint32_t t13 = 869139422U;

    t13 = ((x917*(x918*x919))<<x920);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x934 = INT8_MIN;
	volatile int32_t x935 = -1;
	uint8_t x936 = 0U;
	int32_t t14 = -10681967;

    t14 = ((x933*(x934*x935))<<x936);

    if (t14 != 2113792) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x969 = INT32_MIN;
	static volatile int32_t x970 = -5;
	static volatile uint8_t x972 = 2U;

    t15 = ((x969*(x970*x971))<<x972);

    if (t15 != 65361070008565760LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x1158 = 6713527423998192280LLU;
	volatile int64_t x1159 = 110522251LL;
	int8_t x1160 = 14;
	static uint64_t t16 = 313502731602816497LLU;

    t16 = ((x1157*(x1158*x1159))<<x1160);

    if (t16 != 1467012174359429120LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x1261 = UINT32_MAX;
	static uint64_t x1262 = UINT64_MAX;
	uint16_t x1263 = 0U;
	volatile int8_t x1264 = 3;

    t17 = ((x1261*(x1262*x1263))<<x1264);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x1355 = INT16_MIN;
	static uint16_t x1356 = 38U;
	static uint64_t t18 = 62699303245663035LLU;

    t18 = ((x1353*(x1354*x1355))<<x1356);

    if (t18 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1417 = INT8_MAX;
	volatile int8_t x1418 = INT8_MIN;
	volatile int32_t t19 = -367092034;

    t19 = ((x1417*(x1418*x1419))<<x1420);

    if (t19 != 357632) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x1537 = 13720569041662LL;
	int8_t x1539 = INT8_MAX;

    t20 = ((x1537*(x1538*x1539))<<x1540);

    if (t20 != 18335223288538922880LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x1598 = -95053229LL;
	uint16_t x1600 = 5U;

    t21 = ((x1597*(x1598*x1599))<<x1600);

    if (t21 != 18400901127169292800LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1617 = 615723873LLU;
	volatile int32_t x1618 = -1;
	static int16_t x1619 = INT16_MIN;
	int64_t x1620 = 27LL;
	volatile uint64_t t22 = 101LLU;

    t22 = ((x1617*(x1618*x1619))<<x1620);

    if (t22 != 14757596689497849856LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x1702 = 19U;
	volatile uint32_t x1703 = 310055U;
	volatile int8_t x1704 = 0;

    t23 = ((x1701*(x1702*x1703))<<x1704);

    if (t23 != 3982741911U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1721 = 650966062872143LL;
	uint64_t x1722 = 230292719LLU;
	int8_t x1723 = -1;
	uint64_t t24 = 64898613LLU;

    t24 = ((x1721*(x1722*x1723))<<x1724);

    if (t24 != 7888982973530312830LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1761 = 38;
	uint64_t x1762 = 1607LLU;
	static int32_t x1763 = -1;
	int16_t x1764 = 20;
	uint64_t t25 = 181LLU;

    t25 = ((x1761*(x1762*x1763))<<x1764);

    if (t25 != 18446744009677209600LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x1813 = INT8_MIN;
	volatile uint8_t x1815 = 2U;
	volatile uint8_t x1816 = 2U;
	volatile uint64_t t26 = 23264565547555LLU;

    t26 = ((x1813*(x1814*x1815))<<x1816);

    if (t26 != 18446744073673870336LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x1817 = -1;
	static uint64_t x1818 = 799695853LLU;
	uint16_t x1819 = 111U;
	volatile int64_t x1820 = 0LL;
	static volatile uint64_t t27 = 6179502494LLU;

    t27 = ((x1817*(x1818*x1819))<<x1820);

    if (t27 != 18446743984943311933LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1869 = INT8_MAX;
	volatile int16_t x1870 = 2087;
	uint8_t x1871 = UINT8_MAX;
	int64_t x1872 = 0LL;
	volatile int32_t t28 = 1;

    t28 = ((x1869*(x1870*x1871))<<x1872);

    if (t28 != 67587495) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x1873 = 271691298794LLU;
	static uint16_t x1874 = 191U;
	uint8_t x1875 = 127U;
	volatile int8_t x1876 = 1;
	static volatile uint64_t t29 = 5827997678729717625LLU;

    t29 = ((x1873*(x1874*x1875))<<x1876);

    if (t29 != 13180831669692116LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1993 = -1;
	uint64_t x1994 = 323662506LLU;
	volatile int8_t x1996 = 38;
	uint64_t t30 = 874028448842098LLU;

    t30 = ((x1993*(x1994*x1995))<<x1996);

    if (t30 != 18344696200512405504LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2033 = UINT16_MAX;
	volatile uint8_t x2034 = 5U;
	static uint32_t x2035 = 32080U;
	uint8_t x2036 = 5U;
	volatile uint32_t t31 = 82784U;

    t31 = ((x2033*(x2034*x2035))<<x2036);

    if (t31 != 1370598912U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2149 = INT8_MAX;
	int64_t x2150 = -194089826562144LL;
	int64_t x2151 = -1LL;
	volatile int64_t t32 = -11001949162714LL;

    t32 = ((x2149*(x2150*x2151))<<x2152);

    if (t32 != 3155124220594212864LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2169 = UINT64_MAX;
	int16_t x2170 = -421;
	static int64_t x2171 = -1LL;
	volatile uint64_t t33 = 358058598805243LLU;

    t33 = ((x2169*(x2170*x2171))<<x2172);

    if (t33 != 18446744073709550774LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x2405 = 1799517155665LLU;
	int64_t x2407 = 153647478907LL;
	uint16_t x2408 = 1U;
	uint64_t t34 = 86683752700LLU;

    t34 = ((x2405*(x2406*x2407))<<x2408);

    if (t34 != 1145042171124754722LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2417 = INT16_MIN;
	static volatile uint8_t x2420 = 20U;
	volatile uint64_t t35 = 115988855LLU;

    t35 = ((x2417*(x2418*x2419))<<x2420);

    if (t35 != 17831283953206558720LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2447 = 1099422LLU;
	int16_t x2448 = 1;
	uint64_t t36 = 27848225243LLU;

    t36 = ((x2445*(x2446*x2447))<<x2448);

    if (t36 != 18442022092175048704LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2493 = 0U;
	int16_t x2494 = -1;
	static uint8_t x2495 = 23U;
	int16_t x2496 = 5;
	int32_t t37 = 2309421;

    t37 = ((x2493*(x2494*x2495))<<x2496);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2573 = INT32_MIN;
	uint32_t x2575 = UINT32_MAX;
	int32_t x2576 = 1;
	volatile uint32_t t38 = 143060U;

    t38 = ((x2573*(x2574*x2575))<<x2576);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x2581 = 815838405U;
	volatile int32_t x2582 = -1;
	static uint8_t x2583 = 20U;
	volatile int16_t x2584 = 1;
	uint32_t t39 = 185U;

    t39 = ((x2581*(x2582*x2583))<<x2584);

    if (t39 != 1726202168U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x2741 = 0;
	int8_t x2742 = -1;
	int8_t x2743 = INT8_MAX;
	volatile int32_t t40 = 10627;

    t40 = ((x2741*(x2742*x2743))<<x2744);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x2801 = 2032U;
	volatile int8_t x2802 = INT8_MIN;
	int8_t x2803 = -1;
	int16_t x2804 = 3;

    t41 = ((x2801*(x2802*x2803))<<x2804);

    if (t41 != 2080768) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2869 = INT16_MAX;
	int16_t x2870 = -1;
	volatile uint32_t x2871 = 2U;
	static volatile uint32_t x2872 = 11U;
	volatile uint32_t t42 = 1569164U;

    t42 = ((x2869*(x2870*x2871))<<x2872);

    if (t42 != 4160753664U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x2881 = 1372005U;
	uint64_t x2882 = 3505639902461988426LLU;
	int16_t x2884 = 15;
	static uint64_t t43 = 7048315894964343590LLU;

    t43 = ((x2881*(x2882*x2883))<<x2884);

    if (t43 != 13890773327155888128LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x3038 = 27U;
	uint64_t x3039 = 30LLU;
	int8_t x3040 = 1;

    t44 = ((x3037*(x3038*x3039))<<x3040);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x3117 = -1;
	int8_t x3118 = -1;
	int64_t x3120 = 0LL;
	volatile int32_t t45 = -1;

    t45 = ((x3117*(x3118*x3119))<<x3120);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x3137 = 250073U;
	int64_t x3138 = -4439623LL;
	static uint64_t x3139 = 1802795653LLU;
	int8_t x3140 = 9;
	uint64_t t46 = 3LLU;

    t46 = ((x3137*(x3138*x3139))<<x3140);

    if (t46 != 13442938628267256320LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x3169 = INT16_MIN;
	static int32_t x3170 = 3831;
	int16_t x3171 = -1;
	uint16_t x3172 = 1U;
	static int32_t t47 = 2024;

    t47 = ((x3169*(x3170*x3171))<<x3172);

    if (t47 != 251068416) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3177 = -1;
	uint32_t x3178 = UINT32_MAX;
	uint64_t x3179 = 556LLU;
	int8_t x3180 = 2;
	uint64_t t48 = 413992453LLU;

    t48 = ((x3177*(x3178*x3179))<<x3180);

    if (t48 != 18446734521702287536LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x3213 = 1964LLU;
	volatile uint64_t x3215 = 251LLU;
	uint16_t x3216 = 6U;
	uint64_t t49 = 872LLU;

    t49 = ((x3213*(x3214*x3215))<<x3216);

    if (t49 != 67752456227821312LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3278 = 1U;
	static uint8_t x3280 = 18U;
	uint32_t t50 = 9181U;

    t50 = ((x3277*(x3278*x3279))<<x3280);

    if (t50 != 262144U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3366 = 0U;
	volatile int8_t x3368 = 1;

    t51 = ((x3365*(x3366*x3367))<<x3368);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x3417 = UINT16_MAX;
	uint64_t x3418 = 2766164954815LLU;
	uint32_t x3419 = 347488U;
	int16_t x3420 = 1;
	uint64_t t52 = 234616LLU;

    t52 = ((x3417*(x3418*x3419))<<x3420);

    if (t52 != 12865103841653164736LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3449 = -2;
	static volatile int32_t x3450 = 276004004;
	int32_t x3451 = -1;
	volatile uint8_t x3452 = 1U;
	volatile int32_t t53 = -6;

    t53 = ((x3449*(x3450*x3451))<<x3452);

    if (t53 != 1104016016) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x3461 = 58U;
	int64_t x3462 = INT64_MIN;
	volatile uint64_t x3463 = 29203020LLU;
	int16_t x3464 = 0;

    t54 = ((x3461*(x3462*x3463))<<x3464);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3503 = -1LL;
	static uint32_t x3504 = 0U;
	int64_t t55 = 100707372505882LL;

    t55 = ((x3501*(x3502*x3503))<<x3504);

    if (t55 != 9633792LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x3637 = UINT16_MAX;
	volatile uint64_t x3639 = 153733LLU;
	volatile int16_t x3640 = 1;
	volatile uint64_t t56 = 37049LLU;

    t56 = ((x3637*(x3638*x3639))<<x3640);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x3665 = 1270U;
	int64_t x3666 = INT64_MAX;
	static uint32_t x3667 = 0U;
	int8_t x3668 = 31;
	int64_t t57 = -17902170618271LL;

    t57 = ((x3665*(x3666*x3667))<<x3668);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x3705 = -1;
	volatile uint32_t x3706 = UINT32_MAX;
	int8_t x3708 = 3;

    t58 = ((x3705*(x3706*x3707))<<x3708);

    if (t58 != 18446744039349813256LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x3805 = INT8_MIN;
	int32_t x3806 = 10085;
	static int8_t x3807 = -1;
	int8_t x3808 = 0;
	int32_t t59 = 165340320;

    t59 = ((x3805*(x3806*x3807))<<x3808);

    if (t59 != 1290880) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x3841 = INT8_MIN;
	static volatile uint8_t x3842 = 1U;
	int8_t x3843 = 0;
	int16_t x3844 = 4;
	int32_t t60 = 1247;

    t60 = ((x3841*(x3842*x3843))<<x3844);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x3849 = UINT16_MAX;
	uint8_t x3850 = 2U;
	uint32_t x3851 = 13U;
	uint8_t x3852 = 4U;
	uint32_t t61 = 121062U;

    t61 = ((x3849*(x3850*x3851))<<x3852);

    if (t61 != 27262560U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x3890 = -1;
	int8_t x3891 = -1;
	uint32_t x3892 = 0U;
	int32_t t62 = -32305;

    t62 = ((x3889*(x3890*x3891))<<x3892);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x3901 = -1;
	uint64_t x3902 = 262080284966LLU;
	static uint64_t t63 = 52983658264LLU;

    t63 = ((x3901*(x3902*x3903))<<x3904);

    if (t63 != 67092552951296LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x3966 = -1;
	volatile uint16_t x3967 = UINT16_MAX;
	int16_t x3968 = 0;
	int32_t t64 = 376;

    t64 = ((x3965*(x3966*x3967))<<x3968);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x3969 = INT8_MIN;
	int64_t x3970 = -56562635LL;
	static int32_t x3971 = 5070;
	uint32_t x3972 = 2U;
	int64_t t65 = -129076LL;

    t65 = ((x3969*(x3970*x3971))<<x3972);

    if (t65 != 146827550438400LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x4005 = INT8_MAX;
	int8_t x4006 = INT8_MIN;
	int16_t x4008 = 1;
	int32_t t66 = 30;

    t66 = ((x4005*(x4006*x4007))<<x4008);

    if (t66 != 1065353216) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x4042 = -6;
	int32_t x4043 = -1;
	static uint32_t x4044 = 12U;

    t67 = ((x4041*(x4042*x4043))<<x4044);

    if (t67 != 2849701888U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x4065 = -1;
	static uint32_t x4066 = 203U;
	static int16_t x4067 = INT16_MAX;
	uint8_t x4068 = 6U;
	uint32_t t68 = 107055276U;

    t68 = ((x4065*(x4066*x4067))<<x4068);

    if (t68 != 3869258432U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x4149 = UINT16_MAX;
	uint32_t x4150 = 1U;
	static uint32_t x4151 = 692U;
	uint8_t x4152 = 8U;
	uint32_t t69 = 37U;

    t69 = ((x4149*(x4150*x4151))<<x4152);

    if (t69 != 3019721728U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x4173 = UINT16_MAX;
	uint16_t x4174 = 6U;
	uint32_t x4175 = 1767U;
	volatile uint32_t t70 = 1074745387U;

    t70 = ((x4173*(x4174*x4175))<<x4176);

    if (t70 != 1263449264U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4213 = 153649563562LLU;
	int32_t x4214 = -1;
	volatile uint8_t x4215 = 55U;
	static uint16_t x4216 = 46U;
	volatile uint64_t t71 = 53254330737855320LLU;

    t71 = ((x4213*(x4214*x4215))<<x4216);

    if (t71 != 12006174394104676352LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x4250 = UINT64_MAX;
	int8_t x4251 = -1;
	int8_t x4252 = 0;
	static volatile uint64_t t72 = 598286293LLU;

    t72 = ((x4249*(x4250*x4251))<<x4252);

    if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x4278 = 6624U;
	int8_t x4279 = -1;
	int8_t x4280 = 3;
	uint32_t t73 = 9633153U;

    t73 = ((x4277*(x4278*x4279))<<x4280);

    if (t73 != 52992U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4301 = -1;
	volatile int16_t x4302 = -1;
	int16_t x4304 = 0;
	volatile uint32_t t74 = 5U;

    t74 = ((x4301*(x4302*x4303))<<x4304);

    if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4365 = 57149221763674236LLU;
	int16_t x4366 = INT16_MIN;
	int8_t x4367 = -1;
	uint8_t x4368 = 6U;

    t75 = ((x4365*(x4366*x4367))<<x4368);

    if (t75 != 2108473241994526720LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x4549 = UINT32_MAX;
	static int8_t x4550 = 1;
	volatile int16_t x4551 = INT16_MIN;
	uint32_t x4552 = 10U;
	volatile uint32_t t76 = 150319U;

    t76 = ((x4549*(x4550*x4551))<<x4552);

    if (t76 != 33554432U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x4577 = 7000795LLU;
	uint64_t x4578 = 1562788547924610228LLU;
	volatile uint8_t x4579 = 1U;
	uint8_t x4580 = 11U;
	static volatile uint64_t t77 = 225795322LLU;

    t77 = ((x4577*(x4578*x4579))<<x4580);

    if (t77 != 17577162188319088640LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x4621 = INT16_MIN;
	int32_t x4623 = -27725;
	uint8_t x4624 = 11U;
	static int64_t t78 = -1436085864821LL;

    t78 = ((x4621*(x4622*x4623))<<x4624);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x4721 = 0U;
	int16_t x4722 = INT16_MAX;
	uint16_t x4723 = 882U;
	uint8_t x4724 = 0U;
	int32_t t79 = 0;

    t79 = ((x4721*(x4722*x4723))<<x4724);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x4781 = 32500623753LLU;
	volatile uint64_t t80 = 249119LLU;

    t80 = ((x4781*(x4782*x4783))<<x4784);

    if (t80 != 26259026314596862LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x4805 = -629;
	uint64_t x4806 = UINT64_MAX;
	uint8_t x4807 = UINT8_MAX;
	uint8_t x4808 = 38U;
	uint64_t t81 = 10LLU;

    t81 = ((x4805*(x4806*x4807))<<x4808);

    if (t81 != 44089041884282880LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x4841 = INT8_MIN;
	int64_t x4842 = -43833211886LL;
	static uint64_t x4843 = 25799097LLU;
	uint16_t x4844 = 1U;
	static volatile uint64_t t82 = 35LLU;

    t82 = ((x4841*(x4842*x4843))<<x4844);

    if (t82 != 12798303923084262912LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x4962 = 104U;
	int16_t x4963 = 0;
	uint16_t x4964 = 5U;
	uint32_t t83 = 6U;

    t83 = ((x4961*(x4962*x4963))<<x4964);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x5065 = 5074312660LLU;
	int16_t x5066 = -1;
	int32_t x5067 = -1;
	uint64_t t84 = 464200097LLU;

    t84 = ((x5065*(x5066*x5067))<<x5068);

    if (t84 != 10148625320LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x5169 = INT8_MIN;
	int8_t x5170 = 0;
	volatile int16_t x5171 = INT16_MIN;
	uint16_t x5172 = 0U;
	volatile int32_t t85 = 4;

    t85 = ((x5169*(x5170*x5171))<<x5172);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x5209 = 1132028632463352386LLU;
	uint32_t x5210 = UINT32_MAX;
	uint32_t x5211 = 3U;
	uint64_t t86 = 142LLU;

    t86 = ((x5209*(x5210*x5211))<<x5212);

    if (t86 != 11313042263954685952LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x5293 = 749184LLU;
	volatile uint16_t x5295 = 0U;
	volatile uint16_t x5296 = 12U;

    t87 = ((x5293*(x5294*x5295))<<x5296);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x5433 = -1;
	uint8_t x5434 = 5U;
	int64_t x5435 = -645587537911887717LL;
	uint16_t x5436 = 1U;
	volatile int64_t t88 = 79LL;

    t88 = ((x5433*(x5434*x5435))<<x5436);

    if (t88 != 6455875379118877170LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x5457 = 28521300314718636LLU;
	uint8_t x5459 = 2U;
	volatile uint16_t x5460 = 25U;
	static uint64_t t89 = 1929030855LLU;

    t89 = ((x5457*(x5458*x5459))<<x5460);

    if (t89 != 13070723320301748224LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x5478 = INT16_MIN;
	volatile uint64_t x5479 = UINT64_MAX;
	uint16_t x5480 = 0U;

    t90 = ((x5477*(x5478*x5479))<<x5480);

    if (t90 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x5525 = 119U;
	volatile uint8_t x5526 = 69U;
	static volatile uint8_t x5527 = 2U;
	int32_t t91 = 30729;

    t91 = ((x5525*(x5526*x5527))<<x5528);

    if (t91 != 32844) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x5533 = -5LL;
	int64_t x5534 = 79254LL;
	int8_t x5535 = -45;
	int64_t t92 = 506968LL;

    t92 = ((x5533*(x5534*x5535))<<x5536);

    if (t92 != 584323891200LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x5562 = INT16_MIN;
	uint64_t x5563 = UINT64_MAX;
	uint16_t x5564 = 2U;
	volatile uint64_t t93 = 353349687739LLU;

    t93 = ((x5561*(x5562*x5563))<<x5564);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x5573 = -1;
	static uint16_t x5574 = 2U;
	uint32_t x5575 = 11524691U;
	int8_t x5576 = 5;
	uint32_t t94 = 22429U;

    t94 = ((x5573*(x5574*x5575))<<x5576);

    if (t94 != 3557387072U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x5607 = UINT32_MAX;
	volatile uint64_t x5608 = 0LLU;
	uint64_t t95 = 19996823560170LLU;

    t95 = ((x5605*(x5606*x5607))<<x5608);

    if (t95 != 18410047615443033916LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x5694 = 2;
	int16_t x5695 = INT16_MIN;
	int8_t x5696 = 0;

    t96 = ((x5693*(x5694*x5695))<<x5696);

    if (t96 != 196608) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x5717 = 1862LLU;
	static uint64_t t97 = 1285917LLU;

    t97 = ((x5717*(x5718*x5719))<<x5720);

    if (t97 != 1050243537616LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x5770 = 0U;
	volatile uint16_t x5772 = 55U;
	int64_t t98 = -1023990251456LL;

    t98 = ((x5769*(x5770*x5771))<<x5772);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x5833 = -20;
	int16_t x5834 = INT16_MIN;
	uint32_t x5835 = UINT32_MAX;
	int64_t x5836 = 0LL;
	volatile uint32_t t99 = 69721U;

    t99 = ((x5833*(x5834*x5835))<<x5836);

    if (t99 != 4294311936U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5838 = UINT16_MAX;
	static int64_t x5839 = 8LL;
	uint8_t x5840 = 4U;
	int64_t t100 = -424806367LL;

    t100 = ((x5837*(x5838*x5839))<<x5840);

    if (t100 != 83884800LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x5901 = 1;
	uint16_t x5902 = 64U;
	uint16_t x5904 = 38U;

    t101 = ((x5901*(x5902*x5903))<<x5904);

    if (t101 != 3079864010795909120LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x5925 = INT16_MIN;
	uint64_t x5926 = UINT64_MAX;
	int64_t x5927 = 228911LL;
	uint64_t t102 = 472195974080LLU;

    t102 = ((x5925*(x5926*x5927))<<x5928);

    if (t102 != 30723914334208LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5937 = INT8_MAX;
	uint8_t x5939 = 44U;
	uint64_t x5940 = 0LLU;
	volatile uint64_t t103 = 865537LLU;

    t103 = ((x5937*(x5938*x5939))<<x5940);

    if (t103 != 18446744073709546028LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x6079 = INT8_MIN;
	static int64_t t104 = 2637LL;

    t104 = ((x6077*(x6078*x6079))<<x6080);

    if (t104 != 16256LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x6086 = INT16_MIN;
	uint64_t x6087 = 3720912673398772789LLU;
	volatile uint64_t t105 = 45492184872992LLU;

    t105 = ((x6085*(x6086*x6087))<<x6088);

    if (t105 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x6213 = UINT64_MAX;
	int32_t x6215 = INT32_MAX;
	volatile uint8_t x6216 = 44U;
	uint64_t t106 = 22502LLU;

    t106 = ((x6213*(x6214*x6215))<<x6216);

    if (t106 != 18446726481523507200LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x6221 = UINT16_MAX;
	uint64_t x6222 = 8LLU;
	uint8_t x6223 = 0U;
	uint8_t x6224 = 19U;

    t107 = ((x6221*(x6222*x6223))<<x6224);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x6229 = 54542173794457637LLU;
	volatile uint64_t x6230 = 736817965213359806LLU;
	static uint8_t x6231 = 0U;
	int8_t x6232 = 0;
	uint64_t t108 = 7050120812LLU;

    t108 = ((x6229*(x6230*x6231))<<x6232);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x6318 = -248;
	uint32_t x6319 = 2457U;
	volatile uint32_t x6320 = 13U;
	volatile uint32_t t109 = 21745U;

    t109 = ((x6317*(x6318*x6319))<<x6320);

    if (t109 != 696713216U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x6377 = INT16_MIN;
	uint8_t x6380 = 2U;
	volatile int32_t t110 = 101;

    t110 = ((x6377*(x6378*x6379))<<x6380);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x6421 = 0;
	volatile int16_t x6422 = 8;
	int16_t x6423 = INT16_MIN;
	uint8_t x6424 = 7U;
	volatile int32_t t111 = 12;

    t111 = ((x6421*(x6422*x6423))<<x6424);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x6449 = INT8_MIN;
	int64_t x6452 = 43LL;
	volatile uint64_t t112 = 1LLU;

    t112 = ((x6449*(x6450*x6451))<<x6452);

    if (t112 != 856809829107236864LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x6454 = -1;

    t113 = ((x6453*(x6454*x6455))<<x6456);

    if (t113 != 1073725440) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x6569 = UINT32_MAX;
	int16_t x6570 = INT16_MAX;
	uint64_t x6571 = 4684851137LLU;
	int8_t x6572 = 22;
	uint64_t t114 = 375597150893LLU;

    t114 = ((x6569*(x6570*x6571))<<x6572);

    if (t114 != 2909561934405697536LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x6593 = INT32_MAX;
	static uint64_t x6595 = 15258022713231210LLU;
	static volatile uint64_t t115 = 7411056LLU;

    t115 = ((x6593*(x6594*x6595))<<x6596);

    if (t115 != 2298528735743180800LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x6630 = -1LL;
	int16_t x6631 = INT16_MAX;
	int32_t x6632 = 12;
	volatile int64_t t116 = 341LL;

    t116 = ((x6629*(x6630*x6631))<<x6632);

    if (t116 != 288221580058689536LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x6681 = -1LL;
	uint16_t x6682 = 21854U;
	int64_t x6683 = -308303662715LL;
	int16_t x6684 = 2;
	volatile int64_t t117 = 321LL;

    t117 = ((x6681*(x6682*x6683))<<x6684);

    if (t117 != 26950672979894440LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x6762 = INT16_MIN;
	int32_t x6763 = 6320;
	static uint16_t x6764 = 35U;

    t118 = ((x6761*(x6762*x6763))<<x6764);

    if (t118 != 11979575008805519360LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x6805 = 0;
	uint32_t x6806 = 313U;
	int16_t x6807 = -38;
	static int8_t x6808 = 13;
	volatile uint32_t t119 = 2U;

    t119 = ((x6805*(x6806*x6807))<<x6808);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x6838 = INT64_MAX;
	uint8_t x6840 = 8U;
	volatile uint64_t t120 = 7729532326658284LLU;

    t120 = ((x6837*(x6838*x6839))<<x6840);

    if (t120 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x6905 = 19U;
	static int32_t x6906 = -1;
	int8_t x6907 = INT8_MIN;
	uint8_t x6908 = 13U;
	int32_t t121 = 5954;

    t121 = ((x6905*(x6906*x6907))<<x6908);

    if (t121 != 19922944) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x7062 = 1U;
	uint64_t x7064 = 1LLU;
	static volatile uint32_t t122 = 114512U;

    t122 = ((x7061*(x7062*x7063))<<x7064);

    if (t122 != 16711170U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x7237 = 0U;
	int8_t x7238 = INT8_MIN;
	uint32_t x7239 = 327U;
	volatile uint8_t x7240 = 5U;

    t123 = ((x7237*(x7238*x7239))<<x7240);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x7246 = INT8_MIN;
	static int64_t t124 = 371217978530847664LL;

    t124 = ((x7245*(x7246*x7247))<<x7248);

    if (t124 != 1048576LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x7380 = 23U;
	int64_t t125 = 16118068903LL;

    t125 = ((x7377*(x7378*x7379))<<x7380);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x7381 = UINT64_MAX;
	int64_t x7382 = -1598423587007LL;
	uint16_t x7383 = UINT16_MAX;
	int16_t x7384 = 1;
	volatile uint64_t t126 = 2040LLU;

    t126 = ((x7381*(x7382*x7383))<<x7384);

    if (t126 != 209505379549007490LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x7417 = 716;
	uint32_t x7418 = UINT32_MAX;
	int32_t x7419 = INT32_MIN;
	int16_t x7420 = 17;
	uint32_t t127 = 150U;

    t127 = ((x7417*(x7418*x7419))<<x7420);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x7506 = 74LLU;
	uint32_t x7507 = 124630446U;
	uint8_t x7508 = 19U;
	volatile uint64_t t128 = 1523703327532639LLU;

    t128 = ((x7505*(x7506*x7507))<<x7508);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x7509 = INT16_MAX;
	static uint64_t x7511 = 626LLU;
	uint8_t x7512 = 11U;
	uint64_t t129 = 21028126LLU;

    t129 = ((x7509*(x7510*x7511))<<x7512);

    if (t129 != 13277056112470978560LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x7699 = UINT64_MAX;
	int8_t x7700 = 27;
	static uint64_t t130 = 25881854310273708LLU;

    t130 = ((x7697*(x7698*x7699))<<x7700);

    if (t130 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x7705 = INT32_MIN;
	uint64_t x7706 = 1580211230212LLU;
	static uint64_t t131 = 3794LLU;

    t131 = ((x7705*(x7706*x7707))<<x7708);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x7717 = 125156781851613015LLU;
	uint16_t x7718 = 7U;
	int16_t x7719 = -1;
	uint64_t x7720 = 16LLU;
	volatile uint64_t t132 = 3160440105340LLU;

    t132 = ((x7717*(x7718*x7719))<<x7720);

    if (t132 != 8790313466660323328LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x7778 = 29408;
	int16_t x7779 = 80;
	volatile uint8_t x7780 = 9U;

    t133 = ((x7777*(x7778*x7779))<<x7780);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x7801 = 156464605LLU;
	volatile uint32_t x7802 = 29590515U;
	int32_t x7803 = -1;
	static uint16_t x7804 = 3U;
	volatile uint64_t t134 = 294513831707LLU;

    t134 = ((x7801*(x7802*x7803))<<x7804);

    if (t134 != 5339043945722692040LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x7809 = INT64_MAX;
	static uint32_t x7811 = 444688150U;
	int32_t x7812 = 48;
	uint64_t t135 = 59807840779583LLU;

    t135 = ((x7809*(x7810*x7811))<<x7812);

    if (t135 != 1181069002277912576LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x7905 = 48353918418499LL;
	int8_t x7906 = -1;
	uint64_t x7907 = 1563048227LLU;
	volatile uint64_t t136 = 6193LLU;

    t136 = ((x7905*(x7906*x7907))<<x7908);

    if (t136 != 15250761524236571095LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x7913 = INT8_MAX;
	uint64_t x7914 = 15LLU;
	int64_t x7915 = INT64_MIN;
	int32_t x7916 = 13;
	volatile uint64_t t137 = 40101761881581LLU;

    t137 = ((x7913*(x7914*x7915))<<x7916);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x7917 = INT8_MIN;
	int16_t x7918 = 7984;
	uint64_t x7919 = UINT64_MAX;
	static volatile int32_t x7920 = 1;
	uint64_t t138 = 5878LLU;

    t138 = ((x7917*(x7918*x7919))<<x7920);

    if (t138 != 2043904LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x7934 = 52LLU;
	uint16_t x7935 = UINT16_MAX;
	static uint8_t x7936 = 5U;
	volatile uint64_t t139 = 45482400518148LLU;

    t139 = ((x7933*(x7934*x7935))<<x7936);

    if (t139 != 18212560466499076096LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x7961 = INT8_MIN;
	volatile uint32_t x7962 = 484928900U;
	int8_t x7963 = 7;
	uint16_t x7964 = 3U;
	volatile uint32_t t140 = 51U;

    t140 = ((x7961*(x7962*x7963))<<x7964);

    if (t140 != 2953154560U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x8001 = -1;
	volatile uint8_t x8003 = UINT8_MAX;
	static int8_t x8004 = 12;
	static int64_t t141 = -82738557421LL;

    t141 = ((x8001*(x8002*x8003))<<x8004);

    if (t141 != 6951014400LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x8017 = INT32_MIN;
	volatile uint64_t x8018 = 97515460361648LLU;
	uint8_t x8019 = 59U;
	static int32_t x8020 = 2;
	uint64_t t142 = 928777996LLU;

    t142 = ((x8017*(x8018*x8019))<<x8020);

    if (t142 != 12664422181401264128LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x8229 = 232LLU;
	int64_t x8230 = 1166938LL;
	int32_t x8231 = -1;
	uint8_t x8232 = 18U;
	volatile uint64_t t143 = 21970668084312677LLU;

    t143 = ((x8229*(x8230*x8231))<<x8232);

    if (t143 != 18446673103565094912LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x8281 = UINT64_MAX;
	volatile uint64_t x8282 = 6806817400LLU;
	volatile int32_t x8283 = INT32_MIN;
	static int16_t x8284 = 7;

    t144 = ((x8281*(x8282*x8283))<<x8284);

    if (t144 != 7922568417335312384LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x8286 = -1;
	int16_t x8287 = INT16_MIN;
	volatile uint8_t x8288 = 0U;
	int32_t t145 = -77;

    t145 = ((x8285*(x8286*x8287))<<x8288);

    if (t145 != 753664) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x8357 = 200LLU;
	uint16_t x8358 = UINT16_MAX;
	volatile uint64_t t146 = 1019211954366722349LLU;

    t146 = ((x8357*(x8358*x8359))<<x8360);

    if (t146 != 3435816552000LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x8429 = INT16_MIN;
	volatile int32_t x8430 = 0;
	uint8_t x8431 = 0U;
	uint8_t x8432 = 4U;
	volatile int32_t t147 = -39;

    t147 = ((x8429*(x8430*x8431))<<x8432);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x8470 = 593309380;
	uint8_t x8472 = 0U;
	static uint32_t t148 = 1023U;

    t148 = ((x8469*(x8470*x8471))<<x8472);

    if (t148 != 2011325740U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x8585 = 28925LLU;
	volatile uint8_t x8586 = UINT8_MAX;
	static int64_t x8587 = -1LL;
	static int64_t x8588 = 16LL;

    t149 = ((x8585*(x8586*x8587))<<x8588);

    if (t149 != 18446743590324207616LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x8605 = 65177580989813LLU;
	uint16_t x8606 = UINT16_MAX;
	uint32_t x8608 = 46U;
	volatile uint64_t t150 = 15075491LLU;

    t150 = ((x8605*(x8606*x8607))<<x8608);

    if (t150 != 3609564732593274880LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x8713 = 838482;
	uint8_t x8714 = 26U;
	volatile uint64_t x8715 = 1111LLU;
	static volatile uint64_t t151 = 1LLU;

    t151 = ((x8713*(x8714*x8715))<<x8716);

    if (t151 != 812701464567742464LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x8745 = -1;
	volatile int8_t x8746 = INT8_MIN;
	uint64_t x8747 = 23932373038156949LLU;
	volatile uint64_t t152 = 522494325051780432LLU;

    t152 = ((x8745*(x8746*x8747))<<x8748);

    if (t152 != 6126687497768178944LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x8753 = 7612020010521953LLU;
	static volatile int8_t x8754 = INT8_MIN;
	static volatile int16_t x8755 = INT16_MIN;
	volatile uint64_t t153 = 161LLU;

    t153 = ((x8753*(x8754*x8755))<<x8756);

    if (t153 != 1694690557852385280LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x8773 = INT32_MIN;
	int64_t x8774 = INT64_MAX;
	uint64_t x8775 = 1708LLU;
	uint8_t x8776 = 3U;
	uint64_t t154 = 7LLU;

    t154 = ((x8773*(x8774*x8775))<<x8776);

    if (t154 != 29343216566272LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x8821 = -7;
	static int16_t x8822 = INT16_MIN;
	static uint32_t x8823 = 19223U;
	volatile uint8_t x8824 = 3U;

    t155 = ((x8821*(x8822*x8823))<<x8824);

    if (t155 != 914620416U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x8885 = 108U;
	int16_t x8886 = INT16_MAX;
	static uint8_t x8887 = 8U;
	volatile uint8_t x8888 = 0U;
	static int32_t t156 = 5717;

    t156 = ((x8885*(x8886*x8887))<<x8888);

    if (t156 != 28310688) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x8909 = 29;
	int32_t x8910 = 2;
	uint8_t x8911 = 0U;
	volatile uint8_t x8912 = 3U;
	volatile int32_t t157 = 115603165;

    t157 = ((x8909*(x8910*x8911))<<x8912);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x8941 = 360442274873264LLU;
	volatile int16_t x8942 = 1471;
	static uint32_t x8943 = 161479795U;
	uint32_t x8944 = 4U;
	uint64_t t158 = 2996LLU;

    t158 = ((x8941*(x8942*x8943))<<x8944);

    if (t158 != 12369924611607625472LLU) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();


    return 0;
}


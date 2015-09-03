#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x38 = 132332599U;
uint32_t t0 = 0U;
uint16_t x55 = 248U;
int64_t x59 = INT64_MIN;
uint32_t t3 = 445286U;
int32_t x86 = -1;
int32_t x109 = INT32_MAX;
int8_t x110 = INT8_MIN;
int8_t x111 = 1;
volatile uint8_t x126 = 10U;
int32_t x130 = INT32_MIN;
uint64_t x175 = 229924011LLU;
static uint64_t x241 = 918815127786LLU;
uint32_t x279 = 1251183U;
uint64_t x280 = 4LLU;
static volatile uint16_t x291 = UINT16_MAX;
int32_t x292 = 0;
static uint32_t x305 = 4086U;
static volatile int32_t x306 = INT32_MAX;
int8_t x446 = INT8_MAX;
volatile uint64_t t17 = 2082508835342354LLU;
static uint32_t x682 = 220226417U;
int8_t x683 = INT8_MAX;
static int32_t x710 = INT32_MIN;
int16_t x717 = 5808;
static uint16_t x1015 = UINT16_MAX;
uint64_t t23 = 4686851LLU;
volatile int16_t x1039 = INT16_MAX;
int32_t x1338 = 128;
uint32_t t30 = 1929U;
static uint16_t x1550 = 1511U;
int64_t x1575 = INT64_MAX;
volatile int16_t x1609 = INT16_MAX;
int64_t x1610 = 15342LL;
uint8_t x1732 = 8U;
int64_t x1893 = 973687586LL;
volatile uint16_t x1896 = 49U;
static int16_t x1921 = -2;
volatile int32_t x1924 = 1;
uint32_t t39 = 54036U;
volatile int32_t x1952 = 0;
uint64_t t40 = 113426666LLU;
static volatile uint8_t x2085 = UINT8_MAX;
uint8_t x2086 = UINT8_MAX;
volatile int32_t t42 = -398096;
int16_t x2116 = 0;
uint8_t x2401 = 46U;
volatile uint8_t x2404 = 2U;
static uint16_t x2533 = 1434U;
uint64_t x2534 = 56569481011LLU;
int16_t x2535 = INT16_MIN;
int8_t x2536 = 5;
uint8_t x2582 = UINT8_MAX;
int16_t x2966 = INT16_MIN;
static int16_t x2967 = -1713;
static int16_t x3020 = 0;
int16_t x3046 = INT16_MIN;
int32_t x3087 = INT32_MAX;
uint16_t x3244 = 0U;
uint64_t t55 = 7LLU;
int32_t x3246 = INT32_MIN;
uint8_t x3248 = 1U;
uint64_t t57 = 727545219184719804LLU;
int16_t x3297 = INT16_MIN;
static uint64_t x3313 = 1LLU;
uint64_t x3415 = 54032356380LLU;
uint32_t x3506 = UINT32_MAX;
int16_t x3509 = INT16_MAX;
uint16_t x3531 = UINT16_MAX;
volatile int32_t x3826 = -1;
int16_t x3937 = -1;
int16_t x4058 = -1;
uint64_t x4067 = 2445129078LLU;
uint64_t t71 = 12167225706LLU;
volatile int64_t x4126 = INT64_MIN;
static volatile int32_t x4169 = -1;
int8_t x4172 = 0;
int8_t x4357 = INT8_MAX;
static volatile int32_t t78 = -26493;
uint64_t x4381 = 3045734855LLU;
uint16_t x4384 = 13U;
uint64_t x4553 = 1920LLU;
static int32_t x4618 = -34150007;
int16_t x4619 = -1;
uint32_t x4665 = 13218U;
uint32_t x4703 = 52933632U;
volatile uint32_t t86 = 21445426U;
static volatile int8_t x4754 = -1;
static volatile int16_t x4755 = -6;
volatile int16_t x4756 = 1;
uint8_t x4957 = UINT8_MAX;
volatile int32_t t89 = -85947152;
volatile uint64_t x5071 = 62694748315LLU;
volatile uint64_t x5162 = 38355073LLU;
volatile uint16_t x5197 = 298U;
volatile uint32_t x5198 = 186678U;
static uint32_t t92 = 371U;
volatile int64_t x5592 = 1LL;
volatile int64_t x5603 = INT64_MAX;
int64_t t95 = -2141LL;
uint16_t x5705 = 26U;
static uint8_t x5789 = UINT8_MAX;
int8_t x5792 = 1;
static volatile int32_t t97 = 148;
int16_t x5818 = INT16_MAX;
uint8_t x5819 = 48U;
static int8_t x5820 = 8;
int32_t x5867 = INT32_MIN;
volatile uint64_t t99 = 14174412868LLU;


void f0(void) {
	volatile uint8_t x37 = 3U;
	int32_t x39 = 490545927;
	uint8_t x40 = 17U;

	t0 = (((x37%x38)|x39)>>x40);

	if (t0 != 3742U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x53 = 6U;
	volatile int16_t x54 = -7;
	int8_t x56 = 7;
	volatile int32_t t1 = 7;

	t1 = (((x53%x54)|x55)>>x56);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x57 = 17;
	uint64_t x58 = 350451LLU;
	uint8_t x60 = 29U;
	uint64_t t2 = 5639556478360221209LLU;

	t2 = (((x57%x58)|x59)>>x60);

	if (t2 != 17179869184LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x65 = -1;
	uint32_t x66 = 333175457U;
	volatile int32_t x67 = INT32_MIN;
	uint8_t x68 = 6U;

	t3 = (((x65%x66)|x67)>>x68);

	if (t3 != 38192897U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x85 = -1;
	uint32_t x87 = 110126604U;
	volatile uint32_t x88 = 0U;
	volatile uint32_t t4 = 706903U;

	t4 = (((x85%x86)|x87)>>x88);

	if (t4 != 110126604U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x112 = 1;
	static int32_t t5 = -3;

	t5 = (((x109%x110)|x111)>>x112);

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int16_t x127 = -1;
	int8_t x128 = 43;
	uint64_t t6 = 113086751453857LLU;

	t6 = (((x125%x126)|x127)>>x128);

	if (t6 != 2097151LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x129 = 62LLU;
	uint16_t x131 = 44U;
	int8_t x132 = 14;
	volatile uint64_t t7 = 1096361860453LLU;

	t7 = (((x129%x130)|x131)>>x132);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x173 = INT32_MAX;
	volatile uint8_t x174 = UINT8_MAX;
	uint16_t x176 = 4U;
	volatile uint64_t t8 = 62744384341291LLU;

	t8 = (((x173%x174)|x175)>>x176);

	if (t8 != 14370255LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x205 = INT32_MIN;
	static uint32_t x206 = UINT32_MAX;
	static int64_t x207 = INT64_MAX;
	int8_t x208 = 0;
	volatile int64_t t9 = INT64_MAX;

	t9 = (((x205%x206)|x207)>>x208);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x242 = -4051;
	uint64_t x243 = 26021316LLU;
	int8_t x244 = 11;
	uint64_t t10 = 207512LLU;

	t10 = (((x241%x242)|x243)>>x244);

	if (t10 != 448640487LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x278 = 4761322991118LLU;
	uint64_t t11 = 657931LLU;

	t11 = (((x277%x278)|x279)>>x280);

	if (t11 != 79871LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = 193227176324LL;
	volatile int64_t t12 = -8884128LL;

	t12 = (((x289%x290)|x291)>>x292);

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x307 = UINT8_MAX;
	static volatile int8_t x308 = 5;
	static volatile uint32_t t13 = 207U;

	t13 = (((x305%x306)|x307)>>x308);

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = 199205502LLU;
	int32_t x427 = INT32_MIN;
	uint32_t x428 = 25U;
	volatile uint64_t t14 = 7114367544206505469LLU;

	t14 = (((x425%x426)|x427)>>x428);

	if (t14 != 549755813829LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = 1;
	volatile uint8_t x435 = UINT8_MAX;
	uint16_t x436 = 23U;
	int32_t t15 = -63780;

	t15 = (((x433%x434)|x435)>>x436);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x445 = UINT16_MAX;
	uint32_t x447 = UINT32_MAX;
	volatile uint8_t x448 = 3U;
	uint32_t t16 = 2911028U;

	t16 = (((x445%x446)|x447)>>x448);

	if (t16 != 536870911U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x537 = INT16_MIN;
	uint64_t x538 = 61484092124227LLU;
	uint16_t x539 = UINT16_MAX;
	uint32_t x540 = 3U;

	t17 = (((x537%x538)|x539)>>x540);

	if (t17 != 5102278811647LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x681 = INT32_MIN;
	volatile int32_t x684 = 25;
	volatile uint32_t t18 = 1320290626U;

	t18 = (((x681%x682)|x683)>>x684);

	if (t18 != 4U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x709 = INT8_MIN;
	uint64_t x711 = 1630418LLU;
	uint16_t x712 = 3U;
	uint64_t t19 = 9655216944190LLU;

	t19 = (((x709%x710)|x711)>>x712);

	if (t19 != 2305843009213693946LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x718 = 7241778244740528671LLU;
	int16_t x719 = -38;
	uint8_t x720 = 32U;
	static uint64_t t20 = 4051700718LLU;

	t20 = (((x717%x718)|x719)>>x720);

	if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x729 = 0U;
	volatile uint64_t x730 = 58672935810070786LLU;
	volatile int8_t x731 = INT8_MIN;
	uint8_t x732 = 1U;
	volatile uint64_t t21 = 257858298100LLU;

	t21 = (((x729%x730)|x731)>>x732);

	if (t21 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x909 = UINT32_MAX;
	uint16_t x910 = 612U;
	static int8_t x911 = INT8_MIN;
	int8_t x912 = 1;
	uint32_t t22 = 3064U;

	t22 = (((x909%x910)|x911)>>x912);

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1013 = UINT64_MAX;
	int32_t x1014 = INT32_MIN;
	static uint64_t x1016 = 10LLU;

	t23 = (((x1013%x1014)|x1015)>>x1016);

	if (t23 != 2097151LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1037 = -6;
	uint32_t x1038 = 1211689721U;
	uint32_t x1040 = 1U;
	uint32_t t24 = 255U;

	t24 = (((x1037%x1038)|x1039)>>x1040);

	if (t24 != 329957375U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1069 = 3U;
	int64_t x1070 = INT64_MIN;
	int32_t x1071 = INT32_MAX;
	static uint8_t x1072 = 3U;
	int64_t t25 = -207234LL;

	t25 = (((x1069%x1070)|x1071)>>x1072);

	if (t25 != 268435455LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1141 = 522747156031100LLU;
	int16_t x1142 = INT16_MIN;
	uint8_t x1143 = 16U;
	int8_t x1144 = 0;
	uint64_t t26 = 1LLU;

	t26 = (((x1141%x1142)|x1143)>>x1144);

	if (t26 != 522747156031100LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1181 = 159785U;
	uint32_t x1182 = UINT32_MAX;
	int8_t x1183 = 0;
	uint16_t x1184 = 3U;
	uint32_t t27 = 619926U;

	t27 = (((x1181%x1182)|x1183)>>x1184);

	if (t27 != 19973U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1297 = UINT64_MAX;
	static int8_t x1298 = -1;
	uint8_t x1299 = 16U;
	uint8_t x1300 = 54U;
	volatile uint64_t t28 = 135552LLU;

	t28 = (((x1297%x1298)|x1299)>>x1300);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1337 = INT64_MIN;
	static uint64_t x1339 = UINT64_MAX;
	int32_t x1340 = 57;
	volatile uint64_t t29 = 241247302LLU;

	t29 = (((x1337%x1338)|x1339)>>x1340);

	if (t29 != 127LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1405 = INT32_MIN;
	uint8_t x1406 = 36U;
	uint32_t x1407 = 1106099373U;
	static volatile int8_t x1408 = 1;

	t30 = (((x1405%x1406)|x1407)>>x1408);

	if (t30 != 2147483638U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1549 = 151512882LLU;
	static uint64_t x1551 = 971LLU;
	static uint8_t x1552 = 30U;
	uint64_t t31 = 49000757LLU;

	t31 = (((x1549%x1550)|x1551)>>x1552);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1573 = 14U;
	int16_t x1574 = -1;
	uint8_t x1576 = 6U;
	volatile int64_t t32 = -121827665039LL;

	t32 = (((x1573%x1574)|x1575)>>x1576);

	if (t32 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1611 = 1891204003LLU;
	uint8_t x1612 = 10U;
	volatile uint64_t t33 = 3LLU;

	t33 = (((x1609%x1610)|x1611)>>x1612);

	if (t33 != 1846878LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1633 = 3408U;
	uint32_t x1634 = 693U;
	static int16_t x1635 = INT16_MIN;
	int8_t x1636 = 0;
	volatile uint32_t t34 = 4U;

	t34 = (((x1633%x1634)|x1635)>>x1636);

	if (t34 != 4294935164U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1693 = -1LL;
	static uint64_t x1694 = 2174311LLU;
	uint8_t x1695 = UINT8_MAX;
	static uint8_t x1696 = 1U;
	volatile uint64_t t35 = 399359618418LLU;

	t35 = (((x1693%x1694)|x1695)>>x1696);

	if (t35 != 484223LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1729 = INT32_MAX;
	static int32_t x1730 = -53219081;
	int8_t x1731 = INT8_MAX;
	volatile int32_t t36 = 993;

	t36 = (((x1729%x1730)|x1731)>>x1732);

	if (t36 != 73126) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1813 = 22572773U;
	static uint64_t x1814 = 289LLU;
	volatile uint8_t x1815 = 0U;
	static volatile uint32_t x1816 = 5U;
	volatile uint64_t t37 = 364869156LLU;

	t37 = (((x1813%x1814)|x1815)>>x1816);

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1894 = UINT16_MAX;
	int64_t x1895 = INT64_MAX;
	int64_t t38 = -3LL;

	t38 = (((x1893%x1894)|x1895)>>x1896);

	if (t38 != 16383LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1922 = UINT16_MAX;
	static uint32_t x1923 = 14U;

	t39 = (((x1921%x1922)|x1923)>>x1924);

	if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1949 = 212287752347276LLU;
	int32_t x1950 = -26821;
	int16_t x1951 = -908;

	t40 = (((x1949%x1950)|x1951)>>x1952);

	if (t40 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2005 = 243U;
	uint8_t x2006 = UINT8_MAX;
	int32_t x2007 = INT32_MIN;
	int8_t x2008 = 7;
	static uint32_t t41 = 452U;

	t41 = (((x2005%x2006)|x2007)>>x2008);

	if (t41 != 16777217U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x2087 = 423U;
	volatile uint16_t x2088 = 0U;

	t42 = (((x2085%x2086)|x2087)>>x2088);

	if (t42 != 423) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2113 = -29;
	int32_t x2114 = -1;
	uint64_t x2115 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

	t43 = (((x2113%x2114)|x2115)>>x2116);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2402 = INT8_MIN;
	volatile int32_t x2403 = 858;
	int32_t t44 = 371217;

	t44 = (((x2401%x2402)|x2403)>>x2404);

	if (t44 != 223) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2429 = 19651680757084039LLU;
	volatile uint32_t x2430 = 482315U;
	int64_t x2431 = INT64_MAX;
	uint32_t x2432 = 4U;
	volatile uint64_t t45 = 9086039618724879257LLU;

	t45 = (((x2429%x2430)|x2431)>>x2432);

	if (t45 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t t46 = 38LLU;

	t46 = (((x2533%x2534)|x2535)>>x2536);

	if (t46 != 576460752303422508LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2581 = 2744LL;
	uint8_t x2583 = 28U;
	int16_t x2584 = 7;
	static volatile int64_t t47 = 217LL;

	t47 = (((x2581%x2582)|x2583)>>x2584);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x2597 = 2055542760282LLU;
	uint16_t x2598 = 275U;
	int16_t x2599 = 12;
	volatile uint8_t x2600 = 5U;
	uint64_t t48 = 206435446LLU;

	t48 = (((x2597%x2598)|x2599)>>x2600);

	if (t48 != 4LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2601 = 5236395443LL;
	uint64_t x2602 = 121588LLU;
	int8_t x2603 = -1;
	int8_t x2604 = 6;
	volatile uint64_t t49 = 4178673129345841531LLU;

	t49 = (((x2601%x2602)|x2603)>>x2604);

	if (t49 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2709 = 29;
	uint64_t x2710 = UINT64_MAX;
	volatile int8_t x2711 = 5;
	uint8_t x2712 = 6U;
	volatile uint64_t t50 = 16283645278LLU;

	t50 = (((x2709%x2710)|x2711)>>x2712);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2965 = 645665U;
	volatile int64_t x2968 = 1LL;
	static volatile uint32_t t51 = 21U;

	t51 = (((x2965%x2966)|x2967)>>x2968);

	if (t51 != 2147483063U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x3017 = 3U;
	volatile int8_t x3018 = -5;
	volatile uint16_t x3019 = UINT16_MAX;
	int32_t t52 = -13;

	t52 = (((x3017%x3018)|x3019)>>x3020);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3045 = UINT64_MAX;
	uint16_t x3047 = 7U;
	int8_t x3048 = 24;
	uint64_t t53 = 213200257790LLU;

	t53 = (((x3045%x3046)|x3047)>>x3048);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3085 = INT16_MIN;
	int32_t x3086 = -1;
	static int16_t x3088 = 20;
	volatile int32_t t54 = -58257676;

	t54 = (((x3085%x3086)|x3087)>>x3088);

	if (t54 != 2047) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3241 = UINT64_MAX;
	int8_t x3242 = 5;
	uint32_t x3243 = 4785U;

	t55 = (((x3241%x3242)|x3243)>>x3244);

	if (t55 != 4785LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3245 = INT8_MAX;
	int8_t x3247 = INT8_MAX;
	int32_t t56 = -7;

	t56 = (((x3245%x3246)|x3247)>>x3248);

	if (t56 != 63) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3277 = 4911590108639LL;
	static volatile uint64_t x3278 = UINT64_MAX;
	volatile int64_t x3279 = 109870700187LL;
	uint8_t x3280 = 0U;

	t57 = (((x3277%x3278)|x3279)>>x3280);

	if (t57 != 4946021711839LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3298 = UINT64_MAX;
	volatile int16_t x3299 = 1;
	static int8_t x3300 = 12;
	uint64_t t58 = 7303121572682758LLU;

	t58 = (((x3297%x3298)|x3299)>>x3300);

	if (t58 != 4503599627370488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3314 = 12U;
	int16_t x3315 = INT16_MIN;
	static int16_t x3316 = 0;
	volatile uint64_t t59 = 72145061293670LLU;

	t59 = (((x3313%x3314)|x3315)>>x3316);

	if (t59 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3393 = INT32_MAX;
	int64_t x3394 = -11300308276085588LL;
	volatile uint8_t x3395 = 2U;
	uint8_t x3396 = 59U;
	int64_t t60 = -36898LL;

	t60 = (((x3393%x3394)|x3395)>>x3396);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3413 = UINT32_MAX;
	static int8_t x3414 = INT8_MIN;
	static volatile int16_t x3416 = 1;
	volatile uint64_t t61 = 94361995613441694LLU;

	t61 = (((x3413%x3414)|x3415)>>x3416);

	if (t61 != 27016178239LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3485 = UINT64_MAX;
	static int8_t x3486 = INT8_MIN;
	int8_t x3487 = -1;
	static int8_t x3488 = 5;
	uint64_t t62 = 132780120446914LLU;

	t62 = (((x3485%x3486)|x3487)>>x3488);

	if (t62 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3505 = INT16_MIN;
	static volatile uint8_t x3507 = 48U;
	static volatile int8_t x3508 = 0;
	static volatile uint32_t t63 = 508837U;

	t63 = (((x3505%x3506)|x3507)>>x3508);

	if (t63 != 4294934576U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3510 = INT8_MIN;
	int8_t x3511 = 13;
	uint8_t x3512 = 25U;
	volatile int32_t t64 = 6;

	t64 = (((x3509%x3510)|x3511)>>x3512);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x3529 = UINT32_MAX;
	int32_t x3530 = -464840;
	static uint64_t x3532 = 0LLU;
	uint32_t t65 = 682340U;

	t65 = (((x3529%x3530)|x3531)>>x3532);

	if (t65 != 524287U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3593 = UINT8_MAX;
	static int32_t x3594 = INT32_MIN;
	static uint16_t x3595 = 1883U;
	int8_t x3596 = 5;
	volatile int32_t t66 = 53931;

	t66 = (((x3593%x3594)|x3595)>>x3596);

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3821 = INT16_MAX;
	int8_t x3822 = INT8_MAX;
	uint64_t x3823 = 8764656LLU;
	uint16_t x3824 = 63U;
	uint64_t t67 = 1517070455607434LLU;

	t67 = (((x3821%x3822)|x3823)>>x3824);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x3825 = INT16_MAX;
	static uint32_t x3827 = UINT32_MAX;
	uint8_t x3828 = 11U;
	uint32_t t68 = 1113U;

	t68 = (((x3825%x3826)|x3827)>>x3828);

	if (t68 != 2097151U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3938 = -1LL;
	uint8_t x3939 = UINT8_MAX;
	static int16_t x3940 = 0;
	volatile int64_t t69 = 11LL;

	t69 = (((x3937%x3938)|x3939)>>x3940);

	if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4057 = 14U;
	int32_t x4059 = 1744;
	uint8_t x4060 = 5U;
	volatile int32_t t70 = -39035;

	t70 = (((x4057%x4058)|x4059)>>x4060);

	if (t70 != 54) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4065 = 48109832789589LLU;
	int64_t x4066 = INT64_MAX;
	volatile uint8_t x4068 = 0U;

	t71 = (((x4065%x4066)|x4067)>>x4068);

	if (t71 != 48111988768631LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4081 = INT64_MAX;
	volatile uint16_t x4082 = UINT16_MAX;
	static uint32_t x4083 = UINT32_MAX;
	int8_t x4084 = 10;
	static int64_t t72 = -130106984LL;

	t72 = (((x4081%x4082)|x4083)>>x4084);

	if (t72 != 4194303LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4125 = 32094U;
	uint16_t x4127 = 160U;
	uint8_t x4128 = 0U;
	volatile int64_t t73 = -2481795800LL;

	t73 = (((x4125%x4126)|x4127)>>x4128);

	if (t73 != 32254LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4153 = INT64_MIN;
	static int32_t x4154 = -1;
	static uint64_t x4155 = 390097214978595054LLU;
	int8_t x4156 = 28;
	uint64_t t74 = 31LLU;

	t74 = (((x4153%x4154)|x4155)>>x4156);

	if (t74 != 1453225370LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4170 = 13U;
	uint32_t x4171 = 52636895U;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (((x4169%x4170)|x4171)>>x4172);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4277 = INT8_MAX;
	int32_t x4278 = INT32_MIN;
	static uint64_t x4279 = UINT64_MAX;
	static uint16_t x4280 = 2U;
	uint64_t t76 = 42673LLU;

	t76 = (((x4277%x4278)|x4279)>>x4280);

	if (t76 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4329 = INT32_MAX;
	volatile uint32_t x4330 = 70780U;
	volatile uint16_t x4331 = UINT16_MAX;
	int8_t x4332 = 1;
	uint32_t t77 = 634109617U;

	t77 = (((x4329%x4330)|x4331)>>x4332);

	if (t77 != 32767U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4358 = 781;
	int16_t x4359 = 2350;
	static uint8_t x4360 = 0U;

	t78 = (((x4357%x4358)|x4359)>>x4360);

	if (t78 != 2431) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4361 = 28722917764304416LL;
	int16_t x4362 = -1;
	uint8_t x4363 = 124U;
	uint16_t x4364 = 0U;
	volatile int64_t t79 = -3579975962LL;

	t79 = (((x4361%x4362)|x4363)>>x4364);

	if (t79 != 124LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4382 = -173359;
	uint16_t x4383 = 1506U;
	volatile uint64_t t80 = 240LLU;

	t80 = (((x4381%x4382)|x4383)>>x4384);

	if (t80 != 371793LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4493 = INT64_MAX;
	static volatile uint64_t x4494 = 810LLU;
	static uint32_t x4495 = 562824157U;
	uint8_t x4496 = 7U;
	static volatile uint64_t t81 = 3242LLU;

	t81 = (((x4493%x4494)|x4495)>>x4496);

	if (t81 != 4397063LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4554 = 8305U;
	int8_t x4555 = INT8_MAX;
	static int8_t x4556 = 24;
	volatile uint64_t t82 = 977335082876093LLU;

	t82 = (((x4553%x4554)|x4555)>>x4556);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x4617 = UINT32_MAX;
	uint8_t x4620 = 22U;
	uint32_t t83 = 474095U;

	t83 = (((x4617%x4618)|x4619)>>x4620);

	if (t83 != 1023U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4666 = UINT32_MAX;
	int32_t x4667 = -1;
	uint16_t x4668 = 31U;
	volatile uint32_t t84 = 8524U;

	t84 = (((x4665%x4666)|x4667)>>x4668);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4697 = 0;
	int64_t x4698 = 2924840359328925572LL;
	uint16_t x4699 = UINT16_MAX;
	uint32_t x4700 = 1U;
	int64_t t85 = 4910222330LL;

	t85 = (((x4697%x4698)|x4699)>>x4700);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x4701 = INT8_MIN;
	static uint16_t x4702 = 23149U;
	uint8_t x4704 = 14U;

	t86 = (((x4701%x4702)|x4703)>>x4704);

	if (t86 != 262143U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4753 = 10936102607960704LLU;
	uint64_t t87 = 22096LLU;

	t87 = (((x4753%x4754)|x4755)>>x4756);

	if (t87 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4853 = 114482LLU;
	int16_t x4854 = INT16_MIN;
	int32_t x4855 = INT32_MIN;
	uint8_t x4856 = 2U;
	volatile uint64_t t88 = 140147164212888LLU;

	t88 = (((x4853%x4854)|x4855)>>x4856);

	if (t88 != 4611686017890545612LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4958 = INT32_MIN;
	volatile uint8_t x4959 = 37U;
	int8_t x4960 = 7;

	t89 = (((x4957%x4958)|x4959)>>x4960);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5069 = 101U;
	int8_t x5070 = -38;
	volatile uint32_t x5072 = 23U;
	volatile uint64_t t90 = 4LLU;

	t90 = (((x5069%x5070)|x5071)>>x5072);

	if (t90 != 7473LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5161 = INT8_MAX;
	int32_t x5163 = -1;
	uint8_t x5164 = 2U;
	uint64_t t91 = 244682370243LLU;

	t91 = (((x5161%x5162)|x5163)>>x5164);

	if (t91 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5199 = 0U;
	volatile uint8_t x5200 = 0U;

	t92 = (((x5197%x5198)|x5199)>>x5200);

	if (t92 != 298U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5309 = 11582205022888644LL;
	int64_t x5310 = -1LL;
	uint16_t x5311 = UINT16_MAX;
	uint16_t x5312 = 44U;
	static int64_t t93 = 842893180LL;

	t93 = (((x5309%x5310)|x5311)>>x5312);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5589 = INT32_MIN;
	volatile int8_t x5590 = -1;
	uint8_t x5591 = UINT8_MAX;
	int32_t t94 = 1;

	t94 = (((x5589%x5590)|x5591)>>x5592);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x5601 = INT8_MIN;
	uint32_t x5602 = 16515875U;
	uint8_t x5604 = 50U;

	t95 = (((x5601%x5602)|x5603)>>x5604);

	if (t95 != 8191LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5706 = 13;
	static int8_t x5707 = INT8_MAX;
	uint8_t x5708 = 7U;
	int32_t t96 = -2862864;

	t96 = (((x5705%x5706)|x5707)>>x5708);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5790 = UINT16_MAX;
	uint16_t x5791 = UINT16_MAX;

	t97 = (((x5789%x5790)|x5791)>>x5792);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5817 = 60796;
	volatile int32_t t98 = -21824;

	t98 = (((x5817%x5818)|x5819)>>x5820);

	if (t98 != 109) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5865 = 1;
	uint64_t x5866 = 11LLU;
	uint8_t x5868 = 10U;

	t99 = (((x5865%x5866)|x5867)>>x5868);

	if (t99 != 18014398507384832LLU) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x213 = -5345;
int8_t x217 = 55;
int32_t x219 = 1;
static uint16_t x393 = 62U;
volatile uint32_t x394 = UINT32_MAX;
uint8_t x395 = 30U;
int8_t x396 = 22;
volatile uint32_t t4 = 9U;
volatile int32_t x399 = 7;
int16_t x556 = INT16_MAX;
uint8_t x795 = 0U;
static volatile uint64_t x837 = 907412296LLU;
volatile int8_t x839 = 14;
volatile uint64_t t10 = 33LLU;
static uint32_t x850 = 34064326U;
volatile int64_t t11 = -50581342705LL;
int32_t x910 = -195624671;
volatile int16_t x976 = -6464;
static uint32_t t13 = 2U;
static uint16_t x1015 = 0U;
static volatile int16_t x1016 = INT16_MAX;
uint16_t x1031 = 24U;
int16_t x1289 = 1;
static uint64_t x1290 = UINT64_MAX;
uint64_t x1385 = 1754461793365LLU;
uint8_t x1388 = UINT8_MAX;
static int8_t x1481 = INT8_MIN;
uint8_t x1558 = UINT8_MAX;
uint32_t t24 = 507U;
int16_t x1683 = 0;
int32_t t27 = -7;
volatile uint64_t t28 = 10989031LLU;
int32_t x1867 = 50;
int32_t x1868 = INT32_MIN;
uint64_t t29 = 3197LLU;
uint32_t x2128 = 1448113U;
int8_t x2282 = -1;
volatile uint64_t t32 = 6668966605260292476LLU;
static uint64_t x2306 = UINT64_MAX;
uint8_t x2539 = 32U;
uint16_t x2546 = 10U;
uint32_t x2649 = 8144U;
int16_t x2650 = INT16_MIN;
volatile uint8_t x2651 = 7U;
volatile int64_t t38 = -153372LL;
uint64_t x2836 = 294934131809LLU;
volatile int32_t x2996 = INT32_MAX;
volatile int32_t x3002 = INT32_MIN;
uint8_t x3004 = UINT8_MAX;
uint8_t x3099 = 10U;
int8_t x3253 = -7;
int32_t x3255 = 5;
uint8_t x3329 = 84U;
volatile uint32_t x3341 = 2U;
volatile int16_t x3605 = 1;
static int8_t x3894 = 4;
volatile int16_t x3895 = 3;
volatile int16_t x3896 = 19;
volatile int32_t t57 = 41;
int16_t x4216 = INT16_MIN;
volatile uint64_t t61 = 8232919705LLU;
volatile uint32_t t65 = 643122U;
static volatile int8_t x4571 = 0;
static int16_t x4572 = -330;
volatile uint64_t x4678 = 752584196472768435LLU;
uint64_t t67 = 559973342LLU;
uint16_t x4694 = 6U;
uint8_t x4731 = 39U;
static int8_t x4833 = INT8_MIN;
volatile uint64_t x4873 = 124665463057398LLU;
volatile int8_t x4875 = 21;
volatile uint32_t x4876 = UINT32_MAX;
int8_t x4878 = INT8_MIN;
static uint64_t t73 = 7LLU;
int64_t x4964 = 96431929869167LL;
int8_t x5169 = INT8_MAX;
volatile uint32_t t76 = 0U;
static volatile uint64_t t77 = 1571581790LLU;
volatile uint8_t x5286 = 6U;
volatile uint64_t t78 = 2149767677404LLU;
volatile int8_t x5329 = -1;
static volatile int8_t x5331 = 0;
static int32_t x5450 = INT32_MAX;
static uint32_t t81 = 6187U;
static uint8_t x5485 = 6U;
static uint16_t x5488 = UINT16_MAX;
int16_t x5499 = 4;
static volatile uint64_t x5505 = 160LLU;
uint16_t x5508 = UINT16_MAX;
uint64_t t84 = 20926851388459531LLU;
static int8_t x5599 = 6;
int64_t x5629 = 530928860899424381LL;
static uint8_t x5630 = 23U;
volatile int64_t t86 = 32521827955LL;
int16_t x5736 = INT16_MIN;
uint8_t x5743 = 7U;
uint32_t x5793 = UINT32_MAX;
static int8_t x5900 = INT8_MIN;
volatile uint64_t x5906 = 99999LLU;
uint32_t x5918 = 5U;
volatile uint64_t t96 = 21039LLU;
uint64_t x6150 = UINT64_MAX;
volatile int16_t x6153 = INT16_MIN;
volatile int32_t t98 = 7;
int64_t x6158 = 4037419690726LL;


void f0(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = 190LL;
	static int8_t x111 = 19;
	static int16_t x112 = INT16_MIN;
	volatile uint64_t t0 = 1718LLU;

	t0 = (((x109^x110)<<x111)-x112);

	if (t0 != 18446744073609445376LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x214 = 15002U;
	volatile int32_t x215 = 0;
	static int8_t x216 = 1;
	volatile uint32_t t1 = 11745U;

	t1 = (((x213^x214)<<x215)-x216);

	if (t1 != 4294955396U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x218 = UINT8_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t2 = 333;

	t2 = (((x217^x218)<<x219)-x220);

	if (t2 != 33168) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int8_t x359 = 1;
	volatile int16_t x360 = -1;
	static int32_t t3 = 196719;

	t3 = (((x357^x358)<<x359)-x360);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {


	t4 = (((x393^x394)<<x395)-x396);

	if (t4 != 1073741802U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 43255378U;
	uint8_t x400 = UINT8_MAX;
	uint32_t t5 = 23U;

	t5 = (((x397^x398)<<x399)-x400);

	if (t5 != 1241732481U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x553 = 1LL;
	uint32_t x554 = 3449951U;
	volatile uint16_t x555 = 35U;
	static volatile int64_t t6 = -72485000255797LL;

	t6 = (((x553^x554)<<x555)-x556);

	if (t6 != 118539379382648833LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x745 = -1;
	int64_t x746 = -4455248179913LL;
	static volatile uint8_t x747 = 14U;
	int32_t x748 = -1264338;
	int64_t t7 = 7614LL;

	t7 = (((x745^x746)<<x747)-x748);

	if (t7 != 72994786180942546LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x749 = 1U;
	static uint32_t x750 = 64276204U;
	int8_t x751 = 0;
	static uint32_t x752 = 1035866627U;
	uint32_t t8 = 0U;

	t8 = (((x749^x750)<<x751)-x752);

	if (t8 != 3323376874U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x793 = INT64_MIN;
	int64_t x794 = INT64_MIN;
	int16_t x796 = INT16_MIN;
	int64_t t9 = 75097598786755414LL;

	t9 = (((x793^x794)<<x795)-x796);

	if (t9 != 32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x838 = 9965874U;
	int64_t x840 = INT64_MIN;

	t10 = (((x837^x838)<<x839)-x840);

	if (t10 != 9223387032810586112LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x849 = 53U;
	int8_t x851 = 5;
	volatile int64_t x852 = -1LL;

	t11 = (((x849^x850)<<x851)-x852);

	if (t11 != 1090059873LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x909 = INT16_MIN;
	int64_t x911 = 3LL;
	uint64_t x912 = 30LLU;
	uint64_t t12 = 20021609LLU;

	t12 = (((x909^x910)<<x911)-x912);

	if (t12 != 1564739818LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x973 = INT16_MIN;
	uint32_t x974 = 13774U;
	static volatile int32_t x975 = 0;

	t13 = (((x973^x974)<<x975)-x976);

	if (t13 != 4294954766U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1013 = 715LLU;
	int8_t x1014 = INT8_MAX;
	volatile uint64_t t14 = 13417836355LLU;

	t14 = (((x1013^x1014)<<x1015)-x1016);

	if (t14 != 18446744073709519541LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1029 = INT8_MIN;
	int8_t x1030 = -1;
	int32_t x1032 = 2038;
	volatile int32_t t15 = 645894875;

	t15 = (((x1029^x1030)<<x1031)-x1032);

	if (t15 != 2130704394) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1069 = UINT8_MAX;
	volatile uint16_t x1070 = 5785U;
	int16_t x1071 = 1;
	int16_t x1072 = INT16_MIN;
	static int32_t t16 = -1;

	t16 = (((x1069^x1070)<<x1071)-x1072);

	if (t16 != 44236) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1291 = 3;
	uint16_t x1292 = 6887U;
	volatile uint64_t t17 = 195208LLU;

	t17 = (((x1289^x1290)<<x1291)-x1292);

	if (t17 != 18446744073709544713LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1386 = 19062409007799LL;
	volatile uint8_t x1387 = 30U;
	uint64_t t18 = 2LLU;

	t18 = (((x1385^x1386)<<x1387)-x1388);

	if (t18 != 10052913670503005953LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1393 = 21;
	uint16_t x1394 = 70U;
	uint64_t x1395 = 4LLU;
	uint32_t x1396 = UINT32_MAX;
	uint32_t t19 = 1U;

	t19 = (((x1393^x1394)<<x1395)-x1396);

	if (t19 != 1329U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1482 = -1;
	static uint64_t x1483 = 7LLU;
	int64_t x1484 = -16337494LL;
	int64_t t20 = -5LL;

	t20 = (((x1481^x1482)<<x1483)-x1484);

	if (t20 != 16353750LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1489 = 4U;
	static volatile uint16_t x1490 = 51U;
	uint16_t x1491 = 15U;
	int32_t x1492 = -1;
	volatile uint32_t t21 = 1000U;

	t21 = (((x1489^x1490)<<x1491)-x1492);

	if (t21 != 1802241U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1557 = UINT16_MAX;
	uint8_t x1559 = 3U;
	int16_t x1560 = INT16_MAX;
	int32_t t22 = -44;

	t22 = (((x1557^x1558)<<x1559)-x1560);

	if (t22 != 489473) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1569 = INT16_MAX;
	int8_t x1570 = 2;
	uint8_t x1571 = 11U;
	volatile int64_t x1572 = -1521974443041609LL;
	volatile int64_t t23 = 11029513924LL;

	t23 = (((x1569^x1570)<<x1571)-x1572);

	if (t23 != 1521974510144329LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1633 = -1;
	uint32_t x1634 = 575U;
	uint8_t x1635 = 8U;
	volatile int32_t x1636 = -1;

	t24 = (((x1633^x1634)<<x1635)-x1636);

	if (t24 != 4294819841U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1681 = INT8_MAX;
	static int32_t x1682 = 347503075;
	uint32_t x1684 = 13U;
	static uint32_t t25 = 7371921U;

	t25 = (((x1681^x1682)<<x1683)-x1684);

	if (t25 != 347502991U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1709 = -1;
	uint64_t x1710 = 285365788LLU;
	static volatile int8_t x1711 = 0;
	int16_t x1712 = INT16_MIN;
	volatile uint64_t t26 = 15LLU;

	t26 = (((x1709^x1710)<<x1711)-x1712);

	if (t26 != 18446744073424218595LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1729 = 38;
	static uint16_t x1730 = 1U;
	volatile int16_t x1731 = 0;
	int8_t x1732 = -1;

	t27 = (((x1729^x1730)<<x1731)-x1732);

	if (t27 != 40) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1813 = 14032LLU;
	uint64_t x1814 = 1029311LLU;
	static uint8_t x1815 = 27U;
	int16_t x1816 = INT16_MIN;

	t28 = (((x1813^x1814)<<x1815)-x1816);

	if (t28 != 136423059521536LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1865 = INT64_MIN;
	uint64_t x1866 = 1483954301LLU;

	t29 = (((x1865^x1866)<<x1867)-x1868);

	if (t29 != 7058266518143893504LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x2041 = 77407U;
	uint64_t x2042 = 272343977358LLU;
	uint64_t x2043 = 24LLU;
	int32_t x2044 = INT32_MIN;
	uint64_t t30 = 1762494682LLU;

	t30 = (((x2041^x2042)<<x2043)-x2044);

	if (t30 != 4569172732683485184LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x2125 = UINT64_MAX;
	static uint32_t x2126 = 696390U;
	int16_t x2127 = 2;
	uint64_t t31 = 3534114LLU;

	t31 = (((x2125^x2126)<<x2127)-x2128);

	if (t31 != 18446744073705317939LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2281 = 6813494225459LLU;
	uint8_t x2283 = 0U;
	int16_t x2284 = 3;

	t32 = (((x2281^x2282)<<x2283)-x2284);

	if (t32 != 18446737260215326153LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2285 = 1883U;
	volatile uint64_t x2286 = 281420LLU;
	static uint8_t x2287 = 25U;
	volatile uint8_t x2288 = 0U;
	volatile uint64_t t33 = 114871190411408438LLU;

	t33 = (((x2285^x2286)<<x2287)-x2288);

	if (t33 != 9449699803136LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2305 = 36U;
	volatile int8_t x2307 = 27;
	uint16_t x2308 = 218U;
	volatile uint64_t t34 = 340091587LLU;

	t34 = (((x2305^x2306)<<x2307)-x2308);

	if (t34 != 18446744068743495462LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2481 = 19194131196376LLU;
	int32_t x2482 = -6;
	static int16_t x2483 = 30;
	int8_t x2484 = INT8_MIN;
	volatile uint64_t t35 = 59255533LLU;

	t35 = (((x2481^x2482)<<x2483)-x2484);

	if (t35 != 13918433508767826048LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2537 = 73584169589715LLU;
	uint16_t x2538 = UINT16_MAX;
	uint16_t x2540 = UINT16_MAX;
	volatile uint64_t t36 = 1946350371183343745LLU;

	t36 = (((x2537^x2538)<<x2539)-x2540);

	if (t36 != 11982640636202254337LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2545 = 192603;
	uint8_t x2547 = 3U;
	int8_t x2548 = -44;
	volatile int32_t t37 = 2;

	t37 = (((x2545^x2546)<<x2547)-x2548);

	if (t37 != 1540788) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2652 = INT64_MAX;

	t38 = (((x2649^x2650)<<x2651)-x2652);

	if (t38 != -9223372032562960383LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2833 = UINT64_MAX;
	uint64_t x2834 = 11786176LLU;
	uint8_t x2835 = 7U;
	static volatile uint64_t t39 = 11862880238LLU;

	t39 = (((x2833^x2834)<<x2835)-x2836);

	if (t39 != 18446743777266789151LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2901 = 3;
	volatile uint8_t x2902 = 25U;
	volatile uint32_t x2903 = 6U;
	uint16_t x2904 = 3733U;
	volatile int32_t t40 = -104519187;

	t40 = (((x2901^x2902)<<x2903)-x2904);

	if (t40 != -2069) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x2993 = -1;
	volatile uint64_t x2994 = 935LLU;
	int32_t x2995 = 0;
	volatile uint64_t t41 = 562675LLU;

	t41 = (((x2993^x2994)<<x2995)-x2996);

	if (t41 != 18446744071562067033LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x3001 = 5U;
	uint16_t x3003 = 2U;
	volatile uint32_t t42 = 1728291U;

	t42 = (((x3001^x3002)<<x3003)-x3004);

	if (t42 != 4294967061U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3017 = INT8_MIN;
	uint32_t x3018 = 482001442U;
	int64_t x3019 = 24LL;
	uint16_t x3020 = UINT16_MAX;
	volatile uint32_t t43 = 2046U;

	t43 = (((x3017^x3018)<<x3019)-x3020);

	if (t43 != 2717843457U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3097 = 0;
	volatile uint16_t x3098 = UINT16_MAX;
	int8_t x3100 = INT8_MIN;
	volatile int32_t t44 = -401;

	t44 = (((x3097^x3098)<<x3099)-x3100);

	if (t44 != 67107968) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3137 = INT16_MAX;
	static uint8_t x3138 = 3U;
	uint16_t x3139 = 1U;
	int16_t x3140 = -17;
	int32_t t45 = -4722489;

	t45 = (((x3137^x3138)<<x3139)-x3140);

	if (t45 != 65545) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3149 = -1;
	volatile uint32_t x3150 = 396206U;
	uint8_t x3151 = 1U;
	static int16_t x3152 = INT16_MAX;
	uint32_t t46 = 252U;

	t46 = (((x3149^x3150)<<x3151)-x3152);

	if (t46 != 4294142115U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3254 = -24506LL;
	static int16_t x3256 = INT16_MIN;
	volatile int64_t t47 = 500013372LL;

	t47 = (((x3253^x3254)<<x3255)-x3256);

	if (t47 != 817120LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3330 = UINT32_MAX;
	int8_t x3331 = 1;
	int16_t x3332 = INT16_MAX;
	volatile uint32_t t48 = 565190416U;

	t48 = (((x3329^x3330)<<x3331)-x3332);

	if (t48 != 4294934359U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3342 = 1;
	static uint8_t x3343 = 1U;
	static uint16_t x3344 = 64U;
	volatile uint32_t t49 = 454255U;

	t49 = (((x3341^x3342)<<x3343)-x3344);

	if (t49 != 4294967238U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3413 = INT16_MAX;
	volatile uint64_t x3414 = 131642927490LLU;
	static uint8_t x3415 = 25U;
	int16_t x3416 = INT16_MAX;
	uint64_t t50 = 20099433303719LLU;

	t50 = (((x3413^x3414)<<x3415)-x3416);

	if (t50 != 4417204045123387393LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3509 = 2;
	volatile int64_t x3510 = 96LL;
	int8_t x3511 = 0;
	int64_t x3512 = INT64_MAX;
	static int64_t t51 = -14579238922335044LL;

	t51 = (((x3509^x3510)<<x3511)-x3512);

	if (t51 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x3606 = 782U;
	int16_t x3607 = 1;
	static volatile int64_t x3608 = -150446408118871LL;
	int64_t t52 = -1690046186LL;

	t52 = (((x3605^x3606)<<x3607)-x3608);

	if (t52 != 150446408120437LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3765 = INT16_MIN;
	uint32_t x3766 = UINT32_MAX;
	volatile uint8_t x3767 = 0U;
	int16_t x3768 = INT16_MIN;
	uint32_t t53 = 106163142U;

	t53 = (((x3765^x3766)<<x3767)-x3768);

	if (t53 != 65535U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3773 = INT16_MAX;
	static uint8_t x3774 = 5U;
	int32_t x3775 = 0;
	uint16_t x3776 = 1U;
	int32_t t54 = 25572431;

	t54 = (((x3773^x3774)<<x3775)-x3776);

	if (t54 != 32761) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3893 = 1501U;
	volatile uint32_t t55 = 3U;

	t55 = (((x3893^x3894)<<x3895)-x3896);

	if (t55 != 11957U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3909 = UINT64_MAX;
	volatile uint64_t x3910 = 1668LLU;
	volatile int8_t x3911 = 4;
	int8_t x3912 = -5;
	volatile uint64_t t56 = 65919563165774217LLU;

	t56 = (((x3909^x3910)<<x3911)-x3912);

	if (t56 != 18446744073709524917LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4025 = 1U;
	int32_t x4026 = INT32_MAX;
	static uint16_t x4027 = 0U;
	uint8_t x4028 = 23U;

	t57 = (((x4025^x4026)<<x4027)-x4028);

	if (t57 != 2147483623) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4081 = 23;
	uint8_t x4082 = 20U;
	int8_t x4083 = 14;
	volatile uint64_t x4084 = 17028430715671LLU;
	static volatile uint64_t t58 = 0LLU;

	t58 = (((x4081^x4082)<<x4083)-x4084);

	if (t58 != 18446727045278885097LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x4113 = 68012145681535458LLU;
	static int8_t x4114 = -1;
	int8_t x4115 = 1;
	uint64_t x4116 = 6929LLU;
	uint64_t t59 = 956264340LLU;

	t59 = (((x4113^x4114)<<x4115)-x4116);

	if (t59 != 18310719782346473769LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x4181 = UINT64_MAX;
	int32_t x4182 = -1018780929;
	uint16_t x4183 = 1U;
	volatile uint64_t x4184 = UINT64_MAX;
	static volatile uint64_t t60 = 48337LLU;

	t60 = (((x4181^x4182)<<x4183)-x4184);

	if (t60 != 2037561857LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4213 = 40926774391093LLU;
	int64_t x4214 = INT64_MIN;
	static uint8_t x4215 = 0U;

	t61 = (((x4213^x4214)<<x4215)-x4216);

	if (t61 != 9223412963629199669LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x4297 = -1;
	uint32_t x4298 = 5048139U;
	uint8_t x4299 = 0U;
	static int8_t x4300 = -1;
	volatile uint32_t t62 = 1055516152U;

	t62 = (((x4297^x4298)<<x4299)-x4300);

	if (t62 != 4289919157U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4321 = 35U;
	volatile uint64_t x4322 = UINT64_MAX;
	uint16_t x4323 = 1U;
	int8_t x4324 = INT8_MAX;
	uint64_t t63 = 50808LLU;

	t63 = (((x4321^x4322)<<x4323)-x4324);

	if (t63 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4445 = -1;
	int64_t x4446 = -31LL;
	static volatile uint16_t x4447 = 31U;
	static int32_t x4448 = INT32_MAX;
	int64_t t64 = 0LL;

	t64 = (((x4445^x4446)<<x4447)-x4448);

	if (t64 != 62277025793LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4509 = UINT32_MAX;
	static int16_t x4510 = INT16_MAX;
	static uint16_t x4511 = 0U;
	static int32_t x4512 = 0;

	t65 = (((x4509^x4510)<<x4511)-x4512);

	if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4569 = -121LL;
	int8_t x4570 = INT8_MIN;
	int64_t t66 = -150258283LL;

	t66 = (((x4569^x4570)<<x4571)-x4572);

	if (t66 != 337LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4677 = INT8_MAX;
	uint8_t x4679 = 25U;
	int8_t x4680 = INT8_MIN;

	t67 = (((x4677^x4678)<<x4679)-x4680);

	if (t67 != 12519068048134504576LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4693 = 1899LL;
	uint16_t x4695 = 36U;
	int64_t x4696 = -4139155173327366LL;
	int64_t t68 = -15199LL;

	t68 = (((x4693^x4694)<<x4695)-x4696);

	if (t68 != 4269790898602502LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4729 = UINT64_MAX;
	int16_t x4730 = 0;
	int32_t x4732 = -1;
	volatile uint64_t t69 = 23LLU;

	t69 = (((x4729^x4730)<<x4731)-x4732);

	if (t69 != 18446743523953737729LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4825 = -507;
	static volatile int16_t x4826 = INT16_MIN;
	uint8_t x4827 = 12U;
	volatile int64_t x4828 = INT64_MAX;
	static int64_t t70 = -29461266619481LL;

	t70 = (((x4825^x4826)<<x4827)-x4828);

	if (t70 != -9223372036722634751LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4834 = -1LL;
	volatile uint16_t x4835 = 49U;
	uint64_t x4836 = 57125676LLU;
	uint64_t t71 = 358798976216LLU;

	t71 = (((x4833^x4834)<<x4835)-x4836);

	if (t71 != 71494644027380948LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4874 = -49;
	volatile uint64_t t72 = 263824752534772LLU;

	t72 = (((x4873^x4874)<<x4875)-x4876);

	if (t72 != 15258735919698542593LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4877 = UINT64_MAX;
	uint8_t x4879 = 18U;
	int16_t x4880 = -1;

	t73 = (((x4877^x4878)<<x4879)-x4880);

	if (t73 != 33292289LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4961 = 28U;
	uint8_t x4962 = 2U;
	uint8_t x4963 = 13U;
	volatile int64_t t74 = -1858LL;

	t74 = (((x4961^x4962)<<x4963)-x4964);

	if (t74 != -96431929623407LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5129 = -1;
	int16_t x5130 = INT16_MIN;
	uint64_t x5131 = 3LLU;
	int8_t x5132 = INT8_MIN;
	int32_t t75 = -443354;

	t75 = (((x5129^x5130)<<x5131)-x5132);

	if (t75 != 262264) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x5170 = UINT32_MAX;
	uint8_t x5171 = 6U;
	int32_t x5172 = INT32_MAX;

	t76 = (((x5169^x5170)<<x5171)-x5172);

	if (t76 != 2147475457U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x5273 = INT16_MAX;
	static volatile uint64_t x5274 = 47661895514LLU;
	int16_t x5275 = 9;
	volatile uint32_t x5276 = 1710626189U;

	t77 = (((x5273^x5274)<<x5275)-x5276);

	if (t77 != 24401175852147LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5285 = 71119893311828759LLU;
	uint16_t x5287 = 0U;
	int16_t x5288 = -1;

	t78 = (((x5285^x5286)<<x5287)-x5288);

	if (t78 != 71119893311828754LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x5330 = INT16_MIN;
	uint64_t x5332 = UINT64_MAX;
	uint64_t t79 = 99LLU;

	t79 = (((x5329^x5330)<<x5331)-x5332);

	if (t79 != 32768LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5449 = 1850578180LL;
	volatile uint16_t x5451 = 2U;
	int16_t x5452 = INT16_MIN;
	volatile int64_t t80 = 1LL;

	t80 = (((x5449^x5450)<<x5451)-x5452);

	if (t80 != 1187654636LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5477 = UINT32_MAX;
	int8_t x5478 = INT8_MIN;
	static uint8_t x5479 = 25U;
	static int32_t x5480 = INT32_MIN;

	t81 = (((x5477^x5478)<<x5479)-x5480);

	if (t81 != 2113929216U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5486 = UINT8_MAX;
	uint16_t x5487 = 3U;
	int32_t t82 = 1036;

	t82 = (((x5485^x5486)<<x5487)-x5488);

	if (t82 != -63543) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5497 = -80;
	int16_t x5498 = INT16_MIN;
	uint16_t x5500 = UINT16_MAX;
	int32_t t83 = 0;

	t83 = (((x5497^x5498)<<x5499)-x5500);

	if (t83 != 457473) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5506 = -1;
	uint64_t x5507 = 51LLU;

	t84 = (((x5505^x5506)<<x5507)-x5508);

	if (t84 != 18084204303706161153LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5597 = 0U;
	volatile int8_t x5598 = 0;
	int8_t x5600 = INT8_MIN;
	volatile int32_t t85 = 19927219;

	t85 = (((x5597^x5598)<<x5599)-x5600);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5631 = 1LLU;
	static int16_t x5632 = -1;

	t86 = (((x5629^x5630)<<x5631)-x5632);

	if (t86 != 1061857721798848725LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x5733 = INT16_MIN;
	uint32_t x5734 = UINT32_MAX;
	static uint8_t x5735 = 6U;
	volatile uint32_t t87 = 94U;

	t87 = (((x5733^x5734)<<x5735)-x5736);

	if (t87 != 2129856U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5741 = 12745LLU;
	uint64_t x5742 = UINT64_MAX;
	int16_t x5744 = INT16_MIN;
	volatile uint64_t t88 = 67446184949738LLU;

	t88 = (((x5741^x5742)<<x5743)-x5744);

	if (t88 != 18446744073707952896LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5757 = 66507450U;
	int32_t x5758 = 1;
	uint16_t x5759 = 11U;
	int16_t x5760 = -1;
	volatile uint32_t t89 = 49251668U;

	t89 = (((x5757^x5758)<<x5759)-x5760);

	if (t89 != 3063273473U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5794 = INT16_MAX;
	uint8_t x5795 = 12U;
	int8_t x5796 = 1;
	volatile uint32_t t90 = 843U;

	t90 = (((x5793^x5794)<<x5795)-x5796);

	if (t90 != 4160749567U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5837 = 208LLU;
	static volatile int8_t x5838 = INT8_MIN;
	volatile int8_t x5839 = 16;
	static int8_t x5840 = INT8_MAX;
	static volatile uint64_t t91 = 2204703310LLU;

	t91 = (((x5837^x5838)<<x5839)-x5840);

	if (t91 != 18446744073698017153LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x5897 = 2764492596LLU;
	volatile int16_t x5898 = -1;
	uint8_t x5899 = 0U;
	uint64_t t92 = 148250829338360LLU;

	t92 = (((x5897^x5898)<<x5899)-x5900);

	if (t92 != 18446744070945059147LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5905 = INT16_MIN;
	int32_t x5907 = 0;
	int8_t x5908 = 1;
	uint64_t t93 = 8156919654487LLU;

	t93 = (((x5905^x5906)<<x5907)-x5908);

	if (t93 != 18446744073709422238LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5917 = 1716206253LLU;
	static uint8_t x5919 = 1U;
	int32_t x5920 = INT32_MIN;
	uint64_t t94 = 6600567LLU;

	t94 = (((x5917^x5918)<<x5919)-x5920);

	if (t94 != 5579896144LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5949 = 58U;
	int64_t x5950 = 811819763156LL;
	int16_t x5951 = 6;
	uint16_t x5952 = 16U;
	int64_t t95 = 23298251LL;

	t95 = (((x5949^x5950)<<x5951)-x5952);

	if (t95 != 51956464843632LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6077 = INT8_MIN;
	volatile uint64_t x6078 = 833886815LLU;
	uint8_t x6079 = 31U;
	uint64_t x6080 = 1138642229LLU;

	t96 = (((x6077^x6078)<<x6079)-x6080);

	if (t96 != 16655985906219594443LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6149 = 7224U;
	static uint8_t x6151 = 0U;
	uint64_t x6152 = UINT64_MAX;
	static volatile uint64_t t97 = 31166846476499LLU;

	t97 = (((x6149^x6150)<<x6151)-x6152);

	if (t97 != 18446744073709544392LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6154 = INT8_MIN;
	static uint16_t x6155 = 0U;
	static int16_t x6156 = INT16_MIN;

	t98 = (((x6153^x6154)<<x6155)-x6156);

	if (t98 != 65408) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6157 = 1;
	volatile uint8_t x6159 = 2U;
	int64_t x6160 = -9423LL;
	int64_t t99 = -7096522620265LL;

	t99 = (((x6157^x6158)<<x6159)-x6160);

	if (t99 != 16149678772331LL) { NG(); } else { ; }
	
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


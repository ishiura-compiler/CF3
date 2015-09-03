#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x106 = 47;
int32_t x109 = 20215;
uint64_t x110 = UINT64_MAX;
int8_t x111 = 25;
volatile uint64_t x149 = 21LLU;
int8_t x151 = 0;
uint8_t x240 = 14U;
static int8_t x273 = -1;
uint32_t t4 = 56784198U;
volatile int32_t t7 = 5754;
uint64_t x511 = 27438012083780900LLU;
static uint8_t x512 = 0U;
int64_t x563 = -379591243444968LL;
volatile int64_t t11 = -3493347521LL;
int64_t x751 = 880LL;
volatile int32_t x752 = 1;
static int8_t x821 = 6;
uint32_t x917 = 25039U;
int32_t x918 = INT32_MIN;
static volatile uint32_t t19 = 0U;
uint8_t x964 = 28U;
uint64_t x1001 = 101855721455795850LLU;
static int32_t x1003 = -1;
volatile uint16_t x1010 = 2U;
uint8_t x1011 = 51U;
uint64_t x1053 = UINT64_MAX;
static int16_t x1077 = 2150;
int32_t x1141 = INT32_MIN;
uint64_t t31 = 377934787635LLU;
uint32_t x1193 = UINT32_MAX;
int16_t x1251 = 4;
static int8_t x1289 = INT8_MIN;
volatile uint64_t t34 = 920780194956LLU;
uint32_t x1384 = 1U;
static uint64_t x1402 = 17314595LLU;
uint8_t x1466 = 95U;
uint8_t x1468 = 16U;
volatile int8_t x1483 = -34;
uint64_t t43 = 2284045853104018LLU;
int16_t x1545 = 269;
static uint8_t x1547 = 33U;
int16_t x1578 = INT16_MIN;
volatile uint64_t t45 = 36445076LLU;
uint16_t x1716 = 5U;
uint64_t x1733 = UINT64_MAX;
uint64_t x1741 = 221630521828296049LLU;
uint8_t x1828 = 43U;
uint16_t x1886 = 2U;
int8_t x1915 = INT8_MIN;
uint64_t x1999 = UINT64_MAX;
int32_t x2019 = -35938904;
int8_t x2045 = INT8_MIN;
int8_t x2078 = INT8_MIN;
uint32_t x2115 = 5U;
volatile int16_t x2116 = 59;
static volatile uint64_t x2134 = 16125428LLU;
int64_t x2193 = -1LL;
int32_t x2195 = 13264;
uint32_t x2523 = 21U;
int8_t x2524 = 1;
volatile uint32_t t66 = 434114U;
int16_t x2564 = 3;
volatile int32_t t67 = 102544605;
uint16_t x2602 = UINT16_MAX;
static uint8_t x2603 = 4U;
static uint8_t x2604 = 22U;
volatile int64_t t68 = -18617LL;
int16_t x2619 = INT16_MAX;
int16_t x2639 = INT16_MIN;
uint32_t x2640 = 2U;
int64_t x2650 = -304423508481506LL;
int64_t t72 = -1069588923663682643LL;
int16_t x2702 = -1;
int32_t t76 = 1;
volatile uint64_t x3149 = 44490939957375359LLU;
uint64_t t79 = 62367142146172LLU;
uint8_t x3154 = UINT8_MAX;
int64_t x3194 = INT64_MAX;
int8_t x3195 = INT8_MIN;
static uint64_t t82 = 91LLU;
static int8_t x3237 = -1;
volatile int32_t t85 = 8;
int16_t x3275 = -1733;
int32_t x3276 = 0;
int32_t x3300 = 20;
static int16_t x3305 = 4861;
int32_t x3306 = -1;
static int16_t x3371 = INT16_MIN;
int32_t x3389 = -3196;
int64_t x3395 = -2164197532196641924LL;
uint32_t x3420 = 0U;
volatile int64_t x3457 = -293LL;
int32_t x3474 = INT32_MIN;
uint32_t t96 = 289423U;
int16_t x3500 = 13;
static int64_t x3507 = 156621822331622LL;
int64_t t98 = 6685208273762LL;
volatile int8_t x3512 = 3;


void f0(void) {
	volatile int8_t x105 = INT8_MIN;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = 60;
	volatile int64_t t0 = -1448378354LL;

	t0 = ((x105/(x106+x107))<<x108);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x112 = 35U;
	static volatile uint64_t t1 = 6401569LLU;

	t1 = ((x109/(x110+x111))<<x112);

	if (t1 != 28930899705856LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x150 = -7568903LL;
	uint8_t x152 = 3U;
	uint64_t t2 = 7LLU;

	t2 = ((x149/(x150+x151))<<x152);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x237 = 49LLU;
	int32_t x238 = 21297;
	int32_t x239 = -1;
	uint64_t t3 = 23217LLU;

	t3 = ((x237/(x238+x239))<<x240);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x274 = INT16_MAX;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = 3;

	t4 = ((x273/(x274+x275))<<x276);

	if (t4 != 1048640U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x313 = 49911319723LLU;
	uint16_t x314 = 6U;
	static uint16_t x315 = 3347U;
	uint8_t x316 = 9U;
	static volatile uint64_t t5 = 48004943LLU;

	t5 = ((x313/(x314+x315))<<x316);

	if (t5 != 7621412352LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x333 = -1;
	int8_t x334 = 12;
	static volatile int8_t x335 = -1;
	uint16_t x336 = 0U;
	volatile int32_t t6 = -1559;

	t6 = ((x333/(x334+x335))<<x336);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x341 = 7382U;
	static int16_t x342 = -2;
	volatile int16_t x343 = 6;
	volatile int8_t x344 = 12;

	t7 = ((x341/(x342+x343))<<x344);

	if (t7 != 7557120) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x469 = 1050558LLU;
	volatile uint64_t x470 = UINT64_MAX;
	uint16_t x471 = UINT16_MAX;
	static uint32_t x472 = 0U;
	volatile uint64_t t8 = 6726950298425LLU;

	t8 = ((x469/(x470+x471))<<x472);

	if (t8 != 16LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x509 = UINT64_MAX;
	uint64_t x510 = UINT64_MAX;
	static volatile uint64_t t9 = 6437392981581551291LLU;

	t9 = ((x509/(x510+x511))<<x512);

	if (t9 != 672LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x521 = -1;
	int64_t x522 = 4LL;
	uint32_t x523 = 1613473818U;
	uint8_t x524 = 0U;
	volatile int64_t t10 = -2305LL;

	t10 = ((x521/(x522+x523))<<x524);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x561 = -1;
	int32_t x562 = INT32_MIN;
	int16_t x564 = 0;

	t11 = ((x561/(x562+x563))<<x564);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x605 = -1;
	uint8_t x606 = UINT8_MAX;
	static volatile int64_t x607 = INT64_MIN;
	uint32_t x608 = 17U;
	int64_t t12 = -6482LL;

	t12 = ((x605/(x606+x607))<<x608);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x625 = 2U;
	volatile uint16_t x626 = 60U;
	int64_t x627 = INT64_MIN;
	static uint32_t x628 = 53U;
	volatile int64_t t13 = -52920LL;

	t13 = ((x625/(x626+x627))<<x628);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x709 = 0U;
	uint16_t x710 = 184U;
	uint16_t x711 = 8U;
	static int64_t x712 = 14LL;
	int32_t t14 = 3523;

	t14 = ((x709/(x710+x711))<<x712);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x749 = 188817;
	int32_t x750 = INT32_MIN;
	volatile int64_t t15 = -1LL;

	t15 = ((x749/(x750+x751))<<x752);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x777 = 1;
	int32_t x778 = -74;
	uint64_t x779 = 8813706957356LLU;
	uint8_t x780 = 1U;
	uint64_t t16 = 125LLU;

	t16 = ((x777/(x778+x779))<<x780);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x805 = 4489668192951839LL;
	uint64_t x806 = UINT64_MAX;
	uint16_t x807 = 24U;
	static int16_t x808 = 1;
	static volatile uint64_t t17 = 60982LLU;

	t17 = ((x805/(x806+x807))<<x808);

	if (t17 != 390405929821898LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x822 = -450630590596LL;
	static int32_t x823 = -1141347;
	int16_t x824 = 3;
	int64_t t18 = 5960LL;

	t18 = ((x821/(x822+x823))<<x824);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x919 = 1531164;
	volatile uint16_t x920 = 0U;

	t19 = ((x917/(x918+x919))<<x920);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x961 = INT8_MAX;
	int32_t x962 = -1;
	int16_t x963 = INT16_MAX;
	int32_t t20 = -423403253;

	t20 = ((x961/(x962+x963))<<x964);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x981 = INT64_MIN;
	int16_t x982 = INT16_MIN;
	int8_t x983 = -1;
	uint16_t x984 = 1U;
	static volatile int64_t t21 = 0LL;

	t21 = ((x981/(x982+x983))<<x984);

	if (t21 != 562932774076400LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x1002 = -1;
	int16_t x1004 = 46;
	uint64_t t22 = 2LLU;

	t22 = ((x1001/(x1002+x1003))<<x1004);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1005 = 16U;
	int16_t x1006 = INT16_MAX;
	int8_t x1007 = -1;
	int16_t x1008 = 0;
	volatile int32_t t23 = 15420;

	t23 = ((x1005/(x1006+x1007))<<x1008);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1009 = -1;
	uint32_t x1012 = 6U;
	volatile int32_t t24 = 20;

	t24 = ((x1009/(x1010+x1011))<<x1012);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1021 = 127U;
	uint64_t x1022 = 7858785428471066444LLU;
	static int8_t x1023 = -1;
	uint16_t x1024 = 35U;
	static volatile uint64_t t25 = 31550113148089LLU;

	t25 = ((x1021/(x1022+x1023))<<x1024);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1054 = 373;
	volatile int32_t x1055 = INT32_MIN;
	int16_t x1056 = 1;
	static volatile uint64_t t26 = 217170960LLU;

	t26 = ((x1053/(x1054+x1055))<<x1056);

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1057 = INT32_MIN;
	volatile int16_t x1058 = INT16_MIN;
	uint64_t x1059 = 20LLU;
	static uint8_t x1060 = 2U;
	volatile uint64_t t27 = 105290220649LLU;

	t27 = ((x1057/(x1058+x1059))<<x1060);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1078 = -104217550;
	uint8_t x1079 = 7U;
	static int8_t x1080 = 3;
	volatile int32_t t28 = 0;

	t28 = ((x1077/(x1078+x1079))<<x1080);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1121 = 46U;
	int32_t x1122 = 9;
	static uint64_t x1123 = UINT64_MAX;
	int8_t x1124 = 9;
	volatile uint64_t t29 = 107117043998323022LLU;

	t29 = ((x1121/(x1122+x1123))<<x1124);

	if (t29 != 2560LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x1142 = INT32_MIN;
	uint64_t x1143 = UINT64_MAX;
	uint32_t x1144 = 0U;
	volatile uint64_t t30 = 287705967LLU;

	t30 = ((x1141/(x1142+x1143))<<x1144);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1145 = 0;
	uint64_t x1146 = 1615LLU;
	static int8_t x1147 = -1;
	int32_t x1148 = 0;

	t31 = ((x1145/(x1146+x1147))<<x1148);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1194 = INT8_MIN;
	int8_t x1195 = INT8_MIN;
	uint8_t x1196 = 0U;
	uint32_t t32 = 5711U;

	t32 = ((x1193/(x1194+x1195))<<x1196);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1249 = 205595212LLU;
	uint16_t x1250 = UINT16_MAX;
	uint16_t x1252 = 18U;
	uint64_t t33 = 10LLU;

	t33 = ((x1249/(x1250+x1251))<<x1252);

	if (t33 != 822083584LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1290 = 3011LLU;
	uint32_t x1291 = 14012289U;
	uint16_t x1292 = 0U;

	t34 = ((x1289/(x1290+x1291))<<x1292);

	if (t34 != 1316186173232LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1321 = INT8_MIN;
	int8_t x1322 = -1;
	uint64_t x1323 = UINT64_MAX;
	uint8_t x1324 = 0U;
	uint64_t t35 = 935040LLU;

	t35 = ((x1321/(x1322+x1323))<<x1324);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1325 = 20;
	int8_t x1326 = INT8_MIN;
	int64_t x1327 = 3396840380665804LL;
	uint16_t x1328 = 1U;
	volatile int64_t t36 = -1613538LL;

	t36 = ((x1325/(x1326+x1327))<<x1328);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1377 = 134647858LL;
	int16_t x1378 = 3;
	static volatile int32_t x1379 = INT32_MIN;
	uint8_t x1380 = 20U;
	int64_t t37 = 110172668383LL;

	t37 = ((x1377/(x1378+x1379))<<x1380);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1381 = 1;
	uint8_t x1382 = UINT8_MAX;
	int64_t x1383 = INT64_MIN;
	static volatile int64_t t38 = -142LL;

	t38 = ((x1381/(x1382+x1383))<<x1384);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1401 = INT64_MIN;
	static uint16_t x1403 = UINT16_MAX;
	int8_t x1404 = 5;
	static uint64_t t39 = 51281467863LLU;

	t39 = ((x1401/(x1402+x1403))<<x1404);

	if (t39 != 16981915853280LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1457 = UINT32_MAX;
	uint64_t x1458 = UINT64_MAX;
	int64_t x1459 = INT64_MAX;
	int32_t x1460 = 1;
	volatile uint64_t t40 = 267092LLU;

	t40 = ((x1457/(x1458+x1459))<<x1460);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1465 = 3066550105925LLU;
	static int64_t x1467 = 2706968828806884LL;
	static uint64_t t41 = 178364076LLU;

	t41 = ((x1465/(x1466+x1467))<<x1468);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1481 = 24U;
	static uint64_t x1482 = 378LLU;
	volatile int8_t x1484 = 24;
	volatile uint64_t t42 = 39LLU;

	t42 = ((x1481/(x1482+x1483))<<x1484);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1521 = INT32_MAX;
	volatile uint64_t x1522 = 8801297LLU;
	int64_t x1523 = INT64_MIN;
	static uint8_t x1524 = 1U;

	t43 = ((x1521/(x1522+x1523))<<x1524);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1546 = INT16_MIN;
	int8_t x1548 = 4;
	volatile int32_t t44 = -6523;

	t44 = ((x1545/(x1546+x1547))<<x1548);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1577 = 99862872447473LLU;
	uint8_t x1579 = 2U;
	uint32_t x1580 = 1U;

	t45 = ((x1577/(x1578+x1579))<<x1580);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1609 = 186671007154089977LLU;
	uint32_t x1610 = 110471U;
	volatile int32_t x1611 = -1;
	volatile uint8_t x1612 = 29U;
	uint64_t t46 = 134054284305LLU;

	t46 = ((x1609/(x1610+x1611))<<x1612);

	if (t46 != 3308181238677766144LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1713 = UINT32_MAX;
	static int8_t x1714 = -4;
	uint16_t x1715 = UINT16_MAX;
	volatile uint32_t t47 = 1125222U;

	t47 = ((x1713/(x1714+x1715))<<x1716);

	if (t47 != 2097312U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1734 = 1634U;
	uint16_t x1735 = 480U;
	int8_t x1736 = 0;
	volatile uint64_t t48 = 59805LLU;

	t48 = ((x1733/(x1734+x1735))<<x1736);

	if (t48 != 8725990574129400LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1742 = 29179U;
	int32_t x1743 = 601283;
	int8_t x1744 = 0;
	uint64_t t49 = 2166553668LLU;

	t49 = ((x1741/(x1742+x1743))<<x1744);

	if (t49 != 351536685523LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1825 = UINT16_MAX;
	int64_t x1826 = -159634LL;
	uint16_t x1827 = UINT16_MAX;
	int64_t t50 = -2569773112015481LL;

	t50 = ((x1825/(x1826+x1827))<<x1828);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1885 = INT8_MIN;
	int64_t x1887 = -306993876309474LL;
	static uint16_t x1888 = 11U;
	int64_t t51 = -134505311500LL;

	t51 = ((x1885/(x1886+x1887))<<x1888);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x1913 = UINT16_MAX;
	uint64_t x1914 = 0LLU;
	static uint16_t x1916 = 6U;
	uint64_t t52 = 88575LLU;

	t52 = ((x1913/(x1914+x1915))<<x1916);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1989 = INT8_MAX;
	static volatile int32_t x1990 = INT32_MAX;
	int8_t x1991 = -1;
	uint8_t x1992 = 23U;
	volatile int32_t t53 = 5746;

	t53 = ((x1989/(x1990+x1991))<<x1992);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1993 = 217820U;
	uint32_t x1994 = UINT32_MAX;
	uint16_t x1995 = UINT16_MAX;
	static uint16_t x1996 = 27U;
	uint32_t t54 = 2U;

	t54 = ((x1993/(x1994+x1995))<<x1996);

	if (t54 != 402653184U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1997 = INT16_MAX;
	int16_t x1998 = 19;
	static uint8_t x2000 = 5U;
	uint64_t t55 = 55343695995382LLU;

	t55 = ((x1997/(x1998+x1999))<<x2000);

	if (t55 != 58240LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x2017 = INT8_MIN;
	int32_t x2018 = -246;
	static int8_t x2020 = 5;
	volatile int32_t t56 = 648736;

	t56 = ((x2017/(x2018+x2019))<<x2020);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2046 = UINT32_MAX;
	volatile int16_t x2047 = 11917;
	uint8_t x2048 = 19U;
	static volatile uint32_t t57 = 1599U;

	t57 = ((x2045/(x2046+x2047))<<x2048);

	if (t57 != 4288675840U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2077 = 3U;
	uint64_t x2079 = 1851999194866948824LLU;
	int8_t x2080 = 1;
	static uint64_t t58 = 562633296084LLU;

	t58 = ((x2077/(x2078+x2079))<<x2080);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2113 = 1U;
	static int64_t x2114 = INT64_MIN;
	volatile int64_t t59 = 13629LL;

	t59 = ((x2113/(x2114+x2115))<<x2116);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2133 = -1;
	int64_t x2135 = INT64_MIN;
	static volatile uint8_t x2136 = 2U;
	static uint64_t t60 = 766450510LLU;

	t60 = ((x2133/(x2134+x2135))<<x2136);

	if (t60 != 4LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2194 = -1337529;
	uint8_t x2196 = 3U;
	static volatile int64_t t61 = 141502LL;

	t61 = ((x2193/(x2194+x2195))<<x2196);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2201 = 1LL;
	int32_t x2202 = -1;
	volatile int8_t x2203 = -1;
	static uint8_t x2204 = 62U;
	static int64_t t62 = 2977LL;

	t62 = ((x2201/(x2202+x2203))<<x2204);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x2229 = UINT64_MAX;
	int16_t x2230 = -7;
	int8_t x2231 = 5;
	static uint8_t x2232 = 23U;
	volatile uint64_t t63 = 317080458812022LLU;

	t63 = ((x2229/(x2230+x2231))<<x2232);

	if (t63 != 8388608LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2245 = -2566;
	static int16_t x2246 = INT16_MIN;
	volatile uint8_t x2247 = 11U;
	int8_t x2248 = 1;
	int32_t t64 = -140;

	t64 = ((x2245/(x2246+x2247))<<x2248);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2501 = 60696U;
	static uint64_t x2502 = UINT64_MAX;
	volatile uint16_t x2503 = 21307U;
	static uint16_t x2504 = 2U;
	uint64_t t65 = 469LLU;

	t65 = ((x2501/(x2502+x2503))<<x2504);

	if (t65 != 8LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2521 = -1;
	uint16_t x2522 = 3U;

	t66 = ((x2521/(x2522+x2523))<<x2524);

	if (t66 != 357913940U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2561 = 10049U;
	uint8_t x2562 = 106U;
	uint16_t x2563 = 23736U;

	t67 = ((x2561/(x2562+x2563))<<x2564);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2601 = 14LL;

	t68 = ((x2601/(x2602+x2603))<<x2604);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2617 = UINT32_MAX;
	static int8_t x2618 = INT8_MIN;
	uint16_t x2620 = 6U;
	static uint32_t t69 = 59U;

	t69 = ((x2617/(x2618+x2619))<<x2620);

	if (t69 != 8421760U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2633 = -13;
	int16_t x2634 = 28;
	static int16_t x2635 = -1;
	int16_t x2636 = 3;
	static int32_t t70 = -10335;

	t70 = ((x2633/(x2634+x2635))<<x2636);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2637 = UINT32_MAX;
	uint16_t x2638 = 234U;
	uint32_t t71 = 749U;

	t71 = ((x2637/(x2638+x2639))<<x2640);

	if (t71 != 4U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2649 = UINT16_MAX;
	uint8_t x2651 = UINT8_MAX;
	uint8_t x2652 = 28U;

	t72 = ((x2649/(x2650+x2651))<<x2652);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x2701 = -1;
	uint16_t x2703 = UINT16_MAX;
	uint8_t x2704 = 3U;
	int32_t t73 = -7;

	t73 = ((x2701/(x2702+x2703))<<x2704);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2757 = 27;
	uint64_t x2758 = 31665610081154LLU;
	int8_t x2759 = -1;
	static volatile uint8_t x2760 = 18U;
	volatile uint64_t t74 = 32LLU;

	t74 = ((x2757/(x2758+x2759))<<x2760);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2965 = -1;
	volatile int64_t x2966 = INT64_MIN;
	uint32_t x2967 = UINT32_MAX;
	uint16_t x2968 = 5U;
	volatile int64_t t75 = -6318673898665LL;

	t75 = ((x2965/(x2966+x2967))<<x2968);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3109 = -1;
	uint8_t x3110 = 1U;
	volatile int8_t x3111 = -15;
	int8_t x3112 = 2;

	t76 = ((x3109/(x3110+x3111))<<x3112);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3113 = INT64_MAX;
	uint64_t x3114 = UINT64_MAX;
	volatile uint32_t x3115 = UINT32_MAX;
	int8_t x3116 = 58;
	static uint64_t t77 = 1431082186936LLU;

	t77 = ((x3113/(x3114+x3115))<<x3116);

	if (t77 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3145 = -1;
	uint64_t x3146 = UINT64_MAX;
	volatile int8_t x3147 = INT8_MIN;
	static int32_t x3148 = 3;
	static uint64_t t78 = 56826951547287472LLU;

	t78 = ((x3145/(x3146+x3147))<<x3148);

	if (t78 != 8LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3150 = INT64_MIN;
	static uint32_t x3151 = UINT32_MAX;
	uint8_t x3152 = 2U;

	t79 = ((x3149/(x3150+x3151))<<x3152);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x3153 = -1;
	int64_t x3155 = -1LL;
	int8_t x3156 = 45;
	volatile int64_t t80 = 13LL;

	t80 = ((x3153/(x3154+x3155))<<x3156);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3193 = UINT16_MAX;
	static uint16_t x3196 = 1U;
	volatile int64_t t81 = -35813517572362557LL;

	t81 = ((x3193/(x3194+x3195))<<x3196);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x3209 = -1;
	uint64_t x3210 = 210596351842618LLU;
	int8_t x3211 = 14;
	static uint32_t x3212 = 18U;

	t82 = ((x3209/(x3210+x3211))<<x3212);

	if (t82 != 22961717248LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3225 = INT8_MIN;
	int8_t x3226 = 0;
	uint32_t x3227 = UINT32_MAX;
	static volatile int8_t x3228 = 1;
	volatile uint32_t t83 = 223U;

	t83 = ((x3225/(x3226+x3227))<<x3228);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3238 = 12186915157124522LL;
	volatile int16_t x3239 = -114;
	int8_t x3240 = 26;
	volatile int64_t t84 = 111753975632LL;

	t84 = ((x3237/(x3238+x3239))<<x3240);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x3253 = INT8_MAX;
	uint16_t x3254 = 1U;
	uint8_t x3255 = UINT8_MAX;
	uint16_t x3256 = 2U;

	t85 = ((x3253/(x3254+x3255))<<x3256);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3273 = INT16_MIN;
	uint32_t x3274 = 1401U;
	volatile uint32_t t86 = 2696U;

	t86 = ((x3273/(x3274+x3275))<<x3276);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x3297 = 7587U;
	int64_t x3298 = 605811904322LL;
	uint64_t x3299 = 41995786563465LLU;
	volatile uint64_t t87 = 861286LLU;

	t87 = ((x3297/(x3298+x3299))<<x3300);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x3307 = INT16_MIN;
	uint32_t x3308 = 3U;
	static volatile int32_t t88 = -1;

	t88 = ((x3305/(x3306+x3307))<<x3308);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3349 = INT64_MIN;
	uint8_t x3350 = 5U;
	volatile int64_t x3351 = -4511620048729658361LL;
	static int8_t x3352 = 2;
	static volatile int64_t t89 = 279823461897154408LL;

	t89 = ((x3349/(x3350+x3351))<<x3352);

	if (t89 != 8LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3369 = 72U;
	int32_t x3370 = 249670736;
	uint64_t x3372 = 7LLU;
	volatile uint32_t t90 = 290U;

	t90 = ((x3369/(x3370+x3371))<<x3372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x3390 = UINT64_MAX;
	int8_t x3391 = INT8_MIN;
	int8_t x3392 = 29;
	volatile uint64_t t91 = 607850729938LLU;

	t91 = ((x3389/(x3390+x3391))<<x3392);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3393 = -1;
	volatile uint16_t x3394 = UINT16_MAX;
	volatile uint16_t x3396 = 36U;
	volatile int64_t t92 = 12734061460901636LL;

	t92 = ((x3393/(x3394+x3395))<<x3396);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3413 = INT8_MIN;
	static volatile uint8_t x3414 = UINT8_MAX;
	volatile int16_t x3415 = INT16_MAX;
	uint16_t x3416 = 4U;
	int32_t t93 = 889124;

	t93 = ((x3413/(x3414+x3415))<<x3416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3417 = 938081114U;
	uint8_t x3418 = 7U;
	int8_t x3419 = -1;
	volatile uint32_t t94 = 8485U;

	t94 = ((x3417/(x3418+x3419))<<x3420);

	if (t94 != 156346852U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x3458 = 1;
	static int32_t x3459 = INT32_MIN;
	static int8_t x3460 = 4;
	int64_t t95 = -3716201998902379LL;

	t95 = ((x3457/(x3458+x3459))<<x3460);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3473 = -1;
	uint32_t x3475 = UINT32_MAX;
	volatile int8_t x3476 = 0;

	t96 = ((x3473/(x3474+x3475))<<x3476);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3497 = INT16_MIN;
	static volatile int32_t x3498 = INT32_MAX;
	uint64_t x3499 = 436698120967LLU;
	uint64_t t97 = 241877076074LLU;

	t97 = ((x3497/(x3498+x3499))<<x3500);

	if (t97 != 344348270592LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x3505 = INT16_MIN;
	int8_t x3506 = 1;
	uint16_t x3508 = 35U;

	t98 = ((x3505/(x3506+x3507))<<x3508);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3509 = -80;
	int8_t x3510 = INT8_MIN;
	static uint32_t x3511 = UINT32_MAX;
	uint32_t t99 = 3U;

	t99 = ((x3509/(x3510+x3511))<<x3512);

	if (t99 != 8U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 16750LLU;
static volatile int8_t x45 = -1;
int16_t x46 = INT16_MIN;
int64_t x238 = -4066475392152LL;
volatile uint32_t x274 = 6U;
int32_t x641 = INT32_MAX;
uint8_t x644 = 1U;
int8_t x656 = 0;
int64_t x706 = INT64_MIN;
int16_t x714 = 12940;
static volatile uint64_t x921 = UINT64_MAX;
static uint64_t x931 = 4666719859704LLU;
static int64_t x973 = -12189769209232LL;
int16_t x1044 = 0;
volatile int64_t t23 = 10428047500608LL;
volatile int8_t x1136 = 7;
int8_t x1162 = INT8_MIN;
uint8_t x1164 = 22U;
static volatile uint16_t x1329 = UINT16_MAX;
uint8_t x1331 = 1U;
uint8_t x1332 = 8U;
uint16_t x1370 = 76U;
static uint32_t x1442 = 11169243U;
uint16_t x1523 = 20941U;
volatile uint64_t t32 = 64571284845245303LLU;
static uint16_t x1559 = 1208U;
volatile uint32_t x1560 = 0U;
uint32_t x1581 = UINT32_MAX;
uint64_t x1582 = 6703843909623816200LLU;
volatile uint32_t x1602 = UINT32_MAX;
int16_t x1619 = -2864;
uint16_t x1774 = 305U;
static volatile uint64_t t40 = 28852035LLU;
uint32_t x1842 = 16687667U;
uint32_t t43 = 4U;
int16_t x2009 = INT16_MIN;
uint16_t x2014 = 3250U;
static uint32_t x2017 = UINT32_MAX;
uint64_t x2019 = 107007238LLU;
static uint8_t x2100 = 3U;
int8_t x2104 = 10;
static int16_t x2108 = 3;
uint8_t x2126 = 1U;
volatile uint32_t t50 = 220U;
uint32_t x2134 = 12358184U;
uint32_t x2135 = 322756516U;
volatile int64_t t51 = 652791697LL;
uint64_t x2325 = 263542146722LLU;
int8_t x2326 = -1;
volatile int64_t x2361 = INT64_MIN;
static uint16_t x2721 = 10641U;
int32_t x2770 = -7062636;
uint32_t x2783 = 0U;
volatile uint16_t x2837 = 165U;
uint8_t x2848 = 6U;
static int32_t x3050 = 990;
int8_t x3122 = 6;
uint32_t x3131 = 333498019U;
int16_t x3478 = INT16_MAX;
static volatile uint64_t x3491 = 1663071747092558274LLU;
int16_t x3492 = 35;
volatile uint64_t t75 = 20010232LLU;
int16_t x3542 = -1;
uint64_t x3551 = 83076996798112576LLU;
volatile uint16_t x3568 = 0U;
volatile int32_t t81 = -48553220;
static int8_t x3720 = 0;
volatile uint64_t x3841 = UINT64_MAX;
volatile uint8_t x3997 = UINT8_MAX;
int16_t x4077 = INT16_MAX;
int64_t x4078 = -1LL;
uint8_t x4079 = UINT8_MAX;
int32_t x4106 = 0;
int64_t x4107 = INT64_MIN;
volatile int64_t t94 = 0LL;
volatile int64_t t95 = 30259LL;
int8_t x4155 = -1;
int32_t x4258 = 1;
int16_t x4314 = -1;


void f0(void) {
	volatile int8_t x13 = INT8_MIN;
	static uint64_t x14 = 42484784244534LLU;
	uint16_t x15 = 1U;
	int16_t x16 = 0;

	t0 = ((x13&(x14*x15))<<x16);

	if (t0 != 42484784244480LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x17 = 0;
	int8_t x18 = 0;
	uint64_t x19 = 30LLU;
	uint8_t x20 = 54U;
	static volatile uint64_t t1 = 4531LLU;

	t1 = ((x17&(x18*x19))<<x20);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 10U;
	volatile uint64_t t2 = 337862634705LLU;

	t2 = ((x45&(x46*x47))<<x48);

	if (t2 != 33554432LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x89 = 43U;
	int8_t x90 = INT8_MAX;
	int64_t x91 = -1LL;
	static uint8_t x92 = 62U;
	int64_t t3 = 674765LL;

	t3 = ((x89&(x90*x91))<<x92);

	if (t3 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x149 = 3U;
	uint32_t x150 = 11U;
	int64_t x151 = -253603520770844LL;
	uint8_t x152 = 7U;
	int64_t t4 = 161630092639LL;

	t4 = ((x149&(x150*x151))<<x152);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x161 = UINT8_MAX;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 0LLU;
	uint8_t x164 = 43U;
	volatile uint64_t t5 = 244899380354LLU;

	t5 = ((x161&(x162*x163))<<x164);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x225 = INT16_MAX;
	int16_t x226 = -1;
	uint8_t x227 = 9U;
	volatile uint8_t x228 = 3U;
	int32_t t6 = -51;

	t6 = ((x225&(x226*x227))<<x228);

	if (t6 != 262072) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x237 = UINT8_MAX;
	uint8_t x239 = 100U;
	int8_t x240 = 0;
	int64_t t7 = -223213497LL;

	t7 = ((x237&(x238*x239))<<x240);

	if (t7 != 160LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x273 = 14990U;
	int8_t x275 = 42;
	int8_t x276 = 1;
	volatile uint32_t t8 = 494093U;

	t8 = ((x273&(x274*x275))<<x276);

	if (t8 != 280U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x373 = INT32_MIN;
	volatile int16_t x374 = 0;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = 3U;
	int32_t t9 = 129920054;

	t9 = ((x373&(x374*x375))<<x376);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x429 = 0;
	int16_t x430 = INT16_MAX;
	int32_t x431 = 0;
	uint16_t x432 = 1U;
	static volatile int32_t t10 = -7;

	t10 = ((x429&(x430*x431))<<x432);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x529 = -1;
	int32_t x530 = 12708;
	uint16_t x531 = UINT16_MAX;
	volatile uint8_t x532 = 1U;
	int32_t t11 = -1;

	t11 = ((x529&(x530*x531))<<x532);

	if (t11 != 1665637560) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x557 = INT64_MIN;
	uint8_t x558 = UINT8_MAX;
	uint16_t x559 = UINT16_MAX;
	static int8_t x560 = 0;
	int64_t t12 = -32LL;

	t12 = ((x557&(x558*x559))<<x560);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x642 = 4595U;
	static uint8_t x643 = 0U;
	int32_t t13 = 2504003;

	t13 = ((x641&(x642*x643))<<x644);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x653 = 17207105U;
	uint32_t x654 = UINT32_MAX;
	volatile uint16_t x655 = UINT16_MAX;
	volatile uint32_t t14 = 64278262U;

	t14 = ((x653&(x654*x655))<<x656);

	if (t14 != 17170433U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x705 = -2849LL;
	static uint8_t x707 = 0U;
	int8_t x708 = 1;
	int64_t t15 = -24860884721536LL;

	t15 = ((x705&(x706*x707))<<x708);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x713 = UINT64_MAX;
	int8_t x715 = 0;
	uint8_t x716 = 10U;
	static volatile uint64_t t16 = 39866280LLU;

	t16 = ((x713&(x714*x715))<<x716);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x769 = -1;
	int64_t x770 = INT64_MAX;
	volatile uint64_t x771 = 25LLU;
	uint8_t x772 = 51U;
	static uint64_t t17 = 197658230580LLU;

	t17 = ((x769&(x770*x771))<<x772);

	if (t17 != 18390449078367420416LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x777 = -3;
	int8_t x778 = -1;
	int32_t x779 = -1;
	int8_t x780 = 7;
	int32_t t18 = 37339847;

	t18 = ((x777&(x778*x779))<<x780);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x922 = -1LL;
	uint8_t x923 = 0U;
	uint8_t x924 = 31U;
	uint64_t t19 = 355879884187849LLU;

	t19 = ((x921&(x922*x923))<<x924);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x929 = 1U;
	int16_t x930 = -363;
	int16_t x932 = 1;
	volatile uint64_t t20 = 40786932101862LLU;

	t20 = ((x929&(x930*x931))<<x932);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x945 = -1;
	int16_t x946 = 14;
	int64_t x947 = 352032042640857LL;
	uint64_t x948 = 2LLU;
	volatile int64_t t21 = -196054285282218LL;

	t21 = ((x945&(x946*x947))<<x948);

	if (t21 != 19713794387887992LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x974 = INT16_MIN;
	int16_t x975 = -165;
	static int16_t x976 = 7;
	static int64_t t22 = 5906421365LL;

	t22 = ((x973&(x974*x975))<<x976);

	if (t22 != 20971520LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1041 = -1LL;
	uint8_t x1042 = UINT8_MAX;
	int16_t x1043 = 1340;

	t23 = ((x1041&(x1042*x1043))<<x1044);

	if (t23 != 341700LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1133 = UINT32_MAX;
	volatile uint64_t x1134 = UINT64_MAX;
	volatile int8_t x1135 = -1;
	static volatile uint64_t t24 = 1009732417LLU;

	t24 = ((x1133&(x1134*x1135))<<x1136);

	if (t24 != 128LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1161 = INT8_MAX;
	int32_t x1163 = -1;
	volatile int32_t t25 = -1;

	t25 = ((x1161&(x1162*x1163))<<x1164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1209 = -3377;
	uint64_t x1210 = 760LLU;
	volatile int32_t x1211 = -399891;
	uint8_t x1212 = 20U;
	volatile uint64_t t26 = 6561937908LLU;

	t26 = ((x1209&(x1210*x1211))<<x1212);

	if (t26 != 18446425392110632960LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1330 = -1;
	int32_t t27 = -1460163;

	t27 = ((x1329&(x1330*x1331))<<x1332);

	if (t27 != 16776960) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1341 = INT8_MAX;
	uint64_t x1342 = 1237053667013077LLU;
	int32_t x1343 = -1;
	int32_t x1344 = 13;
	volatile uint64_t t28 = 9501821227861LLU;

	t28 = ((x1341&(x1342*x1343))<<x1344);

	if (t28 != 352256LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1369 = 8346608771LLU;
	uint16_t x1371 = UINT16_MAX;
	uint32_t x1372 = 24U;
	static uint64_t t29 = 0LLU;

	t29 = ((x1369&(x1370*x1371))<<x1372);

	if (t29 != 82620138389504LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1441 = 0;
	uint64_t x1443 = UINT64_MAX;
	uint8_t x1444 = 0U;
	uint64_t t30 = 70LLU;

	t30 = ((x1441&(x1442*x1443))<<x1444);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1517 = 7783130U;
	int16_t x1518 = -1;
	uint32_t x1519 = 1605U;
	int16_t x1520 = 10;
	uint32_t t31 = 13474818U;

	t31 = ((x1517&(x1518*x1519))<<x1520);

	if (t31 != 3674368000U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1521 = UINT64_MAX;
	static uint32_t x1522 = 180U;
	uint16_t x1524 = 31U;

	t32 = ((x1521&(x1522*x1523))<<x1524);

	if (t32 != 8094681913098240LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1557 = -1;
	uint8_t x1558 = 6U;
	static volatile int32_t t33 = -909;

	t33 = ((x1557&(x1558*x1559))<<x1560);

	if (t33 != 7248) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1583 = -150060338LL;
	int8_t x1584 = 24;
	uint64_t t34 = 1685281795679452LLU;

	t34 = ((x1581&(x1582*x1583))<<x1584);

	if (t34 != 71536247016783872LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1601 = INT8_MAX;
	int32_t x1603 = INT32_MIN;
	uint8_t x1604 = 3U;
	volatile uint32_t t35 = 57U;

	t35 = ((x1601&(x1602*x1603))<<x1604);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1609 = INT64_MIN;
	int64_t x1610 = -241000545153735402LL;
	int32_t x1611 = -1;
	static volatile uint8_t x1612 = 7U;
	volatile int64_t t36 = -46408LL;

	t36 = ((x1609&(x1610*x1611))<<x1612);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1617 = 4357321U;
	uint8_t x1618 = UINT8_MAX;
	volatile uint8_t x1620 = 3U;
	volatile uint32_t t37 = 179436U;

	t37 = ((x1617&(x1618*x1619))<<x1620);

	if (t37 != 33734656U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1677 = 80826348;
	int32_t x1678 = -521542002;
	int16_t x1679 = -1;
	int8_t x1680 = 1;
	int32_t t38 = 3935;

	t38 = ((x1677&(x1678*x1679))<<x1680);

	if (t38 != 136319680) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1749 = 6860516LL;
	uint32_t x1750 = 24U;
	uint8_t x1751 = UINT8_MAX;
	uint8_t x1752 = 0U;
	volatile int64_t t39 = -12613164LL;

	t39 = ((x1749&(x1750*x1751))<<x1752);

	if (t39 != 1760LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1773 = INT32_MIN;
	uint64_t x1775 = UINT64_MAX;
	volatile int8_t x1776 = 53;

	t40 = ((x1773&(x1774*x1775))<<x1776);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1781 = UINT16_MAX;
	volatile uint8_t x1782 = UINT8_MAX;
	int8_t x1783 = -1;
	uint16_t x1784 = 6U;
	int32_t t41 = -1;

	t41 = ((x1781&(x1782*x1783))<<x1784);

	if (t41 != 4177984) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1821 = UINT8_MAX;
	int32_t x1822 = 71612;
	volatile uint8_t x1823 = UINT8_MAX;
	int16_t x1824 = 0;
	volatile int32_t t42 = -127149764;

	t42 = ((x1821&(x1822*x1823))<<x1824);

	if (t42 != 68) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1841 = 1310U;
	int16_t x1843 = INT16_MIN;
	volatile uint32_t x1844 = 0U;

	t43 = ((x1841&(x1842*x1843))<<x1844);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2010 = UINT32_MAX;
	static int8_t x2011 = -2;
	static volatile uint16_t x2012 = 17U;
	volatile uint32_t t44 = 155U;

	t44 = ((x2009&(x2010*x2011))<<x2012);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x2013 = -1;
	volatile int8_t x2015 = 37;
	uint8_t x2016 = 3U;
	int32_t t45 = -732;

	t45 = ((x2013&(x2014*x2015))<<x2016);

	if (t45 != 962000) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2018 = 10981929LLU;
	static uint8_t x2020 = 0U;
	volatile uint64_t t46 = 6277731745LLU;

	t46 = ((x2017&(x2018*x2019))<<x2020);

	if (t46 != 4183310838LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2097 = -52;
	volatile int32_t x2098 = -29;
	static uint32_t x2099 = UINT32_MAX;
	volatile uint32_t t47 = 82424985U;

	t47 = ((x2097&(x2098*x2099))<<x2100);

	if (t47 != 96U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x2101 = 25U;
	uint8_t x2102 = 33U;
	uint16_t x2103 = 102U;
	static int32_t t48 = 517661;

	t48 = ((x2101&(x2102*x2103))<<x2104);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2105 = UINT32_MAX;
	uint64_t x2106 = UINT64_MAX;
	uint64_t x2107 = UINT64_MAX;
	volatile uint64_t t49 = 101373216722607837LLU;

	t49 = ((x2105&(x2106*x2107))<<x2108);

	if (t49 != 8LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2125 = 1U;
	int8_t x2127 = 0;
	uint8_t x2128 = 29U;

	t50 = ((x2125&(x2126*x2127))<<x2128);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2133 = INT64_MIN;
	uint8_t x2136 = 63U;

	t51 = ((x2133&(x2134*x2135))<<x2136);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2327 = 7485707;
	static int16_t x2328 = 3;
	volatile uint64_t t52 = 4628007445LLU;

	t52 = ((x2325&(x2326*x2327))<<x2328);

	if (t52 != 2108294182144LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2362 = 272911021442LLU;
	int32_t x2363 = -1;
	static int8_t x2364 = 0;
	uint64_t t53 = 2383417266988226797LLU;

	t53 = ((x2361&(x2362*x2363))<<x2364);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2429 = 201U;
	int16_t x2430 = 1895;
	volatile int16_t x2431 = -2524;
	uint16_t x2432 = 1U;
	int32_t t54 = 31125112;

	t54 = ((x2429&(x2430*x2431))<<x2432);

	if (t54 != 144) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2433 = -1733;
	static uint64_t x2434 = 1138876816658LLU;
	static int16_t x2435 = -47;
	volatile uint32_t x2436 = 4U;
	volatile uint64_t t55 = 86548125984232175LLU;

	t55 = ((x2433&(x2434*x2435))<<x2436);

	if (t55 != 18445887638343422752LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2533 = UINT8_MAX;
	static volatile int32_t x2534 = -1;
	volatile int8_t x2535 = 28;
	volatile uint8_t x2536 = 23U;
	static volatile int32_t t56 = -107019892;

	t56 = ((x2533&(x2534*x2535))<<x2536);

	if (t56 != 1912602624) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2569 = INT8_MAX;
	static volatile uint64_t x2570 = UINT64_MAX;
	int64_t x2571 = 11753142216198322LL;
	static int16_t x2572 = 0;
	uint64_t t57 = 20104280816088420LLU;

	t57 = ((x2569&(x2570*x2571))<<x2572);

	if (t57 != 78LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2722 = INT8_MAX;
	uint64_t x2723 = 165930406820LLU;
	int8_t x2724 = 1;
	volatile uint64_t t58 = 6875770283178LLU;

	t58 = ((x2721&(x2722*x2723))<<x2724);

	if (t58 != 20512LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2769 = -1;
	uint64_t x2771 = 16344471960854267LLU;
	int8_t x2772 = 34;
	volatile uint64_t t59 = 35603776515347195LLU;

	t59 = ((x2769&(x2770*x2771))<<x2772);

	if (t59 != 12227000790463545344LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2781 = -1;
	int16_t x2782 = 3;
	volatile uint8_t x2784 = 5U;
	uint32_t t60 = 47U;

	t60 = ((x2781&(x2782*x2783))<<x2784);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2838 = -1647;
	uint32_t x2839 = 30595U;
	int32_t x2840 = 1;
	volatile uint32_t t61 = 53408U;

	t61 = ((x2837&(x2838*x2839))<<x2840);

	if (t61 != 66U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2845 = -12809;
	int32_t x2846 = -1;
	int8_t x2847 = 0;
	static volatile int32_t t62 = -1007431963;

	t62 = ((x2845&(x2846*x2847))<<x2848);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x2865 = UINT16_MAX;
	int64_t x2866 = -1LL;
	static uint16_t x2867 = 265U;
	int64_t x2868 = 2LL;
	volatile int64_t t63 = 3LL;

	t63 = ((x2865&(x2866*x2867))<<x2868);

	if (t63 != 261084LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2965 = UINT64_MAX;
	static int8_t x2966 = INT8_MIN;
	volatile uint8_t x2967 = 2U;
	static volatile int8_t x2968 = 7;
	volatile uint64_t t64 = 3LLU;

	t64 = ((x2965&(x2966*x2967))<<x2968);

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2981 = -1;
	static uint8_t x2982 = UINT8_MAX;
	uint16_t x2983 = 21995U;
	static uint8_t x2984 = 3U;
	static int32_t t65 = 32470293;

	t65 = ((x2981&(x2982*x2983))<<x2984);

	if (t65 != 44869800) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3049 = 1976414017LL;
	int8_t x3051 = 24;
	static uint32_t x3052 = 6U;
	int64_t t66 = 988915LL;

	t66 = ((x3049&(x3050*x3051))<<x3052);

	if (t66 != 200704LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3117 = -1;
	static volatile uint32_t x3118 = 1053511U;
	uint16_t x3119 = 31U;
	int8_t x3120 = 0;
	volatile uint32_t t67 = 2093283U;

	t67 = ((x3117&(x3118*x3119))<<x3120);

	if (t67 != 32658841U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3121 = INT32_MAX;
	volatile int64_t x3123 = 3903242265612LL;
	volatile int8_t x3124 = 2;
	int64_t t68 = -482433026LL;

	t68 = ((x3121&(x3122*x3123))<<x3124);

	if (t68 != 4577648928LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3129 = INT64_MAX;
	volatile int16_t x3130 = -1;
	volatile uint16_t x3132 = 3U;
	volatile int64_t t69 = -221368134791078737LL;

	t69 = ((x3129&(x3130*x3131))<<x3132);

	if (t69 != 31691754216LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3189 = INT32_MAX;
	static int64_t x3190 = 256629317LL;
	int8_t x3191 = INT8_MAX;
	static int32_t x3192 = 12;
	volatile int64_t t70 = -313030283979LL;

	t70 = ((x3189&(x3190*x3191))<<x3192);

	if (t70 != 1555122335744LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3209 = INT64_MAX;
	int16_t x3210 = INT16_MIN;
	int16_t x3211 = INT16_MIN;
	volatile uint8_t x3212 = 21U;
	int64_t t71 = 356613451162LL;

	t71 = ((x3209&(x3210*x3211))<<x3212);

	if (t71 != 2251799813685248LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3273 = -490;
	int8_t x3274 = INT8_MAX;
	volatile int8_t x3275 = 0;
	uint8_t x3276 = 14U;
	static int32_t t72 = 0;

	t72 = ((x3273&(x3274*x3275))<<x3276);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3477 = UINT32_MAX;
	static volatile int8_t x3479 = -1;
	uint8_t x3480 = 9U;
	volatile uint32_t t73 = 49391758U;

	t73 = ((x3477&(x3478*x3479))<<x3480);

	if (t73 != 4278190592U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3481 = INT32_MAX;
	int32_t x3482 = INT32_MIN;
	uint64_t x3483 = UINT64_MAX;
	int8_t x3484 = 1;
	uint64_t t74 = 63954LLU;

	t74 = ((x3481&(x3482*x3483))<<x3484);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3489 = INT8_MIN;
	uint32_t x3490 = UINT32_MAX;

	t75 = ((x3489&(x3490*x3491))<<x3492);

	if (t75 != 8393144000860651520LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3537 = INT32_MIN;
	int16_t x3538 = -1;
	int8_t x3539 = INT8_MIN;
	int32_t x3540 = 1;
	static volatile int32_t t76 = 23629991;

	t76 = ((x3537&(x3538*x3539))<<x3540);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3541 = 481U;
	int8_t x3543 = -1;
	uint32_t x3544 = 19U;
	uint32_t t77 = 27U;

	t77 = ((x3541&(x3542*x3543))<<x3544);

	if (t77 != 524288U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3549 = UINT16_MAX;
	int32_t x3550 = 84;
	volatile uint8_t x3552 = 3U;
	uint64_t t78 = 2650622133026790861LLU;

	t78 = ((x3549&(x3550*x3551))<<x3552);

	if (t78 != 296960LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3565 = 16016LLU;
	static int64_t x3566 = INT64_MIN;
	uint64_t x3567 = 0LLU;
	volatile uint64_t t79 = 21LLU;

	t79 = ((x3565&(x3566*x3567))<<x3568);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x3577 = 1534178906LL;
	volatile int8_t x3578 = INT8_MIN;
	uint8_t x3579 = 0U;
	uint8_t x3580 = 1U;
	static volatile int64_t t80 = 81LL;

	t80 = ((x3577&(x3578*x3579))<<x3580);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3605 = 98U;
	uint8_t x3606 = UINT8_MAX;
	static volatile int16_t x3607 = INT16_MIN;
	volatile int8_t x3608 = 9;

	t81 = ((x3605&(x3606*x3607))<<x3608);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3633 = INT64_MAX;
	static int16_t x3634 = -1;
	uint8_t x3635 = 0U;
	uint8_t x3636 = 15U;
	volatile int64_t t82 = 43643961LL;

	t82 = ((x3633&(x3634*x3635))<<x3636);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3657 = 0U;
	int8_t x3658 = -1;
	int8_t x3659 = INT8_MAX;
	int8_t x3660 = 0;
	int32_t t83 = -64;

	t83 = ((x3657&(x3658*x3659))<<x3660);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3693 = UINT64_MAX;
	int16_t x3694 = INT16_MIN;
	uint64_t x3695 = 678119274410208993LLU;
	int16_t x3696 = 42;
	volatile uint64_t t84 = 455072253036760LLU;

	t84 = ((x3693&(x3694*x3695))<<x3696);

	if (t84 != 4467570830351532032LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3717 = UINT64_MAX;
	int8_t x3718 = INT8_MIN;
	int32_t x3719 = -1;
	uint64_t t85 = 153246142746409LLU;

	t85 = ((x3717&(x3718*x3719))<<x3720);

	if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3813 = INT32_MIN;
	uint32_t x3814 = UINT32_MAX;
	static volatile int8_t x3815 = INT8_MAX;
	int16_t x3816 = 4;
	uint32_t t86 = 17709175U;

	t86 = ((x3813&(x3814*x3815))<<x3816);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3842 = 0LLU;
	int32_t x3843 = -141379;
	uint8_t x3844 = 2U;
	volatile uint64_t t87 = 710734258990803LLU;

	t87 = ((x3841&(x3842*x3843))<<x3844);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3969 = INT32_MIN;
	static uint64_t x3970 = UINT64_MAX;
	static volatile int8_t x3971 = 2;
	static int8_t x3972 = 0;
	volatile uint64_t t88 = 4LLU;

	t88 = ((x3969&(x3970*x3971))<<x3972);

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3998 = INT64_MIN;
	volatile uint64_t x3999 = 60450048LLU;
	int16_t x4000 = 0;
	uint64_t t89 = 1948794518944296509LLU;

	t89 = ((x3997&(x3998*x3999))<<x4000);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4021 = INT8_MAX;
	volatile int8_t x4022 = INT8_MIN;
	static int16_t x4023 = INT16_MAX;
	uint8_t x4024 = 2U;
	volatile int32_t t90 = -21;

	t90 = ((x4021&(x4022*x4023))<<x4024);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4029 = 65U;
	static int32_t x4030 = INT32_MIN;
	static uint8_t x4031 = 1U;
	uint8_t x4032 = 27U;
	volatile int32_t t91 = 60735;

	t91 = ((x4029&(x4030*x4031))<<x4032);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x4080 = 31U;
	static volatile int64_t t92 = -7LL;

	t92 = ((x4077&(x4078*x4079))<<x4080);

	if (t92 != 69821135847424LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4089 = UINT16_MAX;
	int8_t x4090 = -1;
	uint16_t x4091 = UINT16_MAX;
	uint64_t x4092 = 20LLU;
	int32_t t93 = 1224;

	t93 = ((x4089&(x4090*x4091))<<x4092);

	if (t93 != 1048576) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4105 = 278;
	uint8_t x4108 = 4U;

	t94 = ((x4105&(x4106*x4107))<<x4108);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4117 = INT16_MAX;
	int32_t x4118 = INT32_MIN;
	static int64_t x4119 = -40LL;
	uint8_t x4120 = 37U;

	t95 = ((x4117&(x4118*x4119))<<x4120);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4153 = 5409;
	volatile int16_t x4154 = 0;
	static int16_t x4156 = 13;
	static int32_t t96 = -113;

	t96 = ((x4153&(x4154*x4155))<<x4156);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4257 = INT16_MIN;
	static uint64_t x4259 = 170059061751LLU;
	uint16_t x4260 = 0U;
	static uint64_t t97 = 70016124396LLU;

	t97 = ((x4257&(x4258*x4259))<<x4260);

	if (t97 != 170059038720LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4277 = -36354;
	uint64_t x4278 = 31429LLU;
	static volatile uint64_t x4279 = 582861583076996LLU;
	uint8_t x4280 = 29U;
	uint64_t t98 = 7828959462090634LLU;

	t98 = ((x4277&(x4278*x4279))<<x4280);

	if (t98 != 288980459977703424LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4313 = 1U;
	volatile uint64_t x4315 = 9236LLU;
	int64_t x4316 = 0LL;
	uint64_t t99 = 6LLU;

	t99 = ((x4313&(x4314*x4315))<<x4316);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


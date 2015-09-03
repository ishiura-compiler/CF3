#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x24 = 2U;
int8_t x132 = 0;
int64_t t7 = -15679LL;
uint64_t x310 = 4355545000009LLU;
uint8_t x312 = 51U;
volatile uint64_t t9 = 272025290037LLU;
int16_t x432 = 2;
int32_t x451 = INT32_MIN;
static volatile int8_t x570 = -28;
static int8_t x609 = INT8_MIN;
int16_t x612 = 1;
int8_t x613 = 4;
uint8_t x645 = 28U;
int64_t x647 = INT64_MIN;
static uint64_t t19 = 29LLU;
static uint64_t x777 = 465556550676016683LLU;
uint32_t x986 = UINT32_MAX;
uint32_t t21 = 15638818U;
int16_t x1012 = 1;
int8_t x1064 = 0;
uint8_t x1156 = 0U;
static volatile uint32_t x1178 = 0U;
uint16_t x1279 = 16108U;
uint64_t t27 = 385544LLU;
static int8_t x1588 = 34;
static int32_t x1722 = INT32_MIN;
static uint8_t x1800 = 2U;
volatile uint32_t t34 = 315135958U;
static volatile uint8_t x2073 = 52U;
volatile int32_t t38 = 51908;
int32_t x2091 = -1;
int16_t x2171 = -1;
int16_t x2172 = 4;
uint64_t x2427 = 27789242579234924LLU;
int8_t x2476 = 0;
uint16_t x2508 = 2U;
volatile int16_t x2537 = 9;
volatile int16_t x2538 = -6;
volatile uint64_t t46 = 45687694232LLU;
int8_t x2572 = 1;
uint32_t t47 = 3441220U;
uint8_t x2762 = 21U;
int64_t x2763 = -1LL;
volatile uint8_t x2789 = 1U;
volatile int16_t x2805 = 138;
int64_t t51 = 3854553LL;
int64_t t53 = 3662266423752285LL;
int64_t x2998 = 2564888674LL;
volatile uint16_t x3000 = 2U;
int64_t t54 = 1690097718423LL;
uint64_t x3142 = UINT64_MAX;
volatile int64_t x3149 = -1LL;
int8_t x3152 = 1;
static int64_t x3190 = INT64_MIN;
int8_t x3224 = 15;
uint8_t x3260 = 0U;
int64_t x3343 = -1LL;
uint8_t x3357 = 0U;
volatile uint64_t t66 = 20424LLU;
static volatile int32_t t67 = 7;
uint32_t x3490 = 1U;
uint32_t x3501 = 10052U;
static uint32_t x3503 = UINT32_MAX;
volatile uint64_t t71 = 676603059176LLU;
uint8_t x3554 = 1U;
uint8_t x3577 = 0U;
static int32_t x3718 = -1;
volatile uint32_t x3760 = 34U;
volatile int8_t x3790 = INT8_MAX;
uint8_t x3792 = 1U;
static volatile int32_t x3799 = 1011;
uint32_t x3891 = 454763409U;
static int16_t x3931 = INT16_MIN;
int16_t x3993 = -1;
uint16_t x4084 = 0U;
uint64_t x4097 = 1749776012333513902LLU;
uint64_t x4098 = 653298383834370LLU;
static int32_t x4251 = 20182877;
uint8_t x4296 = 8U;
static uint64_t t93 = 537413192LLU;
uint16_t x4445 = 766U;
uint64_t x4446 = 3831727099072LLU;
volatile int32_t x4447 = 28;
static volatile uint64_t t94 = 31LLU;
uint16_t x4595 = UINT16_MAX;
uint16_t x4641 = 22U;
volatile int64_t x4642 = 22742239257556730LL;


void f0(void) {
	uint8_t x13 = 64U;
	volatile uint64_t x14 = 15015LLU;
	static int64_t x15 = -2072410910LL;
	volatile uint8_t x16 = 0U;
	uint64_t t0 = 513899529949436LLU;

	t0 = (((x13+x14)%x15)<<x16);

	if (t0 != 15079LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x21 = INT32_MAX;
	volatile uint64_t x22 = 191988727LLU;
	int32_t x23 = -1;
	uint64_t t1 = 18394444351LLU;

	t1 = (((x21+x22)%x23)<<x24);

	if (t1 != 9357889496LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x73 = 10224982141538437LLU;
	int16_t x74 = -1;
	static uint64_t x75 = 1749577563626686737LLU;
	uint64_t x76 = 10LLU;
	static uint64_t t2 = 975117731380336350LLU;

	t2 = (((x73+x74)%x75)<<x76);

	if (t2 != 10470381712935358464LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x129 = 22798U;
	volatile int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;
	volatile uint32_t t3 = 1578169013U;

	t3 = (((x129+x130)%x131)<<x132);

	if (t3 != 22670U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x137 = 2661122268651650733LLU;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	int16_t x140 = 1;
	volatile uint64_t t4 = 462741933LLU;

	t4 = (((x137+x138)%x139)<<x140);

	if (t4 != 5322244537303301464LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x181 = -1;
	uint32_t x182 = 218352379U;
	int64_t x183 = -52939190989548LL;
	volatile int16_t x184 = 0;
	static volatile int64_t t5 = -1037809170588LL;

	t5 = (((x181+x182)%x183)<<x184);

	if (t5 != 218352378LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x281 = 45;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = UINT32_MAX;
	static int8_t x284 = 7;
	volatile uint32_t t6 = 617U;

	t6 = (((x281+x282)%x283)<<x284);

	if (t6 != 4290778752U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x297 = -1;
	volatile int64_t x298 = INT64_MAX;
	int64_t x299 = -1LL;
	volatile int64_t x300 = 12LL;

	t7 = (((x297+x298)%x299)<<x300);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x305 = INT8_MAX;
	volatile int32_t x306 = 80;
	int16_t x307 = 41;
	int8_t x308 = 1;
	volatile int32_t t8 = -90099168;

	t8 = (((x305+x306)%x307)<<x308);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x309 = 0U;
	int16_t x311 = INT16_MIN;

	t9 = (((x309+x310)%x311)<<x312);

	if (t9 != 4776067404826411008LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x429 = -6;
	uint16_t x430 = 68U;
	static int16_t x431 = -1;
	static volatile int32_t t10 = 237775695;

	t10 = (((x429+x430)%x431)<<x432);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x449 = 8117421042001348381LLU;
	int32_t x450 = -1;
	static uint8_t x452 = 16U;
	static volatile uint64_t t11 = 836878LLU;

	t11 = (((x449+x450)%x451)<<x452);

	if (t11 != 16099810964317929472LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x457 = 157;
	int64_t x458 = -24LL;
	static int64_t x459 = -1LL;
	volatile uint8_t x460 = 0U;
	volatile int64_t t12 = -55471599368399935LL;

	t12 = (((x457+x458)%x459)<<x460);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x569 = INT8_MIN;
	uint64_t x571 = UINT64_MAX;
	static int8_t x572 = 2;
	volatile uint64_t t13 = 85599714LLU;

	t13 = (((x569+x570)%x571)<<x572);

	if (t13 != 18446744073709550992LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x610 = 308U;
	int64_t x611 = 4252733416LL;
	volatile int64_t t14 = 13LL;

	t14 = (((x609+x610)%x611)<<x612);

	if (t14 != 360LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x614 = -1;
	uint64_t x615 = UINT64_MAX;
	int32_t x616 = 0;
	uint64_t t15 = 10LLU;

	t15 = (((x613+x614)%x615)<<x616);

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x625 = -26;
	int16_t x626 = 12;
	int32_t x627 = -1;
	static int32_t x628 = 1;
	int32_t t16 = 228577;

	t16 = (((x625+x626)%x627)<<x628);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x646 = 1541U;
	volatile uint8_t x648 = 15U;
	static volatile int64_t t17 = -1841461LL;

	t17 = (((x645+x646)%x647)<<x648);

	if (t17 != 51412992LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x709 = 0U;
	int32_t x710 = INT32_MIN;
	uint64_t x711 = 36575712653023141LLU;
	static uint32_t x712 = 49U;
	uint64_t t18 = 3LLU;

	t18 = (((x709+x710)%x711)<<x712);

	if (t18 != 16595764626860277760LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x749 = 115U;
	int8_t x750 = -6;
	uint64_t x751 = UINT64_MAX;
	int32_t x752 = 1;

	t19 = (((x749+x750)%x751)<<x752);

	if (t19 != 218LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x778 = INT8_MIN;
	int8_t x779 = -2;
	uint8_t x780 = 1U;
	volatile uint64_t t20 = 13878314699134LLU;

	t20 = (((x777+x778)%x779)<<x780);

	if (t20 != 931113101352033110LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x985 = 24;
	uint8_t x987 = UINT8_MAX;
	static int8_t x988 = 1;

	t21 = (((x985+x986)%x987)<<x988);

	if (t21 != 46U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1009 = 724740109631675877LLU;
	static int64_t x1010 = -1LL;
	static int16_t x1011 = INT16_MIN;
	uint64_t t22 = 106482115LLU;

	t22 = (((x1009+x1010)%x1011)<<x1012);

	if (t22 != 1449480219263351752LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1061 = INT8_MIN;
	static uint16_t x1062 = UINT16_MAX;
	int32_t x1063 = INT32_MIN;
	volatile int32_t t23 = 1379;

	t23 = (((x1061+x1062)%x1063)<<x1064);

	if (t23 != 65407) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1153 = 12;
	uint32_t x1154 = 7736U;
	volatile uint32_t x1155 = 87140U;
	uint32_t t24 = 1904782U;

	t24 = (((x1153+x1154)%x1155)<<x1156);

	if (t24 != 7748U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1177 = 211U;
	volatile uint64_t x1179 = 876LLU;
	static uint8_t x1180 = 2U;
	static volatile uint64_t t25 = 563169631961322733LLU;

	t25 = (((x1177+x1178)%x1179)<<x1180);

	if (t25 != 844LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1225 = -1;
	volatile int16_t x1226 = INT16_MIN;
	int16_t x1227 = -3;
	int8_t x1228 = 2;
	int32_t t26 = 2002;

	t26 = (((x1225+x1226)%x1227)<<x1228);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1277 = INT8_MAX;
	static uint64_t x1278 = 731565047LLU;
	uint8_t x1280 = 1U;

	t27 = (((x1277+x1278)%x1279)<<x1280);

	if (t27 != 8492LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1369 = UINT32_MAX;
	int32_t x1370 = INT32_MIN;
	volatile int64_t x1371 = INT64_MAX;
	int8_t x1372 = 11;
	static int64_t t28 = -441168210309775640LL;

	t28 = (((x1369+x1370)%x1371)<<x1372);

	if (t28 != 4398046509056LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1489 = -3;
	uint64_t x1490 = 4816932LLU;
	uint32_t x1491 = 917722U;
	uint32_t x1492 = 11U;
	uint64_t t29 = 4927744768924068LLU;

	t29 = (((x1489+x1490)%x1491)<<x1492);

	if (t29 != 467597312LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1561 = 0U;
	int64_t x1562 = INT64_MIN;
	uint16_t x1563 = 1U;
	static int16_t x1564 = 1;
	volatile int64_t t30 = -37LL;

	t30 = (((x1561+x1562)%x1563)<<x1564);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1585 = INT64_MAX;
	volatile int64_t x1586 = -2314120351210184LL;
	static int8_t x1587 = INT8_MIN;
	volatile int64_t t31 = 17460859216629LL;

	t31 = (((x1585+x1586)%x1587)<<x1588);

	if (t31 != 944892805120LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1621 = 1728914934LLU;
	int8_t x1622 = -1;
	int64_t x1623 = INT64_MIN;
	uint8_t x1624 = 38U;
	volatile uint64_t t32 = 1860100126942232386LLU;

	t32 = (((x1621+x1622)%x1623)<<x1624);

	if (t32 != 14071916224527204352LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1721 = 4595851U;
	volatile int8_t x1723 = INT8_MAX;
	uint16_t x1724 = 4U;
	uint32_t t33 = 89259U;

	t33 = (((x1721+x1722)%x1723)<<x1724);

	if (t33 != 1760U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1797 = UINT32_MAX;
	uint16_t x1798 = UINT16_MAX;
	static int32_t x1799 = -1;

	t34 = (((x1797+x1798)%x1799)<<x1800);

	if (t34 != 262136U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1837 = INT64_MAX;
	int64_t x1838 = -3411516189LL;
	static uint16_t x1839 = 1797U;
	uint32_t x1840 = 52U;
	volatile int64_t t35 = 724955043LL;

	t35 = (((x1837+x1838)%x1839)<<x1840);

	if (t35 != 8016407336719482880LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1985 = -1;
	uint8_t x1986 = 21U;
	int64_t x1987 = -1LL;
	volatile uint16_t x1988 = 14U;
	volatile int64_t t36 = 11693703632LL;

	t36 = (((x1985+x1986)%x1987)<<x1988);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2021 = INT32_MIN;
	volatile int16_t x2022 = INT16_MAX;
	volatile uint32_t x2023 = UINT32_MAX;
	uint16_t x2024 = 2U;
	volatile uint32_t t37 = 58U;

	t37 = (((x2021+x2022)%x2023)<<x2024);

	if (t37 != 131068U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2074 = INT8_MAX;
	uint16_t x2075 = 447U;
	static uint8_t x2076 = 1U;

	t38 = (((x2073+x2074)%x2075)<<x2076);

	if (t38 != 358) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2089 = 46LLU;
	uint64_t x2090 = 27568130263542LLU;
	uint8_t x2092 = 35U;
	uint64_t t39 = 57084263742LLU;

	t39 = (((x2089+x2090)%x2091)<<x2092);

	if (t39 != 11881710914791014400LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2149 = INT64_MIN;
	static uint16_t x2150 = UINT16_MAX;
	int8_t x2151 = -1;
	static uint16_t x2152 = 0U;
	int64_t t40 = 10977LL;

	t40 = (((x2149+x2150)%x2151)<<x2152);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2157 = -1;
	int64_t x2158 = INT64_MAX;
	uint64_t x2159 = UINT64_MAX;
	int16_t x2160 = 1;
	uint64_t t41 = 1439LLU;

	t41 = (((x2157+x2158)%x2159)<<x2160);

	if (t41 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2169 = UINT32_MAX;
	int64_t x2170 = INT64_MIN;
	volatile int64_t t42 = 575LL;

	t42 = (((x2169+x2170)%x2171)<<x2172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2425 = UINT32_MAX;
	int16_t x2426 = -5238;
	int8_t x2428 = 12;
	volatile uint64_t t43 = 65310LLU;

	t43 = (((x2425+x2426)%x2427)<<x2428);

	if (t43 != 17592164585472LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2473 = 247U;
	int16_t x2474 = INT16_MIN;
	uint32_t x2475 = 1316U;
	static uint32_t t44 = 646119064U;

	t44 = (((x2473+x2474)%x2475)<<x2476);

	if (t44 != 327U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2505 = 20434688361LLU;
	volatile uint16_t x2506 = 3917U;
	static int32_t x2507 = INT32_MAX;
	uint64_t t45 = 79077LLU;

	t45 = (((x2505+x2506)%x2507)<<x2508);

	if (t45 != 4429357820LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2539 = 76LLU;
	int8_t x2540 = 15;

	t46 = (((x2537+x2538)%x2539)<<x2540);

	if (t46 != 98304LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2569 = 853U;
	static int32_t x2570 = -20;
	uint8_t x2571 = 1U;

	t47 = (((x2569+x2570)%x2571)<<x2572);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2761 = 0;
	uint8_t x2764 = 1U;
	volatile int64_t t48 = 1914597316098885LL;

	t48 = (((x2761+x2762)%x2763)<<x2764);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2769 = INT16_MIN;
	static int16_t x2770 = 23;
	int32_t x2771 = -1;
	uint8_t x2772 = 10U;
	int32_t t49 = 104185869;

	t49 = (((x2769+x2770)%x2771)<<x2772);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2790 = 28;
	volatile int64_t x2791 = 33707606096634653LL;
	uint8_t x2792 = 1U;
	int64_t t50 = 70596970517LL;

	t50 = (((x2789+x2790)%x2791)<<x2792);

	if (t50 != 58LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2806 = -1LL;
	volatile int16_t x2807 = INT16_MIN;
	static int16_t x2808 = 15;

	t51 = (((x2805+x2806)%x2807)<<x2808);

	if (t51 != 4489216LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x2857 = UINT16_MAX;
	int32_t x2858 = -63418062;
	uint16_t x2859 = 1U;
	static int16_t x2860 = 4;
	volatile int32_t t52 = -175036016;

	t52 = (((x2857+x2858)%x2859)<<x2860);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2949 = -13;
	static int64_t x2950 = 9113422599551525LL;
	static int32_t x2951 = -1;
	static uint8_t x2952 = 4U;

	t53 = (((x2949+x2950)%x2951)<<x2952);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2997 = INT32_MIN;
	static volatile int32_t x2999 = INT32_MIN;

	t54 = (((x2997+x2998)%x2999)<<x3000);

	if (t54 != 1669620104LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3041 = 2;
	uint32_t x3042 = UINT32_MAX;
	int64_t x3043 = INT64_MIN;
	uint8_t x3044 = 13U;
	static volatile int64_t t55 = -389694060LL;

	t55 = (((x3041+x3042)%x3043)<<x3044);

	if (t55 != 8192LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x3065 = INT8_MIN;
	uint16_t x3066 = UINT16_MAX;
	uint8_t x3067 = UINT8_MAX;
	uint32_t x3068 = 6U;
	int32_t t56 = -437890962;

	t56 = (((x3065+x3066)%x3067)<<x3068);

	if (t56 != 8128) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3105 = INT64_MIN;
	int16_t x3106 = INT16_MAX;
	volatile int32_t x3107 = -1;
	volatile uint16_t x3108 = 29U;
	volatile int64_t t57 = -22567104723668LL;

	t57 = (((x3105+x3106)%x3107)<<x3108);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3125 = INT8_MIN;
	uint16_t x3126 = UINT16_MAX;
	int64_t x3127 = 1361081LL;
	uint8_t x3128 = 12U;
	volatile int64_t t58 = -2328LL;

	t58 = (((x3125+x3126)%x3127)<<x3128);

	if (t58 != 267907072LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3141 = 33861789395LL;
	volatile int8_t x3143 = -1;
	volatile uint8_t x3144 = 8U;
	uint64_t t59 = 181463LLU;

	t59 = (((x3141+x3142)%x3143)<<x3144);

	if (t59 != 8668618084864LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3150 = 90060969186664425LL;
	int64_t x3151 = INT64_MAX;
	volatile int64_t t60 = 6628325525412LL;

	t60 = (((x3149+x3150)%x3151)<<x3152);

	if (t60 != 180121938373328848LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3189 = 582109LLU;
	volatile int64_t x3191 = INT64_MAX;
	static int16_t x3192 = 7;
	volatile uint64_t t61 = 1112684185508214034LLU;

	t61 = (((x3189+x3190)%x3191)<<x3192);

	if (t61 != 74510080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3221 = 1785923LLU;
	uint32_t x3222 = 843174437U;
	volatile uint16_t x3223 = 27023U;
	static uint64_t t62 = 112341416231354376LLU;

	t62 = (((x3221+x3222)%x3223)<<x3224);

	if (t62 != 170262528LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3233 = 1U;
	static uint8_t x3234 = 0U;
	uint8_t x3235 = 75U;
	volatile int8_t x3236 = 0;
	volatile int32_t t63 = -199788;

	t63 = (((x3233+x3234)%x3235)<<x3236);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3257 = INT32_MAX;
	uint64_t x3258 = UINT64_MAX;
	uint8_t x3259 = UINT8_MAX;
	uint64_t t64 = 71780750513845LLU;

	t64 = (((x3257+x3258)%x3259)<<x3260);

	if (t64 != 126LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3341 = -659;
	static int8_t x3342 = INT8_MIN;
	uint16_t x3344 = 41U;
	int64_t t65 = 49237073LL;

	t65 = (((x3341+x3342)%x3343)<<x3344);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3358 = INT16_MIN;
	uint64_t x3359 = 391717235664LLU;
	uint8_t x3360 = 6U;

	t66 = (((x3357+x3358)%x3359)<<x3360);

	if (t66 != 20525441481728LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3445 = 30365U;
	volatile int16_t x3446 = -8046;
	volatile int32_t x3447 = -1;
	uint8_t x3448 = 6U;

	t67 = (((x3445+x3446)%x3447)<<x3448);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3465 = 2941U;
	static int16_t x3466 = -4;
	int64_t x3467 = INT64_MIN;
	int64_t x3468 = 0LL;
	volatile int64_t t68 = -134199092011398977LL;

	t68 = (((x3465+x3466)%x3467)<<x3468);

	if (t68 != 2937LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3489 = INT32_MAX;
	int8_t x3491 = 32;
	volatile uint8_t x3492 = 7U;
	uint32_t t69 = 48062U;

	t69 = (((x3489+x3490)%x3491)<<x3492);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3502 = 11978273LLU;
	static uint32_t x3504 = 1U;
	volatile uint64_t t70 = 40149LLU;

	t70 = (((x3501+x3502)%x3503)<<x3504);

	if (t70 != 23976650LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3533 = 1759714630U;
	uint64_t x3534 = 13LLU;
	int32_t x3535 = INT32_MAX;
	int32_t x3536 = 14;

	t71 = (((x3533+x3534)%x3535)<<x3536);

	if (t71 != 28831164710912LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x3553 = 195U;
	volatile int16_t x3555 = INT16_MIN;
	volatile int64_t x3556 = 23LL;
	static uint32_t t72 = 1684906U;

	t72 = (((x3553+x3554)%x3555)<<x3556);

	if (t72 != 1644167168U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3578 = -1;
	uint64_t x3579 = 69898508808663652LLU;
	static uint8_t x3580 = 40U;
	static uint64_t t73 = 3403541903032LLU;

	t73 = (((x3577+x3578)%x3579)<<x3580);

	if (t73 != 3943819565972062208LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3645 = -1641278;
	uint16_t x3646 = 4294U;
	static int8_t x3647 = 1;
	volatile uint16_t x3648 = 1U;
	int32_t t74 = -6828;

	t74 = (((x3645+x3646)%x3647)<<x3648);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3689 = 1552565884683348963LLU;
	int64_t x3690 = INT64_MIN;
	static uint64_t x3691 = 392LLU;
	uint16_t x3692 = 4U;
	volatile uint64_t t75 = 31274985LLU;

	t75 = (((x3689+x3690)%x3691)<<x3692);

	if (t75 != 5296LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3717 = 692LLU;
	int8_t x3719 = -1;
	uint8_t x3720 = 5U;
	volatile uint64_t t76 = 2329LLU;

	t76 = (((x3717+x3718)%x3719)<<x3720);

	if (t76 != 22112LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3757 = 206LLU;
	int16_t x3758 = -1;
	uint64_t x3759 = 650131724LLU;
	volatile uint64_t t77 = 12243560258LLU;

	t77 = (((x3757+x3758)%x3759)<<x3760);

	if (t77 != 3521873182720LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3789 = -4540468802544407995LL;
	int64_t x3791 = -1LL;
	volatile int64_t t78 = 53865872816LL;

	t78 = (((x3789+x3790)%x3791)<<x3792);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3797 = 6203U;
	static volatile uint64_t x3798 = 19972458795LLU;
	static uint64_t x3800 = 1LLU;
	static volatile uint64_t t79 = 281908129LLU;

	t79 = (((x3797+x3798)%x3799)<<x3800);

	if (t79 != 520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3829 = -1;
	uint32_t x3830 = UINT32_MAX;
	int8_t x3831 = INT8_MIN;
	uint16_t x3832 = 1U;
	volatile uint32_t t80 = 6U;

	t80 = (((x3829+x3830)%x3831)<<x3832);

	if (t80 != 252U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3873 = 2447310LL;
	int8_t x3874 = 57;
	volatile int64_t x3875 = -1LL;
	int8_t x3876 = 1;
	volatile int64_t t81 = 1LL;

	t81 = (((x3873+x3874)%x3875)<<x3876);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3889 = 2U;
	uint16_t x3890 = UINT16_MAX;
	uint16_t x3892 = 24U;
	static uint32_t t82 = 7U;

	t82 = (((x3889+x3890)%x3891)<<x3892);

	if (t82 != 16777216U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3913 = INT16_MAX;
	uint32_t x3914 = 1097213U;
	static int32_t x3915 = INT32_MIN;
	static volatile uint32_t x3916 = 31U;
	volatile uint32_t t83 = 57110282U;

	t83 = (((x3913+x3914)%x3915)<<x3916);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x3929 = UINT64_MAX;
	int32_t x3930 = -1;
	uint8_t x3932 = 11U;
	volatile uint64_t t84 = 89377LLU;

	t84 = (((x3929+x3930)%x3931)<<x3932);

	if (t84 != 67104768LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3994 = INT16_MIN;
	int16_t x3995 = -1;
	int8_t x3996 = 1;
	volatile int32_t t85 = 61;

	t85 = (((x3993+x3994)%x3995)<<x3996);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4041 = 1025487710U;
	volatile uint32_t x4042 = 961760748U;
	int8_t x4043 = INT8_MIN;
	volatile int64_t x4044 = 2LL;
	static uint32_t t86 = 66975475U;

	t86 = (((x4041+x4042)%x4043)<<x4044);

	if (t86 != 3654026536U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4081 = 3LLU;
	volatile int8_t x4082 = INT8_MIN;
	uint32_t x4083 = UINT32_MAX;
	volatile uint64_t t87 = 1222118436163403LLU;

	t87 = (((x4081+x4082)%x4083)<<x4084);

	if (t87 != 4294967171LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4099 = 88679884;
	int16_t x4100 = 3;
	static volatile uint64_t t88 = 82LLU;

	t88 = (((x4097+x4098)%x4099)<<x4100);

	if (t88 != 187261792LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4101 = 11105357941LL;
	int8_t x4102 = INT8_MAX;
	int16_t x4103 = INT16_MIN;
	volatile int64_t x4104 = 3LL;
	volatile int64_t t89 = -9854718010793LL;

	t89 = (((x4101+x4102)%x4103)<<x4104);

	if (t89 != 165792LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4173 = 258U;
	volatile int8_t x4174 = 2;
	int64_t x4175 = -1LL;
	volatile uint8_t x4176 = 6U;
	volatile int64_t t90 = -5732088741380253LL;

	t90 = (((x4173+x4174)%x4175)<<x4176);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4225 = 1U;
	int8_t x4226 = 0;
	int32_t x4227 = INT32_MIN;
	int8_t x4228 = 17;
	volatile int32_t t91 = 2057046;

	t91 = (((x4225+x4226)%x4227)<<x4228);

	if (t91 != 131072) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4249 = 49;
	uint16_t x4250 = UINT16_MAX;
	int8_t x4252 = 5;
	int32_t t92 = 20882133;

	t92 = (((x4249+x4250)%x4251)<<x4252);

	if (t92 != 2098688) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4293 = UINT64_MAX;
	static uint16_t x4294 = 5283U;
	int8_t x4295 = -2;

	t93 = (((x4293+x4294)%x4295)<<x4296);

	if (t93 != 1352192LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4448 = 2U;

	t94 = (((x4445+x4446)%x4447)<<x4448);

	if (t94 != 88LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4521 = -1LL;
	int16_t x4522 = 35;
	int32_t x4523 = -1;
	int64_t x4524 = 2LL;
	volatile int64_t t95 = -7LL;

	t95 = (((x4521+x4522)%x4523)<<x4524);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4585 = INT32_MAX;
	volatile int16_t x4586 = -1;
	static int32_t x4587 = INT32_MIN;
	static int8_t x4588 = 0;
	static volatile int32_t t96 = 66521;

	t96 = (((x4585+x4586)%x4587)<<x4588);

	if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4589 = INT16_MAX;
	int64_t x4590 = -1LL;
	volatile uint32_t x4591 = UINT32_MAX;
	static volatile uint16_t x4592 = 2U;
	int64_t t97 = -906143798140LL;

	t97 = (((x4589+x4590)%x4591)<<x4592);

	if (t97 != 131064LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4593 = -1LL;
	static int64_t x4594 = 280474856173236794LL;
	uint16_t x4596 = 7U;
	volatile int64_t t98 = 76459712737LL;

	t98 = (((x4593+x4594)%x4595)<<x4596);

	if (t98 != 1675904LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4643 = INT64_MIN;
	uint8_t x4644 = 1U;
	static volatile int64_t t99 = 4565260LL;

	t99 = (((x4641+x4642)%x4643)<<x4644);

	if (t99 != 45484478515113504LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x104 = 21U;
int32_t x117 = INT32_MAX;
uint64_t x141 = 108779447562LLU;
static uint64_t x143 = 474585596795819027LLU;
uint64_t t6 = 648811LLU;
uint64_t t8 = 3727154015329832LLU;
uint32_t x247 = 43421U;
int64_t x257 = -1LL;
static uint64_t t11 = 10952842026335LLU;
int64_t x265 = 459728LL;
uint32_t x277 = 891004553U;
int8_t x280 = 3;
int32_t x387 = -33251901;
uint16_t x433 = 297U;
uint8_t x480 = 18U;
volatile int32_t x510 = INT32_MAX;
int64_t t20 = 2208835115039337007LL;
int8_t x586 = -1;
int32_t t21 = 22;
uint64_t t22 = 88627302892LLU;
int64_t x763 = -1LL;
volatile int64_t x777 = INT64_MIN;
uint16_t x778 = 5U;
int8_t x878 = INT8_MIN;
int8_t x888 = 1;
volatile uint16_t x1029 = 7U;
uint32_t x1030 = 10350550U;
int8_t x1094 = INT8_MIN;
volatile uint8_t x1096 = 1U;
int64_t x1110 = -1LL;
int64_t x1222 = -3LL;
uint8_t x1224 = 1U;
int32_t x1246 = 21271864;
volatile int8_t x1257 = -1;
volatile uint32_t x1259 = 9174520U;
uint16_t x1277 = UINT16_MAX;
static volatile int64_t t39 = 2863752516200558899LL;
static uint64_t x1590 = UINT64_MAX;
int16_t x1666 = 1307;
volatile uint64_t t50 = 20411459559589LLU;
int64_t x1718 = -9LL;
int16_t x1738 = 838;
uint32_t x1739 = 52340080U;
static volatile uint64_t x1778 = 3LLU;
volatile uint64_t t55 = 133068182037LLU;
static int16_t x1799 = -1;
uint16_t x1800 = 1U;
uint64_t x1806 = 18360138998112029LLU;
volatile uint8_t x1920 = 1U;
static int64_t x2037 = INT64_MAX;
static int64_t x2038 = INT64_MAX;
static volatile int64_t x2102 = INT64_MIN;
int16_t x2136 = 1;
uint64_t t63 = 504LLU;
int32_t x2241 = -1;
static int16_t x2398 = -1;
int32_t x2399 = -3131901;
uint32_t x2477 = UINT32_MAX;
volatile uint8_t x2478 = UINT8_MAX;
volatile int64_t t69 = -12LL;
int16_t x2490 = -10171;
uint8_t x2584 = 2U;
uint64_t x2585 = 59856731263039155LLU;
int16_t x2680 = 7;
static volatile uint8_t x2720 = 22U;
volatile uint64_t t76 = 93664049971737LLU;
int32_t x2798 = -1;
static int16_t x2818 = INT16_MIN;
int64_t t78 = 35092461827884LL;
int32_t x2841 = -1;
static int32_t x2843 = INT32_MAX;
int32_t t80 = 4961625;
uint8_t x2964 = 1U;
uint32_t x3001 = 86962U;
volatile int64_t x3002 = INT64_MIN;
int16_t x3025 = 0;
volatile int8_t x3027 = INT8_MIN;
static volatile uint64_t t84 = 5738264772501791LLU;
int64_t x3127 = 258LL;
static uint8_t x3202 = 0U;
uint8_t x3203 = 77U;
uint8_t x3204 = 1U;
static int32_t t90 = -912;
int64_t t92 = 141269LL;
int32_t x3279 = -1;
int64_t t93 = -11281LL;
uint16_t x3299 = 2U;
uint8_t x3312 = 7U;
int32_t x3334 = INT32_MIN;
int16_t x3336 = 3;
int64_t x3401 = INT64_MIN;


void f0(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = 106705547U;
	int64_t x55 = INT64_MAX;
	static int8_t x56 = 0;
	volatile int64_t t0 = -20606685762647LL;

	t0 = (((x53&x54)/x55)<<x56);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x65 = 21006341;
	volatile int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	static volatile int8_t x68 = 0;
	int64_t t1 = -1LL;

	t1 = (((x65&x66)/x67)<<x68);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x77 = UINT16_MAX;
	volatile uint16_t x78 = 13653U;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = 14U;
	static int32_t t2 = 37143;

	t2 = (((x77&x78)/x79)<<x80);

	if (t2 != 1753088) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x93 = 122U;
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = INT8_MAX;
	uint32_t x96 = 0U;
	volatile int64_t t3 = -1LL;

	t3 = (((x93&x94)/x95)<<x96);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x101 = 1;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1028587416;
	volatile int32_t t4 = -3203320;

	t4 = (((x101&x102)/x103)<<x104);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x118 = UINT16_MAX;
	volatile uint8_t x119 = 19U;
	volatile uint8_t x120 = 6U;
	volatile int32_t t5 = -60781703;

	t5 = (((x117&x118)/x119)<<x120);

	if (t5 != 220736) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x142 = 1325782339588LLU;
	uint32_t x144 = 9U;

	t6 = (((x141&x142)/x143)<<x144);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x189 = 6U;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 1LLU;
	volatile int32_t t7 = -408922341;

	t7 = (((x189&x190)/x191)<<x192);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x193 = UINT64_MAX;
	int8_t x194 = 1;
	int32_t x195 = -1;
	static uint16_t x196 = 12U;

	t8 = (((x193&x194)/x195)<<x196);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x245 = 23U;
	static int16_t x246 = 17;
	static int32_t x248 = 3;
	uint32_t t9 = 74682U;

	t9 = (((x245&x246)/x247)<<x248);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x258 = -4;
	static int64_t x259 = 217576LL;
	static volatile uint8_t x260 = 6U;
	volatile int64_t t10 = -5128083008019LL;

	t10 = (((x257&x258)/x259)<<x260);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x261 = 487010754LLU;
	int32_t x262 = -1;
	int8_t x263 = -1;
	uint16_t x264 = 1U;

	t11 = (((x261&x262)/x263)<<x264);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x266 = INT16_MIN;
	static uint8_t x267 = 9U;
	uint8_t x268 = 34U;
	int64_t t12 = -3301LL;

	t12 = (((x265&x266)/x267)<<x268);

	if (t12 != 875692292046848LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x278 = 149197216LLU;
	int64_t x279 = INT64_MAX;
	uint64_t t13 = 971401LLU;

	t13 = (((x277&x278)/x279)<<x280);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x329 = -1;
	static int8_t x330 = -53;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 41U;
	volatile uint64_t t14 = 2014525222LLU;

	t14 = (((x329&x330)/x331)<<x332);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x365 = 3405U;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	volatile uint8_t x368 = 3U;
	int64_t t15 = -14109294801562637LL;

	t15 = (((x365&x366)/x367)<<x368);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x373 = INT64_MAX;
	volatile uint32_t x374 = 97119U;
	static int64_t x375 = INT64_MAX;
	int8_t x376 = 2;
	volatile int64_t t16 = -4187LL;

	t16 = (((x373&x374)/x375)<<x376);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = 308125814U;
	static int64_t x388 = 0LL;
	uint64_t t17 = 39372623038385363LLU;

	t17 = (((x385&x386)/x387)<<x388);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x434 = INT16_MIN;
	static int16_t x435 = 527;
	uint16_t x436 = 1U;
	int32_t t18 = 54936;

	t18 = (((x433&x434)/x435)<<x436);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x477 = -1;
	static volatile int64_t x478 = -1LL;
	uint8_t x479 = 13U;
	static int64_t t19 = 5LL;

	t19 = (((x477&x478)/x479)<<x480);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x509 = 1971LL;
	volatile int16_t x511 = INT16_MIN;
	static uint16_t x512 = 50U;

	t20 = (((x509&x510)/x511)<<x512);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x585 = UINT8_MAX;
	int32_t x587 = INT32_MAX;
	uint32_t x588 = 28U;

	t21 = (((x585&x586)/x587)<<x588);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x649 = 1148796U;
	uint64_t x650 = 5375174897626219017LLU;
	volatile uint64_t x651 = UINT64_MAX;
	static uint8_t x652 = 0U;

	t22 = (((x649&x650)/x651)<<x652);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x661 = 2U;
	int16_t x662 = -562;
	int8_t x663 = INT8_MIN;
	static uint64_t x664 = 1LLU;
	int32_t t23 = -371;

	t23 = (((x661&x662)/x663)<<x664);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x761 = 74481;
	int32_t x762 = INT32_MIN;
	uint32_t x764 = 1U;
	volatile int64_t t24 = 145505156240LL;

	t24 = (((x761&x762)/x763)<<x764);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x779 = UINT32_MAX;
	volatile uint8_t x780 = 15U;
	int64_t t25 = -1LL;

	t25 = (((x777&x778)/x779)<<x780);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x877 = -1;
	static int64_t x879 = INT64_MAX;
	uint64_t x880 = 29LLU;
	int64_t t26 = 25783679575238LL;

	t26 = (((x877&x878)/x879)<<x880);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x885 = INT8_MIN;
	uint16_t x886 = UINT16_MAX;
	int32_t x887 = INT32_MIN;
	static int32_t t27 = -814297711;

	t27 = (((x885&x886)/x887)<<x888);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x909 = -1;
	static int8_t x910 = INT8_MAX;
	static uint32_t x911 = UINT32_MAX;
	uint8_t x912 = 7U;
	static uint32_t t28 = 65U;

	t28 = (((x909&x910)/x911)<<x912);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1031 = 3370658;
	uint16_t x1032 = 27U;
	uint32_t t29 = 927314U;

	t29 = (((x1029&x1030)/x1031)<<x1032);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1049 = -36999;
	volatile int32_t x1050 = INT32_MIN;
	int64_t x1051 = -1LL;
	uint8_t x1052 = 22U;
	volatile int64_t t30 = -11LL;

	t30 = (((x1049&x1050)/x1051)<<x1052);

	if (t30 != 9007199254740992LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1065 = 508493778;
	static uint16_t x1066 = UINT16_MAX;
	int8_t x1067 = 38;
	int16_t x1068 = 20;
	static int32_t t31 = 133950869;

	t31 = (((x1065&x1066)/x1067)<<x1068);

	if (t31 != 1806696448) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1093 = INT16_MIN;
	uint32_t x1095 = UINT32_MAX;
	volatile uint32_t t32 = 504640788U;

	t32 = (((x1093&x1094)/x1095)<<x1096);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1109 = 37221870LLU;
	volatile int8_t x1111 = 14;
	uint8_t x1112 = 0U;
	uint64_t t33 = 11LLU;

	t33 = (((x1109&x1110)/x1111)<<x1112);

	if (t33 != 2658705LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1137 = INT32_MAX;
	int32_t x1138 = INT32_MIN;
	static int16_t x1139 = INT16_MIN;
	volatile int32_t x1140 = 10;
	volatile int32_t t34 = 70;

	t34 = (((x1137&x1138)/x1139)<<x1140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1209 = 246U;
	uint32_t x1210 = UINT32_MAX;
	uint32_t x1211 = 5744U;
	uint8_t x1212 = 2U;
	volatile uint32_t t35 = 7133U;

	t35 = (((x1209&x1210)/x1211)<<x1212);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1221 = 951416008388LLU;
	static int64_t x1223 = INT64_MIN;
	volatile uint64_t t36 = 14219441382LLU;

	t36 = (((x1221&x1222)/x1223)<<x1224);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1245 = -1LL;
	int32_t x1247 = -216972308;
	volatile int16_t x1248 = 2;
	volatile int64_t t37 = -1905297738999824LL;

	t37 = (((x1245&x1246)/x1247)<<x1248);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1258 = -10609;
	static uint8_t x1260 = 1U;
	static volatile uint32_t t38 = 5U;

	t38 = (((x1257&x1258)/x1259)<<x1260);

	if (t38 != 936U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1278 = INT64_MIN;
	static int8_t x1279 = INT8_MIN;
	uint16_t x1280 = 0U;

	t39 = (((x1277&x1278)/x1279)<<x1280);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1305 = 1;
	uint64_t x1306 = UINT64_MAX;
	uint8_t x1307 = 51U;
	volatile int8_t x1308 = 49;
	uint64_t t40 = 12113LLU;

	t40 = (((x1305&x1306)/x1307)<<x1308);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1357 = INT16_MIN;
	volatile int32_t x1358 = -1;
	int8_t x1359 = INT8_MIN;
	uint8_t x1360 = 2U;
	int32_t t41 = -25786790;

	t41 = (((x1357&x1358)/x1359)<<x1360);

	if (t41 != 1024) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1473 = -873514814;
	int8_t x1474 = INT8_MIN;
	int64_t x1475 = -1LL;
	uint64_t x1476 = 4LLU;
	volatile int64_t t42 = 54LL;

	t42 = (((x1473&x1474)/x1475)<<x1476);

	if (t42 != 13976238080LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1489 = 1U;
	volatile int16_t x1490 = -1;
	uint8_t x1491 = UINT8_MAX;
	static volatile int64_t x1492 = 0LL;
	volatile int32_t t43 = 12497;

	t43 = (((x1489&x1490)/x1491)<<x1492);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1497 = INT32_MIN;
	static uint32_t x1498 = 47164U;
	static int32_t x1499 = INT32_MIN;
	uint16_t x1500 = 3U;
	volatile uint32_t t44 = 1854241U;

	t44 = (((x1497&x1498)/x1499)<<x1500);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x1505 = UINT64_MAX;
	int64_t x1506 = -1LL;
	static int16_t x1507 = 197;
	int16_t x1508 = 2;
	uint64_t t45 = 102LLU;

	t45 = (((x1505&x1506)/x1507)<<x1508);

	if (t45 != 374553179161615260LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1573 = 1029994434;
	int8_t x1574 = INT8_MIN;
	static uint32_t x1575 = 48464U;
	uint8_t x1576 = 15U;
	uint32_t t46 = 197547738U;

	t46 = (((x1573&x1574)/x1575)<<x1576);

	if (t46 != 696385536U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1589 = INT16_MAX;
	static volatile int64_t x1591 = 897396934448995324LL;
	static uint8_t x1592 = 42U;
	static volatile uint64_t t47 = 2416892051474LLU;

	t47 = (((x1589&x1590)/x1591)<<x1592);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1633 = UINT16_MAX;
	uint16_t x1634 = 12922U;
	static int32_t x1635 = INT32_MIN;
	uint16_t x1636 = 8U;
	volatile int32_t t48 = -1;

	t48 = (((x1633&x1634)/x1635)<<x1636);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1649 = 18745554U;
	uint8_t x1650 = 1U;
	volatile uint64_t x1651 = 3117873189LLU;
	uint8_t x1652 = 56U;
	volatile uint64_t t49 = 45983094951844004LLU;

	t49 = (((x1649&x1650)/x1651)<<x1652);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1665 = 20502304090957059LLU;
	int64_t x1667 = -31619382849LL;
	uint8_t x1668 = 4U;

	t50 = (((x1665&x1666)/x1667)<<x1668);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x1697 = INT64_MIN;
	uint16_t x1698 = UINT16_MAX;
	int32_t x1699 = -13;
	static int8_t x1700 = 3;
	int64_t t51 = -4112372189114701LL;

	t51 = (((x1697&x1698)/x1699)<<x1700);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1717 = INT64_MIN;
	int64_t x1719 = -289904LL;
	int32_t x1720 = 0;
	volatile int64_t t52 = 247494743985569666LL;

	t52 = (((x1717&x1718)/x1719)<<x1720);

	if (t52 != 31815263110735LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1721 = -53686899LL;
	int32_t x1722 = -16564963;
	int64_t x1723 = INT64_MAX;
	uint64_t x1724 = 21LLU;
	int64_t t53 = -136LL;

	t53 = (((x1721&x1722)/x1723)<<x1724);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1737 = 1;
	volatile uint16_t x1740 = 15U;
	uint32_t t54 = 7360728U;

	t54 = (((x1737&x1738)/x1739)<<x1740);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1777 = INT32_MAX;
	int8_t x1779 = INT8_MIN;
	static uint8_t x1780 = 2U;

	t55 = (((x1777&x1778)/x1779)<<x1780);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1797 = -176357;
	int8_t x1798 = -1;
	static volatile int32_t t56 = -8;

	t56 = (((x1797&x1798)/x1799)<<x1800);

	if (t56 != 352714) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1805 = 8857U;
	int32_t x1807 = INT32_MAX;
	int8_t x1808 = 0;
	static uint64_t t57 = 418LLU;

	t57 = (((x1805&x1806)/x1807)<<x1808);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1917 = -7579;
	uint16_t x1918 = 222U;
	int64_t x1919 = 940927767761725LL;
	int64_t t58 = 19707800749692279LL;

	t58 = (((x1917&x1918)/x1919)<<x1920);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2001 = INT16_MIN;
	static volatile int8_t x2002 = INT8_MIN;
	static uint64_t x2003 = 18555172789040127LLU;
	int8_t x2004 = 0;
	volatile uint64_t t59 = 48036645097963513LLU;

	t59 = (((x2001&x2002)/x2003)<<x2004);

	if (t59 != 994LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2039 = UINT64_MAX;
	int16_t x2040 = 6;
	volatile uint64_t t60 = 9LLU;

	t60 = (((x2037&x2038)/x2039)<<x2040);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2061 = INT32_MIN;
	int32_t x2062 = 19;
	int16_t x2063 = INT16_MAX;
	static uint8_t x2064 = 8U;
	int32_t t61 = 3;

	t61 = (((x2061&x2062)/x2063)<<x2064);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2101 = 180918806LLU;
	int64_t x2103 = 476315356LL;
	uint8_t x2104 = 0U;
	uint64_t t62 = 282289730LLU;

	t62 = (((x2101&x2102)/x2103)<<x2104);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2133 = 1622054LLU;
	volatile int16_t x2134 = INT16_MIN;
	int16_t x2135 = 8;

	t63 = (((x2133&x2134)/x2135)<<x2136);

	if (t63 != 401408LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2145 = 57294121463748650LL;
	static volatile int64_t x2146 = 1326LL;
	static volatile uint16_t x2147 = 15U;
	volatile uint32_t x2148 = 1U;
	static volatile int64_t t64 = -2015356LL;

	t64 = (((x2145&x2146)/x2147)<<x2148);

	if (t64 != 4LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2213 = INT32_MIN;
	int8_t x2214 = -50;
	int8_t x2215 = INT8_MIN;
	static int8_t x2216 = 0;
	static int32_t t65 = -229901;

	t65 = (((x2213&x2214)/x2215)<<x2216);

	if (t65 != 16777216) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2242 = INT16_MAX;
	static int64_t x2243 = -55146726597LL;
	uint16_t x2244 = 1U;
	volatile int64_t t66 = -1438LL;

	t66 = (((x2241&x2242)/x2243)<<x2244);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2397 = 63705927051LLU;
	uint8_t x2400 = 1U;
	volatile uint64_t t67 = 71235536819809345LLU;

	t67 = (((x2397&x2398)/x2399)<<x2400);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2479 = 2U;
	uint8_t x2480 = 22U;
	volatile uint32_t t68 = 31041U;

	t68 = (((x2477&x2478)/x2479)<<x2480);

	if (t68 != 532676608U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2481 = INT64_MIN;
	int64_t x2482 = 146827155LL;
	int16_t x2483 = -1;
	uint16_t x2484 = 3U;

	t69 = (((x2481&x2482)/x2483)<<x2484);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2489 = 2;
	int64_t x2491 = INT64_MIN;
	int16_t x2492 = 0;
	int64_t t70 = -1210187LL;

	t70 = (((x2489&x2490)/x2491)<<x2492);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2529 = -27;
	volatile int32_t x2530 = INT32_MIN;
	uint32_t x2531 = 1U;
	int8_t x2532 = 0;
	uint32_t t71 = 2931369U;

	t71 = (((x2529&x2530)/x2531)<<x2532);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x2537 = UINT64_MAX;
	volatile int8_t x2538 = -62;
	int8_t x2539 = -1;
	volatile uint16_t x2540 = 13U;
	volatile uint64_t t72 = 10642718615252LLU;

	t72 = (((x2537&x2538)/x2539)<<x2540);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2581 = 64U;
	int32_t x2582 = -2815;
	uint64_t x2583 = 30LLU;
	uint64_t t73 = 302989880357LLU;

	t73 = (((x2581&x2582)/x2583)<<x2584);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2586 = 19;
	int64_t x2587 = -63LL;
	volatile uint16_t x2588 = 5U;
	uint64_t t74 = 72281LLU;

	t74 = (((x2585&x2586)/x2587)<<x2588);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2677 = 2U;
	volatile uint32_t x2678 = 1U;
	static volatile uint32_t x2679 = 1656U;
	static uint32_t t75 = 2934U;

	t75 = (((x2677&x2678)/x2679)<<x2680);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x2717 = 173485574674509526LLU;
	static int32_t x2718 = -1;
	int16_t x2719 = INT16_MAX;

	t76 = (((x2717&x2718)/x2719)<<x2720);

	if (t76 != 3760087183331950592LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2797 = INT32_MIN;
	static int32_t x2799 = -771261;
	volatile uint8_t x2800 = 4U;
	volatile int32_t t77 = -15585;

	t77 = (((x2797&x2798)/x2799)<<x2800);

	if (t77 != 44544) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2817 = -1LL;
	volatile int64_t x2819 = INT64_MIN;
	uint8_t x2820 = 0U;

	t78 = (((x2817&x2818)/x2819)<<x2820);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x2842 = INT8_MIN;
	uint8_t x2844 = 1U;
	int32_t t79 = 1;

	t79 = (((x2841&x2842)/x2843)<<x2844);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2953 = INT32_MIN;
	volatile int16_t x2954 = INT16_MAX;
	int8_t x2955 = -1;
	uint8_t x2956 = 15U;

	t80 = (((x2953&x2954)/x2955)<<x2956);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2961 = -5;
	int16_t x2962 = 48;
	int16_t x2963 = INT16_MIN;
	static volatile int32_t t81 = 2;

	t81 = (((x2961&x2962)/x2963)<<x2964);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3003 = UINT32_MAX;
	static volatile uint8_t x3004 = 30U;
	volatile int64_t t82 = -306419192656488LL;

	t82 = (((x3001&x3002)/x3003)<<x3004);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3026 = -1;
	volatile int16_t x3028 = 2;
	volatile int32_t t83 = -5092;

	t83 = (((x3025&x3026)/x3027)<<x3028);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x3045 = INT16_MIN;
	int16_t x3046 = INT16_MAX;
	volatile uint64_t x3047 = 61666592897LLU;
	int32_t x3048 = 2;

	t84 = (((x3045&x3046)/x3047)<<x3048);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3053 = INT32_MIN;
	uint8_t x3054 = UINT8_MAX;
	static uint16_t x3055 = UINT16_MAX;
	uint64_t x3056 = 2LLU;
	volatile int32_t t85 = 4558505;

	t85 = (((x3053&x3054)/x3055)<<x3056);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3061 = 1226041LLU;
	int64_t x3062 = 899125125407LL;
	static uint32_t x3063 = 6U;
	uint16_t x3064 = 1U;
	uint64_t t86 = 148191LLU;

	t86 = (((x3061&x3062)/x3063)<<x3064);

	if (t86 != 13746LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3125 = INT32_MAX;
	int8_t x3126 = INT8_MIN;
	uint8_t x3128 = 9U;
	int64_t t87 = -42LL;

	t87 = (((x3125&x3126)/x3127)<<x3128);

	if (t87 != 4261672448LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3201 = 165902257514LLU;
	static uint64_t t88 = 596LLU;

	t88 = (((x3201&x3202)/x3203)<<x3204);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3205 = -1;
	volatile int8_t x3206 = INT8_MIN;
	uint32_t x3207 = UINT32_MAX;
	volatile uint16_t x3208 = 9U;
	static uint32_t t89 = 15U;

	t89 = (((x3205&x3206)/x3207)<<x3208);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x3213 = -227774;
	int16_t x3214 = INT16_MAX;
	uint16_t x3215 = 496U;
	int8_t x3216 = 0;

	t90 = (((x3213&x3214)/x3215)<<x3216);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3229 = 3758;
	int8_t x3230 = -1;
	static uint16_t x3231 = 10886U;
	volatile int32_t x3232 = 7;
	static volatile int32_t t91 = 453618203;

	t91 = (((x3229&x3230)/x3231)<<x3232);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3273 = 22;
	int64_t x3274 = -1LL;
	int16_t x3275 = INT16_MAX;
	uint8_t x3276 = 0U;

	t92 = (((x3273&x3274)/x3275)<<x3276);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x3277 = -1LL;
	static int32_t x3278 = -1;
	uint8_t x3280 = 5U;

	t93 = (((x3277&x3278)/x3279)<<x3280);

	if (t93 != 32LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x3293 = 0LL;
	static int32_t x3294 = INT32_MIN;
	uint32_t x3295 = 1318U;
	volatile uint16_t x3296 = 3U;
	int64_t t94 = 62LL;

	t94 = (((x3293&x3294)/x3295)<<x3296);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3297 = 34;
	int64_t x3298 = INT64_MAX;
	static uint32_t x3300 = 4U;
	int64_t t95 = -132960321988LL;

	t95 = (((x3297&x3298)/x3299)<<x3300);

	if (t95 != 272LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3301 = -1LL;
	uint32_t x3302 = 962674U;
	uint64_t x3303 = 454950997LLU;
	static uint8_t x3304 = 0U;
	volatile uint64_t t96 = 97LLU;

	t96 = (((x3301&x3302)/x3303)<<x3304);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3309 = -1;
	static int8_t x3310 = INT8_MAX;
	uint64_t x3311 = 4430LLU;
	uint64_t t97 = 447183LLU;

	t97 = (((x3309&x3310)/x3311)<<x3312);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3333 = 0;
	uint8_t x3335 = UINT8_MAX;
	int32_t t98 = -5183117;

	t98 = (((x3333&x3334)/x3335)<<x3336);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3402 = INT16_MAX;
	volatile uint64_t x3403 = 13991LLU;
	uint32_t x3404 = 13U;
	static volatile uint64_t t99 = 676211592LLU;

	t99 = (((x3401&x3402)/x3403)<<x3404);

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


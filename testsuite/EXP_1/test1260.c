#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x28 = UINT16_MAX;
int32_t t0 = -1378551;
uint16_t x108 = 466U;
volatile uint16_t x179 = 9U;
static volatile int32_t x180 = -123466;
uint64_t x208 = UINT64_MAX;
uint64_t t8 = UINT64_MAX;
volatile int8_t x222 = INT8_MIN;
int32_t x286 = INT32_MIN;
uint8_t x358 = 0U;
int32_t x360 = 147;
int16_t x464 = -1;
volatile uint8_t x605 = 1U;
static uint32_t x614 = 514806916U;
int8_t x621 = INT8_MIN;
int8_t x622 = INT8_MIN;
static uint8_t x623 = 5U;
volatile int64_t x641 = INT64_MIN;
int8_t x642 = INT8_MIN;
static int8_t x643 = 25;
uint16_t x733 = UINT16_MAX;
int32_t x773 = -1;
int8_t x823 = 25;
volatile int32_t x862 = 44653812;
uint16_t x936 = UINT16_MAX;
uint64_t x953 = 222683LLU;
int64_t x970 = -369228844949492LL;
static uint64_t x972 = UINT64_MAX;
static int64_t x1072 = INT64_MIN;
int32_t x1236 = INT32_MIN;
int8_t x1266 = INT8_MAX;
volatile int16_t x1277 = 3;
volatile int32_t t44 = -15099981;
volatile int32_t x1376 = 4174467;
uint64_t x1414 = UINT64_MAX;
int8_t x1452 = 10;
int32_t x1526 = -73283256;
uint8_t x1547 = 15U;
volatile uint64_t t50 = UINT64_MAX;
volatile uint16_t x1568 = 39U;
uint32_t x1782 = UINT32_MAX;
static uint64_t t60 = UINT64_MAX;
int8_t x1937 = -1;
uint64_t t62 = 1507404760652249417LLU;
int32_t x1984 = -1;
volatile uint8_t x2121 = 36U;
uint8_t x2135 = 1U;
int8_t x2162 = INT8_MIN;
int16_t x2205 = -1;
static uint8_t x2208 = UINT8_MAX;
int16_t x2228 = 104;
static volatile int32_t t72 = -13475;
int32_t x2241 = -6237844;
uint16_t x2274 = UINT16_MAX;
int16_t x2275 = 8;
volatile int32_t t74 = -14252;
static int64_t x2288 = 2LL;
volatile uint64_t x2320 = UINT64_MAX;
volatile uint64_t t76 = UINT64_MAX;
static uint32_t x2328 = 0U;
static uint16_t x2345 = 9583U;
static volatile uint8_t x2407 = 14U;
int16_t x2424 = INT16_MIN;
volatile uint16_t x2433 = 3801U;
volatile int8_t x2450 = INT8_MAX;
int8_t x2483 = 1;
uint8_t x2507 = 12U;
static int16_t x2508 = INT16_MIN;
volatile uint64_t x2574 = UINT64_MAX;
uint8_t x2639 = 1U;
static uint64_t x2640 = 4931535LLU;
static int32_t x2751 = 0;
static int16_t x2752 = 7;
static int16_t x2767 = 15;
static uint16_t x2773 = 2U;
volatile uint64_t t91 = 4717LLU;
uint8_t x2786 = 0U;
uint8_t x2799 = 3U;
uint16_t x2800 = 10U;
int64_t x2834 = -221928247806098533LL;
static int64_t x2836 = -1LL;
uint16_t x2855 = 19U;
volatile int32_t t98 = -486;


void f0(void) {
	uint8_t x25 = 100U;
	int8_t x26 = -13;
	uint8_t x27 = 27U;

	t0 = (((x25==x26)<<x27)|x28);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x29 = UINT64_MAX;
	static int16_t x30 = INT16_MIN;
	uint8_t x31 = 3U;
	int32_t x32 = INT32_MAX;
	static int32_t t1 = INT32_MAX;

	t1 = (((x29==x30)<<x31)|x32);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x49 = -5;
	uint32_t x50 = 7157U;
	uint32_t x51 = 18U;
	int64_t x52 = INT64_MIN;
	static int64_t t2 = INT64_MIN;

	t2 = (((x49==x50)<<x51)|x52);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x85 = INT64_MIN;
	static int32_t x86 = -757662727;
	volatile int8_t x87 = 11;
	int32_t x88 = -1;
	volatile int32_t t3 = -3087323;

	t3 = (((x85==x86)<<x87)|x88);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x105 = INT64_MIN;
	static int64_t x106 = -1LL;
	uint8_t x107 = 4U;
	int32_t t4 = 14979819;

	t4 = (((x105==x106)<<x107)|x108);

	if (t4 != 466) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x125 = 555686459447383218LLU;
	static int64_t x126 = -73973411165285LL;
	uint8_t x127 = 9U;
	int64_t x128 = -470740624207LL;
	int64_t t5 = 246170037654LL;

	t5 = (((x125==x126)<<x127)|x128);

	if (t5 != -470740624207LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x177 = -12;
	int32_t x178 = INT32_MIN;
	int32_t t6 = -64220656;

	t6 = (((x177==x178)<<x179)|x180);

	if (t6 != -123466) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x193 = -1LL;
	int64_t x194 = INT64_MIN;
	static uint16_t x195 = 11U;
	uint16_t x196 = 29598U;
	volatile int32_t t7 = 547324;

	t7 = (((x193==x194)<<x195)|x196);

	if (t7 != 29598) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 15469U;
	uint64_t x207 = 6LLU;

	t8 = (((x205==x206)<<x207)|x208);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x221 = 7U;
	int8_t x223 = 2;
	int16_t x224 = -1;
	int32_t t9 = -322;

	t9 = (((x221==x222)<<x223)|x224);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x257 = -1LL;
	int32_t x258 = -1;
	uint8_t x259 = 11U;
	static int16_t x260 = -1;
	volatile int32_t t10 = -12;

	t10 = (((x257==x258)<<x259)|x260);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static volatile int8_t x287 = 0;
	int8_t x288 = -1;
	static volatile int32_t t11 = 4;

	t11 = (((x285==x286)<<x287)|x288);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = 2U;
	volatile uint64_t x300 = 131934084608285LLU;
	volatile uint64_t t12 = 1013450535LLU;

	t12 = (((x297==x298)<<x299)|x300);

	if (t12 != 131934084608285LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x357 = -1;
	static uint8_t x359 = 19U;
	volatile int32_t t13 = 0;

	t13 = (((x357==x358)<<x359)|x360);

	if (t13 != 147) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x405 = INT64_MAX;
	volatile uint16_t x406 = UINT16_MAX;
	uint64_t x407 = 0LLU;
	uint8_t x408 = UINT8_MAX;
	int32_t t14 = 1;

	t14 = (((x405==x406)<<x407)|x408);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x437 = INT16_MIN;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = 1;
	int8_t x440 = 4;
	volatile int32_t t15 = -16;

	t15 = (((x437==x438)<<x439)|x440);

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x461 = INT16_MAX;
	volatile int32_t x462 = -1;
	int8_t x463 = 0;
	int32_t t16 = 178368526;

	t16 = (((x461==x462)<<x463)|x464);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x497 = 0U;
	uint32_t x498 = UINT32_MAX;
	static uint16_t x499 = 1U;
	static int8_t x500 = INT8_MAX;
	volatile int32_t t17 = 951122;

	t17 = (((x497==x498)<<x499)|x500);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MIN;
	int8_t x587 = 0;
	int16_t x588 = INT16_MIN;
	int32_t t18 = -1432;

	t18 = (((x585==x586)<<x587)|x588);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x606 = INT8_MAX;
	int32_t x607 = 22;
	uint32_t x608 = UINT32_MAX;
	static volatile uint32_t t19 = UINT32_MAX;

	t19 = (((x605==x606)<<x607)|x608);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x613 = INT32_MAX;
	int16_t x615 = 5;
	uint32_t x616 = 21U;
	uint32_t t20 = 7U;

	t20 = (((x613==x614)<<x615)|x616);

	if (t20 != 21U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x624 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x621==x622)<<x623)|x624);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x644 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = (((x641==x642)<<x643)|x644);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x649 = 24U;
	uint16_t x650 = 3882U;
	uint8_t x651 = 14U;
	uint16_t x652 = 117U;
	volatile int32_t t23 = 0;

	t23 = (((x649==x650)<<x651)|x652);

	if (t23 != 117) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x734 = INT8_MIN;
	uint8_t x735 = 2U;
	static int32_t x736 = -658287;
	volatile int32_t t24 = -386409;

	t24 = (((x733==x734)<<x735)|x736);

	if (t24 != -658287) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x753 = 54;
	int8_t x754 = INT8_MAX;
	int64_t x755 = 1LL;
	static volatile int32_t x756 = INT32_MAX;
	volatile int32_t t25 = INT32_MAX;

	t25 = (((x753==x754)<<x755)|x756);

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x757 = 0U;
	static uint32_t x758 = UINT32_MAX;
	int8_t x759 = 10;
	uint16_t x760 = 1U;
	static volatile int32_t t26 = 241785791;

	t26 = (((x757==x758)<<x759)|x760);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x761 = INT64_MIN;
	int64_t x762 = INT64_MIN;
	static uint16_t x763 = 0U;
	static int8_t x764 = 4;
	static volatile int32_t t27 = 4590;

	t27 = (((x761==x762)<<x763)|x764);

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x774 = 4338903LLU;
	int64_t x775 = 19LL;
	static int64_t x776 = 40583366340LL;
	int64_t t28 = 11LL;

	t28 = (((x773==x774)<<x775)|x776);

	if (t28 != 40583366340LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x781 = 1U;
	int64_t x782 = INT64_MAX;
	int16_t x783 = 18;
	static uint64_t x784 = 6LLU;
	volatile uint64_t t29 = 999LLU;

	t29 = (((x781==x782)<<x783)|x784);

	if (t29 != 6LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x821 = INT64_MAX;
	static uint64_t x822 = 118489696814LLU;
	volatile int32_t x824 = -502961665;
	int32_t t30 = -593533087;

	t30 = (((x821==x822)<<x823)|x824);

	if (t30 != -502961665) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x825 = 39;
	uint8_t x826 = 26U;
	static int8_t x827 = 0;
	static uint16_t x828 = UINT16_MAX;
	static int32_t t31 = 152516;

	t31 = (((x825==x826)<<x827)|x828);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x861 = INT32_MIN;
	uint8_t x863 = 1U;
	int32_t x864 = INT32_MIN;
	static volatile int32_t t32 = INT32_MIN;

	t32 = (((x861==x862)<<x863)|x864);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x933 = INT32_MIN;
	int32_t x934 = -244;
	int32_t x935 = 1;
	int32_t t33 = -6433300;

	t33 = (((x933==x934)<<x935)|x936);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x954 = INT64_MIN;
	int16_t x955 = 0;
	volatile uint8_t x956 = 0U;
	volatile int32_t t34 = -18151132;

	t34 = (((x953==x954)<<x955)|x956);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x969 = 1;
	int8_t x971 = 6;
	uint64_t t35 = UINT64_MAX;

	t35 = (((x969==x970)<<x971)|x972);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1021 = UINT8_MAX;
	static int8_t x1022 = 24;
	static volatile uint16_t x1023 = 0U;
	uint16_t x1024 = 1U;
	int32_t t36 = -3695;

	t36 = (((x1021==x1022)<<x1023)|x1024);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1069 = 3450U;
	static int8_t x1070 = -1;
	uint8_t x1071 = 5U;
	int64_t t37 = INT64_MIN;

	t37 = (((x1069==x1070)<<x1071)|x1072);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1209 = 468826U;
	static uint32_t x1210 = 3166369U;
	static uint8_t x1211 = 0U;
	static int64_t x1212 = INT64_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (((x1209==x1210)<<x1211)|x1212);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1233 = 0U;
	int16_t x1234 = INT16_MAX;
	uint8_t x1235 = 23U;
	int32_t t39 = INT32_MIN;

	t39 = (((x1233==x1234)<<x1235)|x1236);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1265 = INT16_MIN;
	volatile int16_t x1267 = 13;
	static int64_t x1268 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = (((x1265==x1266)<<x1267)|x1268);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1278 = INT8_MAX;
	uint8_t x1279 = 10U;
	uint64_t x1280 = 2LLU;
	volatile uint64_t t41 = 3181183652867843463LLU;

	t41 = (((x1277==x1278)<<x1279)|x1280);

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1289 = -1;
	int8_t x1290 = -5;
	static uint8_t x1291 = 29U;
	int16_t x1292 = -1;
	volatile int32_t t42 = -1;

	t42 = (((x1289==x1290)<<x1291)|x1292);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1297 = INT8_MAX;
	int16_t x1298 = -3578;
	uint8_t x1299 = 10U;
	int16_t x1300 = INT16_MIN;
	int32_t t43 = -110895168;

	t43 = (((x1297==x1298)<<x1299)|x1300);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1317 = -1;
	int8_t x1318 = -17;
	int8_t x1319 = 0;
	int32_t x1320 = -2156;

	t44 = (((x1317==x1318)<<x1319)|x1320);

	if (t44 != -2156) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1373 = INT32_MAX;
	int32_t x1374 = INT32_MIN;
	uint32_t x1375 = 3U;
	int32_t t45 = 36;

	t45 = (((x1373==x1374)<<x1375)|x1376);

	if (t45 != 4174467) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1413 = 940U;
	uint64_t x1415 = 10LLU;
	int64_t x1416 = -1LL;
	volatile int64_t t46 = 208LL;

	t46 = (((x1413==x1414)<<x1415)|x1416);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1417 = -1;
	int32_t x1418 = -5279180;
	volatile uint8_t x1419 = 1U;
	static uint64_t x1420 = UINT64_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = (((x1417==x1418)<<x1419)|x1420);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1449 = INT16_MIN;
	int32_t x1450 = INT32_MAX;
	int32_t x1451 = 7;
	int32_t t48 = 0;

	t48 = (((x1449==x1450)<<x1451)|x1452);

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1525 = -1LL;
	int8_t x1527 = 26;
	int32_t x1528 = INT32_MIN;
	static volatile int32_t t49 = INT32_MIN;

	t49 = (((x1525==x1526)<<x1527)|x1528);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1545 = INT16_MIN;
	int64_t x1546 = INT64_MAX;
	uint64_t x1548 = UINT64_MAX;

	t50 = (((x1545==x1546)<<x1547)|x1548);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1565 = INT32_MIN;
	volatile int16_t x1566 = INT16_MIN;
	volatile uint8_t x1567 = 1U;
	int32_t t51 = -837645;

	t51 = (((x1565==x1566)<<x1567)|x1568);

	if (t51 != 39) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1653 = 158311LLU;
	int16_t x1654 = INT16_MIN;
	uint32_t x1655 = 6U;
	static int16_t x1656 = 315;
	volatile int32_t t52 = -85240028;

	t52 = (((x1653==x1654)<<x1655)|x1656);

	if (t52 != 315) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1717 = -880;
	uint32_t x1718 = 3633U;
	volatile uint8_t x1719 = 1U;
	int32_t x1720 = INT32_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (((x1717==x1718)<<x1719)|x1720);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1733 = 543155457084LLU;
	static volatile uint8_t x1734 = 1U;
	uint32_t x1735 = 10U;
	int64_t x1736 = 4213515493336048LL;
	int64_t t54 = -222838LL;

	t54 = (((x1733==x1734)<<x1735)|x1736);

	if (t54 != 4213515493336048LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1741 = INT64_MIN;
	uint64_t x1742 = UINT64_MAX;
	static uint32_t x1743 = 3U;
	volatile int8_t x1744 = INT8_MIN;
	int32_t t55 = -214;

	t55 = (((x1741==x1742)<<x1743)|x1744);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1757 = 6;
	int64_t x1758 = -40908606889629LL;
	int8_t x1759 = 4;
	int32_t x1760 = 36388790;
	static int32_t t56 = -495;

	t56 = (((x1757==x1758)<<x1759)|x1760);

	if (t56 != 36388790) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x1781 = 4877U;
	int8_t x1783 = 7;
	int16_t x1784 = -1;
	volatile int32_t t57 = -130700;

	t57 = (((x1781==x1782)<<x1783)|x1784);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x1801 = -1LL;
	int64_t x1802 = -31243LL;
	uint16_t x1803 = 24U;
	int32_t x1804 = -1;
	int32_t t58 = -15074;

	t58 = (((x1801==x1802)<<x1803)|x1804);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1829 = INT32_MIN;
	int8_t x1830 = INT8_MAX;
	int8_t x1831 = 0;
	int64_t x1832 = INT64_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (((x1829==x1830)<<x1831)|x1832);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x1877 = INT32_MAX;
	uint32_t x1878 = 536168571U;
	int8_t x1879 = 23;
	static volatile uint64_t x1880 = UINT64_MAX;

	t60 = (((x1877==x1878)<<x1879)|x1880);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1881 = 7166U;
	int8_t x1882 = 2;
	int8_t x1883 = 7;
	int32_t x1884 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = (((x1881==x1882)<<x1883)|x1884);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1938 = -1LL;
	static int8_t x1939 = 16;
	volatile uint64_t x1940 = 6715600592315150103LLU;

	t62 = (((x1937==x1938)<<x1939)|x1940);

	if (t62 != 6715600592315215639LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1981 = -1;
	int16_t x1982 = 1;
	uint64_t x1983 = 1LLU;
	int32_t t63 = -291892835;

	t63 = (((x1981==x1982)<<x1983)|x1984);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1993 = 0U;
	uint64_t x1994 = 3918852888LLU;
	int8_t x1995 = 1;
	int16_t x1996 = -1;
	volatile int32_t t64 = 436327971;

	t64 = (((x1993==x1994)<<x1995)|x1996);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2009 = UINT8_MAX;
	uint8_t x2010 = 21U;
	uint32_t x2011 = 2U;
	uint32_t x2012 = 39194U;
	uint32_t t65 = 517071090U;

	t65 = (((x2009==x2010)<<x2011)|x2012);

	if (t65 != 39194U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2069 = INT64_MAX;
	int8_t x2070 = INT8_MIN;
	uint8_t x2071 = 3U;
	uint32_t x2072 = 3U;
	uint32_t t66 = 322U;

	t66 = (((x2069==x2070)<<x2071)|x2072);

	if (t66 != 3U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2122 = 11788U;
	uint32_t x2123 = 7U;
	int64_t x2124 = INT64_MAX;
	volatile int64_t t67 = INT64_MAX;

	t67 = (((x2121==x2122)<<x2123)|x2124);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2133 = 1;
	static int16_t x2134 = INT16_MIN;
	int16_t x2136 = -81;
	static volatile int32_t t68 = 1176174;

	t68 = (((x2133==x2134)<<x2135)|x2136);

	if (t68 != -81) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2157 = INT64_MAX;
	static uint32_t x2158 = 516898536U;
	static int8_t x2159 = 2;
	volatile int64_t x2160 = -2523762984191811302LL;
	int64_t t69 = -339LL;

	t69 = (((x2157==x2158)<<x2159)|x2160);

	if (t69 != -2523762984191811302LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2161 = 565U;
	uint32_t x2163 = 5U;
	int64_t x2164 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (((x2161==x2162)<<x2163)|x2164);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2206 = INT8_MIN;
	static int16_t x2207 = 12;
	volatile int32_t t71 = 0;

	t71 = (((x2205==x2206)<<x2207)|x2208);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2225 = -1;
	uint32_t x2226 = 555U;
	volatile uint8_t x2227 = 10U;

	t72 = (((x2225==x2226)<<x2227)|x2228);

	if (t72 != 104) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2242 = UINT32_MAX;
	uint16_t x2243 = 3U;
	static volatile uint32_t x2244 = UINT32_MAX;
	static volatile uint32_t t73 = UINT32_MAX;

	t73 = (((x2241==x2242)<<x2243)|x2244);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2273 = INT64_MIN;
	uint16_t x2276 = 6U;

	t74 = (((x2273==x2274)<<x2275)|x2276);

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2285 = -10316;
	uint32_t x2286 = 642495737U;
	static volatile uint8_t x2287 = 0U;
	volatile int64_t t75 = 1415172145677976211LL;

	t75 = (((x2285==x2286)<<x2287)|x2288);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2317 = 56U;
	static volatile int16_t x2318 = 4394;
	static uint8_t x2319 = 2U;

	t76 = (((x2317==x2318)<<x2319)|x2320);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2325 = INT8_MIN;
	static int64_t x2326 = -1LL;
	int8_t x2327 = 6;
	volatile uint32_t t77 = 30U;

	t77 = (((x2325==x2326)<<x2327)|x2328);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2346 = 0;
	uint8_t x2347 = 16U;
	int16_t x2348 = -1;
	volatile int32_t t78 = 7;

	t78 = (((x2345==x2346)<<x2347)|x2348);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2405 = INT64_MAX;
	int16_t x2406 = INT16_MIN;
	uint16_t x2408 = 4U;
	volatile int32_t t79 = 0;

	t79 = (((x2405==x2406)<<x2407)|x2408);

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2421 = INT64_MIN;
	static int8_t x2422 = 0;
	int32_t x2423 = 0;
	volatile int32_t t80 = -104709;

	t80 = (((x2421==x2422)<<x2423)|x2424);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2434 = -7041;
	int8_t x2435 = 7;
	volatile int8_t x2436 = INT8_MAX;
	int32_t t81 = 385938717;

	t81 = (((x2433==x2434)<<x2435)|x2436);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2449 = 3U;
	static volatile uint8_t x2451 = 12U;
	uint64_t x2452 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x2449==x2450)<<x2451)|x2452);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2481 = INT8_MIN;
	uint16_t x2482 = 47U;
	int8_t x2484 = 45;
	int32_t t83 = 240829297;

	t83 = (((x2481==x2482)<<x2483)|x2484);

	if (t83 != 45) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2505 = UINT16_MAX;
	volatile int16_t x2506 = -1;
	static volatile int32_t t84 = -3739;

	t84 = (((x2505==x2506)<<x2507)|x2508);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2573 = 14752408LL;
	static uint16_t x2575 = 20U;
	int64_t x2576 = -1LL;
	volatile int64_t t85 = 186LL;

	t85 = (((x2573==x2574)<<x2575)|x2576);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2637 = 3401U;
	int32_t x2638 = 372;
	uint64_t t86 = 65LLU;

	t86 = (((x2637==x2638)<<x2639)|x2640);

	if (t86 != 4931535LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2669 = INT32_MAX;
	uint8_t x2670 = UINT8_MAX;
	uint8_t x2671 = 29U;
	int32_t x2672 = 159;
	volatile int32_t t87 = 51368;

	t87 = (((x2669==x2670)<<x2671)|x2672);

	if (t87 != 159) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2733 = UINT64_MAX;
	int32_t x2734 = INT32_MIN;
	volatile int32_t x2735 = 21;
	static int8_t x2736 = INT8_MIN;
	int32_t t88 = -846;

	t88 = (((x2733==x2734)<<x2735)|x2736);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2749 = INT16_MIN;
	int64_t x2750 = 83LL;
	volatile int32_t t89 = 2243;

	t89 = (((x2749==x2750)<<x2751)|x2752);

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2765 = UINT16_MAX;
	int32_t x2766 = INT32_MIN;
	int8_t x2768 = INT8_MIN;
	volatile int32_t t90 = -23;

	t90 = (((x2765==x2766)<<x2767)|x2768);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2774 = INT64_MIN;
	uint8_t x2775 = 15U;
	uint64_t x2776 = 718815998266284947LLU;

	t91 = (((x2773==x2774)<<x2775)|x2776);

	if (t91 != 718815998266284947LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2785 = 1U;
	uint8_t x2787 = 20U;
	int16_t x2788 = INT16_MIN;
	volatile int32_t t92 = -1709;

	t92 = (((x2785==x2786)<<x2787)|x2788);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x2797 = 211U;
	static uint16_t x2798 = 853U;
	volatile int32_t t93 = -42744354;

	t93 = (((x2797==x2798)<<x2799)|x2800);

	if (t93 != 10) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2833 = -1797726469LL;
	uint64_t x2835 = 26LLU;
	static int64_t t94 = -21780541LL;

	t94 = (((x2833==x2834)<<x2835)|x2836);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2853 = 27U;
	volatile int64_t x2854 = 31905275LL;
	uint64_t x2856 = 20917013613LLU;
	volatile uint64_t t95 = 45633705LLU;

	t95 = (((x2853==x2854)<<x2855)|x2856);

	if (t95 != 20917013613LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2881 = 39661012050078LLU;
	static int16_t x2882 = INT16_MIN;
	static uint8_t x2883 = 2U;
	int64_t x2884 = INT64_MIN;
	static volatile int64_t t96 = INT64_MIN;

	t96 = (((x2881==x2882)<<x2883)|x2884);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x2901 = UINT32_MAX;
	static volatile uint64_t x2902 = 1856809775963266LLU;
	volatile uint8_t x2903 = 11U;
	int64_t x2904 = -2344057069997499182LL;
	int64_t t97 = -12583156057LL;

	t97 = (((x2901==x2902)<<x2903)|x2904);

	if (t97 != -2344057069997499182LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2969 = -1;
	int64_t x2970 = -181197721LL;
	uint16_t x2971 = 6U;
	volatile int16_t x2972 = -1;

	t98 = (((x2969==x2970)<<x2971)|x2972);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2973 = 2201878;
	volatile int32_t x2974 = -1;
	volatile uint8_t x2975 = 0U;
	static int8_t x2976 = -1;
	volatile int32_t t99 = -26;

	t99 = (((x2973==x2974)<<x2975)|x2976);

	if (t99 != -1) { NG(); } else { ; }
	
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


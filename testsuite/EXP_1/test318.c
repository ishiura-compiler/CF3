#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x104 = 11;
uint32_t x209 = 113236U;
int32_t x210 = INT32_MIN;
int8_t x237 = INT8_MIN;
int16_t x238 = INT16_MIN;
volatile int16_t x401 = -10131;
uint32_t t3 = 0U;
int32_t x429 = INT32_MIN;
volatile uint64_t t4 = 92431811460361LLU;
int16_t x449 = INT16_MIN;
uint64_t t7 = 9631751175903LLU;
uint64_t x550 = 2920647777822LLU;
volatile int32_t x685 = 5;
int16_t x688 = 4;
static volatile uint64_t t9 = 1046662LLU;
uint64_t x714 = 4095LLU;
uint32_t x715 = UINT32_MAX;
uint64_t t13 = 921604288695282814LLU;
uint8_t x862 = 1U;
uint64_t x1006 = 15LLU;
volatile int32_t x1007 = INT32_MIN;
uint16_t x1071 = 10U;
static volatile uint32_t x1093 = 63494859U;
volatile int16_t x1095 = -1;
uint16_t x1096 = 7U;
static uint16_t x1215 = UINT16_MAX;
int16_t x1296 = 2;
static int16_t x1361 = -1;
int32_t x1362 = -1;
uint64_t t25 = UINT64_MAX;
int32_t x1377 = INT32_MIN;
static uint64_t x1537 = 312333LLU;
int16_t x1538 = INT16_MIN;
static int16_t x1572 = 17;
int8_t x1741 = INT8_MIN;
volatile uint64_t t30 = 21874115087LLU;
static volatile uint64_t x1750 = 167433247LLU;
uint32_t x1752 = 3U;
uint16_t x1786 = 456U;
static volatile int8_t x1787 = -3;
static int16_t x1788 = 6;
uint64_t x1825 = 96332010841227LLU;
volatile uint16_t x1826 = 3U;
volatile uint64_t t34 = UINT64_MAX;
uint8_t x1840 = 0U;
static uint64_t x1957 = 495731917952754LLU;
static uint8_t x1958 = 50U;
uint32_t x2007 = 2579U;
int8_t x2033 = INT8_MIN;
volatile int32_t x2036 = 1;
volatile uint32_t t40 = UINT32_MAX;
int32_t x2141 = INT32_MAX;
uint16_t x2164 = 3U;
volatile uint32_t x2189 = 1737690511U;
static volatile uint8_t x2191 = UINT8_MAX;
volatile uint64_t t44 = 118577LLU;
int64_t x2494 = -6659332235LL;
uint8_t x2496 = 13U;
int64_t t47 = 66986786795328LL;
volatile uint64_t x2589 = 20897271664LLU;
uint64_t x2590 = 7412704395LLU;
int64_t x2614 = -1LL;
int64_t x2794 = -1LL;
volatile int32_t x2795 = 46664;
volatile uint8_t x2868 = 26U;
uint64_t x3006 = UINT64_MAX;
int8_t x3070 = INT8_MAX;
volatile uint16_t x3071 = UINT16_MAX;
volatile int64_t x3098 = INT64_MIN;
static uint16_t x3099 = UINT16_MAX;
uint64_t x3148 = 4LLU;
int8_t x3165 = INT8_MAX;
int64_t t62 = 12902975140LL;
static int16_t x3307 = 34;
volatile uint64_t t66 = 3822544319LLU;
volatile uint32_t t69 = 1750683789U;


void f0(void) {
	int16_t x101 = INT16_MIN;
	static volatile int32_t x102 = 23477492;
	volatile uint64_t x103 = UINT64_MAX;
	uint64_t t0 = 473LLU;

	t0 = (((x101-x102)|x103)<<x104);

	if (t0 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x211 = 21U;
	static uint16_t x212 = 0U;
	volatile uint32_t t1 = 1138078U;

	t1 = (((x209-x210)|x211)<<x212);

	if (t1 != 2147596885U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x239 = 55221;
	volatile int8_t x240 = 0;
	volatile int32_t t2 = -897162;

	t2 = (((x237-x238)|x239)<<x240);

	if (t2 != 65461) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x402 = INT16_MIN;
	volatile uint32_t x403 = 111986045U;
	uint32_t x404 = 25U;

	t3 = (((x401-x402)|x403)<<x404);

	if (t3 != 4194304000U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x430 = -78;
	uint64_t x431 = 28682762646LLU;
	volatile uint32_t x432 = 1U;

	t4 = (((x429-x430)|x431)<<x432);

	if (t4 != 18446744070945534908LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x450 = UINT64_MAX;
	uint64_t x451 = 1737103LLU;
	int8_t x452 = 0;
	uint64_t t5 = 185999LLU;

	t5 = (((x449-x450)|x451)<<x452);

	if (t5 != 18446744073709519247LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x465 = 6U;
	volatile int64_t x466 = -35269985233214820LL;
	volatile uint32_t x467 = 5788085U;
	uint8_t x468 = 1U;
	int64_t t6 = 6LL;

	t6 = (((x465-x466)|x467)<<x468);

	if (t6 != 70539970476948478LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x481 = 32U;
	uint64_t x482 = UINT64_MAX;
	uint64_t x483 = UINT64_MAX;
	volatile int8_t x484 = 12;

	t7 = (((x481-x482)|x483)<<x484);

	if (t7 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x549 = 0;
	static int16_t x551 = INT16_MIN;
	volatile uint8_t x552 = 31U;
	volatile uint64_t t8 = 6870LLU;

	t8 = (((x549-x550)|x551)<<x552);

	if (t8 != 18446692332238536704LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x686 = UINT64_MAX;
	uint16_t x687 = UINT16_MAX;

	t9 = (((x685-x686)|x687)<<x688);

	if (t9 != 1048560LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x713 = 7;
	volatile uint8_t x716 = 62U;
	uint64_t t10 = 4116228973106357040LLU;

	t10 = (((x713-x714)|x715)<<x716);

	if (t10 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x777 = 190LLU;
	uint64_t x778 = UINT64_MAX;
	uint8_t x779 = UINT8_MAX;
	int8_t x780 = 6;
	static volatile uint64_t t11 = 144336150779247597LLU;

	t11 = (((x777-x778)|x779)<<x780);

	if (t11 != 16320LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x809 = -286045;
	static uint64_t x810 = 197025442090LLU;
	int32_t x811 = -2834230;
	uint16_t x812 = 58U;
	static uint64_t t12 = 8102916LLU;

	t12 = (((x809-x810)|x811)<<x812);

	if (t12 != 17005592192950992896LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x829 = -1;
	static uint64_t x830 = 76795187159LLU;
	volatile uint16_t x831 = 2U;
	uint8_t x832 = 1U;

	t13 = (((x829-x830)|x831)<<x832);

	if (t13 != 18446743920119177300LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x861 = 46;
	volatile uint16_t x863 = 151U;
	uint8_t x864 = 1U;
	volatile int32_t t14 = -15;

	t14 = (((x861-x862)|x863)<<x864);

	if (t14 != 382) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1005 = 1216326516LL;
	static int32_t x1008 = 3;
	uint64_t t15 = 655410573LLU;

	t15 = (((x1005-x1006)|x1007)<<x1008);

	if (t15 != 18446744066260294440LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1009 = INT32_MAX;
	static uint8_t x1010 = 0U;
	static int32_t x1011 = 4810009;
	uint8_t x1012 = 0U;
	static int32_t t16 = INT32_MAX;

	t16 = (((x1009-x1010)|x1011)<<x1012);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1057 = INT32_MAX;
	static int64_t x1058 = -48LL;
	volatile int8_t x1059 = 51;
	uint8_t x1060 = 1U;
	int64_t t17 = -23LL;

	t17 = (((x1057-x1058)|x1059)<<x1060);

	if (t17 != 4294967422LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x1069 = UINT16_MAX;
	int8_t x1070 = 1;
	volatile uint16_t x1072 = 6U;
	int32_t t18 = -3;

	t18 = (((x1069-x1070)|x1071)<<x1072);

	if (t18 != 4194176) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1094 = -1122331;
	static uint32_t t19 = 440622U;

	t19 = (((x1093-x1094)|x1095)<<x1096);

	if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1125 = -1;
	uint32_t x1126 = 1146600529U;
	int32_t x1127 = INT32_MIN;
	int32_t x1128 = 0;
	static volatile uint32_t t20 = 796554373U;

	t20 = (((x1125-x1126)|x1127)<<x1128);

	if (t20 != 3148366766U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1213 = INT8_MIN;
	int64_t x1214 = INT64_MIN;
	uint16_t x1216 = 0U;
	int64_t t21 = INT64_MAX;

	t21 = (((x1213-x1214)|x1215)<<x1216);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1265 = 9370LL;
	static uint8_t x1266 = 1U;
	volatile uint64_t x1267 = 284415LLU;
	static int64_t x1268 = 3LL;
	uint64_t t22 = 1313LLU;

	t22 = (((x1265-x1266)|x1267)<<x1268);

	if (t22 != 2340856LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1293 = INT32_MIN;
	uint32_t x1294 = 12325U;
	static int8_t x1295 = 47;
	uint32_t t23 = 1057660480U;

	t23 = (((x1293-x1294)|x1295)<<x1296);

	if (t23 != 4294918140U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1341 = INT64_MAX;
	int64_t x1342 = INT64_MAX;
	uint16_t x1343 = 942U;
	static int8_t x1344 = 24;
	int64_t t24 = 63886540LL;

	t24 = (((x1341-x1342)|x1343)<<x1344);

	if (t24 != 15804137472LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1363 = UINT64_MAX;
	volatile int8_t x1364 = 0;

	t25 = (((x1361-x1362)|x1363)<<x1364);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1378 = -29957006636LL;
	int32_t x1379 = 653223506;
	int16_t x1380 = 2;
	static volatile int64_t t26 = -11237520302LL;

	t26 = (((x1377-x1378)|x1379)<<x1380);

	if (t26 != 111669124600LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1539 = 60U;
	static volatile uint8_t x1540 = 36U;
	uint64_t t27 = 199012LLU;

	t27 = (((x1537-x1538)|x1539)<<x1540);

	if (t27 != 23718458675953664LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1569 = 971U;
	static volatile uint64_t x1570 = 539890618873009958LLU;
	uint64_t x1571 = 515992LLU;
	static uint64_t t28 = 210930914002695LLU;

	t28 = (((x1569-x1570)|x1571)<<x1572);

	if (t28 != 15613813950548410368LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1641 = 305464LL;
	volatile uint8_t x1642 = 0U;
	int16_t x1643 = 1258;
	static uint16_t x1644 = 28U;
	volatile int64_t t29 = -18615111LL;

	t29 = (((x1641-x1642)|x1643)<<x1644);

	if (t29 != 82324322516992LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1742 = 27812751407818188LLU;
	uint8_t x1743 = 4U;
	static uint16_t x1744 = 0U;

	t30 = (((x1741-x1742)|x1743)<<x1744);

	if (t30 != 18418931322301733300LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1749 = 15U;
	uint32_t x1751 = 6U;
	uint64_t t31 = 128216LLU;

	t31 = (((x1749-x1750)|x1751)<<x1752);

	if (t31 != 18446744072370085808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1761 = 218274477769045665LLU;
	static uint8_t x1762 = 1U;
	int16_t x1763 = INT16_MIN;
	int8_t x1764 = 25;
	static volatile uint64_t t32 = 227493125LLU;

	t32 = (((x1761-x1762)|x1763)<<x1764);

	if (t32 != 18446743443423100928LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1785 = UINT64_MAX;
	volatile uint64_t t33 = 387303122LLU;

	t33 = (((x1785-x1786)|x1787)<<x1788);

	if (t33 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1827 = -1;
	int16_t x1828 = 0;

	t34 = (((x1825-x1826)|x1827)<<x1828);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1837 = -1;
	uint64_t x1838 = 103736500654621LLU;
	static int8_t x1839 = INT8_MAX;
	uint64_t t35 = 466476291LLU;

	t35 = (((x1837-x1838)|x1839)<<x1840);

	if (t35 != 18446640337208897023LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1893 = UINT64_MAX;
	int64_t x1894 = INT64_MAX;
	int64_t x1895 = -74397LL;
	uint16_t x1896 = 32U;
	volatile uint64_t t36 = 15365LLU;

	t36 = (((x1893-x1894)|x1895)<<x1896);

	if (t36 != 18446424541027631104LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1959 = INT16_MIN;
	int8_t x1960 = 0;
	volatile uint64_t t37 = 515243LLU;

	t37 = (((x1957-x1958)|x1959)<<x1960);

	if (t37 != 18446744073709524672LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2005 = 23459472U;
	int32_t x2006 = 4924386;
	int8_t x2008 = 1;
	uint32_t t38 = 6689U;

	t38 = (((x2005-x2006)|x2007)<<x2008);

	if (t38 != 37074302U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2034 = UINT32_MAX;
	int32_t x2035 = INT32_MIN;
	uint32_t t39 = 714393U;

	t39 = (((x2033-x2034)|x2035)<<x2036);

	if (t39 != 4294967042U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2061 = 34;
	static uint32_t x2062 = 617536U;
	uint32_t x2063 = UINT32_MAX;
	uint8_t x2064 = 0U;

	t40 = (((x2061-x2062)|x2063)<<x2064);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2142 = 10U;
	uint32_t x2143 = 61354U;
	uint32_t x2144 = 1U;
	static uint32_t t41 = 503018U;

	t41 = (((x2141-x2142)|x2143)<<x2144);

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2161 = INT64_MIN;
	int8_t x2162 = INT8_MIN;
	uint64_t x2163 = UINT64_MAX;
	volatile uint64_t t42 = 121870180216LLU;

	t42 = (((x2161-x2162)|x2163)<<x2164);

	if (t42 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2190 = 15U;
	uint16_t x2192 = 1U;
	volatile uint32_t t43 = 27U;

	t43 = (((x2189-x2190)|x2191)<<x2192);

	if (t43 != 3475381246U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2377 = 62221309LLU;
	static int8_t x2378 = 15;
	volatile int32_t x2379 = INT32_MIN;
	uint8_t x2380 = 49U;

	t44 = (((x2377-x2378)|x2379)<<x2380);

	if (t44 != 15554307213030850560LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2401 = -7064;
	uint8_t x2402 = 2U;
	static uint64_t x2403 = 973270LLU;
	int16_t x2404 = 13;
	volatile uint64_t t45 = 1062075591LLU;

	t45 = (((x2401-x2402)|x2403)<<x2404);

	if (t45 != 18446744073705275392LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2453 = INT8_MIN;
	int64_t x2454 = -107622LL;
	volatile uint16_t x2455 = 170U;
	static volatile int16_t x2456 = 2;
	int64_t t46 = 179509686725LL;

	t46 = (((x2453-x2454)|x2455)<<x2456);

	if (t46 != 430008LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2493 = UINT8_MAX;
	static int8_t x2495 = 1;

	t47 = (((x2493-x2494)|x2495)<<x2496);

	if (t47 != 54553251766272LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2505 = INT8_MIN;
	static uint64_t x2506 = 139771LLU;
	int64_t x2507 = -1LL;
	int8_t x2508 = 57;
	uint64_t t48 = 886485539LLU;

	t48 = (((x2505-x2506)|x2507)<<x2508);

	if (t48 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2517 = UINT64_MAX;
	volatile int16_t x2518 = -1;
	uint32_t x2519 = 0U;
	int64_t x2520 = 55LL;
	volatile uint64_t t49 = 73708891522910LLU;

	t49 = (((x2517-x2518)|x2519)<<x2520);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2577 = UINT32_MAX;
	static uint8_t x2578 = 78U;
	static volatile int16_t x2579 = 5;
	uint8_t x2580 = 4U;
	static uint32_t t50 = 78U;

	t50 = (((x2577-x2578)|x2579)<<x2580);

	if (t50 != 4294966096U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2591 = UINT64_MAX;
	volatile uint16_t x2592 = 0U;
	uint64_t t51 = UINT64_MAX;

	t51 = (((x2589-x2590)|x2591)<<x2592);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2613 = 473902697082LL;
	uint32_t x2615 = 99181516U;
	uint8_t x2616 = 2U;
	int64_t t52 = -186810LL;

	t52 = (((x2613-x2614)|x2615)<<x2616);

	if (t52 != 1895686320124LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2713 = 127171472449818868LLU;
	volatile int16_t x2714 = 0;
	volatile int32_t x2715 = 1;
	int8_t x2716 = 0;
	volatile uint64_t t53 = 696673306567505LLU;

	t53 = (((x2713-x2714)|x2715)<<x2716);

	if (t53 != 127171472449818869LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2741 = -1;
	uint8_t x2742 = UINT8_MAX;
	uint32_t x2743 = UINT32_MAX;
	static int16_t x2744 = 7;
	uint32_t t54 = 652517U;

	t54 = (((x2741-x2742)|x2743)<<x2744);

	if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2793 = UINT32_MAX;
	static uint8_t x2796 = 21U;
	static int64_t t55 = -8366246918LL;

	t55 = (((x2793-x2794)|x2795)<<x2796);

	if (t55 != 9007297116241920LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2865 = 13686LLU;
	volatile int32_t x2866 = -381;
	int16_t x2867 = -1;
	volatile uint64_t t56 = 1498379604733918060LLU;

	t56 = (((x2865-x2866)|x2867)<<x2868);

	if (t56 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2941 = 3;
	static uint32_t x2942 = 0U;
	static uint16_t x2943 = 227U;
	uint32_t x2944 = 2U;
	uint32_t t57 = 29617U;

	t57 = (((x2941-x2942)|x2943)<<x2944);

	if (t57 != 908U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x3005 = 970U;
	volatile int64_t x3007 = INT64_MIN;
	int64_t x3008 = 0LL;
	uint64_t t58 = 29LLU;

	t58 = (((x3005-x3006)|x3007)<<x3008);

	if (t58 != 9223372036854776779LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3069 = INT64_MAX;
	uint16_t x3072 = 0U;
	static int64_t t59 = INT64_MAX;

	t59 = (((x3069-x3070)|x3071)<<x3072);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3097 = -1;
	int16_t x3100 = 0;
	int64_t t60 = INT64_MAX;

	t60 = (((x3097-x3098)|x3099)<<x3100);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3145 = 4565788324549LLU;
	uint32_t x3146 = 28U;
	volatile uint8_t x3147 = 60U;
	uint64_t t61 = 103372491371607LLU;

	t61 = (((x3145-x3146)|x3147)<<x3148);

	if (t61 != 73052613192656LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3166 = -4;
	int64_t x3167 = 2213027183679369LL;
	volatile int8_t x3168 = 4;

	t62 = (((x3165-x3166)|x3167)<<x3168);

	if (t62 != 35408434938869936LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x3225 = 29U;
	uint64_t x3226 = 1236233628659LLU;
	static volatile int16_t x3227 = -191;
	volatile int64_t x3228 = 1LL;
	uint64_t t63 = 1LLU;

	t63 = (((x3225-x3226)|x3227)<<x3228);

	if (t63 != 18446744073709551318LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3277 = 3U;
	int64_t x3278 = -3069029895786370363LL;
	int32_t x3279 = INT32_MAX;
	int8_t x3280 = 0;
	static int64_t t64 = -44LL;

	t64 = (((x3277-x3278)|x3279)<<x3280);

	if (t64 != 3069029897809690623LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3305 = INT16_MIN;
	uint64_t x3306 = 403900LLU;
	static uint32_t x3308 = 1U;
	uint64_t t65 = 137LLU;

	t65 = (((x3305-x3306)|x3307)<<x3308);

	if (t65 != 18446744073708678348LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3461 = INT64_MAX;
	uint64_t x3462 = UINT64_MAX;
	uint8_t x3463 = 0U;
	uint16_t x3464 = 21U;

	t66 = (((x3461-x3462)|x3463)<<x3464);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3597 = -1;
	uint16_t x3598 = 13U;
	static uint32_t x3599 = UINT32_MAX;
	static uint8_t x3600 = 3U;
	uint32_t t67 = 751462479U;

	t67 = (((x3597-x3598)|x3599)<<x3600);

	if (t67 != 4294967288U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x3621 = 66LLU;
	int32_t x3622 = -1;
	int16_t x3623 = INT16_MIN;
	uint8_t x3624 = 7U;
	uint64_t t68 = 823238618060897188LLU;

	t68 = (((x3621-x3622)|x3623)<<x3624);

	if (t68 != 18446744073705365888LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3717 = -54;
	uint32_t x3718 = UINT32_MAX;
	int8_t x3719 = INT8_MIN;
	volatile uint8_t x3720 = 0U;

	t69 = (((x3717-x3718)|x3719)<<x3720);

	if (t69 != 4294967243U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3721 = 4602LLU;
	static uint16_t x3722 = 528U;
	volatile uint64_t x3723 = UINT64_MAX;
	int8_t x3724 = 2;
	uint64_t t70 = 724353623938115020LLU;

	t70 = (((x3721-x3722)|x3723)<<x3724);

	if (t70 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3745 = INT8_MAX;
	int16_t x3746 = 7664;
	volatile uint64_t x3747 = 3717209862389391LLU;
	uint8_t x3748 = 29U;
	uint64_t t71 = 0LLU;

	t71 = (((x3745-x3746)|x3747)<<x3748);

	if (t71 != 18446743875604185088LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3845 = -1831;
	int64_t x3846 = 5740131327LL;
	uint64_t x3847 = 96017LLU;
	volatile uint16_t x3848 = 0U;
	volatile uint64_t t72 = 2019612076LLU;

	t72 = (((x3845-x3846)|x3847)<<x3848);

	if (t72 != 18446744067969513435LLU) { NG(); } else { ; }
	
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


    return 0;
}


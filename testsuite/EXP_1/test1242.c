#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 5;
int64_t x9 = INT64_MAX;
volatile uint16_t x222 = 250U;
volatile int32_t t5 = 972;
volatile int32_t x357 = INT32_MAX;
int32_t t9 = -935;
static uint8_t x448 = 0U;
volatile uint32_t t11 = 32U;
volatile int64_t x457 = -50542549038202LL;
static int8_t x565 = -1;
int16_t x569 = 0;
int8_t x643 = 35;
uint32_t x700 = 6U;
int64_t x710 = INT64_MAX;
int8_t x754 = -1;
volatile int8_t x802 = INT8_MAX;
static int32_t x803 = 560694898;
volatile uint32_t x804 = 17U;
int64_t x871 = INT64_MIN;
volatile int64_t t28 = 170315LL;
uint8_t x879 = UINT8_MAX;
int32_t t29 = 746248478;
int32_t t30 = -3541405;
static int16_t x1022 = INT16_MAX;
int8_t x1030 = INT8_MIN;
int16_t x1043 = INT16_MIN;
uint8_t x1044 = 3U;
int8_t x1064 = 5;
volatile int64_t t35 = -1904LL;
int16_t x1076 = 1;
volatile uint8_t x1090 = UINT8_MAX;
uint8_t x1215 = 55U;
int64_t x1331 = INT64_MAX;
int8_t x1340 = 1;
int16_t x1382 = -1;
static int8_t x1384 = 3;
int32_t x1391 = INT32_MAX;
int8_t x1434 = -1;
static uint32_t t45 = 7513328U;
uint32_t x1565 = 9219U;
uint32_t x1613 = UINT32_MAX;
uint8_t x1633 = UINT8_MAX;
uint8_t x1641 = 1U;
static int64_t x1672 = 13LL;
int8_t x1830 = INT8_MIN;
int16_t x1993 = INT16_MAX;
volatile uint32_t t62 = 72666426U;
volatile uint64_t x2065 = 2293921076907952675LLU;
uint16_t x2072 = 0U;
uint32_t x2107 = 534996296U;
volatile int64_t x2154 = -1147120383LL;
int8_t x2225 = INT8_MIN;
volatile int64_t t68 = -31371690746674724LL;
volatile int16_t x2268 = 3;
uint8_t x2277 = UINT8_MAX;
volatile int32_t t71 = -1;
int8_t x2361 = 30;
int8_t x2371 = -4;
volatile uint32_t x2419 = 958U;
int8_t x2420 = 0;
int64_t x2431 = INT64_MIN;
static int8_t x2432 = 1;
uint8_t x2439 = UINT8_MAX;
uint16_t x2460 = 5U;
uint32_t x2515 = 35592334U;
volatile uint32_t t79 = 24146U;
uint32_t x2543 = UINT32_MAX;
int16_t x2557 = INT16_MIN;
int64_t x2577 = -1LL;
static uint64_t x2580 = 1LLU;
uint16_t x2592 = 6U;
int64_t x2618 = INT64_MIN;
volatile int32_t t86 = -15275000;
volatile uint64_t x2643 = UINT64_MAX;
int8_t x2644 = 32;
static volatile uint64_t t87 = 120132036330LLU;
uint64_t t92 = 16964LLU;
int32_t x2871 = INT32_MAX;
int8_t x2872 = 2;
volatile int8_t x2874 = INT8_MIN;
static volatile int32_t t96 = -23;
int8_t x2934 = -1;


void f0(void) {
	int8_t x1 = -4;
	static int64_t x2 = -1LL;
	int8_t x3 = 19;
	volatile int32_t t0 = -20;

	t0 = (((x1==x2)%x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	uint16_t x12 = 3U;
	int32_t t1 = 4;

	t1 = (((x9==x10)%x11)>>x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x21 = INT32_MAX;
	uint32_t x22 = 352108894U;
	uint32_t x23 = 1U;
	int16_t x24 = 3;
	volatile uint32_t t2 = 4U;

	t2 = (((x21==x22)%x23)>>x24);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 1409859285U;
	uint8_t x100 = 5U;
	static uint32_t t3 = 22584U;

	t3 = (((x97==x98)%x99)>>x100);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x118 = 179181LLU;
	static uint64_t x119 = 14928LLU;
	uint8_t x120 = 3U;
	uint64_t t4 = 1883228749528LLU;

	t4 = (((x117==x118)%x119)>>x120);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x221 = UINT16_MAX;
	uint8_t x223 = 1U;
	uint32_t x224 = 1U;

	t5 = (((x221==x222)%x223)>>x224);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x341 = 8;
	int32_t x342 = -8090653;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 7U;
	static volatile int32_t t6 = -383;

	t6 = (((x341==x342)%x343)>>x344);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x358 = INT64_MAX;
	uint32_t x359 = UINT32_MAX;
	uint32_t x360 = 5U;
	volatile uint32_t t7 = 14780047U;

	t7 = (((x357==x358)%x359)>>x360);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x421 = 3023U;
	int8_t x422 = -5;
	int8_t x423 = INT8_MAX;
	static uint64_t x424 = 3LLU;
	static int32_t t8 = -409;

	t8 = (((x421==x422)%x423)>>x424);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x437 = INT64_MAX;
	uint8_t x438 = 69U;
	volatile int32_t x439 = INT32_MIN;
	uint8_t x440 = 3U;

	t9 = (((x437==x438)%x439)>>x440);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x445 = 46834900;
	int32_t x446 = INT32_MIN;
	volatile int64_t x447 = -46658322721152LL;
	int64_t t10 = 2LL;

	t10 = (((x445==x446)%x447)>>x448);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x449 = 175U;
	static int8_t x450 = -10;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = 0U;

	t11 = (((x449==x450)%x451)>>x452);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x458 = INT32_MAX;
	static int32_t x459 = 198222037;
	int32_t x460 = 0;
	int32_t t12 = -24869;

	t12 = (((x457==x458)%x459)>>x460);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x477 = 517836;
	int32_t x478 = INT32_MAX;
	int8_t x479 = 30;
	static int8_t x480 = 5;
	volatile int32_t t13 = -25;

	t13 = (((x477==x478)%x479)>>x480);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x566 = INT32_MAX;
	int16_t x567 = -311;
	int8_t x568 = 9;
	int32_t t14 = -1405;

	t14 = (((x565==x566)%x567)>>x568);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x570 = INT64_MIN;
	int16_t x571 = -1;
	volatile uint32_t x572 = 0U;
	volatile int32_t t15 = 9616;

	t15 = (((x569==x570)%x571)>>x572);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x597 = 1;
	int8_t x598 = 0;
	static int64_t x599 = INT64_MIN;
	uint16_t x600 = 6U;
	volatile int64_t t16 = -39LL;

	t16 = (((x597==x598)%x599)>>x600);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x613 = 1264671408LLU;
	int32_t x614 = INT32_MAX;
	volatile int64_t x615 = -1525339476LL;
	int8_t x616 = 1;
	int64_t t17 = -1LL;

	t17 = (((x613==x614)%x615)>>x616);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x641 = UINT8_MAX;
	int64_t x642 = -1LL;
	static uint8_t x644 = 27U;
	volatile int32_t t18 = -461;

	t18 = (((x641==x642)%x643)>>x644);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x649 = INT16_MIN;
	uint16_t x650 = UINT16_MAX;
	static int32_t x651 = INT32_MIN;
	uint16_t x652 = 9U;
	volatile int32_t t19 = 76841149;

	t19 = (((x649==x650)%x651)>>x652);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x697 = 83U;
	static volatile int8_t x698 = -1;
	int8_t x699 = INT8_MIN;
	volatile int32_t t20 = -6829;

	t20 = (((x697==x698)%x699)>>x700);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x709 = -1;
	int32_t x711 = INT32_MIN;
	static uint8_t x712 = 15U;
	volatile int32_t t21 = 0;

	t21 = (((x709==x710)%x711)>>x712);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x713 = -1LL;
	int32_t x714 = INT32_MIN;
	volatile int32_t x715 = INT32_MAX;
	volatile int8_t x716 = 0;
	volatile int32_t t22 = -49853;

	t22 = (((x713==x714)%x715)>>x716);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x737 = -889;
	int64_t x738 = INT64_MIN;
	volatile int64_t x739 = -8492474840806323LL;
	static uint16_t x740 = 1U;
	volatile int64_t t23 = -14LL;

	t23 = (((x737==x738)%x739)>>x740);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x753 = 3U;
	uint16_t x755 = 191U;
	uint8_t x756 = 1U;
	static volatile int32_t t24 = -115974597;

	t24 = (((x753==x754)%x755)>>x756);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x797 = UINT8_MAX;
	int16_t x798 = 13;
	volatile int64_t x799 = -1LL;
	uint8_t x800 = 2U;
	static int64_t t25 = 5255376555LL;

	t25 = (((x797==x798)%x799)>>x800);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x801 = UINT64_MAX;
	int32_t t26 = -282304;

	t26 = (((x801==x802)%x803)>>x804);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x857 = -54;
	volatile int8_t x858 = -1;
	uint64_t x859 = 5784844072998327LLU;
	static int8_t x860 = 1;
	static uint64_t t27 = 1LLU;

	t27 = (((x857==x858)%x859)>>x860);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x869 = INT8_MIN;
	volatile int64_t x870 = INT64_MAX;
	static int64_t x872 = 0LL;

	t28 = (((x869==x870)%x871)>>x872);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x877 = 48U;
	int32_t x878 = -1;
	static uint8_t x880 = 1U;

	t29 = (((x877==x878)%x879)>>x880);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x901 = INT16_MIN;
	uint32_t x902 = UINT32_MAX;
	int8_t x903 = -1;
	uint16_t x904 = 4U;

	t30 = (((x901==x902)%x903)>>x904);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x985 = -1;
	uint32_t x986 = 37U;
	static uint64_t x987 = UINT64_MAX;
	volatile int8_t x988 = 31;
	volatile uint64_t t31 = 469325126229993645LLU;

	t31 = (((x985==x986)%x987)>>x988);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1021 = -1;
	uint8_t x1023 = 6U;
	uint16_t x1024 = 7U;
	int32_t t32 = -1445;

	t32 = (((x1021==x1022)%x1023)>>x1024);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1029 = UINT32_MAX;
	int32_t x1031 = INT32_MIN;
	uint8_t x1032 = 29U;
	int32_t t33 = -2777;

	t33 = (((x1029==x1030)%x1031)>>x1032);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1041 = INT32_MIN;
	static volatile int64_t x1042 = -1LL;
	volatile int32_t t34 = 0;

	t34 = (((x1041==x1042)%x1043)>>x1044);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1061 = INT8_MAX;
	uint16_t x1062 = 1687U;
	int64_t x1063 = -1LL;

	t35 = (((x1061==x1062)%x1063)>>x1064);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1073 = 64U;
	int16_t x1074 = 51;
	int32_t x1075 = 314892;
	int32_t t36 = -7;

	t36 = (((x1073==x1074)%x1075)>>x1076);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1089 = -1LL;
	static uint32_t x1091 = UINT32_MAX;
	static int8_t x1092 = 2;
	volatile uint32_t t37 = 77U;

	t37 = (((x1089==x1090)%x1091)>>x1092);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1109 = -1;
	int16_t x1110 = -47;
	volatile int16_t x1111 = 1;
	int8_t x1112 = 15;
	volatile int32_t t38 = 6;

	t38 = (((x1109==x1110)%x1111)>>x1112);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1213 = 1;
	uint64_t x1214 = 3322421645792LLU;
	int8_t x1216 = 0;
	volatile int32_t t39 = -4671984;

	t39 = (((x1213==x1214)%x1215)>>x1216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1237 = 309363264LLU;
	int64_t x1238 = -443498308512477LL;
	int32_t x1239 = 2041;
	int8_t x1240 = 10;
	static volatile int32_t t40 = 175169;

	t40 = (((x1237==x1238)%x1239)>>x1240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x1329 = INT16_MAX;
	uint8_t x1330 = 41U;
	uint8_t x1332 = 4U;
	volatile int64_t t41 = 922486820880667LL;

	t41 = (((x1329==x1330)%x1331)>>x1332);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1337 = -51426725;
	static uint64_t x1338 = 2363876281091390188LLU;
	volatile uint64_t x1339 = UINT64_MAX;
	volatile uint64_t t42 = 714LLU;

	t42 = (((x1337==x1338)%x1339)>>x1340);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1381 = INT64_MAX;
	uint64_t x1383 = UINT64_MAX;
	volatile uint64_t t43 = 243849055LLU;

	t43 = (((x1381==x1382)%x1383)>>x1384);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1389 = -1;
	static uint8_t x1390 = UINT8_MAX;
	static int16_t x1392 = 1;
	volatile int32_t t44 = -866111;

	t44 = (((x1389==x1390)%x1391)>>x1392);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1433 = 71401;
	uint32_t x1435 = 118237530U;
	uint16_t x1436 = 2U;

	t45 = (((x1433==x1434)%x1435)>>x1436);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x1537 = 0LLU;
	int64_t x1538 = INT64_MIN;
	uint32_t x1539 = 175152811U;
	volatile int16_t x1540 = 1;
	static uint32_t t46 = 22U;

	t46 = (((x1537==x1538)%x1539)>>x1540);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1566 = 1U;
	int64_t x1567 = INT64_MIN;
	int32_t x1568 = 0;
	int64_t t47 = 13122670803269LL;

	t47 = (((x1565==x1566)%x1567)>>x1568);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1614 = INT32_MIN;
	int8_t x1615 = INT8_MIN;
	uint8_t x1616 = 15U;
	volatile int32_t t48 = -2025;

	t48 = (((x1613==x1614)%x1615)>>x1616);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1634 = INT32_MIN;
	volatile int8_t x1635 = INT8_MAX;
	static uint16_t x1636 = 3U;
	volatile int32_t t49 = -40751;

	t49 = (((x1633==x1634)%x1635)>>x1636);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1642 = -1LL;
	uint16_t x1643 = 7U;
	int8_t x1644 = 0;
	int32_t t50 = 345;

	t50 = (((x1641==x1642)%x1643)>>x1644);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1661 = INT32_MIN;
	uint8_t x1662 = UINT8_MAX;
	volatile int8_t x1663 = INT8_MIN;
	volatile int16_t x1664 = 18;
	int32_t t51 = 2927799;

	t51 = (((x1661==x1662)%x1663)>>x1664);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1669 = INT64_MIN;
	int16_t x1670 = -1;
	int16_t x1671 = -1;
	volatile int32_t t52 = -51856190;

	t52 = (((x1669==x1670)%x1671)>>x1672);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x1697 = INT64_MIN;
	volatile int32_t x1698 = -36392595;
	static uint16_t x1699 = 2629U;
	int8_t x1700 = 2;
	volatile int32_t t53 = -157469;

	t53 = (((x1697==x1698)%x1699)>>x1700);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1737 = -46LL;
	int32_t x1738 = INT32_MAX;
	int32_t x1739 = INT32_MIN;
	uint8_t x1740 = 25U;
	volatile int32_t t54 = -121;

	t54 = (((x1737==x1738)%x1739)>>x1740);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1785 = -5087641720350LL;
	uint16_t x1786 = 6003U;
	static uint16_t x1787 = UINT16_MAX;
	uint16_t x1788 = 2U;
	static volatile int32_t t55 = 89340901;

	t55 = (((x1785==x1786)%x1787)>>x1788);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1829 = INT8_MIN;
	static int16_t x1831 = -6089;
	int8_t x1832 = 4;
	volatile int32_t t56 = -451371035;

	t56 = (((x1829==x1830)%x1831)>>x1832);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1869 = INT32_MIN;
	int16_t x1870 = INT16_MIN;
	int16_t x1871 = 11;
	static int8_t x1872 = 0;
	int32_t t57 = 84;

	t57 = (((x1869==x1870)%x1871)>>x1872);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1994 = 24U;
	uint8_t x1995 = 73U;
	uint16_t x1996 = 0U;
	static volatile int32_t t58 = 17673;

	t58 = (((x1993==x1994)%x1995)>>x1996);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x2001 = INT32_MIN;
	int64_t x2002 = INT64_MIN;
	int8_t x2003 = -1;
	int32_t x2004 = 6;
	int32_t t59 = -808540;

	t59 = (((x2001==x2002)%x2003)>>x2004);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2021 = 5;
	int64_t x2022 = -1LL;
	volatile uint16_t x2023 = UINT16_MAX;
	uint8_t x2024 = 4U;
	int32_t t60 = -112798;

	t60 = (((x2021==x2022)%x2023)>>x2024);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2033 = 64857416459294533LL;
	volatile uint16_t x2034 = 14U;
	static volatile int16_t x2035 = -4;
	static int8_t x2036 = 6;
	int32_t t61 = 0;

	t61 = (((x2033==x2034)%x2035)>>x2036);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2041 = INT8_MIN;
	int16_t x2042 = 3842;
	uint32_t x2043 = UINT32_MAX;
	int64_t x2044 = 24LL;

	t62 = (((x2041==x2042)%x2043)>>x2044);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2057 = INT16_MIN;
	volatile int64_t x2058 = -1LL;
	int16_t x2059 = INT16_MIN;
	volatile int64_t x2060 = 3LL;
	int32_t t63 = -14;

	t63 = (((x2057==x2058)%x2059)>>x2060);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2066 = INT32_MIN;
	static int16_t x2067 = 16362;
	uint8_t x2068 = 8U;
	int32_t t64 = -2959939;

	t64 = (((x2065==x2066)%x2067)>>x2068);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x2069 = INT16_MAX;
	uint32_t x2070 = 203083U;
	uint64_t x2071 = UINT64_MAX;
	volatile uint64_t t65 = 166LLU;

	t65 = (((x2069==x2070)%x2071)>>x2072);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2105 = -9464;
	int16_t x2106 = INT16_MAX;
	int32_t x2108 = 0;
	volatile uint32_t t66 = 239775961U;

	t66 = (((x2105==x2106)%x2107)>>x2108);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x2153 = 473042983U;
	uint8_t x2155 = 78U;
	uint8_t x2156 = 0U;
	int32_t t67 = 1;

	t67 = (((x2153==x2154)%x2155)>>x2156);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2226 = -1522LL;
	static volatile int64_t x2227 = INT64_MIN;
	static uint8_t x2228 = 29U;

	t68 = (((x2225==x2226)%x2227)>>x2228);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x2265 = UINT16_MAX;
	volatile int16_t x2266 = -1;
	int16_t x2267 = INT16_MIN;
	static int32_t t69 = -1;

	t69 = (((x2265==x2266)%x2267)>>x2268);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2278 = 12U;
	static int16_t x2279 = -1;
	uint8_t x2280 = 1U;
	static int32_t t70 = -3156;

	t70 = (((x2277==x2278)%x2279)>>x2280);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2357 = -21;
	static int8_t x2358 = INT8_MIN;
	volatile int16_t x2359 = INT16_MIN;
	uint32_t x2360 = 18U;

	t71 = (((x2357==x2358)%x2359)>>x2360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2362 = INT32_MIN;
	int8_t x2363 = -1;
	uint64_t x2364 = 0LLU;
	volatile int32_t t72 = -418565;

	t72 = (((x2361==x2362)%x2363)>>x2364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2369 = -6LL;
	volatile int64_t x2370 = -12092447LL;
	static uint32_t x2372 = 1U;
	int32_t t73 = 192;

	t73 = (((x2369==x2370)%x2371)>>x2372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2417 = -1;
	volatile uint8_t x2418 = UINT8_MAX;
	uint32_t t74 = 2099U;

	t74 = (((x2417==x2418)%x2419)>>x2420);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2429 = INT64_MIN;
	int64_t x2430 = -1003504034771LL;
	static int64_t t75 = -4427227036559006054LL;

	t75 = (((x2429==x2430)%x2431)>>x2432);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2437 = INT16_MAX;
	int16_t x2438 = -1;
	int32_t x2440 = 15;
	static int32_t t76 = 13;

	t76 = (((x2437==x2438)%x2439)>>x2440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2457 = INT8_MIN;
	int8_t x2458 = 0;
	volatile int8_t x2459 = 13;
	int32_t t77 = -24;

	t77 = (((x2457==x2458)%x2459)>>x2460);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2481 = -1LL;
	int32_t x2482 = INT32_MIN;
	int64_t x2483 = -1LL;
	uint32_t x2484 = 6U;
	volatile int64_t t78 = -16LL;

	t78 = (((x2481==x2482)%x2483)>>x2484);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x2513 = 118U;
	static int32_t x2514 = INT32_MAX;
	static volatile int8_t x2516 = 3;

	t79 = (((x2513==x2514)%x2515)>>x2516);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2537 = 3U;
	uint8_t x2538 = UINT8_MAX;
	volatile uint16_t x2539 = UINT16_MAX;
	uint32_t x2540 = 3U;
	static volatile int32_t t80 = 0;

	t80 = (((x2537==x2538)%x2539)>>x2540);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2541 = INT32_MAX;
	int16_t x2542 = 429;
	uint16_t x2544 = 2U;
	volatile uint32_t t81 = 33U;

	t81 = (((x2541==x2542)%x2543)>>x2544);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2558 = INT64_MAX;
	uint16_t x2559 = 4786U;
	static int8_t x2560 = 2;
	static volatile int32_t t82 = 1;

	t82 = (((x2557==x2558)%x2559)>>x2560);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2573 = INT16_MIN;
	int64_t x2574 = INT64_MIN;
	volatile uint64_t x2575 = UINT64_MAX;
	volatile uint16_t x2576 = 60U;
	uint64_t t83 = 616446112951919LLU;

	t83 = (((x2573==x2574)%x2575)>>x2576);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x2578 = INT16_MIN;
	int32_t x2579 = INT32_MIN;
	static int32_t t84 = -3400188;

	t84 = (((x2577==x2578)%x2579)>>x2580);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x2589 = INT8_MAX;
	uint32_t x2590 = 2U;
	int64_t x2591 = 202285LL;
	static int64_t t85 = 3736156878431LL;

	t85 = (((x2589==x2590)%x2591)>>x2592);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2617 = INT16_MAX;
	int8_t x2619 = INT8_MAX;
	int8_t x2620 = 1;

	t86 = (((x2617==x2618)%x2619)>>x2620);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2641 = INT32_MAX;
	int8_t x2642 = INT8_MIN;

	t87 = (((x2641==x2642)%x2643)>>x2644);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2649 = INT16_MAX;
	uint64_t x2650 = 2228738556LLU;
	volatile int8_t x2651 = INT8_MIN;
	volatile uint8_t x2652 = 22U;
	int32_t t88 = 2683901;

	t88 = (((x2649==x2650)%x2651)>>x2652);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2665 = 8;
	uint16_t x2666 = 1615U;
	uint16_t x2667 = 15U;
	volatile uint64_t x2668 = 1LLU;
	int32_t t89 = -245284;

	t89 = (((x2665==x2666)%x2667)>>x2668);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2685 = INT8_MIN;
	uint16_t x2686 = UINT16_MAX;
	int64_t x2687 = INT64_MAX;
	static uint8_t x2688 = 6U;
	volatile int64_t t90 = -8672932242951928LL;

	t90 = (((x2685==x2686)%x2687)>>x2688);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2713 = -5116;
	static int8_t x2714 = -1;
	static int64_t x2715 = -1LL;
	uint16_t x2716 = 6U;
	volatile int64_t t91 = 0LL;

	t91 = (((x2713==x2714)%x2715)>>x2716);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2781 = -35983280676944698LL;
	int16_t x2782 = -1;
	uint64_t x2783 = 14944335LLU;
	volatile uint8_t x2784 = 0U;

	t92 = (((x2781==x2782)%x2783)>>x2784);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2793 = INT16_MIN;
	int8_t x2794 = INT8_MIN;
	static int8_t x2795 = -13;
	uint32_t x2796 = 3U;
	volatile int32_t t93 = 140;

	t93 = (((x2793==x2794)%x2795)>>x2796);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2809 = -1LL;
	int8_t x2810 = -2;
	volatile uint8_t x2811 = 15U;
	static int16_t x2812 = 20;
	int32_t t94 = -31480924;

	t94 = (((x2809==x2810)%x2811)>>x2812);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2869 = INT16_MAX;
	int32_t x2870 = INT32_MIN;
	int32_t t95 = -43249287;

	t95 = (((x2869==x2870)%x2871)>>x2872);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2873 = UINT8_MAX;
	int8_t x2875 = 15;
	uint32_t x2876 = 2U;

	t96 = (((x2873==x2874)%x2875)>>x2876);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x2889 = UINT64_MAX;
	int16_t x2890 = -1;
	uint32_t x2891 = 59815143U;
	uint8_t x2892 = 0U;
	volatile uint32_t t97 = 167824541U;

	t97 = (((x2889==x2890)%x2891)>>x2892);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2933 = 192LLU;
	int64_t x2935 = INT64_MIN;
	uint8_t x2936 = 3U;
	int64_t t98 = 381142520646809LL;

	t98 = (((x2933==x2934)%x2935)>>x2936);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2945 = 730652;
	static volatile uint64_t x2946 = 44076594578LLU;
	volatile int8_t x2947 = 34;
	static int8_t x2948 = 0;
	volatile int32_t t99 = 3504834;

	t99 = (((x2945==x2946)%x2947)>>x2948);

	if (t99 != 0) { NG(); } else { ; }
	
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


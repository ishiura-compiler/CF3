#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x43 = INT16_MIN;
volatile int32_t x85 = 10;
int32_t t3 = -2;
volatile int64_t t4 = -202180103770776478LL;
int64_t x155 = -1LL;
int32_t x166 = 926478;
uint8_t x168 = 4U;
volatile int32_t t6 = -1873008;
static int32_t x194 = -6196971;
uint16_t x196 = 4U;
volatile int32_t t9 = -37;
volatile int64_t x253 = 12550323LL;
volatile uint64_t t12 = 791558785241049660LLU;
int64_t x357 = 93537041344LL;
static int32_t x358 = -1;
uint8_t x360 = 4U;
int64_t x402 = -16871013210160LL;
uint32_t x460 = 11U;
static uint8_t x476 = 1U;
int8_t x505 = 0;
uint64_t x507 = UINT64_MAX;
volatile uint64_t t17 = 325000067621LLU;
static uint8_t x525 = 1U;
uint16_t x528 = 3U;
uint64_t x585 = 466057324973LLU;
int32_t x586 = INT32_MAX;
volatile int64_t t20 = -3160017186411LL;
int16_t x675 = INT16_MIN;
volatile uint32_t t22 = 53529U;
volatile int16_t x743 = INT16_MIN;
int16_t x789 = INT16_MIN;
int64_t t26 = 144410LL;
static int32_t x803 = -2578412;
volatile int32_t t31 = 53;
int8_t x958 = INT8_MIN;
volatile int32_t t32 = -7252698;
static int32_t t35 = 168845276;
static uint8_t x1211 = 52U;
static uint16_t x1220 = 2U;
int16_t x1293 = 4;
int32_t t39 = 630407;
uint32_t x1344 = 3U;
volatile int16_t x1353 = INT16_MIN;
volatile int32_t t44 = -62839376;
static uint32_t x1559 = 2030U;
volatile int32_t t47 = 2925;
static int32_t x1783 = -61560457;
int8_t x1839 = -1;
uint8_t x1869 = 11U;
uint64_t t52 = 908LLU;
int16_t x1898 = -1;
volatile int32_t t54 = 7;
static int8_t x1967 = INT8_MAX;
static int8_t x1986 = -1;
uint8_t x1989 = 2U;
static volatile uint32_t x1990 = UINT32_MAX;
int32_t x2006 = -154;
int8_t x2015 = INT8_MIN;
uint32_t x2016 = 2U;
int8_t x2033 = -1;
static volatile int16_t x2070 = -1;
volatile int32_t t65 = 727;
int64_t x2106 = 114583050LL;
int8_t x2107 = 3;
volatile int32_t t68 = -150323;
int64_t x2137 = INT64_MAX;
uint16_t x2157 = UINT16_MAX;
uint64_t x2159 = 7543654LLU;
uint8_t x2160 = 10U;
uint8_t x2197 = UINT8_MAX;
uint32_t x2198 = 2627U;
uint64_t x2199 = 120LLU;
uint16_t x2280 = 5U;
static volatile int32_t t74 = -15863;
volatile uint8_t x2369 = UINT8_MAX;
uint64_t x2493 = UINT64_MAX;
uint64_t t86 = 70315546904501065LLU;
int64_t x2562 = 81LL;
static volatile int32_t t90 = -45463;
uint32_t x2705 = UINT32_MAX;
int8_t x2709 = -1;
uint64_t x2890 = 8862223852999023LLU;


void f0(void) {
	int64_t x5 = -22564674290LL;
	uint8_t x6 = 62U;
	uint8_t x7 = 27U;
	uint32_t x8 = 3U;
	int32_t t0 = 7;

	t0 = (((x5<x6)&x7)<<x8);

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	uint8_t x44 = 1U;
	volatile int32_t t1 = 57086086;

	t1 = (((x41<x42)&x43)<<x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x49 = -16548017;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = -1;
	uint32_t x52 = 1U;
	volatile int32_t t2 = -1006956717;

	t2 = (((x49<x50)&x51)<<x52);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x86 = 9;
	static volatile uint8_t x87 = UINT8_MAX;
	uint16_t x88 = 7U;

	t3 = (((x85<x86)&x87)<<x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x141 = 0;
	uint64_t x142 = 6543464196183480554LLU;
	volatile int64_t x143 = INT64_MIN;
	volatile uint8_t x144 = 6U;

	t4 = (((x141<x142)&x143)<<x144);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x153 = -1LL;
	volatile int32_t x154 = INT32_MAX;
	static uint8_t x156 = 14U;
	static int64_t t5 = -245160939715053LL;

	t5 = (((x153<x154)&x155)<<x156);

	if (t5 != 16384LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x167 = UINT8_MAX;

	t6 = (((x165<x166)&x167)<<x168);

	if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x177 = -14614;
	static uint8_t x178 = UINT8_MAX;
	volatile int32_t x179 = 362;
	static uint16_t x180 = 4U;
	int32_t t7 = 753365272;

	t7 = (((x177<x178)&x179)<<x180);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x193 = INT32_MIN;
	int32_t x195 = INT32_MIN;
	volatile int32_t t8 = -1;

	t8 = (((x193<x194)&x195)<<x196);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x237 = 619U;
	int32_t x238 = INT32_MAX;
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = 5LLU;

	t9 = (((x237<x238)&x239)<<x240);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x254 = 686771138378LLU;
	static int8_t x255 = INT8_MIN;
	uint8_t x256 = 1U;
	static volatile int32_t t10 = 448;

	t10 = (((x253<x254)&x255)<<x256);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x265 = 7U;
	volatile uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = INT8_MIN;
	uint8_t x268 = 6U;
	int32_t t11 = -177;

	t11 = (((x265<x266)&x267)<<x268);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x337 = 2854U;
	static volatile int8_t x338 = INT8_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = 1LL;

	t12 = (((x337<x338)&x339)<<x340);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x359 = INT16_MAX;
	volatile int32_t t13 = 45814019;

	t13 = (((x357<x358)&x359)<<x360);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x401 = 11127U;
	int8_t x403 = INT8_MAX;
	static uint64_t x404 = 0LLU;
	volatile int32_t t14 = 0;

	t14 = (((x401<x402)&x403)<<x404);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = -5;
	uint8_t x459 = 0U;
	volatile int32_t t15 = 1264;

	t15 = (((x457<x458)&x459)<<x460);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x473 = 1;
	int16_t x474 = -1;
	int64_t x475 = INT64_MIN;
	static volatile int64_t t16 = -121LL;

	t16 = (((x473<x474)&x475)<<x476);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x506 = INT16_MAX;
	static int8_t x508 = 3;

	t17 = (((x505<x506)&x507)<<x508);

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x526 = 172946U;
	int32_t x527 = INT32_MAX;
	volatile int32_t t18 = -163897844;

	t18 = (((x525<x526)&x527)<<x528);

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x587 = 6891LL;
	volatile uint8_t x588 = 3U;
	int64_t t19 = 1091080332096713LL;

	t19 = (((x585<x586)&x587)<<x588);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x653 = -24;
	volatile int32_t x654 = INT32_MAX;
	int64_t x655 = -280010644838176507LL;
	int64_t x656 = 0LL;

	t20 = (((x653<x654)&x655)<<x656);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x673 = -1LL;
	uint64_t x674 = 1232538596LLU;
	uint16_t x676 = 2U;
	volatile int32_t t21 = 271451682;

	t21 = (((x673<x674)&x675)<<x676);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x705 = INT8_MIN;
	static int64_t x706 = -27753LL;
	uint32_t x707 = 1370553487U;
	uint8_t x708 = 7U;

	t22 = (((x705<x706)&x707)<<x708);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x725 = 102363U;
	int16_t x726 = INT16_MAX;
	static uint16_t x727 = UINT16_MAX;
	volatile int8_t x728 = 0;
	volatile int32_t t23 = 14505;

	t23 = (((x725<x726)&x727)<<x728);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x741 = 1661622;
	int16_t x742 = INT16_MIN;
	static volatile uint16_t x744 = 1U;
	volatile int32_t t24 = -4580;

	t24 = (((x741<x742)&x743)<<x744);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x790 = -1;
	static volatile int64_t x791 = 1502436623817LL;
	volatile uint32_t x792 = 42U;
	volatile int64_t t25 = -34553047LL;

	t25 = (((x789<x790)&x791)<<x792);

	if (t25 != 4398046511104LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x797 = 972273508300160615LLU;
	static int32_t x798 = -1;
	int64_t x799 = -3159608331LL;
	uint8_t x800 = 5U;

	t26 = (((x797<x798)&x799)<<x800);

	if (t26 != 32LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x801 = 0;
	volatile int64_t x802 = INT64_MIN;
	static int16_t x804 = 0;
	volatile int32_t t27 = 387801;

	t27 = (((x801<x802)&x803)<<x804);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x869 = 4U;
	static int8_t x870 = INT8_MAX;
	volatile int8_t x871 = INT8_MIN;
	volatile uint64_t x872 = 15LLU;
	int32_t t28 = 1987653;

	t28 = (((x869<x870)&x871)<<x872);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x913 = 1;
	uint64_t x914 = 38538360LLU;
	uint32_t x915 = 1070367566U;
	uint8_t x916 = 1U;
	uint32_t t29 = 11731372U;

	t29 = (((x913<x914)&x915)<<x916);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x929 = INT64_MIN;
	uint64_t x930 = 78LLU;
	int32_t x931 = -18402;
	uint32_t x932 = 4U;
	volatile int32_t t30 = 25358;

	t30 = (((x929<x930)&x931)<<x932);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x953 = 455177794LLU;
	static int16_t x954 = INT16_MIN;
	volatile int32_t x955 = INT32_MIN;
	static uint8_t x956 = 0U;

	t31 = (((x953<x954)&x955)<<x956);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x957 = INT16_MIN;
	int32_t x959 = 3;
	uint32_t x960 = 2U;

	t32 = (((x957<x958)&x959)<<x960);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1057 = 131275106623728557LLU;
	uint64_t x1058 = UINT64_MAX;
	int32_t x1059 = -20085997;
	int8_t x1060 = 3;
	int32_t t33 = -121;

	t33 = (((x1057<x1058)&x1059)<<x1060);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1129 = 0LLU;
	int64_t x1130 = INT64_MIN;
	int64_t x1131 = -1LL;
	uint16_t x1132 = 0U;
	int64_t t34 = 33888195141LL;

	t34 = (((x1129<x1130)&x1131)<<x1132);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1189 = 0;
	uint8_t x1190 = UINT8_MAX;
	int16_t x1191 = INT16_MIN;
	volatile int16_t x1192 = 11;

	t35 = (((x1189<x1190)&x1191)<<x1192);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1209 = -1;
	int8_t x1210 = INT8_MIN;
	uint8_t x1212 = 4U;
	int32_t t36 = -80147;

	t36 = (((x1209<x1210)&x1211)<<x1212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1217 = 13;
	int64_t x1218 = 904362755667483LL;
	int64_t x1219 = INT64_MIN;
	static int64_t t37 = 1139LL;

	t37 = (((x1217<x1218)&x1219)<<x1220);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1241 = 13U;
	int32_t x1242 = INT32_MIN;
	int32_t x1243 = -1976;
	static int16_t x1244 = 24;
	int32_t t38 = -230507;

	t38 = (((x1241<x1242)&x1243)<<x1244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1294 = UINT64_MAX;
	int16_t x1295 = -1;
	volatile int32_t x1296 = 1;

	t39 = (((x1293<x1294)&x1295)<<x1296);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1313 = -1LL;
	static uint16_t x1314 = 15U;
	volatile int16_t x1315 = INT16_MAX;
	uint32_t x1316 = 6U;
	int32_t t40 = -246;

	t40 = (((x1313<x1314)&x1315)<<x1316);

	if (t40 != 64) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x1333 = INT16_MAX;
	int32_t x1334 = 29520677;
	int16_t x1335 = -1;
	volatile uint32_t x1336 = 0U;
	int32_t t41 = -14636;

	t41 = (((x1333<x1334)&x1335)<<x1336);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x1341 = 1612U;
	volatile int16_t x1342 = -1;
	volatile int32_t x1343 = -1;
	int32_t t42 = 650566;

	t42 = (((x1341<x1342)&x1343)<<x1344);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1354 = UINT16_MAX;
	uint16_t x1355 = UINT16_MAX;
	uint64_t x1356 = 13LLU;
	int32_t t43 = -3;

	t43 = (((x1353<x1354)&x1355)<<x1356);

	if (t43 != 8192) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1381 = 3756419435441369023LLU;
	uint64_t x1382 = 762241362893LLU;
	int8_t x1383 = INT8_MAX;
	int8_t x1384 = 5;

	t44 = (((x1381<x1382)&x1383)<<x1384);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1557 = 1U;
	int32_t x1558 = -880004228;
	int8_t x1560 = 0;
	static uint32_t t45 = 1U;

	t45 = (((x1557<x1558)&x1559)<<x1560);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1561 = 15U;
	uint16_t x1562 = UINT16_MAX;
	volatile int64_t x1563 = INT64_MIN;
	volatile int8_t x1564 = 1;
	volatile int64_t t46 = 5950739879LL;

	t46 = (((x1561<x1562)&x1563)<<x1564);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1733 = INT32_MIN;
	static int64_t x1734 = INT64_MIN;
	volatile int32_t x1735 = INT32_MIN;
	volatile int8_t x1736 = 21;

	t47 = (((x1733<x1734)&x1735)<<x1736);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1745 = -74024LL;
	static int16_t x1746 = INT16_MIN;
	uint16_t x1747 = 3813U;
	int16_t x1748 = 0;
	volatile int32_t t48 = -13138867;

	t48 = (((x1745<x1746)&x1747)<<x1748);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1753 = INT16_MIN;
	uint16_t x1754 = 678U;
	int64_t x1755 = -11023195LL;
	static uint8_t x1756 = 7U;
	static int64_t t49 = -656812056LL;

	t49 = (((x1753<x1754)&x1755)<<x1756);

	if (t49 != 128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1781 = 6LLU;
	int32_t x1782 = INT32_MIN;
	volatile uint64_t x1784 = 1LLU;
	volatile int32_t t50 = -900;

	t50 = (((x1781<x1782)&x1783)<<x1784);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1837 = -4;
	int64_t x1838 = 191LL;
	uint16_t x1840 = 0U;
	int32_t t51 = -28340;

	t51 = (((x1837<x1838)&x1839)<<x1840);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1870 = 77;
	uint64_t x1871 = UINT64_MAX;
	volatile uint8_t x1872 = 57U;

	t52 = (((x1869<x1870)&x1871)<<x1872);

	if (t52 != 144115188075855872LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x1873 = 25LL;
	volatile int64_t x1874 = INT64_MAX;
	int32_t x1875 = -1;
	volatile int32_t x1876 = 1;
	int32_t t53 = -34067;

	t53 = (((x1873<x1874)&x1875)<<x1876);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x1897 = INT8_MIN;
	volatile int8_t x1899 = INT8_MAX;
	static uint8_t x1900 = 1U;

	t54 = (((x1897<x1898)&x1899)<<x1900);

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1953 = UINT8_MAX;
	static volatile int32_t x1954 = -1385;
	int16_t x1955 = INT16_MAX;
	uint8_t x1956 = 3U;
	int32_t t55 = -1568;

	t55 = (((x1953<x1954)&x1955)<<x1956);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1965 = 6935900597LLU;
	volatile uint32_t x1966 = UINT32_MAX;
	int8_t x1968 = 11;
	int32_t t56 = 49491287;

	t56 = (((x1965<x1966)&x1967)<<x1968);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x1985 = 0;
	uint32_t x1987 = 71222U;
	uint16_t x1988 = 3U;
	static uint32_t t57 = 226554108U;

	t57 = (((x1985<x1986)&x1987)<<x1988);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1991 = 1;
	static volatile int8_t x1992 = 3;
	static int32_t t58 = 24776350;

	t58 = (((x1989<x1990)&x1991)<<x1992);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2005 = INT16_MAX;
	static int16_t x2007 = INT16_MIN;
	static int64_t x2008 = 0LL;
	volatile int32_t t59 = 11975;

	t59 = (((x2005<x2006)&x2007)<<x2008);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2013 = 16960129774142LLU;
	int32_t x2014 = -6;
	int32_t t60 = 52423070;

	t60 = (((x2013<x2014)&x2015)<<x2016);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2021 = INT16_MIN;
	static int16_t x2022 = -1;
	uint16_t x2023 = UINT16_MAX;
	uint16_t x2024 = 1U;
	int32_t t61 = -567668973;

	t61 = (((x2021<x2022)&x2023)<<x2024);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x2034 = 15256;
	uint64_t x2035 = 7082LLU;
	volatile int16_t x2036 = 0;
	static uint64_t t62 = 116593929LLU;

	t62 = (((x2033<x2034)&x2035)<<x2036);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2041 = 1;
	uint16_t x2042 = 0U;
	static volatile uint32_t x2043 = 29U;
	uint8_t x2044 = 15U;
	volatile uint32_t t63 = 205602U;

	t63 = (((x2041<x2042)&x2043)<<x2044);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2065 = 391;
	uint64_t x2066 = 153149LLU;
	int64_t x2067 = -4LL;
	uint8_t x2068 = 3U;
	volatile int64_t t64 = 3899217053358345992LL;

	t64 = (((x2065<x2066)&x2067)<<x2068);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x2069 = INT8_MIN;
	int16_t x2071 = INT16_MAX;
	uint16_t x2072 = 24U;

	t65 = (((x2069<x2070)&x2071)<<x2072);

	if (t65 != 16777216) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2077 = -43;
	int64_t x2078 = 2269658LL;
	int16_t x2079 = INT16_MAX;
	uint16_t x2080 = 14U;
	volatile int32_t t66 = 0;

	t66 = (((x2077<x2078)&x2079)<<x2080);

	if (t66 != 16384) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2085 = 3467;
	static volatile uint32_t x2086 = UINT32_MAX;
	int8_t x2087 = -1;
	uint8_t x2088 = 1U;
	int32_t t67 = -96271339;

	t67 = (((x2085<x2086)&x2087)<<x2088);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2105 = INT8_MIN;
	uint16_t x2108 = 1U;

	t68 = (((x2105<x2106)&x2107)<<x2108);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x2138 = -1LL;
	int16_t x2139 = 1;
	volatile uint8_t x2140 = 11U;
	volatile int32_t t69 = 93;

	t69 = (((x2137<x2138)&x2139)<<x2140);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x2158 = INT32_MAX;
	volatile uint64_t t70 = 2031652476LLU;

	t70 = (((x2157<x2158)&x2159)<<x2160);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x2200 = 40U;
	volatile uint64_t t71 = 800216094LLU;

	t71 = (((x2197<x2198)&x2199)<<x2200);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2221 = INT32_MIN;
	volatile uint32_t x2222 = UINT32_MAX;
	static int8_t x2223 = -1;
	uint16_t x2224 = 1U;
	int32_t t72 = 13189;

	t72 = (((x2221<x2222)&x2223)<<x2224);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2229 = INT16_MIN;
	int8_t x2230 = -55;
	static uint16_t x2231 = 10U;
	int8_t x2232 = 17;
	volatile int32_t t73 = 503559;

	t73 = (((x2229<x2230)&x2231)<<x2232);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2277 = INT16_MAX;
	volatile uint64_t x2278 = UINT64_MAX;
	uint16_t x2279 = UINT16_MAX;

	t74 = (((x2277<x2278)&x2279)<<x2280);

	if (t74 != 32) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x2345 = INT16_MIN;
	int32_t x2346 = 80;
	volatile int8_t x2347 = 14;
	static int8_t x2348 = 0;
	int32_t t75 = -305252;

	t75 = (((x2345<x2346)&x2347)<<x2348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2361 = UINT32_MAX;
	int64_t x2362 = -1LL;
	static uint64_t x2363 = 12LLU;
	static int16_t x2364 = 31;
	uint64_t t76 = 6888447538LLU;

	t76 = (((x2361<x2362)&x2363)<<x2364);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x2370 = 3491708968379803018LLU;
	volatile int16_t x2371 = INT16_MIN;
	volatile int16_t x2372 = 14;
	static int32_t t77 = -26200;

	t77 = (((x2369<x2370)&x2371)<<x2372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2381 = -1LL;
	int16_t x2382 = INT16_MAX;
	uint64_t x2383 = UINT64_MAX;
	static uint8_t x2384 = 30U;
	uint64_t t78 = 8345601LLU;

	t78 = (((x2381<x2382)&x2383)<<x2384);

	if (t78 != 1073741824LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x2385 = UINT64_MAX;
	uint8_t x2386 = UINT8_MAX;
	static uint16_t x2387 = 403U;
	int8_t x2388 = 17;
	volatile int32_t t79 = -1;

	t79 = (((x2385<x2386)&x2387)<<x2388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2393 = INT8_MAX;
	int8_t x2394 = INT8_MIN;
	int8_t x2395 = 22;
	static uint8_t x2396 = 1U;
	static int32_t t80 = -1570011;

	t80 = (((x2393<x2394)&x2395)<<x2396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2421 = -8;
	int32_t x2422 = INT32_MIN;
	static int32_t x2423 = 1;
	uint32_t x2424 = 0U;
	static int32_t t81 = -270;

	t81 = (((x2421<x2422)&x2423)<<x2424);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2441 = INT32_MIN;
	static volatile int32_t x2442 = -1;
	volatile int32_t x2443 = INT32_MIN;
	int8_t x2444 = 1;
	int32_t t82 = 30077806;

	t82 = (((x2441<x2442)&x2443)<<x2444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2445 = -29;
	int64_t x2446 = INT64_MIN;
	static volatile uint32_t x2447 = 941U;
	volatile uint16_t x2448 = 12U;
	volatile uint32_t t83 = 693258U;

	t83 = (((x2445<x2446)&x2447)<<x2448);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2494 = -1;
	uint8_t x2495 = 1U;
	uint64_t x2496 = 2LLU;
	int32_t t84 = 4;

	t84 = (((x2493<x2494)&x2495)<<x2496);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2505 = 2U;
	static int64_t x2506 = INT64_MIN;
	static uint64_t x2507 = 0LLU;
	uint8_t x2508 = 1U;
	static uint64_t t85 = 101150LLU;

	t85 = (((x2505<x2506)&x2507)<<x2508);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2541 = 1;
	int8_t x2542 = INT8_MIN;
	static volatile uint64_t x2543 = UINT64_MAX;
	volatile int8_t x2544 = 0;

	t86 = (((x2541<x2542)&x2543)<<x2544);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2561 = 28992;
	static int16_t x2563 = -1;
	volatile int8_t x2564 = 2;
	static int32_t t87 = 77892;

	t87 = (((x2561<x2562)&x2563)<<x2564);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2665 = INT32_MIN;
	int64_t x2666 = INT64_MAX;
	volatile int32_t x2667 = INT32_MIN;
	uint8_t x2668 = 7U;
	static int32_t t88 = -5020;

	t88 = (((x2665<x2666)&x2667)<<x2668);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2669 = 508191236794183707LLU;
	uint64_t x2670 = UINT64_MAX;
	static volatile uint64_t x2671 = UINT64_MAX;
	static volatile int8_t x2672 = 3;
	volatile uint64_t t89 = 6LLU;

	t89 = (((x2669<x2670)&x2671)<<x2672);

	if (t89 != 8LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x2677 = -1;
	int16_t x2678 = INT16_MAX;
	int8_t x2679 = 8;
	uint8_t x2680 = 2U;

	t90 = (((x2677<x2678)&x2679)<<x2680);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2685 = -574664;
	volatile int16_t x2686 = -1;
	volatile uint64_t x2687 = 44463807583LLU;
	uint8_t x2688 = 12U;
	volatile uint64_t t91 = 3301097991633713151LLU;

	t91 = (((x2685<x2686)&x2687)<<x2688);

	if (t91 != 4096LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2706 = UINT64_MAX;
	uint8_t x2707 = UINT8_MAX;
	uint8_t x2708 = 7U;
	static int32_t t92 = 813409;

	t92 = (((x2705<x2706)&x2707)<<x2708);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x2710 = INT64_MAX;
	int16_t x2711 = 408;
	int32_t x2712 = 5;
	int32_t t93 = 3217;

	t93 = (((x2709<x2710)&x2711)<<x2712);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x2793 = -107394934204LL;
	int16_t x2794 = -1;
	static int16_t x2795 = INT16_MAX;
	int32_t x2796 = 0;
	int32_t t94 = 0;

	t94 = (((x2793<x2794)&x2795)<<x2796);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2821 = 49U;
	static int64_t x2822 = -1LL;
	int8_t x2823 = -1;
	int8_t x2824 = 2;
	static volatile int32_t t95 = -32740;

	t95 = (((x2821<x2822)&x2823)<<x2824);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x2837 = 200LLU;
	int16_t x2838 = INT16_MIN;
	static int64_t x2839 = INT64_MIN;
	int8_t x2840 = 2;
	int64_t t96 = 649817601938LL;

	t96 = (((x2837<x2838)&x2839)<<x2840);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2865 = UINT32_MAX;
	int64_t x2866 = INT64_MIN;
	int64_t x2867 = INT64_MIN;
	uint32_t x2868 = 6U;
	int64_t t97 = -14069051165LL;

	t97 = (((x2865<x2866)&x2867)<<x2868);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x2889 = -4;
	static int64_t x2891 = INT64_MIN;
	static uint8_t x2892 = 5U;
	int64_t t98 = -41561934934LL;

	t98 = (((x2889<x2890)&x2891)<<x2892);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2893 = 6U;
	static int64_t x2894 = INT64_MAX;
	uint32_t x2895 = 83566U;
	volatile int16_t x2896 = 0;
	uint32_t t99 = 263233U;

	t99 = (((x2893<x2894)&x2895)<<x2896);

	if (t99 != 0U) { NG(); } else { ; }
	
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


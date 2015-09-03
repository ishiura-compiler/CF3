#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x197 = UINT8_MAX;
volatile int32_t t2 = 5;
int64_t x368 = INT64_MIN;
static int32_t x448 = INT32_MIN;
int8_t x534 = 0;
int32_t t9 = -4066;
uint8_t x590 = 0U;
int32_t x926 = 1;
volatile int8_t x981 = 7;
int8_t x983 = INT8_MAX;
static int32_t t17 = -1;
volatile uint8_t x1158 = 0U;
volatile uint16_t x1186 = 0U;
int64_t x1187 = INT64_MIN;
int32_t x1268 = INT32_MIN;
uint32_t x1346 = 13U;
int64_t x1347 = INT64_MIN;
uint16_t x1385 = UINT16_MAX;
static volatile uint32_t x1388 = 2728U;
static volatile int32_t t23 = 3;
uint32_t x1454 = 0U;
uint32_t x1464 = 29U;
volatile int64_t x1469 = INT64_MAX;
uint32_t x1470 = 61U;
volatile int8_t x1471 = INT8_MIN;
uint8_t x1585 = 6U;
static int32_t t27 = -865381426;
static uint64_t x1842 = 27LLU;
volatile int8_t x1844 = INT8_MIN;
int64_t x1937 = 109LL;
volatile int64_t t31 = -538427730917220LL;
int64_t x1971 = INT64_MIN;
int16_t x2005 = 0;
int8_t x2006 = 0;
static volatile int32_t t34 = -9902;
uint64_t x2073 = 868544432607469102LLU;
uint8_t x2075 = 3U;
uint32_t x2105 = UINT32_MAX;
int64_t x2108 = INT64_MIN;
volatile int32_t t39 = -350549367;
volatile uint16_t x2283 = 2203U;
int32_t t40 = 4351;
volatile int32_t t41 = 1;
static uint64_t t42 = 16262LLU;
int8_t x2483 = INT8_MIN;
volatile int64_t x2484 = INT64_MAX;
static uint8_t x2581 = 9U;
int64_t x2739 = -1LL;
uint64_t x2801 = UINT64_MAX;
static uint32_t x2816 = 192270U;
volatile int32_t x2891 = -27142;
int16_t x2892 = -474;
volatile uint64_t x3139 = 6616464076692LLU;
static int32_t x3182 = 3;
static int16_t x3183 = 1;
volatile uint32_t x3185 = 39U;
uint8_t x3187 = 24U;
uint64_t x3243 = 92156524LLU;
int8_t x3244 = -1;
volatile uint32_t t57 = 221585U;
uint16_t x3531 = 1U;
volatile uint64_t x3584 = UINT64_MAX;
int32_t t60 = 14;
uint8_t x3936 = 42U;
static uint32_t x4138 = 3U;
volatile int16_t x4192 = 15587;
uint64_t t64 = 25101917741LLU;
int8_t x4213 = INT8_MAX;
static int8_t x4216 = INT8_MAX;
int8_t x4332 = -1;
volatile int32_t t66 = 20810121;
int32_t x4416 = INT32_MAX;
static uint16_t x4572 = 0U;
static volatile uint64_t t69 = 1LLU;
int8_t x4758 = 25;
uint32_t t72 = 11875384U;
volatile int8_t x4901 = 17;
uint8_t x5138 = 6U;
static uint32_t x5139 = 1U;
static int32_t x5183 = -1;
int32_t x5235 = INT32_MIN;
volatile uint8_t x5250 = 15U;
static int32_t x5251 = INT32_MIN;
uint32_t x5273 = 13137052U;
static int16_t x5275 = INT16_MAX;
int8_t x5287 = 0;
volatile int64_t x5288 = 809994LL;
volatile uint64_t t81 = 2029278979185032LLU;
static volatile int32_t x5316 = INT32_MAX;
int32_t t82 = -45;
uint64_t x5413 = UINT64_MAX;
uint32_t x5415 = UINT32_MAX;
uint64_t t86 = 340568089697531496LLU;
volatile uint32_t x5517 = 120128U;
static volatile uint8_t x5562 = 1U;
volatile uint64_t t90 = 267333269588LLU;
int32_t t91 = 15;
int16_t x5591 = INT16_MAX;
int8_t x5625 = 0;
uint64_t x5885 = UINT64_MAX;
uint64_t x6158 = 1LLU;


void f0(void) {
	static uint64_t x129 = 420660558LLU;
	int8_t x130 = 1;
	volatile int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static uint64_t t0 = 4880787LLU;

	t0 = (x129>>(x130^(x131==x132)));

	if (t0 != 210330279LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x189 = 20;
	volatile int16_t x190 = 4;
	static uint16_t x191 = 3534U;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t1 = 75;

	t1 = (x189>>(x190^(x191==x192)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x198 = 5U;
	uint64_t x199 = 60416302719797853LLU;
	static int64_t x200 = INT64_MIN;

	t2 = (x197>>(x198^(x199==x200)));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x365 = 18868536;
	volatile uint16_t x366 = 2U;
	volatile int8_t x367 = INT8_MAX;
	volatile int32_t t3 = 1;

	t3 = (x365>>(x366^(x367==x368)));

	if (t3 != 4717134) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x373 = UINT32_MAX;
	static int32_t x374 = 5;
	static volatile int8_t x375 = 7;
	uint8_t x376 = UINT8_MAX;
	static volatile uint32_t t4 = 225497U;

	t4 = (x373>>(x374^(x375==x376)));

	if (t4 != 134217727U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x445 = 73U;
	volatile int16_t x446 = 21;
	int32_t x447 = -6212;
	volatile int32_t t5 = 4125597;

	t5 = (x445>>(x446^(x447==x448)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x473 = UINT8_MAX;
	uint8_t x474 = 3U;
	int8_t x475 = -51;
	static volatile uint16_t x476 = 334U;
	volatile int32_t t6 = 765965806;

	t6 = (x473>>(x474^(x475==x476)));

	if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x533 = 235859098;
	volatile int16_t x535 = INT16_MAX;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t7 = -113593744;

	t7 = (x533>>(x534^(x535==x536)));

	if (t7 != 235859098) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x541 = 23;
	static uint16_t x542 = 5U;
	volatile int64_t x543 = -1LL;
	volatile int16_t x544 = -15;
	volatile int32_t t8 = -739784029;

	t8 = (x541>>(x542^(x543==x544)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x577 = 109U;
	static uint16_t x578 = 7U;
	static int16_t x579 = 0;
	uint32_t x580 = 125735029U;

	t9 = (x577>>(x578^(x579==x580)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x589 = 367128U;
	int16_t x591 = INT16_MAX;
	volatile int8_t x592 = INT8_MAX;
	uint32_t t10 = 68U;

	t10 = (x589>>(x590^(x591==x592)));

	if (t10 != 367128U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x649 = INT32_MAX;
	uint8_t x650 = 1U;
	uint8_t x651 = 59U;
	int8_t x652 = 6;
	int32_t t11 = -700414;

	t11 = (x649>>(x650^(x651==x652)));

	if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x749 = 63U;
	int8_t x750 = 11;
	int64_t x751 = INT64_MIN;
	int64_t x752 = -6250LL;
	volatile int32_t t12 = 94042133;

	t12 = (x749>>(x750^(x751==x752)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x881 = 69U;
	int16_t x882 = 1;
	uint32_t x883 = UINT32_MAX;
	uint16_t x884 = 1U;
	int32_t t13 = 1;

	t13 = (x881>>(x882^(x883==x884)));

	if (t13 != 34) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x925 = 10871LL;
	int64_t x927 = INT64_MIN;
	int16_t x928 = -138;
	int64_t t14 = -10LL;

	t14 = (x925>>(x926^(x927==x928)));

	if (t14 != 5435LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x982 = 12U;
	volatile uint8_t x984 = 1U;
	volatile int32_t t15 = 1173;

	t15 = (x981>>(x982^(x983==x984)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1017 = UINT8_MAX;
	static uint8_t x1018 = 23U;
	volatile int16_t x1019 = INT16_MAX;
	int64_t x1020 = INT64_MAX;
	static int32_t t16 = -35;

	t16 = (x1017>>(x1018^(x1019==x1020)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1145 = UINT8_MAX;
	int16_t x1146 = 0;
	volatile int64_t x1147 = -1LL;
	int64_t x1148 = INT64_MIN;

	t17 = (x1145>>(x1146^(x1147==x1148)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1157 = 48;
	static int8_t x1159 = INT8_MIN;
	static int64_t x1160 = INT64_MAX;
	volatile int32_t t18 = 25384881;

	t18 = (x1157>>(x1158^(x1159==x1160)));

	if (t18 != 48) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1185 = INT8_MAX;
	int32_t x1188 = INT32_MIN;
	volatile int32_t t19 = 201;

	t19 = (x1185>>(x1186^(x1187==x1188)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1209 = 2;
	uint8_t x1210 = 2U;
	volatile int16_t x1211 = INT16_MAX;
	uint64_t x1212 = 0LLU;
	int32_t t20 = 118;

	t20 = (x1209>>(x1210^(x1211==x1212)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1265 = 48U;
	static int16_t x1266 = 0;
	int64_t x1267 = INT64_MAX;
	int32_t t21 = 30;

	t21 = (x1265>>(x1266^(x1267==x1268)));

	if (t21 != 48) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1345 = 193702962161758585LLU;
	static volatile int64_t x1348 = INT64_MIN;
	volatile uint64_t t22 = 42567809514813LLU;

	t22 = (x1345>>(x1346^(x1347==x1348)));

	if (t22 != 47290762246523LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1386 = 0;
	uint8_t x1387 = 40U;

	t23 = (x1385>>(x1386^(x1387==x1388)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1453 = 27023;
	uint32_t x1455 = 13469U;
	int32_t x1456 = INT32_MIN;
	static int32_t t24 = 21734519;

	t24 = (x1453>>(x1454^(x1455==x1456)));

	if (t24 != 27023) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1461 = INT8_MAX;
	static volatile int8_t x1462 = 1;
	volatile int16_t x1463 = INT16_MIN;
	volatile int32_t t25 = 1018779804;

	t25 = (x1461>>(x1462^(x1463==x1464)));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1472 = 202405462U;
	volatile int64_t t26 = 89LL;

	t26 = (x1469>>(x1470^(x1471==x1472)));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1586 = 0;
	static int8_t x1587 = 3;
	uint32_t x1588 = UINT32_MAX;

	t27 = (x1585>>(x1586^(x1587==x1588)));

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1601 = 68977;
	uint16_t x1602 = 8U;
	int8_t x1603 = INT8_MIN;
	int16_t x1604 = 230;
	int32_t t28 = 63969638;

	t28 = (x1601>>(x1602^(x1603==x1604)));

	if (t28 != 269) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1841 = 1870U;
	static uint16_t x1843 = 0U;
	static volatile int32_t t29 = 27293;

	t29 = (x1841>>(x1842^(x1843==x1844)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1849 = 1142400U;
	int32_t x1850 = 21;
	int16_t x1851 = -62;
	int16_t x1852 = INT16_MIN;
	uint32_t t30 = 138205241U;

	t30 = (x1849>>(x1850^(x1851==x1852)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1938 = 5;
	uint32_t x1939 = UINT32_MAX;
	int32_t x1940 = -1;

	t31 = (x1937>>(x1938^(x1939==x1940)));

	if (t31 != 6LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1969 = INT16_MAX;
	uint16_t x1970 = 6U;
	uint16_t x1972 = 1329U;
	volatile int32_t t32 = 6;

	t32 = (x1969>>(x1970^(x1971==x1972)));

	if (t32 != 511) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2007 = UINT32_MAX;
	volatile int16_t x2008 = -8114;
	static int32_t t33 = 170;

	t33 = (x2005>>(x2006^(x2007==x2008)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x2041 = UINT16_MAX;
	int8_t x2042 = 3;
	static uint8_t x2043 = 118U;
	uint16_t x2044 = UINT16_MAX;

	t34 = (x2041>>(x2042^(x2043==x2044)));

	if (t34 != 8191) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2074 = 58U;
	volatile int64_t x2076 = INT64_MIN;
	volatile uint64_t t35 = 8149409LLU;

	t35 = (x2073>>(x2074^(x2075==x2076)));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2106 = 24;
	int8_t x2107 = INT8_MAX;
	uint32_t t36 = 7U;

	t36 = (x2105>>(x2106^(x2107==x2108)));

	if (t36 != 255U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2197 = 0U;
	uint16_t x2198 = 7U;
	uint8_t x2199 = 49U;
	int32_t x2200 = INT32_MAX;
	int32_t t37 = -4057289;

	t37 = (x2197>>(x2198^(x2199==x2200)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2229 = 93U;
	uint16_t x2230 = 0U;
	volatile int64_t x2231 = INT64_MIN;
	int64_t x2232 = 18532141950472LL;
	static uint32_t t38 = 228U;

	t38 = (x2229>>(x2230^(x2231==x2232)));

	if (t38 != 93U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2253 = 7U;
	int8_t x2254 = 0;
	static int64_t x2255 = -87225286048LL;
	int8_t x2256 = INT8_MIN;

	t39 = (x2253>>(x2254^(x2255==x2256)));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2281 = 57U;
	static uint8_t x2282 = 1U;
	int64_t x2284 = INT64_MAX;

	t40 = (x2281>>(x2282^(x2283==x2284)));

	if (t40 != 28) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x2377 = 7173;
	int8_t x2378 = 22;
	int16_t x2379 = INT16_MIN;
	volatile int64_t x2380 = INT64_MIN;

	t41 = (x2377>>(x2378^(x2379==x2380)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x2417 = 174071164802LLU;
	int32_t x2418 = 1;
	static int8_t x2419 = INT8_MIN;
	int32_t x2420 = INT32_MAX;

	t42 = (x2417>>(x2418^(x2419==x2420)));

	if (t42 != 87035582401LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2477 = UINT64_MAX;
	volatile uint8_t x2478 = 27U;
	int8_t x2479 = -1;
	uint64_t x2480 = 671719354LLU;
	static volatile uint64_t t43 = 182067108997LLU;

	t43 = (x2477>>(x2478^(x2479==x2480)));

	if (t43 != 137438953471LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2481 = 7LLU;
	static uint8_t x2482 = 35U;
	uint64_t t44 = 317780733809669723LLU;

	t44 = (x2481>>(x2482^(x2483==x2484)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2582 = 1U;
	uint16_t x2583 = 3U;
	int16_t x2584 = 0;
	volatile int32_t t45 = 25163;

	t45 = (x2581>>(x2582^(x2583==x2584)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2625 = 10;
	uint8_t x2626 = 1U;
	volatile int64_t x2627 = -1LL;
	int8_t x2628 = -1;
	volatile int32_t t46 = -103388;

	t46 = (x2625>>(x2626^(x2627==x2628)));

	if (t46 != 10) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2737 = 0U;
	static volatile uint8_t x2738 = 10U;
	int8_t x2740 = INT8_MIN;
	uint32_t t47 = 20U;

	t47 = (x2737>>(x2738^(x2739==x2740)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2802 = 8U;
	uint8_t x2803 = UINT8_MAX;
	int32_t x2804 = 61;
	uint64_t t48 = 23329498038LLU;

	t48 = (x2801>>(x2802^(x2803==x2804)));

	if (t48 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2813 = UINT8_MAX;
	volatile uint8_t x2814 = 17U;
	volatile int64_t x2815 = -151234258700676027LL;
	static volatile int32_t t49 = 871076400;

	t49 = (x2813>>(x2814^(x2815==x2816)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2889 = 12;
	volatile uint32_t x2890 = 5U;
	volatile int32_t t50 = 16;

	t50 = (x2889>>(x2890^(x2891==x2892)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2973 = 1;
	volatile int8_t x2974 = 0;
	uint64_t x2975 = 16391400166551335LLU;
	uint16_t x2976 = UINT16_MAX;
	volatile int32_t t51 = 110;

	t51 = (x2973>>(x2974^(x2975==x2976)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3137 = 124120609974110390LLU;
	uint8_t x3138 = 23U;
	int32_t x3140 = 17409;
	static volatile uint64_t t52 = 1227162750657105881LLU;

	t52 = (x3137>>(x3138^(x3139==x3140)));

	if (t52 != 14796329733LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3181 = INT8_MAX;
	uint32_t x3184 = 120U;
	static int32_t t53 = -41803;

	t53 = (x3181>>(x3182^(x3183==x3184)));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3186 = 0;
	int64_t x3188 = INT64_MAX;
	uint32_t t54 = 1841770U;

	t54 = (x3185>>(x3186^(x3187==x3188)));

	if (t54 != 39U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3241 = 334U;
	static volatile uint16_t x3242 = 17U;
	volatile int32_t t55 = 20495;

	t55 = (x3241>>(x3242^(x3243==x3244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3321 = 1104988;
	uint8_t x3322 = 2U;
	uint64_t x3323 = UINT64_MAX;
	uint32_t x3324 = 8705U;
	int32_t t56 = 206871045;

	t56 = (x3321>>(x3322^(x3323==x3324)));

	if (t56 != 276247) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x3353 = 960449553U;
	int8_t x3354 = 1;
	static int32_t x3355 = INT32_MAX;
	static volatile int64_t x3356 = -1LL;

	t57 = (x3353>>(x3354^(x3355==x3356)));

	if (t57 != 480224776U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3529 = 53863478501LLU;
	int8_t x3530 = 3;
	int8_t x3532 = 11;
	uint64_t t58 = 1319172300369LLU;

	t58 = (x3529>>(x3530^(x3531==x3532)));

	if (t58 != 6732934812LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x3581 = UINT16_MAX;
	uint8_t x3582 = 0U;
	int32_t x3583 = -79305141;
	volatile int32_t t59 = -21;

	t59 = (x3581>>(x3582^(x3583==x3584)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x3629 = 9;
	int16_t x3630 = 1;
	uint8_t x3631 = 70U;
	int32_t x3632 = INT32_MIN;

	t60 = (x3629>>(x3630^(x3631==x3632)));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3933 = 38276310232LLU;
	static volatile int64_t x3934 = 2LL;
	int64_t x3935 = 37556268LL;
	static uint64_t t61 = 1960562LLU;

	t61 = (x3933>>(x3934^(x3935==x3936)));

	if (t61 != 9569077558LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4077 = UINT32_MAX;
	volatile uint8_t x4078 = 7U;
	static int64_t x4079 = -1LL;
	uint64_t x4080 = 3312394041LLU;
	volatile uint32_t t62 = 171460U;

	t62 = (x4077>>(x4078^(x4079==x4080)));

	if (t62 != 33554431U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4137 = 498459633U;
	volatile int16_t x4139 = INT16_MIN;
	volatile int8_t x4140 = INT8_MIN;
	uint32_t t63 = 17912024U;

	t63 = (x4137>>(x4138^(x4139==x4140)));

	if (t63 != 62307454U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4189 = 210680889312LLU;
	static int16_t x4190 = 1;
	int32_t x4191 = INT32_MIN;

	t64 = (x4189>>(x4190^(x4191==x4192)));

	if (t64 != 105340444656LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4214 = 12LLU;
	volatile int32_t x4215 = 77698607;
	volatile int32_t t65 = 31;

	t65 = (x4213>>(x4214^(x4215==x4216)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4329 = INT16_MAX;
	static uint8_t x4330 = 0U;
	int32_t x4331 = 187840;

	t66 = (x4329>>(x4330^(x4331==x4332)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x4373 = 5U;
	uint8_t x4374 = 0U;
	int16_t x4375 = -1;
	static int64_t x4376 = -13931420825431321LL;
	int32_t t67 = -2241;

	t67 = (x4373>>(x4374^(x4375==x4376)));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4413 = 327U;
	static int16_t x4414 = 3;
	static int32_t x4415 = 75;
	volatile int32_t t68 = -12061;

	t68 = (x4413>>(x4414^(x4415==x4416)));

	if (t68 != 40) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x4569 = 7LLU;
	volatile uint8_t x4570 = 50U;
	volatile int32_t x4571 = -1;

	t69 = (x4569>>(x4570^(x4571==x4572)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4597 = 10U;
	volatile uint8_t x4598 = 0U;
	static volatile int16_t x4599 = -1;
	int32_t x4600 = -115005;
	int32_t t70 = -20;

	t70 = (x4597>>(x4598^(x4599==x4600)));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x4757 = 2978;
	volatile uint32_t x4759 = 1264U;
	int32_t x4760 = -2077900;
	int32_t t71 = -260987;

	t71 = (x4757>>(x4758^(x4759==x4760)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4857 = 73U;
	volatile int8_t x4858 = 1;
	static uint8_t x4859 = UINT8_MAX;
	int8_t x4860 = -1;

	t72 = (x4857>>(x4858^(x4859==x4860)));

	if (t72 != 36U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4865 = INT32_MAX;
	volatile int8_t x4866 = 4;
	static uint8_t x4867 = 3U;
	int16_t x4868 = -16;
	static int32_t t73 = 289;

	t73 = (x4865>>(x4866^(x4867==x4868)));

	if (t73 != 134217727) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x4902 = 3;
	volatile int8_t x4903 = -1;
	static int16_t x4904 = INT16_MIN;
	volatile int32_t t74 = 9423;

	t74 = (x4901>>(x4902^(x4903==x4904)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4981 = 18U;
	static uint8_t x4982 = 7U;
	uint64_t x4983 = 1334978849287043862LLU;
	static uint16_t x4984 = 21U;
	static volatile int32_t t75 = 24;

	t75 = (x4981>>(x4982^(x4983==x4984)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x5137 = UINT8_MAX;
	int64_t x5140 = INT64_MAX;
	static volatile int32_t t76 = -349705;

	t76 = (x5137>>(x5138^(x5139==x5140)));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5181 = 5872623U;
	uint16_t x5182 = 3U;
	static int64_t x5184 = 5182739573LL;
	volatile uint32_t t77 = 617075U;

	t77 = (x5181>>(x5182^(x5183==x5184)));

	if (t77 != 734077U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x5233 = UINT8_MAX;
	static uint8_t x5234 = 12U;
	int32_t x5236 = 5076;
	int32_t t78 = -15;

	t78 = (x5233>>(x5234^(x5235==x5236)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x5249 = 4908919LL;
	static int8_t x5252 = INT8_MAX;
	volatile int64_t t79 = 2450451279625135LL;

	t79 = (x5249>>(x5250^(x5251==x5252)));

	if (t79 != 149LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x5274 = 14;
	int8_t x5276 = INT8_MIN;
	static volatile uint32_t t80 = 49U;

	t80 = (x5273>>(x5274^(x5275==x5276)));

	if (t80 != 801U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5285 = 2LLU;
	static volatile uint64_t x5286 = 3LLU;

	t81 = (x5285>>(x5286^(x5287==x5288)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x5313 = UINT8_MAX;
	uint16_t x5314 = 17U;
	volatile uint16_t x5315 = UINT16_MAX;

	t82 = (x5313>>(x5314^(x5315==x5316)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5325 = INT8_MAX;
	static int8_t x5326 = 1;
	uint32_t x5327 = UINT32_MAX;
	uint16_t x5328 = UINT16_MAX;
	volatile int32_t t83 = 838285346;

	t83 = (x5325>>(x5326^(x5327==x5328)));

	if (t83 != 63) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5377 = UINT8_MAX;
	int8_t x5378 = 0;
	static int64_t x5379 = INT64_MIN;
	volatile uint32_t x5380 = UINT32_MAX;
	int32_t t84 = -1;

	t84 = (x5377>>(x5378^(x5379==x5380)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x5414 = 4;
	uint8_t x5416 = 8U;
	volatile uint64_t t85 = 495443679811878LLU;

	t85 = (x5413>>(x5414^(x5415==x5416)));

	if (t85 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5497 = UINT64_MAX;
	volatile uint32_t x5498 = 20U;
	int32_t x5499 = 11054;
	volatile int32_t x5500 = INT32_MIN;

	t86 = (x5497>>(x5498^(x5499==x5500)));

	if (t86 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5518 = 1U;
	uint8_t x5519 = 59U;
	uint8_t x5520 = 0U;
	uint32_t t87 = 665759018U;

	t87 = (x5517>>(x5518^(x5519==x5520)));

	if (t87 != 60064U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5537 = 31U;
	int8_t x5538 = 0;
	static uint64_t x5539 = 157LLU;
	static int16_t x5540 = INT16_MIN;
	volatile int32_t t88 = 19159;

	t88 = (x5537>>(x5538^(x5539==x5540)));

	if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5545 = 6U;
	uint64_t x5546 = 17LLU;
	int32_t x5547 = -27;
	int32_t x5548 = -1;
	int32_t t89 = -419615;

	t89 = (x5545>>(x5546^(x5547==x5548)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x5561 = UINT64_MAX;
	int64_t x5563 = -1LL;
	int8_t x5564 = INT8_MIN;

	t90 = (x5561>>(x5562^(x5563==x5564)));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5569 = 1236;
	uint16_t x5570 = 5U;
	static uint32_t x5571 = 1703315110U;
	volatile uint8_t x5572 = UINT8_MAX;

	t91 = (x5569>>(x5570^(x5571==x5572)));

	if (t91 != 38) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x5589 = 1621961U;
	volatile uint32_t x5590 = 8U;
	uint16_t x5592 = 42U;
	uint32_t t92 = 244418U;

	t92 = (x5589>>(x5590^(x5591==x5592)));

	if (t92 != 6335U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5626 = 25;
	int32_t x5627 = INT32_MAX;
	int16_t x5628 = INT16_MIN;
	static volatile int32_t t93 = 785470231;

	t93 = (x5625>>(x5626^(x5627==x5628)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x5841 = INT16_MAX;
	volatile uint8_t x5842 = 0U;
	uint16_t x5843 = 2379U;
	int32_t x5844 = -25207;
	volatile int32_t t94 = 505;

	t94 = (x5841>>(x5842^(x5843==x5844)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5886 = 1U;
	int8_t x5887 = 0;
	uint8_t x5888 = 27U;
	volatile uint64_t t95 = 266454298LLU;

	t95 = (x5885>>(x5886^(x5887==x5888)));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5893 = 168517573142332824LLU;
	uint16_t x5894 = 13U;
	int8_t x5895 = 7;
	uint16_t x5896 = 20898U;
	volatile uint64_t t96 = 1LLU;

	t96 = (x5893>>(x5894^(x5895==x5896)));

	if (t96 != 20570992815226LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x6085 = 201U;
	uint8_t x6086 = 25U;
	int64_t x6087 = INT64_MIN;
	int32_t x6088 = -69121;
	int32_t t97 = 1;

	t97 = (x6085>>(x6086^(x6087==x6088)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6121 = UINT32_MAX;
	uint16_t x6122 = 26U;
	static int64_t x6123 = -2828760692378LL;
	uint16_t x6124 = UINT16_MAX;
	static volatile uint32_t t98 = 158U;

	t98 = (x6121>>(x6122^(x6123==x6124)));

	if (t98 != 63U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6157 = 1;
	int8_t x6159 = 34;
	uint64_t x6160 = 644390751058783486LLU;
	static volatile int32_t t99 = -19;

	t99 = (x6157>>(x6158^(x6159==x6160)));

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


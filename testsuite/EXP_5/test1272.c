#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x17 = 1304U;
volatile uint64_t x19 = UINT64_MAX;
static uint8_t x81 = UINT8_MAX;
int64_t x84 = 5LL;
int64_t t2 = -7389678LL;
int32_t t3 = -1086;
int32_t x324 = 1;
int16_t x342 = INT16_MIN;
static int8_t x344 = 8;
int8_t x371 = INT8_MIN;
volatile uint8_t x372 = 6U;
uint32_t t11 = 3U;
uint32_t x390 = 1186U;
volatile int32_t t13 = -6931204;
static volatile int32_t x401 = INT32_MAX;
int8_t x404 = 0;
int32_t t14 = 761403888;
volatile int64_t t15 = -97LL;
static int64_t x569 = -87043584105202LL;
int32_t x598 = INT32_MAX;
int16_t x633 = INT16_MAX;
uint64_t x634 = UINT64_MAX;
static int64_t t20 = 16807510792334136LL;
int32_t t22 = -864320;
volatile int16_t x758 = -1;
int64_t x809 = INT64_MIN;
int16_t x811 = INT16_MIN;
volatile uint8_t x812 = 10U;
volatile int64_t x834 = INT64_MIN;
int8_t x836 = 2;
static int32_t t26 = 1;
static volatile uint64_t t27 = 3LLU;
int8_t x893 = 4;
volatile int32_t x895 = -1;
uint8_t x896 = 1U;
int32_t x923 = INT32_MAX;
int32_t x1010 = -55;
uint8_t x1103 = 0U;
int16_t x1106 = -5;
volatile int32_t t35 = 2;
volatile int32_t t36 = -3654;
static int16_t x1130 = INT16_MIN;
static uint16_t x1141 = UINT16_MAX;
static int16_t x1144 = 27;
uint32_t x1216 = 4U;
static volatile int32_t t44 = 43;
static int16_t x1318 = INT16_MIN;
int8_t x1319 = -1;
static int16_t x1363 = INT16_MIN;
uint16_t x1424 = 2U;
static volatile int64_t t47 = -1690791259876547LL;
int64_t x1486 = -641491859LL;
static volatile uint32_t x1554 = 734296U;
volatile int64_t x1585 = 1440650156012545993LL;
uint32_t x1641 = UINT32_MAX;
int16_t x1643 = INT16_MAX;
volatile int32_t x1644 = 0;
static int8_t x1704 = 28;
static uint8_t x1839 = UINT8_MAX;
volatile uint16_t x1840 = 1U;
static volatile uint64_t x1861 = 624718829605282LLU;
static uint8_t x1864 = 2U;
static int32_t t62 = -144;
static int64_t x1890 = INT64_MIN;
volatile uint32_t t64 = 284U;
uint64_t x1897 = 13LLU;
uint16_t x1898 = 93U;
volatile uint64_t t65 = 22611043LLU;
int8_t x1901 = 0;
int64_t x1902 = -1584LL;
volatile uint8_t x1903 = 107U;
static int8_t x2001 = -1;
volatile int16_t x2068 = 14;
volatile int32_t t71 = 3711727;
uint8_t x2234 = 35U;
static uint16_t x2236 = 1U;
int16_t x2457 = INT16_MAX;
volatile uint64_t x2460 = 3LLU;
uint16_t x2469 = UINT16_MAX;
static uint64_t x2471 = UINT64_MAX;
volatile int64_t x2486 = INT64_MAX;
static int32_t x2487 = -1;
uint8_t x2488 = 7U;
volatile uint64_t t81 = 400268845171364759LLU;
uint8_t x2495 = UINT8_MAX;
int16_t x2496 = 1;
uint8_t x2520 = 3U;
uint8_t x2536 = 3U;
uint8_t x2544 = 20U;
uint8_t x2556 = 1U;
volatile int8_t x2574 = INT8_MIN;
volatile int32_t x2662 = INT32_MIN;
volatile int16_t x2667 = -1;
static volatile int64_t x2814 = INT64_MAX;
volatile uint32_t x2816 = 7U;
int32_t t91 = 374787;
static volatile int32_t t93 = 3;
static int16_t x2861 = INT16_MIN;
int8_t x2957 = INT8_MIN;
int8_t x2960 = 1;
int32_t t96 = 1835;
uint16_t x2967 = UINT16_MAX;
volatile int32_t t97 = 376137127;
uint16_t x2999 = 34U;
volatile int64_t t98 = 114LL;
static int64_t x3041 = INT64_MIN;


void f0(void) {
	uint32_t x18 = 222715944U;
	static uint32_t x20 = 18U;
	volatile int32_t t0 = -112;

	t0 = (x17&((x18==x19)>>x20));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x82 = INT32_MIN;
	static volatile int64_t x83 = 514266008LL;
	volatile int32_t t1 = -3686;

	t1 = (x81&((x82==x83)>>x84));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x109 = -1LL;
	int32_t x110 = -1;
	int64_t x111 = INT64_MIN;
	uint8_t x112 = 0U;

	t2 = (x109&((x110==x111)>>x112));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = 19261LL;
	int32_t x139 = -1;
	volatile uint8_t x140 = 3U;

	t3 = (x137&((x138==x139)>>x140));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x185 = INT64_MIN;
	static int8_t x186 = 22;
	int64_t x187 = INT64_MAX;
	static int64_t x188 = 0LL;
	int64_t t4 = -1050996545554598754LL;

	t4 = (x185&((x186==x187)>>x188));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x201 = UINT16_MAX;
	uint16_t x202 = 5U;
	uint32_t x203 = 162076659U;
	int8_t x204 = 0;
	volatile int32_t t5 = 1001;

	t5 = (x201&((x202==x203)>>x204));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint16_t x222 = 0U;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 1U;
	static volatile int32_t t6 = -678;

	t6 = (x221&((x222==x223)>>x224));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x289 = 1;
	uint8_t x290 = 44U;
	static int64_t x291 = -1LL;
	int8_t x292 = 23;
	volatile int32_t t7 = 1;

	t7 = (x289&((x290==x291)>>x292));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x321 = 736;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = INT64_MAX;
	int32_t t8 = 1;

	t8 = (x321&((x322==x323)>>x324));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x325 = -1;
	int64_t x326 = 1247915476128LL;
	static volatile int16_t x327 = -1;
	volatile uint8_t x328 = 31U;
	volatile int32_t t9 = 57669814;

	t9 = (x325&((x326==x327)>>x328));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x341 = 5351635U;
	uint64_t x343 = UINT64_MAX;
	volatile uint32_t t10 = 110553782U;

	t10 = (x341&((x342==x343)>>x344));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x369 = 843683757U;
	int64_t x370 = -60440320560636236LL;

	t11 = (x369&((x370==x371)>>x372));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x389 = 63U;
	int8_t x391 = 29;
	int8_t x392 = 4;
	volatile int32_t t12 = 1006622;

	t12 = (x389&((x390==x391)>>x392));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MAX;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = 1;

	t13 = (x397&((x398==x399)>>x400));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MIN;

	t14 = (x401&((x402==x403)>>x404));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x453 = -1LL;
	int64_t x454 = INT64_MIN;
	static int8_t x455 = 7;
	volatile int64_t x456 = 1LL;

	t15 = (x453&((x454==x455)>>x456));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x570 = UINT64_MAX;
	int32_t x571 = 35424;
	static int8_t x572 = 2;
	int64_t t16 = -2003432377489636777LL;

	t16 = (x569&((x570==x571)>>x572));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x597 = -68;
	int16_t x599 = -13;
	volatile uint16_t x600 = 5U;
	int32_t t17 = 4853667;

	t17 = (x597&((x598==x599)>>x600));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x609 = 76170;
	volatile uint64_t x610 = 12572578530604LLU;
	int32_t x611 = INT32_MIN;
	volatile uint16_t x612 = 2U;
	static int32_t t18 = 86621;

	t18 = (x609&((x610==x611)>>x612));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x635 = 435948328LL;
	uint8_t x636 = 1U;
	volatile int32_t t19 = -1;

	t19 = (x633&((x634==x635)>>x636));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x665 = INT64_MIN;
	uint64_t x666 = 806980745884LLU;
	volatile uint8_t x667 = 1U;
	uint8_t x668 = 24U;

	t20 = (x665&((x666==x667)>>x668));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x697 = 0;
	static uint32_t x698 = 240675U;
	int64_t x699 = -7650599LL;
	static uint16_t x700 = 6U;
	volatile int32_t t21 = 249667;

	t21 = (x697&((x698==x699)>>x700));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x709 = 297U;
	int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	static int8_t x712 = 0;

	t22 = (x709&((x710==x711)>>x712));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x733 = 8U;
	int8_t x734 = -7;
	volatile uint8_t x735 = 1U;
	uint32_t x736 = 0U;
	static int32_t t23 = 960297594;

	t23 = (x733&((x734==x735)>>x736));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x757 = UINT64_MAX;
	int64_t x759 = -1LL;
	uint16_t x760 = 4U;
	uint64_t t24 = 4216142314680237271LLU;

	t24 = (x757&((x758==x759)>>x760));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x810 = UINT8_MAX;
	int64_t t25 = 383LL;

	t25 = (x809&((x810==x811)>>x812));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x833 = 3;
	volatile int32_t x835 = INT32_MIN;

	t26 = (x833&((x834==x835)>>x836));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x841 = 74318391863754LLU;
	int32_t x842 = 0;
	int64_t x843 = INT64_MAX;
	int8_t x844 = 5;

	t27 = (x841&((x842==x843)>>x844));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x849 = 1U;
	static uint64_t x850 = 2103549014655LLU;
	int8_t x851 = 1;
	int8_t x852 = 4;
	volatile int32_t t28 = -1861;

	t28 = (x849&((x850==x851)>>x852));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x894 = INT64_MAX;
	int32_t t29 = -2799156;

	t29 = (x893&((x894==x895)>>x896));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x909 = UINT8_MAX;
	int8_t x910 = -1;
	static int32_t x911 = -1;
	int16_t x912 = 13;
	int32_t t30 = -236901;

	t30 = (x909&((x910==x911)>>x912));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x921 = UINT32_MAX;
	uint32_t x922 = UINT32_MAX;
	static volatile int8_t x924 = 1;
	uint32_t t31 = 22692U;

	t31 = (x921&((x922==x923)>>x924));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x981 = -1;
	static int16_t x982 = INT16_MIN;
	int8_t x983 = -1;
	int32_t x984 = 0;
	int32_t t32 = -1501;

	t32 = (x981&((x982==x983)>>x984));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1009 = INT16_MAX;
	volatile uint32_t x1011 = 4196U;
	uint16_t x1012 = 0U;
	int32_t t33 = -3473;

	t33 = (x1009&((x1010==x1011)>>x1012));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x1101 = UINT64_MAX;
	int32_t x1102 = 118;
	volatile uint32_t x1104 = 1U;
	uint64_t t34 = 276909461702437648LLU;

	t34 = (x1101&((x1102==x1103)>>x1104));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1105 = -22;
	static int16_t x1107 = -23;
	int8_t x1108 = 1;

	t35 = (x1105&((x1106==x1107)>>x1108));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1113 = UINT8_MAX;
	volatile int32_t x1114 = INT32_MIN;
	uint64_t x1115 = 1207244LLU;
	int16_t x1116 = 10;

	t36 = (x1113&((x1114==x1115)>>x1116));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1117 = UINT8_MAX;
	static int8_t x1118 = -1;
	int32_t x1119 = 560167502;
	uint8_t x1120 = 2U;
	int32_t t37 = 7521721;

	t37 = (x1117&((x1118==x1119)>>x1120));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1129 = INT32_MIN;
	static int64_t x1131 = INT64_MIN;
	int32_t x1132 = 1;
	volatile int32_t t38 = -438;

	t38 = (x1129&((x1130==x1131)>>x1132));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1142 = INT64_MIN;
	static uint64_t x1143 = 62960119385433LLU;
	int32_t t39 = 19;

	t39 = (x1141&((x1142==x1143)>>x1144));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1205 = -36183;
	static int32_t x1206 = -1040907733;
	int16_t x1207 = INT16_MIN;
	uint8_t x1208 = 3U;
	static volatile int32_t t40 = -9783191;

	t40 = (x1205&((x1206==x1207)>>x1208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1213 = 119916970U;
	static volatile int16_t x1214 = -1;
	volatile int32_t x1215 = -43363;
	volatile uint32_t t41 = 781U;

	t41 = (x1213&((x1214==x1215)>>x1216));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1261 = -2;
	uint16_t x1262 = UINT16_MAX;
	int64_t x1263 = -1LL;
	volatile int16_t x1264 = 6;
	int32_t t42 = -8155184;

	t42 = (x1261&((x1262==x1263)>>x1264));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1281 = -1039225LL;
	static volatile int16_t x1282 = -1;
	int64_t x1283 = INT64_MIN;
	static uint8_t x1284 = 0U;
	volatile int64_t t43 = -70830829LL;

	t43 = (x1281&((x1282==x1283)>>x1284));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1285 = 2526U;
	int16_t x1286 = 342;
	int32_t x1287 = -234486744;
	volatile uint8_t x1288 = 1U;

	t44 = (x1285&((x1286==x1287)>>x1288));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1317 = 2U;
	int8_t x1320 = 0;
	volatile int32_t t45 = 1;

	t45 = (x1317&((x1318==x1319)>>x1320));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1361 = 7676576499089LLU;
	int32_t x1362 = 98340;
	int16_t x1364 = 15;
	uint64_t t46 = 64721371080427421LLU;

	t46 = (x1361&((x1362==x1363)>>x1364));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1421 = INT64_MIN;
	static int16_t x1422 = -11;
	volatile int64_t x1423 = 1655075LL;

	t47 = (x1421&((x1422==x1423)>>x1424));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1469 = 5418287226LLU;
	int8_t x1470 = INT8_MIN;
	volatile int32_t x1471 = 9561;
	int32_t x1472 = 0;
	volatile uint64_t t48 = 5217LLU;

	t48 = (x1469&((x1470==x1471)>>x1472));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1485 = INT8_MIN;
	uint32_t x1487 = 2886410U;
	int16_t x1488 = 1;
	volatile int32_t t49 = 2797;

	t49 = (x1485&((x1486==x1487)>>x1488));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1533 = INT32_MIN;
	static volatile int64_t x1534 = 1720144LL;
	static uint64_t x1535 = UINT64_MAX;
	uint16_t x1536 = 6U;
	static volatile int32_t t50 = 6;

	t50 = (x1533&((x1534==x1535)>>x1536));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1537 = 69LL;
	int64_t x1538 = INT64_MIN;
	uint32_t x1539 = UINT32_MAX;
	static int16_t x1540 = 0;
	static int64_t t51 = 34292LL;

	t51 = (x1537&((x1538==x1539)>>x1540));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1553 = 1975528115219843LL;
	volatile int64_t x1555 = -23984530320003LL;
	int8_t x1556 = 8;
	static volatile int64_t t52 = -13LL;

	t52 = (x1553&((x1554==x1555)>>x1556));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x1586 = 196656786U;
	int32_t x1587 = -78740154;
	uint64_t x1588 = 3LLU;
	static int64_t t53 = 12646896496LL;

	t53 = (x1585&((x1586==x1587)>>x1588));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x1642 = INT8_MIN;
	uint32_t t54 = 57U;

	t54 = (x1641&((x1642==x1643)>>x1644));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x1701 = UINT32_MAX;
	static int64_t x1702 = INT64_MIN;
	int16_t x1703 = INT16_MAX;
	volatile uint32_t t55 = 1690865U;

	t55 = (x1701&((x1702==x1703)>>x1704));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1745 = 1;
	int64_t x1746 = INT64_MAX;
	int8_t x1747 = -1;
	static uint64_t x1748 = 4LLU;
	int32_t t56 = 490;

	t56 = (x1745&((x1746==x1747)>>x1748));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x1793 = INT32_MAX;
	int8_t x1794 = INT8_MAX;
	volatile uint8_t x1795 = 28U;
	static volatile int8_t x1796 = 24;
	int32_t t57 = 106361141;

	t57 = (x1793&((x1794==x1795)>>x1796));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1809 = -1;
	static int16_t x1810 = -12;
	uint16_t x1811 = 42U;
	int16_t x1812 = 3;
	volatile int32_t t58 = 32328;

	t58 = (x1809&((x1810==x1811)>>x1812));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x1825 = 277174459465697084LL;
	uint32_t x1826 = 2U;
	uint16_t x1827 = UINT16_MAX;
	uint8_t x1828 = 0U;
	int64_t t59 = 1008029167961759LL;

	t59 = (x1825&((x1826==x1827)>>x1828));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1837 = INT16_MIN;
	int16_t x1838 = 13369;
	int32_t t60 = -26;

	t60 = (x1837&((x1838==x1839)>>x1840));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1862 = INT32_MAX;
	volatile uint32_t x1863 = UINT32_MAX;
	volatile uint64_t t61 = 82427334339422LLU;

	t61 = (x1861&((x1862==x1863)>>x1864));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1869 = INT16_MIN;
	int8_t x1870 = -1;
	uint64_t x1871 = 129975897283642697LLU;
	int16_t x1872 = 13;

	t62 = (x1869&((x1870==x1871)>>x1872));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1885 = -851;
	int16_t x1886 = INT16_MIN;
	int64_t x1887 = INT64_MAX;
	volatile uint16_t x1888 = 4U;
	int32_t t63 = 31;

	t63 = (x1885&((x1886==x1887)>>x1888));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1889 = 6657U;
	int32_t x1891 = 784328;
	uint16_t x1892 = 1U;

	t64 = (x1889&((x1890==x1891)>>x1892));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1899 = 263536426LLU;
	uint8_t x1900 = 3U;

	t65 = (x1897&((x1898==x1899)>>x1900));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1904 = 13U;
	static volatile int32_t t66 = 18;

	t66 = (x1901&((x1902==x1903)>>x1904));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2002 = 260995394495703LLU;
	int8_t x2003 = 29;
	uint64_t x2004 = 1LLU;
	int32_t t67 = -1;

	t67 = (x2001&((x2002==x2003)>>x2004));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2005 = INT64_MAX;
	static int32_t x2006 = INT32_MIN;
	uint16_t x2007 = 0U;
	volatile uint8_t x2008 = 0U;
	static volatile int64_t t68 = -1797790838996940LL;

	t68 = (x2005&((x2006==x2007)>>x2008));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x2041 = 15117U;
	int16_t x2042 = 0;
	uint64_t x2043 = UINT64_MAX;
	int8_t x2044 = 1;
	uint32_t t69 = 1088230219U;

	t69 = (x2041&((x2042==x2043)>>x2044));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2065 = -1021;
	static int8_t x2066 = INT8_MIN;
	int16_t x2067 = -2714;
	int32_t t70 = 7792;

	t70 = (x2065&((x2066==x2067)>>x2068));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x2069 = INT16_MIN;
	static uint32_t x2070 = 102U;
	int64_t x2071 = INT64_MIN;
	int32_t x2072 = 2;

	t71 = (x2069&((x2070==x2071)>>x2072));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x2125 = INT16_MIN;
	uint8_t x2126 = 87U;
	int64_t x2127 = INT64_MIN;
	static int8_t x2128 = 6;
	static int32_t t72 = -46;

	t72 = (x2125&((x2126==x2127)>>x2128));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x2225 = INT32_MAX;
	static uint8_t x2226 = UINT8_MAX;
	int16_t x2227 = -1;
	int8_t x2228 = 1;
	static int32_t t73 = -21581109;

	t73 = (x2225&((x2226==x2227)>>x2228));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2233 = INT16_MIN;
	volatile int16_t x2235 = INT16_MAX;
	int32_t t74 = -9262478;

	t74 = (x2233&((x2234==x2235)>>x2236));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2273 = 62U;
	int64_t x2274 = INT64_MIN;
	int16_t x2275 = INT16_MIN;
	int32_t x2276 = 3;
	volatile int32_t t75 = 0;

	t75 = (x2273&((x2274==x2275)>>x2276));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2365 = -1;
	uint64_t x2366 = 903LLU;
	int16_t x2367 = INT16_MAX;
	volatile uint16_t x2368 = 7U;
	volatile int32_t t76 = -47822;

	t76 = (x2365&((x2366==x2367)>>x2368));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2373 = -2;
	static uint32_t x2374 = UINT32_MAX;
	static uint8_t x2375 = 6U;
	uint8_t x2376 = 0U;
	volatile int32_t t77 = -195149;

	t77 = (x2373&((x2374==x2375)>>x2376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2405 = 746287867553209036LLU;
	volatile uint16_t x2406 = 255U;
	uint32_t x2407 = 66U;
	volatile int8_t x2408 = 29;
	volatile uint64_t t78 = 323966395016120LLU;

	t78 = (x2405&((x2406==x2407)>>x2408));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2458 = INT8_MIN;
	static int16_t x2459 = INT16_MIN;
	int32_t t79 = 12314795;

	t79 = (x2457&((x2458==x2459)>>x2460));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2470 = UINT8_MAX;
	uint8_t x2472 = 16U;
	int32_t t80 = -1;

	t80 = (x2469&((x2470==x2471)>>x2472));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2485 = 6743753549308LLU;

	t81 = (x2485&((x2486==x2487)>>x2488));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2493 = -36;
	static uint32_t x2494 = 1382U;
	int32_t t82 = -481219951;

	t82 = (x2493&((x2494==x2495)>>x2496));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x2517 = INT16_MIN;
	uint64_t x2518 = UINT64_MAX;
	uint16_t x2519 = 743U;
	int32_t t83 = 723148;

	t83 = (x2517&((x2518==x2519)>>x2520));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x2533 = UINT8_MAX;
	int8_t x2534 = -1;
	int32_t x2535 = -281;
	int32_t t84 = 25274;

	t84 = (x2533&((x2534==x2535)>>x2536));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2541 = -1LL;
	static int8_t x2542 = INT8_MAX;
	static volatile int8_t x2543 = INT8_MAX;
	static int64_t t85 = 33195951223577LL;

	t85 = (x2541&((x2542==x2543)>>x2544));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2553 = INT16_MIN;
	static int32_t x2554 = -1;
	static int64_t x2555 = INT64_MIN;
	int32_t t86 = -33;

	t86 = (x2553&((x2554==x2555)>>x2556));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2573 = UINT64_MAX;
	static volatile int32_t x2575 = 91839;
	volatile uint16_t x2576 = 4U;
	volatile uint64_t t87 = 134140543706808LLU;

	t87 = (x2573&((x2574==x2575)>>x2576));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2661 = 2U;
	int8_t x2663 = INT8_MIN;
	static uint16_t x2664 = 2U;
	uint32_t t88 = 57559619U;

	t88 = (x2661&((x2662==x2663)>>x2664));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2665 = 21231;
	uint16_t x2666 = 303U;
	uint8_t x2668 = 1U;
	volatile int32_t t89 = -3;

	t89 = (x2665&((x2666==x2667)>>x2668));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2813 = INT64_MIN;
	uint64_t x2815 = 581056213901287LLU;
	static int64_t t90 = -31067584592LL;

	t90 = (x2813&((x2814==x2815)>>x2816));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2821 = -1;
	int64_t x2822 = -256852519897LL;
	int64_t x2823 = -1LL;
	uint8_t x2824 = 4U;

	t91 = (x2821&((x2822==x2823)>>x2824));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2837 = INT8_MIN;
	static int8_t x2838 = -1;
	volatile int64_t x2839 = 155394862850665LL;
	volatile uint8_t x2840 = 15U;
	volatile int32_t t92 = 28136;

	t92 = (x2837&((x2838==x2839)>>x2840));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x2841 = INT32_MIN;
	static uint16_t x2842 = UINT16_MAX;
	volatile uint32_t x2843 = 12926565U;
	uint8_t x2844 = 1U;

	t93 = (x2841&((x2842==x2843)>>x2844));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x2862 = INT64_MAX;
	int16_t x2863 = INT16_MIN;
	int8_t x2864 = 0;
	static int32_t t94 = -11853;

	t94 = (x2861&((x2862==x2863)>>x2864));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2889 = UINT8_MAX;
	uint8_t x2890 = 1U;
	volatile int8_t x2891 = INT8_MIN;
	static int8_t x2892 = 2;
	volatile int32_t t95 = -64750963;

	t95 = (x2889&((x2890==x2891)>>x2892));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2958 = 3798U;
	int8_t x2959 = INT8_MIN;

	t96 = (x2957&((x2958==x2959)>>x2960));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2965 = INT16_MAX;
	int8_t x2966 = INT8_MAX;
	volatile uint16_t x2968 = 0U;

	t97 = (x2965&((x2966==x2967)>>x2968));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2997 = -1LL;
	int32_t x2998 = INT32_MIN;
	int8_t x3000 = 1;

	t98 = (x2997&((x2998==x2999)>>x3000));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3042 = 74U;
	static int8_t x3043 = -28;
	int8_t x3044 = 0;
	volatile int64_t t99 = 48LL;

	t99 = (x3041&((x3042==x3043)>>x3044));

	if (t99 != 0LL) { NG(); } else { ; }
	
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


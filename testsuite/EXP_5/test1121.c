#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 15437U;
uint16_t x30 = 22418U;
static volatile int32_t x32 = INT32_MAX;
volatile uint64_t t3 = UINT64_MAX;
static int64_t x217 = INT64_MIN;
static uint64_t x219 = 14LLU;
uint16_t x231 = 20U;
int64_t x232 = 188LL;
volatile uint64_t t5 = 1931160LLU;
int8_t x289 = -1;
uint8_t x292 = 10U;
static int64_t x409 = INT64_MIN;
uint8_t x410 = 0U;
volatile int64_t t9 = INT64_MIN;
int8_t x427 = 0;
int64_t x437 = -1LL;
uint8_t x440 = 0U;
static int32_t x497 = INT32_MAX;
volatile int16_t x500 = INT16_MIN;
static int16_t x593 = -1;
int64_t x609 = INT64_MIN;
uint8_t x615 = 3U;
int64_t x616 = INT64_MIN;
volatile int64_t t17 = -11728639877LL;
int16_t x751 = 1;
uint64_t t19 = 256568010545250LLU;
volatile uint64_t x923 = 0LLU;
uint8_t x997 = 61U;
int32_t x1000 = INT32_MIN;
static volatile int32_t t23 = 4;
uint64_t x1149 = UINT64_MAX;
uint32_t x1150 = 330538U;
uint64_t t24 = UINT64_MAX;
uint16_t x1321 = 6816U;
static volatile int32_t t27 = 112;
uint64_t x1369 = UINT64_MAX;
int16_t x1392 = INT16_MAX;
static volatile int32_t t29 = 1540;
int64_t x1401 = -1LL;
static volatile int32_t t31 = -40086060;
volatile uint32_t t32 = 22520824U;
int32_t x1622 = INT32_MAX;
int32_t x1624 = 30391181;
int8_t x1681 = INT8_MIN;
volatile int64_t x1757 = -1LL;
int64_t x1758 = 14LL;
uint8_t x1931 = 2U;
volatile uint16_t x1934 = 878U;
static int64_t x1945 = INT64_MAX;
int16_t x1947 = 1;
uint32_t x1948 = 21U;
uint8_t x1955 = 6U;
int64_t x1989 = INT64_MAX;
static uint16_t x2011 = 4U;
uint64_t t43 = 69206477279LLU;
volatile int16_t x2201 = 0;
int8_t x2204 = 14;
int64_t x2237 = 127410LL;
volatile int32_t t47 = 682726;
static int32_t x2552 = INT32_MIN;
int32_t x2629 = INT32_MIN;
uint16_t x2630 = 1588U;
int32_t x2631 = 0;
uint8_t x2687 = 0U;
static int8_t x2873 = 27;
uint32_t x2876 = UINT32_MAX;
uint8_t x3140 = 0U;
int32_t t56 = -24069;
uint32_t x3350 = 319969669U;
uint16_t x3396 = 319U;
uint32_t x3449 = 3U;
volatile uint32_t t62 = 15295417U;
uint32_t x3492 = 157910U;
static uint8_t x3563 = 0U;
volatile int64_t t65 = -463LL;
uint32_t x3629 = 64U;
static uint8_t x3630 = UINT8_MAX;
int8_t x3631 = 3;
volatile uint32_t x3632 = 1U;
int32_t x3733 = -1029;
uint64_t x3912 = 348473LLU;
volatile uint16_t x3921 = UINT16_MAX;
int32_t x3923 = 59;
int32_t x3933 = -1;
int16_t x3936 = INT16_MIN;
uint64_t x4177 = 77LLU;
static uint8_t x4179 = 50U;
uint32_t x4201 = 2U;
static uint16_t x4205 = UINT16_MAX;
uint32_t x4231 = 0U;
int16_t x4315 = 1;
int8_t x4406 = INT8_MAX;
int16_t x4604 = INT16_MIN;
volatile int32_t t83 = -529539056;
volatile uint32_t t84 = 233U;
uint8_t x4657 = 8U;
volatile int32_t t85 = 3;
volatile int32_t t86 = 66;
volatile uint8_t x4739 = 3U;
static int32_t t87 = -8881401;
volatile int8_t x4852 = INT8_MIN;
volatile int8_t x5000 = INT8_MIN;
uint32_t x5047 = 11U;
uint32_t t91 = 193U;
volatile int8_t x5118 = 60;
int64_t t93 = INT64_MAX;
int32_t t94 = 37;
uint32_t x5256 = 1878096706U;
volatile int32_t x5444 = -27157;
int32_t x5638 = 243;
static uint16_t x5639 = 1U;


void f0(void) {
	int8_t x5 = -1;
	int32_t x7 = 1;
	int64_t x8 = -967546834653412760LL;
	int32_t t0 = 3094962;

	t0 = (x5*((x6>>x7)<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x29 = 36U;
	uint8_t x31 = 14U;
	volatile int32_t t1 = 10792;

	t1 = (x29*((x30>>x31)<x32));

	if (t1 != 36) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = INT32_MIN;
	static volatile int8_t x54 = INT8_MAX;
	volatile uint8_t x55 = 10U;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t2 = -74459;

	t2 = (x53*((x54>>x55)<x56));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x161 = UINT64_MAX;
	static volatile int32_t x162 = 0;
	uint32_t x163 = 8U;
	uint64_t x164 = UINT64_MAX;

	t3 = (x161*((x162>>x163)<x164));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x218 = INT32_MAX;
	int32_t x220 = -1;
	int64_t t4 = 1LL;

	t4 = (x217*((x218>>x219)<x220));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x229 = 10519648320LLU;
	int8_t x230 = INT8_MAX;

	t5 = (x229*((x230>>x231)<x232));

	if (t5 != 10519648320LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x290 = INT32_MAX;
	static int64_t x291 = 1LL;
	int32_t t6 = 29727435;

	t6 = (x289*((x290>>x291)<x292));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x333 = 60306807847LLU;
	int64_t x334 = INT64_MAX;
	uint32_t x335 = 5U;
	int64_t x336 = -48790753LL;
	volatile uint64_t t7 = 1LLU;

	t7 = (x333*((x334>>x335)<x336));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x353 = 58U;
	int8_t x354 = INT8_MAX;
	int8_t x355 = 0;
	volatile uint8_t x356 = 15U;
	volatile uint32_t t8 = 1299U;

	t8 = (x353*((x354>>x355)<x356));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x411 = 5U;
	volatile int64_t x412 = INT64_MAX;

	t9 = (x409*((x410>>x411)<x412));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x425 = 66156655LL;
	int16_t x426 = INT16_MAX;
	volatile uint64_t x428 = 13814265766862LLU;
	int64_t t10 = 329115140LL;

	t10 = (x425*((x426>>x427)<x428));

	if (t10 != 66156655LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x438 = 18633343U;
	volatile int16_t x439 = 0;
	volatile int64_t t11 = -38765865753LL;

	t11 = (x437*((x438>>x439)<x440));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x498 = 14283U;
	int8_t x499 = 6;
	static int32_t t12 = 26;

	t12 = (x497*((x498>>x499)<x500));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x577 = 68918249LLU;
	volatile uint16_t x578 = 4U;
	uint32_t x579 = 0U;
	uint32_t x580 = 1U;
	volatile uint64_t t13 = 8854783294514447872LLU;

	t13 = (x577*((x578>>x579)<x580));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x594 = 33U;
	volatile int8_t x595 = 2;
	int8_t x596 = -3;
	volatile int32_t t14 = -5011547;

	t14 = (x593*((x594>>x595)<x596));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x610 = UINT64_MAX;
	int16_t x611 = 58;
	int16_t x612 = INT16_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x609*((x610>>x611)<x612));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x613 = INT16_MIN;
	int32_t x614 = 106422;
	int32_t t16 = 31;

	t16 = (x613*((x614>>x615)<x616));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x621 = -1LL;
	uint64_t x622 = 3924047536807LLU;
	uint8_t x623 = 14U;
	static int64_t x624 = INT64_MAX;

	t17 = (x621*((x622>>x623)<x624));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x749 = -40;
	static volatile uint32_t x750 = 442100340U;
	int8_t x752 = INT8_MIN;
	volatile int32_t t18 = 46;

	t18 = (x749*((x750>>x751)<x752));

	if (t18 != -40) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x817 = 293331213LLU;
	int64_t x818 = 32737350207LL;
	static uint8_t x819 = 6U;
	volatile int64_t x820 = -1LL;

	t19 = (x817*((x818>>x819)<x820));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x921 = UINT64_MAX;
	int8_t x922 = INT8_MAX;
	static int8_t x924 = INT8_MIN;
	uint64_t t20 = 70226048736LLU;

	t20 = (x921*((x922>>x923)<x924));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x933 = INT8_MIN;
	uint16_t x934 = 123U;
	static uint8_t x935 = 1U;
	uint64_t x936 = 278876087050286465LLU;
	int32_t t21 = 703671130;

	t21 = (x933*((x934>>x935)<x936));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x998 = UINT16_MAX;
	uint8_t x999 = 1U;
	volatile int32_t t22 = 97334;

	t22 = (x997*((x998>>x999)<x1000));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1085 = -1;
	static volatile uint32_t x1086 = UINT32_MAX;
	int8_t x1087 = 9;
	int32_t x1088 = INT32_MAX;

	t23 = (x1085*((x1086>>x1087)<x1088));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1151 = 9U;
	volatile int16_t x1152 = INT16_MIN;

	t24 = (x1149*((x1150>>x1151)<x1152));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1209 = -284;
	static uint8_t x1210 = 65U;
	uint8_t x1211 = 0U;
	static uint32_t x1212 = UINT32_MAX;
	volatile int32_t t25 = -2000802;

	t25 = (x1209*((x1210>>x1211)<x1212));

	if (t25 != -284) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1277 = INT8_MIN;
	int32_t x1278 = INT32_MAX;
	volatile int8_t x1279 = 1;
	volatile uint64_t x1280 = 5188549LLU;
	int32_t t26 = -1;

	t26 = (x1277*((x1278>>x1279)<x1280));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1322 = UINT8_MAX;
	uint32_t x1323 = 0U;
	int64_t x1324 = INT64_MIN;

	t27 = (x1321*((x1322>>x1323)<x1324));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1370 = UINT16_MAX;
	int8_t x1371 = 3;
	int8_t x1372 = -1;
	uint64_t t28 = 18512397LLU;

	t28 = (x1369*((x1370>>x1371)<x1372));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1389 = 51U;
	int8_t x1390 = 10;
	volatile uint16_t x1391 = 3U;

	t29 = (x1389*((x1390>>x1391)<x1392));

	if (t29 != 51) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1402 = INT64_MAX;
	int64_t x1403 = 7LL;
	static int32_t x1404 = INT32_MAX;
	int64_t t30 = 23924039788157LL;

	t30 = (x1401*((x1402>>x1403)<x1404));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1417 = UINT8_MAX;
	volatile uint16_t x1418 = UINT16_MAX;
	int16_t x1419 = 5;
	int32_t x1420 = 4048;

	t31 = (x1417*((x1418>>x1419)<x1420));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1521 = UINT32_MAX;
	volatile uint16_t x1522 = 7758U;
	int32_t x1523 = 4;
	uint8_t x1524 = 0U;

	t32 = (x1521*((x1522>>x1523)<x1524));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1621 = 1267LLU;
	static uint8_t x1623 = 1U;
	volatile uint64_t t33 = 123964190691299468LLU;

	t33 = (x1621*((x1622>>x1623)<x1624));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1682 = 692LLU;
	uint16_t x1683 = 54U;
	int8_t x1684 = 0;
	int32_t t34 = 2;

	t34 = (x1681*((x1682>>x1683)<x1684));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1759 = 3U;
	int32_t x1760 = INT32_MAX;
	int64_t t35 = 6316356283570472LL;

	t35 = (x1757*((x1758>>x1759)<x1760));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1929 = INT16_MAX;
	int16_t x1930 = 14888;
	int32_t x1932 = -1;
	int32_t t36 = 74821164;

	t36 = (x1929*((x1930>>x1931)<x1932));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1933 = 6;
	int8_t x1935 = 11;
	int32_t x1936 = INT32_MIN;
	int32_t t37 = 5;

	t37 = (x1933*((x1934>>x1935)<x1936));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1946 = INT16_MAX;
	int64_t t38 = 35882813492523789LL;

	t38 = (x1945*((x1946>>x1947)<x1948));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1953 = INT32_MIN;
	uint16_t x1954 = 0U;
	int32_t x1956 = -1;
	static volatile int32_t t39 = 130263783;

	t39 = (x1953*((x1954>>x1955)<x1956));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1990 = 232409505493049257LLU;
	uint16_t x1991 = 0U;
	int16_t x1992 = -1;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x1989*((x1990>>x1991)<x1992));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2009 = INT8_MIN;
	static uint16_t x2010 = UINT16_MAX;
	int16_t x2012 = INT16_MAX;
	static int32_t t41 = -3023;

	t41 = (x2009*((x2010>>x2011)<x2012));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2013 = 255;
	uint8_t x2014 = UINT8_MAX;
	volatile uint16_t x2015 = 10U;
	int16_t x2016 = INT16_MIN;
	volatile int32_t t42 = -112;

	t42 = (x2013*((x2014>>x2015)<x2016));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2073 = 2508370LLU;
	static volatile uint8_t x2074 = 1U;
	uint16_t x2075 = 1U;
	static int64_t x2076 = -1LL;

	t43 = (x2073*((x2074>>x2075)<x2076));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2193 = -2872158727LL;
	uint16_t x2194 = UINT16_MAX;
	int8_t x2195 = 12;
	static int32_t x2196 = 95;
	int64_t t44 = 39LL;

	t44 = (x2193*((x2194>>x2195)<x2196));

	if (t44 != -2872158727LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2202 = 304515629U;
	static volatile uint8_t x2203 = 1U;
	static volatile int32_t t45 = -14374698;

	t45 = (x2201*((x2202>>x2203)<x2204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2238 = 701882U;
	uint8_t x2239 = 2U;
	int64_t x2240 = INT64_MIN;
	volatile int64_t t46 = 7LL;

	t46 = (x2237*((x2238>>x2239)<x2240));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2317 = INT8_MIN;
	volatile uint8_t x2318 = 3U;
	uint16_t x2319 = 9U;
	static int64_t x2320 = -5516582475465LL;

	t47 = (x2317*((x2318>>x2319)<x2320));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2325 = 126723158243890249LLU;
	int8_t x2326 = 1;
	uint16_t x2327 = 11U;
	int8_t x2328 = 52;
	volatile uint64_t t48 = 2567542175370215070LLU;

	t48 = (x2325*((x2326>>x2327)<x2328));

	if (t48 != 126723158243890249LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x2549 = 14088;
	uint8_t x2550 = 0U;
	uint8_t x2551 = 31U;
	volatile int32_t t49 = -13;

	t49 = (x2549*((x2550>>x2551)<x2552));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2632 = -16153407886LL;
	volatile int32_t t50 = -25086;

	t50 = (x2629*((x2630>>x2631)<x2632));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2685 = UINT32_MAX;
	uint32_t x2686 = UINT32_MAX;
	static volatile uint64_t x2688 = UINT64_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = (x2685*((x2686>>x2687)<x2688));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2697 = INT32_MIN;
	volatile uint16_t x2698 = 0U;
	uint8_t x2699 = 5U;
	int8_t x2700 = 1;
	volatile int32_t t52 = INT32_MIN;

	t52 = (x2697*((x2698>>x2699)<x2700));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2845 = INT8_MAX;
	uint64_t x2846 = 10684126348105LLU;
	uint8_t x2847 = 5U;
	uint8_t x2848 = 1U;
	int32_t t53 = 20892;

	t53 = (x2845*((x2846>>x2847)<x2848));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x2874 = 197748274301LL;
	uint32_t x2875 = 2U;
	static int32_t t54 = 0;

	t54 = (x2873*((x2874>>x2875)<x2876));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3009 = 3;
	int64_t x3010 = 169797491LL;
	static volatile int8_t x3011 = 23;
	volatile int8_t x3012 = 5;
	int32_t t55 = -251506;

	t55 = (x3009*((x3010>>x3011)<x3012));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3137 = 2U;
	static uint32_t x3138 = 861U;
	int16_t x3139 = 3;

	t56 = (x3137*((x3138>>x3139)<x3140));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3185 = INT32_MIN;
	int32_t x3186 = 424;
	static uint16_t x3187 = 5U;
	uint32_t x3188 = UINT32_MAX;
	volatile int32_t t57 = INT32_MIN;

	t57 = (x3185*((x3186>>x3187)<x3188));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3257 = INT16_MIN;
	static volatile int8_t x3258 = INT8_MAX;
	uint8_t x3259 = 1U;
	volatile int16_t x3260 = 229;
	volatile int32_t t58 = -9;

	t58 = (x3257*((x3258>>x3259)<x3260));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3345 = -394;
	int16_t x3346 = 180;
	int8_t x3347 = 1;
	static int32_t x3348 = 1799;
	int32_t t59 = -607794;

	t59 = (x3345*((x3346>>x3347)<x3348));

	if (t59 != -394) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3349 = -1LL;
	volatile uint16_t x3351 = 0U;
	uint8_t x3352 = UINT8_MAX;
	int64_t t60 = 171144984577LL;

	t60 = (x3349*((x3350>>x3351)<x3352));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3393 = 63;
	static int16_t x3394 = 0;
	uint16_t x3395 = 13U;
	int32_t t61 = -18029026;

	t61 = (x3393*((x3394>>x3395)<x3396));

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3450 = 787782577051681109LLU;
	uint8_t x3451 = 1U;
	static int8_t x3452 = -1;

	t62 = (x3449*((x3450>>x3451)<x3452));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x3485 = INT64_MIN;
	uint8_t x3486 = 114U;
	uint16_t x3487 = 12U;
	int32_t x3488 = -1;
	int64_t t63 = -2108302490LL;

	t63 = (x3485*((x3486>>x3487)<x3488));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3489 = INT16_MIN;
	int64_t x3490 = INT64_MAX;
	volatile uint16_t x3491 = 0U;
	int32_t t64 = -7883;

	t64 = (x3489*((x3490>>x3491)<x3492));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3561 = -1LL;
	uint64_t x3562 = UINT64_MAX;
	int64_t x3564 = INT64_MAX;

	t65 = (x3561*((x3562>>x3563)<x3564));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t t66 = 66658113U;

	t66 = (x3629*((x3630>>x3631)<x3632));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3734 = UINT32_MAX;
	int8_t x3735 = 1;
	uint8_t x3736 = 7U;
	int32_t t67 = -1071713862;

	t67 = (x3733*((x3734>>x3735)<x3736));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x3757 = UINT64_MAX;
	uint64_t x3758 = 7420510120LLU;
	int8_t x3759 = 2;
	int32_t x3760 = -1;
	uint64_t t68 = UINT64_MAX;

	t68 = (x3757*((x3758>>x3759)<x3760));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3793 = UINT16_MAX;
	uint8_t x3794 = 61U;
	int8_t x3795 = 3;
	uint16_t x3796 = UINT16_MAX;
	volatile int32_t t69 = 101;

	t69 = (x3793*((x3794>>x3795)<x3796));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3889 = 7039;
	volatile uint8_t x3890 = 63U;
	static uint8_t x3891 = 0U;
	uint16_t x3892 = UINT16_MAX;
	volatile int32_t t70 = -1805;

	t70 = (x3889*((x3890>>x3891)<x3892));

	if (t70 != 7039) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3909 = INT16_MIN;
	uint32_t x3910 = 62202U;
	uint16_t x3911 = 3U;
	volatile int32_t t71 = 125931561;

	t71 = (x3909*((x3910>>x3911)<x3912));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3922 = 3968674LLU;
	int64_t x3924 = INT64_MAX;
	static int32_t t72 = -5457349;

	t72 = (x3921*((x3922>>x3923)<x3924));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3934 = INT16_MAX;
	int16_t x3935 = 3;
	int32_t t73 = 7265542;

	t73 = (x3933*((x3934>>x3935)<x3936));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4037 = -1;
	static int32_t x4038 = INT32_MAX;
	uint8_t x4039 = 1U;
	int8_t x4040 = 44;
	int32_t t74 = 21504117;

	t74 = (x4037*((x4038>>x4039)<x4040));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4113 = 85U;
	uint32_t x4114 = 4648854U;
	int16_t x4115 = 0;
	int32_t x4116 = -1;
	volatile int32_t t75 = -7;

	t75 = (x4113*((x4114>>x4115)<x4116));

	if (t75 != 85) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4178 = INT64_MAX;
	uint32_t x4180 = 3U;
	volatile uint64_t t76 = 27230105586LLU;

	t76 = (x4177*((x4178>>x4179)<x4180));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4202 = 6;
	static uint8_t x4203 = 10U;
	uint8_t x4204 = 96U;
	volatile uint32_t t77 = 9U;

	t77 = (x4201*((x4202>>x4203)<x4204));

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4206 = 0U;
	int32_t x4207 = 12;
	uint32_t x4208 = 1589371037U;
	int32_t t78 = -82150038;

	t78 = (x4205*((x4206>>x4207)<x4208));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4221 = 6989U;
	static int32_t x4222 = INT32_MAX;
	int8_t x4223 = 21;
	int16_t x4224 = 22;
	uint32_t t79 = 224270753U;

	t79 = (x4221*((x4222>>x4223)<x4224));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4229 = INT64_MIN;
	volatile int8_t x4230 = INT8_MAX;
	int32_t x4232 = INT32_MIN;
	static int64_t t80 = 1196987274326472360LL;

	t80 = (x4229*((x4230>>x4231)<x4232));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4313 = INT64_MAX;
	int16_t x4314 = 1;
	int64_t x4316 = 8LL;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x4313*((x4314>>x4315)<x4316));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4405 = -14;
	uint16_t x4407 = 5U;
	static int32_t x4408 = INT32_MAX;
	int32_t t82 = 10;

	t82 = (x4405*((x4406>>x4407)<x4408));

	if (t82 != -14) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4601 = INT8_MIN;
	uint32_t x4602 = UINT32_MAX;
	int8_t x4603 = 0;

	t83 = (x4601*((x4602>>x4603)<x4604));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4605 = 29U;
	volatile uint32_t x4606 = 43U;
	uint8_t x4607 = 11U;
	static int64_t x4608 = 33188603118LL;

	t84 = (x4605*((x4606>>x4607)<x4608));

	if (t84 != 29U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4658 = INT16_MAX;
	int8_t x4659 = 21;
	uint64_t x4660 = 42866900511LLU;

	t85 = (x4657*((x4658>>x4659)<x4660));

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4693 = -50;
	static int16_t x4694 = 56;
	int16_t x4695 = 5;
	volatile int32_t x4696 = INT32_MIN;

	t86 = (x4693*((x4694>>x4695)<x4696));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4737 = INT32_MAX;
	volatile int16_t x4738 = INT16_MAX;
	int8_t x4740 = INT8_MAX;

	t87 = (x4737*((x4738>>x4739)<x4740));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4813 = INT32_MIN;
	volatile uint8_t x4814 = UINT8_MAX;
	uint8_t x4815 = 30U;
	uint16_t x4816 = UINT16_MAX;
	int32_t t88 = INT32_MIN;

	t88 = (x4813*((x4814>>x4815)<x4816));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4849 = 281358515666754250LLU;
	uint16_t x4850 = 7U;
	volatile uint64_t x4851 = 11LLU;
	volatile uint64_t t89 = 238436405095934341LLU;

	t89 = (x4849*((x4850>>x4851)<x4852));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x4997 = -1;
	static uint64_t x4998 = 314004347LLU;
	static uint16_t x4999 = 10U;
	volatile int32_t t90 = -1;

	t90 = (x4997*((x4998>>x4999)<x5000));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5045 = 0U;
	uint8_t x5046 = 91U;
	static uint8_t x5048 = UINT8_MAX;

	t91 = (x5045*((x5046>>x5047)<x5048));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5117 = UINT16_MAX;
	static int16_t x5119 = 0;
	volatile int16_t x5120 = -68;
	volatile int32_t t92 = -1214274;

	t92 = (x5117*((x5118>>x5119)<x5120));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5133 = INT64_MAX;
	uint64_t x5134 = 333542901647757LLU;
	static int8_t x5135 = 33;
	int16_t x5136 = -13;

	t93 = (x5133*((x5134>>x5135)<x5136));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5189 = UINT8_MAX;
	uint32_t x5190 = UINT32_MAX;
	volatile uint8_t x5191 = 2U;
	uint16_t x5192 = 3U;

	t94 = (x5189*((x5190>>x5191)<x5192));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5253 = INT32_MIN;
	volatile int64_t x5254 = 1789001102085LL;
	volatile int16_t x5255 = 1;
	static volatile int32_t t95 = -133334740;

	t95 = (x5253*((x5254>>x5255)<x5256));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5377 = INT64_MIN;
	uint8_t x5378 = 0U;
	static int32_t x5379 = 3;
	uint32_t x5380 = 8385088U;
	volatile int64_t t96 = INT64_MIN;

	t96 = (x5377*((x5378>>x5379)<x5380));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5381 = UINT16_MAX;
	int8_t x5382 = INT8_MAX;
	uint16_t x5383 = 3U;
	volatile uint64_t x5384 = UINT64_MAX;
	int32_t t97 = -8117599;

	t97 = (x5381*((x5382>>x5383)<x5384));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5441 = 1919922437LL;
	static int32_t x5442 = 29;
	volatile uint8_t x5443 = 4U;
	int64_t t98 = -15218LL;

	t98 = (x5441*((x5442>>x5443)<x5444));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5637 = -667091237939295LL;
	volatile int8_t x5640 = INT8_MIN;
	int64_t t99 = -12991028384LL;

	t99 = (x5637*((x5638>>x5639)<x5640));

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 402;
int32_t t0 = 16019;
volatile uint64_t t1 = UINT64_MAX;
int32_t x117 = -781;
static volatile uint64_t x149 = UINT64_MAX;
uint16_t x229 = UINT16_MAX;
static volatile uint64_t t6 = 5274LLU;
int16_t x437 = INT16_MAX;
static int16_t x481 = INT16_MIN;
uint64_t t9 = 56683140LLU;
static uint64_t x510 = UINT64_MAX;
uint64_t t10 = 9109231633270LLU;
static int8_t x567 = 0;
static uint32_t x568 = UINT32_MAX;
uint16_t x643 = 1U;
static volatile int16_t x644 = INT16_MIN;
volatile int64_t x694 = -1LL;
static int32_t x696 = -977;
volatile uint32_t t15 = 770U;
uint32_t x798 = 1630898687U;
volatile int64_t x806 = -52393769339LL;
int64_t t18 = -35095021038720110LL;
static uint64_t x863 = 55LLU;
static int8_t x901 = INT8_MAX;
static uint32_t x1017 = 337U;
uint8_t x1078 = 40U;
int8_t x1080 = 20;
volatile int32_t x1226 = -1;
volatile int8_t x1227 = 36;
static int32_t x1228 = -1;
volatile int16_t x1411 = 0;
int64_t x1441 = INT64_MAX;
uint32_t x1529 = 15197580U;
volatile int8_t x1550 = INT8_MIN;
uint64_t t33 = 2863297603749904LLU;
uint8_t x1679 = 8U;
int64_t x1750 = 744LL;
uint8_t x1751 = 15U;
int8_t x1826 = INT8_MIN;
uint8_t x1891 = 8U;
uint32_t x1964 = 697211U;
static int8_t x2042 = INT8_MIN;
volatile int64_t t41 = -297834759338LL;
uint64_t x2092 = 103LLU;
uint32_t x2342 = 60779229U;
static uint16_t x2343 = 9U;
volatile uint64_t t45 = 19LLU;
uint8_t x2367 = 58U;
uint8_t x2392 = UINT8_MAX;
int64_t x2440 = INT64_MAX;
volatile int8_t x2502 = -1;
uint32_t x2585 = 60338885U;
static volatile int32_t x2586 = INT32_MAX;
volatile int64_t x2756 = -1LL;
uint64_t t54 = UINT64_MAX;
uint64_t t55 = 167LLU;
int16_t x2901 = -1;
int32_t t56 = 80709148;
uint32_t x2939 = 0U;
volatile uint64_t t58 = 6801773393701LLU;
static int8_t x3097 = -1;
volatile uint8_t x3155 = 1U;
uint16_t x3156 = 666U;
int64_t x3233 = -1LL;
int16_t x3236 = INT16_MIN;
int64_t t64 = 9565188744350832LL;
uint64_t x3301 = 3149145LLU;
uint64_t x3505 = 61217311589058LLU;
volatile int32_t x3507 = 5;
uint64_t t67 = 125835800522659045LLU;
volatile uint8_t x3639 = 7U;
int8_t x3788 = INT8_MIN;
uint64_t x3978 = 327705747LLU;
int32_t x4066 = INT32_MIN;
volatile int8_t x4067 = 5;
volatile uint64_t t76 = 281548LLU;
uint8_t x4455 = 2U;
int64_t x4514 = -1LL;
int64_t x4516 = INT64_MIN;
uint16_t x4599 = 0U;
uint64_t x4801 = 1202252937LLU;
volatile uint16_t x4804 = 34U;
static int8_t x4813 = -3;
static int8_t x4895 = 1;
static uint32_t x4896 = 4U;
static uint64_t x5018 = 112017501LLU;
uint64_t x5108 = UINT64_MAX;
uint64_t t91 = UINT64_MAX;
int16_t x5248 = -1;
static int32_t x5416 = INT32_MIN;
volatile int32_t x5497 = 524653393;
uint8_t x5499 = 10U;
int16_t x5500 = INT16_MAX;
int32_t t96 = -451741709;


void f0(void) {
	int32_t x1 = 3271;
	int8_t x2 = INT8_MAX;
	volatile uint8_t x3 = 7U;

	t0 = (((x1-x2)>>x3)|x4);

	if (t0 != 410) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	static uint8_t x7 = 5U;
	int8_t x8 = -1;

	t1 = (((x5-x6)>>x7)|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x118 = INT16_MIN;
	int32_t x119 = 4;
	volatile int8_t x120 = -9;
	int32_t t2 = 17659;

	t2 = (((x117-x118)>>x119)|x120);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x150 = -4;
	static int8_t x151 = 21;
	static int16_t x152 = INT16_MIN;
	static volatile uint64_t t3 = 2172806317948LLU;

	t3 = (((x149-x150)>>x151)|x152);

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x230 = -51;
	uint8_t x231 = 10U;
	uint8_t x232 = 1U;
	volatile int32_t t4 = -64027;

	t4 = (((x229-x230)>>x231)|x232);

	if (t4 != 65) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x285 = -1;
	int16_t x286 = -1;
	uint16_t x287 = 18U;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t5 = -216230813;

	t5 = (((x285-x286)>>x287)|x288);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x293 = 825579129755LLU;
	uint32_t x294 = UINT32_MAX;
	volatile uint8_t x295 = 0U;
	uint16_t x296 = 18297U;

	t6 = (((x293-x294)>>x295)|x296);

	if (t6 != 821284163581LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x349 = 1548038032LLU;
	uint64_t x350 = 1851550254LLU;
	int64_t x351 = 9LL;
	static int8_t x352 = 6;
	uint64_t t7 = 14459964044524299LLU;

	t7 = (((x349-x350)>>x351)|x352);

	if (t7 != 36028797018371174LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x438 = -1LL;
	int32_t x439 = 1;
	int16_t x440 = INT16_MAX;
	volatile int64_t t8 = 27LL;

	t8 = (((x437-x438)>>x439)|x440);

	if (t8 != 32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x482 = UINT64_MAX;
	uint16_t x483 = 31U;
	uint64_t x484 = 87812593254493LLU;

	t9 = (((x481-x482)>>x483)|x484);

	if (t9 != 87814901334015LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x509 = INT16_MIN;
	uint16_t x511 = 30U;
	uint16_t x512 = 15U;

	t10 = (((x509-x510)>>x511)|x512);

	if (t10 != 17179869183LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x565 = 7970983520932LLU;
	static uint32_t x566 = UINT32_MAX;
	volatile uint64_t t11 = 3197LLU;

	t11 = (((x565-x566)>>x567)|x568);

	if (t11 != 7967164334079LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x637 = 1;
	static int16_t x638 = -4246;
	uint32_t x639 = 7U;
	int64_t x640 = INT64_MIN;
	int64_t t12 = 1714627121LL;

	t12 = (((x637-x638)>>x639)|x640);

	if (t12 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x641 = 28LLU;
	volatile uint64_t x642 = 16070737890494418LLU;
	uint64_t t13 = 6144514LLU;

	t13 = (((x641-x642)>>x643)|x644);

	if (t13 != 18446744073709526053LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x693 = INT32_MAX;
	uint8_t x695 = 1U;
	static volatile int64_t t14 = 12361599899908LL;

	t14 = (((x693-x694)>>x695)|x696);

	if (t14 != -977LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x769 = 8U;
	int8_t x770 = INT8_MIN;
	uint8_t x771 = 0U;
	static uint32_t x772 = 21544416U;

	t15 = (((x769-x770)>>x771)|x772);

	if (t15 != 21544424U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x797 = 3069U;
	int8_t x799 = 1;
	uint8_t x800 = 85U;
	volatile uint32_t t16 = 2052275U;

	t16 = (((x797-x798)>>x799)|x800);

	if (t16 != 1332035839U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x801 = 0LLU;
	volatile uint16_t x802 = UINT16_MAX;
	uint8_t x803 = 0U;
	int32_t x804 = INT32_MIN;
	uint64_t t17 = 105158LLU;

	t17 = (((x801-x802)>>x803)|x804);

	if (t17 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x805 = UINT32_MAX;
	volatile uint8_t x807 = 17U;
	static uint16_t x808 = 35U;

	t18 = (((x805-x806)>>x807)|x808);

	if (t18 != 432503LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x861 = INT64_MIN;
	uint64_t x862 = 4609379302108336852LLU;
	static int16_t x864 = INT16_MAX;
	static uint64_t t19 = 14679LLU;

	t19 = (((x861-x862)>>x863)|x864);

	if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x902 = 284500607804LLU;
	uint64_t x903 = 0LLU;
	int32_t x904 = 3773;
	volatile uint64_t t20 = 1986LLU;

	t20 = (((x901-x902)>>x903)|x904);

	if (t20 != 18446743789208944639LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1018 = INT32_MIN;
	int8_t x1019 = 23;
	uint16_t x1020 = 13U;
	volatile uint32_t t21 = 385877U;

	t21 = (((x1017-x1018)>>x1019)|x1020);

	if (t21 != 269U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1077 = INT64_MAX;
	uint8_t x1079 = 8U;
	static int64_t t22 = 28937LL;

	t22 = (((x1077-x1078)>>x1079)|x1080);

	if (t22 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1225 = -1LL;
	volatile int64_t t23 = -188692421097712LL;

	t23 = (((x1225-x1226)>>x1227)|x1228);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1229 = INT32_MIN;
	uint64_t x1230 = 3LLU;
	static volatile int8_t x1231 = 26;
	volatile uint64_t x1232 = 9852052694584045LLU;
	uint64_t t24 = 3945852056LLU;

	t24 = (((x1229-x1230)>>x1231)|x1232);

	if (t24 != 9852173940686847LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1305 = INT8_MIN;
	int32_t x1306 = -390350455;
	static int8_t x1307 = 7;
	int8_t x1308 = -1;
	int32_t t25 = 473;

	t25 = (((x1305-x1306)>>x1307)|x1308);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1345 = UINT64_MAX;
	static int16_t x1346 = INT16_MAX;
	static volatile uint8_t x1347 = 1U;
	uint64_t x1348 = 41266751LLU;
	uint64_t t26 = 5358556LLU;

	t26 = (((x1345-x1346)>>x1347)|x1348);

	if (t26 != 9223372036854771263LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1409 = -3;
	int8_t x1410 = INT8_MIN;
	volatile int32_t x1412 = 454;
	volatile int32_t t27 = -9;

	t27 = (((x1409-x1410)>>x1411)|x1412);

	if (t27 != 511) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1437 = INT8_MIN;
	int32_t x1438 = -56052064;
	uint16_t x1439 = 0U;
	static volatile int8_t x1440 = INT8_MIN;
	int32_t t28 = -424;

	t28 = (((x1437-x1438)>>x1439)|x1440);

	if (t28 != -32) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1442 = 64870875029784796LLU;
	int16_t x1443 = 6;
	static volatile uint32_t x1444 = UINT32_MAX;
	uint64_t t29 = 44933749322LLU;

	t29 = (((x1441-x1442)>>x1443)|x1444);

	if (t29 != 143101584383934463LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1493 = 1201U;
	static int64_t x1494 = 33LL;
	int16_t x1495 = 2;
	static volatile int32_t x1496 = INT32_MAX;
	static int64_t t30 = 289489818LL;

	t30 = (((x1493-x1494)>>x1495)|x1496);

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1530 = INT32_MIN;
	uint8_t x1531 = 10U;
	int32_t x1532 = INT32_MIN;
	uint32_t t31 = 182079U;

	t31 = (((x1529-x1530)>>x1531)|x1532);

	if (t31 != 2149595641U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1541 = INT8_MIN;
	uint64_t x1542 = 10575443836LLU;
	int8_t x1543 = 15;
	static uint16_t x1544 = 10392U;
	uint64_t t32 = 12LLU;

	t32 = (((x1541-x1542)>>x1543)|x1544);

	if (t32 != 562949953108959LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1549 = 684695352LLU;
	volatile uint32_t x1551 = 1U;
	uint8_t x1552 = 4U;

	t33 = (((x1549-x1550)>>x1551)|x1552);

	if (t33 != 342347740LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1621 = 504476996;
	volatile int16_t x1622 = INT16_MAX;
	uint8_t x1623 = 1U;
	static volatile int32_t x1624 = -1;
	int32_t t34 = 6;

	t34 = (((x1621-x1622)>>x1623)|x1624);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1649 = UINT8_MAX;
	uint8_t x1650 = UINT8_MAX;
	uint64_t x1651 = 4LLU;
	static int32_t x1652 = -65;
	volatile int32_t t35 = 23045;

	t35 = (((x1649-x1650)>>x1651)|x1652);

	if (t35 != -65) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1677 = 992;
	volatile uint64_t x1678 = UINT64_MAX;
	static int32_t x1680 = 4;
	static uint64_t t36 = 20665LLU;

	t36 = (((x1677-x1678)>>x1679)|x1680);

	if (t36 != 7LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1749 = UINT32_MAX;
	int16_t x1752 = -1;
	volatile int64_t t37 = -9490247342115LL;

	t37 = (((x1749-x1750)>>x1751)|x1752);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1825 = UINT32_MAX;
	uint8_t x1827 = 24U;
	volatile int8_t x1828 = INT8_MIN;
	uint32_t t38 = 2243U;

	t38 = (((x1825-x1826)>>x1827)|x1828);

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1889 = UINT64_MAX;
	int16_t x1890 = INT16_MIN;
	uint8_t x1892 = 1U;
	volatile uint64_t t39 = 29865528LLU;

	t39 = (((x1889-x1890)>>x1891)|x1892);

	if (t39 != 127LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1961 = -1;
	volatile uint32_t x1962 = UINT32_MAX;
	volatile uint16_t x1963 = 0U;
	uint32_t t40 = 146818U;

	t40 = (((x1961-x1962)>>x1963)|x1964);

	if (t40 != 697211U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2041 = 400152118638LL;
	uint32_t x2043 = 47U;
	int16_t x2044 = INT16_MIN;

	t41 = (((x2041-x2042)>>x2043)|x2044);

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2089 = 2;
	static int64_t x2090 = -1LL;
	int8_t x2091 = 4;
	static uint64_t t42 = 549767466338009LLU;

	t42 = (((x2089-x2090)>>x2091)|x2092);

	if (t42 != 103LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2125 = UINT64_MAX;
	int16_t x2126 = -1;
	uint8_t x2127 = 3U;
	uint32_t x2128 = 107U;
	static uint64_t t43 = 0LLU;

	t43 = (((x2125-x2126)>>x2127)|x2128);

	if (t43 != 107LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2341 = 1;
	volatile int64_t x2344 = INT64_MIN;
	volatile int64_t t44 = -3167874574163LL;

	t44 = (((x2341-x2342)>>x2343)|x2344);

	if (t44 != -9223372036846505910LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2345 = 40U;
	int64_t x2346 = -1LL;
	static int8_t x2347 = 0;
	uint64_t x2348 = 13880252573497966LLU;

	t45 = (((x2345-x2346)>>x2347)|x2348);

	if (t45 != 13880252573497967LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2365 = -1LL;
	static uint64_t x2366 = 256LLU;
	static int8_t x2368 = 27;
	volatile uint64_t t46 = 664539830976487LLU;

	t46 = (((x2365-x2366)>>x2367)|x2368);

	if (t46 != 63LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2389 = INT8_MAX;
	int64_t x2390 = -1LL;
	int16_t x2391 = 0;
	volatile int64_t t47 = -541832683012535213LL;

	t47 = (((x2389-x2390)>>x2391)|x2392);

	if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2437 = UINT8_MAX;
	int16_t x2438 = INT16_MIN;
	static uint8_t x2439 = 20U;
	volatile int64_t t48 = INT64_MAX;

	t48 = (((x2437-x2438)>>x2439)|x2440);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x2457 = UINT32_MAX;
	int64_t x2458 = -77300016207616541LL;
	uint8_t x2459 = 1U;
	volatile uint8_t x2460 = 40U;
	volatile int64_t t49 = 3948223544LL;

	t49 = (((x2457-x2458)>>x2459)|x2460);

	if (t49 != 38650010251291950LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x2501 = 7142U;
	static volatile int16_t x2503 = 0;
	int64_t x2504 = 1045609LL;
	int64_t t50 = 76192LL;

	t50 = (((x2501-x2502)>>x2503)|x2504);

	if (t50 != 1048559LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2573 = 248U;
	uint8_t x2574 = 1U;
	volatile uint8_t x2575 = 11U;
	static int32_t x2576 = INT32_MIN;
	volatile uint32_t t51 = 29208U;

	t51 = (((x2573-x2574)>>x2575)|x2576);

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2587 = 3;
	volatile uint16_t x2588 = 7303U;
	uint32_t t52 = 59824302U;

	t52 = (((x2585-x2586)>>x2587)|x2588);

	if (t52 != 275979999U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2665 = 5U;
	static int64_t x2666 = -1LL;
	int32_t x2667 = 15;
	uint64_t x2668 = 15847117674LLU;
	uint64_t t53 = 52588269003202LLU;

	t53 = (((x2665-x2666)>>x2667)|x2668);

	if (t53 != 15847117674LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2753 = INT32_MIN;
	static volatile uint64_t x2754 = 278007336LLU;
	uint32_t x2755 = 6U;

	t54 = (((x2753-x2754)>>x2755)|x2756);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2757 = 192LLU;
	uint16_t x2758 = 25U;
	volatile int32_t x2759 = 1;
	int64_t x2760 = INT64_MIN;

	t55 = (((x2757-x2758)>>x2759)|x2760);

	if (t55 != 9223372036854775891LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2902 = -970404;
	int32_t x2903 = 12;
	int32_t x2904 = INT32_MIN;

	t56 = (((x2901-x2902)>>x2903)|x2904);

	if (t56 != -2147483412) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2937 = 254U;
	uint32_t x2938 = 2U;
	int32_t x2940 = -1665502;
	uint32_t t57 = 426824U;

	t57 = (((x2937-x2938)>>x2939)|x2940);

	if (t57 != 4293302014U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2985 = 56018193106LLU;
	uint16_t x2986 = UINT16_MAX;
	uint64_t x2987 = 0LLU;
	volatile uint8_t x2988 = UINT8_MAX;

	t58 = (((x2985-x2986)>>x2987)|x2988);

	if (t58 != 56018127615LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3037 = -1;
	static volatile int32_t x3038 = -153;
	int8_t x3039 = 11;
	uint8_t x3040 = 0U;
	static volatile int32_t t59 = 1;

	t59 = (((x3037-x3038)>>x3039)|x3040);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3098 = -1;
	static int16_t x3099 = 11;
	volatile int64_t x3100 = INT64_MIN;
	static volatile int64_t t60 = INT64_MIN;

	t60 = (((x3097-x3098)>>x3099)|x3100);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3145 = 990618211514LL;
	int8_t x3146 = -1;
	int16_t x3147 = 10;
	uint32_t x3148 = 12524U;
	int64_t t61 = 10456845634101LL;

	t61 = (((x3145-x3146)>>x3147)|x3148);

	if (t61 != 967408893LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3153 = UINT64_MAX;
	static int64_t x3154 = INT64_MIN;
	uint64_t t62 = 10LLU;

	t62 = (((x3153-x3154)>>x3155)|x3156);

	if (t62 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3169 = -1LL;
	volatile int64_t x3170 = INT64_MIN;
	int16_t x3171 = 1;
	volatile int8_t x3172 = INT8_MIN;
	static volatile int64_t t63 = -719LL;

	t63 = (((x3169-x3170)>>x3171)|x3172);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3234 = -1240087705LL;
	uint8_t x3235 = 52U;

	t64 = (((x3233-x3234)>>x3235)|x3236);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3269 = -1;
	int16_t x3270 = -1;
	volatile uint64_t x3271 = 3LLU;
	uint32_t x3272 = UINT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

	t65 = (((x3269-x3270)>>x3271)|x3272);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3302 = -979117673287904LL;
	volatile int16_t x3303 = 4;
	static int32_t x3304 = -32436965;
	volatile uint64_t t66 = 785917542881LLU;

	t66 = (((x3301-x3302)>>x3303)|x3304);

	if (t66 != 18446744073702591995LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3506 = 2;
	static uint16_t x3508 = 1U;

	t67 = (((x3505-x3506)>>x3507)|x3508);

	if (t67 != 1913040987159LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3637 = 0U;
	uint8_t x3638 = 0U;
	int8_t x3640 = -1;
	volatile int32_t t68 = 476813610;

	t68 = (((x3637-x3638)>>x3639)|x3640);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3785 = 302U;
	volatile int8_t x3786 = INT8_MIN;
	int16_t x3787 = 3;
	volatile int32_t t69 = -104;

	t69 = (((x3785-x3786)>>x3787)|x3788);

	if (t69 != -75) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3837 = -2;
	volatile int32_t x3838 = -545;
	uint8_t x3839 = 1U;
	int8_t x3840 = 1;
	volatile int32_t t70 = -208598548;

	t70 = (((x3837-x3838)>>x3839)|x3840);

	if (t70 != 271) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3917 = 7160U;
	static uint64_t x3918 = 45611992574LLU;
	uint8_t x3919 = 5U;
	int64_t x3920 = INT64_MIN;
	volatile uint64_t t71 = 1717LLU;

	t71 = (((x3917-x3918)>>x3919)|x3920);

	if (t71 != 9799832787732824751LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x3977 = -91160621LL;
	uint8_t x3979 = 11U;
	volatile int16_t x3980 = INT16_MIN;
	volatile uint64_t t72 = 1LLU;

	t72 = (((x3977-x3978)>>x3979)|x3980);

	if (t72 != 18446744073709543699LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4021 = UINT16_MAX;
	int8_t x4022 = INT8_MIN;
	volatile int16_t x4023 = 2;
	volatile int16_t x4024 = -1;
	int32_t t73 = -13547;

	t73 = (((x4021-x4022)>>x4023)|x4024);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4065 = -1;
	uint8_t x4068 = UINT8_MAX;
	volatile int32_t t74 = -45;

	t74 = (((x4065-x4066)>>x4067)|x4068);

	if (t74 != 67108863) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4081 = INT16_MAX;
	static int16_t x4082 = INT16_MIN;
	uint16_t x4083 = 12U;
	int8_t x4084 = 1;
	int32_t t75 = 362335703;

	t75 = (((x4081-x4082)>>x4083)|x4084);

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4201 = -9;
	uint64_t x4202 = UINT64_MAX;
	volatile int16_t x4203 = 1;
	static int8_t x4204 = INT8_MIN;

	t76 = (((x4201-x4202)>>x4203)|x4204);

	if (t76 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x4373 = INT64_MIN;
	static volatile int64_t x4374 = INT64_MIN;
	uint8_t x4375 = 41U;
	uint64_t x4376 = UINT64_MAX;
	static uint64_t t77 = UINT64_MAX;

	t77 = (((x4373-x4374)>>x4375)|x4376);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4377 = -8863LL;
	uint64_t x4378 = 200466703LLU;
	uint16_t x4379 = 34U;
	int8_t x4380 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x4377-x4378)>>x4379)|x4380);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4453 = 15192LL;
	int32_t x4454 = INT32_MIN;
	int16_t x4456 = -62;
	static volatile int64_t t79 = 1390318461LL;

	t79 = (((x4453-x4454)>>x4455)|x4456);

	if (t79 != -42LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4513 = 5333667U;
	int16_t x4515 = 0;
	volatile int64_t t80 = 127LL;

	t80 = (((x4513-x4514)>>x4515)|x4516);

	if (t80 != -9223372036849442140LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x4597 = INT8_MIN;
	volatile int32_t x4598 = -234;
	uint64_t x4600 = 214046748494LLU;
	volatile uint64_t t81 = 45345LLU;

	t81 = (((x4597-x4598)>>x4599)|x4600);

	if (t81 != 214046748526LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4713 = 502U;
	int64_t x4714 = -1LL;
	uint8_t x4715 = 1U;
	int64_t x4716 = INT64_MIN;
	int64_t t82 = 0LL;

	t82 = (((x4713-x4714)>>x4715)|x4716);

	if (t82 != -9223372036854775557LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4749 = -1;
	static int32_t x4750 = -1;
	volatile int64_t x4751 = 14LL;
	int64_t x4752 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (((x4749-x4750)>>x4751)|x4752);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4802 = 97679352222780LLU;
	int8_t x4803 = 14;
	uint64_t t84 = 1939166608410636585LLU;

	t84 = (((x4801-x4802)>>x4803)|x4804);

	if (t84 != 1125893945041510LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4814 = INT32_MIN;
	uint8_t x4815 = 1U;
	int64_t x4816 = 0LL;
	int64_t t85 = 22633948144660LL;

	t85 = (((x4813-x4814)>>x4815)|x4816);

	if (t85 != 1073741822LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x4829 = 6870;
	int64_t x4830 = -1LL;
	volatile uint8_t x4831 = 13U;
	int8_t x4832 = -1;
	static volatile int64_t t86 = -6LL;

	t86 = (((x4829-x4830)>>x4831)|x4832);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4893 = 9;
	uint32_t x4894 = 0U;
	volatile uint32_t t87 = 1U;

	t87 = (((x4893-x4894)>>x4895)|x4896);

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x4925 = -1LL;
	int32_t x4926 = -1;
	volatile uint32_t x4927 = 33U;
	static int8_t x4928 = INT8_MAX;
	static int64_t t88 = -30223446LL;

	t88 = (((x4925-x4926)>>x4927)|x4928);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4989 = 1550U;
	uint64_t x4990 = 285999416661893134LLU;
	uint8_t x4991 = 1U;
	int32_t x4992 = 124;
	volatile uint64_t t89 = 0LLU;

	t89 = (((x4989-x4990)>>x4991)|x4992);

	if (t89 != 9080372328523830140LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5017 = INT64_MAX;
	uint16_t x5019 = 4U;
	int32_t x5020 = -1;
	uint64_t t90 = UINT64_MAX;

	t90 = (((x5017-x5018)>>x5019)|x5020);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5105 = 60016U;
	uint8_t x5106 = 1U;
	int32_t x5107 = 2;

	t91 = (((x5105-x5106)>>x5107)|x5108);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5125 = 63U;
	static uint16_t x5126 = 1U;
	volatile int32_t x5127 = 14;
	int8_t x5128 = INT8_MIN;
	uint32_t t92 = 0U;

	t92 = (((x5125-x5126)>>x5127)|x5128);

	if (t92 != 4294967168U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5245 = INT8_MAX;
	uint16_t x5246 = 78U;
	volatile int16_t x5247 = 0;
	int32_t t93 = 55304;

	t93 = (((x5245-x5246)>>x5247)|x5248);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5277 = 121260371482LLU;
	uint8_t x5278 = 0U;
	int16_t x5279 = 1;
	uint8_t x5280 = 4U;
	static volatile uint64_t t94 = 973352332100LLU;

	t94 = (((x5277-x5278)>>x5279)|x5280);

	if (t94 != 60630185741LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5413 = 27555634LLU;
	volatile int32_t x5414 = INT32_MIN;
	int16_t x5415 = 1;
	volatile uint64_t t95 = 1275223583160671LLU;

	t95 = (((x5413-x5414)>>x5415)|x5416);

	if (t95 != 18446744072649587609LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5498 = 4U;

	t96 = (((x5497-x5498)>>x5499)|x5500);

	if (t96 != 524287) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x5533 = UINT8_MAX;
	volatile int32_t x5534 = -1;
	int8_t x5535 = 1;
	int32_t x5536 = INT32_MIN;
	volatile int32_t t97 = -3036;

	t97 = (((x5533-x5534)>>x5535)|x5536);

	if (t97 != -2147483520) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5641 = 1943292486911LLU;
	int16_t x5642 = -1;
	static uint8_t x5643 = 7U;
	int32_t x5644 = INT32_MAX;
	uint64_t t98 = 7033LLU;

	t98 = (((x5641-x5642)>>x5643)|x5644);

	if (t98 != 17179869183LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5717 = UINT32_MAX;
	int16_t x5718 = -240;
	volatile uint32_t x5719 = 29U;
	int16_t x5720 = INT16_MAX;
	uint32_t t99 = 190559063U;

	t99 = (((x5717-x5718)>>x5719)|x5720);

	if (t99 != 32767U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x90 = 292690910162LLU;
uint64_t x104 = 4LLU;
uint64_t x133 = 18LLU;
uint16_t x136 = 30U;
uint8_t x152 = 63U;
int64_t x286 = -1LL;
volatile uint16_t x330 = 2U;
int8_t x366 = INT8_MAX;
int64_t x405 = 5115506235LL;
volatile int16_t x407 = INT16_MIN;
uint16_t x408 = 23U;
static volatile uint64_t t10 = 0LLU;
uint64_t x557 = 2543668099161296573LLU;
uint8_t x559 = 78U;
static uint64_t t13 = 87742356398LLU;
int8_t x808 = 3;
static uint64_t x862 = UINT64_MAX;
static volatile uint64_t t17 = 2924946567560967854LLU;
static uint32_t x937 = 11U;
static uint32_t t18 = 734U;
int8_t x1211 = INT8_MIN;
static volatile uint32_t t20 = 5U;
volatile int16_t x1235 = INT16_MAX;
volatile int64_t x1298 = 1793105952792LL;
static uint32_t x1301 = 243152U;
static uint8_t x1352 = 1U;
volatile uint64_t x1357 = 20408231613LLU;
int8_t x1360 = 1;
uint32_t x1435 = 1832U;
static int8_t x1436 = 55;
static volatile int8_t x1569 = INT8_MIN;
volatile uint64_t t30 = 2LLU;
volatile uint32_t x1617 = UINT32_MAX;
int32_t x1619 = INT32_MIN;
static uint64_t t32 = 405971384376LLU;
int16_t x1632 = 4;
uint8_t x1720 = 29U;
uint64_t t35 = 7574484934LLU;
static int8_t x1751 = -1;
volatile int32_t t36 = -114061;
volatile int8_t x1787 = -1;
int16_t x1788 = 1;
uint64_t x1789 = UINT64_MAX;
int16_t x1790 = -1;
int32_t x1870 = INT32_MIN;
uint64_t x1958 = 65817659529LLU;
volatile int32_t x2025 = 582427244;
int16_t x2161 = INT16_MIN;
volatile int8_t x2163 = INT8_MIN;
volatile int64_t t50 = 29816436LL;
uint8_t x2464 = 1U;
static volatile int64_t t52 = 443LL;
int64_t x2568 = 1LL;
uint32_t t56 = 17U;
static int64_t x2681 = -41554717635684331LL;
uint64_t t57 = 1153541978LLU;
int8_t x2721 = INT8_MAX;
uint32_t x2924 = 5U;
volatile uint64_t x3005 = 145LLU;
uint32_t x3082 = 1182037U;
uint16_t x3174 = 159U;
int64_t x3175 = -1242484519LL;
volatile int8_t x3230 = -1;
int32_t x3245 = INT32_MAX;
int32_t x3246 = 30283748;
uint16_t x3248 = 0U;
static uint64_t x3313 = UINT64_MAX;
uint64_t x3413 = 2751701132LLU;
volatile uint64_t t77 = 1240346LLU;
uint16_t x3440 = 26U;
int16_t x3550 = -907;
int32_t x3638 = 512885;
volatile uint8_t x3661 = UINT8_MAX;
int16_t x3701 = 336;
int8_t x3704 = 0;
uint32_t x3749 = 299960465U;
static int16_t x3750 = INT16_MAX;
int64_t x3771 = INT64_MIN;
int8_t x3794 = INT8_MIN;
volatile int64_t t86 = -16930889382667LL;
volatile uint8_t x4054 = UINT8_MAX;
static volatile uint32_t t88 = 224451138U;
int32_t x4157 = INT32_MIN;
int8_t x4178 = -1;
static uint8_t x4180 = 6U;
int64_t x4247 = INT64_MIN;
int32_t x4269 = INT32_MAX;
uint16_t x4271 = 247U;
volatile int64_t t94 = -1092807290809530LL;
static uint32_t x4339 = 22U;
uint32_t x4369 = 30422U;
volatile int64_t t97 = -11LL;
static uint64_t x4409 = 3674280LLU;
volatile int64_t t99 = 1LL;


void f0(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	volatile int32_t x87 = INT32_MIN;
	volatile uint8_t x88 = 1U;
	int32_t t0 = -21485;

	t0 = (((x85|x86)-x87)>>x88);

	if (t0 != 1073741760) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x89 = 4507837549LLU;
	static int32_t x91 = INT32_MIN;
	uint16_t x92 = 6U;
	static uint64_t t1 = 30337505691924307LLU;

	t1 = (((x89|x90)-x91)>>x92);

	if (t1 != 4676056063LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	int8_t x103 = INT8_MAX;
	static uint32_t t2 = 5086997U;

	t2 = (((x101|x102)-x103)>>x104);

	if (t2 != 268435448U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x134 = 1;
	int8_t x135 = INT8_MIN;
	volatile uint64_t t3 = 1643866525933LLU;

	t3 = (((x133|x134)-x135)>>x136);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x149 = UINT8_MAX;
	volatile uint8_t x150 = 29U;
	static uint64_t x151 = 838775LLU;
	volatile uint64_t t4 = 5424351193368666819LLU;

	t4 = (((x149|x150)-x151)>>x152);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	uint8_t x288 = 27U;
	int64_t t5 = -40LL;

	t5 = (((x285|x286)-x287)>>x288);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	uint16_t x331 = 10205U;
	uint16_t x332 = 23U;
	volatile uint32_t t6 = 313774U;

	t6 = (((x329|x330)-x331)>>x332);

	if (t6 != 511U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x365 = -12;
	int64_t x367 = -4158018LL;
	static int8_t x368 = 37;
	volatile int64_t t7 = -734572563468508LL;

	t7 = (((x365|x366)-x367)>>x368);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x406 = 13148U;
	volatile int64_t t8 = 266LL;

	t8 = (((x405|x406)-x407)>>x408);

	if (t8 != 609LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x445 = INT8_MAX;
	static uint32_t x446 = UINT32_MAX;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = 1;
	uint32_t t9 = 737U;

	t9 = (((x445|x446)-x447)>>x448);

	if (t9 != 2147483520U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	int8_t x466 = -1;
	uint16_t x467 = 2013U;
	int16_t x468 = 22;

	t10 = (((x465|x466)-x467)>>x468);

	if (t10 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x493 = 4136117804LLU;
	volatile int16_t x494 = -2720;
	volatile int8_t x495 = INT8_MIN;
	uint64_t x496 = 32LLU;
	volatile uint64_t t11 = 8533088777516LLU;

	t11 = (((x493|x494)-x495)>>x496);

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x525 = -17062225603LL;
	uint16_t x526 = 14833U;
	volatile int64_t x527 = INT64_MIN;
	volatile uint8_t x528 = 5U;
	volatile int64_t t12 = 249645141717604LL;

	t12 = (((x525|x526)-x527)>>x528);

	if (t12 != 288230375618517455LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x558 = 8;
	volatile int16_t x560 = 0;

	t13 = (((x557|x558)-x559)>>x560);

	if (t13 != 2543668099161296495LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x569 = UINT16_MAX;
	volatile int8_t x570 = INT8_MIN;
	int16_t x571 = -1;
	uint8_t x572 = 7U;
	volatile int32_t t14 = 29;

	t14 = (((x569|x570)-x571)>>x572);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x621 = INT8_MIN;
	uint32_t x622 = UINT32_MAX;
	uint16_t x623 = 13U;
	int32_t x624 = 2;
	volatile uint32_t t15 = 0U;

	t15 = (((x621|x622)-x623)>>x624);

	if (t15 != 1073741820U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x805 = 103874674100890LLU;
	uint32_t x806 = 10087952U;
	volatile uint64_t x807 = 15053086987LLU;
	volatile uint64_t t16 = 128113532976613791LLU;

	t16 = (((x805|x806)-x807)>>x808);

	if (t16 != 12982453813681LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x861 = UINT8_MAX;
	volatile int16_t x863 = INT16_MIN;
	volatile uint8_t x864 = 5U;

	t17 = (((x861|x862)-x863)>>x864);

	if (t17 != 1023LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x938 = -1;
	static int8_t x939 = -18;
	uint8_t x940 = 0U;

	t18 = (((x937|x938)-x939)>>x940);

	if (t18 != 17U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x1209 = INT16_MIN;
	static int8_t x1210 = -1;
	static int8_t x1212 = 0;
	int32_t t19 = -2552;

	t19 = (((x1209|x1210)-x1211)>>x1212);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1221 = UINT32_MAX;
	static uint16_t x1222 = UINT16_MAX;
	int32_t x1223 = -1;
	uint8_t x1224 = 1U;

	t20 = (((x1221|x1222)-x1223)>>x1224);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1233 = UINT32_MAX;
	static int32_t x1234 = -697;
	int8_t x1236 = 1;
	uint32_t t21 = 30182U;

	t21 = (((x1233|x1234)-x1235)>>x1236);

	if (t21 != 2147467264U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1297 = INT16_MIN;
	uint64_t x1299 = 15LLU;
	static uint16_t x1300 = 57U;
	uint64_t t22 = 23270422379LLU;

	t22 = (((x1297|x1298)-x1299)>>x1300);

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1302 = 56U;
	volatile int32_t x1303 = INT32_MIN;
	int8_t x1304 = 2;
	volatile uint32_t t23 = 97963147U;

	t23 = (((x1301|x1302)-x1303)>>x1304);

	if (t23 != 536931710U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1309 = INT64_MIN;
	uint64_t x1310 = UINT64_MAX;
	int8_t x1311 = INT8_MAX;
	uint8_t x1312 = 13U;
	volatile uint64_t t24 = 7316LLU;

	t24 = (((x1309|x1310)-x1311)>>x1312);

	if (t24 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1349 = UINT8_MAX;
	volatile uint16_t x1350 = 43U;
	volatile int64_t x1351 = -97786LL;
	static int64_t t25 = 407260LL;

	t25 = (((x1349|x1350)-x1351)>>x1352);

	if (t25 != 49020LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1358 = INT8_MIN;
	volatile int32_t x1359 = 13;
	uint64_t t26 = 335448012674828984LLU;

	t26 = (((x1357|x1358)-x1359)>>x1360);

	if (t26 != 9223372036854775768LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1433 = 108654982667379310LLU;
	static int32_t x1434 = 0;
	static uint64_t t27 = 143985376570216513LLU;

	t27 = (((x1433|x1434)-x1435)>>x1436);

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1453 = 5713482U;
	int16_t x1454 = -1665;
	volatile int32_t x1455 = 7;
	uint8_t x1456 = 25U;
	uint32_t t28 = 37079U;

	t28 = (((x1453|x1454)-x1455)>>x1456);

	if (t28 != 127U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1521 = -1;
	int16_t x1522 = 3;
	static int8_t x1523 = INT8_MIN;
	volatile int16_t x1524 = 1;
	int32_t t29 = 0;

	t29 = (((x1521|x1522)-x1523)>>x1524);

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1570 = UINT64_MAX;
	int8_t x1571 = INT8_MIN;
	int8_t x1572 = 3;

	t30 = (((x1569|x1570)-x1571)>>x1572);

	if (t30 != 15LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1593 = INT32_MIN;
	uint32_t x1594 = 1U;
	uint16_t x1595 = 9175U;
	static int8_t x1596 = 7;
	uint32_t t31 = 677660U;

	t31 = (((x1593|x1594)-x1595)>>x1596);

	if (t31 != 16777144U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1618 = 9100726186LLU;
	uint8_t x1620 = 1U;

	t32 = (((x1617|x1618)-x1619)>>x1620);

	if (t32 != 7516192767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1629 = INT32_MIN;
	int8_t x1630 = 6;
	volatile int32_t x1631 = INT32_MIN;
	volatile int32_t t33 = 2380;

	t33 = (((x1629|x1630)-x1631)>>x1632);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1637 = INT32_MAX;
	uint16_t x1638 = 0U;
	uint16_t x1639 = 13U;
	uint16_t x1640 = 31U;
	volatile int32_t t34 = -48;

	t34 = (((x1637|x1638)-x1639)>>x1640);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1717 = UINT64_MAX;
	int32_t x1718 = -1;
	int8_t x1719 = -1;

	t35 = (((x1717|x1718)-x1719)>>x1720);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1749 = INT32_MIN;
	int32_t x1750 = INT32_MAX;
	volatile uint32_t x1752 = 2U;

	t36 = (((x1749|x1750)-x1751)>>x1752);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1773 = INT16_MAX;
	static int8_t x1774 = INT8_MIN;
	volatile uint64_t x1775 = 3799672078LLU;
	volatile int16_t x1776 = 5;
	uint64_t t37 = 190910483070809980LLU;

	t37 = (((x1773|x1774)-x1775)>>x1776);

	if (t37 != 576460752184683735LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1785 = UINT64_MAX;
	int8_t x1786 = 62;
	uint64_t t38 = 3137LLU;

	t38 = (((x1785|x1786)-x1787)>>x1788);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1791 = INT64_MIN;
	int8_t x1792 = 2;
	uint64_t t39 = 76LLU;

	t39 = (((x1789|x1790)-x1791)>>x1792);

	if (t39 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1869 = INT64_MAX;
	int16_t x1871 = INT16_MIN;
	uint16_t x1872 = 2U;
	static int64_t t40 = 8606259LL;

	t40 = (((x1869|x1870)-x1871)>>x1872);

	if (t40 != 8191LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1909 = 5U;
	int8_t x1910 = -1;
	int16_t x1911 = INT16_MIN;
	volatile uint8_t x1912 = 0U;
	static volatile int32_t t41 = -9;

	t41 = (((x1909|x1910)-x1911)>>x1912);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1957 = INT32_MIN;
	int8_t x1959 = INT8_MIN;
	volatile int16_t x1960 = 7;
	volatile uint64_t t42 = 112LLU;

	t42 = (((x1957|x1958)-x1959)>>x1960);

	if (t42 != 144115188069962642LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2026 = INT16_MAX;
	volatile int16_t x2027 = 318;
	uint64_t x2028 = 0LLU;
	volatile int32_t t43 = -1;

	t43 = (((x2025|x2026)-x2027)>>x2028);

	if (t43 != 582450881) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2137 = -1;
	volatile uint8_t x2138 = 2U;
	int64_t x2139 = INT64_MIN;
	volatile int16_t x2140 = 1;
	int64_t t44 = -131210150634706LL;

	t44 = (((x2137|x2138)-x2139)>>x2140);

	if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2162 = UINT32_MAX;
	static uint8_t x2164 = 3U;
	volatile uint32_t t45 = 189991855U;

	t45 = (((x2161|x2162)-x2163)>>x2164);

	if (t45 != 15U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2189 = UINT16_MAX;
	int64_t x2190 = 6979597112309743LL;
	static volatile uint8_t x2191 = 14U;
	int32_t x2192 = 2;
	int64_t t46 = -7161109028LL;

	t46 = (((x2189|x2190)-x2191)>>x2192);

	if (t46 != 1744899278077948LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2209 = 957;
	static int32_t x2210 = -1260305;
	uint32_t x2211 = 292276U;
	volatile int8_t x2212 = 0;
	uint32_t t47 = 128103U;

	t47 = (((x2209|x2210)-x2211)>>x2212);

	if (t47 != 4293415499U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2241 = 20186U;
	static volatile int32_t x2242 = 625917;
	volatile uint32_t x2243 = 2646U;
	uint8_t x2244 = 6U;
	static volatile uint32_t t48 = 17U;

	t48 = (((x2241|x2242)-x2243)>>x2244);

	if (t48 != 10002U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2381 = 51;
	int32_t x2382 = INT32_MAX;
	uint64_t x2383 = UINT64_MAX;
	static uint16_t x2384 = 25U;
	volatile uint64_t t49 = 404548391278016LLU;

	t49 = (((x2381|x2382)-x2383)>>x2384);

	if (t49 != 64LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2413 = 119;
	static volatile int16_t x2414 = -1;
	int64_t x2415 = INT64_MIN;
	uint16_t x2416 = 2U;

	t50 = (((x2413|x2414)-x2415)>>x2416);

	if (t50 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2461 = INT8_MAX;
	static uint32_t x2462 = UINT32_MAX;
	uint32_t x2463 = UINT32_MAX;
	uint32_t t51 = 744U;

	t51 = (((x2461|x2462)-x2463)>>x2464);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2485 = 2250U;
	static int64_t x2486 = INT64_MAX;
	volatile uint16_t x2487 = 4024U;
	uint8_t x2488 = 3U;

	t52 = (((x2485|x2486)-x2487)>>x2488);

	if (t52 != 1152921504606846472LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2553 = 91U;
	static int8_t x2554 = -1;
	int32_t x2555 = -1;
	uint16_t x2556 = 1U;
	uint32_t t53 = 3U;

	t53 = (((x2553|x2554)-x2555)>>x2556);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2565 = INT16_MIN;
	int32_t x2566 = 3191645;
	uint64_t x2567 = UINT64_MAX;
	uint64_t t54 = 430814667930291497LLU;

	t54 = (((x2565|x2566)-x2567)>>x2568);

	if (t54 != 9223372036854765999LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2585 = -30;
	int16_t x2586 = -1;
	int16_t x2587 = -1;
	uint8_t x2588 = 24U;
	int32_t t55 = 1028055803;

	t55 = (((x2585|x2586)-x2587)>>x2588);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2649 = 3U;
	uint32_t x2650 = 11768U;
	int16_t x2651 = -91;
	uint16_t x2652 = 17U;

	t56 = (((x2649|x2650)-x2651)>>x2652);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2682 = INT64_MIN;
	uint64_t x2683 = 1069122378452LLU;
	uint8_t x2684 = 9U;

	t57 = (((x2681|x2682)-x2683)>>x2684);

	if (t57 != 35947633372952126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2722 = 2587U;
	uint64_t x2723 = UINT64_MAX;
	int8_t x2724 = 5;
	uint64_t t58 = 7055118406LLU;

	t58 = (((x2721|x2722)-x2723)>>x2724);

	if (t58 != 84LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2777 = 174;
	uint8_t x2778 = 3U;
	int32_t x2779 = -1;
	static int8_t x2780 = 1;
	static volatile int32_t t59 = 508732533;

	t59 = (((x2777|x2778)-x2779)>>x2780);

	if (t59 != 88) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2797 = 56520LLU;
	int8_t x2798 = INT8_MIN;
	uint8_t x2799 = UINT8_MAX;
	int8_t x2800 = 8;
	volatile uint64_t t60 = 38529712994522LLU;

	t60 = (((x2797|x2798)-x2799)>>x2800);

	if (t60 != 72057594037927934LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x2849 = 2;
	int32_t x2850 = -226960338;
	static uint64_t x2851 = 55LLU;
	volatile uint16_t x2852 = 43U;
	uint64_t t61 = 15358119LLU;

	t61 = (((x2849|x2850)-x2851)>>x2852);

	if (t61 != 2097151LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2881 = UINT32_MAX;
	uint8_t x2882 = 61U;
	static uint64_t x2883 = 13702155881676831LLU;
	static volatile uint8_t x2884 = 15U;
	uint64_t t62 = 13LLU;

	t62 = (((x2881|x2882)-x2883)>>x2884);

	if (t62 != 562531796939783LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2913 = INT8_MIN;
	static int8_t x2914 = 1;
	volatile uint64_t x2915 = 614653444594LLU;
	uint8_t x2916 = 0U;
	volatile uint64_t t63 = 5LLU;

	t63 = (((x2913|x2914)-x2915)>>x2916);

	if (t63 != 18446743459056106895LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2921 = INT64_MAX;
	static int8_t x2922 = -1;
	int8_t x2923 = INT8_MIN;
	volatile int64_t t64 = 1LL;

	t64 = (((x2921|x2922)-x2923)>>x2924);

	if (t64 != 3LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2929 = 14U;
	uint64_t x2930 = 21538460LLU;
	int64_t x2931 = INT64_MIN;
	static uint16_t x2932 = 13U;
	volatile uint64_t t65 = 30141693283818LLU;

	t65 = (((x2929|x2930)-x2931)>>x2932);

	if (t65 != 1125899906845253LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2977 = INT8_MIN;
	uint64_t x2978 = 1775223119LLU;
	int32_t x2979 = -1;
	uint8_t x2980 = 19U;
	uint64_t t66 = 164381LLU;

	t66 = (((x2977|x2978)-x2979)>>x2980);

	if (t66 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3006 = UINT8_MAX;
	int64_t x3007 = INT64_MIN;
	int32_t x3008 = 0;
	uint64_t t67 = 811228020873LLU;

	t67 = (((x3005|x3006)-x3007)>>x3008);

	if (t67 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3073 = INT8_MIN;
	volatile uint64_t x3074 = UINT64_MAX;
	static uint64_t x3075 = 125665LLU;
	static int8_t x3076 = 0;
	volatile uint64_t t68 = 20332324737556LLU;

	t68 = (((x3073|x3074)-x3075)>>x3076);

	if (t68 != 18446744073709425950LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3081 = INT32_MAX;
	uint32_t x3083 = 0U;
	uint8_t x3084 = 1U;
	uint32_t t69 = 65139606U;

	t69 = (((x3081|x3082)-x3083)>>x3084);

	if (t69 != 1073741823U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3125 = INT8_MIN;
	static uint8_t x3126 = 3U;
	static uint64_t x3127 = 1273126878490LLU;
	uint64_t x3128 = 8LLU;
	uint64_t t70 = 1569972344LLU;

	t70 = (((x3125|x3126)-x3127)>>x3128);

	if (t70 != 72057589064776066LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3173 = 24U;
	static int8_t x3176 = 3;
	volatile int64_t t71 = -6215489869751525LL;

	t71 = (((x3173|x3174)-x3175)>>x3176);

	if (t71 != 155310584LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3229 = 102LLU;
	static int64_t x3231 = INT64_MIN;
	int16_t x3232 = 23;
	uint64_t t72 = 259566252172850226LLU;

	t72 = (((x3229|x3230)-x3231)>>x3232);

	if (t72 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3247 = 2379057LL;
	int64_t t73 = 82730613285656LL;

	t73 = (((x3245|x3246)-x3247)>>x3248);

	if (t73 != 2145104590LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3281 = -14612137779LL;
	uint64_t x3282 = 3056LLU;
	uint64_t x3283 = 3680LLU;
	volatile uint8_t x3284 = 4U;
	volatile uint64_t t74 = 3789007026742690LLU;

	t74 = (((x3281|x3282)-x3283)>>x3284);

	if (t74 != 1152921503693588185LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3314 = INT8_MIN;
	uint8_t x3315 = 0U;
	volatile int8_t x3316 = 1;
	uint64_t t75 = 484799685453688LLU;

	t75 = (((x3313|x3314)-x3315)>>x3316);

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3385 = 190418907U;
	static int8_t x3386 = INT8_MAX;
	int8_t x3387 = INT8_MIN;
	uint8_t x3388 = 1U;
	volatile uint32_t t76 = 255910587U;

	t76 = (((x3385|x3386)-x3387)>>x3388);

	if (t76 != 95209535U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3414 = INT64_MIN;
	volatile int16_t x3415 = INT16_MIN;
	volatile uint16_t x3416 = 22U;

	t77 = (((x3413|x3414)-x3415)>>x3416);

	if (t77 != 2199023256208LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3437 = INT32_MIN;
	int32_t x3438 = INT32_MIN;
	volatile uint32_t x3439 = 713796U;
	uint32_t t78 = 70U;

	t78 = (((x3437|x3438)-x3439)>>x3440);

	if (t78 != 31U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3549 = 212;
	static int16_t x3551 = INT16_MIN;
	uint32_t x3552 = 24U;
	volatile int32_t t79 = 476918;

	t79 = (((x3549|x3550)-x3551)>>x3552);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x3553 = -2;
	uint16_t x3554 = UINT16_MAX;
	int16_t x3555 = -16043;
	int32_t x3556 = 12;
	volatile int32_t t80 = -9673126;

	t80 = (((x3553|x3554)-x3555)>>x3556);

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3637 = 1669;
	int8_t x3639 = INT8_MAX;
	int8_t x3640 = 11;
	volatile int32_t t81 = 1;

	t81 = (((x3637|x3638)-x3639)>>x3640);

	if (t81 != 250) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3662 = 29LLU;
	uint8_t x3663 = UINT8_MAX;
	static volatile int32_t x3664 = 14;
	volatile uint64_t t82 = 88LLU;

	t82 = (((x3661|x3662)-x3663)>>x3664);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3702 = 516432457354LLU;
	int8_t x3703 = 0;
	volatile uint64_t t83 = 635084151LLU;

	t83 = (((x3701|x3702)-x3703)>>x3704);

	if (t83 != 516432457690LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x3751 = INT8_MIN;
	static uint8_t x3752 = 6U;
	volatile uint32_t t84 = 419124U;

	t84 = (((x3749|x3750)-x3751)>>x3752);

	if (t84 != 4687361U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3769 = INT8_MIN;
	int64_t x3770 = -33116761LL;
	uint16_t x3772 = 24U;
	volatile int64_t t85 = 2LL;

	t85 = (((x3769|x3770)-x3771)>>x3772);

	if (t85 != 549755813887LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3793 = 15353560510784911LL;
	int8_t x3795 = INT8_MIN;
	static uint8_t x3796 = 5U;

	t86 = (((x3793|x3794)-x3795)>>x3796);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3973 = 3162462;
	volatile uint16_t x3974 = 1820U;
	int64_t x3975 = -1LL;
	static uint64_t x3976 = 2LLU;
	int64_t t87 = -61790LL;

	t87 = (((x3973|x3974)-x3975)>>x3976);

	if (t87 != 790999LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4053 = UINT32_MAX;
	uint32_t x4055 = UINT32_MAX;
	uint8_t x4056 = 5U;

	t88 = (((x4053|x4054)-x4055)>>x4056);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x4105 = 1776994;
	int8_t x4106 = INT8_MAX;
	int16_t x4107 = INT16_MIN;
	uint8_t x4108 = 5U;
	volatile int32_t t89 = -75;

	t89 = (((x4105|x4106)-x4107)>>x4108);

	if (t89 != 56555) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4158 = INT8_MIN;
	uint32_t x4159 = 249794373U;
	int8_t x4160 = 10;
	uint32_t t90 = 28U;

	t90 = (((x4157|x4158)-x4159)>>x4160);

	if (t90 != 3950364U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4177 = 54247965875752LLU;
	uint8_t x4179 = 0U;
	static uint64_t t91 = 3652949629259149LLU;

	t91 = (((x4177|x4178)-x4179)>>x4180);

	if (t91 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4245 = INT8_MIN;
	volatile int64_t x4246 = 30360435000902LL;
	uint16_t x4248 = 13U;
	volatile int64_t t92 = 28017903007LL;

	t92 = (((x4245|x4246)-x4247)>>x4248);

	if (t92 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4257 = 3U;
	int16_t x4258 = INT16_MIN;
	int8_t x4259 = 55;
	volatile uint32_t x4260 = 23U;
	volatile uint32_t t93 = 5899U;

	t93 = (((x4257|x4258)-x4259)>>x4260);

	if (t93 != 511U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x4270 = 3528360LL;
	int8_t x4272 = 7;

	t94 = (((x4269|x4270)-x4271)>>x4272);

	if (t94 != 16777214LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x4277 = -356;
	int32_t x4278 = -1;
	int16_t x4279 = -1901;
	static int16_t x4280 = 0;
	volatile int32_t t95 = 1292378;

	t95 = (((x4277|x4278)-x4279)>>x4280);

	if (t95 != 1900) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4337 = INT64_MAX;
	static int16_t x4338 = INT16_MAX;
	static int16_t x4340 = 3;
	static int64_t t96 = 4250756LL;

	t96 = (((x4337|x4338)-x4339)>>x4340);

	if (t96 != 1152921504606846973LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4370 = 4116757969LL;
	volatile int16_t x4371 = -1;
	volatile uint64_t x4372 = 2LLU;

	t97 = (((x4369|x4370)-x4371)>>x4372);

	if (t97 != 1029193718LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4410 = 1372U;
	static volatile int64_t x4411 = -1LL;
	static uint8_t x4412 = 0U;
	uint64_t t98 = 1373024LLU;

	t98 = (((x4409|x4410)-x4411)>>x4412);

	if (t98 != 3675645LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4497 = INT64_MAX;
	uint8_t x4498 = UINT8_MAX;
	uint32_t x4499 = 10639763U;
	uint64_t x4500 = 19LLU;

	t99 = (((x4497|x4498)-x4499)>>x4500);

	if (t99 != 17592186044395LL) { NG(); } else { ; }
	
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


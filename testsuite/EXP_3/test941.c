#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 8371167LLU;
volatile int8_t x145 = 1;
uint8_t x147 = 40U;
int64_t x182 = 16LL;
int32_t t4 = -1015;
int32_t x362 = 291902;
volatile uint32_t t10 = 422306162U;
int64_t x497 = INT64_MIN;
int16_t x500 = 2;
volatile int64_t x526 = 4381407553LL;
static uint8_t x527 = UINT8_MAX;
int32_t t12 = 834;
static uint8_t x540 = 9U;
static int32_t x577 = INT32_MIN;
int16_t x579 = 3390;
volatile int32_t t14 = -735470;
static uint8_t x596 = 17U;
static volatile uint8_t x631 = 58U;
int16_t x685 = -2583;
int64_t x730 = 658613856LL;
uint16_t x950 = 23602U;
volatile uint64_t x951 = UINT64_MAX;
uint8_t x964 = 21U;
int16_t x965 = 103;
uint64_t x967 = 116645787028881016LLU;
static uint64_t x985 = 3742545172LLU;
uint32_t x986 = UINT32_MAX;
int32_t x1032 = 1;
int32_t t24 = -302727;
int32_t t25 = -2;
int32_t t26 = 3;
static uint64_t x1127 = 64140LLU;
uint8_t x1128 = 4U;
uint32_t x1151 = 2252U;
static int64_t x1290 = -2100368424454176LL;
volatile int16_t x1361 = INT16_MIN;
int32_t x1363 = 6346;
int8_t x1364 = 0;
int32_t t30 = -26;
uint8_t x1424 = 0U;
static volatile int8_t x1533 = -1;
int32_t x1534 = INT32_MIN;
int16_t x1554 = INT16_MAX;
volatile int16_t x1637 = INT16_MIN;
static uint64_t x1639 = UINT64_MAX;
volatile int32_t t37 = 59755570;
int64_t x1985 = 3574LL;
int8_t x1986 = INT8_MIN;
volatile uint8_t x1988 = 2U;
int64_t t40 = 101334637793492LL;
volatile int64_t x1994 = INT64_MIN;
volatile int32_t t42 = 7725;
volatile int64_t t43 = 27521769439911447LL;
int8_t x2093 = INT8_MIN;
uint64_t x2096 = 1LLU;
uint32_t x2210 = 0U;
volatile uint64_t t46 = 1326LLU;
uint32_t x2291 = 30148283U;
int8_t x2292 = 0;
uint64_t x2324 = 1LLU;
int16_t x2608 = 0;
volatile uint16_t x2709 = 26U;
volatile uint64_t x2712 = 3LLU;
int64_t x2781 = INT64_MIN;
volatile int32_t t56 = 278611765;
volatile uint32_t x2851 = UINT32_MAX;
uint8_t x2895 = 4U;
uint32_t t61 = 6743816U;
uint16_t x3154 = 7U;
static volatile int8_t x3155 = 4;
volatile uint8_t x3156 = 1U;
int32_t x3266 = INT32_MIN;
volatile uint16_t x3268 = 7U;
uint8_t x3277 = 56U;
volatile uint64_t x3355 = UINT64_MAX;
int64_t x3425 = INT64_MAX;
int16_t x3441 = INT16_MIN;
int32_t x3494 = INT32_MIN;
int16_t x3496 = 0;
volatile int64_t t70 = 139032514551470650LL;
static int32_t x3513 = -49;
volatile int8_t x3574 = -1;
int32_t x3721 = 5599;
static uint32_t x3723 = UINT32_MAX;
static uint32_t x4049 = 218352785U;
int32_t t79 = -205904515;
uint16_t x4070 = UINT16_MAX;
int32_t t80 = -80976;
int8_t x4094 = -1;
static int8_t x4136 = 16;
int32_t x4174 = INT32_MIN;
int64_t t84 = 379452459527210LL;
volatile int64_t x4569 = -960329500300LL;
static uint64_t x4587 = UINT64_MAX;
int64_t x4717 = INT64_MIN;
int8_t x4741 = -1;
int8_t x4744 = 0;
volatile int32_t t91 = 0;
int32_t t92 = -1976;
uint8_t x5111 = 24U;
int8_t x5134 = INT8_MIN;
volatile uint8_t x5135 = 11U;
volatile int32_t t94 = -24531958;
uint8_t x5189 = UINT8_MAX;
static volatile int32_t x5190 = INT32_MIN;
uint16_t x5357 = 3821U;


void f0(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int8_t x94 = 12;
	static uint64_t x95 = UINT64_MAX;
	static volatile int8_t x96 = 2;

	t0 = ((x93==x94)%(x95<<x96));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x146 = 12LLU;
	uint16_t x148 = 12U;
	int32_t t1 = 14;

	t1 = ((x145==x146)%(x147<<x148));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x181 = 3;
	uint32_t x183 = 39U;
	volatile uint16_t x184 = 1U;
	volatile uint32_t t2 = 1U;

	t2 = ((x181==x182)%(x183<<x184));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x225 = INT32_MAX;
	uint64_t x226 = UINT64_MAX;
	uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 11U;
	uint64_t t3 = 1012582256LLU;

	t3 = ((x225==x226)%(x227<<x228));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x249 = 788105;
	uint8_t x250 = 38U;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = 1U;

	t4 = ((x249==x250)%(x251<<x252));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x313 = 0U;
	int16_t x314 = INT16_MIN;
	volatile int16_t x315 = INT16_MAX;
	uint32_t x316 = 3U;
	int32_t t5 = -42;

	t5 = ((x313==x314)%(x315<<x316));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x333 = -1514651254LL;
	int16_t x334 = 60;
	int64_t x335 = 9097206056157LL;
	volatile uint8_t x336 = 3U;
	int64_t t6 = -277LL;

	t6 = ((x333==x334)%(x335<<x336));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x341 = 42U;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = 250183223LL;
	volatile int32_t x344 = 13;
	int64_t t7 = 999387853035761845LL;

	t7 = ((x341==x342)%(x343<<x344));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x361 = -3;
	volatile uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 3U;
	static volatile uint32_t t8 = 1841U;

	t8 = ((x361==x362)%(x363<<x364));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x381 = 51029U;
	int32_t x382 = 907495;
	int16_t x383 = INT16_MAX;
	static int8_t x384 = 1;
	static volatile int32_t t9 = -13;

	t9 = ((x381==x382)%(x383<<x384));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x401 = -2200120856024101434LL;
	volatile int64_t x402 = -126LL;
	uint32_t x403 = UINT32_MAX;
	volatile uint64_t x404 = 27LLU;

	t10 = ((x401==x402)%(x403<<x404));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x498 = 779624145302407LLU;
	uint64_t x499 = 1225841LLU;
	uint64_t t11 = 234617LLU;

	t11 = ((x497==x498)%(x499<<x500));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x525 = 5;
	int8_t x528 = 1;

	t12 = ((x525==x526)%(x527<<x528));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x537 = -1;
	uint64_t x538 = 7679856310328853126LLU;
	uint8_t x539 = UINT8_MAX;
	int32_t t13 = -5772;

	t13 = ((x537==x538)%(x539<<x540));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x578 = INT64_MAX;
	static uint8_t x580 = 10U;

	t14 = ((x577==x578)%(x579<<x580));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x593 = -3;
	volatile int64_t x594 = -125257961934509562LL;
	volatile int8_t x595 = INT8_MAX;
	int32_t t15 = 5;

	t15 = ((x593==x594)%(x595<<x596));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x629 = INT8_MAX;
	int8_t x630 = INT8_MIN;
	uint32_t x632 = 11U;
	int32_t t16 = -1;

	t16 = ((x629==x630)%(x631<<x632));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x686 = 552U;
	volatile uint16_t x687 = UINT16_MAX;
	uint16_t x688 = 10U;
	int32_t t17 = 6;

	t17 = ((x685==x686)%(x687<<x688));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x729 = INT32_MIN;
	uint64_t x731 = 33LLU;
	uint16_t x732 = 12U;
	uint64_t t18 = 9164892945686268LLU;

	t18 = ((x729==x730)%(x731<<x732));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x873 = INT16_MIN;
	static int64_t x874 = 361146699081917732LL;
	volatile int8_t x875 = INT8_MAX;
	uint8_t x876 = 0U;
	volatile int32_t t19 = -22945;

	t19 = ((x873==x874)%(x875<<x876));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x949 = INT32_MIN;
	uint8_t x952 = 14U;
	static uint64_t t20 = 3118LLU;

	t20 = ((x949==x950)%(x951<<x952));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x961 = 529975870U;
	uint64_t x962 = UINT64_MAX;
	int8_t x963 = INT8_MAX;
	static int32_t t21 = -978446691;

	t21 = ((x961==x962)%(x963<<x964));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x966 = INT8_MIN;
	uint16_t x968 = 20U;
	volatile uint64_t t22 = 889310162819356LLU;

	t22 = ((x965==x966)%(x967<<x968));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x987 = 358;
	int8_t x988 = 1;
	static volatile int32_t t23 = 451892903;

	t23 = ((x985==x986)%(x987<<x988));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1029 = UINT8_MAX;
	int64_t x1030 = 217570622904LL;
	uint8_t x1031 = 69U;

	t24 = ((x1029==x1030)%(x1031<<x1032));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1061 = UINT64_MAX;
	uint8_t x1062 = 11U;
	uint16_t x1063 = UINT16_MAX;
	static uint64_t x1064 = 0LLU;

	t25 = ((x1061==x1062)%(x1063<<x1064));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1121 = INT8_MIN;
	static volatile int32_t x1122 = -1;
	static uint16_t x1123 = 2U;
	uint8_t x1124 = 6U;

	t26 = ((x1121==x1122)%(x1123<<x1124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1125 = INT32_MAX;
	int16_t x1126 = INT16_MAX;
	uint64_t t27 = 2104LLU;

	t27 = ((x1125==x1126)%(x1127<<x1128));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1149 = UINT8_MAX;
	static int8_t x1150 = 0;
	uint32_t x1152 = 6U;
	static volatile uint32_t t28 = 122U;

	t28 = ((x1149==x1150)%(x1151<<x1152));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1289 = 32866596711393048LL;
	uint32_t x1291 = 1U;
	int8_t x1292 = 6;
	uint32_t t29 = 6211U;

	t29 = ((x1289==x1290)%(x1291<<x1292));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1362 = -488612616;

	t30 = ((x1361==x1362)%(x1363<<x1364));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1421 = INT64_MAX;
	int16_t x1422 = -992;
	static uint8_t x1423 = 108U;
	volatile int32_t t31 = -9716949;

	t31 = ((x1421==x1422)%(x1423<<x1424));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1535 = 65900989LL;
	uint8_t x1536 = 11U;
	volatile int64_t t32 = 5621013882228LL;

	t32 = ((x1533==x1534)%(x1535<<x1536));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1541 = 19803869218255LLU;
	int16_t x1542 = -1;
	int16_t x1543 = INT16_MAX;
	uint16_t x1544 = 15U;
	volatile int32_t t33 = -12;

	t33 = ((x1541==x1542)%(x1543<<x1544));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x1553 = INT64_MAX;
	int32_t x1555 = INT32_MAX;
	uint8_t x1556 = 0U;
	static volatile int32_t t34 = -1;

	t34 = ((x1553==x1554)%(x1555<<x1556));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1613 = -1LL;
	int16_t x1614 = 10;
	uint8_t x1615 = UINT8_MAX;
	volatile uint8_t x1616 = 16U;
	volatile int32_t t35 = -885927299;

	t35 = ((x1613==x1614)%(x1615<<x1616));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1638 = -1LL;
	volatile uint32_t x1640 = 40U;
	volatile uint64_t t36 = 626696698448338510LLU;

	t36 = ((x1637==x1638)%(x1639<<x1640));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1697 = INT64_MIN;
	volatile int64_t x1698 = INT64_MAX;
	int16_t x1699 = 521;
	static volatile uint16_t x1700 = 2U;

	t37 = ((x1697==x1698)%(x1699<<x1700));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1729 = INT64_MIN;
	static int64_t x1730 = INT64_MIN;
	uint64_t x1731 = 2588812LLU;
	static uint8_t x1732 = 2U;
	volatile uint64_t t38 = 13948341653035539LLU;

	t38 = ((x1729==x1730)%(x1731<<x1732));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1761 = -1;
	int16_t x1762 = -1;
	int32_t x1763 = 95;
	static volatile int8_t x1764 = 0;
	static int32_t t39 = -5645910;

	t39 = ((x1761==x1762)%(x1763<<x1764));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1987 = 1445354LL;

	t40 = ((x1985==x1986)%(x1987<<x1988));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1993 = -23;
	int32_t x1995 = 31;
	uint8_t x1996 = 16U;
	volatile int32_t t41 = -562;

	t41 = ((x1993==x1994)%(x1995<<x1996));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2001 = -1;
	int32_t x2002 = INT32_MAX;
	uint8_t x2003 = UINT8_MAX;
	uint8_t x2004 = 13U;

	t42 = ((x2001==x2002)%(x2003<<x2004));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2061 = -3311962;
	int8_t x2062 = 1;
	int64_t x2063 = 5438565617070957LL;
	volatile uint16_t x2064 = 3U;

	t43 = ((x2061==x2062)%(x2063<<x2064));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2094 = UINT64_MAX;
	uint64_t x2095 = 68676298885823LLU;
	uint64_t t44 = 11997LLU;

	t44 = ((x2093==x2094)%(x2095<<x2096));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2117 = UINT32_MAX;
	uint16_t x2118 = 2U;
	int8_t x2119 = 1;
	uint8_t x2120 = 22U;
	volatile int32_t t45 = -494617;

	t45 = ((x2117==x2118)%(x2119<<x2120));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2209 = -1LL;
	uint64_t x2211 = 82LLU;
	uint8_t x2212 = 54U;

	t46 = ((x2209==x2210)%(x2211<<x2212));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2289 = INT64_MIN;
	uint64_t x2290 = 25012262013232LLU;
	volatile uint32_t t47 = 229624U;

	t47 = ((x2289==x2290)%(x2291<<x2292));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2297 = -1;
	volatile uint16_t x2298 = 0U;
	static uint8_t x2299 = UINT8_MAX;
	uint32_t x2300 = 17U;
	volatile int32_t t48 = -326;

	t48 = ((x2297==x2298)%(x2299<<x2300));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2321 = INT32_MIN;
	int16_t x2322 = -1867;
	int16_t x2323 = 1;
	volatile int32_t t49 = 71;

	t49 = ((x2321==x2322)%(x2323<<x2324));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2537 = 121U;
	int32_t x2538 = -1;
	uint32_t x2539 = 5416U;
	uint8_t x2540 = 7U;
	uint32_t t50 = 385244U;

	t50 = ((x2537==x2538)%(x2539<<x2540));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2549 = INT8_MIN;
	int64_t x2550 = -1LL;
	uint8_t x2551 = 2U;
	uint8_t x2552 = 3U;
	int32_t t51 = -56607084;

	t51 = ((x2549==x2550)%(x2551<<x2552));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2605 = INT8_MIN;
	int64_t x2606 = 6LL;
	uint32_t x2607 = 182807390U;
	uint32_t t52 = 62U;

	t52 = ((x2605==x2606)%(x2607<<x2608));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2609 = 1U;
	int8_t x2610 = -3;
	uint8_t x2611 = 2U;
	int8_t x2612 = 1;
	volatile int32_t t53 = -615160525;

	t53 = ((x2609==x2610)%(x2611<<x2612));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2710 = 16702520107LLU;
	volatile uint8_t x2711 = 26U;
	static int32_t t54 = 4202;

	t54 = ((x2709==x2710)%(x2711<<x2712));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2782 = INT16_MIN;
	uint16_t x2783 = 25U;
	static volatile int16_t x2784 = 1;
	int32_t t55 = -214476434;

	t55 = ((x2781==x2782)%(x2783<<x2784));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2833 = 116283699622LLU;
	int64_t x2834 = INT64_MIN;
	int16_t x2835 = 10566;
	volatile uint8_t x2836 = 3U;

	t56 = ((x2833==x2834)%(x2835<<x2836));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2849 = INT8_MIN;
	static uint16_t x2850 = UINT16_MAX;
	int32_t x2852 = 12;
	volatile uint32_t t57 = 48303U;

	t57 = ((x2849==x2850)%(x2851<<x2852));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2857 = 20957705LLU;
	uint16_t x2858 = 482U;
	static volatile uint16_t x2859 = 4U;
	volatile uint8_t x2860 = 0U;
	int32_t t58 = 181573730;

	t58 = ((x2857==x2858)%(x2859<<x2860));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2893 = 358907U;
	volatile int8_t x2894 = -1;
	uint16_t x2896 = 1U;
	static int32_t t59 = 20765259;

	t59 = ((x2893==x2894)%(x2895<<x2896));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2905 = UINT16_MAX;
	int64_t x2906 = INT64_MIN;
	uint32_t x2907 = 1U;
	uint8_t x2908 = 5U;
	static uint32_t t60 = 0U;

	t60 = ((x2905==x2906)%(x2907<<x2908));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x3089 = INT32_MAX;
	volatile int8_t x3090 = -1;
	uint32_t x3091 = 53U;
	uint32_t x3092 = 1U;

	t61 = ((x3089==x3090)%(x3091<<x3092));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3133 = 1;
	static int64_t x3134 = -1075826492754024431LL;
	int64_t x3135 = 120218275705214LL;
	uint16_t x3136 = 0U;
	volatile int64_t t62 = 931150640759303LL;

	t62 = ((x3133==x3134)%(x3135<<x3136));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3153 = UINT32_MAX;
	int32_t t63 = -310649638;

	t63 = ((x3153==x3154)%(x3155<<x3156));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3265 = INT32_MAX;
	static uint64_t x3267 = 3471402485293693LLU;
	volatile uint64_t t64 = 984984512LLU;

	t64 = ((x3265==x3266)%(x3267<<x3268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3278 = -3;
	int16_t x3279 = INT16_MAX;
	volatile int8_t x3280 = 1;
	int32_t t65 = 12306419;

	t65 = ((x3277==x3278)%(x3279<<x3280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3353 = UINT32_MAX;
	volatile uint8_t x3354 = 47U;
	int8_t x3356 = 1;
	uint64_t t66 = 3LLU;

	t66 = ((x3353==x3354)%(x3355<<x3356));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3426 = 45;
	int16_t x3427 = 58;
	int8_t x3428 = 0;
	static int32_t t67 = -123;

	t67 = ((x3425==x3426)%(x3427<<x3428));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x3442 = INT16_MAX;
	volatile int8_t x3443 = 15;
	static uint8_t x3444 = 1U;
	static int32_t t68 = -482595265;

	t68 = ((x3441==x3442)%(x3443<<x3444));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3461 = INT8_MAX;
	volatile int64_t x3462 = INT64_MIN;
	uint16_t x3463 = 1961U;
	uint16_t x3464 = 1U;
	int32_t t69 = 175;

	t69 = ((x3461==x3462)%(x3463<<x3464));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3493 = 256948668542LLU;
	int64_t x3495 = 285982577461LL;

	t70 = ((x3493==x3494)%(x3495<<x3496));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x3514 = INT64_MIN;
	int8_t x3515 = INT8_MAX;
	uint32_t x3516 = 5U;
	int32_t t71 = 3202;

	t71 = ((x3513==x3514)%(x3515<<x3516));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3573 = INT32_MIN;
	uint64_t x3575 = 1572744962LLU;
	int8_t x3576 = 0;
	uint64_t t72 = 14677701132327275LLU;

	t72 = ((x3573==x3574)%(x3575<<x3576));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3722 = INT64_MAX;
	volatile int16_t x3724 = 1;
	volatile uint32_t t73 = 46929U;

	t73 = ((x3721==x3722)%(x3723<<x3724));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3737 = 0LL;
	uint32_t x3738 = 1783U;
	uint16_t x3739 = 29408U;
	uint8_t x3740 = 5U;
	int32_t t74 = -75927;

	t74 = ((x3737==x3738)%(x3739<<x3740));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3941 = INT8_MIN;
	uint16_t x3942 = 335U;
	int64_t x3943 = INT64_MAX;
	uint8_t x3944 = 0U;
	volatile int64_t t75 = 12LL;

	t75 = ((x3941==x3942)%(x3943<<x3944));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3953 = INT64_MIN;
	int16_t x3954 = -1082;
	int64_t x3955 = 23787201835LL;
	static volatile int8_t x3956 = 0;
	volatile int64_t t76 = -149293505608992LL;

	t76 = ((x3953==x3954)%(x3955<<x3956));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3969 = -1LL;
	int32_t x3970 = -1;
	int32_t x3971 = 11074104;
	uint64_t x3972 = 0LLU;
	int32_t t77 = 227125;

	t77 = ((x3969==x3970)%(x3971<<x3972));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4050 = INT16_MIN;
	volatile uint64_t x4051 = 3645292179427897LLU;
	uint8_t x4052 = 14U;
	uint64_t t78 = 183548LLU;

	t78 = ((x4049==x4050)%(x4051<<x4052));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x4065 = 54698030333685997LLU;
	int32_t x4066 = -1;
	int16_t x4067 = 1559;
	volatile uint16_t x4068 = 12U;

	t79 = ((x4065==x4066)%(x4067<<x4068));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4069 = INT16_MIN;
	static uint16_t x4071 = 3337U;
	static uint8_t x4072 = 1U;

	t80 = ((x4069==x4070)%(x4071<<x4072));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4093 = 74U;
	uint64_t x4095 = 12LLU;
	static int16_t x4096 = 0;
	volatile uint64_t t81 = 5036839685549990850LLU;

	t81 = ((x4093==x4094)%(x4095<<x4096));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4133 = 14U;
	volatile uint8_t x4134 = UINT8_MAX;
	static int8_t x4135 = 13;
	volatile int32_t t82 = 42259776;

	t82 = ((x4133==x4134)%(x4135<<x4136));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4173 = INT32_MAX;
	int8_t x4175 = 2;
	uint16_t x4176 = 26U;
	int32_t t83 = 159;

	t83 = ((x4173==x4174)%(x4175<<x4176));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4365 = INT64_MIN;
	int32_t x4366 = -1754;
	int64_t x4367 = INT64_MAX;
	int8_t x4368 = 0;

	t84 = ((x4365==x4366)%(x4367<<x4368));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4405 = 11746360LLU;
	int32_t x4406 = INT32_MIN;
	int32_t x4407 = 4;
	uint32_t x4408 = 7U;
	volatile int32_t t85 = 2047135;

	t85 = ((x4405==x4406)%(x4407<<x4408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4570 = INT32_MAX;
	uint16_t x4571 = 329U;
	uint16_t x4572 = 1U;
	volatile int32_t t86 = -218934583;

	t86 = ((x4569==x4570)%(x4571<<x4572));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4585 = UINT64_MAX;
	int32_t x4586 = INT32_MIN;
	uint8_t x4588 = 48U;
	volatile uint64_t t87 = 1590588306024282LLU;

	t87 = ((x4585==x4586)%(x4587<<x4588));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4718 = -46;
	uint8_t x4719 = 7U;
	uint8_t x4720 = 0U;
	volatile int32_t t88 = 2;

	t88 = ((x4717==x4718)%(x4719<<x4720));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4725 = -1LL;
	uint64_t x4726 = 731513342935874443LLU;
	uint32_t x4727 = UINT32_MAX;
	volatile uint8_t x4728 = 2U;
	uint32_t t89 = 50U;

	t89 = ((x4725==x4726)%(x4727<<x4728));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4742 = -1;
	static uint32_t x4743 = 30U;
	static volatile uint32_t t90 = 518730610U;

	t90 = ((x4741==x4742)%(x4743<<x4744));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4797 = INT8_MIN;
	int64_t x4798 = INT64_MIN;
	int8_t x4799 = INT8_MAX;
	uint16_t x4800 = 7U;

	t91 = ((x4797==x4798)%(x4799<<x4800));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4885 = -1;
	int64_t x4886 = INT64_MAX;
	uint16_t x4887 = UINT16_MAX;
	volatile uint8_t x4888 = 1U;

	t92 = ((x4885==x4886)%(x4887<<x4888));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5109 = -1LL;
	uint64_t x5110 = 7LLU;
	uint8_t x5112 = 23U;
	static int32_t t93 = 800981009;

	t93 = ((x5109==x5110)%(x5111<<x5112));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x5133 = 19U;
	uint32_t x5136 = 7U;

	t94 = ((x5133==x5134)%(x5135<<x5136));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5191 = 7828;
	int8_t x5192 = 0;
	static volatile int32_t t95 = -2;

	t95 = ((x5189==x5190)%(x5191<<x5192));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x5301 = -837172535LL;
	int64_t x5302 = -1LL;
	uint16_t x5303 = 10U;
	uint8_t x5304 = 22U;
	int32_t t96 = 8080;

	t96 = ((x5301==x5302)%(x5303<<x5304));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5358 = INT16_MIN;
	static volatile uint64_t x5359 = UINT64_MAX;
	uint8_t x5360 = 6U;
	uint64_t t97 = 9LLU;

	t97 = ((x5357==x5358)%(x5359<<x5360));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5385 = UINT8_MAX;
	volatile int32_t x5386 = INT32_MIN;
	volatile int8_t x5387 = 3;
	uint16_t x5388 = 0U;
	volatile int32_t t98 = 1;

	t98 = ((x5385==x5386)%(x5387<<x5388));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5549 = UINT16_MAX;
	uint16_t x5550 = 18579U;
	int16_t x5551 = 9;
	uint8_t x5552 = 0U;
	volatile int32_t t99 = 1;

	t99 = ((x5549==x5550)%(x5551<<x5552));

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


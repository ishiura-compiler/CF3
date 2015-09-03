#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x158 = 23LLU;
int8_t x171 = INT8_MIN;
int8_t x323 = 0;
int8_t x324 = 9;
int8_t x584 = 1;
uint32_t x885 = UINT32_MAX;
volatile int32_t x1003 = -1;
static volatile uint32_t t13 = 563U;
volatile uint16_t x1050 = 3U;
uint64_t t15 = 874LLU;
uint64_t x1110 = 15692866060LLU;
static int8_t x1111 = -1;
static volatile uint64_t t16 = 11LLU;
int64_t t18 = 803LL;
int8_t x1274 = INT8_MAX;
uint64_t x1345 = 81439880117247LLU;
int8_t x1572 = 1;
volatile uint64_t t26 = 8884968315023LLU;
volatile int16_t x1739 = INT16_MIN;
uint32_t t28 = 65U;
uint64_t t29 = 3579932LLU;
int8_t x1955 = -1;
volatile uint32_t t35 = 307392U;
int64_t x2143 = 8002221267606LL;
static uint16_t x2176 = 5U;
int64_t x2306 = -1LL;
int8_t x2308 = 47;
uint64_t t42 = 29632212LLU;
volatile uint64_t t43 = 1022094675301LLU;
volatile int64_t t47 = -2481552875978867106LL;
int32_t t50 = 247809469;
int16_t x2875 = 10;
uint32_t x2971 = UINT32_MAX;
int32_t x3046 = -1;
static int8_t x3047 = INT8_MIN;
uint32_t x3089 = UINT32_MAX;
static uint64_t t54 = 16941071LLU;
volatile uint64_t t55 = 108601685852LLU;
int8_t x3325 = INT8_MAX;
uint16_t x3328 = 10U;
uint32_t t59 = 2035U;
int8_t x3380 = 1;
static int16_t x3734 = INT16_MIN;
uint64_t x3746 = 17038143189504LLU;
uint32_t x3748 = 14U;
int32_t x3749 = -1;
volatile int8_t x3750 = INT8_MIN;
volatile int8_t x3987 = 4;
int16_t x4270 = -1;
uint16_t x4326 = 5632U;
volatile uint64_t x4327 = UINT64_MAX;
int32_t x4343 = INT32_MIN;
int16_t x4423 = -5;
uint64_t x4513 = UINT64_MAX;
int32_t x4517 = -4;
int8_t x4669 = 1;
uint64_t x5078 = UINT64_MAX;
uint64_t x5185 = 23LLU;
int8_t x5186 = INT8_MAX;
uint16_t x5187 = 7521U;
volatile uint64_t t82 = 93850LLU;
uint64_t x5342 = 1LLU;
volatile uint8_t x5369 = UINT8_MAX;
volatile int32_t x5505 = INT32_MIN;
uint32_t x5506 = 96496U;
uint64_t x5643 = 2LLU;
static uint8_t x5652 = 24U;
uint16_t x5687 = UINT16_MAX;
int32_t x5747 = INT32_MAX;
int64_t x5815 = INT64_MIN;
uint64_t t92 = 7216LLU;
uint64_t x6026 = 3691463915903LLU;
uint16_t x6028 = 16U;
int8_t x6149 = -1;
uint64_t x6151 = 3LLU;
static uint64_t t96 = 2LLU;
static int8_t x6210 = INT8_MAX;
uint64_t t97 = 43833751LLU;
uint16_t x6249 = 1159U;
int8_t x6252 = 0;
int32_t x6349 = -1;
uint8_t x6351 = UINT8_MAX;
static int16_t x6352 = 0;


void f0(void) {
	uint64_t x93 = 1LLU;
	volatile uint32_t x94 = 130779318U;
	volatile int64_t x95 = INT64_MAX;
	int8_t x96 = 1;
	uint64_t t0 = 13334227834177789LLU;

	t0 = (((x93*x94)+x95)<<x96);

	if (t0 != 261558634LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x157 = UINT64_MAX;
	static int16_t x159 = -1;
	uint8_t x160 = 6U;
	volatile uint64_t t1 = 395449125LLU;

	t1 = (((x157*x158)+x159)<<x160);

	if (t1 != 18446744073709550080LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x169 = -1LL;
	int8_t x170 = INT8_MIN;
	volatile int32_t x172 = 3;
	int64_t t2 = -99LL;

	t2 = (((x169*x170)+x171)<<x172);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x265 = -1;
	static int16_t x266 = 84;
	uint8_t x267 = UINT8_MAX;
	volatile int16_t x268 = 0;
	static volatile int32_t t3 = -528685155;

	t3 = (((x265*x266)+x267)<<x268);

	if (t3 != 171) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x293 = INT32_MIN;
	static uint64_t x294 = 31LLU;
	static int64_t x295 = INT64_MAX;
	uint8_t x296 = 0U;
	uint64_t t4 = 3066LLU;

	t4 = (((x293*x294)+x295)<<x296);

	if (t4 != 9223371970282782719LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x321 = INT8_MAX;
	volatile uint8_t x322 = 2U;
	int32_t t5 = -175;

	t5 = (((x321*x322)+x323)<<x324);

	if (t5 != 130048) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = 1;
	static uint16_t x391 = 94U;
	static uint32_t x392 = 2U;
	int32_t t6 = 181288841;

	t6 = (((x389*x390)+x391)<<x392);

	if (t6 != 262516) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x581 = UINT8_MAX;
	static uint16_t x582 = UINT16_MAX;
	volatile uint8_t x583 = 87U;
	int32_t t7 = 29429693;

	t7 = (((x581*x582)+x583)<<x584);

	if (t7 != 33423024) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x601 = -1;
	int16_t x602 = INT16_MIN;
	int16_t x603 = INT16_MIN;
	int8_t x604 = 1;
	static int32_t t8 = 235;

	t8 = (((x601*x602)+x603)<<x604);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x605 = 10442626U;
	int16_t x606 = -1;
	int32_t x607 = -1;
	volatile int8_t x608 = 0;
	uint32_t t9 = 5818U;

	t9 = (((x605*x606)+x607)<<x608);

	if (t9 != 4284524669U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x669 = 1489819LL;
	uint32_t x670 = 200U;
	static uint32_t x671 = 463277U;
	int8_t x672 = 31;
	int64_t t10 = -1015246LL;

	t10 = (((x669*x670)+x671)<<x672);

	if (t10 != 640867267977936896LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x689 = UINT64_MAX;
	volatile uint32_t x690 = 5075U;
	static uint16_t x691 = 42U;
	uint32_t x692 = 1U;
	uint64_t t11 = 5LLU;

	t11 = (((x689*x690)+x691)<<x692);

	if (t11 != 18446744073709541550LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x886 = 2126358;
	volatile int16_t x887 = -14730;
	uint8_t x888 = 21U;
	uint32_t t12 = 33U;

	t12 = (((x885*x886)+x887)<<x888);

	if (t12 != 2348810240U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x1001 = INT32_MIN;
	static uint32_t x1002 = UINT32_MAX;
	volatile int32_t x1004 = 0;

	t13 = (((x1001*x1002)+x1003)<<x1004);

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1013 = 7324U;
	volatile uint64_t x1014 = 3788922996LLU;
	static int8_t x1015 = -3;
	int8_t x1016 = 3;
	static volatile uint64_t t14 = 62197748481658120LLU;

	t14 = (((x1013*x1014)+x1015)<<x1016);

	if (t14 != 222000576181608LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x1049 = 57LLU;
	int16_t x1051 = INT16_MIN;
	uint8_t x1052 = 9U;

	t15 = (((x1049*x1050)+x1051)<<x1052);

	if (t15 != 18446744073692861952LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1109 = 4;
	uint64_t x1112 = 2LLU;

	t16 = (((x1109*x1110)+x1111)<<x1112);

	if (t16 != 251085856956LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x1125 = INT16_MIN;
	static int8_t x1126 = INT8_MIN;
	int8_t x1127 = INT8_MIN;
	static uint32_t x1128 = 3U;
	volatile int32_t t17 = -13;

	t17 = (((x1125*x1126)+x1127)<<x1128);

	if (t17 != 33553408) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1265 = INT8_MIN;
	int64_t x1266 = -1LL;
	int32_t x1267 = -1;
	static volatile int8_t x1268 = 3;

	t18 = (((x1265*x1266)+x1267)<<x1268);

	if (t18 != 1016LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1273 = UINT64_MAX;
	int8_t x1275 = 34;
	uint8_t x1276 = 0U;
	volatile uint64_t t19 = 27222226071128LLU;

	t19 = (((x1273*x1274)+x1275)<<x1276);

	if (t19 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1346 = 1300148U;
	uint64_t x1347 = UINT64_MAX;
	uint16_t x1348 = 3U;
	static volatile uint64_t t20 = 65719389561981683LLU;

	t20 = (((x1345*x1346)+x1347)<<x1348);

	if (t20 != 16967694720497797720LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1353 = -1;
	static int16_t x1354 = INT16_MIN;
	int16_t x1355 = -1;
	int32_t x1356 = 1;
	int32_t t21 = -798899;

	t21 = (((x1353*x1354)+x1355)<<x1356);

	if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1397 = UINT64_MAX;
	int8_t x1398 = -1;
	int64_t x1399 = INT64_MIN;
	volatile uint8_t x1400 = 1U;
	uint64_t t22 = 54334796LLU;

	t22 = (((x1397*x1398)+x1399)<<x1400);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1569 = 2936U;
	int64_t x1570 = 1624718819946LL;
	int64_t x1571 = 8784628024254588LL;
	int64_t t23 = 272102588537LL;

	t23 = (((x1569*x1570)+x1571)<<x1572);

	if (t23 != 27109604959232088LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1645 = -3736395668517948LL;
	int16_t x1646 = -1;
	uint8_t x1647 = 22U;
	uint16_t x1648 = 1U;
	int64_t t24 = 48940370888LL;

	t24 = (((x1645*x1646)+x1647)<<x1648);

	if (t24 != 7472791337035940LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1665 = 11085U;
	int8_t x1666 = INT8_MAX;
	volatile int8_t x1667 = -43;
	uint16_t x1668 = 2U;
	volatile uint32_t t25 = 2U;

	t25 = (((x1665*x1666)+x1667)<<x1668);

	if (t25 != 5631008U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1689 = 160U;
	volatile uint64_t x1690 = 2017LLU;
	static uint16_t x1691 = 2U;
	int8_t x1692 = 0;

	t26 = (((x1689*x1690)+x1691)<<x1692);

	if (t26 != 322722LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1737 = INT16_MAX;
	int32_t x1738 = 12;
	static int64_t x1740 = 1LL;
	static int32_t t27 = -6926123;

	t27 = (((x1737*x1738)+x1739)<<x1740);

	if (t27 != 720872) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1745 = 4U;
	uint32_t x1746 = 30024088U;
	volatile int8_t x1747 = 0;
	int8_t x1748 = 18;

	t28 = (((x1745*x1746)+x1747)<<x1748);

	if (t28 != 427819008U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1785 = INT32_MIN;
	uint64_t x1786 = 13602125480800LLU;
	int16_t x1787 = INT16_MIN;
	int32_t x1788 = 0;

	t29 = (((x1785*x1786)+x1787)<<x1788);

	if (t29 != 9300564693791768576LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1789 = 3221;
	static int64_t x1790 = 97LL;
	uint64_t x1791 = 532492059550957LLU;
	uint8_t x1792 = 9U;
	uint64_t t30 = 4925861LLU;

	t30 = (((x1789*x1790)+x1791)<<x1792);

	if (t30 != 272635934650057728LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1805 = 51439643U;
	uint32_t x1806 = UINT32_MAX;
	volatile int8_t x1807 = INT8_MIN;
	uint16_t x1808 = 1U;
	static uint32_t t31 = 61096U;

	t31 = (((x1805*x1806)+x1807)<<x1808);

	if (t31 != 4192087754U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1893 = INT32_MIN;
	int64_t x1894 = -1LL;
	int32_t x1895 = -98877065;
	uint8_t x1896 = 23U;
	volatile int64_t t32 = 10LL;

	t32 = (((x1893*x1894)+x1895)<<x1896);

	if (t32 != 17184957571006464LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1953 = 10;
	uint8_t x1954 = 6U;
	volatile int8_t x1956 = 1;
	int32_t t33 = -466646;

	t33 = (((x1953*x1954)+x1955)<<x1956);

	if (t33 != 118) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2049 = 5605;
	static uint64_t x2050 = UINT64_MAX;
	int16_t x2051 = -1;
	static int8_t x2052 = 1;
	volatile uint64_t t34 = 196512787024LLU;

	t34 = (((x2049*x2050)+x2051)<<x2052);

	if (t34 != 18446744073709540404LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2097 = 268;
	int16_t x2098 = 7;
	uint32_t x2099 = 1473005U;
	volatile int8_t x2100 = 6;

	t35 = (((x2097*x2098)+x2099)<<x2100);

	if (t35 != 94392384U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2141 = INT16_MIN;
	int32_t x2142 = 134;
	int16_t x2144 = 0;
	int64_t t36 = 5785199LL;

	t36 = (((x2141*x2142)+x2143)<<x2144);

	if (t36 != 8002216876694LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2173 = 4U;
	uint8_t x2174 = 11U;
	int8_t x2175 = INT8_MAX;
	int32_t t37 = -23118628;

	t37 = (((x2173*x2174)+x2175)<<x2176);

	if (t37 != 5472) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2237 = UINT64_MAX;
	static volatile int16_t x2238 = INT16_MIN;
	volatile int16_t x2239 = 1864;
	uint8_t x2240 = 0U;
	static uint64_t t38 = 105929957LLU;

	t38 = (((x2237*x2238)+x2239)<<x2240);

	if (t38 != 34632LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2289 = UINT32_MAX;
	uint32_t x2290 = 13029U;
	volatile uint32_t x2291 = 712506770U;
	volatile uint32_t x2292 = 24U;
	uint32_t t39 = 3938U;

	t39 = (((x2289*x2290)+x2291)<<x2292);

	if (t39 != 2902458368U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2305 = UINT64_MAX;
	volatile int64_t x2307 = INT64_MAX;
	uint64_t t40 = 887414660919893828LLU;

	t40 = (((x2305*x2306)+x2307)<<x2308);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x2413 = INT8_MAX;
	static volatile uint16_t x2414 = 44U;
	uint8_t x2415 = 63U;
	int16_t x2416 = 2;
	int32_t t41 = -2538;

	t41 = (((x2413*x2414)+x2415)<<x2416);

	if (t41 != 22604) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2501 = UINT64_MAX;
	int16_t x2502 = 0;
	uint16_t x2503 = UINT16_MAX;
	volatile uint16_t x2504 = 11U;

	t42 = (((x2501*x2502)+x2503)<<x2504);

	if (t42 != 134215680LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2545 = 2534461046645957LLU;
	volatile uint32_t x2546 = 2381024U;
	int32_t x2547 = INT32_MIN;
	int8_t x2548 = 2;

	t43 = (((x2545*x2546)+x2547)<<x2548);

	if (t43 != 10109068095889031552LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2621 = INT64_MIN;
	uint64_t x2622 = 25648950074047751LLU;
	int8_t x2623 = INT8_MIN;
	int16_t x2624 = 7;
	uint64_t t44 = 222762387411896LLU;

	t44 = (((x2621*x2622)+x2623)<<x2624);

	if (t44 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x2641 = 45;
	static int8_t x2642 = 24;
	volatile uint16_t x2643 = 4U;
	volatile int8_t x2644 = 1;
	int32_t t45 = 464020;

	t45 = (((x2641*x2642)+x2643)<<x2644);

	if (t45 != 2168) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2681 = UINT8_MAX;
	int16_t x2682 = -1;
	uint64_t x2683 = 140774817405457028LLU;
	volatile int8_t x2684 = 1;
	volatile uint64_t t46 = 3695978264198LLU;

	t46 = (((x2681*x2682)+x2683)<<x2684);

	if (t46 != 281549634810913546LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x2721 = -1050LL;
	volatile int16_t x2722 = -1;
	int64_t x2723 = 535807096LL;
	int8_t x2724 = 0;

	t47 = (((x2721*x2722)+x2723)<<x2724);

	if (t47 != 535808146LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2757 = 10;
	uint16_t x2758 = 2U;
	int8_t x2759 = -2;
	static volatile int8_t x2760 = 1;
	int32_t t48 = 457061;

	t48 = (((x2757*x2758)+x2759)<<x2760);

	if (t48 != 36) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2781 = UINT8_MAX;
	uint8_t x2782 = 0U;
	volatile int8_t x2783 = INT8_MAX;
	int16_t x2784 = 0;
	volatile int32_t t49 = -40;

	t49 = (((x2781*x2782)+x2783)<<x2784);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2793 = 2;
	static volatile int8_t x2794 = INT8_MIN;
	volatile int16_t x2795 = 3586;
	int16_t x2796 = 1;

	t50 = (((x2793*x2794)+x2795)<<x2796);

	if (t50 != 6660) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2873 = INT8_MIN;
	volatile int16_t x2874 = -1;
	int32_t x2876 = 1;
	int32_t t51 = -105433457;

	t51 = (((x2873*x2874)+x2875)<<x2876);

	if (t51 != 276) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x2969 = UINT64_MAX;
	int32_t x2970 = INT32_MIN;
	uint8_t x2972 = 15U;
	uint64_t t52 = 6837LLU;

	t52 = (((x2969*x2970)+x2971)<<x2972);

	if (t52 != 211106232500224LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x3045 = 666656891697011LLU;
	int16_t x3048 = 18;
	volatile uint64_t t53 = 4404674467758487715LLU;

	t53 = (((x3045*x3046)+x3047)<<x3048);

	if (t53 != 9707336520040710144LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x3090 = UINT64_MAX;
	int16_t x3091 = INT16_MAX;
	int16_t x3092 = 1;

	t54 = (((x3089*x3090)+x3091)<<x3092);

	if (t54 != 18446744065119682560LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3217 = 1633897735217LLU;
	uint32_t x3218 = UINT32_MAX;
	static int16_t x3219 = INT16_MIN;
	static uint8_t x3220 = 0U;

	t55 = (((x3217*x3218)+x3219)<<x3220);

	if (t55 != 7774588121955081167LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3249 = -11;
	int16_t x3250 = -1;
	static int8_t x3251 = -1;
	uint16_t x3252 = 0U;
	int32_t t56 = -65374;

	t56 = (((x3249*x3250)+x3251)<<x3252);

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3265 = UINT16_MAX;
	static uint32_t x3266 = 31132976U;
	volatile uint8_t x3267 = UINT8_MAX;
	int8_t x3268 = 4;
	volatile uint32_t t57 = 183141030U;

	t57 = (((x3265*x3266)+x3267)<<x3268);

	if (t57 != 3041869040U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3326 = INT16_MAX;
	int64_t x3327 = -1LL;
	volatile int64_t t58 = 1LL;

	t58 = (((x3325*x3326)+x3327)<<x3328);

	if (t58 != 4261281792LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3329 = 14945494U;
	uint32_t x3330 = 7302U;
	int16_t x3331 = 6218;
	int16_t x3332 = 0;

	t59 = (((x3329*x3330)+x3331)<<x3332);

	if (t59 != 1757821006U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x3377 = UINT32_MAX;
	int16_t x3378 = 1;
	uint16_t x3379 = UINT16_MAX;
	uint32_t t60 = 1784507U;

	t60 = (((x3377*x3378)+x3379)<<x3380);

	if (t60 != 131068U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3493 = -1;
	int8_t x3494 = -2;
	int16_t x3495 = -1;
	int16_t x3496 = 22;
	int32_t t61 = -4;

	t61 = (((x3493*x3494)+x3495)<<x3496);

	if (t61 != 4194304) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3733 = -2;
	uint8_t x3735 = 1U;
	int8_t x3736 = 1;
	int32_t t62 = -2;

	t62 = (((x3733*x3734)+x3735)<<x3736);

	if (t62 != 131074) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3745 = 22U;
	uint64_t x3747 = 2727291215899947LLU;
	uint64_t t63 = 361LLU;

	t63 = (((x3745*x3746)+x3747)<<x3748);

	if (t63 != 13931815770255966208LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3751 = INT8_MAX;
	uint16_t x3752 = 1U;
	static int32_t t64 = 473;

	t64 = (((x3749*x3750)+x3751)<<x3752);

	if (t64 != 510) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3865 = -1LL;
	volatile uint8_t x3866 = UINT8_MAX;
	uint32_t x3867 = UINT32_MAX;
	static uint16_t x3868 = 5U;
	int64_t t65 = 986363831LL;

	t65 = (((x3865*x3866)+x3867)<<x3868);

	if (t65 != 137438945280LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3985 = UINT8_MAX;
	uint32_t x3986 = UINT32_MAX;
	uint8_t x3988 = 0U;
	volatile uint32_t t66 = 7488U;

	t66 = (((x3985*x3986)+x3987)<<x3988);

	if (t66 != 4294967045U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4065 = -1;
	int8_t x4066 = INT8_MIN;
	uint16_t x4067 = 14142U;
	volatile int8_t x4068 = 9;
	volatile int32_t t67 = -382363;

	t67 = (((x4065*x4066)+x4067)<<x4068);

	if (t67 != 7306240) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4177 = 1485U;
	static int8_t x4178 = INT8_MAX;
	static volatile int16_t x4179 = -38;
	int16_t x4180 = 1;
	static int32_t t68 = -6268;

	t68 = (((x4177*x4178)+x4179)<<x4180);

	if (t68 != 377114) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4269 = -1;
	volatile uint8_t x4271 = UINT8_MAX;
	uint8_t x4272 = 2U;
	int32_t t69 = -313;

	t69 = (((x4269*x4270)+x4271)<<x4272);

	if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4325 = 124067;
	int16_t x4328 = 0;
	static volatile uint64_t t70 = 130769LLU;

	t70 = (((x4325*x4326)+x4327)<<x4328);

	if (t70 != 698745343LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4341 = INT64_MAX;
	uint64_t x4342 = 31840844042LLU;
	int8_t x4344 = 42;
	uint64_t t71 = 66225261807LLU;

	t71 = (((x4341*x4342)+x4343)<<x4344);

	if (t71 != 10167958078230626304LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4421 = INT16_MIN;
	int16_t x4422 = -1;
	uint16_t x4424 = 7U;
	static volatile int32_t t72 = 10401;

	t72 = (((x4421*x4422)+x4423)<<x4424);

	if (t72 != 4193664) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4514 = INT64_MAX;
	int8_t x4515 = INT8_MIN;
	int16_t x4516 = 1;
	uint64_t t73 = 15830310LLU;

	t73 = (((x4513*x4514)+x4515)<<x4516);

	if (t73 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4518 = INT8_MIN;
	uint8_t x4519 = 3U;
	int32_t x4520 = 1;
	volatile int32_t t74 = -440881;

	t74 = (((x4517*x4518)+x4519)<<x4520);

	if (t74 != 1030) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x4573 = 15LL;
	static volatile uint16_t x4574 = UINT16_MAX;
	uint32_t x4575 = 14U;
	static uint8_t x4576 = 2U;
	int64_t t75 = 1432918138445LL;

	t75 = (((x4573*x4574)+x4575)<<x4576);

	if (t75 != 3932156LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x4645 = -15;
	int8_t x4646 = INT8_MIN;
	int8_t x4647 = 0;
	int32_t x4648 = 2;
	int32_t t76 = 183;

	t76 = (((x4645*x4646)+x4647)<<x4648);

	if (t76 != 7680) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4670 = -1LL;
	uint8_t x4671 = UINT8_MAX;
	static volatile int16_t x4672 = 8;
	int64_t t77 = -874727786192167683LL;

	t77 = (((x4669*x4670)+x4671)<<x4672);

	if (t77 != 65024LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4733 = -1;
	static int16_t x4734 = INT16_MIN;
	volatile uint8_t x4735 = UINT8_MAX;
	static int32_t x4736 = 4;
	static volatile int32_t t78 = -383358731;

	t78 = (((x4733*x4734)+x4735)<<x4736);

	if (t78 != 528368) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5021 = 440;
	uint32_t x5022 = 5269U;
	volatile uint8_t x5023 = 0U;
	static volatile int8_t x5024 = 12;
	uint32_t t79 = 12588087U;

	t79 = (((x5021*x5022)+x5023)<<x5024);

	if (t79 != 906067968U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5077 = 1014U;
	uint64_t x5079 = 6499793997447208LLU;
	uint16_t x5080 = 5U;
	static uint64_t t80 = 14930185LLU;

	t80 = (((x5077*x5078)+x5079)<<x5080);

	if (t80 != 207993407918278208LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x5141 = 15U;
	uint64_t x5142 = 1111913LLU;
	static int8_t x5143 = INT8_MIN;
	int8_t x5144 = 37;
	uint64_t t81 = 371911635795LLU;

	t81 = (((x5141*x5142)+x5143)<<x5144);

	if (t81 != 2292284793892634624LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x5188 = 1U;

	t82 = (((x5185*x5186)+x5187)<<x5188);

	if (t82 != 20884LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5285 = 1U;
	static uint64_t x5286 = 1229764LLU;
	int8_t x5287 = -1;
	volatile uint32_t x5288 = 0U;
	static uint64_t t83 = 1755448030741LLU;

	t83 = (((x5285*x5286)+x5287)<<x5288);

	if (t83 != 1229763LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x5341 = -276531957589622LL;
	volatile uint16_t x5343 = 19675U;
	uint8_t x5344 = 14U;
	uint64_t t84 = 2LLU;

	t84 = (((x5341*x5342)+x5343)<<x5344);

	if (t84 != 13916044480883539968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5370 = 4;
	volatile uint64_t x5371 = 22LLU;
	uint16_t x5372 = 44U;
	static uint64_t t85 = 1424462LLU;

	t85 = (((x5369*x5370)+x5371)<<x5372);

	if (t85 != 18331057858281472LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5507 = 438534427LLU;
	static uint8_t x5508 = 5U;
	uint64_t t86 = 210908334285LLU;

	t86 = (((x5505*x5506)+x5507)<<x5508);

	if (t86 != 14033101664LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5625 = -406;
	volatile uint32_t x5626 = UINT32_MAX;
	int8_t x5627 = INT8_MAX;
	int8_t x5628 = 0;
	volatile uint32_t t87 = 7U;

	t87 = (((x5625*x5626)+x5627)<<x5628);

	if (t87 != 533U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5641 = -1;
	int8_t x5642 = INT8_MIN;
	int8_t x5644 = 58;
	volatile uint64_t t88 = 1018090260478LLU;

	t88 = (((x5641*x5642)+x5643)<<x5644);

	if (t88 != 576460752303423488LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5649 = INT32_MIN;
	uint64_t x5650 = 21023LLU;
	int16_t x5651 = 1669;
	uint64_t t89 = 60202708076595745LLU;

	t89 = (((x5649*x5650)+x5651)<<x5652);

	if (t89 != 17329851394122842112LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5685 = 1U;
	static volatile int8_t x5686 = 1;
	uint16_t x5688 = 6U;
	int32_t t90 = 849407913;

	t90 = (((x5685*x5686)+x5687)<<x5688);

	if (t90 != 4194304) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x5745 = 950514952820882LLU;
	static int64_t x5746 = 33879LL;
	volatile uint16_t x5748 = 24U;
	static uint64_t t91 = 4311206538523366477LLU;

	t91 = (((x5745*x5746)+x5747)<<x5748);

	if (t91 != 10636323512874172416LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5813 = 13;
	uint64_t x5814 = UINT64_MAX;
	uint32_t x5816 = 4U;

	t92 = (((x5813*x5814)+x5815)<<x5816);

	if (t92 != 18446744073709551408LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5921 = -1;
	static int32_t x5922 = -1;
	volatile int8_t x5923 = INT8_MAX;
	volatile uint8_t x5924 = 0U;
	int32_t t93 = -693254;

	t93 = (((x5921*x5922)+x5923)<<x5924);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6025 = INT8_MIN;
	static int8_t x6027 = INT8_MIN;
	uint64_t t94 = 209782756719495LLU;

	t94 = (((x6025*x6026)+x6027)<<x6028);

	if (t94 != 5927244410755481600LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x6150 = UINT16_MAX;
	uint8_t x6152 = 13U;
	static uint64_t t95 = 236390LLU;

	t95 = (((x6149*x6150)+x6151)<<x6152);

	if (t95 != 18446744073172713472LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x6201 = 0LLU;
	uint64_t x6202 = UINT64_MAX;
	volatile int8_t x6203 = INT8_MIN;
	int8_t x6204 = 13;

	t96 = (((x6201*x6202)+x6203)<<x6204);

	if (t96 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x6209 = 7040LLU;
	volatile uint64_t x6211 = 3299677LLU;
	static int64_t x6212 = 42LL;

	t97 = (((x6209*x6210)+x6211)<<x6212);

	if (t97 != 18444338342267977728LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6250 = -1;
	uint32_t x6251 = 635108U;
	volatile uint32_t t98 = 802651713U;

	t98 = (((x6249*x6250)+x6251)<<x6252);

	if (t98 != 633949U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6350 = -1LL;
	int64_t t99 = 6607107250970542LL;

	t99 = (((x6349*x6350)+x6351)<<x6352);

	if (t99 != 256LL) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x115 = 1U;
int32_t x116 = 26;
uint32_t t4 = 32U;
int16_t x367 = INT16_MAX;
int32_t x505 = 8038224;
uint8_t x557 = UINT8_MAX;
int32_t x559 = INT32_MAX;
static volatile int16_t x560 = 0;
volatile int16_t x650 = INT16_MIN;
int64_t x651 = 5507929683LL;
uint16_t x652 = 5U;
volatile int32_t t10 = 1487437;
int32_t x873 = INT32_MIN;
volatile uint8_t x876 = 5U;
int32_t x899 = INT32_MAX;
int64_t x942 = INT64_MIN;
volatile int64_t t16 = -406605932331LL;
uint64_t x959 = UINT64_MAX;
uint64_t t19 = 3479074901LLU;
int64_t x1059 = INT64_MAX;
uint8_t x1062 = 4U;
uint32_t x1063 = 691491755U;
uint64_t t24 = UINT64_MAX;
volatile uint32_t x1218 = 1U;
uint64_t x1263 = UINT64_MAX;
static int64_t x1343 = 239006053LL;
volatile uint8_t x1366 = 4U;
int32_t x1421 = 229;
volatile uint64_t t31 = 23045317LLU;
uint8_t x1602 = 18U;
uint8_t x1603 = 3U;
volatile int32_t x1604 = 0;
volatile uint16_t x1939 = 290U;
int64_t x1940 = 0LL;
int16_t x2013 = -30;
static volatile int16_t x2014 = INT16_MAX;
int32_t x2110 = 26629;
static int8_t x2134 = -1;
int16_t x2136 = 2;
volatile int16_t x2203 = INT16_MAX;
uint32_t x2288 = 7U;
int64_t x2305 = -245943129LL;
int8_t x2308 = 15;
uint16_t x2372 = 31U;
volatile uint64_t x2431 = 283324505384823325LLU;
static volatile uint16_t x2432 = 51U;
int32_t x2645 = 2731924;
static uint8_t x2662 = UINT8_MAX;
int32_t x2664 = 5;
static int8_t x2881 = -1;
volatile int32_t t59 = 282431459;
uint32_t x2911 = 18217U;
volatile uint64_t x2951 = 6860LLU;
uint64_t t61 = 12479605531677075LLU;
uint8_t x3116 = 7U;
static uint32_t t64 = 2773U;
int64_t x3213 = -1LL;
int8_t x3214 = INT8_MIN;
volatile int8_t x3389 = 0;
int64_t x3458 = INT64_MIN;
uint32_t x3460 = 1U;
volatile int32_t x3486 = INT32_MIN;
volatile int16_t x3669 = 32;
uint16_t x3691 = 15U;
uint64_t x3695 = 0LLU;
static int64_t x3703 = INT64_MAX;
int8_t x3775 = INT8_MAX;
int8_t x3993 = -20;
int64_t x4025 = 969495064LL;
int8_t x4075 = 7;
int8_t x4076 = 9;
static uint16_t x4235 = UINT16_MAX;
uint64_t x4309 = 3532178898142820826LLU;
uint64_t x4310 = 6169512705958755082LLU;
uint8_t x4378 = 4U;
uint64_t x4379 = 7505LLU;
static volatile uint16_t x4380 = 3U;
static int64_t x4461 = INT64_MAX;
int16_t x4463 = INT16_MAX;
uint8_t x4567 = 4U;
int16_t x4794 = INT16_MIN;
static uint64_t t90 = 1102113435060832725LLU;
int32_t x4901 = -1;
uint64_t t91 = UINT64_MAX;
int32_t x5034 = INT32_MIN;
uint64_t x5089 = 193LLU;
int16_t x5112 = 25;
volatile int64_t x5114 = INT64_MAX;
int64_t x5161 = INT64_MIN;
static uint16_t x5267 = 113U;


void f0(void) {
	volatile int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	static uint16_t x44 = 40U;
	volatile uint64_t t0 = 1445477057896625LLU;

	t0 = (x41|(x42&(x43>>x44)));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = 0;
	int8_t x83 = INT8_MAX;
	static uint64_t x84 = 1LLU;
	int32_t t1 = INT32_MIN;

	t1 = (x81|(x82&(x83>>x84)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x113 = 684U;
	volatile int64_t x114 = INT64_MIN;
	int64_t t2 = -262LL;

	t2 = (x113|(x114&(x115>>x116)));

	if (t2 != 684LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int8_t x174 = INT8_MAX;
	static uint16_t x175 = UINT16_MAX;
	static int16_t x176 = 0;
	static int32_t t3 = -184;

	t3 = (x173|(x174&(x175>>x176)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x273 = 0;
	volatile uint32_t x274 = 50588083U;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = 26LL;

	t4 = (x273|(x274&(x275>>x276)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x341 = INT64_MAX;
	int32_t x342 = -644762;
	uint32_t x343 = UINT32_MAX;
	static volatile uint8_t x344 = 0U;
	int64_t t5 = INT64_MAX;

	t5 = (x341|(x342&(x343>>x344)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x365 = 718194681LL;
	int16_t x366 = -1;
	volatile int8_t x368 = 1;
	int64_t t6 = -3383154014711799077LL;

	t6 = (x365|(x366&(x367>>x368)));

	if (t6 != 718209023LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x506 = UINT8_MAX;
	int64_t x507 = INT64_MAX;
	static uint8_t x508 = 3U;
	static volatile int64_t t7 = -4207419528LL;

	t7 = (x505|(x506&(x507>>x508)));

	if (t7 != 8038399LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x558 = 4451U;
	int32_t t8 = -30;

	t8 = (x557|(x558&(x559>>x560)));

	if (t8 != 4607) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x649 = -1;
	int64_t t9 = 11226566787632LL;

	t9 = (x649|(x650&(x651>>x652)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x729 = -26;
	int32_t x730 = -103;
	uint16_t x731 = 2142U;
	int8_t x732 = 3;

	t10 = (x729|(x730&(x731>>x732)));

	if (t10 != -17) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x757 = INT64_MAX;
	int16_t x758 = -1;
	int32_t x759 = INT32_MAX;
	volatile uint8_t x760 = 0U;
	int64_t t11 = INT64_MAX;

	t11 = (x757|(x758&(x759>>x760)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x769 = -1;
	int8_t x770 = 15;
	int8_t x771 = 0;
	uint8_t x772 = 0U;
	volatile int32_t t12 = -4733825;

	t12 = (x769|(x770&(x771>>x772)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x874 = INT32_MIN;
	int16_t x875 = 1;
	int32_t t13 = INT32_MIN;

	t13 = (x873|(x874&(x875>>x876)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x877 = INT16_MIN;
	int16_t x878 = INT16_MAX;
	static volatile int8_t x879 = 0;
	static uint16_t x880 = 14U;
	int32_t t14 = 61548;

	t14 = (x877|(x878&(x879>>x880)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x897 = INT16_MIN;
	int64_t x898 = INT64_MIN;
	volatile int16_t x900 = 5;
	static volatile int64_t t15 = 168950597LL;

	t15 = (x897|(x898&(x899>>x900)));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x941 = UINT32_MAX;
	int8_t x943 = INT8_MAX;
	int8_t x944 = 6;

	t16 = (x941|(x942&(x943>>x944)));

	if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x957 = -1LL;
	uint32_t x958 = UINT32_MAX;
	int64_t x960 = 1LL;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x957|(x958&(x959>>x960)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x977 = UINT64_MAX;
	uint32_t x978 = UINT32_MAX;
	volatile uint16_t x979 = UINT16_MAX;
	int32_t x980 = 7;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x977|(x978&(x979>>x980)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1001 = 20309127143875LLU;
	int64_t x1002 = 104LL;
	uint64_t x1003 = 11094190LLU;
	static volatile int32_t x1004 = 1;

	t19 = (x1001|(x1002&(x1003>>x1004)));

	if (t19 != 20309127143875LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1013 = INT32_MAX;
	uint16_t x1014 = UINT16_MAX;
	uint32_t x1015 = 725U;
	uint8_t x1016 = 8U;
	uint32_t t20 = 66764114U;

	t20 = (x1013|(x1014&(x1015>>x1016)));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1057 = -1348948895054793LL;
	uint16_t x1058 = UINT16_MAX;
	static uint16_t x1060 = 1U;
	volatile int64_t t21 = -11550535139922539LL;

	t21 = (x1057|(x1058&(x1059>>x1060)));

	if (t21 != -1348948895006721LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1061 = 5135988;
	int8_t x1064 = 1;
	static volatile uint32_t t22 = 1U;

	t22 = (x1061|(x1062&(x1063>>x1064)));

	if (t22 != 5135988U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1097 = -1;
	int32_t x1098 = -1;
	volatile uint8_t x1099 = 44U;
	int32_t x1100 = 3;
	int32_t t23 = -5022326;

	t23 = (x1097|(x1098&(x1099>>x1100)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1197 = UINT64_MAX;
	static volatile int64_t x1198 = -1LL;
	uint16_t x1199 = UINT16_MAX;
	uint16_t x1200 = 0U;

	t24 = (x1197|(x1198&(x1199>>x1200)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1217 = 341532278U;
	uint64_t x1219 = UINT64_MAX;
	volatile uint8_t x1220 = 49U;
	static volatile uint64_t t25 = 968662349194861LLU;

	t25 = (x1217|(x1218&(x1219>>x1220)));

	if (t25 != 341532279LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1261 = INT32_MAX;
	volatile int64_t x1262 = INT64_MIN;
	uint8_t x1264 = 4U;
	uint64_t t26 = 22024745722LLU;

	t26 = (x1261|(x1262&(x1263>>x1264)));

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1321 = -1;
	int16_t x1322 = INT16_MIN;
	uint16_t x1323 = 15081U;
	uint16_t x1324 = 25U;
	int32_t t27 = 0;

	t27 = (x1321|(x1322&(x1323>>x1324)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1341 = INT64_MAX;
	uint8_t x1342 = 6U;
	int16_t x1344 = 54;
	int64_t t28 = INT64_MAX;

	t28 = (x1341|(x1342&(x1343>>x1344)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1365 = -130218;
	volatile int8_t x1367 = INT8_MAX;
	static uint32_t x1368 = 0U;
	volatile int32_t t29 = -235;

	t29 = (x1365|(x1366&(x1367>>x1368)));

	if (t29 != -130218) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1381 = 27077287270029LLU;
	int16_t x1382 = INT16_MIN;
	uint8_t x1383 = 0U;
	int8_t x1384 = 2;
	uint64_t t30 = 353800LLU;

	t30 = (x1381|(x1382&(x1383>>x1384)));

	if (t30 != 27077287270029LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1422 = 290330LLU;
	static volatile uint8_t x1423 = UINT8_MAX;
	int8_t x1424 = 1;

	t31 = (x1421|(x1422&(x1423>>x1424)));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1501 = -450;
	volatile int32_t x1502 = INT32_MAX;
	int32_t x1503 = 4429743;
	static uint8_t x1504 = 5U;
	volatile int32_t t32 = -8204557;

	t32 = (x1501|(x1502&(x1503>>x1504)));

	if (t32 != -321) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1553 = -1345;
	uint32_t x1554 = 849301724U;
	volatile int8_t x1555 = 2;
	uint16_t x1556 = 27U;
	static uint32_t t33 = 430U;

	t33 = (x1553|(x1554&(x1555>>x1556)));

	if (t33 != 4294965951U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1601 = 108710672712888LLU;
	volatile uint64_t t34 = 1013LLU;

	t34 = (x1601|(x1602&(x1603>>x1604)));

	if (t34 != 108710672712890LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1641 = INT64_MIN;
	int64_t x1642 = -20074713942073094LL;
	volatile int16_t x1643 = 347;
	static uint8_t x1644 = 0U;
	int64_t t35 = 7768567LL;

	t35 = (x1641|(x1642&(x1643>>x1644)));

	if (t35 != -9223372036854775718LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1645 = INT64_MAX;
	int8_t x1646 = INT8_MIN;
	static volatile int8_t x1647 = 0;
	uint8_t x1648 = 2U;
	static int64_t t36 = INT64_MAX;

	t36 = (x1645|(x1646&(x1647>>x1648)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1673 = 28094LLU;
	static uint64_t x1674 = 746574200456429LLU;
	volatile uint64_t x1675 = 2013900993615663710LLU;
	uint64_t x1676 = 0LLU;
	static volatile uint64_t t37 = 141004358454LLU;

	t37 = (x1673|(x1674&(x1675>>x1676)));

	if (t37 != 703687844720126LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1677 = 792329184927880142LLU;
	uint8_t x1678 = 1U;
	static volatile uint8_t x1679 = 1U;
	int8_t x1680 = 1;
	static volatile uint64_t t38 = 406LLU;

	t38 = (x1677|(x1678&(x1679>>x1680)));

	if (t38 != 792329184927880142LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1813 = 1U;
	int64_t x1814 = -2940931LL;
	uint64_t x1815 = UINT64_MAX;
	static uint8_t x1816 = 40U;
	volatile uint64_t t39 = 1668347829LLU;

	t39 = (x1813|(x1814&(x1815>>x1816)));

	if (t39 != 13836285LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1937 = 3U;
	int64_t x1938 = -1LL;
	int64_t t40 = -29278219170397LL;

	t40 = (x1937|(x1938&(x1939>>x1940)));

	if (t40 != 291LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2015 = 1;
	int64_t x2016 = 1LL;
	int32_t t41 = -100248;

	t41 = (x2013|(x2014&(x2015>>x2016)));

	if (t41 != -30) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2025 = INT8_MIN;
	static uint8_t x2026 = 3U;
	static volatile uint32_t x2027 = 136018U;
	int8_t x2028 = 0;
	volatile uint32_t t42 = 209733U;

	t42 = (x2025|(x2026&(x2027>>x2028)));

	if (t42 != 4294967170U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2109 = -1;
	uint64_t x2111 = 12067LLU;
	uint8_t x2112 = 56U;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x2109|(x2110&(x2111>>x2112)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2133 = INT8_MIN;
	static int64_t x2135 = INT64_MAX;
	static int64_t t44 = 726255551671654466LL;

	t44 = (x2133|(x2134&(x2135>>x2136)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2201 = INT16_MAX;
	int32_t x2202 = -1;
	uint8_t x2204 = 1U;
	int32_t t45 = -3;

	t45 = (x2201|(x2202&(x2203>>x2204)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2285 = -1;
	uint32_t x2286 = 68150882U;
	int64_t x2287 = 1674LL;
	int64_t t46 = -1076161428167LL;

	t46 = (x2285|(x2286&(x2287>>x2288)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2306 = UINT64_MAX;
	uint16_t x2307 = UINT16_MAX;
	volatile uint64_t t47 = 5324913132360LLU;

	t47 = (x2305|(x2306&(x2307>>x2308)));

	if (t47 != 18446744073463608487LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2325 = INT16_MIN;
	volatile int8_t x2326 = -1;
	uint16_t x2327 = UINT16_MAX;
	static uint32_t x2328 = 13U;
	volatile int32_t t48 = 4;

	t48 = (x2325|(x2326&(x2327>>x2328)));

	if (t48 != -32761) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2369 = 1;
	uint64_t x2370 = 3697247LLU;
	uint8_t x2371 = 12U;
	volatile uint64_t t49 = 447159940407454LLU;

	t49 = (x2369|(x2370&(x2371>>x2372)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2393 = 652U;
	int64_t x2394 = 86985703LL;
	static uint16_t x2395 = 6236U;
	int8_t x2396 = 11;
	int64_t t50 = -96855596777288930LL;

	t50 = (x2393|(x2394&(x2395>>x2396)));

	if (t50 != 655LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2429 = -1;
	int8_t x2430 = -1;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x2429|(x2430&(x2431>>x2432)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2533 = 22U;
	int8_t x2534 = 3;
	static int16_t x2535 = 149;
	static int8_t x2536 = 29;
	static int32_t t52 = 227043119;

	t52 = (x2533|(x2534&(x2535>>x2536)));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2577 = 864229;
	volatile uint64_t x2578 = 11711471213656LLU;
	uint32_t x2579 = UINT32_MAX;
	int32_t x2580 = 0;
	uint64_t t53 = 4377199891209LLU;

	t53 = (x2577|(x2578&(x2579>>x2580)));

	if (t53 != 3390963709LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2605 = 49665U;
	int64_t x2606 = INT64_MAX;
	int8_t x2607 = 3;
	int8_t x2608 = 1;
	volatile int64_t t54 = -29932991LL;

	t54 = (x2605|(x2606&(x2607>>x2608)));

	if (t54 != 49665LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2646 = -1;
	static volatile uint64_t x2647 = 77947LLU;
	int64_t x2648 = 1LL;
	uint64_t t55 = 3LLU;

	t55 = (x2645|(x2646&(x2647>>x2648)));

	if (t55 != 2736061LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2649 = INT32_MIN;
	int64_t x2650 = -34075784619LL;
	uint8_t x2651 = 5U;
	uint16_t x2652 = 1U;
	static int64_t t56 = -9553632749968275LL;

	t56 = (x2649|(x2650&(x2651>>x2652)));

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2661 = 0U;
	int8_t x2663 = INT8_MAX;
	volatile uint32_t t57 = 1845U;

	t57 = (x2661|(x2662&(x2663>>x2664)));

	if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2761 = -129;
	int16_t x2762 = -1;
	static uint32_t x2763 = 946061503U;
	int8_t x2764 = 1;
	uint32_t t58 = 30677999U;

	t58 = (x2761|(x2762&(x2763>>x2764)));

	if (t58 != 4294967167U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2882 = -1;
	uint8_t x2883 = UINT8_MAX;
	uint16_t x2884 = 2U;

	t59 = (x2881|(x2882&(x2883>>x2884)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x2909 = UINT8_MAX;
	static int64_t x2910 = -1278216746586LL;
	int8_t x2912 = 6;
	static volatile int64_t t60 = -8337955192182LL;

	t60 = (x2909|(x2910&(x2911>>x2912)));

	if (t60 != 511LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2949 = INT64_MIN;
	static uint64_t x2950 = UINT64_MAX;
	static uint32_t x2952 = 0U;

	t61 = (x2949|(x2950&(x2951>>x2952)));

	if (t61 != 9223372036854782668LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3049 = 26;
	int64_t x3050 = 3064LL;
	uint16_t x3051 = UINT16_MAX;
	uint8_t x3052 = 25U;
	int64_t t62 = 48564LL;

	t62 = (x3049|(x3050&(x3051>>x3052)));

	if (t62 != 26LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3061 = -1;
	volatile int16_t x3062 = INT16_MIN;
	uint32_t x3063 = UINT32_MAX;
	volatile uint32_t x3064 = 3U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x3061|(x3062&(x3063>>x3064)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3113 = 1U;
	int16_t x3114 = 634;
	uint32_t x3115 = 61159U;

	t64 = (x3113|(x3114&(x3115>>x3116)));

	if (t64 != 89U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3215 = 2U;
	int8_t x3216 = 0;
	int64_t t65 = -9073544138859790LL;

	t65 = (x3213|(x3214&(x3215>>x3216)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3229 = UINT64_MAX;
	int32_t x3230 = INT32_MIN;
	int8_t x3231 = INT8_MAX;
	static int32_t x3232 = 15;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = (x3229|(x3230&(x3231>>x3232)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3390 = 1U;
	int64_t x3391 = 300895471229978LL;
	uint8_t x3392 = 2U;
	volatile int64_t t67 = 144328934238307LL;

	t67 = (x3389|(x3390&(x3391>>x3392)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3457 = 4U;
	int32_t x3459 = INT32_MAX;
	volatile int64_t t68 = 0LL;

	t68 = (x3457|(x3458&(x3459>>x3460)));

	if (t68 != 4LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3485 = -11LL;
	int16_t x3487 = INT16_MAX;
	int8_t x3488 = 20;
	static int64_t t69 = -869735LL;

	t69 = (x3485|(x3486&(x3487>>x3488)));

	if (t69 != -11LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3489 = 1;
	int64_t x3490 = 1LL;
	int32_t x3491 = INT32_MAX;
	int8_t x3492 = 17;
	static int64_t t70 = 2810803200LL;

	t70 = (x3489|(x3490&(x3491>>x3492)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x3670 = -10;
	uint16_t x3671 = 2251U;
	uint8_t x3672 = 11U;
	volatile int32_t t71 = 0;

	t71 = (x3669|(x3670&(x3671>>x3672)));

	if (t71 != 32) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3689 = INT16_MIN;
	static volatile int8_t x3690 = INT8_MAX;
	uint64_t x3692 = 2LLU;
	static volatile int32_t t72 = -10227;

	t72 = (x3689|(x3690&(x3691>>x3692)));

	if (t72 != -32765) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3693 = INT16_MIN;
	static volatile int32_t x3694 = 31;
	volatile int32_t x3696 = 32;
	volatile uint64_t t73 = 1LLU;

	t73 = (x3693|(x3694&(x3695>>x3696)));

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3697 = 11591U;
	int64_t x3698 = 3968778448949794886LL;
	uint32_t x3699 = 17U;
	uint16_t x3700 = 5U;
	int64_t t74 = 2LL;

	t74 = (x3697|(x3698&(x3699>>x3700)));

	if (t74 != 11591LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3701 = INT16_MIN;
	int8_t x3702 = -1;
	uint64_t x3704 = 46LLU;
	int64_t t75 = -21464015038265LL;

	t75 = (x3701|(x3702&(x3703>>x3704)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3773 = 549505648;
	int64_t x3774 = INT64_MIN;
	uint32_t x3776 = 11U;
	int64_t t76 = 113159106306758915LL;

	t76 = (x3773|(x3774&(x3775>>x3776)));

	if (t76 != 549505648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3994 = UINT8_MAX;
	static uint16_t x3995 = 309U;
	static int16_t x3996 = 0;
	int32_t t77 = 12387940;

	t77 = (x3993|(x3994&(x3995>>x3996)));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4026 = 66785234162754LL;
	int64_t x4027 = 33039397204561003LL;
	volatile int32_t x4028 = 3;
	volatile int64_t t78 = 32522801135895LL;

	t78 = (x4025|(x4026&(x4027>>x4028)));

	if (t78 != 48538430558744LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4073 = UINT16_MAX;
	static int8_t x4074 = -1;
	int32_t t79 = -3;

	t79 = (x4073|(x4074&(x4075>>x4076)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4109 = -353008043;
	int8_t x4110 = INT8_MIN;
	uint8_t x4111 = UINT8_MAX;
	volatile int32_t x4112 = 6;
	static volatile int32_t t80 = 153810;

	t80 = (x4109|(x4110&(x4111>>x4112)));

	if (t80 != -353008043) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x4149 = 16;
	static volatile int32_t x4150 = -850112047;
	int8_t x4151 = 1;
	int8_t x4152 = 4;
	volatile int32_t t81 = 1;

	t81 = (x4149|(x4150&(x4151>>x4152)));

	if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4233 = INT64_MIN;
	static int16_t x4234 = -1;
	uint8_t x4236 = 7U;
	int64_t t82 = 36907164980LL;

	t82 = (x4233|(x4234&(x4235>>x4236)));

	if (t82 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4311 = 124U;
	volatile int8_t x4312 = 9;
	uint64_t t83 = 4908LLU;

	t83 = (x4309|(x4310&(x4311>>x4312)));

	if (t83 != 3532178898142820826LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4377 = INT64_MIN;
	volatile uint64_t t84 = 14886455952LLU;

	t84 = (x4377|(x4378&(x4379>>x4380)));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4457 = INT8_MIN;
	int32_t x4458 = INT32_MIN;
	static int32_t x4459 = 11429716;
	uint32_t x4460 = 12U;
	static volatile int32_t t85 = 89571;

	t85 = (x4457|(x4458&(x4459>>x4460)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x4462 = 267727706163860866LLU;
	int16_t x4464 = 0;
	volatile uint64_t t86 = 130157353672LLU;

	t86 = (x4461|(x4462&(x4463>>x4464)));

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x4565 = INT32_MIN;
	volatile int8_t x4566 = 29;
	int8_t x4568 = 0;
	volatile int32_t t87 = -925;

	t87 = (x4565|(x4566&(x4567>>x4568)));

	if (t87 != -2147483644) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4713 = 7;
	static int32_t x4714 = INT32_MIN;
	static int8_t x4715 = INT8_MAX;
	int8_t x4716 = 15;
	volatile int32_t t88 = 264942071;

	t88 = (x4713|(x4714&(x4715>>x4716)));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4729 = -1;
	static uint16_t x4730 = UINT16_MAX;
	volatile uint16_t x4731 = UINT16_MAX;
	static volatile uint16_t x4732 = 31U;
	volatile int32_t t89 = 453197;

	t89 = (x4729|(x4730&(x4731>>x4732)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4793 = 93235345901918LLU;
	uint64_t x4795 = 3321764LLU;
	volatile int16_t x4796 = 1;

	t90 = (x4793|(x4794&(x4795>>x4796)));

	if (t90 != 93235347016030LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4902 = -54220;
	uint64_t x4903 = UINT64_MAX;
	static volatile int16_t x4904 = 0;

	t91 = (x4901|(x4902&(x4903>>x4904)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5005 = -1LL;
	static uint16_t x5006 = 444U;
	uint64_t x5007 = 25488031754430LLU;
	uint8_t x5008 = 13U;
	uint64_t t92 = UINT64_MAX;

	t92 = (x5005|(x5006&(x5007>>x5008)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5017 = INT64_MIN;
	int16_t x5018 = -1;
	uint32_t x5019 = 4347U;
	static int16_t x5020 = 5;
	volatile int64_t t93 = 483191772LL;

	t93 = (x5017|(x5018&(x5019>>x5020)));

	if (t93 != -9223372036854775673LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5033 = 11U;
	uint64_t x5035 = 1LLU;
	int8_t x5036 = 3;
	uint64_t t94 = 35044281184462LLU;

	t94 = (x5033|(x5034&(x5035>>x5036)));

	if (t94 != 11LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5090 = UINT32_MAX;
	uint64_t x5091 = 121875516969885LLU;
	int8_t x5092 = 1;
	volatile uint64_t t95 = 1312771590028LLU;

	t95 = (x5089|(x5090&(x5091>>x5092)));

	if (t95 != 762489295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5109 = 839020062995841338LLU;
	static int16_t x5110 = INT16_MIN;
	int16_t x5111 = 37;
	uint64_t t96 = 100180221363750LLU;

	t96 = (x5109|(x5110&(x5111>>x5112)));

	if (t96 != 839020062995841338LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5113 = INT8_MIN;
	uint16_t x5115 = 0U;
	int16_t x5116 = 1;
	volatile int64_t t97 = -4LL;

	t97 = (x5113|(x5114&(x5115>>x5116)));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5162 = -1;
	uint16_t x5163 = UINT16_MAX;
	int16_t x5164 = 0;
	volatile int64_t t98 = -1305410092LL;

	t98 = (x5161|(x5162&(x5163>>x5164)));

	if (t98 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5265 = INT64_MIN;
	volatile uint8_t x5266 = UINT8_MAX;
	int8_t x5268 = 1;
	int64_t t99 = 1LL;

	t99 = (x5265|(x5266&(x5267>>x5268)));

	if (t99 != -9223372036854775752LL) { NG(); } else { ; }
	
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


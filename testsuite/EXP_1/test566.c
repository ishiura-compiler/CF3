#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x71 = INT64_MIN;
int8_t x72 = 31;
uint32_t x89 = 2U;
uint64_t t2 = 15032LLU;
int32_t x102 = 7526;
uint8_t x104 = 28U;
uint8_t x119 = UINT8_MAX;
static volatile int32_t t4 = 95657420;
int16_t x153 = INT16_MIN;
int16_t x169 = INT16_MAX;
int64_t x189 = INT64_MAX;
int64_t x191 = -1LL;
static int8_t x239 = -2;
uint8_t x316 = 14U;
static int16_t x427 = INT16_MIN;
uint64_t x428 = 4LLU;
int64_t x449 = INT64_MAX;
static int16_t x451 = -1;
int64_t t12 = 96498LL;
int16_t x469 = INT16_MIN;
uint8_t x472 = 19U;
volatile int64_t t13 = 6600300LL;
volatile int8_t x483 = -1;
volatile int8_t x546 = INT8_MIN;
static int64_t x553 = INT64_MIN;
int64_t t18 = -17LL;
static int32_t x582 = -1;
volatile uint16_t x584 = 0U;
uint8_t x640 = 0U;
uint8_t x655 = 3U;
uint8_t x656 = 3U;
volatile int64_t x845 = INT64_MIN;
volatile int32_t t30 = 5;
volatile int16_t x1028 = 30;
uint16_t x1041 = 228U;
uint8_t x1044 = 11U;
volatile int8_t x1080 = 1;
uint32_t x1092 = 0U;
int32_t x1231 = INT32_MAX;
int32_t x1239 = INT32_MAX;
int8_t x1315 = INT8_MIN;
uint8_t x1316 = 3U;
static int16_t x1431 = INT16_MIN;
int64_t x1614 = INT64_MIN;
int64_t t48 = 8613531977914LL;
uint32_t t50 = 91U;
static volatile int64_t t52 = 2082683080061LL;
int8_t x1726 = INT8_MAX;
int32_t t53 = 567;
int8_t x1743 = -37;
int8_t x1924 = 1;
int8_t x1990 = INT8_MIN;
static volatile int32_t x2006 = INT32_MIN;
static int8_t x2019 = INT8_MAX;
int16_t x2025 = INT16_MAX;
volatile int32_t t63 = -37668;
uint32_t x2130 = 25278983U;
int8_t x2131 = INT8_MIN;
volatile int32_t x2132 = 0;
static uint32_t t67 = 10U;
static volatile int8_t x2445 = -1;
int32_t x2635 = 42166472;
int8_t x2712 = 0;
volatile int16_t x2746 = -1;
volatile int32_t x2747 = -1;
uint8_t x2796 = 0U;
volatile uint64_t x2939 = 1147365508650403LLU;
static uint8_t x2942 = UINT8_MAX;
uint16_t x2961 = 7U;
uint32_t x2963 = 79U;
uint32_t t82 = 3238U;
static int64_t x2971 = INT64_MIN;
volatile uint8_t x2992 = 0U;
uint64_t x3052 = 1LLU;
int8_t x3073 = INT8_MAX;
volatile uint64_t x3136 = 3LLU;
volatile int64_t t88 = -4705141769LL;
int32_t t90 = -887200;
uint32_t t93 = 683U;
int32_t x3228 = 0;
uint32_t x3236 = 51U;
volatile int64_t t95 = -14775961LL;
int64_t x3349 = -1LL;
volatile int64_t x3351 = INT64_MAX;


void f0(void) {
	int64_t x25 = 55LL;
	uint64_t x26 = 2310213357814371598LLU;
	static int32_t x27 = 930353051;
	int16_t x28 = 0;
	uint64_t t0 = 188LLU;

	t0 = (((x25/x26)%x27)>>x28);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x69 = 93U;
	int32_t x70 = INT32_MIN;
	volatile int64_t t1 = -1774194249LL;

	t1 = (((x69/x70)%x71)>>x72);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x90 = INT64_MIN;
	uint64_t x91 = UINT64_MAX;
	int8_t x92 = 2;

	t2 = (((x89/x90)%x91)>>x92);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x101 = 0U;
	volatile uint8_t x103 = 58U;
	uint32_t t3 = 487523243U;

	t3 = (((x101/x102)%x103)>>x104);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x117 = 0U;
	int16_t x118 = -1;
	static volatile int16_t x120 = 0;

	t4 = (((x117/x118)%x119)>>x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x154 = INT8_MAX;
	static int8_t x155 = -1;
	volatile uint8_t x156 = 25U;
	volatile int32_t t5 = -348091;

	t5 = (((x153/x154)%x155)>>x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x170 = 7U;
	static volatile int8_t x171 = -1;
	volatile uint8_t x172 = 0U;
	volatile int32_t t6 = 1;

	t6 = (((x169/x170)%x171)>>x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x190 = -1;
	int8_t x192 = 0;
	int64_t t7 = -4605167078042579617LL;

	t7 = (((x189/x190)%x191)>>x192);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x237 = 6930871U;
	static uint16_t x238 = UINT16_MAX;
	static uint8_t x240 = 12U;
	volatile uint32_t t8 = 37802U;

	t8 = (((x237/x238)%x239)>>x240);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x313 = -1LL;
	volatile int32_t x314 = INT32_MIN;
	static volatile int32_t x315 = -1;
	volatile int64_t t9 = 13597379818204781LL;

	t9 = (((x313/x314)%x315)>>x316);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x377 = 10U;
	uint64_t x378 = UINT64_MAX;
	static int16_t x379 = -1;
	uint8_t x380 = 62U;
	static volatile uint64_t t10 = 5116500893597LLU;

	t10 = (((x377/x378)%x379)>>x380);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x425 = 75U;
	int16_t x426 = -1942;
	int32_t t11 = -3276630;

	t11 = (((x425/x426)%x427)>>x428);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x450 = INT16_MAX;
	uint64_t x452 = 3LLU;

	t12 = (((x449/x450)%x451)>>x452);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x470 = 218181068267138LL;
	volatile int8_t x471 = 31;

	t13 = (((x469/x470)%x471)>>x472);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x481 = -1;
	int8_t x482 = INT8_MAX;
	volatile int16_t x484 = 12;
	int32_t t14 = 0;

	t14 = (((x481/x482)%x483)>>x484);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x489 = 0;
	volatile int8_t x490 = -3;
	int32_t x491 = -262;
	static int8_t x492 = 7;
	int32_t t15 = -4098435;

	t15 = (((x489/x490)%x491)>>x492);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x525 = 734558537U;
	int16_t x526 = INT16_MAX;
	int64_t x527 = 124LL;
	int8_t x528 = 1;
	int64_t t16 = 118186LL;

	t16 = (((x525/x526)%x527)>>x528);

	if (t16 != 48LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x545 = -1;
	static volatile int32_t x547 = -1;
	uint16_t x548 = 5U;
	volatile int32_t t17 = -416029162;

	t17 = (((x545/x546)%x547)>>x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x554 = 47U;
	static uint8_t x555 = 1U;
	uint16_t x556 = 1U;

	t18 = (((x553/x554)%x555)>>x556);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x573 = 45U;
	int8_t x574 = -1;
	int64_t x575 = INT64_MAX;
	static uint32_t x576 = 34U;
	int64_t t19 = -1307592645887186192LL;

	t19 = (((x573/x574)%x575)>>x576);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x581 = 46596336LLU;
	int16_t x583 = -31;
	volatile uint64_t t20 = 3854621072390LLU;

	t20 = (((x581/x582)%x583)>>x584);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x597 = INT32_MIN;
	uint8_t x598 = 2U;
	static volatile int8_t x599 = INT8_MIN;
	static int16_t x600 = 15;
	int32_t t21 = -6481;

	t21 = (((x597/x598)%x599)>>x600);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x637 = -1;
	static uint32_t x638 = 96608U;
	volatile uint32_t x639 = UINT32_MAX;
	static volatile uint32_t t22 = 10585U;

	t22 = (((x637/x638)%x639)>>x640);

	if (t22 != 44457U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x653 = INT16_MAX;
	uint64_t x654 = 219526693283033LLU;
	uint64_t t23 = 14349846LLU;

	t23 = (((x653/x654)%x655)>>x656);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MIN;
	int16_t x711 = -1;
	uint32_t x712 = 6U;
	int32_t t24 = 142;

	t24 = (((x709/x710)%x711)>>x712);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x717 = 458200051696874613LLU;
	int8_t x718 = 1;
	int32_t x719 = INT32_MIN;
	static uint8_t x720 = 41U;
	volatile uint64_t t25 = 392037369460701LLU;

	t25 = (((x717/x718)%x719)>>x720);

	if (t25 != 208365LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x833 = UINT64_MAX;
	static int32_t x834 = -1;
	uint8_t x835 = 3U;
	volatile uint16_t x836 = 30U;
	volatile uint64_t t26 = 3298LLU;

	t26 = (((x833/x834)%x835)>>x836);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x846 = INT64_MIN;
	int64_t x847 = INT64_MAX;
	uint32_t x848 = 0U;
	int64_t t27 = 298LL;

	t27 = (((x845/x846)%x847)>>x848);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x861 = UINT32_MAX;
	volatile uint8_t x862 = 5U;
	uint8_t x863 = 27U;
	int8_t x864 = 1;
	volatile uint32_t t28 = 8831349U;

	t28 = (((x861/x862)%x863)>>x864);

	if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x893 = -1295373;
	int16_t x894 = -396;
	int8_t x895 = INT8_MAX;
	uint8_t x896 = 11U;
	int32_t t29 = 1849;

	t29 = (((x893/x894)%x895)>>x896);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x977 = 462526;
	int32_t x978 = INT32_MIN;
	int16_t x979 = 5;
	uint8_t x980 = 13U;

	t30 = (((x977/x978)%x979)>>x980);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x989 = UINT8_MAX;
	int16_t x990 = 87;
	int64_t x991 = -1LL;
	int8_t x992 = 0;
	static int64_t t31 = -68502481097302413LL;

	t31 = (((x989/x990)%x991)>>x992);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1005 = 2542749454489LL;
	volatile int32_t x1006 = INT32_MAX;
	int64_t x1007 = INT64_MIN;
	volatile uint8_t x1008 = 14U;
	int64_t t32 = 91067144725999LL;

	t32 = (((x1005/x1006)%x1007)>>x1008);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1025 = 8151U;
	int16_t x1026 = 98;
	uint8_t x1027 = 6U;
	static uint32_t t33 = 6062U;

	t33 = (((x1025/x1026)%x1027)>>x1028);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1037 = 99090459953821109LLU;
	static uint32_t x1038 = UINT32_MAX;
	uint8_t x1039 = 17U;
	static volatile uint8_t x1040 = 1U;
	uint64_t t34 = 21464156LLU;

	t34 = (((x1037/x1038)%x1039)>>x1040);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1042 = 2381438097936476LLU;
	volatile uint32_t x1043 = 3U;
	uint64_t t35 = 222661LLU;

	t35 = (((x1041/x1042)%x1043)>>x1044);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1073 = -1;
	uint16_t x1074 = 904U;
	int64_t x1075 = 15067LL;
	volatile uint8_t x1076 = 18U;
	int64_t t36 = 53526867LL;

	t36 = (((x1073/x1074)%x1075)>>x1076);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1077 = INT16_MIN;
	static int16_t x1078 = INT16_MIN;
	static uint64_t x1079 = 133451433LLU;
	volatile uint64_t t37 = 4427LLU;

	t37 = (((x1077/x1078)%x1079)>>x1080);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1089 = -3412142306728LL;
	uint64_t x1090 = 304475288580LLU;
	volatile int16_t x1091 = -1;
	uint64_t t38 = 5420045392LLU;

	t38 = (((x1089/x1090)%x1091)>>x1092);

	if (t38 != 60585345LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1229 = 19736906362521590LLU;
	volatile uint16_t x1230 = 3601U;
	uint8_t x1232 = 5U;
	static volatile uint64_t t39 = 5639505823986613321LLU;

	t39 = (((x1229/x1230)%x1231)>>x1232);

	if (t39 != 17913622LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1237 = 0;
	int16_t x1238 = -1;
	static int32_t x1240 = 7;
	int32_t t40 = -7520320;

	t40 = (((x1237/x1238)%x1239)>>x1240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1269 = 3U;
	uint16_t x1270 = 5U;
	int8_t x1271 = -1;
	static uint8_t x1272 = 5U;
	static int32_t t41 = 1;

	t41 = (((x1269/x1270)%x1271)>>x1272);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1277 = 330LLU;
	int16_t x1278 = INT16_MAX;
	int8_t x1279 = -11;
	volatile uint8_t x1280 = 0U;
	volatile uint64_t t42 = 138365368669199803LLU;

	t42 = (((x1277/x1278)%x1279)>>x1280);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1313 = -16LL;
	uint32_t x1314 = 583857709U;
	static volatile int64_t t43 = -26LL;

	t43 = (((x1313/x1314)%x1315)>>x1316);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1385 = 159U;
	uint8_t x1386 = 61U;
	uint64_t x1387 = 2968365252663607782LLU;
	uint8_t x1388 = 0U;
	static volatile uint64_t t44 = 2051853313479LLU;

	t44 = (((x1385/x1386)%x1387)>>x1388);

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x1429 = 49041U;
	int16_t x1430 = INT16_MIN;
	int64_t x1432 = 0LL;
	volatile uint32_t t45 = 12040083U;

	t45 = (((x1429/x1430)%x1431)>>x1432);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1457 = 11U;
	int64_t x1458 = INT64_MIN;
	static volatile int16_t x1459 = 2;
	volatile uint8_t x1460 = 39U;
	int64_t t46 = 0LL;

	t46 = (((x1457/x1458)%x1459)>>x1460);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1553 = UINT32_MAX;
	uint32_t x1554 = UINT32_MAX;
	uint16_t x1555 = UINT16_MAX;
	uint16_t x1556 = 27U;
	uint32_t t47 = 13811U;

	t47 = (((x1553/x1554)%x1555)>>x1556);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x1613 = INT32_MIN;
	static volatile uint32_t x1615 = 353U;
	uint16_t x1616 = 6U;

	t48 = (((x1613/x1614)%x1615)>>x1616);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1645 = 75U;
	static uint32_t x1646 = UINT32_MAX;
	uint8_t x1647 = 3U;
	uint32_t x1648 = 5U;
	volatile uint32_t t49 = 115067346U;

	t49 = (((x1645/x1646)%x1647)>>x1648);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1665 = UINT16_MAX;
	int8_t x1666 = -7;
	uint32_t x1667 = 11636U;
	uint8_t x1668 = 2U;

	t50 = (((x1665/x1666)%x1667)>>x1668);

	if (t50 != 1402U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1689 = INT64_MIN;
	int16_t x1690 = 955;
	uint64_t x1691 = UINT64_MAX;
	volatile uint8_t x1692 = 16U;
	uint64_t t51 = 66399916084005LLU;

	t51 = (((x1689/x1690)%x1691)>>x1692);

	if (t51 != 281327607612901LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1721 = 0;
	volatile uint16_t x1722 = UINT16_MAX;
	int64_t x1723 = INT64_MAX;
	uint16_t x1724 = 2U;

	t52 = (((x1721/x1722)%x1723)>>x1724);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1725 = 0U;
	static int8_t x1727 = -1;
	int8_t x1728 = 4;

	t53 = (((x1725/x1726)%x1727)>>x1728);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1741 = 188U;
	volatile int32_t x1742 = INT32_MIN;
	static uint8_t x1744 = 27U;
	volatile int32_t t54 = -615837366;

	t54 = (((x1741/x1742)%x1743)>>x1744);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1765 = 16683673U;
	uint8_t x1766 = 17U;
	volatile uint8_t x1767 = 14U;
	uint8_t x1768 = 6U;
	uint32_t t55 = 621952U;

	t55 = (((x1765/x1766)%x1767)>>x1768);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1821 = INT8_MAX;
	int64_t x1822 = 4057559014729LL;
	volatile int32_t x1823 = INT32_MIN;
	volatile uint8_t x1824 = 49U;
	static int64_t t56 = 990212964382288LL;

	t56 = (((x1821/x1822)%x1823)>>x1824);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1921 = INT8_MIN;
	uint64_t x1922 = 9LLU;
	int32_t x1923 = -883611;
	uint64_t t57 = 215783033987LLU;

	t57 = (((x1921/x1922)%x1923)>>x1924);

	if (t57 != 1024819115206086193LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1961 = 69;
	static int16_t x1962 = INT16_MIN;
	int64_t x1963 = 1392946208LL;
	uint8_t x1964 = 40U;
	volatile int64_t t58 = -956347LL;

	t58 = (((x1961/x1962)%x1963)>>x1964);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1965 = UINT8_MAX;
	volatile int32_t x1966 = INT32_MIN;
	int64_t x1967 = INT64_MIN;
	uint8_t x1968 = 25U;
	int64_t t59 = -299LL;

	t59 = (((x1965/x1966)%x1967)>>x1968);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1989 = 24150U;
	int64_t x1991 = INT64_MIN;
	uint64_t x1992 = 0LLU;
	int64_t t60 = -253420LL;

	t60 = (((x1989/x1990)%x1991)>>x1992);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x2005 = 5114;
	volatile int8_t x2007 = 1;
	uint16_t x2008 = 4U;
	volatile int32_t t61 = -3921;

	t61 = (((x2005/x2006)%x2007)>>x2008);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2017 = 46951U;
	int64_t x2018 = 127645023LL;
	volatile int16_t x2020 = 9;
	int64_t t62 = 275762626380281540LL;

	t62 = (((x2017/x2018)%x2019)>>x2020);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2026 = 64U;
	int8_t x2027 = INT8_MIN;
	volatile uint8_t x2028 = 13U;

	t63 = (((x2025/x2026)%x2027)>>x2028);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2049 = 3578999742672044LLU;
	volatile int8_t x2050 = -1;
	int32_t x2051 = -10347960;
	static int16_t x2052 = 7;
	volatile uint64_t t64 = 109236LLU;

	t64 = (((x2049/x2050)%x2051)>>x2052);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2097 = UINT32_MAX;
	int64_t x2098 = INT64_MIN;
	int64_t x2099 = 7073866691531207LL;
	uint16_t x2100 = 1U;
	volatile int64_t t65 = 2989866LL;

	t65 = (((x2097/x2098)%x2099)>>x2100);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2117 = -1738;
	int64_t x2118 = INT64_MIN;
	int64_t x2119 = -1LL;
	static uint8_t x2120 = 0U;
	int64_t t66 = 6581607LL;

	t66 = (((x2117/x2118)%x2119)>>x2120);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2129 = 19943U;

	t67 = (((x2129/x2130)%x2131)>>x2132);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2177 = INT16_MAX;
	volatile int16_t x2178 = INT16_MAX;
	static int8_t x2179 = INT8_MAX;
	static uint8_t x2180 = 0U;
	int32_t t68 = -236;

	t68 = (((x2177/x2178)%x2179)>>x2180);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2446 = INT8_MAX;
	uint16_t x2447 = 1727U;
	static uint8_t x2448 = 6U;
	volatile int32_t t69 = -1244896;

	t69 = (((x2445/x2446)%x2447)>>x2448);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2465 = 1;
	static int32_t x2466 = 843258;
	int64_t x2467 = -1LL;
	volatile uint16_t x2468 = 1U;
	volatile int64_t t70 = -13338998LL;

	t70 = (((x2465/x2466)%x2467)>>x2468);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2617 = UINT8_MAX;
	static uint16_t x2618 = 121U;
	volatile uint32_t x2619 = 3903U;
	static volatile int8_t x2620 = 2;
	volatile uint32_t t71 = 22540U;

	t71 = (((x2617/x2618)%x2619)>>x2620);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2633 = 3LLU;
	static volatile int8_t x2634 = 59;
	int8_t x2636 = 0;
	uint64_t t72 = 112756701864219302LLU;

	t72 = (((x2633/x2634)%x2635)>>x2636);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x2697 = 835168653LLU;
	volatile uint64_t x2698 = 2197657920565155LLU;
	int64_t x2699 = INT64_MAX;
	uint64_t x2700 = 3LLU;
	volatile uint64_t t73 = 11815LLU;

	t73 = (((x2697/x2698)%x2699)>>x2700);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2701 = 13LLU;
	uint64_t x2702 = UINT64_MAX;
	int32_t x2703 = 808508493;
	static uint8_t x2704 = 15U;
	uint64_t t74 = 3055081100632418LLU;

	t74 = (((x2701/x2702)%x2703)>>x2704);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2709 = 106U;
	uint8_t x2710 = UINT8_MAX;
	int16_t x2711 = 94;
	volatile int32_t t75 = -2915513;

	t75 = (((x2709/x2710)%x2711)>>x2712);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2745 = INT32_MAX;
	uint16_t x2748 = 3U;
	int32_t t76 = -8606;

	t76 = (((x2745/x2746)%x2747)>>x2748);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2769 = INT16_MAX;
	static uint64_t x2770 = 45740476568035LLU;
	int64_t x2771 = INT64_MAX;
	uint8_t x2772 = 14U;
	uint64_t t77 = 1591853LLU;

	t77 = (((x2769/x2770)%x2771)>>x2772);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2793 = UINT16_MAX;
	uint64_t x2794 = 2411744171LLU;
	volatile int8_t x2795 = INT8_MIN;
	volatile uint64_t t78 = 3018295354340516032LLU;

	t78 = (((x2793/x2794)%x2795)>>x2796);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2821 = 53350730LLU;
	volatile int64_t x2822 = -1LL;
	volatile int8_t x2823 = 6;
	volatile int8_t x2824 = 46;
	volatile uint64_t t79 = 0LLU;

	t79 = (((x2821/x2822)%x2823)>>x2824);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2937 = INT64_MIN;
	int16_t x2938 = INT16_MIN;
	static uint16_t x2940 = 15U;
	static uint64_t t80 = 15LLU;

	t80 = (((x2937/x2938)%x2939)>>x2940);

	if (t80 != 8589934592LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x2941 = 714182179838104LL;
	int64_t x2943 = -653061425817663LL;
	uint16_t x2944 = 2U;
	int64_t t81 = 6782879692581LL;

	t81 = (((x2941/x2942)%x2943)>>x2944);

	if (t81 != 700178607684LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2962 = -14;
	static int16_t x2964 = 0;

	t82 = (((x2961/x2962)%x2963)>>x2964);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2969 = 0;
	int64_t x2970 = 1001365LL;
	int8_t x2972 = 1;
	int64_t t83 = 1894159065LL;

	t83 = (((x2969/x2970)%x2971)>>x2972);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2989 = 430241290895496LLU;
	volatile int64_t x2990 = -1LL;
	static volatile uint32_t x2991 = UINT32_MAX;
	uint64_t t84 = 0LLU;

	t84 = (((x2989/x2990)%x2991)>>x2992);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3049 = INT32_MIN;
	uint16_t x3050 = 474U;
	uint32_t x3051 = 6322515U;
	uint32_t t85 = 986515U;

	t85 = (((x3049/x3050)%x3051)>>x3052);

	if (t85 != 1885785U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3074 = 608780797385329LLU;
	uint64_t x3075 = UINT64_MAX;
	uint8_t x3076 = 30U;
	uint64_t t86 = 5LLU;

	t86 = (((x3073/x3074)%x3075)>>x3076);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3125 = -1LL;
	static uint16_t x3126 = UINT16_MAX;
	volatile int16_t x3127 = INT16_MIN;
	static volatile int64_t x3128 = 9LL;
	volatile int64_t t87 = 1012647LL;

	t87 = (((x3125/x3126)%x3127)>>x3128);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3133 = UINT32_MAX;
	int64_t x3134 = INT64_MIN;
	uint8_t x3135 = 18U;

	t88 = (((x3133/x3134)%x3135)>>x3136);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3153 = -1;
	int64_t x3154 = INT64_MIN;
	int32_t x3155 = -678981;
	uint16_t x3156 = 4U;
	int64_t t89 = 199378524921LL;

	t89 = (((x3153/x3154)%x3155)>>x3156);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3161 = -59;
	int16_t x3162 = -153;
	int8_t x3163 = 1;
	static uint8_t x3164 = 1U;

	t90 = (((x3161/x3162)%x3163)>>x3164);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3165 = 30U;
	int16_t x3166 = INT16_MIN;
	int64_t x3167 = INT64_MIN;
	int16_t x3168 = 1;
	static int64_t t91 = -489LL;

	t91 = (((x3165/x3166)%x3167)>>x3168);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x3193 = 394U;
	uint64_t x3194 = 50861LLU;
	int8_t x3195 = -16;
	volatile uint8_t x3196 = 18U;
	volatile uint64_t t92 = 223537561463399LLU;

	t92 = (((x3193/x3194)%x3195)>>x3196);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3209 = INT16_MIN;
	uint32_t x3210 = 2U;
	int32_t x3211 = INT32_MAX;
	static uint16_t x3212 = 5U;

	t93 = (((x3209/x3210)%x3211)>>x3212);

	if (t93 != 67108352U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3225 = INT8_MAX;
	uint32_t x3226 = UINT32_MAX;
	int16_t x3227 = -1;
	uint32_t t94 = 2292U;

	t94 = (((x3225/x3226)%x3227)>>x3228);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3233 = -7;
	static volatile int64_t x3234 = -1LL;
	volatile int32_t x3235 = 2;

	t95 = (((x3233/x3234)%x3235)>>x3236);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3257 = -1;
	static int8_t x3258 = INT8_MAX;
	uint8_t x3259 = UINT8_MAX;
	uint8_t x3260 = 4U;
	volatile int32_t t96 = -5306;

	t96 = (((x3257/x3258)%x3259)>>x3260);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3293 = 47070048LL;
	uint8_t x3294 = 6U;
	int64_t x3295 = -105LL;
	int16_t x3296 = 0;
	volatile int64_t t97 = -5176225118281LL;

	t97 = (((x3293/x3294)%x3295)>>x3296);

	if (t97 != 38LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x3309 = INT16_MIN;
	static int32_t x3310 = -1;
	int8_t x3311 = 1;
	int8_t x3312 = 10;
	volatile int32_t t98 = 4;

	t98 = (((x3309/x3310)%x3311)>>x3312);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3350 = -2LL;
	uint16_t x3352 = 0U;
	int64_t t99 = 4005113691804764LL;

	t99 = (((x3349/x3350)%x3351)>>x3352);

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


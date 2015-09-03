#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MAX;
static int32_t t1 = 137;
int8_t x23 = 1;
int32_t x110 = -1;
int16_t x185 = INT16_MIN;
int8_t x256 = -1;
int32_t t8 = -2;
static int32_t t9 = -2003;
int8_t x321 = INT8_MIN;
uint8_t x449 = 98U;
volatile int32_t t12 = 2399;
volatile int32_t t16 = 906634773;
static int8_t x611 = 3;
uint8_t x821 = 1U;
volatile uint16_t x965 = 473U;
volatile int32_t t25 = -1;
volatile int32_t t26 = 602413921;
static int8_t x1080 = INT8_MIN;
uint16_t x1159 = 2U;
static volatile int32_t t30 = 849171021;
uint16_t x1223 = 18U;
static volatile int32_t t31 = 3343;
static volatile int8_t x1344 = INT8_MIN;
volatile int8_t x1354 = INT8_MAX;
int64_t x1430 = INT64_MIN;
static int16_t x1634 = 433;
volatile int32_t t41 = 41;
volatile int64_t x1669 = -1LL;
int16_t x1672 = 2009;
int16_t x1681 = -11580;
uint8_t x1686 = 4U;
volatile uint8_t x1687 = 2U;
uint32_t x1709 = UINT32_MAX;
int64_t x1713 = -1LL;
int32_t t47 = 608;
int64_t x1755 = 5LL;
int32_t x1792 = -328;
static volatile int32_t t50 = -65520554;
int8_t x1833 = INT8_MAX;
int32_t x1838 = INT32_MIN;
uint32_t x1839 = 2U;
int8_t x1850 = INT8_MIN;
static uint8_t x1852 = UINT8_MAX;
static volatile int8_t x1858 = -1;
int64_t x1973 = -2116041LL;
int32_t t56 = -3179223;
int8_t x1983 = 0;
int32_t t57 = 11;
static volatile int32_t t59 = -17614378;
volatile int32_t t60 = -625889;
static int32_t x2262 = -63981;
static uint8_t x2263 = 1U;
volatile int32_t t64 = -2357;
int32_t x2322 = -1;
volatile uint8_t x2323 = 1U;
int32_t x2413 = INT32_MIN;
static uint16_t x2427 = 1U;
int16_t x2428 = INT16_MIN;
int32_t x2436 = 1166;
int32_t t72 = 134;
static volatile int32_t x2452 = INT32_MIN;
uint64_t x2466 = UINT64_MAX;
uint8_t x2471 = 52U;
static int32_t t75 = 3716;
int64_t x2541 = -7955142LL;
uint64_t x2543 = 43LLU;
static int32_t t76 = 2372;
uint32_t x2626 = 32618258U;
static uint16_t x2627 = 10U;
volatile uint8_t x2687 = 52U;
uint32_t x2688 = 16752U;
static int64_t x2705 = 9LL;
int32_t t84 = 629706083;
int64_t x2846 = INT64_MAX;
int16_t x2847 = 1;
int32_t t85 = 27685112;
int32_t t86 = -218373480;
static int32_t t87 = 3;
uint8_t x3003 = 15U;
static int64_t x3004 = -118698326776570729LL;
int32_t t88 = -107639;
volatile int32_t t89 = -9;
volatile int32_t t90 = -3;
uint8_t x3071 = 8U;
int8_t x3093 = INT8_MIN;
static volatile int8_t x3096 = -2;
static int32_t t93 = 33105;
static int16_t x3193 = -2;
volatile int32_t t95 = 4;
int64_t x3224 = -1LL;
static volatile uint16_t x3228 = 2680U;
int32_t t98 = -896517;
static int16_t x3294 = 1988;
volatile uint32_t x3296 = 12586586U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x2 = -1818639;
	static uint32_t x3 = 1U;
	volatile int32_t t0 = 285962;

	t0 = (((x1/x2)>>x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 801743616741329LLU;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = 11;
	uint32_t x20 = UINT32_MAX;

	t1 = (((x17/x18)>>x19)==x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 14U;
	uint8_t x22 = UINT8_MAX;
	static volatile int32_t x24 = INT32_MAX;
	int32_t t2 = 0;

	t2 = (((x21/x22)>>x23)==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	uint16_t x26 = 4759U;
	uint8_t x27 = 1U;
	volatile int64_t x28 = -6920197698923LL;
	volatile int32_t t3 = 7;

	t3 = (((x25/x26)>>x27)==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x109 = -15554012LL;
	uint8_t x111 = 23U;
	int32_t x112 = 7577294;
	static int32_t t4 = -696;

	t4 = (((x109/x110)>>x111)==x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x161 = UINT8_MAX;
	static volatile int8_t x162 = 3;
	volatile int16_t x163 = 11;
	int32_t x164 = INT32_MAX;
	int32_t t5 = -91281255;

	t5 = (((x161/x162)>>x163)==x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x181 = 27992967936251LLU;
	volatile uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = 1LL;
	static int64_t x184 = -1LL;
	static volatile int32_t t6 = -13;

	t6 = (((x181/x182)>>x183)==x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x186 = 2778358LLU;
	static uint8_t x187 = 2U;
	int8_t x188 = INT8_MAX;
	static volatile int32_t t7 = 158947;

	t7 = (((x185/x186)>>x187)==x188);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x253 = INT16_MIN;
	volatile int8_t x254 = -1;
	volatile uint8_t x255 = 16U;

	t8 = (((x253/x254)>>x255)==x256);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x269 = 713127901LLU;
	volatile int64_t x270 = -1LL;
	static volatile uint8_t x271 = 45U;
	int8_t x272 = INT8_MAX;

	t9 = (((x269/x270)>>x271)==x272);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x322 = 5U;
	static uint8_t x323 = 22U;
	static int16_t x324 = -416;
	static volatile int32_t t10 = -615037;

	t10 = (((x321/x322)>>x323)==x324);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 5653210724LLU;
	volatile uint8_t x379 = 54U;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t11 = -625;

	t11 = (((x377/x378)>>x379)==x380);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x450 = 3700U;
	uint32_t x451 = 8U;
	volatile int64_t x452 = -1LL;

	t12 = (((x449/x450)>>x451)==x452);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x465 = INT8_MAX;
	int32_t x466 = 51353;
	int16_t x467 = 0;
	uint16_t x468 = 823U;
	static int32_t t13 = -54393744;

	t13 = (((x465/x466)>>x467)==x468);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x525 = INT64_MIN;
	static int32_t x526 = INT32_MIN;
	static int64_t x527 = 0LL;
	int64_t x528 = INT64_MIN;
	volatile int32_t t14 = -25;

	t14 = (((x525/x526)>>x527)==x528);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x585 = INT8_MIN;
	int32_t x586 = INT32_MAX;
	uint64_t x587 = 5LLU;
	int64_t x588 = -1LL;
	int32_t t15 = -63759318;

	t15 = (((x585/x586)>>x587)==x588);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MIN;
	uint8_t x603 = 9U;
	uint16_t x604 = UINT16_MAX;

	t16 = (((x601/x602)>>x603)==x604);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x609 = -1;
	uint64_t x610 = UINT64_MAX;
	int64_t x612 = INT64_MIN;
	static int32_t t17 = 316396104;

	t17 = (((x609/x610)>>x611)==x612);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x617 = 106321671LLU;
	static int8_t x618 = -1;
	static uint8_t x619 = 52U;
	uint8_t x620 = 2U;
	volatile int32_t t18 = -60;

	t18 = (((x617/x618)>>x619)==x620);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x709 = -13;
	int16_t x710 = INT16_MAX;
	volatile int32_t x711 = 17;
	static uint8_t x712 = UINT8_MAX;
	static int32_t t19 = 1067;

	t19 = (((x709/x710)>>x711)==x712);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x753 = -1;
	static int64_t x754 = 3LL;
	static uint32_t x755 = 3U;
	int64_t x756 = INT64_MIN;
	volatile int32_t t20 = 4041;

	t20 = (((x753/x754)>>x755)==x756);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x822 = INT8_MIN;
	uint8_t x823 = 3U;
	int64_t x824 = -1LL;
	volatile int32_t t21 = -161162904;

	t21 = (((x821/x822)>>x823)==x824);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x825 = INT32_MIN;
	int16_t x826 = -1606;
	volatile uint32_t x827 = 1U;
	int32_t x828 = -1;
	int32_t t22 = 599;

	t22 = (((x825/x826)>>x827)==x828);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x966 = 6670143;
	volatile uint8_t x967 = 18U;
	volatile int32_t x968 = 0;
	int32_t t23 = -6;

	t23 = (((x965/x966)>>x967)==x968);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x969 = -1;
	uint32_t x970 = 55259U;
	static int8_t x971 = 7;
	uint64_t x972 = 28177669908LLU;
	int32_t t24 = -1789;

	t24 = (((x969/x970)>>x971)==x972);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1049 = -1;
	volatile uint32_t x1050 = 7197U;
	volatile int8_t x1051 = 14;
	uint32_t x1052 = UINT32_MAX;

	t25 = (((x1049/x1050)>>x1051)==x1052);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1061 = UINT64_MAX;
	uint8_t x1062 = 10U;
	static uint16_t x1063 = 1U;
	int16_t x1064 = -1;

	t26 = (((x1061/x1062)>>x1063)==x1064);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1077 = 271472673631106LLU;
	int32_t x1078 = INT32_MIN;
	uint8_t x1079 = 3U;
	int32_t t27 = 9;

	t27 = (((x1077/x1078)>>x1079)==x1080);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1117 = INT32_MIN;
	volatile int8_t x1118 = INT8_MIN;
	volatile int16_t x1119 = 1;
	uint64_t x1120 = 0LLU;
	static int32_t t28 = 1047;

	t28 = (((x1117/x1118)>>x1119)==x1120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1157 = 14922U;
	int8_t x1158 = INT8_MAX;
	static uint16_t x1160 = UINT16_MAX;
	int32_t t29 = -13300;

	t29 = (((x1157/x1158)>>x1159)==x1160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1201 = 3736U;
	volatile uint32_t x1202 = 240U;
	uint8_t x1203 = 7U;
	uint8_t x1204 = 61U;

	t30 = (((x1201/x1202)>>x1203)==x1204);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1221 = INT16_MAX;
	uint8_t x1222 = UINT8_MAX;
	static int8_t x1224 = -1;

	t31 = (((x1221/x1222)>>x1223)==x1224);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1337 = -39;
	uint64_t x1338 = 200764824941714682LLU;
	static int8_t x1339 = 1;
	static volatile int64_t x1340 = -16LL;
	volatile int32_t t32 = -7778;

	t32 = (((x1337/x1338)>>x1339)==x1340);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1341 = INT32_MIN;
	int64_t x1342 = 1746039032647797398LL;
	uint8_t x1343 = 1U;
	int32_t t33 = -8349643;

	t33 = (((x1341/x1342)>>x1343)==x1344);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1353 = 210741998LL;
	int16_t x1355 = 1;
	volatile uint64_t x1356 = UINT64_MAX;
	volatile int32_t t34 = 997;

	t34 = (((x1353/x1354)>>x1355)==x1356);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1425 = 3811U;
	uint16_t x1426 = UINT16_MAX;
	uint64_t x1427 = 11LLU;
	int64_t x1428 = -1LL;
	volatile int32_t t35 = -99;

	t35 = (((x1425/x1426)>>x1427)==x1428);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1429 = INT32_MIN;
	uint8_t x1431 = 1U;
	volatile int32_t x1432 = 4;
	static volatile int32_t t36 = 3480;

	t36 = (((x1429/x1430)>>x1431)==x1432);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1441 = -27LL;
	int64_t x1442 = INT64_MIN;
	uint32_t x1443 = 2U;
	volatile int32_t x1444 = 15922;
	volatile int32_t t37 = 55833;

	t37 = (((x1441/x1442)>>x1443)==x1444);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1457 = INT8_MIN;
	static int16_t x1458 = INT16_MAX;
	int8_t x1459 = 0;
	volatile int8_t x1460 = INT8_MIN;
	static volatile int32_t t38 = 29;

	t38 = (((x1457/x1458)>>x1459)==x1460);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1589 = 30;
	int8_t x1590 = INT8_MAX;
	int32_t x1591 = 0;
	int8_t x1592 = INT8_MAX;
	volatile int32_t t39 = -8046097;

	t39 = (((x1589/x1590)>>x1591)==x1592);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1633 = 80U;
	static uint64_t x1635 = 5LLU;
	int64_t x1636 = INT64_MIN;
	int32_t t40 = 802832319;

	t40 = (((x1633/x1634)>>x1635)==x1636);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x1665 = 4133694U;
	int32_t x1666 = 23575;
	int32_t x1667 = 1;
	volatile int64_t x1668 = INT64_MIN;

	t41 = (((x1665/x1666)>>x1667)==x1668);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1670 = -1;
	static int8_t x1671 = 5;
	static volatile int32_t t42 = -7980;

	t42 = (((x1669/x1670)>>x1671)==x1672);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1682 = INT16_MIN;
	volatile uint8_t x1683 = 20U;
	int8_t x1684 = INT8_MAX;
	int32_t t43 = 13562909;

	t43 = (((x1681/x1682)>>x1683)==x1684);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1685 = 0;
	volatile int8_t x1688 = INT8_MAX;
	volatile int32_t t44 = -370;

	t44 = (((x1685/x1686)>>x1687)==x1688);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1701 = UINT8_MAX;
	volatile int64_t x1702 = INT64_MIN;
	int8_t x1703 = 1;
	volatile uint32_t x1704 = 4454U;
	int32_t t45 = 17;

	t45 = (((x1701/x1702)>>x1703)==x1704);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1710 = INT64_MIN;
	static uint16_t x1711 = 0U;
	int16_t x1712 = 183;
	volatile int32_t t46 = -771262996;

	t46 = (((x1709/x1710)>>x1711)==x1712);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1714 = 108U;
	volatile uint8_t x1715 = 0U;
	static volatile uint16_t x1716 = UINT16_MAX;

	t47 = (((x1713/x1714)>>x1715)==x1716);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1753 = INT32_MIN;
	int16_t x1754 = -9;
	int8_t x1756 = 13;
	volatile int32_t t48 = -18175132;

	t48 = (((x1753/x1754)>>x1755)==x1756);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1757 = 197U;
	uint16_t x1758 = UINT16_MAX;
	int16_t x1759 = 0;
	uint8_t x1760 = 0U;
	int32_t t49 = 438441;

	t49 = (((x1757/x1758)>>x1759)==x1760);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1789 = 0;
	volatile int8_t x1790 = -1;
	uint16_t x1791 = 0U;

	t50 = (((x1789/x1790)>>x1791)==x1792);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x1834 = 373004006LLU;
	uint16_t x1835 = 4U;
	static volatile uint8_t x1836 = UINT8_MAX;
	volatile int32_t t51 = -66040782;

	t51 = (((x1833/x1834)>>x1835)==x1836);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1837 = INT64_MIN;
	uint64_t x1840 = UINT64_MAX;
	int32_t t52 = -3005344;

	t52 = (((x1837/x1838)>>x1839)==x1840);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1849 = UINT64_MAX;
	volatile uint8_t x1851 = 23U;
	volatile int32_t t53 = 31;

	t53 = (((x1849/x1850)>>x1851)==x1852);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1857 = -1120825440105732364LL;
	static int32_t x1859 = 3;
	int64_t x1860 = 1LL;
	int32_t t54 = 1;

	t54 = (((x1857/x1858)>>x1859)==x1860);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1929 = 6U;
	int16_t x1930 = INT16_MIN;
	volatile uint32_t x1931 = 0U;
	static int8_t x1932 = -1;
	volatile int32_t t55 = 6917466;

	t55 = (((x1929/x1930)>>x1931)==x1932);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1974 = -1;
	uint8_t x1975 = 2U;
	uint16_t x1976 = UINT16_MAX;

	t56 = (((x1973/x1974)>>x1975)==x1976);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1981 = INT16_MIN;
	static int64_t x1982 = INT64_MIN;
	volatile int32_t x1984 = -661;

	t57 = (((x1981/x1982)>>x1983)==x1984);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2013 = -1865446364367LL;
	volatile int64_t x2014 = -964131123LL;
	uint8_t x2015 = 10U;
	uint32_t x2016 = UINT32_MAX;
	int32_t t58 = 2157;

	t58 = (((x2013/x2014)>>x2015)==x2016);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x2125 = 5100U;
	uint8_t x2126 = 13U;
	uint64_t x2127 = 16LLU;
	volatile uint32_t x2128 = 7047U;

	t59 = (((x2125/x2126)>>x2127)==x2128);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2145 = -1;
	uint32_t x2146 = UINT32_MAX;
	static volatile uint16_t x2147 = 18U;
	int32_t x2148 = INT32_MIN;

	t60 = (((x2145/x2146)>>x2147)==x2148);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2161 = -1LL;
	int64_t x2162 = -58120762LL;
	int8_t x2163 = 11;
	volatile int16_t x2164 = 54;
	int32_t t61 = -1;

	t61 = (((x2161/x2162)>>x2163)==x2164);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2205 = INT16_MAX;
	uint64_t x2206 = 2186082422468416LLU;
	uint16_t x2207 = 42U;
	int8_t x2208 = INT8_MAX;
	int32_t t62 = 112869;

	t62 = (((x2205/x2206)>>x2207)==x2208);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2257 = INT16_MAX;
	int32_t x2258 = INT32_MIN;
	uint8_t x2259 = 22U;
	int16_t x2260 = INT16_MIN;
	int32_t t63 = 50771;

	t63 = (((x2257/x2258)>>x2259)==x2260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2261 = INT64_MIN;
	volatile int32_t x2264 = -657159;

	t64 = (((x2261/x2262)>>x2263)==x2264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2273 = INT32_MAX;
	static uint64_t x2274 = 62LLU;
	uint32_t x2275 = 7U;
	int32_t x2276 = -1;
	int32_t t65 = 8284;

	t65 = (((x2273/x2274)>>x2275)==x2276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2321 = 726710711517684382LLU;
	volatile int32_t x2324 = -355322;
	static int32_t t66 = -1821154;

	t66 = (((x2321/x2322)>>x2323)==x2324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2333 = -1;
	int16_t x2334 = INT16_MIN;
	uint8_t x2335 = 1U;
	uint64_t x2336 = UINT64_MAX;
	volatile int32_t t67 = 378002;

	t67 = (((x2333/x2334)>>x2335)==x2336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x2414 = 282082717782394762LLU;
	uint8_t x2415 = 40U;
	volatile int16_t x2416 = INT16_MIN;
	volatile int32_t t68 = -2203;

	t68 = (((x2413/x2414)>>x2415)==x2416);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x2425 = 85U;
	static uint64_t x2426 = 1LLU;
	static volatile int32_t t69 = -1048754438;

	t69 = (((x2425/x2426)>>x2427)==x2428);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2429 = 0U;
	uint64_t x2430 = 14LLU;
	uint8_t x2431 = 6U;
	int8_t x2432 = -1;
	int32_t t70 = -47045;

	t70 = (((x2429/x2430)>>x2431)==x2432);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2433 = INT16_MIN;
	int64_t x2434 = -885234827LL;
	int16_t x2435 = 0;
	static volatile int32_t t71 = 13375331;

	t71 = (((x2433/x2434)>>x2435)==x2436);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2441 = UINT16_MAX;
	int64_t x2442 = INT64_MIN;
	int8_t x2443 = 12;
	static uint8_t x2444 = UINT8_MAX;

	t72 = (((x2441/x2442)>>x2443)==x2444);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2449 = -42;
	int32_t x2450 = INT32_MIN;
	uint8_t x2451 = 15U;
	volatile int32_t t73 = 79682415;

	t73 = (((x2449/x2450)>>x2451)==x2452);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2465 = 258515LL;
	uint16_t x2467 = 53U;
	int16_t x2468 = INT16_MIN;
	int32_t t74 = -212219;

	t74 = (((x2465/x2466)>>x2467)==x2468);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2469 = 1LL;
	uint64_t x2470 = 85372LLU;
	static int32_t x2472 = -1;

	t75 = (((x2469/x2470)>>x2471)==x2472);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2542 = INT64_MIN;
	static int64_t x2544 = -1LL;

	t76 = (((x2541/x2542)>>x2543)==x2544);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2573 = INT8_MAX;
	int16_t x2574 = INT16_MAX;
	volatile uint8_t x2575 = 7U;
	int8_t x2576 = -1;
	volatile int32_t t77 = 1;

	t77 = (((x2573/x2574)>>x2575)==x2576);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2625 = -1;
	uint8_t x2628 = 26U;
	int32_t t78 = -135077045;

	t78 = (((x2625/x2626)>>x2627)==x2628);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2665 = 1;
	int16_t x2666 = INT16_MAX;
	uint32_t x2667 = 1U;
	int32_t x2668 = -1;
	int32_t t79 = 72;

	t79 = (((x2665/x2666)>>x2667)==x2668);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2685 = INT64_MIN;
	static int32_t x2686 = INT32_MIN;
	volatile int32_t t80 = 1945;

	t80 = (((x2685/x2686)>>x2687)==x2688);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x2706 = INT64_MIN;
	static uint8_t x2707 = 28U;
	static int64_t x2708 = INT64_MAX;
	volatile int32_t t81 = 3390;

	t81 = (((x2705/x2706)>>x2707)==x2708);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2717 = 1U;
	static int16_t x2718 = INT16_MIN;
	volatile uint32_t x2719 = 0U;
	static uint8_t x2720 = UINT8_MAX;
	volatile int32_t t82 = 57;

	t82 = (((x2717/x2718)>>x2719)==x2720);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2733 = 538U;
	int64_t x2734 = -2214505159913586LL;
	uint8_t x2735 = 62U;
	int64_t x2736 = -1LL;
	int32_t t83 = 4045040;

	t83 = (((x2733/x2734)>>x2735)==x2736);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2769 = INT8_MIN;
	static int16_t x2770 = -1;
	int8_t x2771 = 1;
	int8_t x2772 = -1;

	t84 = (((x2769/x2770)>>x2771)==x2772);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2845 = 5063U;
	int64_t x2848 = INT64_MAX;

	t85 = (((x2845/x2846)>>x2847)==x2848);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x2893 = 481982LLU;
	int32_t x2894 = INT32_MIN;
	int8_t x2895 = 26;
	volatile int16_t x2896 = 0;

	t86 = (((x2893/x2894)>>x2895)==x2896);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2929 = 6;
	uint64_t x2930 = 6348801513895306395LLU;
	int8_t x2931 = 1;
	int32_t x2932 = -33496426;

	t87 = (((x2929/x2930)>>x2931)==x2932);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3001 = 2U;
	int8_t x3002 = INT8_MIN;

	t88 = (((x3001/x3002)>>x3003)==x3004);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x3013 = UINT64_MAX;
	uint16_t x3014 = 26U;
	int8_t x3015 = 1;
	volatile int64_t x3016 = INT64_MIN;

	t89 = (((x3013/x3014)>>x3015)==x3016);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3037 = UINT64_MAX;
	static int64_t x3038 = INT64_MIN;
	uint16_t x3039 = 0U;
	int8_t x3040 = INT8_MAX;

	t90 = (((x3037/x3038)>>x3039)==x3040);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3069 = 14629;
	int32_t x3070 = INT32_MAX;
	int32_t x3072 = -1;
	volatile int32_t t91 = -16498409;

	t91 = (((x3069/x3070)>>x3071)==x3072);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3094 = INT8_MIN;
	uint32_t x3095 = 3U;
	volatile int32_t t92 = 73529;

	t92 = (((x3093/x3094)>>x3095)==x3096);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3141 = INT8_MAX;
	int8_t x3142 = 6;
	int8_t x3143 = 0;
	int8_t x3144 = 1;

	t93 = (((x3141/x3142)>>x3143)==x3144);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3145 = 1U;
	static int32_t x3146 = INT32_MAX;
	uint32_t x3147 = 3U;
	static uint32_t x3148 = 1614473721U;
	static int32_t t94 = 138220;

	t94 = (((x3145/x3146)>>x3147)==x3148);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3194 = INT32_MIN;
	volatile uint16_t x3195 = 11U;
	int64_t x3196 = INT64_MIN;

	t95 = (((x3193/x3194)>>x3195)==x3196);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3221 = UINT64_MAX;
	volatile uint8_t x3222 = UINT8_MAX;
	int8_t x3223 = 2;
	volatile int32_t t96 = 6;

	t96 = (((x3221/x3222)>>x3223)==x3224);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3225 = -524364978;
	int16_t x3226 = INT16_MIN;
	uint8_t x3227 = 10U;
	int32_t t97 = 215657;

	t97 = (((x3225/x3226)>>x3227)==x3228);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x3233 = 4U;
	int32_t x3234 = INT32_MIN;
	static uint16_t x3235 = 4U;
	static uint8_t x3236 = 16U;

	t98 = (((x3233/x3234)>>x3235)==x3236);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3293 = UINT32_MAX;
	static uint64_t x3295 = 2LLU;
	int32_t t99 = 14895;

	t99 = (((x3293/x3294)>>x3295)==x3296);

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


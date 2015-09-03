#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x102 = INT64_MAX;
int32_t x103 = 5;
int64_t t2 = -625538507LL;
uint16_t x336 = UINT16_MAX;
uint64_t t4 = 1809136437866LLU;
static uint16_t x405 = 473U;
volatile int32_t x408 = 1734;
int8_t x529 = 1;
static uint32_t x530 = 373221U;
volatile int32_t t7 = -48797;
volatile uint64_t t9 = 476576924412272252LLU;
volatile uint32_t x798 = UINT32_MAX;
static uint32_t x799 = 1U;
volatile int64_t t11 = -3965LL;
volatile int64_t t12 = -50325863LL;
volatile int8_t x939 = 1;
uint32_t x940 = 92761U;
uint32_t t14 = 7452387U;
uint64_t x1026 = 1LLU;
uint8_t x1027 = 61U;
uint8_t x1123 = 1U;
int32_t x1246 = INT32_MAX;
volatile int64_t t19 = -3LL;
volatile int32_t t21 = 26937265;
volatile int32_t t24 = -26;
uint8_t x1527 = 5U;
int64_t x1528 = -1LL;
static uint16_t x1548 = 602U;
int8_t x1569 = 49;
static uint8_t x1571 = 14U;
static uint32_t x1572 = UINT32_MAX;
int64_t t28 = -105LL;
volatile uint8_t x1595 = 9U;
volatile int64_t x1683 = 51LL;
volatile int32_t t33 = 249944;
int16_t x1764 = -240;
static uint64_t x1776 = UINT64_MAX;
uint64_t t36 = 159578051LLU;
uint64_t x1893 = 996796314601LLU;
volatile uint8_t x1938 = 2U;
int8_t x1939 = 0;
uint8_t x1940 = 4U;
volatile int32_t t39 = -3;
uint8_t x1980 = UINT8_MAX;
uint64_t x2006 = 3LLU;
volatile int16_t x2008 = INT16_MIN;
uint32_t x2064 = 32U;
volatile int64_t x2070 = INT64_MAX;
int32_t x2072 = INT32_MAX;
uint16_t x2154 = UINT16_MAX;
int16_t x2164 = -3369;
int64_t x2206 = INT64_MAX;
static int16_t x2219 = 29;
int64_t x2250 = INT64_MAX;
volatile int8_t x2251 = 2;
static int8_t x2393 = -1;
volatile int8_t x2395 = 1;
volatile uint8_t x2447 = 1U;
int32_t x2537 = -387104;
int8_t x2538 = 0;
static volatile int32_t t55 = 51231500;
int8_t x2587 = 6;
volatile int64_t t56 = 486LL;
int32_t x2782 = INT32_MAX;
int64_t t57 = -8061566106137380LL;
uint8_t x2854 = 20U;
int64_t x3239 = 1LL;
static int16_t x3245 = -252;
int16_t x3314 = 7;
static uint8_t x3343 = 5U;
int64_t t64 = 40492134341LL;
uint8_t x3526 = 1U;
uint64_t t65 = 935650634LLU;
uint64_t x3623 = 0LLU;
int64_t x3657 = -29755513LL;
uint32_t x3658 = UINT32_MAX;
volatile uint64_t t69 = 127190LLU;
int64_t t71 = 5LL;
volatile int8_t x3864 = 31;
uint32_t x4149 = 364U;
int32_t x4192 = INT32_MAX;
static uint32_t x4209 = 27738U;
int64_t x4234 = 256009LL;
static int8_t x4235 = 0;
volatile uint64_t x4313 = 2301533203903651252LLU;
int16_t x4315 = 1;
int16_t x4317 = INT16_MAX;
int8_t x4359 = 2;
int32_t x4489 = 25318037;
uint32_t x4741 = 78796637U;
int32_t x4877 = -1;
int64_t t92 = -34689LL;
static int64_t x4969 = INT64_MIN;
volatile int16_t x4972 = INT16_MAX;
volatile int64_t t93 = 261014789139424LL;
int64_t x5069 = INT64_MIN;
int8_t x5130 = INT8_MAX;
volatile uint32_t t95 = 117401768U;
int8_t x5161 = -3;
static uint32_t t97 = 1U;
static int8_t x5515 = 1;


void f0(void) {
	int32_t x93 = 1;
	static int16_t x94 = INT16_MAX;
	int32_t x95 = 13;
	static uint32_t x96 = 23365441U;
	uint32_t t0 = 530537817U;

	t0 = (x93+((x94>>x95)|x96));

	if (t0 != 23365444U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x101 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	int64_t t1 = -59005193LL;

	t1 = (x101+((x102>>x103)|x104));

	if (t1 != -32769LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x133 = -1;
	int32_t x134 = INT32_MAX;
	uint16_t x135 = 1U;
	int64_t x136 = 977534102507LL;

	t2 = (x133+((x134>>x135)|x136));

	if (t2 != 978178801662LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x297 = 47866280676LLU;
	static uint8_t x298 = UINT8_MAX;
	volatile int8_t x299 = 6;
	uint32_t x300 = 2U;
	volatile uint64_t t3 = 508480838491206709LLU;

	t3 = (x297+((x298>>x299)|x300));

	if (t3 != 47866280679LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 111U;
	uint8_t x335 = 12U;

	t4 = (x333+((x334>>x335)|x336));

	if (t4 != 65534LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x406 = 6U;
	uint8_t x407 = 0U;
	int32_t t5 = 98;

	t5 = (x405+((x406>>x407)|x408));

	if (t5 != 2207) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x531 = 2;
	int32_t x532 = INT32_MIN;
	static uint32_t t6 = 0U;

	t6 = (x529+((x530>>x531)|x532));

	if (t6 != 2147576954U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x565 = UINT16_MAX;
	int32_t x566 = INT32_MAX;
	int64_t x567 = 1LL;
	int16_t x568 = -1;

	t7 = (x565+((x566>>x567)|x568));

	if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x609 = INT8_MIN;
	static uint64_t x610 = 112392172LLU;
	uint8_t x611 = 10U;
	int64_t x612 = INT64_MIN;
	volatile uint64_t t8 = 31882483482214LLU;

	t8 = (x609+((x610>>x611)|x612));

	if (t8 != 9223372036854885437LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x693 = UINT64_MAX;
	volatile uint64_t x694 = 60314LLU;
	uint64_t x695 = 3LLU;
	volatile int32_t x696 = -919062;

	t9 = (x693+((x694>>x695)|x696));

	if (t9 != 18446744073708633594LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x749 = 803;
	uint8_t x750 = 3U;
	uint8_t x751 = 1U;
	static uint64_t x752 = UINT64_MAX;
	static uint64_t t10 = 3922556913LLU;

	t10 = (x749+((x750>>x751)|x752));

	if (t10 != 802LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x797 = 66U;
	int64_t x800 = -83821691617030LL;

	t11 = (x797+((x798>>x799)|x800));

	if (t11 != -83820581748671LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x865 = 1124U;
	static uint8_t x866 = 51U;
	int32_t x867 = 1;
	int64_t x868 = -18834970960242LL;

	t12 = (x865+((x866>>x867)|x868));

	if (t12 != -18834970959101LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x881 = UINT64_MAX;
	uint16_t x882 = 200U;
	uint16_t x883 = 2U;
	int8_t x884 = INT8_MAX;
	static volatile uint64_t t13 = 498901018472170744LLU;

	t13 = (x881+((x882>>x883)|x884));

	if (t13 != 126LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x937 = -1;
	uint8_t x938 = 8U;

	t14 = (x937+((x938>>x939)|x940));

	if (t14 != 92764U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x957 = 0U;
	uint32_t x958 = UINT32_MAX;
	uint8_t x959 = 1U;
	volatile int32_t x960 = 61643877;
	uint32_t t15 = 1802267U;

	t15 = (x957+((x958>>x959)|x960));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1025 = INT64_MIN;
	int64_t x1028 = INT64_MIN;
	volatile uint64_t t16 = 87236085531LLU;

	t16 = (x1025+((x1026>>x1027)|x1028));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1121 = INT32_MAX;
	static uint32_t x1122 = 26017U;
	uint8_t x1124 = UINT8_MAX;
	volatile uint32_t t17 = 8778934U;

	t17 = (x1121+((x1122>>x1123)|x1124));

	if (t17 != 2147496702U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1221 = 28472U;
	static int64_t x1222 = INT64_MAX;
	static uint8_t x1223 = 10U;
	int64_t x1224 = 23686573709LL;
	volatile int64_t t18 = -26LL;

	t18 = (x1221+((x1222>>x1223)|x1224));

	if (t18 != 9007199254769463LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1245 = INT64_MAX;
	static volatile uint16_t x1247 = 1U;
	int32_t x1248 = -1;

	t19 = (x1245+((x1246>>x1247)|x1248));

	if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1297 = -1LL;
	static uint8_t x1298 = 12U;
	static volatile uint16_t x1299 = 3U;
	uint8_t x1300 = UINT8_MAX;
	int64_t t20 = 4177101634303420LL;

	t20 = (x1297+((x1298>>x1299)|x1300));

	if (t20 != 254LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1321 = -1;
	uint16_t x1322 = 1080U;
	int8_t x1323 = 1;
	int16_t x1324 = INT16_MIN;

	t21 = (x1321+((x1322>>x1323)|x1324));

	if (t21 != -32229) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1389 = 1U;
	uint64_t x1390 = UINT64_MAX;
	static volatile uint8_t x1391 = 5U;
	uint64_t x1392 = UINT64_MAX;
	volatile uint64_t t22 = 13639LLU;

	t22 = (x1389+((x1390>>x1391)|x1392));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1405 = 3211LL;
	uint32_t x1406 = 104U;
	uint8_t x1407 = 24U;
	int8_t x1408 = INT8_MAX;
	int64_t t23 = 144716737LL;

	t23 = (x1405+((x1406>>x1407)|x1408));

	if (t23 != 3338LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1469 = 6;
	volatile int32_t x1470 = INT32_MAX;
	uint8_t x1471 = 15U;
	int16_t x1472 = -1;

	t24 = (x1469+((x1470>>x1471)|x1472));

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1517 = -3;
	uint16_t x1518 = 9704U;
	int64_t x1519 = 21LL;
	volatile int32_t x1520 = -56;
	int32_t t25 = 152468674;

	t25 = (x1517+((x1518>>x1519)|x1520));

	if (t25 != -59) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1525 = -1;
	uint32_t x1526 = UINT32_MAX;
	volatile int64_t t26 = -84810391606LL;

	t26 = (x1525+((x1526>>x1527)|x1528));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1545 = 1250489LLU;
	int16_t x1546 = INT16_MAX;
	static int16_t x1547 = 0;
	uint64_t t27 = 55LLU;

	t27 = (x1545+((x1546>>x1547)|x1548));

	if (t27 != 1283256LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x1570 = INT64_MAX;

	t28 = (x1569+((x1570>>x1571)|x1572));

	if (t28 != 562949953421360LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1573 = UINT16_MAX;
	static uint32_t x1574 = 442U;
	int8_t x1575 = 12;
	int64_t x1576 = -1LL;
	volatile int64_t t29 = -826286604481855LL;

	t29 = (x1573+((x1574>>x1575)|x1576));

	if (t29 != 65534LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x1593 = 3U;
	uint32_t x1594 = 0U;
	int64_t x1596 = -1LL;
	static volatile int64_t t30 = -2487708592988095LL;

	t30 = (x1593+((x1594>>x1595)|x1596));

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1657 = INT8_MIN;
	volatile int64_t x1658 = INT64_MAX;
	int16_t x1659 = 19;
	uint32_t x1660 = 2U;
	int64_t t31 = -692439738364096150LL;

	t31 = (x1657+((x1658>>x1659)|x1660));

	if (t31 != 17592186044287LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1681 = 22U;
	static uint64_t x1682 = UINT64_MAX;
	int16_t x1684 = -1;
	uint64_t t32 = 13486LLU;

	t32 = (x1681+((x1682>>x1683)|x1684));

	if (t32 != 21LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1741 = -14;
	int32_t x1742 = INT32_MAX;
	uint16_t x1743 = 0U;
	int16_t x1744 = -1;

	t33 = (x1741+((x1742>>x1743)|x1744));

	if (t33 != -15) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1761 = INT32_MIN;
	uint64_t x1762 = UINT64_MAX;
	volatile uint8_t x1763 = 5U;
	volatile uint64_t t34 = 1LLU;

	t34 = (x1761+((x1762>>x1763)|x1764));

	if (t34 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1773 = 133320851;
	uint8_t x1774 = 29U;
	static int8_t x1775 = 0;
	static volatile uint64_t t35 = 165008406LLU;

	t35 = (x1773+((x1774>>x1775)|x1776));

	if (t35 != 133320850LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1789 = 101723770408177561LLU;
	uint16_t x1790 = UINT16_MAX;
	uint8_t x1791 = 26U;
	int32_t x1792 = INT32_MIN;

	t36 = (x1789+((x1790>>x1791)|x1792));

	if (t36 != 101723768260693913LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1821 = INT64_MIN;
	static uint8_t x1822 = UINT8_MAX;
	static uint8_t x1823 = 6U;
	int64_t x1824 = 33515107777247LL;
	volatile int64_t t37 = -2036959607LL;

	t37 = (x1821+((x1822>>x1823)|x1824));

	if (t37 != -9223338521746998561LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1894 = 0;
	uint8_t x1895 = 0U;
	volatile uint32_t x1896 = 10U;
	static volatile uint64_t t38 = 2392966556656815000LLU;

	t38 = (x1893+((x1894>>x1895)|x1896));

	if (t38 != 996796314611LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1937 = INT16_MIN;

	t39 = (x1937+((x1938>>x1939)|x1940));

	if (t39 != -32762) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1965 = INT64_MAX;
	static uint64_t x1966 = UINT64_MAX;
	static int8_t x1967 = 48;
	volatile int64_t x1968 = INT64_MIN;
	static uint64_t t40 = 811774771155769LLU;

	t40 = (x1965+((x1966>>x1967)|x1968));

	if (t40 != 65534LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1969 = -1;
	int64_t x1970 = INT64_MAX;
	volatile int8_t x1971 = 2;
	int64_t x1972 = 20148769LL;
	static int64_t t41 = 207LL;

	t41 = (x1969+((x1970>>x1971)|x1972));

	if (t41 != 2305843009213693950LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x1977 = 3U;
	volatile uint8_t x1978 = 5U;
	static uint32_t x1979 = 2U;
	int32_t t42 = -542;

	t42 = (x1977+((x1978>>x1979)|x1980));

	if (t42 != 258) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2005 = 59730U;
	static int16_t x2007 = 1;
	uint64_t t43 = 3LLU;

	t43 = (x2005+((x2006>>x2007)|x2008));

	if (t43 != 26963LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2061 = 130U;
	volatile int8_t x2062 = 58;
	uint8_t x2063 = 25U;
	uint32_t t44 = 327U;

	t44 = (x2061+((x2062>>x2063)|x2064));

	if (t44 != 162U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2069 = -1639762844LL;
	volatile uint8_t x2071 = 39U;
	volatile int64_t t45 = -31314633649LL;

	t45 = (x2069+((x2070>>x2071)|x2072));

	if (t45 != 507720803LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2153 = 1LL;
	static uint8_t x2155 = 8U;
	static uint64_t x2156 = 280790714646379155LLU;
	volatile uint64_t t46 = 180833993199962394LLU;

	t46 = (x2153+((x2154>>x2155)|x2156));

	if (t46 != 280790714646379264LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2161 = 1;
	int64_t x2162 = 1679491801866454LL;
	int16_t x2163 = 3;
	volatile int64_t t47 = 7971LL;

	t47 = (x2161+((x2162>>x2163)|x2164));

	if (t47 != -288LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2205 = INT16_MIN;
	static uint8_t x2207 = 41U;
	int64_t x2208 = INT64_MIN;
	volatile int64_t t48 = 443445343LL;

	t48 = (x2205+((x2206>>x2207)|x2208));

	if (t48 != -9223372036850614273LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2217 = 2U;
	volatile int16_t x2218 = INT16_MAX;
	int8_t x2220 = 16;
	static volatile int32_t t49 = -1;

	t49 = (x2217+((x2218>>x2219)|x2220));

	if (t49 != 18) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2233 = -316337;
	static uint32_t x2234 = 1U;
	uint8_t x2235 = 2U;
	uint16_t x2236 = 5591U;
	uint32_t t50 = 548975099U;

	t50 = (x2233+((x2234>>x2235)|x2236));

	if (t50 != 4294656550U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2249 = UINT8_MAX;
	int8_t x2252 = INT8_MAX;
	volatile int64_t t51 = -865851069113840052LL;

	t51 = (x2249+((x2250>>x2251)|x2252));

	if (t51 != 2305843009213694206LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2394 = UINT16_MAX;
	static int8_t x2396 = -2;
	volatile int32_t t52 = 12747;

	t52 = (x2393+((x2394>>x2395)|x2396));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2445 = 2099944529992LL;
	int16_t x2446 = 4932;
	uint16_t x2448 = 1U;
	static int64_t t53 = 1478LL;

	t53 = (x2445+((x2446>>x2447)|x2448));

	if (t53 != 2099944532459LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2539 = 0;
	static volatile uint32_t x2540 = 3015595U;
	uint32_t t54 = 1576U;

	t54 = (x2537+((x2538>>x2539)|x2540));

	if (t54 != 2628491U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2573 = -1;
	volatile int8_t x2574 = 2;
	uint16_t x2575 = 31U;
	int8_t x2576 = -7;

	t55 = (x2573+((x2574>>x2575)|x2576));

	if (t55 != -8) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2585 = -1;
	volatile uint32_t x2586 = 1269456614U;
	int64_t x2588 = INT64_MAX;

	t56 = (x2585+((x2586>>x2587)|x2588));

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2781 = 45LL;
	volatile uint32_t x2783 = 1U;
	int8_t x2784 = 1;

	t57 = (x2781+((x2782>>x2783)|x2784));

	if (t57 != 1073741868LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2853 = 1494099659147LL;
	volatile int8_t x2855 = 2;
	int16_t x2856 = INT16_MIN;
	volatile int64_t t58 = 144399240LL;

	t58 = (x2853+((x2854>>x2855)|x2856));

	if (t58 != 1494099626384LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2949 = 1U;
	int8_t x2950 = 0;
	volatile uint16_t x2951 = 2U;
	uint8_t x2952 = UINT8_MAX;
	uint32_t t59 = 42U;

	t59 = (x2949+((x2950>>x2951)|x2952));

	if (t59 != 256U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3165 = INT16_MAX;
	int16_t x3166 = INT16_MAX;
	int8_t x3167 = 29;
	static volatile uint16_t x3168 = 48U;
	int32_t t60 = 218707;

	t60 = (x3165+((x3166>>x3167)|x3168));

	if (t60 != 32815) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3237 = -1984LL;
	int64_t x3238 = 0LL;
	static volatile int8_t x3240 = INT8_MAX;
	int64_t t61 = -3843209076LL;

	t61 = (x3237+((x3238>>x3239)|x3240));

	if (t61 != -1857LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3246 = 9U;
	volatile uint32_t x3247 = 1U;
	static int8_t x3248 = 6;
	volatile int32_t t62 = 53;

	t62 = (x3245+((x3246>>x3247)|x3248));

	if (t62 != -246) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3313 = 2019357254LLU;
	static volatile int8_t x3315 = 1;
	int16_t x3316 = INT16_MIN;
	static volatile uint64_t t63 = 2115331367142071913LLU;

	t63 = (x3313+((x3314>>x3315)|x3316));

	if (t63 != 2019324489LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3341 = 19981022;
	volatile uint32_t x3342 = UINT32_MAX;
	int64_t x3344 = INT64_MIN;

	t64 = (x3341+((x3342>>x3343)|x3344));

	if (t64 != -9223372036700577059LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3525 = INT8_MIN;
	int8_t x3527 = 5;
	uint64_t x3528 = UINT64_MAX;

	t65 = (x3525+((x3526>>x3527)|x3528));

	if (t65 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3621 = 27198U;
	uint8_t x3622 = 35U;
	int64_t x3624 = -1LL;
	int64_t t66 = 65984010412634LL;

	t66 = (x3621+((x3622>>x3623)|x3624));

	if (t66 != 27197LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3633 = -1;
	volatile int8_t x3634 = INT8_MAX;
	int8_t x3635 = 2;
	int32_t x3636 = 172762639;
	int32_t t67 = 179;

	t67 = (x3633+((x3634>>x3635)|x3636));

	if (t67 != 172762654) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3659 = 7U;
	static volatile int64_t x3660 = INT64_MAX;
	int64_t t68 = -580055510620LL;

	t68 = (x3657+((x3658>>x3659)|x3660));

	if (t68 != 9223372036825020294LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3729 = 2U;
	int8_t x3730 = 0;
	uint8_t x3731 = 2U;
	uint64_t x3732 = 1961236LLU;

	t69 = (x3729+((x3730>>x3731)|x3732));

	if (t69 != 1961238LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3757 = 479759693387602223LLU;
	uint64_t x3758 = 2364171LLU;
	uint8_t x3759 = 20U;
	int8_t x3760 = -1;
	volatile uint64_t t70 = 17140421383565965LLU;

	t70 = (x3757+((x3758>>x3759)|x3760));

	if (t70 != 479759693387602222LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3853 = 39;
	int8_t x3854 = INT8_MAX;
	uint8_t x3855 = 0U;
	int64_t x3856 = INT64_MIN;

	t71 = (x3853+((x3854>>x3855)|x3856));

	if (t71 != -9223372036854775642LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3861 = UINT8_MAX;
	static uint32_t x3862 = UINT32_MAX;
	int16_t x3863 = 2;
	volatile uint32_t t72 = 359217607U;

	t72 = (x3861+((x3862>>x3863)|x3864));

	if (t72 != 1073742078U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3881 = INT32_MIN;
	int64_t x3882 = 5380LL;
	uint8_t x3883 = 28U;
	int64_t x3884 = INT64_MAX;
	int64_t t73 = 1LL;

	t73 = (x3881+((x3882>>x3883)|x3884));

	if (t73 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3949 = 422005U;
	volatile int64_t x3950 = INT64_MAX;
	uint8_t x3951 = 21U;
	uint64_t x3952 = 6382890191237LLU;
	uint64_t t74 = 54849859818562LLU;

	t74 = (x3949+((x3950>>x3951)|x3952));

	if (t74 != 8796093444212LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4069 = 4U;
	uint64_t x4070 = UINT64_MAX;
	uint8_t x4071 = 1U;
	int64_t x4072 = 48912232LL;
	volatile uint64_t t75 = 38194334620LLU;

	t75 = (x4069+((x4070>>x4071)|x4072));

	if (t75 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4113 = 698;
	static uint8_t x4114 = 5U;
	uint8_t x4115 = 23U;
	uint32_t x4116 = 146U;
	volatile uint32_t t76 = 26802259U;

	t76 = (x4113+((x4114>>x4115)|x4116));

	if (t76 != 844U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4150 = INT32_MAX;
	volatile uint32_t x4151 = 1U;
	uint32_t x4152 = 359741773U;
	uint32_t t77 = 3688526U;

	t77 = (x4149+((x4150>>x4151)|x4152));

	if (t77 != 1073742187U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x4189 = INT16_MIN;
	uint32_t x4190 = UINT32_MAX;
	volatile int8_t x4191 = 0;
	uint32_t t78 = 111U;

	t78 = (x4189+((x4190>>x4191)|x4192));

	if (t78 != 4294934527U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4210 = 12;
	uint8_t x4211 = 31U;
	int64_t x4212 = -787589LL;
	int64_t t79 = -731755LL;

	t79 = (x4209+((x4210>>x4211)|x4212));

	if (t79 != -759851LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x4233 = 342434828LL;
	int64_t x4236 = INT64_MIN;
	volatile int64_t t80 = 22186804035302234LL;

	t80 = (x4233+((x4234>>x4235)|x4236));

	if (t80 != -9223372036512084971LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4245 = 232U;
	uint8_t x4246 = UINT8_MAX;
	volatile int64_t x4247 = 1LL;
	static uint16_t x4248 = 1U;
	static volatile int32_t t81 = -222;

	t81 = (x4245+((x4246>>x4247)|x4248));

	if (t81 != 359) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x4281 = 1U;
	uint16_t x4282 = 12961U;
	uint16_t x4283 = 0U;
	uint32_t x4284 = 1845032081U;
	volatile uint32_t t82 = 6554U;

	t82 = (x4281+((x4282>>x4283)|x4284));

	if (t82 != 1845032626U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x4314 = UINT8_MAX;
	uint8_t x4316 = 48U;
	volatile uint64_t t83 = 215348408170068LLU;

	t83 = (x4313+((x4314>>x4315)|x4316));

	if (t83 != 2301533203903651379LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4318 = 3959U;
	uint8_t x4319 = 0U;
	static int8_t x4320 = 42;
	uint32_t t84 = 3945941U;

	t84 = (x4317+((x4318>>x4319)|x4320));

	if (t84 != 36734U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4357 = 0;
	static uint32_t x4358 = UINT32_MAX;
	volatile int32_t x4360 = INT32_MIN;
	volatile uint32_t t85 = 3319U;

	t85 = (x4357+((x4358>>x4359)|x4360));

	if (t85 != 3221225471U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4417 = INT16_MIN;
	volatile uint32_t x4418 = UINT32_MAX;
	uint8_t x4419 = 0U;
	static int16_t x4420 = 3;
	static volatile uint32_t t86 = 267353125U;

	t86 = (x4417+((x4418>>x4419)|x4420));

	if (t86 != 4294934527U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4490 = 930097685;
	int8_t x4491 = 28;
	static int16_t x4492 = INT16_MIN;
	volatile int32_t t87 = 264131255;

	t87 = (x4489+((x4490>>x4491)|x4492));

	if (t87 != 25285272) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4525 = UINT8_MAX;
	volatile int64_t x4526 = INT64_MAX;
	int32_t x4527 = 3;
	int16_t x4528 = -8;
	static volatile int64_t t88 = 110LL;

	t88 = (x4525+((x4526>>x4527)|x4528));

	if (t88 != 254LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4661 = INT32_MIN;
	static uint32_t x4662 = 962358329U;
	static volatile uint8_t x4663 = 11U;
	uint8_t x4664 = UINT8_MAX;
	uint32_t t89 = 7U;

	t89 = (x4661+((x4662>>x4663)|x4664));

	if (t89 != 2147953663U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4742 = 1267U;
	static uint16_t x4743 = 8U;
	volatile int8_t x4744 = 1;
	static uint32_t t90 = 29U;

	t90 = (x4741+((x4742>>x4743)|x4744));

	if (t90 != 78796642U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4878 = 63299LLU;
	int64_t x4879 = 27LL;
	static int8_t x4880 = INT8_MIN;
	uint64_t t91 = 55472033514007LLU;

	t91 = (x4877+((x4878>>x4879)|x4880));

	if (t91 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4957 = -1;
	static uint16_t x4958 = UINT16_MAX;
	int8_t x4959 = 0;
	int64_t x4960 = 3LL;

	t92 = (x4957+((x4958>>x4959)|x4960));

	if (t92 != 65534LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4970 = 212116712U;
	uint8_t x4971 = 6U;

	t93 = (x4969+((x4970>>x4971)|x4972));

	if (t93 != -9223372036851433473LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5070 = UINT32_MAX;
	static uint8_t x5071 = 0U;
	uint64_t x5072 = 0LLU;
	uint64_t t94 = 28979318421645757LLU;

	t94 = (x5069+((x5070>>x5071)|x5072));

	if (t94 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5129 = 269U;
	uint8_t x5131 = 2U;
	uint16_t x5132 = UINT16_MAX;

	t95 = (x5129+((x5130>>x5131)|x5132));

	if (t95 != 65804U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5162 = 15LL;
	uint16_t x5163 = 22U;
	int8_t x5164 = -1;
	int64_t t96 = -3711879776237943LL;

	t96 = (x5161+((x5162>>x5163)|x5164));

	if (t96 != -4LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5241 = -1;
	uint32_t x5242 = UINT32_MAX;
	uint8_t x5243 = 2U;
	int8_t x5244 = INT8_MIN;

	t97 = (x5241+((x5242>>x5243)|x5244));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5361 = INT8_MIN;
	uint32_t x5362 = 625701U;
	int8_t x5363 = 2;
	static uint16_t x5364 = 9U;
	static volatile uint32_t t98 = 4036730U;

	t98 = (x5361+((x5362>>x5363)|x5364));

	if (t98 != 156297U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5513 = 72U;
	int8_t x5514 = INT8_MAX;
	int16_t x5516 = -12;
	int32_t t99 = -202174213;

	t99 = (x5513+((x5514>>x5515)|x5516));

	if (t99 != 71) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 1033LL;
volatile int32_t t3 = -119696263;
static uint16_t x124 = 5U;
uint8_t x178 = UINT8_MAX;
int32_t t6 = -194321202;
int32_t x290 = INT32_MIN;
int8_t x291 = INT8_MAX;
int32_t t8 = -2;
uint16_t x327 = 1286U;
static volatile int64_t t10 = -459322782889567127LL;
volatile int64_t x482 = INT64_MAX;
volatile int64_t x578 = -1LL;
int32_t x647 = -1;
volatile int32_t t17 = -31410352;
uint16_t x793 = 25U;
volatile uint64_t t19 = 3903857LLU;
static int16_t x811 = -2;
volatile uint64_t t20 = 5LLU;
uint8_t x922 = UINT8_MAX;
uint8_t x952 = 14U;
volatile int64_t x955 = INT64_MAX;
int16_t x991 = -1;
uint64_t t25 = 891LLU;
int64_t t26 = -1600315494LL;
int8_t x1169 = -1;
volatile int8_t x1172 = 11;
volatile uint32_t x1177 = 18281856U;
int8_t x1178 = -1;
volatile uint8_t x1184 = 1U;
volatile int8_t x1219 = -1;
int8_t x1220 = 1;
uint16_t x1233 = UINT16_MAX;
static uint64_t t31 = 11469227232LLU;
int8_t x1353 = INT8_MIN;
uint16_t x1371 = 2038U;
int32_t x1382 = INT32_MAX;
int32_t x1435 = -1;
static volatile uint64_t t37 = 518727558783463356LLU;
int16_t x1518 = -1;
int8_t x1519 = INT8_MIN;
int32_t x1569 = INT32_MAX;
int32_t t42 = -1380378;
uint16_t x1617 = UINT16_MAX;
uint32_t x1633 = 2133294600U;
static volatile int16_t x1690 = INT16_MAX;
int64_t x1714 = INT64_MIN;
int64_t x1807 = INT64_MIN;
int64_t t49 = 6569270LL;
int32_t x1823 = INT32_MIN;
int32_t x1837 = INT32_MAX;
static int64_t x2102 = INT64_MAX;
int16_t x2104 = 6;
volatile int16_t x2187 = 419;
volatile uint8_t x2258 = UINT8_MAX;
static int64_t x2262 = 1LL;
int16_t x2346 = -1;
uint8_t x2348 = 1U;
static int32_t x2438 = INT32_MIN;
volatile uint32_t x2440 = 0U;
uint8_t x2470 = UINT8_MAX;
volatile int32_t x2471 = -1;
uint64_t x2472 = 0LLU;
static int8_t x2518 = INT8_MAX;
int8_t x2520 = 2;
int32_t x2585 = -1;
int8_t x2591 = 0;
int16_t x2616 = 10;
volatile int32_t x2641 = 926;
volatile uint32_t t72 = 204U;
static volatile uint8_t x2730 = 7U;
volatile uint64_t t74 = 42LLU;
int8_t x2841 = INT8_MIN;
volatile uint32_t x2843 = UINT32_MAX;
uint32_t t75 = 100U;
volatile int64_t t77 = 0LL;
uint16_t x3275 = UINT16_MAX;
static uint64_t x3279 = 5059838096134618855LLU;
uint16_t x3280 = 31U;
static int8_t x3329 = INT8_MIN;
int16_t x3331 = INT16_MAX;
int8_t x3473 = 1;
uint64_t x3474 = 23730LLU;
int8_t x3557 = -9;
volatile uint8_t x3559 = 0U;
uint16_t x3560 = 4U;
uint8_t x3564 = 1U;
static volatile int16_t x3597 = 1;
uint32_t x3599 = UINT32_MAX;
int8_t x3600 = 0;
static uint64_t x3603 = 2262743195074272766LLU;
uint32_t x3629 = 104107504U;
uint64_t x3632 = 7LLU;
uint32_t t94 = 14490U;
static int32_t x3727 = -6;
int8_t x3793 = INT8_MIN;
volatile int64_t x3794 = INT64_MIN;
uint16_t x3916 = 1U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = 3623U;
	int16_t x3 = -1;
	uint16_t x4 = 19U;
	uint64_t t0 = 366054735525LLU;

	t0 = (((x1/x2)*x3)<<x4);

	if (t0 != 5330869733694636032LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 28110830;
	int64_t x10 = INT64_MIN;
	static int8_t x11 = 5;
	volatile uint16_t x12 = 9U;

	t1 = (((x9/x10)*x11)<<x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 4;
	uint8_t x14 = 14U;
	int64_t x15 = INT64_MIN;
	static uint32_t x16 = 30U;
	int64_t t2 = 5287395089047LL;

	t2 = (((x13/x14)*x15)<<x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = -1;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	uint8_t x40 = 3U;

	t3 = (((x37/x38)*x39)<<x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x121 = -6;
	int32_t x122 = INT32_MAX;
	static uint64_t x123 = UINT64_MAX;
	uint64_t t4 = 21514028245914152LLU;

	t4 = (((x121/x122)*x123)<<x124);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x177 = 5861;
	static uint64_t x179 = 1LLU;
	int8_t x180 = 8;
	static uint64_t t5 = 55914214562674394LLU;

	t5 = (((x177/x178)*x179)<<x180);

	if (t5 != 5632LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x181 = -14813;
	int16_t x182 = INT16_MIN;
	static int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = 2U;

	t6 = (((x181/x182)*x183)<<x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	uint8_t x272 = 23U;
	static int32_t t7 = -43;

	t7 = (((x269/x270)*x271)<<x272);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x289 = UINT8_MAX;
	int32_t x292 = 0;

	t8 = (((x289/x290)*x291)<<x292);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x313 = -999;
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MIN;
	static uint8_t x316 = 7U;
	volatile int32_t t9 = 2;

	t9 = (((x313/x314)*x315)<<x316);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x325 = 114LL;
	static volatile int32_t x326 = INT32_MIN;
	static int8_t x328 = 0;

	t10 = (((x325/x326)*x327)<<x328);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x353 = UINT32_MAX;
	uint16_t x354 = UINT16_MAX;
	static int8_t x355 = -1;
	volatile int16_t x356 = 1;
	uint32_t t11 = 0U;

	t11 = (((x353/x354)*x355)<<x356);

	if (t11 != 4294836222U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x401 = -2LL;
	int32_t x402 = INT32_MAX;
	int16_t x403 = -1;
	int16_t x404 = 5;
	volatile int64_t t12 = 1989LL;

	t12 = (((x401/x402)*x403)<<x404);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x481 = -1;
	static volatile uint8_t x483 = 6U;
	int16_t x484 = 17;
	int64_t t13 = 211955601LL;

	t13 = (((x481/x482)*x483)<<x484);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x493 = 31603LLU;
	int64_t x494 = -151786548LL;
	uint8_t x495 = UINT8_MAX;
	int32_t x496 = 0;
	uint64_t t14 = 90378191LLU;

	t14 = (((x493/x494)*x495)<<x496);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x577 = -1LL;
	int64_t x579 = 202LL;
	int8_t x580 = 2;
	int64_t t15 = -22LL;

	t15 = (((x577/x578)*x579)<<x580);

	if (t15 != 808LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x621 = 1U;
	static int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MAX;
	volatile uint16_t x624 = 10U;
	volatile int32_t t16 = -32852494;

	t16 = (((x621/x622)*x623)<<x624);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x645 = INT8_MAX;
	uint8_t x646 = UINT8_MAX;
	int8_t x648 = 0;

	t17 = (((x645/x646)*x647)<<x648);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x761 = 1;
	volatile int8_t x762 = INT8_MIN;
	volatile uint8_t x763 = 1U;
	uint16_t x764 = 1U;
	int32_t t18 = 0;

	t18 = (((x761/x762)*x763)<<x764);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x794 = 3U;
	uint64_t x795 = UINT64_MAX;
	volatile uint64_t x796 = 1LLU;

	t19 = (((x793/x794)*x795)<<x796);

	if (t19 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x809 = INT8_MIN;
	uint64_t x810 = UINT64_MAX;
	static volatile uint32_t x812 = 3U;

	t20 = (((x809/x810)*x811)<<x812);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x865 = -1;
	uint32_t x866 = UINT32_MAX;
	uint16_t x867 = UINT16_MAX;
	uint32_t x868 = 27U;
	uint32_t t21 = 50102136U;

	t21 = (((x865/x866)*x867)<<x868);

	if (t21 != 4160749568U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x921 = -1;
	int64_t x923 = INT64_MAX;
	static uint16_t x924 = 7U;
	static int64_t t22 = 32205LL;

	t22 = (((x921/x922)*x923)<<x924);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x949 = 3;
	uint16_t x950 = 158U;
	static uint64_t x951 = 20402468047LLU;
	static volatile uint64_t t23 = 6021673022411550LLU;

	t23 = (((x949/x950)*x951)<<x952);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x953 = INT8_MIN;
	uint64_t x954 = 24928556193LLU;
	volatile uint16_t x956 = 1U;
	uint64_t t24 = 6806461362850739382LLU;

	t24 = (((x953/x954)*x955)<<x956);

	if (t24 != 18446744072229582706LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x989 = 3438LLU;
	int16_t x990 = -1;
	int8_t x992 = 0;

	t25 = (((x989/x990)*x991)<<x992);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1161 = INT8_MIN;
	volatile int64_t x1162 = INT64_MAX;
	int32_t x1163 = 5;
	static int8_t x1164 = 10;

	t26 = (((x1161/x1162)*x1163)<<x1164);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1170 = INT8_MIN;
	int8_t x1171 = INT8_MIN;
	static volatile int32_t t27 = -40383;

	t27 = (((x1169/x1170)*x1171)<<x1172);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1179 = UINT8_MAX;
	static int16_t x1180 = 0;
	uint32_t t28 = 176U;

	t28 = (((x1177/x1178)*x1179)<<x1180);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1181 = 16;
	uint16_t x1182 = 3U;
	uint64_t x1183 = 85542254236986LLU;
	volatile uint64_t t29 = 794246375LLU;

	t29 = (((x1181/x1182)*x1183)<<x1184);

	if (t29 != 855422542369860LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1217 = UINT32_MAX;
	volatile int32_t x1218 = -1;
	static uint32_t t30 = 14182U;

	t30 = (((x1217/x1218)*x1219)<<x1220);

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1234 = UINT64_MAX;
	static int16_t x1235 = -5;
	int8_t x1236 = 3;

	t31 = (((x1233/x1234)*x1235)<<x1236);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1297 = 23LLU;
	int8_t x1298 = INT8_MAX;
	static volatile int32_t x1299 = -92;
	uint16_t x1300 = 17U;
	volatile uint64_t t32 = 3003974LLU;

	t32 = (((x1297/x1298)*x1299)<<x1300);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1354 = 31398877U;
	static int32_t x1355 = INT32_MAX;
	int8_t x1356 = 1;
	volatile uint32_t t33 = 7822980U;

	t33 = (((x1353/x1354)*x1355)<<x1356);

	if (t33 != 4294967024U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1369 = INT16_MIN;
	volatile int64_t x1370 = 10306022316212281LL;
	uint64_t x1372 = 28LLU;
	int64_t t34 = 7944161760895LL;

	t34 = (((x1369/x1370)*x1371)<<x1372);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1381 = 598;
	int16_t x1383 = 91;
	int8_t x1384 = 1;
	static volatile int32_t t35 = 4163454;

	t35 = (((x1381/x1382)*x1383)<<x1384);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1433 = 9933U;
	volatile int32_t x1434 = INT32_MAX;
	uint16_t x1436 = 14U;
	static int32_t t36 = -333155;

	t36 = (((x1433/x1434)*x1435)<<x1436);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1465 = 30090045LLU;
	uint32_t x1466 = 295U;
	volatile int64_t x1467 = INT64_MIN;
	volatile uint8_t x1468 = 3U;

	t37 = (((x1465/x1466)*x1467)<<x1468);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1469 = -1;
	int8_t x1470 = -10;
	int8_t x1471 = INT8_MAX;
	static uint64_t x1472 = 0LLU;
	int32_t t38 = -885287;

	t38 = (((x1469/x1470)*x1471)<<x1472);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1509 = UINT64_MAX;
	int32_t x1510 = 7;
	volatile uint32_t x1511 = UINT32_MAX;
	volatile uint8_t x1512 = 54U;
	uint64_t t39 = 1346216203492LLU;

	t39 = (((x1509/x1510)*x1511)<<x1512);

	if (t39 != 15816641891325181952LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x1517 = 22U;
	uint8_t x1520 = 1U;
	static int32_t t40 = -31;

	t40 = (((x1517/x1518)*x1519)<<x1520);

	if (t40 != 5632) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1570 = 219065550564569LL;
	uint16_t x1571 = UINT16_MAX;
	uint8_t x1572 = 23U;
	volatile int64_t t41 = 11851985698220LL;

	t41 = (((x1569/x1570)*x1571)<<x1572);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1577 = INT8_MAX;
	int32_t x1578 = 8205721;
	int16_t x1579 = -3;
	static volatile int16_t x1580 = 0;

	t42 = (((x1577/x1578)*x1579)<<x1580);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1589 = INT8_MIN;
	int16_t x1590 = INT16_MIN;
	int8_t x1591 = 0;
	volatile uint16_t x1592 = 0U;
	static int32_t t43 = -270;

	t43 = (((x1589/x1590)*x1591)<<x1592);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x1618 = -1;
	int8_t x1619 = -1;
	static int8_t x1620 = 0;
	int32_t t44 = 870201;

	t44 = (((x1617/x1618)*x1619)<<x1620);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1634 = 1U;
	volatile int16_t x1635 = INT16_MAX;
	static uint32_t x1636 = 4U;
	volatile uint32_t t45 = 373628U;

	t45 = (((x1633/x1634)*x1635)<<x1636);

	if (t45 != 4257750912U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1645 = INT32_MIN;
	uint32_t x1646 = 939U;
	int16_t x1647 = 177;
	uint16_t x1648 = 0U;
	uint32_t t46 = 1U;

	t46 = (((x1645/x1646)*x1647)<<x1648);

	if (t46 != 404797230U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1689 = -1;
	volatile uint64_t x1691 = 197369LLU;
	static int16_t x1692 = 0;
	volatile uint64_t t47 = 57354309444592008LLU;

	t47 = (((x1689/x1690)*x1691)<<x1692);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1713 = UINT8_MAX;
	int8_t x1715 = 14;
	static uint8_t x1716 = 1U;
	int64_t t48 = 378089LL;

	t48 = (((x1713/x1714)*x1715)<<x1716);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1805 = 20U;
	int64_t x1806 = INT64_MIN;
	uint16_t x1808 = 1U;

	t49 = (((x1805/x1806)*x1807)<<x1808);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1821 = 36270LL;
	int8_t x1822 = -8;
	uint8_t x1824 = 1U;
	int64_t t50 = -155370320755205LL;

	t50 = (((x1821/x1822)*x1823)<<x1824);

	if (t50 != 19469086752768LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1829 = 680U;
	int8_t x1830 = INT8_MAX;
	volatile int8_t x1831 = INT8_MIN;
	static int8_t x1832 = 1;
	uint32_t t51 = 20U;

	t51 = (((x1829/x1830)*x1831)<<x1832);

	if (t51 != 4294966016U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1838 = INT64_MIN;
	int16_t x1839 = -1;
	uint16_t x1840 = 54U;
	volatile int64_t t52 = -158LL;

	t52 = (((x1837/x1838)*x1839)<<x1840);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1929 = -1;
	int64_t x1930 = INT64_MAX;
	int32_t x1931 = 203392907;
	static uint8_t x1932 = 28U;
	volatile int64_t t53 = 104916306941217LL;

	t53 = (((x1929/x1930)*x1931)<<x1932);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2093 = -59436763808LL;
	uint8_t x2094 = 9U;
	int16_t x2095 = INT16_MIN;
	static uint16_t x2096 = 3U;
	int64_t t54 = 985657LL;

	t54 = (((x2093/x2094)*x2095)<<x2096);

	if (t54 != 1731221223374848LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2101 = INT32_MAX;
	volatile int64_t x2103 = INT64_MIN;
	int64_t t55 = 124833851164LL;

	t55 = (((x2101/x2102)*x2103)<<x2104);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2185 = INT16_MIN;
	int32_t x2186 = -2;
	uint8_t x2188 = 8U;
	int32_t t56 = -925;

	t56 = (((x2185/x2186)*x2187)<<x2188);

	if (t56 != 1757413376) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2197 = INT32_MIN;
	volatile int8_t x2198 = INT8_MIN;
	uint16_t x2199 = 8U;
	uint16_t x2200 = 1U;
	static int32_t t57 = 2588348;

	t57 = (((x2197/x2198)*x2199)<<x2200);

	if (t57 != 268435456) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x2209 = 39U;
	int8_t x2210 = INT8_MIN;
	static uint8_t x2211 = 2U;
	volatile int64_t x2212 = 0LL;
	uint32_t t58 = 1874U;

	t58 = (((x2209/x2210)*x2211)<<x2212);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2245 = -2;
	int8_t x2246 = INT8_MAX;
	static int64_t x2247 = INT64_MAX;
	int8_t x2248 = 0;
	int64_t t59 = -1165LL;

	t59 = (((x2245/x2246)*x2247)<<x2248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2257 = -1LL;
	volatile int16_t x2259 = INT16_MIN;
	static int32_t x2260 = 8;
	int64_t t60 = -21982442259315663LL;

	t60 = (((x2257/x2258)*x2259)<<x2260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2261 = 5U;
	int8_t x2263 = INT8_MAX;
	uint8_t x2264 = 0U;
	int64_t t61 = 11166399LL;

	t61 = (((x2261/x2262)*x2263)<<x2264);

	if (t61 != 635LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2345 = 1647956;
	uint32_t x2347 = 1958U;
	static volatile uint32_t t62 = 217507U;

	t62 = (((x2345/x2346)*x2347)<<x2348);

	if (t62 != 2136538896U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2393 = 469277242LLU;
	static uint64_t x2394 = 165LLU;
	volatile int16_t x2395 = INT16_MIN;
	uint8_t x2396 = 0U;
	volatile uint64_t t63 = 208LLU;

	t63 = (((x2393/x2394)*x2395)<<x2396);

	if (t63 != 18446743980513951744LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2405 = -1;
	int64_t x2406 = INT64_MIN;
	uint32_t x2407 = 16U;
	static uint16_t x2408 = 3U;
	int64_t t64 = -53LL;

	t64 = (((x2405/x2406)*x2407)<<x2408);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2437 = -1LL;
	uint8_t x2439 = UINT8_MAX;
	static volatile int64_t t65 = 3469967LL;

	t65 = (((x2437/x2438)*x2439)<<x2440);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x2469 = 381874074U;
	volatile uint32_t t66 = 3U;

	t66 = (((x2469/x2470)*x2471)<<x2472);

	if (t66 != 4293469751U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2517 = 2990797582461LLU;
	int16_t x2519 = -1;
	uint64_t t67 = 14LLU;

	t67 = (((x2517/x2518)*x2519)<<x2520);

	if (t67 != 18446743979511202564LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2586 = -1;
	uint64_t x2587 = 76575273569052857LLU;
	volatile uint32_t x2588 = 1U;
	static volatile uint64_t t68 = 1039186LLU;

	t68 = (((x2585/x2586)*x2587)<<x2588);

	if (t68 != 153150547138105714LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2589 = 1;
	int64_t x2590 = 1000LL;
	uint8_t x2592 = 0U;
	volatile int64_t t69 = 704387643LL;

	t69 = (((x2589/x2590)*x2591)<<x2592);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2613 = -1;
	static int32_t x2614 = 103045;
	int32_t x2615 = -1;
	volatile int32_t t70 = 71183549;

	t70 = (((x2613/x2614)*x2615)<<x2616);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2642 = INT64_MIN;
	int32_t x2643 = 10;
	uint8_t x2644 = 29U;
	volatile int64_t t71 = -5063388396LL;

	t71 = (((x2641/x2642)*x2643)<<x2644);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2649 = INT16_MIN;
	int8_t x2650 = -1;
	uint32_t x2651 = 732U;
	uint16_t x2652 = 0U;

	t72 = (((x2649/x2650)*x2651)<<x2652);

	if (t72 != 23986176U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x2729 = -1;
	uint32_t x2731 = UINT32_MAX;
	volatile int8_t x2732 = 31;
	volatile uint32_t t73 = 13522387U;

	t73 = (((x2729/x2730)*x2731)<<x2732);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2785 = UINT64_MAX;
	static int64_t x2786 = INT64_MIN;
	int16_t x2787 = INT16_MIN;
	uint8_t x2788 = 41U;

	t74 = (((x2785/x2786)*x2787)<<x2788);

	if (t74 != 18374686479671623680LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2842 = -1;
	volatile uint8_t x2844 = 1U;

	t75 = (((x2841/x2842)*x2843)<<x2844);

	if (t75 != 4294967040U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2897 = INT32_MIN;
	int16_t x2898 = INT16_MIN;
	uint32_t x2899 = 166U;
	static int8_t x2900 = 0;
	uint32_t t76 = 5U;

	t76 = (((x2897/x2898)*x2899)<<x2900);

	if (t76 != 10878976U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x3073 = -1;
	int64_t x3074 = INT64_MAX;
	int64_t x3075 = -1LL;
	uint8_t x3076 = 11U;

	t77 = (((x3073/x3074)*x3075)<<x3076);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3105 = -10316;
	int32_t x3106 = INT32_MIN;
	uint8_t x3107 = 19U;
	uint8_t x3108 = 3U;
	int32_t t78 = -399;

	t78 = (((x3105/x3106)*x3107)<<x3108);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x3173 = 3U;
	int16_t x3174 = INT16_MIN;
	int16_t x3175 = INT16_MAX;
	static uint8_t x3176 = 4U;
	volatile uint32_t t79 = 13426U;

	t79 = (((x3173/x3174)*x3175)<<x3176);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3225 = -1LL;
	uint8_t x3226 = 7U;
	int64_t x3227 = INT64_MAX;
	static volatile uint8_t x3228 = 0U;
	volatile int64_t t80 = 116828LL;

	t80 = (((x3225/x3226)*x3227)<<x3228);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3273 = -1LL;
	int8_t x3274 = INT8_MIN;
	static int8_t x3276 = 3;
	volatile int64_t t81 = 7791381LL;

	t81 = (((x3273/x3274)*x3275)<<x3276);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x3277 = 0U;
	volatile int8_t x3278 = -7;
	volatile uint64_t t82 = 241625LLU;

	t82 = (((x3277/x3278)*x3279)<<x3280);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3317 = INT16_MIN;
	static volatile uint16_t x3318 = 14U;
	volatile int16_t x3319 = INT16_MIN;
	int32_t x3320 = 3;
	int32_t t83 = -328695210;

	t83 = (((x3317/x3318)*x3319)<<x3320);

	if (t83 != 613416960) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3330 = INT16_MAX;
	volatile uint8_t x3332 = 7U;
	static volatile int32_t t84 = 208305;

	t84 = (((x3329/x3330)*x3331)<<x3332);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3417 = 6;
	volatile uint8_t x3418 = 1U;
	int64_t x3419 = 13LL;
	volatile uint8_t x3420 = 34U;
	int64_t t85 = -642392431LL;

	t85 = (((x3417/x3418)*x3419)<<x3420);

	if (t85 != 1340029796352LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3475 = INT32_MIN;
	static int8_t x3476 = 29;
	uint64_t t86 = 7397848477LLU;

	t86 = (((x3473/x3474)*x3475)<<x3476);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3529 = 407403023774555LLU;
	static volatile int32_t x3530 = 3176;
	volatile uint16_t x3531 = 3880U;
	static volatile uint32_t x3532 = 0U;
	static volatile uint64_t t87 = 3810195356493643LLU;

	t87 = (((x3529/x3530)*x3531)<<x3532);

	if (t87 != 497708983704320LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x3541 = 1LL;
	int8_t x3542 = -15;
	uint32_t x3543 = 7012U;
	uint8_t x3544 = 7U;
	int64_t t88 = -3283948813LL;

	t88 = (((x3541/x3542)*x3543)<<x3544);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3558 = -1;
	int32_t t89 = -2340;

	t89 = (((x3557/x3558)*x3559)<<x3560);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3561 = INT16_MIN;
	uint16_t x3562 = UINT16_MAX;
	uint64_t x3563 = 4002395772542LLU;
	static volatile uint64_t t90 = 6099208957385460LLU;

	t90 = (((x3561/x3562)*x3563)<<x3564);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3598 = UINT16_MAX;
	uint32_t t91 = 1095U;

	t91 = (((x3597/x3598)*x3599)<<x3600);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x3601 = -1097628676031401LL;
	static int8_t x3602 = 4;
	uint32_t x3604 = 0U;
	uint64_t t92 = 209377466468195LLU;

	t92 = (((x3601/x3602)*x3603)<<x3604);

	if (t92 != 10286980035905050068LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3630 = INT8_MIN;
	static int16_t x3631 = INT16_MAX;
	uint32_t t93 = 1375203U;

	t93 = (((x3629/x3630)*x3631)<<x3632);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3649 = UINT32_MAX;
	static int16_t x3650 = 479;
	int16_t x3651 = INT16_MAX;
	volatile uint8_t x3652 = 3U;

	t94 = (((x3649/x3650)*x3651)<<x3652);

	if (t94 != 1102672896U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3701 = 102U;
	static int64_t x3702 = INT64_MAX;
	static uint8_t x3703 = 13U;
	uint8_t x3704 = 5U;
	static int64_t t95 = 340LL;

	t95 = (((x3701/x3702)*x3703)<<x3704);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3725 = UINT64_MAX;
	uint8_t x3726 = 29U;
	static uint8_t x3728 = 35U;
	volatile uint64_t t96 = 3089169904883LLU;

	t96 = (((x3725/x3726)*x3727)<<x3728);

	if (t96 != 9541419519084331008LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3795 = INT8_MIN;
	static int8_t x3796 = 12;
	int64_t t97 = -6686472540539LL;

	t97 = (((x3793/x3794)*x3795)<<x3796);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3833 = INT32_MIN;
	int64_t x3834 = INT64_MAX;
	volatile int64_t x3835 = INT64_MIN;
	uint32_t x3836 = 6U;
	static int64_t t98 = -7544038688642LL;

	t98 = (((x3833/x3834)*x3835)<<x3836);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3913 = UINT8_MAX;
	uint16_t x3914 = 982U;
	static int8_t x3915 = INT8_MAX;
	int32_t t99 = -33;

	t99 = (((x3913/x3914)*x3915)<<x3916);

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


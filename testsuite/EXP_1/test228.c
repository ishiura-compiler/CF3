#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = 1;
uint8_t x57 = UINT8_MAX;
static uint8_t x180 = 18U;
volatile int32_t t4 = -4;
volatile uint8_t x212 = 1U;
int32_t x226 = -355396059;
int16_t x235 = INT16_MIN;
uint64_t x329 = 82687580516338629LLU;
int32_t x387 = -1;
static volatile int32_t x454 = INT32_MIN;
int16_t x505 = INT16_MIN;
uint8_t x522 = 7U;
int16_t x542 = INT16_MAX;
volatile int32_t t17 = -3780;
volatile uint32_t x577 = 432409U;
uint16_t x578 = UINT16_MAX;
int64_t x609 = 412814042204LL;
uint64_t x611 = UINT64_MAX;
int32_t x653 = 450110;
int16_t x712 = 8;
uint8_t x759 = 3U;
int16_t x771 = INT16_MIN;
uint32_t x807 = 6213261U;
uint64_t t26 = 684105467015336543LLU;
static volatile int32_t t28 = 1636082;
volatile uint16_t x1109 = 7U;
volatile uint16_t x1204 = 2U;
int32_t x1267 = -1;
uint64_t t33 = 20707967142487645LLU;
static uint16_t x1343 = 3850U;
static int32_t x1359 = 173280;
static int8_t x1417 = -1;
static volatile int32_t x1426 = -1;
uint16_t x1519 = 5088U;
static uint64_t x1526 = 62917LLU;
volatile uint32_t t41 = 22153641U;
volatile int16_t x1598 = INT16_MIN;
int16_t x1650 = 1019;
int16_t x1679 = -1;
volatile uint32_t x1680 = 1U;
int8_t x1747 = 1;
uint64_t x1763 = UINT64_MAX;
int64_t x1842 = -3210171LL;
int16_t x1843 = 6;
uint64_t x1844 = 5LLU;
int8_t x1921 = 2;
volatile int32_t t51 = -1646;
static uint64_t x1974 = UINT64_MAX;
volatile uint16_t x2013 = 0U;
volatile uint32_t x2014 = 4U;
int8_t x2046 = 0;
int64_t x2146 = INT64_MIN;
uint16_t x2147 = 207U;
volatile int64_t t56 = 79554694145LL;
volatile int16_t x2225 = INT16_MIN;
static int16_t x2228 = 0;
static uint8_t x2258 = UINT8_MAX;
volatile uint16_t x2260 = 40U;
int32_t x2339 = 971235509;
static uint32_t x2420 = 2U;
static int64_t t63 = 1LL;
int64_t x2425 = INT64_MIN;
static uint64_t x2426 = UINT64_MAX;
volatile int64_t x2427 = INT64_MAX;
static int16_t x2496 = 6;
int8_t x2547 = -1;
int32_t x2645 = INT32_MIN;
uint8_t x2648 = 0U;
volatile uint16_t x2699 = 1329U;
int8_t x2700 = 3;
static int32_t t74 = -542;
static uint64_t t75 = 4130090870606649LLU;
int16_t x2903 = 3;
static volatile int8_t x3062 = INT8_MIN;
uint16_t x3106 = 264U;
int32_t x3179 = -1;
uint16_t x3180 = 4U;
volatile uint64_t t86 = 65604809113950LLU;
static int32_t x3347 = INT32_MIN;
volatile int32_t t87 = 264;
int16_t x3362 = INT16_MAX;
uint8_t x3364 = 0U;
volatile int32_t t88 = 29920282;
static uint8_t x3415 = 90U;
volatile uint16_t x3622 = 14U;
static uint64_t x3629 = 1729189692845363574LLU;
static int32_t x3630 = -1;
static int8_t x3686 = -1;
volatile int32_t t96 = 1052;
uint16_t x3720 = 1U;


void f0(void) {
	uint32_t x9 = 28593740U;
	static int32_t x10 = INT32_MIN;
	int8_t x11 = 1;
	volatile uint32_t t0 = 704690U;

	t0 = (((x9-x10)%x11)>>x12);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x29 = 223006305235941LLU;
	volatile int32_t x30 = -306;
	int16_t x31 = INT16_MIN;
	uint8_t x32 = 0U;
	static volatile uint64_t t1 = 56067706LLU;

	t1 = (((x29-x30)%x31)>>x32);

	if (t1 != 223006305236247LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = -132LL;
	uint8_t x60 = 12U;
	static volatile int64_t t2 = 121123368701390259LL;

	t2 = (((x57-x58)%x59)>>x60);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x121 = INT8_MIN;
	static int8_t x122 = INT8_MIN;
	int64_t x123 = 5455LL;
	int8_t x124 = 1;
	static int64_t t3 = -1317879071593LL;

	t3 = (((x121-x122)%x123)>>x124);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int16_t x179 = 1;

	t4 = (((x177-x178)%x179)>>x180);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x205 = -1;
	int32_t x206 = 5385;
	static int32_t x207 = -1;
	uint16_t x208 = 17U;
	volatile int32_t t5 = -155185;

	t5 = (((x205-x206)%x207)>>x208);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -34715886090832522LL;
	int8_t x211 = INT8_MIN;
	volatile int64_t t6 = 120665856563604LL;

	t6 = (((x209-x210)%x211)>>x212);

	if (t6 != 5LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x225 = 0;
	int8_t x227 = -41;
	uint8_t x228 = 1U;
	static volatile int32_t t7 = -308;

	t7 = (((x225-x226)%x227)>>x228);

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x233 = 7546U;
	static int32_t x234 = -1;
	uint8_t x236 = 0U;
	int32_t t8 = 222;

	t8 = (((x233-x234)%x235)>>x236);

	if (t8 != 7547) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x253 = INT16_MAX;
	static volatile int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = 3;
	volatile int32_t t9 = 580;

	t9 = (((x253-x254)%x255)>>x256);

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x281 = -3307;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = 1;
	volatile int64_t t10 = -4304LL;

	t10 = (((x281-x282)%x283)>>x284);

	if (t10 != 14730LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x330 = 1731;
	static int32_t x331 = -1;
	static volatile int32_t x332 = 25;
	volatile uint64_t t11 = 101535652LLU;

	t11 = (((x329-x330)%x331)>>x332);

	if (t11 != 2464281932LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x385 = 34U;
	int8_t x386 = INT8_MIN;
	uint16_t x388 = 1U;
	volatile int32_t t12 = 13835;

	t12 = (((x385-x386)%x387)>>x388);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x393 = -1;
	static uint64_t x394 = UINT64_MAX;
	int32_t x395 = 25362;
	uint16_t x396 = 5U;
	volatile uint64_t t13 = 1717842936LLU;

	t13 = (((x393-x394)%x395)>>x396);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x453 = -10297LL;
	int8_t x455 = 2;
	int8_t x456 = 0;
	int64_t t14 = 7471LL;

	t14 = (((x453-x454)%x455)>>x456);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x506 = 10082LLU;
	int32_t x507 = INT32_MIN;
	uint8_t x508 = 4U;
	volatile uint64_t t15 = 90895398232LLU;

	t15 = (((x505-x506)%x507)>>x508);

	if (t15 != 134215049LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int8_t x523 = -1;
	uint16_t x524 = 7U;
	volatile int32_t t16 = -5;

	t16 = (((x521-x522)%x523)>>x524);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x541 = INT32_MAX;
	static volatile int32_t x543 = 1;
	uint32_t x544 = 16U;

	t17 = (((x541-x542)%x543)>>x544);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x579 = -3;
	uint16_t x580 = 13U;
	volatile uint32_t t18 = 15355U;

	t18 = (((x577-x578)%x579)>>x580);

	if (t18 != 44U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x581 = -11;
	static uint32_t x582 = 7U;
	int8_t x583 = -1;
	volatile int8_t x584 = 0;
	uint32_t t19 = 483264570U;

	t19 = (((x581-x582)%x583)>>x584);

	if (t19 != 4294967278U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x610 = 7617452LLU;
	uint32_t x612 = 2U;
	static uint64_t t20 = 0LLU;

	t20 = (((x609-x610)%x611)>>x612);

	if (t20 != 103201606188LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x654 = -57;
	static int64_t x655 = INT64_MIN;
	volatile uint32_t x656 = 0U;
	static int64_t t21 = 212750305LL;

	t21 = (((x653-x654)%x655)>>x656);

	if (t21 != 450167LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x709 = -1;
	int8_t x710 = -7;
	uint16_t x711 = UINT16_MAX;
	volatile int32_t t22 = -13892120;

	t22 = (((x709-x710)%x711)>>x712);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x757 = INT8_MIN;
	uint64_t x758 = 8LLU;
	static int16_t x760 = 11;
	volatile uint64_t t23 = 18852815803153LLU;

	t23 = (((x757-x758)%x759)>>x760);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x769 = 13;
	int16_t x770 = -1;
	volatile uint8_t x772 = 2U;
	volatile int32_t t24 = 0;

	t24 = (((x769-x770)%x771)>>x772);

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x805 = 43;
	int8_t x806 = INT8_MIN;
	int16_t x808 = 0;
	uint32_t t25 = 59420U;

	t25 = (((x805-x806)%x807)>>x808);

	if (t25 != 171U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x841 = UINT16_MAX;
	static uint64_t x842 = UINT64_MAX;
	int64_t x843 = -1LL;
	uint16_t x844 = 5U;

	t26 = (((x841-x842)%x843)>>x844);

	if (t26 != 2048LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x909 = INT32_MAX;
	int32_t x910 = 5874736;
	int8_t x911 = INT8_MIN;
	uint8_t x912 = 16U;
	volatile int32_t t27 = -100847652;

	t27 = (((x909-x910)%x911)>>x912);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1053 = 20U;
	int16_t x1054 = INT16_MIN;
	volatile int8_t x1055 = INT8_MIN;
	uint16_t x1056 = 6U;

	t28 = (((x1053-x1054)%x1055)>>x1056);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1110 = INT8_MIN;
	int16_t x1111 = 15966;
	int8_t x1112 = 1;
	int32_t t29 = -65656;

	t29 = (((x1109-x1110)%x1111)>>x1112);

	if (t29 != 67) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1169 = 1537445989LLU;
	uint16_t x1170 = 14601U;
	int16_t x1171 = 7016;
	uint8_t x1172 = 2U;
	volatile uint64_t t30 = 4462428645478023LLU;

	t30 = (((x1169-x1170)%x1171)>>x1172);

	if (t30 != 319LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1193 = -1645;
	static int16_t x1194 = -38;
	static int64_t x1195 = -1LL;
	volatile uint16_t x1196 = 0U;
	int64_t t31 = 249770LL;

	t31 = (((x1193-x1194)%x1195)>>x1196);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1201 = INT32_MIN;
	int16_t x1202 = -1;
	static volatile int8_t x1203 = -1;
	volatile int32_t t32 = -49846;

	t32 = (((x1201-x1202)%x1203)>>x1204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1265 = INT32_MAX;
	static uint64_t x1266 = 773346461304LLU;
	static int8_t x1268 = 1;

	t33 = (((x1265-x1266)%x1267)>>x1268);

	if (t33 != 9223371651255286979LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1341 = 1394;
	static int16_t x1342 = 3;
	int8_t x1344 = 1;
	int32_t t34 = 35454207;

	t34 = (((x1341-x1342)%x1343)>>x1344);

	if (t34 != 695) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1357 = 0U;
	int32_t x1358 = -1;
	uint8_t x1360 = 0U;
	static int32_t t35 = 13503940;

	t35 = (((x1357-x1358)%x1359)>>x1360);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1365 = -1LL;
	int32_t x1366 = -13023;
	int32_t x1367 = -1;
	int8_t x1368 = 23;
	volatile int64_t t36 = -493759326561LL;

	t36 = (((x1365-x1366)%x1367)>>x1368);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1418 = -4728;
	volatile int32_t x1419 = -145021;
	volatile int8_t x1420 = 10;
	volatile int32_t t37 = -3829802;

	t37 = (((x1417-x1418)%x1419)>>x1420);

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1425 = UINT8_MAX;
	int64_t x1427 = INT64_MIN;
	static uint8_t x1428 = 45U;
	static int64_t t38 = 3102LL;

	t38 = (((x1425-x1426)%x1427)>>x1428);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1517 = 109998674U;
	int8_t x1518 = -3;
	int8_t x1520 = 1;
	static uint32_t t39 = 5U;

	t39 = (((x1517-x1518)%x1519)>>x1520);

	if (t39 != 602U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1525 = 5398LL;
	int16_t x1527 = INT16_MAX;
	volatile uint64_t x1528 = 7LLU;
	uint64_t t40 = 1698609LLU;

	t40 = (((x1525-x1526)%x1527)>>x1528);

	if (t40 != 62LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x1561 = 58717914U;
	static int16_t x1562 = 0;
	int8_t x1563 = -1;
	static uint8_t x1564 = 1U;

	t41 = (((x1561-x1562)%x1563)>>x1564);

	if (t41 != 29358957U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1593 = -1;
	int32_t x1594 = INT32_MIN;
	int8_t x1595 = -1;
	static volatile int8_t x1596 = 3;
	int32_t t42 = 1;

	t42 = (((x1593-x1594)%x1595)>>x1596);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1597 = -1;
	static int64_t x1599 = INT64_MIN;
	int32_t x1600 = 0;
	int64_t t43 = 28877178152270824LL;

	t43 = (((x1597-x1598)%x1599)>>x1600);

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1649 = INT16_MIN;
	uint32_t x1651 = 54U;
	uint8_t x1652 = 1U;
	volatile uint32_t t44 = 514538U;

	t44 = (((x1649-x1650)%x1651)>>x1652);

	if (t44 != 19U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1677 = UINT64_MAX;
	volatile uint32_t x1678 = 1219U;
	volatile uint64_t t45 = 21LLU;

	t45 = (((x1677-x1678)%x1679)>>x1680);

	if (t45 != 9223372036854775198LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1725 = UINT64_MAX;
	int16_t x1726 = -1;
	int16_t x1727 = INT16_MIN;
	static int8_t x1728 = 0;
	static volatile uint64_t t46 = 522LLU;

	t46 = (((x1725-x1726)%x1727)>>x1728);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1745 = -1LL;
	int8_t x1746 = -13;
	int32_t x1748 = 3;
	int64_t t47 = -84192480717LL;

	t47 = (((x1745-x1746)%x1747)>>x1748);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1761 = INT16_MIN;
	uint32_t x1762 = UINT32_MAX;
	uint64_t x1764 = 59LLU;
	static volatile uint64_t t48 = 81033812LLU;

	t48 = (((x1761-x1762)%x1763)>>x1764);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1841 = 31809LLU;
	uint64_t t49 = 15008043LLU;

	t49 = (((x1841-x1842)%x1843)>>x1844);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1889 = INT16_MIN;
	static volatile uint64_t x1890 = 146799646970422LLU;
	int32_t x1891 = 253611648;
	static uint16_t x1892 = 2U;
	uint64_t t50 = 48445993LLU;

	t50 = (((x1889-x1890)%x1891)>>x1892);

	if (t50 != 33339794LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1922 = UINT16_MAX;
	int8_t x1923 = -1;
	int64_t x1924 = 6LL;

	t51 = (((x1921-x1922)%x1923)>>x1924);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1973 = 458117660;
	int8_t x1975 = INT8_MIN;
	volatile uint32_t x1976 = 1U;
	volatile uint64_t t52 = 5387590711LLU;

	t52 = (((x1973-x1974)%x1975)>>x1976);

	if (t52 != 229058830LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2015 = 8863LLU;
	int8_t x2016 = 0;
	uint64_t t53 = 55024610694162496LLU;

	t53 = (((x2013-x2014)%x2015)>>x2016);

	if (t53 != 1807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2045 = 10140U;
	volatile uint32_t x2047 = 60U;
	uint64_t x2048 = 1LLU;
	uint32_t t54 = 11240U;

	t54 = (((x2045-x2046)%x2047)>>x2048);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x2097 = 28257U;
	volatile uint16_t x2098 = 14606U;
	volatile int64_t x2099 = INT64_MIN;
	int8_t x2100 = 18;
	int64_t t55 = -25049022050LL;

	t55 = (((x2097-x2098)%x2099)>>x2100);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2145 = -1LL;
	uint32_t x2148 = 7U;

	t56 = (((x2145-x2146)%x2147)>>x2148);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2161 = INT8_MAX;
	int16_t x2162 = INT16_MIN;
	int32_t x2163 = 8692;
	static int8_t x2164 = 5;
	int32_t t57 = -3517449;

	t57 = (((x2161-x2162)%x2163)>>x2164);

	if (t57 != 213) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2226 = -18130154;
	static uint16_t x2227 = UINT16_MAX;
	int32_t t58 = -139000427;

	t58 = (((x2225-x2226)%x2227)>>x2228);

	if (t58 != 9726) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2245 = UINT8_MAX;
	int64_t x2246 = INT64_MAX;
	int8_t x2247 = -1;
	static uint16_t x2248 = 2U;
	volatile int64_t t59 = 1791LL;

	t59 = (((x2245-x2246)%x2247)>>x2248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2257 = 66857288LLU;
	static int8_t x2259 = -1;
	volatile uint64_t t60 = 79039416LLU;

	t60 = (((x2257-x2258)%x2259)>>x2260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2321 = -1LL;
	uint8_t x2322 = 9U;
	int64_t x2323 = -1LL;
	uint8_t x2324 = 41U;
	volatile int64_t t61 = 32147203LL;

	t61 = (((x2321-x2322)%x2323)>>x2324);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2337 = -1LL;
	uint64_t x2338 = UINT64_MAX;
	volatile int8_t x2340 = 49;
	uint64_t t62 = 8524838795000LLU;

	t62 = (((x2337-x2338)%x2339)>>x2340);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2417 = 0U;
	int64_t x2418 = -4087055086LL;
	int16_t x2419 = -32;

	t63 = (((x2417-x2418)%x2419)>>x2420);

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2428 = 2U;
	uint64_t t64 = 958209928227502LLU;

	t64 = (((x2425-x2426)%x2427)>>x2428);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2493 = 76409U;
	int8_t x2494 = INT8_MAX;
	volatile int64_t x2495 = INT64_MIN;
	int64_t t65 = -98LL;

	t65 = (((x2493-x2494)%x2495)>>x2496);

	if (t65 != 1191LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2505 = -1LL;
	static int8_t x2506 = INT8_MIN;
	uint32_t x2507 = UINT32_MAX;
	volatile uint32_t x2508 = 21U;
	int64_t t66 = 266328376LL;

	t66 = (((x2505-x2506)%x2507)>>x2508);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2509 = INT64_MAX;
	uint64_t x2510 = UINT64_MAX;
	int32_t x2511 = INT32_MAX;
	int8_t x2512 = 21;
	volatile uint64_t t67 = 2302359830590LLU;

	t67 = (((x2509-x2510)%x2511)>>x2512);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2525 = INT64_MAX;
	int8_t x2526 = INT8_MAX;
	volatile uint8_t x2527 = 1U;
	uint32_t x2528 = 0U;
	static int64_t t68 = -6776055624896032LL;

	t68 = (((x2525-x2526)%x2527)>>x2528);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2529 = UINT64_MAX;
	uint64_t x2530 = UINT64_MAX;
	int32_t x2531 = INT32_MAX;
	int64_t x2532 = 12LL;
	static uint64_t t69 = 509621364751LLU;

	t69 = (((x2529-x2530)%x2531)>>x2532);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2545 = -1;
	static uint8_t x2546 = 86U;
	uint8_t x2548 = 11U;
	volatile int32_t t70 = -1578907;

	t70 = (((x2545-x2546)%x2547)>>x2548);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2557 = UINT32_MAX;
	uint64_t x2558 = UINT64_MAX;
	int64_t x2559 = -72493648LL;
	uint16_t x2560 = 1U;
	volatile uint64_t t71 = 7484336LLU;

	t71 = (((x2557-x2558)%x2559)>>x2560);

	if (t71 != 2147483648LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2613 = 2260641LL;
	static volatile int16_t x2614 = INT16_MIN;
	uint64_t x2615 = UINT64_MAX;
	uint16_t x2616 = 43U;
	uint64_t t72 = 170LLU;

	t72 = (((x2613-x2614)%x2615)>>x2616);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2646 = 839098U;
	static volatile uint16_t x2647 = UINT16_MAX;
	uint32_t t73 = 159295126U;

	t73 = (((x2645-x2646)%x2647)>>x2648);

	if (t73 != 45625U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x2697 = 1U;
	volatile int8_t x2698 = INT8_MIN;

	t74 = (((x2697-x2698)%x2699)>>x2700);

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2881 = 158882U;
	volatile uint64_t x2882 = 957672898341793LLU;
	static uint32_t x2883 = 3U;
	static int8_t x2884 = 15;

	t75 = (((x2881-x2882)%x2883)>>x2884);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2901 = -1733;
	int16_t x2902 = INT16_MAX;
	static uint32_t x2904 = 6U;
	static int32_t t76 = -1;

	t76 = (((x2901-x2902)%x2903)>>x2904);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3061 = INT16_MIN;
	uint16_t x3063 = 3U;
	static uint16_t x3064 = 0U;
	int32_t t77 = -6;

	t77 = (((x3061-x3062)%x3063)>>x3064);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3105 = -10;
	static volatile uint64_t x3107 = 941111LLU;
	int8_t x3108 = 3;
	volatile uint64_t t78 = 184895647362217LLU;

	t78 = (((x3105-x3106)%x3107)>>x3108);

	if (t78 != 49541LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3109 = UINT32_MAX;
	uint8_t x3110 = 3U;
	uint32_t x3111 = 1641172U;
	static int8_t x3112 = 4;
	volatile uint32_t t79 = 2665188U;

	t79 = (((x3109-x3110)%x3111)>>x3112);

	if (t79 != 1260U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3125 = UINT32_MAX;
	int32_t x3126 = INT32_MAX;
	int16_t x3127 = -1;
	static int8_t x3128 = 4;
	volatile uint32_t t80 = 90U;

	t80 = (((x3125-x3126)%x3127)>>x3128);

	if (t80 != 134217728U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3165 = UINT8_MAX;
	int32_t x3166 = -22457311;
	int32_t x3167 = 6695964;
	int8_t x3168 = 0;
	static int32_t t81 = -16408071;

	t81 = (((x3165-x3166)%x3167)>>x3168);

	if (t81 != 2369674) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3169 = INT16_MAX;
	volatile uint16_t x3170 = 28797U;
	int16_t x3171 = INT16_MIN;
	uint16_t x3172 = 31U;
	int32_t t82 = -19832;

	t82 = (((x3169-x3170)%x3171)>>x3172);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3177 = 951280U;
	static uint8_t x3178 = 1U;
	static uint32_t t83 = 556444U;

	t83 = (((x3177-x3178)%x3179)>>x3180);

	if (t83 != 59454U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3237 = -1;
	int32_t x3238 = INT32_MIN;
	uint64_t x3239 = 204106756LLU;
	uint8_t x3240 = 3U;
	volatile uint64_t t84 = 833LLU;

	t84 = (((x3237-x3238)%x3239)>>x3240);

	if (t84 != 13302010LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x3245 = INT32_MAX;
	uint64_t x3246 = UINT64_MAX;
	int16_t x3247 = 1519;
	uint64_t x3248 = 3LLU;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x3245-x3246)%x3247)>>x3248);

	if (t85 != 54LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3321 = 21253781259LLU;
	static int64_t x3322 = 3496435085LL;
	int64_t x3323 = INT64_MIN;
	volatile uint16_t x3324 = 34U;

	t86 = (((x3321-x3322)%x3323)>>x3324);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3345 = -6;
	static int8_t x3346 = INT8_MIN;
	uint8_t x3348 = 5U;

	t87 = (((x3345-x3346)%x3347)>>x3348);

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x3361 = UINT16_MAX;
	static int16_t x3363 = INT16_MIN;

	t88 = (((x3361-x3362)%x3363)>>x3364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3385 = UINT32_MAX;
	int8_t x3386 = INT8_MAX;
	int8_t x3387 = 1;
	int16_t x3388 = 4;
	volatile uint32_t t89 = 63348U;

	t89 = (((x3385-x3386)%x3387)>>x3388);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x3413 = 155700U;
	static int64_t x3414 = -287LL;
	uint8_t x3416 = 7U;
	int64_t t90 = -66933830909LL;

	t90 = (((x3413-x3414)%x3415)>>x3416);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3533 = INT8_MAX;
	uint16_t x3534 = 7U;
	int16_t x3535 = INT16_MIN;
	int16_t x3536 = 3;
	int32_t t91 = -47;

	t91 = (((x3533-x3534)%x3535)>>x3536);

	if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x3569 = -1;
	int8_t x3570 = INT8_MIN;
	static int16_t x3571 = -51;
	volatile uint32_t x3572 = 5U;
	int32_t t92 = -659691368;

	t92 = (((x3569-x3570)%x3571)>>x3572);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3593 = INT16_MAX;
	uint64_t x3594 = 779458731781LLU;
	volatile uint16_t x3595 = 98U;
	int16_t x3596 = 1;
	volatile uint64_t t93 = 42857LLU;

	t93 = (((x3593-x3594)%x3595)>>x3596);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x3621 = UINT8_MAX;
	volatile int32_t x3623 = INT32_MAX;
	volatile uint8_t x3624 = 0U;
	volatile int32_t t94 = -33;

	t94 = (((x3621-x3622)%x3623)>>x3624);

	if (t94 != 241) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3631 = 1;
	volatile uint8_t x3632 = 7U;
	uint64_t t95 = 942251264680249LLU;

	t95 = (((x3629-x3630)%x3631)>>x3632);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3685 = UINT16_MAX;
	int8_t x3687 = INT8_MIN;
	volatile uint16_t x3688 = 0U;

	t96 = (((x3685-x3686)%x3687)>>x3688);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3705 = 20;
	int16_t x3706 = INT16_MIN;
	uint8_t x3707 = 13U;
	uint16_t x3708 = 24U;
	volatile int32_t t97 = 358055905;

	t97 = (((x3705-x3706)%x3707)>>x3708);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x3717 = -1LL;
	static int64_t x3718 = -547059499LL;
	uint32_t x3719 = 15015U;
	int64_t t98 = -125251LL;

	t98 = (((x3717-x3718)%x3719)>>x3720);

	if (t98 != 1494LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3897 = UINT16_MAX;
	uint32_t x3898 = UINT32_MAX;
	int8_t x3899 = INT8_MIN;
	volatile uint64_t x3900 = 3LLU;
	volatile uint32_t t99 = 132659011U;

	t99 = (((x3897-x3898)%x3899)>>x3900);

	if (t99 != 8192U) { NG(); } else { ; }
	
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


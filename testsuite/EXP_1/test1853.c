#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x76 = 1;
static uint16_t x93 = UINT16_MAX;
volatile int32_t t2 = -53925;
int8_t x135 = 1;
uint64_t x299 = UINT64_MAX;
int32_t t7 = 4;
static uint32_t x348 = 48U;
volatile int8_t x421 = INT8_MIN;
uint8_t x447 = UINT8_MAX;
uint8_t x448 = 0U;
uint16_t x483 = 1887U;
volatile int64_t x519 = INT64_MIN;
volatile int32_t x540 = 1;
int16_t x543 = INT16_MAX;
int64_t t17 = 1LL;
static int16_t x659 = -3;
int64_t x765 = -1LL;
volatile uint8_t x768 = 2U;
static volatile int8_t x777 = 3;
int8_t x778 = INT8_MIN;
uint8_t x779 = 2U;
volatile int32_t t21 = -23;
int8_t x871 = -1;
uint64_t x872 = 2LLU;
uint64_t t22 = 180866LLU;
static uint8_t x894 = 1U;
int64_t x895 = 131021061LL;
static int64_t x907 = INT64_MIN;
uint64_t t26 = 2014120150LLU;
volatile uint8_t x1022 = 1U;
uint8_t x1023 = 1U;
uint16_t x1033 = 0U;
uint32_t t29 = 1438331148U;
volatile uint16_t x1152 = 0U;
int64_t t31 = -26233LL;
int32_t x1528 = 0;
int16_t x1627 = 39;
uint32_t x1628 = 2U;
static uint64_t t36 = 27151952485LLU;
static volatile int8_t x1760 = 3;
volatile int64_t t38 = -343752LL;
uint16_t x1860 = 0U;
int32_t x1877 = INT32_MAX;
int64_t x1878 = INT64_MIN;
int8_t x1977 = -7;
uint8_t x1980 = 0U;
volatile int64_t x2001 = -549001349944210LL;
int64_t t44 = 6460LL;
uint32_t x2070 = 108301U;
int8_t x2072 = 24;
uint32_t t45 = 8U;
volatile uint32_t x2109 = UINT32_MAX;
volatile uint32_t t46 = 29U;
int64_t x2125 = -1LL;
uint32_t x2198 = 2362U;
volatile uint8_t x2200 = 29U;
static int32_t x2265 = -1;
int32_t t50 = -7521467;
int32_t x2283 = 9;
int16_t x2491 = INT16_MIN;
int32_t x2494 = -1;
uint32_t x2495 = 28914119U;
int32_t x2558 = INT32_MAX;
uint64_t t56 = 1976LLU;
int64_t x2656 = 10LL;
int8_t x2704 = 0;
volatile int64_t t59 = -4LL;
int64_t x2735 = 11567507LL;
int8_t x2839 = INT8_MIN;
int32_t x2875 = INT32_MAX;
volatile int16_t x2890 = INT16_MAX;
int64_t t64 = 1544LL;
uint32_t x2932 = 0U;
volatile uint64_t t65 = 647060225LLU;
volatile uint64_t x3017 = 200717238300LLU;
static volatile uint64_t t66 = 5760757520947501LLU;
volatile int8_t x3101 = INT8_MIN;
uint16_t x3104 = 19U;
uint32_t t69 = 221U;
uint16_t x3122 = UINT16_MAX;
uint8_t x3123 = UINT8_MAX;
volatile int32_t t70 = 761869256;
uint64_t x3146 = 30591LLU;
uint16_t x3349 = UINT16_MAX;
int16_t x3350 = INT16_MIN;
uint16_t x3353 = 0U;
static int16_t x3354 = INT16_MAX;
uint64_t t77 = 980788161LLU;
static uint16_t x3430 = 204U;
int32_t t80 = -123;
int8_t x3545 = 13;
static uint8_t x3565 = 21U;
static int32_t x3567 = INT32_MAX;
volatile uint64_t x3728 = 1LLU;
volatile uint64_t t85 = 2189442430883426LLU;
uint8_t x3788 = 0U;
int64_t t87 = 25412663886LL;
uint32_t x3949 = UINT32_MAX;
int32_t x3950 = INT32_MAX;
int32_t x3951 = INT32_MAX;
volatile uint32_t t88 = 1826U;
uint64_t x4045 = 8885105725982710LLU;
uint8_t x4048 = 15U;
uint64_t t89 = 2444564630LLU;
int16_t x4058 = INT16_MAX;
volatile int64_t x4086 = -1LL;
uint32_t x4088 = 7U;
volatile int16_t x4093 = INT16_MIN;
static int32_t x4095 = INT32_MIN;
volatile uint16_t x4145 = UINT16_MAX;
uint8_t x4146 = UINT8_MAX;
static volatile int8_t x4155 = INT8_MAX;
int16_t x4170 = INT16_MAX;
volatile uint8_t x4268 = 35U;
int32_t x4303 = INT32_MIN;
static int16_t x4404 = 54;


void f0(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	uint32_t x31 = 646825U;
	volatile uint32_t x32 = 20U;
	uint32_t t0 = 38630148U;

	t0 = (((x29&x30)^x31)>>x32);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x73 = 41601048158LL;
	int16_t x74 = -1;
	uint32_t x75 = 5U;
	int64_t t1 = 61109525744LL;

	t1 = (((x73&x74)^x75)>>x76);

	if (t1 != 20800524077LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x94 = INT16_MIN;
	volatile uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 7U;

	t2 = (((x93&x94)^x95)>>x96);

	if (t2 != 257) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x129 = -8874;
	static int32_t x130 = -3917188;
	volatile int16_t x131 = INT16_MIN;
	uint8_t x132 = 31U;
	int32_t t3 = 1;

	t3 = (((x129&x130)^x131)>>x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x133 = 61U;
	int32_t x134 = -1;
	volatile uint8_t x136 = 19U;
	volatile int32_t t4 = 49;

	t4 = (((x133&x134)^x135)>>x136);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = -46;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 1;
	static volatile int32_t t5 = -77846698;

	t5 = (((x137&x138)^x139)>>x140);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x297 = 318;
	volatile int32_t x298 = INT32_MAX;
	uint32_t x300 = 27U;
	uint64_t t6 = 8190782LLU;

	t6 = (((x297&x298)^x299)>>x300);

	if (t6 != 137438953471LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x341 = -1;
	static int16_t x342 = -1;
	volatile int32_t x343 = INT32_MIN;
	volatile uint8_t x344 = 6U;

	t7 = (((x341&x342)^x343)>>x344);

	if (t7 != 33554431) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x345 = 431998;
	volatile int64_t x346 = INT64_MIN;
	static int16_t x347 = INT16_MAX;
	volatile int64_t t8 = -797589343585982LL;

	t8 = (((x345&x346)^x347)>>x348);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x373 = 3U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	static uint16_t x376 = 22U;
	static int32_t t9 = -603;

	t9 = (((x373&x374)^x375)>>x376);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x422 = 465U;
	uint16_t x423 = UINT16_MAX;
	uint16_t x424 = 19U;
	volatile int32_t t10 = -77;

	t10 = (((x421&x422)^x423)>>x424);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x445 = 16492809U;
	int64_t x446 = 21933856LL;
	volatile int64_t t11 = -1785790677LL;

	t11 = (((x445&x446)^x447)>>x448);

	if (t11 != 4893183LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x469 = INT64_MAX;
	int16_t x470 = INT16_MIN;
	int64_t x471 = 9484160LL;
	uint8_t x472 = 4U;
	static int64_t t12 = -4132434LL;

	t12 = (((x469&x470)^x471)>>x472);

	if (t12 != 576460752302830456LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x481 = -1;
	static int32_t x482 = 11420;
	int8_t x484 = 25;
	int32_t t13 = 1902932;

	t13 = (((x481&x482)^x483)>>x484);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x517 = 0LLU;
	int32_t x518 = INT32_MIN;
	volatile uint8_t x520 = 28U;
	static uint64_t t14 = 6524LLU;

	t14 = (((x517&x518)^x519)>>x520);

	if (t14 != 34359738368LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x537 = -1;
	static int16_t x538 = INT16_MIN;
	volatile int64_t x539 = -58535354542096673LL;
	int64_t t15 = 22842110849258591LL;

	t15 = (((x537&x538)^x539)>>x540);

	if (t15 != 29267677271064431LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x541 = UINT16_MAX;
	int16_t x542 = INT16_MIN;
	int8_t x544 = 10;
	int32_t t16 = -25;

	t16 = (((x541&x542)^x543)>>x544);

	if (t16 != 63) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x565 = 45;
	int32_t x566 = 14;
	int64_t x567 = 1909341LL;
	uint16_t x568 = 1U;

	t17 = (((x565&x566)^x567)>>x568);

	if (t17 != 954664LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x649 = 64396079U;
	int8_t x650 = INT8_MIN;
	uint16_t x651 = 477U;
	int16_t x652 = 2;
	uint32_t t18 = 13U;

	t18 = (((x649&x650)^x651)>>x652);

	if (t18 != 16098999U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x657 = 561689LLU;
	static int8_t x658 = -28;
	uint16_t x660 = 7U;
	static uint64_t t19 = 4407952LLU;

	t19 = (((x657&x658)^x659)>>x660);

	if (t19 != 144115188075851483LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x766 = -1LL;
	int16_t x767 = -1;
	volatile int64_t t20 = 8366646417137449LL;

	t20 = (((x765&x766)^x767)>>x768);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x780 = 14;

	t21 = (((x777&x778)^x779)>>x780);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x869 = -3553936232886071LL;
	uint64_t x870 = UINT64_MAX;

	t22 = (((x869&x870)^x871)>>x872);

	if (t22 != 888484058221517LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x893 = 3U;
	static uint32_t x896 = 42U;
	int64_t t23 = -15186262662504LL;

	t23 = (((x893&x894)^x895)>>x896);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x897 = UINT16_MAX;
	static int16_t x898 = -248;
	volatile uint32_t x899 = 2102763018U;
	int8_t x900 = 27;
	uint32_t t24 = 583618124U;

	t24 = (((x897&x898)^x899)>>x900);

	if (t24 != 15U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x905 = INT8_MIN;
	volatile int8_t x906 = INT8_MIN;
	volatile uint16_t x908 = 2U;
	static volatile int64_t t25 = -2472LL;

	t25 = (((x905&x906)^x907)>>x908);

	if (t25 != 2305843009213693920LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x953 = 209992960U;
	uint64_t x954 = 234627185LLU;
	uint8_t x955 = 28U;
	static int8_t x956 = 0;

	t26 = (((x953&x954)^x955)>>x956);

	if (t26 != 209985564LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x997 = 10935U;
	uint16_t x998 = 5U;
	int32_t x999 = -1;
	uint32_t x1000 = 0U;
	uint32_t t27 = 21460773U;

	t27 = (((x997&x998)^x999)>>x1000);

	if (t27 != 4294967290U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1021 = -36;
	volatile int8_t x1024 = 2;
	volatile int32_t t28 = -640597;

	t28 = (((x1021&x1022)^x1023)>>x1024);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1034 = INT8_MAX;
	uint32_t x1035 = 4009U;
	int16_t x1036 = 12;

	t29 = (((x1033&x1034)^x1035)>>x1036);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1149 = -1;
	int16_t x1150 = INT16_MIN;
	static int16_t x1151 = INT16_MIN;
	volatile int32_t t30 = 1401;

	t30 = (((x1149&x1150)^x1151)>>x1152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1197 = INT64_MIN;
	uint16_t x1198 = 3440U;
	static volatile uint16_t x1199 = 769U;
	uint8_t x1200 = 4U;

	t31 = (((x1197&x1198)^x1199)>>x1200);

	if (t31 != 48LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1457 = UINT8_MAX;
	int32_t x1458 = 532;
	static int8_t x1459 = INT8_MAX;
	uint8_t x1460 = 27U;
	int32_t t32 = 2;

	t32 = (((x1457&x1458)^x1459)>>x1460);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1505 = UINT32_MAX;
	int8_t x1506 = -3;
	int16_t x1507 = INT16_MAX;
	uint8_t x1508 = 4U;
	static volatile uint32_t t33 = 509720U;

	t33 = (((x1505&x1506)^x1507)>>x1508);

	if (t33 != 268433408U) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1525 = 119;
	int32_t x1526 = INT32_MAX;
	uint8_t x1527 = 0U;
	static volatile int32_t t34 = -52881;

	t34 = (((x1525&x1526)^x1527)>>x1528);

	if (t34 != 119) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1625 = UINT8_MAX;
	int8_t x1626 = INT8_MIN;
	int32_t t35 = -125892;

	t35 = (((x1625&x1626)^x1627)>>x1628);

	if (t35 != 41) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1657 = UINT16_MAX;
	volatile uint64_t x1658 = UINT64_MAX;
	uint8_t x1659 = 47U;
	uint16_t x1660 = 17U;

	t36 = (((x1657&x1658)^x1659)>>x1660);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1709 = INT32_MIN;
	uint64_t x1710 = UINT64_MAX;
	uint8_t x1711 = 1U;
	int16_t x1712 = 2;
	volatile uint64_t t37 = 536558593379LLU;

	t37 = (((x1709&x1710)^x1711)>>x1712);

	if (t37 != 4611686017890516992LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x1757 = -1;
	int32_t x1758 = -1;
	static int64_t x1759 = INT64_MIN;

	t38 = (((x1757&x1758)^x1759)>>x1760);

	if (t38 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1857 = UINT32_MAX;
	uint16_t x1858 = UINT16_MAX;
	int32_t x1859 = -1;
	volatile uint32_t t39 = 328447U;

	t39 = (((x1857&x1858)^x1859)>>x1860);

	if (t39 != 4294901760U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1879 = 20465069LLU;
	volatile int8_t x1880 = 0;
	uint64_t t40 = 24LLU;

	t40 = (((x1877&x1878)^x1879)>>x1880);

	if (t40 != 20465069LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1897 = INT16_MAX;
	int16_t x1898 = 1353;
	uint16_t x1899 = 13453U;
	static volatile int8_t x1900 = 1;
	static volatile int32_t t41 = 0;

	t41 = (((x1897&x1898)^x1899)>>x1900);

	if (t41 != 6370) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1978 = UINT32_MAX;
	volatile int16_t x1979 = 7637;
	volatile uint32_t t42 = 16U;

	t42 = (((x1977&x1978)^x1979)>>x1980);

	if (t42 != 4294959660U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2002 = 505068564LLU;
	static volatile int16_t x2003 = INT16_MIN;
	uint8_t x2004 = 20U;
	static uint64_t t43 = 82LLU;

	t43 = (((x2001&x2002)^x2003)>>x2004);

	if (t43 != 17592186044287LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2013 = -1LL;
	int16_t x2014 = INT16_MAX;
	volatile int16_t x2015 = INT16_MAX;
	static uint8_t x2016 = 43U;

	t44 = (((x2013&x2014)^x2015)>>x2016);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2069 = INT16_MIN;
	int16_t x2071 = 38;

	t45 = (((x2069&x2070)^x2071)>>x2072);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2110 = INT8_MAX;
	uint16_t x2111 = UINT16_MAX;
	uint16_t x2112 = 3U;

	t46 = (((x2109&x2110)^x2111)>>x2112);

	if (t46 != 8176U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2126 = 101442U;
	uint16_t x2127 = 96U;
	uint8_t x2128 = 0U;
	int64_t t47 = 33329294796418890LL;

	t47 = (((x2125&x2126)^x2127)>>x2128);

	if (t47 != 101410LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2177 = UINT32_MAX;
	uint32_t x2178 = 1091U;
	volatile uint8_t x2179 = 23U;
	uint16_t x2180 = 5U;
	volatile uint32_t t48 = 3U;

	t48 = (((x2177&x2178)^x2179)>>x2180);

	if (t48 != 34U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2197 = INT32_MAX;
	static int32_t x2199 = INT32_MIN;
	uint32_t t49 = 93560U;

	t49 = (((x2197&x2198)^x2199)>>x2200);

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2266 = 2U;
	static uint16_t x2267 = 9503U;
	static volatile int8_t x2268 = 4;

	t50 = (((x2265&x2266)^x2267)>>x2268);

	if (t50 != 593) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2281 = 1835U;
	uint32_t x2282 = UINT32_MAX;
	int64_t x2284 = 2LL;
	uint32_t t51 = 130863U;

	t51 = (((x2281&x2282)^x2283)>>x2284);

	if (t51 != 456U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2489 = INT64_MIN;
	int32_t x2490 = INT32_MIN;
	uint8_t x2492 = 5U;
	static int64_t t52 = 3476LL;

	t52 = (((x2489&x2490)^x2491)>>x2492);

	if (t52 != 288230376151710720LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2493 = 7U;
	uint8_t x2496 = 0U;
	uint32_t t53 = 5606581U;

	t53 = (((x2493&x2494)^x2495)>>x2496);

	if (t53 != 28914112U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2557 = INT8_MIN;
	int64_t x2559 = 44618058LL;
	int8_t x2560 = 8;
	int64_t t54 = -187774896640505LL;

	t54 = (((x2557&x2558)^x2559)>>x2560);

	if (t54 != 8214318LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2613 = INT64_MIN;
	int64_t x2614 = INT64_MIN;
	int32_t x2615 = -1;
	int8_t x2616 = 0;
	volatile int64_t t55 = INT64_MAX;

	t55 = (((x2613&x2614)^x2615)>>x2616);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2633 = 529U;
	static uint64_t x2634 = UINT64_MAX;
	int8_t x2635 = -1;
	uint8_t x2636 = 43U;

	t56 = (((x2633&x2634)^x2635)>>x2636);

	if (t56 != 2097151LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2653 = 112U;
	static volatile int32_t x2654 = -2877175;
	static uint32_t x2655 = 25166656U;
	volatile uint32_t t57 = 30U;

	t57 = (((x2653&x2654)^x2655)>>x2656);

	if (t57 != 24576U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2693 = 36;
	int8_t x2694 = 0;
	uint8_t x2695 = UINT8_MAX;
	volatile uint32_t x2696 = 13U;
	static int32_t t58 = 10;

	t58 = (((x2693&x2694)^x2695)>>x2696);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2701 = 391803877;
	static int64_t x2702 = INT64_MIN;
	int8_t x2703 = INT8_MAX;

	t59 = (((x2701&x2702)^x2703)>>x2704);

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2733 = 334324U;
	int8_t x2734 = 41;
	uint32_t x2736 = 60U;
	volatile int64_t t60 = -1085500289793LL;

	t60 = (((x2733&x2734)^x2735)>>x2736);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2837 = -7186330;
	uint32_t x2838 = UINT32_MAX;
	uint16_t x2840 = 0U;
	volatile uint32_t t61 = 93U;

	t61 = (((x2837&x2838)^x2839)>>x2840);

	if (t61 != 7186406U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2841 = -1;
	int64_t x2842 = -1LL;
	static volatile uint64_t x2843 = 914443895033946218LLU;
	int8_t x2844 = 0;
	uint64_t t62 = 223493LLU;

	t62 = (((x2841&x2842)^x2843)>>x2844);

	if (t62 != 17532300178675605397LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2873 = 12U;
	int32_t x2874 = -1;
	volatile int16_t x2876 = 2;
	static int32_t t63 = 775;

	t63 = (((x2873&x2874)^x2875)>>x2876);

	if (t63 != 536870908) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2889 = INT8_MAX;
	int64_t x2891 = INT64_MAX;
	static int8_t x2892 = 16;

	t64 = (((x2889&x2890)^x2891)>>x2892);

	if (t64 != 140737488355327LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2929 = 14049LLU;
	uint8_t x2930 = UINT8_MAX;
	static int8_t x2931 = INT8_MIN;

	t65 = (((x2929&x2930)^x2931)>>x2932);

	if (t65 != 18446744073709551457LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3018 = 0U;
	volatile uint8_t x3019 = 0U;
	static uint16_t x3020 = 6U;

	t66 = (((x3017&x3018)^x3019)>>x3020);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3045 = UINT8_MAX;
	uint16_t x3046 = UINT16_MAX;
	volatile uint8_t x3047 = UINT8_MAX;
	static uint8_t x3048 = 2U;
	static volatile int32_t t67 = 1;

	t67 = (((x3045&x3046)^x3047)>>x3048);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3085 = -1;
	uint32_t x3086 = 28453559U;
	int8_t x3087 = 1;
	volatile uint16_t x3088 = 2U;
	volatile uint32_t t68 = 5567U;

	t68 = (((x3085&x3086)^x3087)>>x3088);

	if (t68 != 7113389U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3102 = 4U;
	uint32_t x3103 = 428U;

	t69 = (((x3101&x3102)^x3103)>>x3104);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3121 = INT16_MIN;
	uint16_t x3124 = 7U;

	t70 = (((x3121&x3122)^x3123)>>x3124);

	if (t70 != 257) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3145 = -90LL;
	uint64_t x3147 = 194712875324LLU;
	int8_t x3148 = 4;
	volatile uint64_t t71 = 8443502LLU;

	t71 = (((x3145&x3146)^x3147)>>x3148);

	if (t71 != 12169555041LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3149 = INT64_MIN;
	uint32_t x3150 = 428U;
	volatile uint16_t x3151 = 3U;
	uint8_t x3152 = 0U;
	int64_t t72 = -946312233LL;

	t72 = (((x3149&x3150)^x3151)>>x3152);

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x3205 = 187;
	volatile int16_t x3206 = -1;
	uint64_t x3207 = 2912LLU;
	static volatile int64_t x3208 = 0LL;
	uint64_t t73 = 7791903LLU;

	t73 = (((x3205&x3206)^x3207)>>x3208);

	if (t73 != 3035LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3269 = INT16_MAX;
	int16_t x3270 = -1;
	uint8_t x3271 = 26U;
	uint8_t x3272 = 5U;
	int32_t t74 = 123088;

	t74 = (((x3269&x3270)^x3271)>>x3272);

	if (t74 != 1023) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3351 = UINT64_MAX;
	volatile int16_t x3352 = 2;
	uint64_t t75 = 108125193520510LLU;

	t75 = (((x3349&x3350)^x3351)>>x3352);

	if (t75 != 4611686018427379711LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x3355 = UINT16_MAX;
	int16_t x3356 = 1;
	volatile int32_t t76 = 139340;

	t76 = (((x3353&x3354)^x3355)>>x3356);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3369 = 11858268547958LLU;
	volatile int8_t x3370 = INT8_MIN;
	uint8_t x3371 = UINT8_MAX;
	uint16_t x3372 = 2U;

	t77 = (((x3369&x3370)^x3371)>>x3372);

	if (t77 != 2964567137023LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x3429 = 920854345321214LLU;
	volatile int64_t x3431 = -853LL;
	volatile uint8_t x3432 = 6U;
	volatile uint64_t t78 = 235537175LLU;

	t78 = (((x3429&x3430)^x3431)>>x3432);

	if (t78 != 288230376151711729LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3433 = INT16_MAX;
	static int16_t x3434 = INT16_MIN;
	int64_t x3435 = INT64_MAX;
	uint16_t x3436 = 38U;
	volatile int64_t t79 = -111204355274165LL;

	t79 = (((x3433&x3434)^x3435)>>x3436);

	if (t79 != 33554431LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3513 = INT32_MIN;
	volatile int8_t x3514 = INT8_MIN;
	int16_t x3515 = INT16_MIN;
	uint8_t x3516 = 2U;

	t80 = (((x3513&x3514)^x3515)>>x3516);

	if (t80 != 536862720) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x3546 = INT64_MAX;
	int64_t x3547 = 33345567641LL;
	uint8_t x3548 = 26U;
	volatile int64_t t81 = 9755320649908LL;

	t81 = (((x3545&x3546)^x3547)>>x3548);

	if (t81 != 496LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3566 = UINT64_MAX;
	static int16_t x3568 = 0;
	static uint64_t t82 = 18522045567799LLU;

	t82 = (((x3565&x3566)^x3567)>>x3568);

	if (t82 != 2147483626LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3629 = -13486;
	int8_t x3630 = INT8_MIN;
	static uint64_t x3631 = 97903104123LLU;
	uint16_t x3632 = 1U;
	uint64_t t83 = 200LLU;

	t83 = (((x3629&x3630)^x3631)>>x3632);

	if (t83 != 9223371987903221181LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3641 = INT16_MAX;
	static int8_t x3642 = INT8_MIN;
	int64_t x3643 = 33LL;
	uint8_t x3644 = 50U;
	volatile int64_t t84 = 1LL;

	t84 = (((x3641&x3642)^x3643)>>x3644);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x3725 = 3LLU;
	int8_t x3726 = INT8_MIN;
	static uint32_t x3727 = 235964U;

	t85 = (((x3725&x3726)^x3727)>>x3728);

	if (t85 != 117982LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3785 = INT32_MAX;
	uint16_t x3786 = 276U;
	uint8_t x3787 = UINT8_MAX;
	int32_t t86 = 11;

	t86 = (((x3785&x3786)^x3787)>>x3788);

	if (t86 != 491) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3841 = -99440150402556LL;
	volatile int64_t x3842 = INT64_MAX;
	uint8_t x3843 = UINT8_MAX;
	static uint8_t x3844 = 0U;

	t87 = (((x3841&x3842)^x3843)>>x3844);

	if (t87 != 9223272596704373499LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3952 = 0U;

	t88 = (((x3949&x3950)^x3951)>>x3952);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4046 = 4;
	uint16_t x4047 = 55U;

	t89 = (((x4045&x4046)^x4047)>>x4048);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x4057 = 55LLU;
	volatile uint8_t x4059 = UINT8_MAX;
	volatile uint32_t x4060 = 28U;
	uint64_t t90 = 123217337238LLU;

	t90 = (((x4057&x4058)^x4059)>>x4060);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4085 = -1;
	volatile int64_t x4087 = -192563507514LL;
	static volatile int64_t t91 = 0LL;

	t91 = (((x4085&x4086)^x4087)>>x4088);

	if (t91 != 1504402402LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x4094 = -1;
	uint32_t x4096 = 2U;
	int32_t t92 = 55;

	t92 = (((x4093&x4094)^x4095)>>x4096);

	if (t92 != 536862720) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4147 = 2U;
	int8_t x4148 = 26;
	int32_t t93 = 30820705;

	t93 = (((x4145&x4146)^x4147)>>x4148);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4153 = INT64_MAX;
	volatile int8_t x4154 = 1;
	int8_t x4156 = 19;
	static int64_t t94 = -2251567641670LL;

	t94 = (((x4153&x4154)^x4155)>>x4156);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4169 = INT16_MIN;
	int8_t x4171 = 0;
	int16_t x4172 = 0;
	int32_t t95 = -6586;

	t95 = (((x4169&x4170)^x4171)>>x4172);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x4265 = 3U;
	static uint64_t x4266 = UINT64_MAX;
	static uint32_t x4267 = 29526405U;
	volatile uint64_t t96 = 159LLU;

	t96 = (((x4265&x4266)^x4267)>>x4268);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4301 = INT32_MIN;
	int32_t x4302 = -2352548;
	int8_t x4304 = 3;
	volatile int32_t t97 = 890;

	t97 = (((x4301&x4302)^x4303)>>x4304);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x4305 = INT8_MIN;
	volatile uint16_t x4306 = 6203U;
	int8_t x4307 = 4;
	uint16_t x4308 = 4U;
	int32_t t98 = -2034711;

	t98 = (((x4305&x4306)^x4307)>>x4308);

	if (t98 != 384) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x4401 = INT16_MAX;
	volatile uint64_t x4402 = 819485824LLU;
	int16_t x4403 = -24;
	volatile uint64_t t99 = 5391942968LLU;

	t99 = (((x4401&x4402)^x4403)>>x4404);

	if (t99 != 1023LLU) { NG(); } else { ; }
	
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


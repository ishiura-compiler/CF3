#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x17 = INT16_MIN;
static uint16_t x38 = 86U;
uint64_t x39 = 6042425466659777LLU;
volatile uint64_t t3 = 3812240747296LLU;
static volatile uint16_t x195 = 267U;
uint32_t t4 = 172818473U;
int32_t x208 = 1;
volatile int8_t x323 = 10;
uint64_t x375 = 838431342LLU;
static int8_t x430 = -12;
volatile uint64_t t9 = 5688216LLU;
int32_t x461 = INT32_MIN;
volatile int32_t x575 = 30277309;
int64_t x625 = -1LL;
uint32_t x626 = UINT32_MAX;
uint8_t x705 = 4U;
uint8_t x708 = 19U;
int64_t x726 = INT64_MAX;
uint32_t x734 = 140884U;
uint64_t t17 = 286056369557LLU;
int8_t x817 = 2;
static int64_t x907 = -2608402LL;
volatile uint32_t x913 = 10U;
int8_t x916 = 5;
int8_t x1008 = 0;
uint8_t x1153 = UINT8_MAX;
volatile uint64_t x1175 = 2823596LLU;
volatile uint64_t t25 = 2129087759LLU;
uint16_t x1206 = 79U;
uint16_t x1207 = 3U;
int64_t x1277 = 1485718989LL;
int16_t x1278 = INT16_MAX;
static uint8_t x1280 = 2U;
int16_t x1294 = 1;
int32_t x1339 = -1;
static uint64_t t30 = 70916609569918556LLU;
int64_t x1413 = INT64_MAX;
int64_t x1437 = -1LL;
static volatile int8_t x1440 = 60;
int32_t t34 = -18686829;
int16_t x1560 = 3;
int8_t x1564 = 10;
static uint8_t x1607 = 20U;
int32_t t39 = -105812;
volatile int8_t x1697 = -42;
int32_t x1698 = INT32_MAX;
volatile uint8_t x1700 = 6U;
static int64_t x1862 = -1LL;
uint16_t x1864 = 12U;
static volatile int8_t x1866 = INT8_MAX;
int32_t t45 = 6505450;
int32_t x1886 = -1;
uint32_t x1887 = 1015571435U;
static uint8_t x1919 = 36U;
volatile int8_t x1935 = 1;
volatile uint64_t x1972 = 51LLU;
int32_t x2003 = -926877;
int64_t x2051 = -13120837731226LL;
volatile int64_t t52 = -2LL;
static volatile uint16_t x2076 = 2U;
int32_t x2173 = -1;
int16_t x2176 = 1;
volatile uint32_t t57 = 1684561511U;
static volatile uint64_t t58 = 412066LLU;
volatile int64_t t59 = 567LL;
volatile int64_t t60 = -129LL;
uint16_t x2309 = UINT16_MAX;
int16_t x2319 = INT16_MIN;
int32_t t63 = 200327222;
uint64_t x2441 = UINT64_MAX;
int8_t x2451 = INT8_MAX;
volatile int32_t t65 = -7710894;
static uint32_t x2575 = 1777U;
int16_t x2694 = -1;
int16_t x2702 = 1772;
int16_t x2823 = INT16_MIN;
int64_t t73 = 35532097356437LL;
int8_t x2906 = 1;
uint8_t x2908 = 3U;
volatile uint64_t t76 = 22305072403LLU;
int8_t x3050 = 1;
volatile int16_t x3074 = 5;
int64_t x3076 = 0LL;
static int32_t x3149 = INT32_MAX;
uint64_t x3150 = 86520679195LLU;
uint16_t x3214 = 12U;
volatile uint64_t x3216 = 0LLU;
int16_t x3245 = -6;
volatile uint64_t t85 = 2504261380967233008LLU;
int32_t x3261 = INT32_MAX;
uint16_t x3356 = 1U;
int64_t x3475 = INT64_MAX;
int8_t x3524 = 16;
uint32_t x3708 = 0U;
int64_t x3713 = -892649498002825149LL;
uint8_t x3778 = 20U;
static uint64_t x3779 = UINT64_MAX;


void f0(void) {
	volatile uint32_t x18 = 3U;
	volatile int16_t x19 = -1;
	uint8_t x20 = 1U;
	static volatile uint32_t t0 = 1U;

	t0 = ((x17/(x18-x19))>>x20);

	if (t0 != 536866816U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = 14885LL;
	int8_t x40 = 10;
	uint64_t t1 = 36700LLU;

	t1 = ((x37/(x38-x39))>>x40);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x54 = 313182U;
	int8_t x55 = INT8_MAX;
	uint16_t x56 = 16U;
	uint32_t t2 = 43U;

	t2 = ((x53/(x54-x55))>>x56);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x73 = 30U;
	uint64_t x74 = UINT64_MAX;
	volatile uint16_t x75 = 21U;
	int8_t x76 = 10;

	t3 = ((x73/(x74-x75))>>x76);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x193 = 0U;
	static uint32_t x194 = 57U;
	uint8_t x196 = 5U;

	t4 = ((x193/(x194-x195))>>x196);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x205 = -433441;
	volatile int64_t x206 = INT64_MIN;
	int16_t x207 = -4;
	static int64_t t5 = -13482870500LL;

	t5 = ((x205/(x206-x207))>>x208);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x289 = 337LLU;
	int16_t x290 = 14;
	static volatile int8_t x291 = 57;
	static uint8_t x292 = 1U;
	volatile uint64_t t6 = 2695715LLU;

	t6 = ((x289/(x290-x291))>>x292);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	volatile int16_t x324 = 0;
	volatile int64_t t7 = -21724141655LL;

	t7 = ((x321/(x322-x323))>>x324);

	if (t7 != 281389103571138LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x373 = -1;
	uint64_t x374 = 120952642310LLU;
	uint8_t x376 = 7U;
	volatile uint64_t t8 = 3087138LLU;

	t8 = ((x373/(x374-x375))>>x376);

	if (t8 != 1199817LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x429 = -198007290;
	static uint64_t x431 = UINT64_MAX;
	int16_t x432 = 1;

	t9 = ((x429/(x430-x431))>>x432);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x445 = 9411155U;
	volatile uint32_t x446 = 1754239U;
	static uint64_t x447 = 3268LLU;
	int16_t x448 = 26;
	volatile uint64_t t10 = 372423839010LLU;

	t10 = ((x445/(x446-x447))>>x448);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x462 = 96515549685LL;
	int8_t x463 = INT8_MAX;
	volatile uint32_t x464 = 2U;
	int64_t t11 = -30544LL;

	t11 = ((x461/(x462-x463))>>x464);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x517 = INT8_MIN;
	uint16_t x518 = 2110U;
	uint64_t x519 = UINT64_MAX;
	int64_t x520 = 1LL;
	volatile uint64_t t12 = 7910130666645577373LLU;

	t12 = ((x517/(x518-x519))>>x520);

	if (t12 != 4369195659334332LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x573 = INT32_MIN;
	static volatile int32_t x574 = -1;
	static volatile uint32_t x576 = 1U;
	int32_t t13 = 12291;

	t13 = ((x573/(x574-x575))>>x576);

	if (t13 != 35) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x627 = INT32_MIN;
	int32_t x628 = 8;
	int64_t t14 = 516719617524165059LL;

	t14 = ((x625/(x626-x627))>>x628);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x706 = 90032862U;
	int32_t x707 = INT32_MIN;
	volatile uint32_t t15 = 352678U;

	t15 = ((x705/(x706-x707))>>x708);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x725 = INT8_MIN;
	int32_t x727 = INT32_MAX;
	int64_t x728 = 1LL;
	volatile int64_t t16 = -45040918LL;

	t16 = ((x725/(x726-x727))>>x728);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x733 = INT32_MIN;
	volatile uint64_t x735 = UINT64_MAX;
	int8_t x736 = 1;

	t17 = ((x733/(x734-x735))>>x736);

	if (t17 != 65467381451403LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x818 = 1;
	static volatile int64_t x819 = -1LL;
	uint8_t x820 = 5U;
	volatile int64_t t18 = 637LL;

	t18 = ((x817/(x818-x819))>>x820);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x877 = UINT16_MAX;
	static int64_t x878 = 2771362665917464LL;
	int16_t x879 = INT16_MIN;
	static int32_t x880 = 1;
	int64_t t19 = -1287866997LL;

	t19 = ((x877/(x878-x879))>>x880);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x905 = -1;
	static uint32_t x906 = 15U;
	static int8_t x908 = 3;
	volatile int64_t t20 = -47636900LL;

	t20 = ((x905/(x906-x907))>>x908);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x914 = -4073;
	uint32_t x915 = 19888039U;
	volatile uint32_t t21 = 17224U;

	t21 = ((x913/(x914-x915))>>x916);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1005 = 16;
	int8_t x1006 = INT8_MAX;
	volatile uint8_t x1007 = 3U;
	int32_t t22 = -8;

	t22 = ((x1005/(x1006-x1007))>>x1008);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1029 = 401U;
	int32_t x1030 = INT32_MAX;
	uint32_t x1031 = UINT32_MAX;
	static volatile int8_t x1032 = 7;
	volatile uint32_t t23 = 43945264U;

	t23 = ((x1029/(x1030-x1031))>>x1032);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1154 = UINT64_MAX;
	static uint32_t x1155 = 119269986U;
	volatile uint16_t x1156 = 0U;
	volatile uint64_t t24 = 2702258LLU;

	t24 = ((x1153/(x1154-x1155))>>x1156);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1173 = -1;
	static int32_t x1174 = -1;
	uint8_t x1176 = 9U;

	t25 = ((x1173/(x1174-x1175))>>x1176);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1205 = 1455U;
	int8_t x1208 = 0;
	volatile int32_t t26 = 486646064;

	t26 = ((x1205/(x1206-x1207))>>x1208);

	if (t26 != 19) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1279 = 16197750338072LL;
	int64_t t27 = -433056699751062LL;

	t27 = ((x1277/(x1278-x1279))>>x1280);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1293 = 1U;
	uint32_t x1295 = UINT32_MAX;
	int8_t x1296 = 1;
	uint32_t t28 = 123U;

	t28 = ((x1293/(x1294-x1295))>>x1296);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1313 = UINT32_MAX;
	int64_t x1314 = INT64_MIN;
	int8_t x1315 = INT8_MIN;
	uint8_t x1316 = 26U;
	static volatile int64_t t29 = 76LL;

	t29 = ((x1313/(x1314-x1315))>>x1316);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1337 = 71234789963822LLU;
	static uint32_t x1338 = 14469505U;
	int64_t x1340 = 12LL;

	t30 = ((x1337/(x1338-x1339))>>x1340);

	if (t30 != 1201LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1414 = INT16_MAX;
	int16_t x1415 = INT16_MIN;
	volatile int8_t x1416 = 22;
	volatile int64_t t31 = -3630922655483473432LL;

	t31 = ((x1413/(x1414-x1415))>>x1416);

	if (t31 != 33554944LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1417 = -5;
	int8_t x1418 = -1;
	volatile int32_t x1419 = INT32_MIN;
	volatile uint8_t x1420 = 8U;
	volatile int32_t t32 = 52937620;

	t32 = ((x1417/(x1418-x1419))>>x1420);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1438 = INT8_MIN;
	static int16_t x1439 = INT16_MIN;
	int64_t t33 = -90156836531733672LL;

	t33 = ((x1437/(x1438-x1439))>>x1440);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1517 = INT32_MAX;
	static int16_t x1518 = INT16_MAX;
	int8_t x1519 = INT8_MIN;
	uint8_t x1520 = 3U;

	t34 = ((x1517/(x1518-x1519))>>x1520);

	if (t34 != 8160) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1557 = 0;
	int32_t x1558 = INT32_MAX;
	int64_t x1559 = INT64_MAX;
	int64_t t35 = -1LL;

	t35 = ((x1557/(x1558-x1559))>>x1560);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1561 = -2166;
	volatile uint64_t x1562 = 117224157LLU;
	int32_t x1563 = INT32_MIN;
	volatile uint64_t t36 = 506394732162176462LLU;

	t36 = ((x1561/(x1562-x1563))>>x1564);

	if (t36 != 7954402LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1573 = 1LLU;
	int16_t x1574 = -70;
	static int16_t x1575 = -5463;
	int32_t x1576 = 49;
	volatile uint64_t t37 = 60934909LLU;

	t37 = ((x1573/(x1574-x1575))>>x1576);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1605 = -52475871;
	int8_t x1606 = -17;
	uint8_t x1608 = 1U;
	static volatile int32_t t38 = -3762;

	t38 = ((x1605/(x1606-x1607))>>x1608);

	if (t38 != 709133) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1649 = 350U;
	volatile uint8_t x1650 = 56U;
	int8_t x1651 = -1;
	uint8_t x1652 = 7U;

	t39 = ((x1649/(x1650-x1651))>>x1652);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1699 = 2473132131829LLU;
	volatile uint64_t t40 = 1278584LLU;

	t40 = ((x1697/(x1698-x1699))>>x1700);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1761 = UINT8_MAX;
	static uint32_t x1762 = 158U;
	volatile int16_t x1763 = INT16_MIN;
	int16_t x1764 = 0;
	volatile uint32_t t41 = 3U;

	t41 = ((x1761/(x1762-x1763))>>x1764);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1813 = UINT64_MAX;
	static int8_t x1814 = INT8_MIN;
	volatile int8_t x1815 = INT8_MAX;
	uint8_t x1816 = 1U;
	volatile uint64_t t42 = 23421LLU;

	t42 = ((x1813/(x1814-x1815))>>x1816);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1841 = -34;
	static volatile uint16_t x1842 = 1U;
	int32_t x1843 = 1703959;
	uint16_t x1844 = 2U;
	int32_t t43 = -131059400;

	t43 = ((x1841/(x1842-x1843))>>x1844);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1861 = UINT64_MAX;
	volatile int64_t x1863 = INT64_MIN;
	uint64_t t44 = 13575414023179LLU;

	t44 = ((x1861/(x1862-x1863))>>x1864);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1865 = UINT8_MAX;
	int16_t x1867 = INT16_MIN;
	uint8_t x1868 = 3U;

	t45 = ((x1865/(x1866-x1867))>>x1868);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1885 = 4709U;
	uint8_t x1888 = 0U;
	uint32_t t46 = 0U;

	t46 = ((x1885/(x1886-x1887))>>x1888);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x1909 = -20;
	int16_t x1910 = INT16_MAX;
	uint64_t x1911 = 84232947311120LLU;
	uint16_t x1912 = 4U;
	volatile uint64_t t47 = 14150094LLU;

	t47 = ((x1909/(x1910-x1911))>>x1912);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1917 = UINT32_MAX;
	volatile uint8_t x1918 = 20U;
	uint8_t x1920 = 6U;
	volatile uint32_t t48 = 413954U;

	t48 = ((x1917/(x1918-x1919))>>x1920);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1933 = 32U;
	volatile int16_t x1934 = INT16_MAX;
	uint8_t x1936 = 12U;
	int32_t t49 = -210;

	t49 = ((x1933/(x1934-x1935))>>x1936);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1969 = 457U;
	int64_t x1970 = INT64_MIN;
	volatile int32_t x1971 = -1;
	volatile int64_t t50 = 6530879LL;

	t50 = ((x1969/(x1970-x1971))>>x1972);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2001 = -10;
	static volatile int16_t x2002 = INT16_MIN;
	uint64_t x2004 = 1LLU;
	int32_t t51 = -33250391;

	t51 = ((x2001/(x2002-x2003))>>x2004);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2049 = 5281U;
	int8_t x2050 = INT8_MAX;
	volatile int16_t x2052 = 14;

	t52 = ((x2049/(x2050-x2051))>>x2052);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2073 = INT32_MAX;
	uint8_t x2074 = 2U;
	int64_t x2075 = INT64_MAX;
	int64_t t53 = 116062LL;

	t53 = ((x2073/(x2074-x2075))>>x2076);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2081 = INT32_MIN;
	int16_t x2082 = -323;
	static int64_t x2083 = -1LL;
	static uint8_t x2084 = 3U;
	volatile int64_t t54 = -30727LL;

	t54 = ((x2081/(x2082-x2083))>>x2084);

	if (t54 != 833650LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2109 = UINT64_MAX;
	volatile int16_t x2110 = INT16_MAX;
	int16_t x2111 = 11947;
	volatile uint32_t x2112 = 19U;
	volatile uint64_t t55 = 11762LLU;

	t55 = ((x2109/(x2110-x2111))>>x2112);

	if (t55 != 1689931416LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2174 = 537057784028741LLU;
	uint8_t x2175 = 23U;
	uint64_t t56 = 24675996180713LLU;

	t56 = ((x2173/(x2174-x2175))>>x2176);

	if (t56 != 17173LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x2205 = UINT32_MAX;
	int8_t x2206 = INT8_MIN;
	int16_t x2207 = INT16_MIN;
	volatile int8_t x2208 = 0;

	t57 = ((x2205/(x2206-x2207))>>x2208);

	if (t57 != 131586U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2225 = INT16_MIN;
	uint8_t x2226 = UINT8_MAX;
	static volatile uint64_t x2227 = UINT64_MAX;
	uint8_t x2228 = 55U;

	t58 = ((x2225/(x2226-x2227))>>x2228);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2237 = -1;
	int8_t x2238 = -1;
	int64_t x2239 = INT64_MIN;
	static uint8_t x2240 = 1U;

	t59 = ((x2237/(x2238-x2239))>>x2240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x2257 = -340413345044159LL;
	static int32_t x2258 = -8696;
	int8_t x2259 = 0;
	int16_t x2260 = 6;

	t60 = ((x2257/(x2258-x2259))>>x2260);

	if (t60 != 611655763LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2273 = 7960695LL;
	int16_t x2274 = -4771;
	uint32_t x2275 = UINT32_MAX;
	int32_t x2276 = 6;
	int64_t t61 = -13930612LL;

	t61 = ((x2273/(x2274-x2275))>>x2276);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2310 = INT16_MAX;
	static uint32_t x2311 = 162099377U;
	uint64_t x2312 = 1LLU;
	uint32_t t62 = 380650262U;

	t62 = ((x2309/(x2310-x2311))>>x2312);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2317 = -1;
	uint8_t x2318 = UINT8_MAX;
	uint32_t x2320 = 12U;

	t63 = ((x2317/(x2318-x2319))>>x2320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2442 = UINT16_MAX;
	int64_t x2443 = INT64_MAX;
	int8_t x2444 = 10;
	uint64_t t64 = 56612788LLU;

	t64 = ((x2441/(x2442-x2443))>>x2444);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2449 = UINT8_MAX;
	volatile int16_t x2450 = INT16_MIN;
	volatile uint8_t x2452 = 0U;

	t65 = ((x2449/(x2450-x2451))>>x2452);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2573 = 0LLU;
	volatile int16_t x2574 = INT16_MIN;
	static int32_t x2576 = 7;
	volatile uint64_t t66 = 522446778936328597LLU;

	t66 = ((x2573/(x2574-x2575))>>x2576);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2609 = -1LL;
	int16_t x2610 = 8868;
	volatile int16_t x2611 = INT16_MIN;
	uint16_t x2612 = 21U;
	volatile int64_t t67 = 1298852421930619757LL;

	t67 = ((x2609/(x2610-x2611))>>x2612);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2629 = INT8_MIN;
	static uint16_t x2630 = 1301U;
	int64_t x2631 = 58283280LL;
	int8_t x2632 = 3;
	int64_t t68 = -6044550LL;

	t68 = ((x2629/(x2630-x2631))>>x2632);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2693 = 4008815985LLU;
	int16_t x2695 = 6174;
	uint16_t x2696 = 16U;
	uint64_t t69 = 21LLU;

	t69 = ((x2693/(x2694-x2695))>>x2696);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2701 = INT16_MAX;
	int8_t x2703 = INT8_MIN;
	uint16_t x2704 = 0U;
	volatile int32_t t70 = -1870;

	t70 = ((x2701/(x2702-x2703))>>x2704);

	if (t70 != 17) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2805 = INT16_MIN;
	uint32_t x2806 = 13299U;
	volatile int64_t x2807 = -168912267162257206LL;
	static int8_t x2808 = 54;
	volatile int64_t t71 = 333187830786LL;

	t71 = ((x2805/(x2806-x2807))>>x2808);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2821 = -1;
	int8_t x2822 = INT8_MAX;
	int16_t x2824 = 1;
	volatile int32_t t72 = 14703;

	t72 = ((x2821/(x2822-x2823))>>x2824);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2857 = 1U;
	int64_t x2858 = 6583243196931LL;
	int32_t x2859 = 200085;
	uint8_t x2860 = 1U;

	t73 = ((x2857/(x2858-x2859))>>x2860);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2881 = INT8_MIN;
	int64_t x2882 = INT64_MAX;
	int16_t x2883 = INT16_MAX;
	volatile uint16_t x2884 = 19U;
	volatile int64_t t74 = -339LL;

	t74 = ((x2881/(x2882-x2883))>>x2884);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x2897 = INT8_MAX;
	volatile uint64_t x2898 = 166400527398267130LLU;
	int16_t x2899 = INT16_MAX;
	uint8_t x2900 = 51U;
	volatile uint64_t t75 = 129070422877LLU;

	t75 = ((x2897/(x2898-x2899))>>x2900);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2905 = 117LLU;
	int16_t x2907 = INT16_MAX;

	t76 = ((x2905/(x2906-x2907))>>x2908);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3049 = UINT64_MAX;
	int8_t x3051 = INT8_MIN;
	uint8_t x3052 = 1U;
	static volatile uint64_t t77 = 1496255821314402275LLU;

	t77 = ((x3049/(x3050-x3051))>>x3052);

	if (t77 != 71499008037633920LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3073 = -1;
	volatile int8_t x3075 = -3;
	volatile int32_t t78 = 1;

	t78 = ((x3073/(x3074-x3075))>>x3076);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3093 = INT8_MIN;
	uint64_t x3094 = 10526040580758715LLU;
	uint32_t x3095 = UINT32_MAX;
	static int16_t x3096 = 1;
	uint64_t t79 = 2457425571251LLU;

	t79 = ((x3093/(x3094-x3095))>>x3096);

	if (t79 != 876LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x3109 = 1U;
	int64_t x3110 = -653475938770394LL;
	static uint16_t x3111 = 119U;
	int16_t x3112 = 3;
	volatile int64_t t80 = 678154783389172LL;

	t80 = ((x3109/(x3110-x3111))>>x3112);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x3121 = INT64_MIN;
	uint64_t x3122 = UINT64_MAX;
	static uint16_t x3123 = 16019U;
	static uint8_t x3124 = 4U;
	volatile uint64_t t81 = 569866269271254703LLU;

	t81 = ((x3121/(x3122-x3123))>>x3124);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3151 = 10U;
	volatile uint32_t x3152 = 6U;
	uint64_t t82 = 38LLU;

	t82 = ((x3149/(x3150-x3151))>>x3152);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3213 = INT32_MIN;
	int64_t x3215 = 203818129504LL;
	static volatile int64_t t83 = -94372457927142857LL;

	t83 = ((x3213/(x3214-x3215))>>x3216);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x3246 = 3U;
	uint64_t x3247 = 12857948458LLU;
	int8_t x3248 = 5;
	volatile uint64_t t84 = 12LLU;

	t84 = ((x3245/(x3246-x3247))>>x3248);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3253 = 59U;
	int8_t x3254 = INT8_MAX;
	volatile uint64_t x3255 = 654876308LLU;
	static volatile int8_t x3256 = 3;

	t85 = ((x3253/(x3254-x3255))>>x3256);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3262 = 434;
	uint32_t x3263 = UINT32_MAX;
	int8_t x3264 = 0;
	volatile uint32_t t86 = 577613U;

	t86 = ((x3261/(x3262-x3263))>>x3264);

	if (t86 != 4936744U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3317 = -21695849510LL;
	volatile int8_t x3318 = 5;
	int64_t x3319 = INT64_MAX;
	static int16_t x3320 = 57;
	static int64_t t87 = 2866181729650LL;

	t87 = ((x3317/(x3318-x3319))>>x3320);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x3345 = -1;
	static int32_t x3346 = 3;
	static int64_t x3347 = -10LL;
	static volatile uint16_t x3348 = 23U;
	static int64_t t88 = -9572252LL;

	t88 = ((x3345/(x3346-x3347))>>x3348);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x3353 = UINT16_MAX;
	int8_t x3354 = INT8_MIN;
	volatile uint64_t x3355 = UINT64_MAX;
	uint64_t t89 = 1018184640613LLU;

	t89 = ((x3353/(x3354-x3355))>>x3356);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3473 = INT8_MAX;
	int8_t x3474 = -1;
	static uint8_t x3476 = 0U;
	volatile int64_t t90 = 42655937LL;

	t90 = ((x3473/(x3474-x3475))>>x3476);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3521 = -1LL;
	volatile uint32_t x3522 = UINT32_MAX;
	int32_t x3523 = INT32_MIN;
	int64_t t91 = 385269LL;

	t91 = ((x3521/(x3522-x3523))>>x3524);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3533 = -1;
	int16_t x3534 = INT16_MIN;
	static int64_t x3535 = INT64_MIN;
	uint8_t x3536 = 7U;
	volatile int64_t t92 = -57412LL;

	t92 = ((x3533/(x3534-x3535))>>x3536);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3593 = 0LL;
	int32_t x3594 = INT32_MAX;
	volatile uint8_t x3595 = 123U;
	int8_t x3596 = 1;
	int64_t t93 = -5274LL;

	t93 = ((x3593/(x3594-x3595))>>x3596);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3625 = -1;
	uint64_t x3626 = 215198904LLU;
	static int64_t x3627 = 16204950LL;
	volatile uint8_t x3628 = 1U;
	uint64_t t94 = 346509LLU;

	t94 = ((x3625/(x3626-x3627))>>x3628);

	if (t94 != 46350011402LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3697 = -502;
	static uint32_t x3698 = 356427U;
	volatile int32_t x3699 = INT32_MIN;
	volatile uint8_t x3700 = 1U;
	volatile uint32_t t95 = 1U;

	t95 = ((x3697/(x3698-x3699))>>x3700);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3705 = INT16_MIN;
	uint8_t x3706 = 5U;
	static volatile int64_t x3707 = -56122635813045LL;
	static int64_t t96 = -46LL;

	t96 = ((x3705/(x3706-x3707))>>x3708);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3714 = INT16_MIN;
	int32_t x3715 = 1474;
	uint8_t x3716 = 1U;
	int64_t t97 = -29326215111879697LL;

	t97 = ((x3713/(x3714-x3715))>>x3716);

	if (t97 != 13034424069896LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3777 = UINT64_MAX;
	volatile uint16_t x3780 = 17U;
	static volatile uint64_t t98 = 213266691LLU;

	t98 = ((x3777/(x3778-x3779))>>x3780);

	if (t98 != 6701785159777LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3789 = INT64_MIN;
	uint32_t x3790 = UINT32_MAX;
	static uint64_t x3791 = 2147363628197LLU;
	int32_t x3792 = 31;
	static volatile uint64_t t99 = 52684638238815669LLU;

	t99 = ((x3789/(x3790-x3791))>>x3792);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


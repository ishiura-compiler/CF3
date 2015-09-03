#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x41 = 920428522004908LL;
volatile uint64_t t4 = 4508152467458LLU;
static uint8_t x161 = 12U;
volatile uint32_t x163 = 82597U;
uint32_t x164 = 0U;
volatile int32_t t8 = -950775;
volatile int32_t x258 = INT32_MIN;
volatile uint64_t t10 = 1015591637250LLU;
int16_t x270 = INT16_MIN;
int64_t x271 = INT64_MAX;
uint8_t x402 = 1U;
int16_t x769 = -7406;
uint8_t x772 = 1U;
static uint32_t t16 = 484222823U;
uint32_t x786 = 306959U;
int64_t x787 = 31443721414966LL;
volatile int64_t t18 = 4249772369424747171LL;
static int32_t x834 = -91;
volatile uint32_t x835 = 37U;
int16_t x891 = INT16_MAX;
volatile int32_t t21 = 1440;
uint32_t x917 = 3824U;
int32_t t24 = 23135;
static int8_t x1050 = -1;
static uint8_t x1052 = 5U;
int32_t x1073 = 246640;
volatile uint16_t x1094 = 6U;
static uint8_t x1096 = 20U;
volatile uint32_t t27 = 3U;
int64_t x1162 = INT64_MAX;
volatile int32_t t29 = -3;
uint16_t x1294 = UINT16_MAX;
static int8_t x1391 = INT8_MAX;
volatile int16_t x1485 = -1;
uint8_t x1488 = 0U;
static uint16_t x1492 = 29U;
int16_t x1545 = INT16_MAX;
volatile uint64_t x1550 = 543009310446LLU;
uint8_t x1557 = 0U;
static uint32_t x1558 = 3937U;
static volatile int8_t x1560 = 2;
static volatile int32_t x1629 = INT32_MIN;
uint16_t x1645 = UINT16_MAX;
uint64_t x1647 = UINT64_MAX;
int8_t x1674 = -8;
static uint16_t x1676 = 0U;
static volatile uint64_t t45 = 3437705LLU;
static uint8_t x1724 = 21U;
volatile int32_t t47 = -2983740;
static uint64_t x1775 = UINT64_MAX;
int8_t x1776 = 1;
int8_t x1825 = INT8_MIN;
int8_t x1827 = INT8_MAX;
static int32_t t49 = 84075;
uint64_t x1905 = 0LLU;
static uint64_t x1906 = 32055105603LLU;
int8_t x1968 = 0;
volatile int32_t t53 = 3;
int64_t x1981 = -1LL;
uint8_t x1984 = 1U;
int16_t x2001 = 1037;
volatile uint8_t x2002 = 8U;
int8_t x2186 = INT8_MAX;
static uint8_t x2271 = UINT8_MAX;
static int32_t x2345 = -1;
int8_t x2360 = 3;
volatile uint64_t t60 = 1464864434LLU;
uint64_t x2498 = 3004876041898LLU;
uint32_t x2612 = 18U;
int32_t t69 = 211452187;
volatile uint8_t x2944 = 1U;
volatile int32_t t71 = -1;
static int16_t x3071 = INT16_MAX;
static volatile int32_t t72 = -108216;
static volatile uint16_t x3115 = UINT16_MAX;
static volatile int32_t t74 = 25574356;
uint64_t x3254 = UINT64_MAX;
int32_t x3278 = -120;
uint16_t x3280 = 14U;
int32_t t78 = -890088;
uint8_t x3292 = 7U;
uint16_t x3297 = 646U;
volatile int8_t x3300 = 0;
static int16_t x3378 = INT16_MIN;
int64_t x3433 = INT64_MIN;
static uint16_t x3465 = 10624U;
uint32_t x3572 = 25U;
static volatile uint64_t t87 = 281962483931232534LLU;
uint8_t x3624 = 2U;
volatile uint32_t x3626 = 129065356U;
uint32_t x3651 = UINT32_MAX;
volatile uint64_t x3764 = 3LLU;
static uint16_t x3777 = UINT16_MAX;
uint8_t x3779 = 12U;
static uint16_t x3889 = 361U;
int32_t x3929 = INT32_MAX;
static int32_t x4009 = INT32_MIN;
uint64_t x4011 = 14117471465216LLU;
uint64_t t98 = 3044328756779998LLU;
int8_t x4042 = 0;
uint32_t t99 = 7442U;


void f0(void) {
	volatile uint64_t x42 = 1460720458LLU;
	static uint8_t x43 = 1U;
	int16_t x44 = 1;
	int32_t t0 = 52;

	t0 = ((x41<=x42)-(x43>>x44));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x57 = -1;
	int64_t x58 = -2440409764LL;
	uint64_t x59 = UINT64_MAX;
	volatile uint16_t x60 = 0U;
	volatile uint64_t t1 = 983LLU;

	t1 = ((x57<=x58)-(x59>>x60));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	volatile uint64_t x63 = 2135668LLU;
	static uint16_t x64 = 1U;
	uint64_t t2 = 3215180299873403LLU;

	t2 = ((x61<=x62)-(x63>>x64));

	if (t2 != 18446744073708483783LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x93 = 3U;
	int16_t x94 = INT16_MAX;
	int64_t x95 = 3LL;
	uint16_t x96 = 50U;
	int64_t t3 = 48779851718972LL;

	t3 = ((x93<=x94)-(x95>>x96));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x97 = 0;
	static volatile int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 1U;

	t4 = ((x97<=x98)-(x99>>x100));

	if (t4 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -12378521349560551LL;
	int64_t x107 = 307685253582490771LL;
	volatile int8_t x108 = 37;
	volatile int64_t t5 = 187LL;

	t5 = ((x105<=x106)-(x107>>x108));

	if (t5 != -2238704LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x145 = INT64_MAX;
	volatile int16_t x146 = INT16_MAX;
	int8_t x147 = 0;
	uint8_t x148 = 4U;
	int32_t t6 = 287;

	t6 = ((x145<=x146)-(x147>>x148));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x162 = -1;
	uint32_t t7 = 955U;

	t7 = ((x161<=x162)-(x163>>x164));

	if (t7 != 4294884699U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x189 = 8U;
	int32_t x190 = INT32_MIN;
	volatile int8_t x191 = 7;
	int32_t x192 = 1;

	t8 = ((x189<=x190)-(x191>>x192));

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x237 = 3268745U;
	int64_t x238 = -1LL;
	static volatile int64_t x239 = INT64_MAX;
	uint64_t x240 = 21LLU;
	volatile int64_t t9 = -7872862859LL;

	t9 = ((x237<=x238)-(x239>>x240));

	if (t9 != -4398046511103LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x257 = -3;
	static uint64_t x259 = 1118898211221LLU;
	int8_t x260 = 3;

	t10 = ((x257<=x258)-(x259>>x260));

	if (t10 != 18446743933847275214LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x269 = INT16_MAX;
	volatile int32_t x272 = 1;
	int64_t t11 = 2LL;

	t11 = ((x269<=x270)-(x271>>x272));

	if (t11 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x401 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = 63LLU;
	static volatile int64_t t12 = 191752093554496LL;

	t12 = ((x401<=x402)-(x403>>x404));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x425 = UINT8_MAX;
	volatile uint32_t x426 = 121U;
	int32_t x427 = 0;
	uint16_t x428 = 4U;
	volatile int32_t t13 = 1961515;

	t13 = ((x425<=x426)-(x427>>x428));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x573 = 1U;
	volatile int8_t x574 = -1;
	uint16_t x575 = 3U;
	uint8_t x576 = 1U;
	static volatile int32_t t14 = -22;

	t14 = ((x573<=x574)-(x575>>x576));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x649 = 6;
	static int16_t x650 = INT16_MAX;
	uint8_t x651 = UINT8_MAX;
	int64_t x652 = 10LL;
	int32_t t15 = -21;

	t15 = ((x649<=x650)-(x651>>x652));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x770 = UINT32_MAX;
	uint32_t x771 = UINT32_MAX;

	t16 = ((x769<=x770)-(x771>>x772));

	if (t16 != 2147483650U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x781 = 126054754LL;
	int16_t x782 = INT16_MIN;
	volatile uint32_t x783 = UINT32_MAX;
	int16_t x784 = 7;
	static volatile uint32_t t17 = 115714U;

	t17 = ((x781<=x782)-(x783>>x784));

	if (t17 != 4261412865U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x785 = -1LL;
	uint8_t x788 = 3U;

	t18 = ((x785<=x786)-(x787>>x788));

	if (t18 != -3930465176869LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x813 = INT32_MIN;
	volatile int16_t x814 = 3694;
	uint16_t x815 = 16U;
	uint8_t x816 = 31U;
	volatile int32_t t19 = 85333233;

	t19 = ((x813<=x814)-(x815>>x816));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x833 = 21;
	uint8_t x836 = 14U;
	volatile uint32_t t20 = 1U;

	t20 = ((x833<=x834)-(x835>>x836));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x889 = -1;
	uint32_t x890 = 196603170U;
	static uint8_t x892 = 4U;

	t21 = ((x889<=x890)-(x891>>x892));

	if (t21 != -2047) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x905 = INT64_MIN;
	uint64_t x906 = 51073989589462LLU;
	uint32_t x907 = 6539U;
	int8_t x908 = 21;
	uint32_t t22 = 31508026U;

	t22 = ((x905<=x906)-(x907>>x908));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x918 = -1;
	int8_t x919 = INT8_MAX;
	static uint32_t x920 = 1U;
	static int32_t t23 = -28;

	t23 = ((x917<=x918)-(x919>>x920));

	if (t23 != -62) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1021 = 1;
	static int16_t x1022 = INT16_MIN;
	static uint16_t x1023 = UINT16_MAX;
	uint8_t x1024 = 0U;

	t24 = ((x1021<=x1022)-(x1023>>x1024));

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1049 = -1;
	static int16_t x1051 = INT16_MAX;
	int32_t t25 = 1;

	t25 = ((x1049<=x1050)-(x1051>>x1052));

	if (t25 != -1022) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1074 = 9187729570840LLU;
	int16_t x1075 = 7604;
	int8_t x1076 = 1;
	volatile int32_t t26 = -915787955;

	t26 = ((x1073<=x1074)-(x1075>>x1076));

	if (t26 != -3801) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1093 = UINT32_MAX;
	uint32_t x1095 = 1U;

	t27 = ((x1093<=x1094)-(x1095>>x1096));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1101 = UINT8_MAX;
	volatile uint16_t x1102 = 7U;
	static int64_t x1103 = INT64_MAX;
	volatile uint64_t x1104 = 1LLU;
	volatile int64_t t28 = 2956277265633LL;

	t28 = ((x1101<=x1102)-(x1103>>x1104));

	if (t28 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1161 = 383802611044LL;
	volatile int32_t x1163 = 1006445;
	uint8_t x1164 = 0U;

	t29 = ((x1161<=x1162)-(x1163>>x1164));

	if (t29 != -1006444) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1221 = 14980;
	int8_t x1222 = INT8_MAX;
	int8_t x1223 = 1;
	static int8_t x1224 = 1;
	static volatile int32_t t30 = 219;

	t30 = ((x1221<=x1222)-(x1223>>x1224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1257 = INT32_MAX;
	static uint8_t x1258 = UINT8_MAX;
	uint32_t x1259 = UINT32_MAX;
	volatile uint8_t x1260 = 3U;
	volatile uint32_t t31 = 980U;

	t31 = ((x1257<=x1258)-(x1259>>x1260));

	if (t31 != 3758096385U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1293 = -1;
	int64_t x1295 = INT64_MAX;
	int8_t x1296 = 1;
	volatile int64_t t32 = -2914609598LL;

	t32 = ((x1293<=x1294)-(x1295>>x1296));

	if (t32 != -4611686018427387902LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x1389 = 6698U;
	uint16_t x1390 = UINT16_MAX;
	uint16_t x1392 = 16U;
	int32_t t33 = 518028;

	t33 = ((x1389<=x1390)-(x1391>>x1392));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1486 = INT16_MIN;
	static uint64_t x1487 = UINT64_MAX;
	volatile uint64_t t34 = 37LLU;

	t34 = ((x1485<=x1486)-(x1487>>x1488));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1489 = 22;
	static volatile int16_t x1490 = -1;
	int8_t x1491 = 3;
	volatile int32_t t35 = -3;

	t35 = ((x1489<=x1490)-(x1491>>x1492));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1541 = 505U;
	int64_t x1542 = INT64_MIN;
	int64_t x1543 = 59LL;
	uint16_t x1544 = 5U;
	int64_t t36 = 91109LL;

	t36 = ((x1541<=x1542)-(x1543>>x1544));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1546 = 447LL;
	static int64_t x1547 = INT64_MAX;
	static volatile uint8_t x1548 = 1U;
	volatile int64_t t37 = 13LL;

	t37 = ((x1545<=x1546)-(x1547>>x1548));

	if (t37 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1549 = 20528334U;
	volatile uint8_t x1551 = 0U;
	volatile int16_t x1552 = 0;
	static int32_t t38 = -711;

	t38 = ((x1549<=x1550)-(x1551>>x1552));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1559 = UINT32_MAX;
	volatile uint32_t t39 = 48U;

	t39 = ((x1557<=x1558)-(x1559>>x1560));

	if (t39 != 3221225474U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1565 = INT16_MIN;
	static int16_t x1566 = INT16_MIN;
	static uint8_t x1567 = UINT8_MAX;
	uint64_t x1568 = 7LLU;
	static volatile int32_t t40 = 6402;

	t40 = ((x1565<=x1566)-(x1567>>x1568));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1593 = INT64_MIN;
	volatile uint8_t x1594 = 0U;
	static int16_t x1595 = INT16_MAX;
	uint16_t x1596 = 0U;
	volatile int32_t t41 = 1;

	t41 = ((x1593<=x1594)-(x1595>>x1596));

	if (t41 != -32766) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1630 = -1;
	uint32_t x1631 = 1997997962U;
	uint8_t x1632 = 20U;
	volatile uint32_t t42 = 1U;

	t42 = ((x1629<=x1630)-(x1631>>x1632));

	if (t42 != 4294965392U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1646 = INT64_MIN;
	int8_t x1648 = 4;
	volatile uint64_t t43 = 1403013938141LLU;

	t43 = ((x1645<=x1646)-(x1647>>x1648));

	if (t43 != 17293822569102704641LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1661 = INT64_MIN;
	int8_t x1662 = INT8_MAX;
	static volatile int32_t x1663 = INT32_MAX;
	uint8_t x1664 = 30U;
	volatile int32_t t44 = 15052496;

	t44 = ((x1661<=x1662)-(x1663>>x1664));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1673 = 6726U;
	uint64_t x1675 = UINT64_MAX;

	t45 = ((x1673<=x1674)-(x1675>>x1676));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1721 = -1;
	uint64_t x1722 = UINT64_MAX;
	volatile int8_t x1723 = 0;
	int32_t t46 = 30112;

	t46 = ((x1721<=x1722)-(x1723>>x1724));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1725 = INT8_MAX;
	int64_t x1726 = -1LL;
	static uint8_t x1727 = 37U;
	volatile uint32_t x1728 = 14U;

	t47 = ((x1725<=x1726)-(x1727>>x1728));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1773 = -1;
	int32_t x1774 = 227659;
	uint64_t t48 = 24092064LLU;

	t48 = ((x1773<=x1774)-(x1775>>x1776));

	if (t48 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x1826 = 859781;
	int32_t x1828 = 6;

	t49 = ((x1825<=x1826)-(x1827>>x1828));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1877 = INT16_MIN;
	uint64_t x1878 = 11545401035572LLU;
	int64_t x1879 = 26648875264LL;
	int32_t x1880 = 7;
	volatile int64_t t50 = -2166733464865206694LL;

	t50 = ((x1877<=x1878)-(x1879>>x1880));

	if (t50 != -208194338LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1889 = -242;
	uint64_t x1890 = UINT64_MAX;
	uint32_t x1891 = 47996U;
	uint16_t x1892 = 0U;
	volatile uint32_t t51 = 68127258U;

	t51 = ((x1889<=x1890)-(x1891>>x1892));

	if (t51 != 4294919301U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1907 = 30U;
	volatile int32_t x1908 = 1;
	int32_t t52 = 393;

	t52 = ((x1905<=x1906)-(x1907>>x1908));

	if (t52 != -14) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1965 = INT16_MAX;
	uint8_t x1966 = 29U;
	static int32_t x1967 = 9;

	t53 = ((x1965<=x1966)-(x1967>>x1968));

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1977 = INT16_MIN;
	volatile int16_t x1978 = INT16_MIN;
	int8_t x1979 = INT8_MAX;
	uint8_t x1980 = 1U;
	int32_t t54 = 731;

	t54 = ((x1977<=x1978)-(x1979>>x1980));

	if (t54 != -62) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1982 = 0;
	volatile uint64_t x1983 = 6880145LLU;
	uint64_t t55 = 84846LLU;

	t55 = ((x1981<=x1982)-(x1983>>x1984));

	if (t55 != 18446744073706111545LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2003 = 1;
	uint16_t x2004 = 2U;
	volatile int32_t t56 = -68522312;

	t56 = ((x2001<=x2002)-(x2003>>x2004));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x2185 = UINT8_MAX;
	uint16_t x2187 = UINT16_MAX;
	int8_t x2188 = 1;
	int32_t t57 = 377457666;

	t57 = ((x2185<=x2186)-(x2187>>x2188));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2269 = INT32_MAX;
	int16_t x2270 = INT16_MIN;
	int8_t x2272 = 2;
	volatile int32_t t58 = 4962238;

	t58 = ((x2269<=x2270)-(x2271>>x2272));

	if (t58 != -63) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2346 = 112684U;
	volatile uint64_t x2347 = UINT64_MAX;
	int32_t x2348 = 31;
	uint64_t t59 = 8403788121601LLU;

	t59 = ((x2345<=x2346)-(x2347>>x2348));

	if (t59 != 18446744065119617025LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2357 = 954889874945465468LLU;
	int8_t x2358 = -1;
	uint64_t x2359 = 2342407LLU;

	t60 = ((x2357<=x2358)-(x2359>>x2360));

	if (t60 != 18446744073709258817LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x2497 = INT32_MIN;
	uint8_t x2499 = 1U;
	int8_t x2500 = 0;
	volatile int32_t t61 = -2;

	t61 = ((x2497<=x2498)-(x2499>>x2500));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2505 = -1;
	volatile int8_t x2506 = -11;
	uint8_t x2507 = UINT8_MAX;
	static int64_t x2508 = 1LL;
	int32_t t62 = 1;

	t62 = ((x2505<=x2506)-(x2507>>x2508));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2529 = 7802LL;
	volatile uint64_t x2530 = 335229216LLU;
	int64_t x2531 = INT64_MAX;
	uint8_t x2532 = 6U;
	volatile int64_t t63 = -9LL;

	t63 = ((x2529<=x2530)-(x2531>>x2532));

	if (t63 != -144115188075855870LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2569 = INT8_MIN;
	uint8_t x2570 = UINT8_MAX;
	volatile int32_t x2571 = 7658;
	volatile int8_t x2572 = 2;
	volatile int32_t t64 = -159;

	t64 = ((x2569<=x2570)-(x2571>>x2572));

	if (t64 != -1913) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2609 = -183823;
	int8_t x2610 = INT8_MIN;
	volatile uint8_t x2611 = UINT8_MAX;
	static volatile int32_t t65 = 9449832;

	t65 = ((x2609<=x2610)-(x2611>>x2612));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2625 = -1;
	volatile int16_t x2626 = 1;
	static uint8_t x2627 = UINT8_MAX;
	static uint16_t x2628 = 1U;
	int32_t t66 = 205438001;

	t66 = ((x2625<=x2626)-(x2627>>x2628));

	if (t66 != -126) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2657 = -1LL;
	volatile int16_t x2658 = INT16_MIN;
	uint32_t x2659 = 0U;
	volatile uint8_t x2660 = 1U;
	uint32_t t67 = 23799U;

	t67 = ((x2657<=x2658)-(x2659>>x2660));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2845 = INT8_MIN;
	int64_t x2846 = -1LL;
	uint8_t x2847 = 2U;
	int8_t x2848 = 0;
	volatile int32_t t68 = 26270;

	t68 = ((x2845<=x2846)-(x2847>>x2848));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2869 = UINT16_MAX;
	uint16_t x2870 = 15U;
	uint8_t x2871 = 13U;
	uint8_t x2872 = 2U;

	t69 = ((x2869<=x2870)-(x2871>>x2872));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2941 = INT8_MAX;
	int8_t x2942 = INT8_MIN;
	uint8_t x2943 = 37U;
	int32_t t70 = -189105;

	t70 = ((x2941<=x2942)-(x2943>>x2944));

	if (t70 != -18) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x3025 = INT64_MIN;
	int64_t x3026 = -9296317219LL;
	int8_t x3027 = INT8_MAX;
	volatile uint8_t x3028 = 1U;

	t71 = ((x3025<=x3026)-(x3027>>x3028));

	if (t71 != -62) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3069 = 88U;
	int32_t x3070 = 343201057;
	static volatile int64_t x3072 = 0LL;

	t72 = ((x3069<=x3070)-(x3071>>x3072));

	if (t72 != -32766) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3101 = INT16_MAX;
	uint16_t x3102 = 487U;
	int64_t x3103 = INT64_MAX;
	uint8_t x3104 = 41U;
	volatile int64_t t73 = 1LL;

	t73 = ((x3101<=x3102)-(x3103>>x3104));

	if (t73 != -4194303LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3113 = 2250692257573840LLU;
	uint8_t x3114 = 19U;
	uint64_t x3116 = 14LLU;

	t74 = ((x3113<=x3114)-(x3115>>x3116));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3181 = 7604;
	static volatile int32_t x3182 = -1;
	uint64_t x3183 = 4LLU;
	int16_t x3184 = 14;
	uint64_t t75 = 324831101646925LLU;

	t75 = ((x3181<=x3182)-(x3183>>x3184));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x3249 = 926742429;
	int16_t x3250 = INT16_MIN;
	uint8_t x3251 = UINT8_MAX;
	int32_t x3252 = 0;
	volatile int32_t t76 = 175937;

	t76 = ((x3249<=x3250)-(x3251>>x3252));

	if (t76 != -255) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x3253 = -24;
	int16_t x3255 = INT16_MAX;
	uint16_t x3256 = 10U;
	int32_t t77 = -7;

	t77 = ((x3253<=x3254)-(x3255>>x3256));

	if (t77 != -30) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3277 = INT64_MIN;
	int8_t x3279 = INT8_MAX;

	t78 = ((x3277<=x3278)-(x3279>>x3280));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3289 = INT64_MAX;
	int8_t x3290 = -31;
	uint16_t x3291 = 9U;
	volatile int32_t t79 = 1011;

	t79 = ((x3289<=x3290)-(x3291>>x3292));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3298 = INT8_MAX;
	volatile int8_t x3299 = 1;
	volatile int32_t t80 = 909385;

	t80 = ((x3297<=x3298)-(x3299>>x3300));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3377 = -1;
	volatile uint32_t x3379 = 244575580U;
	static uint64_t x3380 = 26LLU;
	volatile uint32_t t81 = 14368U;

	t81 = ((x3377<=x3378)-(x3379>>x3380));

	if (t81 != 4294967293U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3425 = 20U;
	uint64_t x3426 = 27616LLU;
	static volatile uint16_t x3427 = 24949U;
	int16_t x3428 = 3;
	volatile int32_t t82 = -65;

	t82 = ((x3425<=x3426)-(x3427>>x3428));

	if (t82 != -3117) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3434 = INT64_MIN;
	static uint32_t x3435 = 7617U;
	uint32_t x3436 = 21U;
	static volatile uint32_t t83 = 18396196U;

	t83 = ((x3433<=x3434)-(x3435>>x3436));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3466 = INT16_MIN;
	static int32_t x3467 = INT32_MAX;
	uint32_t x3468 = 1U;
	volatile int32_t t84 = 0;

	t84 = ((x3465<=x3466)-(x3467>>x3468));

	if (t84 != -1073741823) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3513 = -1;
	int64_t x3514 = 88908089995LL;
	static uint8_t x3515 = 10U;
	static int16_t x3516 = 25;
	static volatile int32_t t85 = 6884;

	t85 = ((x3513<=x3514)-(x3515>>x3516));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3569 = UINT32_MAX;
	volatile uint8_t x3570 = UINT8_MAX;
	static volatile int8_t x3571 = 4;
	int32_t t86 = -162;

	t86 = ((x3569<=x3570)-(x3571>>x3572));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3601 = -96436LL;
	int8_t x3602 = INT8_MIN;
	static uint64_t x3603 = 8089LLU;
	static int8_t x3604 = 1;

	t87 = ((x3601<=x3602)-(x3603>>x3604));

	if (t87 != 18446744073709547573LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3621 = -31;
	int16_t x3622 = INT16_MIN;
	int16_t x3623 = INT16_MAX;
	volatile int32_t t88 = 3;

	t88 = ((x3621<=x3622)-(x3623>>x3624));

	if (t88 != -8191) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x3625 = -1;
	volatile int32_t x3627 = 445830;
	uint8_t x3628 = 31U;
	volatile int32_t t89 = -1449811;

	t89 = ((x3625<=x3626)-(x3627>>x3628));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3649 = -1;
	static int16_t x3650 = -427;
	int64_t x3652 = 0LL;
	static uint32_t t90 = 16402U;

	t90 = ((x3649<=x3650)-(x3651>>x3652));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3713 = INT16_MAX;
	int16_t x3714 = 0;
	uint64_t x3715 = 9486520LLU;
	uint8_t x3716 = 0U;
	uint64_t t91 = 15957143LLU;

	t91 = ((x3713<=x3714)-(x3715>>x3716));

	if (t91 != 18446744073700065096LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3761 = -1LL;
	int16_t x3762 = 1005;
	uint16_t x3763 = 85U;
	int32_t t92 = -253375;

	t92 = ((x3761<=x3762)-(x3763>>x3764));

	if (t92 != -9) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3769 = UINT8_MAX;
	uint32_t x3770 = 6380133U;
	int16_t x3771 = 15949;
	uint8_t x3772 = 2U;
	int32_t t93 = 117300204;

	t93 = ((x3769<=x3770)-(x3771>>x3772));

	if (t93 != -3986) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x3778 = 517U;
	uint16_t x3780 = 1U;
	static int32_t t94 = -2145457;

	t94 = ((x3777<=x3778)-(x3779>>x3780));

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3890 = -1LL;
	volatile uint32_t x3891 = UINT32_MAX;
	static int8_t x3892 = 1;
	volatile uint32_t t95 = 27408882U;

	t95 = ((x3889<=x3890)-(x3891>>x3892));

	if (t95 != 2147483649U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x3921 = INT16_MIN;
	static int32_t x3922 = INT32_MIN;
	uint32_t x3923 = 221398U;
	volatile uint8_t x3924 = 6U;
	uint32_t t96 = 9U;

	t96 = ((x3921<=x3922)-(x3923>>x3924));

	if (t96 != 4294963837U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3930 = 50029519180460LL;
	static uint64_t x3931 = 75310134030166LLU;
	static uint8_t x3932 = 1U;
	volatile uint64_t t97 = 51LLU;

	t97 = ((x3929<=x3930)-(x3931>>x3932));

	if (t97 != 18446706418642536534LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x4010 = INT16_MIN;
	static uint8_t x4012 = 8U;

	t98 = ((x4009<=x4010)-(x4011>>x4012));

	if (t98 != 18446744018563178706LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x4041 = INT16_MIN;
	volatile uint32_t x4043 = 13U;
	volatile uint8_t x4044 = 10U;

	t99 = ((x4041<=x4042)-(x4043>>x4044));

	if (t99 != 1U) { NG(); } else { ; }
	
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


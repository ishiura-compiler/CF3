#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x94 = 156366720805426852LL;
int8_t x96 = 5;
static int64_t t1 = 1209143LL;
static uint8_t x152 = 0U;
volatile int32_t t3 = -28062296;
uint64_t x301 = 2091LLU;
int8_t x304 = 0;
uint64_t x369 = 12919LLU;
int32_t x370 = INT32_MIN;
volatile int8_t x371 = INT8_MAX;
volatile uint8_t x372 = 2U;
static uint64_t t7 = 337534385624474900LLU;
int64_t x669 = -93160206636868168LL;
static uint64_t x671 = 3LLU;
uint8_t x672 = 6U;
uint8_t x692 = 15U;
static int16_t x725 = -4350;
uint32_t x799 = UINT32_MAX;
int8_t x937 = INT8_MAX;
int8_t x954 = 7;
int32_t t20 = -1;
volatile uint8_t x1149 = UINT8_MAX;
uint32_t x1152 = 17U;
uint64_t x1209 = UINT64_MAX;
uint8_t x1211 = 109U;
volatile uint64_t t26 = 6040072494557605665LLU;
int16_t x1225 = INT16_MIN;
volatile uint32_t t27 = 30622748U;
volatile uint8_t x1252 = 1U;
volatile int32_t t28 = -301;
int16_t x1266 = INT16_MAX;
static uint16_t x1297 = UINT16_MAX;
static uint8_t x1394 = 24U;
volatile int32_t x1405 = INT32_MAX;
static int32_t t38 = 2066;
int8_t x1528 = 0;
uint32_t x1601 = UINT32_MAX;
uint64_t x1603 = 1323012004LLU;
volatile uint8_t x1604 = 13U;
int32_t x1767 = INT32_MAX;
static volatile uint64_t x1775 = UINT64_MAX;
static uint8_t x1776 = 56U;
int8_t x1790 = INT8_MIN;
uint64_t x1794 = 29377150068LLU;
static int32_t x1795 = 931;
static uint8_t x1796 = 1U;
uint64_t t45 = 3345815811910LLU;
static int32_t t46 = -31418;
int32_t x1803 = -1;
static uint64_t t51 = 221137501798897LLU;
static int64_t x1917 = INT64_MAX;
int8_t x1920 = 36;
volatile int64_t t53 = 7LL;
int64_t x1946 = -1LL;
int64_t x1963 = INT64_MIN;
volatile uint64_t x2057 = 341891490233041LLU;
uint16_t x2365 = 3U;
volatile uint64_t t60 = 9496817853792LLU;
uint64_t x2471 = 15679LLU;
uint16_t x2472 = 1U;
uint32_t t65 = 1U;
int32_t t67 = -121928;
int8_t x2625 = 0;
int64_t t69 = 14314772132378LL;
volatile int32_t x2649 = -3466;
int64_t x2694 = -25233949LL;
int64_t t71 = 1225640LL;
static uint16_t x2756 = 10U;
uint8_t x2868 = 9U;
uint64_t x2941 = 1403759821884110LLU;
uint16_t x2942 = 168U;
uint8_t x3044 = 30U;
uint64_t t76 = 18LLU;
uint16_t x3205 = 34U;
int16_t x3208 = 2;
volatile int32_t t78 = 281057;
static uint64_t t79 = 181362913509LLU;
int32_t t81 = -1094;
static uint64_t t84 = 61531473073LLU;
int8_t x3421 = 39;
int64_t t85 = -295201010847LL;
volatile int8_t x3425 = -2;
int8_t x3516 = 1;
int32_t t87 = -176;
int32_t x3551 = -16140;
int8_t x3574 = INT8_MIN;
uint64_t x3618 = 1315159126276659943LLU;
uint8_t x3620 = 2U;
static volatile uint64_t t93 = 6120819966283196LLU;
static volatile uint64_t t94 = 2564576654065120LLU;
volatile uint64_t t96 = 1740272866691269LLU;
volatile int32_t t97 = 3;
uint16_t x3849 = UINT16_MAX;


void f0(void) {
	int8_t x33 = -1;
	uint64_t x34 = 6837723LLU;
	int16_t x35 = INT16_MIN;
	volatile uint8_t x36 = 1U;
	static volatile uint64_t t0 = 63513006690LLU;

	t0 = ((x33&(x34+x35))<<x36);

	if (t0 != 13609910LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x93 = INT32_MIN;
	int64_t x95 = -219632615329736LL;

	t1 = ((x93&(x94+x95))<<x96);

	if (t1 != 4996706815489081344LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x149 = INT32_MIN;
	static uint32_t x150 = 1U;
	static int16_t x151 = INT16_MIN;
	uint32_t t2 = 2U;

	t2 = ((x149&(x150+x151))<<x152);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = -1;
	uint8_t x175 = 1U;
	volatile int8_t x176 = 1;

	t3 = ((x173&(x174+x175))<<x176);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x302 = -1;
	uint16_t x303 = 24020U;
	volatile uint64_t t4 = 237729244125700601LLU;

	t4 = ((x301&(x302+x303))<<x304);

	if (t4 != 2051LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x333 = 813U;
	int32_t x334 = -2772927;
	static int64_t x335 = 2436547605951LL;
	uint8_t x336 = 48U;
	static int64_t t5 = 16230698294LL;

	t5 = ((x333&(x334+x335))<<x336);

	if (t5 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x341 = 34;
	int32_t x342 = -1;
	static volatile int32_t x343 = 181;
	static volatile uint16_t x344 = 16U;
	int32_t t6 = -15;

	t6 = ((x341&(x342+x343))<<x344);

	if (t6 != 2097152) { NG(); } else { ; }
	
}

void f7(void) {


	t7 = ((x369&(x370+x371))<<x372);

	if (t7 != 476LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x457 = UINT64_MAX;
	int32_t x458 = -21722;
	uint64_t x459 = UINT64_MAX;
	volatile int8_t x460 = 0;
	volatile uint64_t t8 = 111LLU;

	t8 = ((x457&(x458+x459))<<x460);

	if (t8 != 18446744073709529893LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x553 = INT64_MAX;
	uint8_t x554 = UINT8_MAX;
	int64_t x555 = 6578345528932LL;
	static uint32_t x556 = 0U;
	volatile int64_t t9 = -764056544044670144LL;

	t9 = ((x553&(x554+x555))<<x556);

	if (t9 != 6578345529187LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x569 = UINT16_MAX;
	int8_t x570 = 19;
	int16_t x571 = INT16_MAX;
	uint16_t x572 = 2U;
	int32_t t10 = -1;

	t10 = ((x569&(x570+x571))<<x572);

	if (t10 != 131144) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x661 = INT64_MAX;
	volatile int16_t x662 = 1;
	volatile uint16_t x663 = 10U;
	static int16_t x664 = 3;
	int64_t t11 = 818122021LL;

	t11 = ((x661&(x662+x663))<<x664);

	if (t11 != 88LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x670 = 165U;
	uint64_t t12 = 438LLU;

	t12 = ((x669&(x670+x671))<<x672);

	if (t12 != 10752LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x689 = INT8_MAX;
	static uint16_t x690 = 0U;
	int16_t x691 = INT16_MIN;
	volatile int32_t t13 = 83;

	t13 = ((x689&(x690+x691))<<x692);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x726 = UINT64_MAX;
	int8_t x727 = 27;
	int16_t x728 = 28;
	volatile uint64_t t14 = 15384636LLU;

	t14 = ((x725&(x726+x727))<<x728);

	if (t14 != 536870912LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x733 = 98709886U;
	int64_t x734 = 177557998829556LL;
	int64_t x735 = -65199960209477236LL;
	int8_t x736 = 1;
	int64_t t15 = -270LL;

	t15 = ((x733&(x734+x735))<<x736);

	if (t15 != 193225216LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x797 = UINT32_MAX;
	volatile int8_t x798 = -3;
	int8_t x800 = 0;
	volatile uint32_t t16 = 5268U;

	t16 = ((x797&(x798+x799))<<x800);

	if (t16 != 4294967292U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x869 = 362340116;
	int16_t x870 = -1;
	int8_t x871 = INT8_MAX;
	static uint8_t x872 = 2U;
	int32_t t17 = 1;

	t17 = ((x869&(x870+x871))<<x872);

	if (t17 != 80) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x893 = 2U;
	uint16_t x894 = 9U;
	int16_t x895 = -480;
	static uint8_t x896 = 30U;
	volatile int32_t t18 = 2128;

	t18 = ((x893&(x894+x895))<<x896);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x938 = 132645U;
	uint32_t x939 = 2U;
	static int8_t x940 = 0;
	static volatile uint32_t t19 = 2606U;

	t19 = ((x937&(x938+x939))<<x940);

	if (t19 != 39U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x953 = INT8_MAX;
	int8_t x955 = -27;
	int8_t x956 = 3;

	t20 = ((x953&(x954+x955))<<x956);

	if (t20 != 864) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1017 = UINT8_MAX;
	uint8_t x1018 = UINT8_MAX;
	int32_t x1019 = INT32_MIN;
	uint8_t x1020 = 5U;
	static volatile int32_t t21 = -26;

	t21 = ((x1017&(x1018+x1019))<<x1020);

	if (t21 != 8160) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1053 = 12956U;
	static int8_t x1054 = 1;
	static int32_t x1055 = -1;
	int16_t x1056 = 4;
	uint32_t t22 = 0U;

	t22 = ((x1053&(x1054+x1055))<<x1056);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1057 = INT64_MIN;
	static int8_t x1058 = INT8_MAX;
	static int16_t x1059 = -1;
	int8_t x1060 = 13;
	int64_t t23 = 222086483580LL;

	t23 = ((x1057&(x1058+x1059))<<x1060);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1097 = INT16_MIN;
	uint64_t x1098 = 1378225081207LLU;
	static int8_t x1099 = INT8_MAX;
	uint8_t x1100 = 4U;
	uint64_t t24 = 191563852161279LLU;

	t24 = ((x1097&(x1098+x1099))<<x1100);

	if (t24 != 22051600990208LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1150 = 12U;
	uint8_t x1151 = 6U;
	int32_t t25 = -5761656;

	t25 = ((x1149&(x1150+x1151))<<x1152);

	if (t25 != 2359296) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1210 = INT16_MIN;
	static uint16_t x1212 = 23U;

	t26 = ((x1209&(x1210+x1211))<<x1212);

	if (t26 != 18446743799746002944LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1226 = UINT32_MAX;
	int32_t x1227 = INT32_MAX;
	int8_t x1228 = 1;

	t27 = ((x1225&(x1226+x1227))<<x1228);

	if (t27 != 4294901760U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1249 = 8;
	uint8_t x1250 = 2U;
	static int16_t x1251 = 4996;

	t28 = ((x1249&(x1250+x1251))<<x1252);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1265 = 287876LLU;
	static volatile uint16_t x1267 = 433U;
	int32_t x1268 = 24;
	volatile uint64_t t29 = 56382539837LLU;

	t29 = ((x1265&(x1266+x1267))<<x1268);

	if (t29 != 2147483648LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1298 = -1;
	int64_t x1299 = 1050LL;
	int8_t x1300 = 0;
	int64_t t30 = 1574LL;

	t30 = ((x1297&(x1298+x1299))<<x1300);

	if (t30 != 1049LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1301 = 3097724U;
	static uint64_t x1302 = 5LLU;
	uint16_t x1303 = 6U;
	static int8_t x1304 = 21;
	uint64_t t31 = 103180LLU;

	t31 = ((x1301&(x1302+x1303))<<x1304);

	if (t31 != 16777216LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1317 = 0;
	int16_t x1318 = 5;
	static int8_t x1319 = 21;
	int8_t x1320 = 0;
	int32_t t32 = -48922;

	t32 = ((x1317&(x1318+x1319))<<x1320);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1349 = 248LLU;
	uint64_t x1350 = 635LLU;
	volatile int16_t x1351 = INT16_MIN;
	int16_t x1352 = 16;
	volatile uint64_t t33 = 15751176075908511LLU;

	t33 = ((x1349&(x1350+x1351))<<x1352);

	if (t33 != 7864320LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1353 = -87788834;
	int16_t x1354 = 10;
	int32_t x1355 = 22922;
	uint16_t x1356 = 11U;
	int32_t t34 = -268357361;

	t34 = ((x1353&(x1354+x1355))<<x1356);

	if (t34 != 42246144) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1361 = INT16_MIN;
	volatile uint8_t x1362 = UINT8_MAX;
	uint8_t x1363 = 59U;
	uint8_t x1364 = 3U;
	int32_t t35 = 8;

	t35 = ((x1361&(x1362+x1363))<<x1364);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1393 = -1LL;
	static uint64_t x1395 = 18158632522LLU;
	volatile uint8_t x1396 = 10U;
	uint64_t t36 = 315828673LLU;

	t36 = ((x1393&(x1394+x1395))<<x1396);

	if (t36 != 18594439727104LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1397 = INT32_MIN;
	uint64_t x1398 = 14541LLU;
	int16_t x1399 = 0;
	uint16_t x1400 = 14U;
	uint64_t t37 = 22406580LLU;

	t37 = ((x1397&(x1398+x1399))<<x1400);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1406 = 4411;
	int8_t x1407 = -39;
	uint16_t x1408 = 5U;

	t38 = ((x1405&(x1406+x1407))<<x1408);

	if (t38 != 139904) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1525 = -1;
	static uint32_t x1526 = 885128547U;
	int64_t x1527 = -42LL;
	int64_t t39 = -1415LL;

	t39 = ((x1525&(x1526+x1527))<<x1528);

	if (t39 != 885128505LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1602 = 18419U;
	volatile uint64_t t40 = 13780338326LLU;

	t40 = ((x1601&(x1602+x1603))<<x1604);

	if (t40 != 10838265225216LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1701 = INT32_MAX;
	int64_t x1702 = 42537827LL;
	int32_t x1703 = INT32_MIN;
	volatile uint8_t x1704 = 1U;
	volatile int64_t t41 = -15345882589846LL;

	t41 = ((x1701&(x1702+x1703))<<x1704);

	if (t41 != 85075654LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1765 = 7U;
	static volatile int16_t x1766 = INT16_MIN;
	int16_t x1768 = 16;
	static volatile uint32_t t42 = 163U;

	t42 = ((x1765&(x1766+x1767))<<x1768);

	if (t42 != 458752U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1773 = UINT64_MAX;
	static uint8_t x1774 = UINT8_MAX;
	static volatile uint64_t t43 = 39754LLU;

	t43 = ((x1773&(x1774+x1775))<<x1776);

	if (t43 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1789 = INT32_MIN;
	uint64_t x1791 = 0LLU;
	uint8_t x1792 = 3U;
	uint64_t t44 = 1LLU;

	t44 = ((x1789&(x1790+x1791))<<x1792);

	if (t44 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1793 = -16024495648LL;

	t45 = ((x1793&(x1794+x1795))<<x1796);

	if (t45 != 36641636352LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1797 = INT32_MAX;
	static volatile int16_t x1798 = 0;
	int16_t x1799 = INT16_MAX;
	volatile uint8_t x1800 = 0U;

	t46 = ((x1797&(x1798+x1799))<<x1800);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1801 = 2866074U;
	int16_t x1802 = -788;
	volatile uint8_t x1804 = 15U;
	volatile uint32_t t47 = 2221327U;

	t47 = ((x1801&(x1802+x1803))<<x1804);

	if (t47 != 3695509504U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1813 = 117193326LLU;
	uint64_t x1814 = UINT64_MAX;
	int32_t x1815 = INT32_MAX;
	int8_t x1816 = 0;
	uint64_t t48 = 4020958432LLU;

	t48 = ((x1813&(x1814+x1815))<<x1816);

	if (t48 != 117193326LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1833 = INT16_MAX;
	int64_t x1834 = 535625618LL;
	static uint16_t x1835 = UINT16_MAX;
	static int32_t x1836 = 1;
	volatile int64_t t49 = -275894714945LL;

	t49 = ((x1833&(x1834+x1835))<<x1836);

	if (t49 != 65314LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1841 = INT32_MAX;
	static volatile int16_t x1842 = -1;
	static uint16_t x1843 = 8031U;
	uint64_t x1844 = 1LLU;
	volatile int32_t t50 = -4947;

	t50 = ((x1841&(x1842+x1843))<<x1844);

	if (t50 != 16060) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1889 = UINT64_MAX;
	int8_t x1890 = -1;
	int64_t x1891 = -53987889LL;
	uint32_t x1892 = 2U;

	t51 = ((x1889&(x1890+x1891))<<x1892);

	if (t51 != 18446744073493600056LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1905 = -1LL;
	int32_t x1906 = INT32_MAX;
	int32_t x1907 = -1;
	volatile uint8_t x1908 = 7U;
	int64_t t52 = 184156108LL;

	t52 = ((x1905&(x1906+x1907))<<x1908);

	if (t52 != 274877906688LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1918 = INT16_MAX;
	volatile uint8_t x1919 = UINT8_MAX;

	t53 = ((x1917&(x1918+x1919))<<x1920);

	if (t53 != 2269254560776192LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1933 = 6520U;
	static uint32_t x1934 = 177538U;
	int16_t x1935 = 3951;
	volatile int8_t x1936 = 0;
	uint32_t t54 = 23169U;

	t54 = ((x1933&(x1934+x1935))<<x1936);

	if (t54 != 112U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1945 = 0;
	static int8_t x1947 = INT8_MIN;
	static int8_t x1948 = 53;
	static volatile int64_t t55 = -56712176616899LL;

	t55 = ((x1945&(x1946+x1947))<<x1948);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1961 = 0U;
	volatile int64_t x1962 = INT64_MAX;
	uint32_t x1964 = 20U;
	int64_t t56 = 214LL;

	t56 = ((x1961&(x1962+x1963))<<x1964);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2058 = INT8_MIN;
	static int8_t x2059 = INT8_MAX;
	int8_t x2060 = 1;
	volatile uint64_t t57 = 2LLU;

	t57 = ((x2057&(x2058+x2059))<<x2060);

	if (t57 != 683782980466082LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2089 = INT32_MAX;
	volatile uint64_t x2090 = 5577273516402LLU;
	int8_t x2091 = INT8_MAX;
	uint16_t x2092 = 2U;
	uint64_t t58 = 360452858914474LLU;

	t58 = ((x2089&(x2090+x2091))<<x2092);

	if (t58 != 1033930692LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x2349 = 14U;
	int8_t x2350 = INT8_MAX;
	int8_t x2351 = 30;
	static uint32_t x2352 = 2U;
	static volatile int32_t t59 = 1;

	t59 = ((x2349&(x2350+x2351))<<x2352);

	if (t59 != 48) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x2366 = -6473;
	static uint64_t x2367 = 6290606291674492897LLU;
	uint32_t x2368 = 3U;

	t60 = ((x2365&(x2366+x2367))<<x2368);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2425 = INT16_MAX;
	uint16_t x2426 = UINT16_MAX;
	volatile int64_t x2427 = -1LL;
	uint16_t x2428 = 14U;
	volatile int64_t t61 = 31582841101628LL;

	t61 = ((x2425&(x2426+x2427))<<x2428);

	if (t61 != 536838144LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2429 = UINT8_MAX;
	int8_t x2430 = 6;
	volatile int64_t x2431 = -1LL;
	uint32_t x2432 = 1U;
	volatile int64_t t62 = -494LL;

	t62 = ((x2429&(x2430+x2431))<<x2432);

	if (t62 != 10LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2465 = 959U;
	int8_t x2466 = 0;
	static int8_t x2467 = INT8_MIN;
	uint8_t x2468 = 2U;
	uint32_t t63 = 6706477U;

	t63 = ((x2465&(x2466+x2467))<<x2468);

	if (t63 != 3584U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2469 = INT8_MIN;
	int64_t x2470 = INT64_MIN;
	volatile uint64_t t64 = 221497597629471LLU;

	t64 = ((x2469&(x2470+x2471))<<x2472);

	if (t64 != 31232LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2513 = 193;
	int32_t x2514 = -1;
	uint32_t x2515 = 189U;
	static int16_t x2516 = 1;

	t65 = ((x2513&(x2514+x2515))<<x2516);

	if (t65 != 256U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2541 = UINT8_MAX;
	int16_t x2542 = INT16_MIN;
	int8_t x2543 = 1;
	uint16_t x2544 = 1U;
	static int32_t t66 = -1899;

	t66 = ((x2541&(x2542+x2543))<<x2544);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2565 = 0U;
	int32_t x2566 = 93454;
	volatile int8_t x2567 = INT8_MIN;
	uint32_t x2568 = 22U;

	t67 = ((x2565&(x2566+x2567))<<x2568);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2621 = 6U;
	uint32_t x2622 = UINT32_MAX;
	volatile uint32_t x2623 = 1770U;
	uint16_t x2624 = 3U;
	static uint32_t t68 = 6425025U;

	t68 = ((x2621&(x2622+x2623))<<x2624);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2626 = 4315838LL;
	int8_t x2627 = -1;
	volatile uint32_t x2628 = 11U;

	t69 = ((x2625&(x2626+x2627))<<x2628);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2650 = -1974;
	int16_t x2651 = INT16_MAX;
	int64_t x2652 = 3LL;
	volatile int32_t t70 = -553353;

	t70 = ((x2649&(x2650+x2651))<<x2652);

	if (t70 != 229888) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2693 = UINT8_MAX;
	static volatile int64_t x2695 = -1LL;
	static uint8_t x2696 = 3U;

	t71 = ((x2693&(x2694+x2695))<<x2696);

	if (t71 != 1808LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2709 = UINT64_MAX;
	static volatile uint32_t x2710 = UINT32_MAX;
	volatile int16_t x2711 = -467;
	static int8_t x2712 = 7;
	uint64_t t72 = 468348155219845LLU;

	t72 = ((x2709&(x2710+x2711))<<x2712);

	if (t72 != 549755753984LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2753 = UINT64_MAX;
	int16_t x2754 = -1;
	volatile int16_t x2755 = INT16_MIN;
	volatile uint64_t t73 = 3839804647781988954LLU;

	t73 = ((x2753&(x2754+x2755))<<x2756);

	if (t73 != 18446744073675996160LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2865 = -1LL;
	int8_t x2866 = INT8_MIN;
	volatile uint64_t x2867 = 164LLU;
	uint64_t t74 = 59667840LLU;

	t74 = ((x2865&(x2866+x2867))<<x2868);

	if (t74 != 18432LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2943 = INT16_MAX;
	volatile int8_t x2944 = 0;
	volatile uint64_t t75 = 95724LLU;

	t75 = ((x2941&(x2942+x2943))<<x2944);

	if (t75 != 32902LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3041 = 2286;
	static int32_t x3042 = INT32_MIN;
	uint64_t x3043 = 119LLU;

	t76 = ((x3041&(x3042+x3043))<<x3044);

	if (t76 != 109521666048LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3045 = -1;
	uint16_t x3046 = UINT16_MAX;
	uint64_t x3047 = 113LLU;
	uint16_t x3048 = 7U;
	static uint64_t t77 = 230296574LLU;

	t77 = ((x3045&(x3046+x3047))<<x3048);

	if (t77 != 8402944LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3206 = UINT16_MAX;
	volatile int8_t x3207 = INT8_MIN;

	t78 = ((x3205&(x3206+x3207))<<x3208);

	if (t78 != 136) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x3229 = 971653163005LLU;
	uint32_t x3230 = 318U;
	static int16_t x3231 = INT16_MIN;
	static uint8_t x3232 = 1U;

	t79 = ((x3229&(x3230+x3231))<<x3232);

	if (t79 != 1981088376LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3297 = INT8_MAX;
	static int8_t x3298 = INT8_MIN;
	static uint16_t x3299 = UINT16_MAX;
	uint8_t x3300 = 1U;
	int32_t t80 = -160936;

	t80 = ((x3297&(x3298+x3299))<<x3300);

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3333 = -3;
	uint16_t x3334 = 360U;
	static int8_t x3335 = INT8_MIN;
	uint64_t x3336 = 3LLU;

	t81 = ((x3333&(x3334+x3335))<<x3336);

	if (t81 != 1856) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3385 = -4241287917317278LL;
	int8_t x3386 = INT8_MAX;
	int32_t x3387 = 1694982;
	volatile int8_t x3388 = 2;
	static int64_t t82 = 137759883100380LL;

	t82 = ((x3385&(x3386+x3387))<<x3388);

	if (t82 != 2180096LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3397 = -1LL;
	int16_t x3398 = INT16_MIN;
	uint32_t x3399 = UINT32_MAX;
	volatile uint8_t x3400 = 1U;
	volatile int64_t t83 = 1927026LL;

	t83 = ((x3397&(x3398+x3399))<<x3400);

	if (t83 != 8589869054LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x3417 = 146LLU;
	int64_t x3418 = INT64_MIN;
	int16_t x3419 = 14688;
	uint32_t x3420 = 19U;

	t84 = ((x3417&(x3418+x3419))<<x3420);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3422 = INT64_MIN;
	static int8_t x3423 = 34;
	static int8_t x3424 = 1;

	t85 = ((x3421&(x3422+x3423))<<x3424);

	if (t85 != 68LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3426 = INT16_MAX;
	int32_t x3427 = 8774;
	int16_t x3428 = 0;
	static volatile int32_t t86 = 1;

	t86 = ((x3425&(x3426+x3427))<<x3428);

	if (t86 != 41540) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x3513 = UINT8_MAX;
	uint8_t x3514 = UINT8_MAX;
	uint8_t x3515 = UINT8_MAX;

	t87 = ((x3513&(x3514+x3515))<<x3516);

	if (t87 != 508) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3529 = 27349775LL;
	uint32_t x3530 = UINT32_MAX;
	int32_t x3531 = -792530;
	volatile uint8_t x3532 = 9U;
	volatile int64_t t88 = -2072170454LL;

	t88 = ((x3529&(x3530+x3531))<<x3532);

	if (t88 != 14000593408LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3549 = -1;
	uint16_t x3550 = UINT16_MAX;
	int8_t x3552 = 14;
	int32_t t89 = -29;

	t89 = ((x3549&(x3550+x3551))<<x3552);

	if (t89 != 809287680) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3553 = 598065533U;
	int8_t x3554 = INT8_MAX;
	uint16_t x3555 = 1U;
	int8_t x3556 = 26;
	uint32_t t90 = 2U;

	t90 = ((x3553&(x3554+x3555))<<x3556);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3573 = 3LLU;
	int16_t x3575 = INT16_MIN;
	volatile int8_t x3576 = 28;
	volatile uint64_t t91 = 319585882164629LLU;

	t91 = ((x3573&(x3574+x3575))<<x3576);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3585 = 111;
	static uint8_t x3586 = 1U;
	int8_t x3587 = -12;
	int16_t x3588 = 0;
	int32_t t92 = 899702394;

	t92 = ((x3585&(x3586+x3587))<<x3588);

	if (t92 != 101) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3617 = UINT8_MAX;
	uint8_t x3619 = UINT8_MAX;

	t93 = ((x3617&(x3618+x3619))<<x3620);

	if (t93 != 920LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3625 = 36U;
	static uint64_t x3626 = 237408556137770LLU;
	uint8_t x3627 = 30U;
	volatile uint8_t x3628 = 2U;

	t94 = ((x3625&(x3626+x3627))<<x3628);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x3673 = UINT16_MAX;
	uint8_t x3674 = 3U;
	volatile uint64_t x3675 = 248602478976LLU;
	int32_t x3676 = 1;
	volatile uint64_t t95 = 78994461LLU;

	t95 = ((x3673&(x3674+x3675))<<x3676);

	if (t95 != 103174LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3757 = UINT64_MAX;
	int8_t x3758 = INT8_MIN;
	int8_t x3759 = -6;
	uint16_t x3760 = 8U;

	t96 = ((x3757&(x3758+x3759))<<x3760);

	if (t96 != 18446744073709517312LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3793 = 10614;
	volatile int8_t x3794 = -1;
	volatile int32_t x3795 = INT32_MAX;
	int8_t x3796 = 12;

	t97 = ((x3793&(x3794+x3795))<<x3796);

	if (t97 != 43474944) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3813 = -38645875637584LL;
	static int32_t x3814 = 2514681;
	uint64_t x3815 = UINT64_MAX;
	volatile uint8_t x3816 = 13U;
	volatile uint64_t t98 = 4435243116849LLU;

	t98 = ((x3813&(x3814+x3815))<<x3816);

	if (t98 != 3226861568LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3850 = 282296U;
	int8_t x3851 = INT8_MAX;
	volatile uint8_t x3852 = 7U;
	uint32_t t99 = 2204198U;

	t99 = ((x3849&(x3850+x3851))<<x3852);

	if (t99 != 2595712U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x160 = 2;
uint16_t x188 = 0U;
static volatile uint16_t x269 = 577U;
int32_t t8 = -5;
static int16_t x554 = -157;
volatile int32_t x555 = 687420;
int8_t x560 = 1;
int16_t x599 = -1;
volatile uint32_t t11 = 3809U;
int64_t x621 = -1LL;
uint32_t x627 = UINT32_MAX;
static volatile int32_t t14 = 36;
static int8_t x682 = -1;
int32_t x690 = -1;
int16_t x701 = INT16_MIN;
volatile int32_t x703 = INT32_MAX;
volatile int16_t x710 = INT16_MAX;
volatile int16_t x714 = -1;
int8_t x730 = INT8_MIN;
int32_t t22 = 2217;
uint64_t x765 = UINT64_MAX;
uint8_t x768 = 26U;
uint64_t x799 = UINT64_MAX;
int8_t x800 = 0;
int8_t x810 = -30;
uint16_t x852 = 0U;
uint32_t x877 = 2U;
volatile int64_t x938 = INT64_MAX;
uint16_t x940 = 19U;
static int8_t x1085 = INT8_MIN;
int8_t x1157 = -9;
int64_t x1159 = 4930593901LL;
int64_t x1161 = INT64_MIN;
uint16_t x1162 = 11U;
static uint8_t x1221 = UINT8_MAX;
int64_t x1234 = -3258229LL;
int64_t x1262 = INT64_MAX;
static volatile uint64_t x1326 = 0LLU;
static volatile int32_t t41 = -2;
int64_t x1382 = -1LL;
static int16_t x1435 = INT16_MIN;
uint64_t x1450 = 655LLU;
int64_t x1482 = -1LL;
uint8_t x1710 = 1U;
int8_t x1804 = 0;
int32_t t56 = -25496;
static int16_t x1806 = INT16_MIN;
int64_t x1833 = INT64_MAX;
static uint32_t x1835 = UINT32_MAX;
volatile int8_t x1842 = 1;
uint32_t x1853 = 84U;
int16_t x1855 = 7;
volatile int32_t x1897 = 0;
static int32_t t61 = 60407;
int16_t x1941 = INT16_MIN;
volatile int64_t x1942 = INT64_MIN;
uint16_t x1956 = 2U;
uint16_t x1962 = 262U;
uint16_t x1964 = 6U;
int8_t x1995 = -1;
volatile int32_t t66 = -9159623;
static int64_t x2022 = INT64_MIN;
static uint8_t x2083 = UINT8_MAX;
int16_t x2084 = 0;
uint32_t x2108 = 1U;
int64_t x2169 = -1LL;
volatile int64_t t70 = -5479155522276LL;
uint8_t x2236 = 26U;
static volatile int64_t t71 = -9744379790426LL;
uint32_t x2358 = UINT32_MAX;
uint8_t x2368 = 0U;
int64_t t76 = -132432LL;
int64_t x2374 = INT64_MAX;
static int64_t x2393 = INT64_MAX;
static volatile uint16_t x2396 = 1U;
volatile int8_t x2424 = 0;
uint16_t x2435 = UINT16_MAX;
uint32_t x2481 = UINT32_MAX;
uint64_t x2517 = UINT64_MAX;
int8_t x2518 = -21;
int16_t x2549 = INT16_MAX;
int8_t x2581 = INT8_MIN;
int32_t t85 = -4741;
uint16_t x2606 = UINT16_MAX;
volatile int32_t t87 = -52433032;
int16_t x2651 = INT16_MIN;
int64_t x2691 = INT64_MAX;
volatile int16_t x2734 = -40;
volatile int64_t t91 = -438147983682282754LL;
int8_t x2750 = -1;
static uint16_t x2752 = 4U;
static int32_t x2794 = 3;
int8_t x2796 = 0;
uint8_t x2860 = 0U;
uint16_t x2893 = 0U;
int16_t x2894 = -1;
static uint16_t x2895 = 13694U;
volatile int16_t x2922 = -20;
uint64_t x2949 = 895LLU;


void f0(void) {
	int8_t x13 = -4;
	static volatile uint64_t x14 = 95010455748399064LLU;
	int64_t x15 = INT64_MIN;
	volatile int16_t x16 = 1;
	volatile int32_t t0 = 0;

	t0 = (x13^((x14<=x15)>>x16));

	if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	int16_t x39 = -1;
	volatile uint8_t x40 = 22U;
	int32_t t1 = 26394;

	t1 = (x37^((x38<=x39)>>x40));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x157 = 193375980;
	int8_t x158 = -28;
	static int64_t x159 = INT64_MIN;
	int32_t t2 = -12103579;

	t2 = (x157^((x158<=x159)>>x160));

	if (t2 != 193375980) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x185 = 16U;
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = -1;
	volatile int32_t t3 = 1974304;

	t3 = (x185^((x186<=x187)>>x188));

	if (t3 != 17) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x257 = 887169U;
	uint64_t x258 = 38427197060LLU;
	int32_t x259 = -1;
	static int8_t x260 = 2;
	static uint32_t t4 = 2232453U;

	t4 = (x257^((x258<=x259)>>x260));

	if (t4 != 887169U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x270 = INT64_MAX;
	int16_t x271 = -1;
	int8_t x272 = 5;
	static int32_t t5 = -1573478;

	t5 = (x269^((x270<=x271)>>x272));

	if (t5 != 577) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x273 = 28LLU;
	static int32_t x274 = INT32_MIN;
	int8_t x275 = -3;
	uint32_t x276 = 10U;
	volatile uint64_t t6 = 218934343535333383LLU;

	t6 = (x273^((x274<=x275)>>x276));

	if (t6 != 28LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x353 = 26LL;
	volatile uint16_t x354 = 75U;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = 2U;
	int64_t t7 = -3113701336595824LL;

	t7 = (x353^((x354<=x355)>>x356));

	if (t7 != 26LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x529 = INT8_MAX;
	uint32_t x530 = 255787152U;
	volatile uint16_t x531 = 1018U;
	int8_t x532 = 3;

	t8 = (x529^((x530<=x531)>>x532));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x553 = INT32_MIN;
	static int16_t x556 = 0;
	int32_t t9 = -23227;

	t9 = (x553^((x554<=x555)>>x556));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x557 = INT64_MAX;
	volatile int16_t x558 = INT16_MAX;
	static int32_t x559 = -1;
	static int64_t t10 = INT64_MAX;

	t10 = (x557^((x558<=x559)>>x560));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x597 = 78U;
	volatile int32_t x598 = -1;
	static int64_t x600 = 1LL;

	t11 = (x597^((x598<=x599)>>x600));

	if (t11 != 78U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x601 = 2181944635717256841LLU;
	int16_t x602 = -981;
	int64_t x603 = INT64_MIN;
	int16_t x604 = 22;
	uint64_t t12 = 163029550633187452LLU;

	t12 = (x601^((x602<=x603)>>x604));

	if (t12 != 2181944635717256841LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x622 = 0;
	static volatile int32_t x623 = INT32_MIN;
	volatile int8_t x624 = 10;
	volatile int64_t t13 = 389069894814002LL;

	t13 = (x621^((x622<=x623)>>x624));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x625 = 0;
	int32_t x626 = INT32_MIN;
	uint16_t x628 = 2U;

	t14 = (x625^((x626<=x627)>>x628));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x661 = 1U;
	uint64_t x662 = 245513965122334375LLU;
	volatile uint16_t x663 = UINT16_MAX;
	uint8_t x664 = 3U;
	int32_t t15 = 3759;

	t15 = (x661^((x662<=x663)>>x664));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x677 = 825U;
	static volatile int8_t x678 = 38;
	uint32_t x679 = 691U;
	volatile uint32_t x680 = 30U;
	volatile int32_t t16 = 165849;

	t16 = (x677^((x678<=x679)>>x680));

	if (t16 != 825) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x681 = UINT32_MAX;
	int8_t x683 = INT8_MAX;
	static int32_t x684 = 10;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x681^((x682<=x683)>>x684));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x689 = 334951953310730LL;
	int64_t x691 = -1LL;
	uint8_t x692 = 1U;
	static volatile int64_t t18 = -60069794134418113LL;

	t18 = (x689^((x690<=x691)>>x692));

	if (t18 != 334951953310730LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x702 = INT16_MIN;
	volatile int8_t x704 = 11;
	volatile int32_t t19 = -400707770;

	t19 = (x701^((x702<=x703)>>x704));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x709 = INT8_MAX;
	int16_t x711 = INT16_MIN;
	int64_t x712 = 30LL;
	volatile int32_t t20 = -224161363;

	t20 = (x709^((x710<=x711)>>x712));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x713 = -58;
	uint64_t x715 = 11546101LLU;
	int64_t x716 = 11LL;
	int32_t t21 = 604299883;

	t21 = (x713^((x714<=x715)>>x716));

	if (t21 != -58) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x729 = INT16_MIN;
	volatile int64_t x731 = -1LL;
	uint64_t x732 = 0LLU;

	t22 = (x729^((x730<=x731)>>x732));

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x766 = INT32_MIN;
	uint16_t x767 = 10U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x765^((x766<=x767)>>x768));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x797 = 3174U;
	uint32_t x798 = 17U;
	uint32_t t24 = 21U;

	t24 = (x797^((x798<=x799)>>x800));

	if (t24 != 3175U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x805 = -1;
	static int32_t x806 = INT32_MIN;
	uint64_t x807 = 8353596780771599LLU;
	uint32_t x808 = 18U;
	volatile int32_t t25 = -44731656;

	t25 = (x805^((x806<=x807)>>x808));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x809 = INT64_MAX;
	volatile int16_t x811 = -1;
	static uint16_t x812 = 15U;
	int64_t t26 = INT64_MAX;

	t26 = (x809^((x810<=x811)>>x812));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x849 = 68865983LLU;
	int32_t x850 = -274867;
	int64_t x851 = -1LL;
	volatile uint64_t t27 = 2236794348089001438LLU;

	t27 = (x849^((x850<=x851)>>x852));

	if (t27 != 68865982LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x878 = 275U;
	volatile uint16_t x879 = 0U;
	uint32_t x880 = 5U;
	volatile uint32_t t28 = 0U;

	t28 = (x877^((x878<=x879)>>x880));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x937 = 0U;
	uint32_t x939 = UINT32_MAX;
	int32_t t29 = 3732;

	t29 = (x937^((x938<=x939)>>x940));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1086 = 11988233U;
	int16_t x1087 = INT16_MAX;
	int8_t x1088 = 1;
	volatile int32_t t30 = -3617;

	t30 = (x1085^((x1086<=x1087)>>x1088));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1158 = -11626;
	uint32_t x1160 = 7U;
	volatile int32_t t31 = 80774651;

	t31 = (x1157^((x1158<=x1159)>>x1160));

	if (t31 != -9) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1163 = INT8_MIN;
	static int16_t x1164 = 0;
	static int64_t t32 = INT64_MIN;

	t32 = (x1161^((x1162<=x1163)>>x1164));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1193 = INT64_MIN;
	uint8_t x1194 = UINT8_MAX;
	volatile int32_t x1195 = 0;
	static volatile int8_t x1196 = 2;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x1193^((x1194<=x1195)>>x1196));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1201 = -4;
	int8_t x1202 = INT8_MIN;
	volatile int16_t x1203 = INT16_MIN;
	uint8_t x1204 = 0U;
	volatile int32_t t34 = -267867;

	t34 = (x1201^((x1202<=x1203)>>x1204));

	if (t34 != -4) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1222 = UINT16_MAX;
	uint64_t x1223 = 286599909500LLU;
	int8_t x1224 = 2;
	volatile int32_t t35 = -157324;

	t35 = (x1221^((x1222<=x1223)>>x1224));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1233 = 15;
	int8_t x1235 = INT8_MIN;
	static volatile int16_t x1236 = 28;
	int32_t t36 = -9;

	t36 = (x1233^((x1234<=x1235)>>x1236));

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1245 = INT8_MIN;
	volatile int16_t x1246 = 546;
	uint64_t x1247 = UINT64_MAX;
	int8_t x1248 = 2;
	int32_t t37 = -2042255;

	t37 = (x1245^((x1246<=x1247)>>x1248));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1249 = UINT64_MAX;
	int32_t x1250 = INT32_MIN;
	static volatile int64_t x1251 = 10318263419686783LL;
	uint16_t x1252 = 1U;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x1249^((x1250<=x1251)>>x1252));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1261 = -2;
	int16_t x1263 = INT16_MIN;
	uint8_t x1264 = 15U;
	volatile int32_t t39 = -96349078;

	t39 = (x1261^((x1262<=x1263)>>x1264));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1325 = -1;
	int64_t x1327 = -1723320316715LL;
	uint32_t x1328 = 0U;
	int32_t t40 = -13;

	t40 = (x1325^((x1326<=x1327)>>x1328));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1329 = -4232;
	volatile uint16_t x1330 = 53U;
	static volatile uint32_t x1331 = 5135U;
	volatile uint8_t x1332 = 1U;

	t41 = (x1329^((x1330<=x1331)>>x1332));

	if (t41 != -4232) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1333 = UINT8_MAX;
	int64_t x1334 = INT64_MIN;
	int8_t x1335 = INT8_MIN;
	static uint16_t x1336 = 7U;
	volatile int32_t t42 = -298570;

	t42 = (x1333^((x1334<=x1335)>>x1336));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1353 = INT8_MAX;
	int64_t x1354 = INT64_MIN;
	uint8_t x1355 = 11U;
	uint16_t x1356 = 1U;
	volatile int32_t t43 = 571;

	t43 = (x1353^((x1354<=x1355)>>x1356));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1381 = INT16_MAX;
	volatile int32_t x1383 = -1;
	uint8_t x1384 = 12U;
	volatile int32_t t44 = 1897386;

	t44 = (x1381^((x1382<=x1383)>>x1384));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1413 = 1;
	uint8_t x1414 = UINT8_MAX;
	int16_t x1415 = -162;
	volatile int8_t x1416 = 23;
	volatile int32_t t45 = -1078;

	t45 = (x1413^((x1414<=x1415)>>x1416));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1433 = -18;
	int64_t x1434 = -1LL;
	static int8_t x1436 = 21;
	int32_t t46 = 293;

	t46 = (x1433^((x1434<=x1435)>>x1436));

	if (t46 != -18) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1449 = INT32_MAX;
	uint64_t x1451 = 25879044735032LLU;
	uint16_t x1452 = 3U;
	int32_t t47 = INT32_MAX;

	t47 = (x1449^((x1450<=x1451)>>x1452));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1465 = -11;
	int64_t x1466 = INT64_MIN;
	volatile int64_t x1467 = INT64_MIN;
	static volatile uint8_t x1468 = 22U;
	int32_t t48 = 131;

	t48 = (x1465^((x1466<=x1467)>>x1468));

	if (t48 != -11) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1477 = -1;
	int32_t x1478 = -30065;
	static volatile uint8_t x1479 = 2U;
	uint8_t x1480 = 29U;
	int32_t t49 = -122;

	t49 = (x1477^((x1478<=x1479)>>x1480));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1481 = INT32_MAX;
	uint8_t x1483 = 4U;
	static int8_t x1484 = 1;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x1481^((x1482<=x1483)>>x1484));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1517 = INT32_MIN;
	int16_t x1518 = INT16_MIN;
	int64_t x1519 = -16558022608699999LL;
	volatile int8_t x1520 = 1;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x1517^((x1518<=x1519)>>x1520));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1581 = UINT32_MAX;
	int16_t x1582 = -34;
	int64_t x1583 = -19302934669LL;
	uint16_t x1584 = 6U;
	uint32_t t52 = UINT32_MAX;

	t52 = (x1581^((x1582<=x1583)>>x1584));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1621 = -1;
	int8_t x1622 = 4;
	int16_t x1623 = -1;
	uint8_t x1624 = 2U;
	volatile int32_t t53 = 10365209;

	t53 = (x1621^((x1622<=x1623)>>x1624));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1637 = 58872757787263LL;
	static uint16_t x1638 = 22168U;
	static int32_t x1639 = INT32_MAX;
	uint64_t x1640 = 3LLU;
	int64_t t54 = 909967852LL;

	t54 = (x1637^((x1638<=x1639)>>x1640));

	if (t54 != 58872757787263LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1709 = 0;
	uint16_t x1711 = 3U;
	volatile uint8_t x1712 = 5U;
	volatile int32_t t55 = 11783577;

	t55 = (x1709^((x1710<=x1711)>>x1712));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1801 = INT8_MAX;
	static int16_t x1802 = 9;
	volatile uint32_t x1803 = 23917258U;

	t56 = (x1801^((x1802<=x1803)>>x1804));

	if (t56 != 126) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1805 = -1;
	volatile int16_t x1807 = 33;
	int32_t x1808 = 7;
	int32_t t57 = -15;

	t57 = (x1805^((x1806<=x1807)>>x1808));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1834 = INT16_MIN;
	int16_t x1836 = 29;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x1833^((x1834<=x1835)>>x1836));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1841 = 1405006167014109LLU;
	volatile int64_t x1843 = INT64_MIN;
	static uint8_t x1844 = 1U;
	volatile uint64_t t59 = 45901592LLU;

	t59 = (x1841^((x1842<=x1843)>>x1844));

	if (t59 != 1405006167014109LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1854 = INT8_MIN;
	volatile uint32_t x1856 = 11U;
	uint32_t t60 = 282U;

	t60 = (x1853^((x1854<=x1855)>>x1856));

	if (t60 != 84U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1898 = -1;
	static int64_t x1899 = -216474572258000LL;
	uint8_t x1900 = 1U;

	t61 = (x1897^((x1898<=x1899)>>x1900));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1943 = INT16_MAX;
	static uint8_t x1944 = 28U;
	static volatile int32_t t62 = 36717;

	t62 = (x1941^((x1942<=x1943)>>x1944));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1953 = INT16_MIN;
	uint8_t x1954 = 7U;
	uint32_t x1955 = 230318457U;
	int32_t t63 = 5755161;

	t63 = (x1953^((x1954<=x1955)>>x1956));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1961 = INT8_MAX;
	volatile int8_t x1963 = INT8_MIN;
	volatile int32_t t64 = -364628;

	t64 = (x1961^((x1962<=x1963)>>x1964));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1965 = INT64_MIN;
	int32_t x1966 = 228;
	uint8_t x1967 = UINT8_MAX;
	uint8_t x1968 = 8U;
	volatile int64_t t65 = INT64_MIN;

	t65 = (x1965^((x1966<=x1967)>>x1968));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1993 = 2U;
	static int32_t x1994 = -2029;
	int16_t x1996 = 1;

	t66 = (x1993^((x1994<=x1995)>>x1996));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2021 = INT8_MIN;
	uint32_t x2023 = UINT32_MAX;
	int8_t x2024 = 15;
	int32_t t67 = 76349;

	t67 = (x2021^((x2022<=x2023)>>x2024));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2081 = -31;
	int8_t x2082 = INT8_MIN;
	int32_t t68 = 118;

	t68 = (x2081^((x2082<=x2083)>>x2084));

	if (t68 != -32) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2105 = 89315079LLU;
	static uint32_t x2106 = 0U;
	static int64_t x2107 = INT64_MIN;
	static uint64_t t69 = 580LLU;

	t69 = (x2105^((x2106<=x2107)>>x2108));

	if (t69 != 89315079LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x2170 = 25;
	int64_t x2171 = INT64_MIN;
	uint8_t x2172 = 1U;

	t70 = (x2169^((x2170<=x2171)>>x2172));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2233 = -1LL;
	int16_t x2234 = INT16_MIN;
	int16_t x2235 = -1;

	t71 = (x2233^((x2234<=x2235)>>x2236));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2253 = -1;
	static int64_t x2254 = INT64_MIN;
	int8_t x2255 = INT8_MAX;
	volatile uint16_t x2256 = 23U;
	int32_t t72 = -238781;

	t72 = (x2253^((x2254<=x2255)>>x2256));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x2277 = 30025U;
	static int64_t x2278 = INT64_MAX;
	uint8_t x2279 = 0U;
	uint8_t x2280 = 1U;
	volatile uint32_t t73 = 30U;

	t73 = (x2277^((x2278<=x2279)>>x2280));

	if (t73 != 30025U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2297 = UINT16_MAX;
	int8_t x2298 = INT8_MAX;
	static volatile uint64_t x2299 = 6LLU;
	uint8_t x2300 = 7U;
	static volatile int32_t t74 = 10;

	t74 = (x2297^((x2298<=x2299)>>x2300));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2357 = INT32_MAX;
	volatile uint64_t x2359 = UINT64_MAX;
	int8_t x2360 = 1;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x2357^((x2358<=x2359)>>x2360));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2365 = -222904LL;
	static int32_t x2366 = INT32_MIN;
	static uint16_t x2367 = UINT16_MAX;

	t76 = (x2365^((x2366<=x2367)>>x2368));

	if (t76 != -222903LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2373 = INT64_MAX;
	int32_t x2375 = INT32_MAX;
	volatile uint8_t x2376 = 6U;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x2373^((x2374<=x2375)>>x2376));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2394 = INT8_MIN;
	volatile int32_t x2395 = -1;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x2393^((x2394<=x2395)>>x2396));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2421 = 1U;
	int64_t x2422 = INT64_MIN;
	static uint64_t x2423 = UINT64_MAX;
	static volatile int32_t t79 = 5252;

	t79 = (x2421^((x2422<=x2423)>>x2424));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2433 = -1LL;
	uint8_t x2434 = 90U;
	uint8_t x2436 = 6U;
	int64_t t80 = -201660898LL;

	t80 = (x2433^((x2434<=x2435)>>x2436));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2445 = 17786U;
	uint64_t x2446 = 1370LLU;
	static int32_t x2447 = INT32_MIN;
	uint16_t x2448 = 10U;
	static uint32_t t81 = 0U;

	t81 = (x2445^((x2446<=x2447)>>x2448));

	if (t81 != 17786U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2482 = 102;
	int32_t x2483 = -3384;
	volatile uint8_t x2484 = 2U;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x2481^((x2482<=x2483)>>x2484));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2519 = INT8_MIN;
	uint64_t x2520 = 2LLU;
	uint64_t t83 = UINT64_MAX;

	t83 = (x2517^((x2518<=x2519)>>x2520));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2550 = -1;
	int32_t x2551 = 0;
	int16_t x2552 = 0;
	static volatile int32_t t84 = -42014806;

	t84 = (x2549^((x2550<=x2551)>>x2552));

	if (t84 != 32766) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2582 = 0;
	static int8_t x2583 = -1;
	int16_t x2584 = 14;

	t85 = (x2581^((x2582<=x2583)>>x2584));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x2605 = 0;
	uint32_t x2607 = 67067963U;
	uint32_t x2608 = 12U;
	static volatile int32_t t86 = -1927;

	t86 = (x2605^((x2606<=x2607)>>x2608));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2633 = 0;
	static uint32_t x2634 = 12287774U;
	int8_t x2635 = INT8_MIN;
	static volatile uint8_t x2636 = 30U;

	t87 = (x2633^((x2634<=x2635)>>x2636));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x2649 = INT32_MAX;
	static uint32_t x2650 = 550U;
	uint16_t x2652 = 6U;
	int32_t t88 = INT32_MAX;

	t88 = (x2649^((x2650<=x2651)>>x2652));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2689 = 5U;
	static int32_t x2690 = INT32_MIN;
	static int16_t x2692 = 17;
	volatile int32_t t89 = -2;

	t89 = (x2689^((x2690<=x2691)>>x2692));

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2717 = 80896U;
	uint32_t x2718 = 1073530U;
	int16_t x2719 = INT16_MIN;
	static volatile int32_t x2720 = 10;
	uint32_t t90 = 2116251642U;

	t90 = (x2717^((x2718<=x2719)>>x2720));

	if (t90 != 80896U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2733 = 111LL;
	uint8_t x2735 = 36U;
	volatile uint8_t x2736 = 0U;

	t91 = (x2733^((x2734<=x2735)>>x2736));

	if (t91 != 110LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2749 = UINT8_MAX;
	int32_t x2751 = INT32_MIN;
	volatile int32_t t92 = -9598;

	t92 = (x2749^((x2750<=x2751)>>x2752));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2793 = 21028571007057LLU;
	volatile int16_t x2795 = INT16_MIN;
	volatile uint64_t t93 = 48643622LLU;

	t93 = (x2793^((x2794<=x2795)>>x2796));

	if (t93 != 21028571007057LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2857 = INT32_MIN;
	volatile int8_t x2858 = INT8_MIN;
	int64_t x2859 = INT64_MIN;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x2857^((x2858<=x2859)>>x2860));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2896 = 1U;
	static int32_t t95 = 1607;

	t95 = (x2893^((x2894<=x2895)>>x2896));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2921 = 0;
	int32_t x2923 = -1;
	static volatile int8_t x2924 = 1;
	int32_t t96 = -111741;

	t96 = (x2921^((x2922<=x2923)>>x2924));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2950 = 91LLU;
	int64_t x2951 = INT64_MAX;
	volatile uint32_t x2952 = 0U;
	volatile uint64_t t97 = 576927806LLU;

	t97 = (x2949^((x2950<=x2951)>>x2952));

	if (t97 != 894LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2989 = INT32_MIN;
	static int16_t x2990 = -1;
	uint64_t x2991 = 40912292510LLU;
	static uint16_t x2992 = 1U;
	static volatile int32_t t98 = INT32_MIN;

	t98 = (x2989^((x2990<=x2991)>>x2992));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2993 = UINT32_MAX;
	int8_t x2994 = -1;
	static volatile int32_t x2995 = INT32_MIN;
	uint32_t x2996 = 21U;
	static volatile uint32_t t99 = UINT32_MAX;

	t99 = (x2993^((x2994<=x2995)>>x2996));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -11;
int32_t x11 = INT32_MIN;
uint32_t x26 = 3U;
uint16_t x28 = 5U;
int8_t x105 = INT8_MIN;
uint32_t x108 = 2U;
static int16_t x109 = INT16_MIN;
volatile uint8_t x112 = 0U;
int32_t t4 = -20036;
uint64_t x133 = 1335517955799LLU;
uint8_t x136 = 0U;
static uint8_t x176 = 1U;
int32_t x242 = INT32_MIN;
int32_t t10 = 222363;
static volatile int16_t x426 = -1;
int64_t x438 = INT64_MIN;
int32_t x439 = -124;
static volatile uint8_t x518 = UINT8_MAX;
static int8_t x519 = -1;
int16_t x572 = 0;
static volatile int32_t t19 = -68;
int64_t x657 = INT64_MIN;
static int32_t x771 = INT32_MIN;
volatile int16_t x772 = 0;
static int32_t t23 = 2;
uint16_t x908 = 1U;
volatile int32_t t26 = 51848200;
uint8_t x979 = 29U;
int32_t x985 = INT32_MIN;
int16_t x987 = INT16_MIN;
int8_t x1134 = INT8_MAX;
int64_t x1145 = INT64_MIN;
volatile uint32_t x1177 = UINT32_MAX;
volatile uint8_t x1179 = 6U;
static uint16_t x1231 = 1742U;
volatile int32_t t36 = 16;
int32_t t38 = 176092;
int8_t x1425 = -1;
static int32_t t47 = -17379745;
uint64_t x1522 = 2298991LLU;
int8_t x1524 = 1;
int32_t t48 = 1140;
int32_t t50 = -5;
static int64_t x1605 = 0LL;
uint32_t x1606 = UINT32_MAX;
volatile int8_t x1608 = 1;
static int32_t x1689 = INT32_MIN;
int16_t x1690 = INT16_MIN;
int32_t t52 = 323421;
static int16_t x1702 = 18;
int8_t x1704 = 2;
volatile int32_t t54 = 1804256;
static volatile uint32_t x1801 = 36273873U;
volatile uint64_t x1965 = 3835884531594045LLU;
volatile int16_t x1967 = INT16_MAX;
volatile uint8_t x2018 = 2U;
int32_t x2019 = 147;
uint32_t x2102 = 42086979U;
static int64_t x2105 = -1LL;
uint64_t x2130 = 148250407412758LLU;
int32_t t63 = 0;
int32_t t65 = 137;
static int32_t x2196 = 1;
volatile int16_t x2214 = -1;
int64_t x2246 = -1LL;
int32_t x2429 = -1;
int8_t x2444 = 8;
volatile int8_t x2517 = -1;
int8_t x2519 = INT8_MIN;
static volatile int32_t t73 = -599;
int32_t t74 = 745;
int8_t x2666 = INT8_MIN;
uint16_t x2667 = 549U;
volatile int32_t t76 = -215568;
int16_t x2831 = INT16_MIN;
volatile int32_t t79 = -1;
int32_t x2842 = INT32_MAX;
static int16_t x2843 = INT16_MIN;
int16_t x2946 = 121;
static int64_t x2951 = 2118750939249LL;
volatile uint32_t x3053 = 1621184U;
uint8_t x3086 = 7U;
volatile int32_t x3101 = INT32_MIN;
int8_t x3102 = 23;
volatile int64_t x3119 = -34339432786757868LL;
int32_t x3135 = INT32_MAX;
int8_t x3140 = 1;
static volatile int32_t t95 = 2610115;
uint64_t x3266 = 173LLU;
uint8_t x3379 = 28U;


void f0(void) {
	static int64_t x5 = 356290LL;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 12U;
	int32_t t0 = -16;

	t0 = ((x5<=(x6|x7))>>x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 6893U;
	int32_t x10 = INT32_MIN;
	int8_t x12 = 10;
	int32_t t1 = -3974;

	t1 = ((x9<=(x10|x11))>>x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x25 = INT64_MIN;
	int8_t x27 = -62;
	volatile int32_t t2 = 6790663;

	t2 = ((x25<=(x26|x27))>>x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x106 = UINT8_MAX;
	int64_t x107 = -1LL;
	int32_t t3 = -123;

	t3 = ((x105<=(x106|x107))>>x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x110 = 16109;
	volatile uint8_t x111 = 7U;

	t4 = ((x109<=(x110|x111))>>x112);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x134 = 272192785640099LL;
	int32_t x135 = INT32_MIN;
	volatile int32_t t5 = -30426;

	t5 = ((x133<=(x134|x135))>>x136);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x173 = -1LL;
	int16_t x174 = 23;
	uint8_t x175 = 12U;
	volatile int32_t t6 = -46709;

	t6 = ((x173<=(x174|x175))>>x176);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x205 = 104841453LLU;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 10;
	uint8_t x208 = 1U;
	int32_t t7 = -21943563;

	t7 = ((x205<=(x206|x207))>>x208);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x241 = INT64_MIN;
	static int8_t x243 = -13;
	int16_t x244 = 1;
	static volatile int32_t t8 = -943;

	t8 = ((x241<=(x242|x243))>>x244);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x281 = 13447U;
	static volatile int16_t x282 = 1419;
	uint8_t x283 = UINT8_MAX;
	static uint8_t x284 = 2U;
	int32_t t9 = -626677;

	t9 = ((x281<=(x282|x283))>>x284);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = 1089103497769153LL;
	int8_t x299 = -44;
	static int16_t x300 = 30;

	t10 = ((x297<=(x298|x299))>>x300);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x393 = UINT8_MAX;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = 8U;
	static uint64_t x396 = 20LLU;
	int32_t t11 = 25436224;

	t11 = ((x393<=(x394|x395))>>x396);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x425 = INT32_MIN;
	volatile int64_t x427 = INT64_MAX;
	uint8_t x428 = 1U;
	volatile int32_t t12 = 1;

	t12 = ((x425<=(x426|x427))>>x428);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x437 = INT8_MIN;
	int8_t x440 = 29;
	int32_t t13 = -102448269;

	t13 = ((x437<=(x438|x439))>>x440);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x481 = INT8_MIN;
	int16_t x482 = 0;
	static int32_t x483 = INT32_MIN;
	uint8_t x484 = 27U;
	static volatile int32_t t14 = 15991847;

	t14 = ((x481<=(x482|x483))>>x484);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x517 = UINT32_MAX;
	uint16_t x520 = 11U;
	int32_t t15 = 5070141;

	t15 = ((x517<=(x518|x519))>>x520);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x529 = -1LL;
	int32_t x530 = 8494290;
	int64_t x531 = -1LL;
	static int8_t x532 = 3;
	int32_t t16 = 669133;

	t16 = ((x529<=(x530|x531))>>x532);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x569 = -1LL;
	volatile uint32_t x570 = 172230172U;
	uint16_t x571 = UINT16_MAX;
	static volatile int32_t t17 = 436084699;

	t17 = ((x569<=(x570|x571))>>x572);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x609 = -1052632LL;
	static uint16_t x610 = UINT16_MAX;
	static uint64_t x611 = UINT64_MAX;
	static uint16_t x612 = 1U;
	int32_t t18 = 15682934;

	t18 = ((x609<=(x610|x611))>>x612);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x637 = 25477742;
	uint8_t x638 = 0U;
	int16_t x639 = -1;
	static uint32_t x640 = 7U;

	t19 = ((x637<=(x638|x639))>>x640);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x658 = INT16_MIN;
	static int8_t x659 = -1;
	uint8_t x660 = 1U;
	volatile int32_t t20 = 28;

	t20 = ((x657<=(x658|x659))>>x660);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x757 = INT64_MIN;
	uint8_t x758 = 2U;
	uint32_t x759 = UINT32_MAX;
	uint8_t x760 = 1U;
	static volatile int32_t t21 = 2235;

	t21 = ((x757<=(x758|x759))>>x760);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x769 = UINT32_MAX;
	uint8_t x770 = 1U;
	static int32_t t22 = -53949;

	t22 = ((x769<=(x770|x771))>>x772);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x801 = INT32_MIN;
	static volatile int32_t x802 = 1470594;
	int8_t x803 = INT8_MIN;
	static uint8_t x804 = 0U;

	t23 = ((x801<=(x802|x803))>>x804);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x893 = INT8_MIN;
	int64_t x894 = -1LL;
	uint64_t x895 = 568639940700076897LLU;
	int16_t x896 = 0;
	volatile int32_t t24 = -2;

	t24 = ((x893<=(x894|x895))>>x896);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x905 = 2116LLU;
	int64_t x906 = -7404LL;
	static int64_t x907 = 1LL;
	int32_t t25 = -106;

	t25 = ((x905<=(x906|x907))>>x908);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x925 = 575U;
	uint32_t x926 = 33104U;
	static int32_t x927 = -1;
	static volatile int64_t x928 = 1LL;

	t26 = ((x925<=(x926|x927))>>x928);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x933 = -6;
	static volatile int8_t x934 = -1;
	static int32_t x935 = -1048339310;
	uint16_t x936 = 0U;
	int32_t t27 = -2001190;

	t27 = ((x933<=(x934|x935))>>x936);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x977 = 14622;
	static int8_t x978 = -1;
	static int64_t x980 = 0LL;
	static volatile int32_t t28 = -259997;

	t28 = ((x977<=(x978|x979))>>x980);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x986 = -1;
	int16_t x988 = 2;
	int32_t t29 = -215072;

	t29 = ((x985<=(x986|x987))>>x988);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x993 = 289997092473LL;
	int8_t x994 = 11;
	int32_t x995 = -1;
	uint64_t x996 = 16LLU;
	int32_t t30 = -2;

	t30 = ((x993<=(x994|x995))>>x996);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1017 = 0;
	int64_t x1018 = -1LL;
	volatile int8_t x1019 = 5;
	uint8_t x1020 = 11U;
	int32_t t31 = 690489;

	t31 = ((x1017<=(x1018|x1019))>>x1020);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1133 = 31U;
	static uint16_t x1135 = UINT16_MAX;
	int32_t x1136 = 0;
	volatile int32_t t32 = 483763;

	t32 = ((x1133<=(x1134|x1135))>>x1136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1146 = INT32_MAX;
	int8_t x1147 = INT8_MIN;
	int8_t x1148 = 6;
	volatile int32_t t33 = 758;

	t33 = ((x1145<=(x1146|x1147))>>x1148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1165 = -1LL;
	uint64_t x1166 = UINT64_MAX;
	int64_t x1167 = INT64_MAX;
	volatile uint8_t x1168 = 0U;
	static volatile int32_t t34 = -789828;

	t34 = ((x1165<=(x1166|x1167))>>x1168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1178 = INT32_MAX;
	uint8_t x1180 = 16U;
	int32_t t35 = -3378626;

	t35 = ((x1177<=(x1178|x1179))>>x1180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1229 = 35U;
	static int32_t x1230 = INT32_MIN;
	int8_t x1232 = 0;

	t36 = ((x1229<=(x1230|x1231))>>x1232);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1245 = INT64_MAX;
	int8_t x1246 = INT8_MIN;
	int16_t x1247 = 3;
	uint16_t x1248 = 13U;
	static int32_t t37 = 1856;

	t37 = ((x1245<=(x1246|x1247))>>x1248);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1257 = -1LL;
	static uint8_t x1258 = 13U;
	uint32_t x1259 = UINT32_MAX;
	uint8_t x1260 = 0U;

	t38 = ((x1257<=(x1258|x1259))>>x1260);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1301 = INT64_MIN;
	int64_t x1302 = INT64_MIN;
	int32_t x1303 = INT32_MIN;
	uint32_t x1304 = 7U;
	static int32_t t39 = -799750;

	t39 = ((x1301<=(x1302|x1303))>>x1304);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1321 = 802813U;
	volatile uint64_t x1322 = 1331098105062LLU;
	volatile uint8_t x1323 = UINT8_MAX;
	static uint64_t x1324 = 0LLU;
	volatile int32_t t40 = 52;

	t40 = ((x1321<=(x1322|x1323))>>x1324);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1329 = 0;
	volatile int16_t x1330 = INT16_MIN;
	volatile uint8_t x1331 = UINT8_MAX;
	volatile uint8_t x1332 = 1U;
	int32_t t41 = -118789153;

	t41 = ((x1329<=(x1330|x1331))>>x1332);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1377 = 166294;
	static int8_t x1378 = 0;
	volatile int16_t x1379 = INT16_MAX;
	uint8_t x1380 = 4U;
	int32_t t42 = 1751;

	t42 = ((x1377<=(x1378|x1379))>>x1380);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1401 = INT8_MIN;
	volatile int64_t x1402 = -1LL;
	uint8_t x1403 = UINT8_MAX;
	uint16_t x1404 = 0U;
	volatile int32_t t43 = -46;

	t43 = ((x1401<=(x1402|x1403))>>x1404);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1426 = INT16_MIN;
	int32_t x1427 = INT32_MAX;
	static volatile uint8_t x1428 = 19U;
	volatile int32_t t44 = 829344;

	t44 = ((x1425<=(x1426|x1427))>>x1428);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x1453 = UINT8_MAX;
	int32_t x1454 = 226;
	uint8_t x1455 = 1U;
	volatile uint16_t x1456 = 17U;
	int32_t t45 = 858;

	t45 = ((x1453<=(x1454|x1455))>>x1456);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1489 = 1817U;
	uint16_t x1490 = UINT16_MAX;
	int8_t x1491 = INT8_MIN;
	uint32_t x1492 = 6U;
	volatile int32_t t46 = -3;

	t46 = ((x1489<=(x1490|x1491))>>x1492);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1501 = INT64_MAX;
	static int16_t x1502 = INT16_MIN;
	int64_t x1503 = INT64_MIN;
	static int8_t x1504 = 0;

	t47 = ((x1501<=(x1502|x1503))>>x1504);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1521 = 303470617U;
	int8_t x1523 = INT8_MAX;

	t48 = ((x1521<=(x1522|x1523))>>x1524);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1545 = -1;
	uint32_t x1546 = 32284188U;
	int8_t x1547 = INT8_MIN;
	int8_t x1548 = 1;
	static volatile int32_t t49 = 3645709;

	t49 = ((x1545<=(x1546|x1547))>>x1548);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1561 = -1;
	uint64_t x1562 = 1LLU;
	int16_t x1563 = INT16_MIN;
	static volatile uint8_t x1564 = 0U;

	t50 = ((x1561<=(x1562|x1563))>>x1564);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x1607 = UINT16_MAX;
	static volatile int32_t t51 = 890577;

	t51 = ((x1605<=(x1606|x1607))>>x1608);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1691 = UINT32_MAX;
	uint16_t x1692 = 1U;

	t52 = ((x1689<=(x1690|x1691))>>x1692);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1697 = UINT16_MAX;
	static uint32_t x1698 = 15067641U;
	int8_t x1699 = -16;
	volatile uint64_t x1700 = 0LLU;
	static volatile int32_t t53 = -558810631;

	t53 = ((x1697<=(x1698|x1699))>>x1700);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1701 = 0;
	int32_t x1703 = INT32_MIN;

	t54 = ((x1701<=(x1702|x1703))>>x1704);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1802 = INT64_MAX;
	volatile int64_t x1803 = INT64_MIN;
	uint8_t x1804 = 1U;
	static volatile int32_t t55 = 63;

	t55 = ((x1801<=(x1802|x1803))>>x1804);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1949 = INT32_MIN;
	int32_t x1950 = 83430;
	int8_t x1951 = INT8_MIN;
	uint64_t x1952 = 8LLU;
	int32_t t56 = 0;

	t56 = ((x1949<=(x1950|x1951))>>x1952);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1966 = 100U;
	static uint8_t x1968 = 2U;
	volatile int32_t t57 = 288923;

	t57 = ((x1965<=(x1966|x1967))>>x1968);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x1977 = -1;
	int16_t x1978 = -1;
	int8_t x1979 = INT8_MIN;
	uint8_t x1980 = 26U;
	volatile int32_t t58 = 556908;

	t58 = ((x1977<=(x1978|x1979))>>x1980);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x2017 = 2U;
	int64_t x2020 = 0LL;
	static volatile int32_t t59 = 1;

	t59 = ((x2017<=(x2018|x2019))>>x2020);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2033 = UINT16_MAX;
	int32_t x2034 = INT32_MIN;
	int64_t x2035 = 3LL;
	static int8_t x2036 = 2;
	int32_t t60 = 25;

	t60 = ((x2033<=(x2034|x2035))>>x2036);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2101 = INT64_MAX;
	int8_t x2103 = 4;
	int8_t x2104 = 0;
	int32_t t61 = 410071632;

	t61 = ((x2101<=(x2102|x2103))>>x2104);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2106 = INT64_MIN;
	static volatile int8_t x2107 = INT8_MAX;
	uint16_t x2108 = 6U;
	volatile int32_t t62 = 70352;

	t62 = ((x2105<=(x2106|x2107))>>x2108);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2129 = -1;
	static uint64_t x2131 = UINT64_MAX;
	uint16_t x2132 = 3U;

	t63 = ((x2129<=(x2130|x2131))>>x2132);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2137 = INT16_MAX;
	int32_t x2138 = -2228214;
	int16_t x2139 = -1407;
	static volatile uint16_t x2140 = 0U;
	static volatile int32_t t64 = -2918;

	t64 = ((x2137<=(x2138|x2139))>>x2140);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x2181 = INT32_MIN;
	uint64_t x2182 = UINT64_MAX;
	static volatile uint8_t x2183 = 5U;
	int64_t x2184 = 18LL;

	t65 = ((x2181<=(x2182|x2183))>>x2184);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2193 = INT16_MIN;
	int64_t x2194 = INT64_MIN;
	uint64_t x2195 = UINT64_MAX;
	volatile int32_t t66 = 1;

	t66 = ((x2193<=(x2194|x2195))>>x2196);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2213 = INT64_MIN;
	int16_t x2215 = -9669;
	int32_t x2216 = 3;
	volatile int32_t t67 = 504;

	t67 = ((x2213<=(x2214|x2215))>>x2216);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2245 = -7830641LL;
	int64_t x2247 = -1LL;
	int8_t x2248 = 0;
	volatile int32_t t68 = 24021;

	t68 = ((x2245<=(x2246|x2247))>>x2248);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x2417 = -1;
	int8_t x2418 = 1;
	volatile int16_t x2419 = 1952;
	volatile int8_t x2420 = 0;
	volatile int32_t t69 = 386612;

	t69 = ((x2417<=(x2418|x2419))>>x2420);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2430 = -4;
	static volatile uint8_t x2431 = 1U;
	uint8_t x2432 = 0U;
	int32_t t70 = 10922779;

	t70 = ((x2429<=(x2430|x2431))>>x2432);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2441 = 280390447923861695LL;
	uint32_t x2442 = 7801U;
	static uint32_t x2443 = 6551U;
	int32_t t71 = 4989801;

	t71 = ((x2441<=(x2442|x2443))>>x2444);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2518 = INT64_MIN;
	volatile int16_t x2520 = 1;
	int32_t t72 = -2891148;

	t72 = ((x2517<=(x2518|x2519))>>x2520);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2545 = -1;
	static uint64_t x2546 = 23982437LLU;
	static int32_t x2547 = INT32_MIN;
	int8_t x2548 = 27;

	t73 = ((x2545<=(x2546|x2547))>>x2548);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2553 = INT32_MAX;
	static int16_t x2554 = INT16_MAX;
	int8_t x2555 = -27;
	uint16_t x2556 = 2U;

	t74 = ((x2553<=(x2554|x2555))>>x2556);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2653 = -1;
	int16_t x2654 = INT16_MIN;
	int16_t x2655 = INT16_MAX;
	uint8_t x2656 = 1U;
	int32_t t75 = -1003298236;

	t75 = ((x2653<=(x2654|x2655))>>x2656);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2665 = INT64_MAX;
	volatile uint8_t x2668 = 1U;

	t76 = ((x2665<=(x2666|x2667))>>x2668);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2725 = 899570783LL;
	volatile uint8_t x2726 = UINT8_MAX;
	static int16_t x2727 = INT16_MIN;
	uint16_t x2728 = 0U;
	volatile int32_t t77 = 786;

	t77 = ((x2725<=(x2726|x2727))>>x2728);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x2797 = 122U;
	static int64_t x2798 = -1LL;
	static volatile uint16_t x2799 = UINT16_MAX;
	volatile int8_t x2800 = 9;
	volatile int32_t t78 = -1;

	t78 = ((x2797<=(x2798|x2799))>>x2800);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2829 = INT64_MAX;
	static int32_t x2830 = INT32_MIN;
	static int16_t x2832 = 6;

	t79 = ((x2829<=(x2830|x2831))>>x2832);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2841 = -269056908639810LL;
	static int16_t x2844 = 0;
	static volatile int32_t t80 = -7448;

	t80 = ((x2841<=(x2842|x2843))>>x2844);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2925 = 470U;
	int64_t x2926 = INT64_MIN;
	uint32_t x2927 = 0U;
	uint8_t x2928 = 1U;
	int32_t t81 = 6;

	t81 = ((x2925<=(x2926|x2927))>>x2928);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2945 = INT32_MIN;
	uint16_t x2947 = 9972U;
	int64_t x2948 = 26LL;
	volatile int32_t t82 = -26874;

	t82 = ((x2945<=(x2946|x2947))>>x2948);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2949 = INT64_MIN;
	int64_t x2950 = -820800677LL;
	static uint16_t x2952 = 0U;
	int32_t t83 = -916883;

	t83 = ((x2949<=(x2950|x2951))>>x2952);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3029 = INT64_MAX;
	volatile uint64_t x3030 = UINT64_MAX;
	static uint16_t x3031 = 8489U;
	volatile int8_t x3032 = 3;
	int32_t t84 = 206135;

	t84 = ((x3029<=(x3030|x3031))>>x3032);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3054 = -15401;
	int32_t x3055 = 1040805;
	static uint8_t x3056 = 2U;
	int32_t t85 = 80684;

	t85 = ((x3053<=(x3054|x3055))>>x3056);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3061 = 15U;
	volatile uint16_t x3062 = 1U;
	static uint16_t x3063 = 1U;
	uint8_t x3064 = 30U;
	static volatile int32_t t86 = -2139756;

	t86 = ((x3061<=(x3062|x3063))>>x3064);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3077 = 4444856U;
	volatile int32_t x3078 = INT32_MIN;
	uint32_t x3079 = 1007U;
	int8_t x3080 = 1;
	int32_t t87 = 827947403;

	t87 = ((x3077<=(x3078|x3079))>>x3080);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x3085 = INT64_MAX;
	static uint8_t x3087 = 2U;
	uint8_t x3088 = 30U;
	volatile int32_t t88 = -3;

	t88 = ((x3085<=(x3086|x3087))>>x3088);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x3103 = -1;
	volatile uint64_t x3104 = 15LLU;
	int32_t t89 = -729237;

	t89 = ((x3101<=(x3102|x3103))>>x3104);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3117 = -1;
	int64_t x3118 = INT64_MIN;
	int8_t x3120 = 1;
	volatile int32_t t90 = 27706597;

	t90 = ((x3117<=(x3118|x3119))>>x3120);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3133 = INT64_MIN;
	volatile uint16_t x3134 = 7U;
	uint16_t x3136 = 15U;
	static int32_t t91 = 1;

	t91 = ((x3133<=(x3134|x3135))>>x3136);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x3137 = INT8_MAX;
	int16_t x3138 = -1;
	int32_t x3139 = 401;
	volatile int32_t t92 = 7;

	t92 = ((x3137<=(x3138|x3139))>>x3140);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3181 = 2883U;
	uint64_t x3182 = 44322297077542895LLU;
	static uint8_t x3183 = 0U;
	uint8_t x3184 = 30U;
	int32_t t93 = 3;

	t93 = ((x3181<=(x3182|x3183))>>x3184);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3193 = -1;
	static int64_t x3194 = INT64_MAX;
	uint16_t x3195 = 3152U;
	uint8_t x3196 = 13U;
	int32_t t94 = 32;

	t94 = ((x3193<=(x3194|x3195))>>x3196);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3197 = UINT64_MAX;
	uint8_t x3198 = 0U;
	static int64_t x3199 = -1LL;
	int16_t x3200 = 1;

	t95 = ((x3197<=(x3198|x3199))>>x3200);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x3229 = 2LL;
	static uint32_t x3230 = UINT32_MAX;
	int16_t x3231 = 1388;
	uint8_t x3232 = 4U;
	volatile int32_t t96 = -302;

	t96 = ((x3229<=(x3230|x3231))>>x3232);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3249 = 3863312LLU;
	int64_t x3250 = INT64_MAX;
	uint8_t x3251 = UINT8_MAX;
	static int8_t x3252 = 1;
	static volatile int32_t t97 = -5;

	t97 = ((x3249<=(x3250|x3251))>>x3252);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3265 = INT32_MIN;
	uint32_t x3267 = UINT32_MAX;
	int16_t x3268 = 0;
	volatile int32_t t98 = -865156;

	t98 = ((x3265<=(x3266|x3267))>>x3268);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3377 = -1;
	volatile int16_t x3378 = -14;
	static uint8_t x3380 = 17U;
	static volatile int32_t t99 = -4504;

	t99 = ((x3377<=(x3378|x3379))>>x3380);

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


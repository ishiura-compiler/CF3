#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t t0 = -221162800;
int16_t x61 = -1;
int8_t x63 = 2;
volatile int32_t t4 = 2417904;
uint64_t x162 = 2446058022414LLU;
int64_t x181 = -1LL;
volatile int8_t x314 = INT8_MIN;
int32_t x326 = INT32_MIN;
uint16_t x328 = 0U;
volatile int32_t t11 = -76603;
uint16_t x349 = UINT16_MAX;
int32_t x395 = -22287313;
int32_t x431 = INT32_MIN;
int32_t t16 = 312516215;
int64_t x506 = INT64_MIN;
int16_t x510 = INT16_MIN;
static uint8_t x512 = 0U;
int8_t x588 = 0;
uint8_t x624 = 6U;
uint32_t x731 = UINT32_MAX;
int32_t t25 = -371827858;
volatile int32_t t26 = 7;
int32_t x859 = INT32_MAX;
static volatile int8_t x860 = 2;
int8_t x888 = 9;
static int16_t x897 = INT16_MIN;
int32_t x898 = -1;
volatile int32_t x1007 = -1;
volatile uint8_t x1049 = 2U;
volatile uint64_t x1050 = UINT64_MAX;
static uint8_t x1068 = 3U;
static int32_t x1082 = INT32_MAX;
uint64_t x1083 = 4049283025187LLU;
int16_t x1121 = -1;
int8_t x1133 = INT8_MAX;
static int64_t x1134 = INT64_MIN;
static volatile int32_t x1135 = INT32_MAX;
uint16_t x1140 = 5U;
static int32_t x1146 = INT32_MIN;
volatile int32_t t41 = 35308429;
int32_t x1281 = INT32_MIN;
int8_t x1282 = INT8_MAX;
static int64_t x1369 = -205840LL;
int32_t t45 = -181459257;
uint8_t x1431 = UINT8_MAX;
int32_t t47 = 0;
static volatile int16_t x1480 = 0;
int8_t x1494 = -1;
int32_t x1495 = INT32_MIN;
volatile int32_t t50 = 9015545;
int16_t x1521 = INT16_MIN;
uint32_t x1522 = 243746111U;
int16_t x1523 = INT16_MIN;
uint8_t x1576 = 1U;
int16_t x1583 = -1;
static int32_t x1624 = 17;
uint16_t x1674 = 436U;
static int64_t x1675 = -258699696985LL;
static uint16_t x1676 = 3U;
int8_t x1701 = 0;
int16_t x1702 = -1;
int8_t x1739 = INT8_MAX;
uint16_t x1809 = UINT16_MAX;
int32_t x1811 = INT32_MIN;
static uint64_t x1930 = 68994291274948410LLU;
int64_t x1983 = INT64_MIN;
int64_t x2001 = INT64_MIN;
int16_t x2049 = INT16_MAX;
uint8_t x2052 = 1U;
uint8_t x2084 = 0U;
int64_t x2105 = INT64_MAX;
static volatile int32_t x2108 = 0;
static uint16_t x2164 = 3U;
int16_t x2351 = 968;
volatile int32_t t78 = 14688349;
uint32_t x2357 = UINT32_MAX;
int32_t x2359 = -1;
volatile int8_t x2389 = INT8_MIN;
volatile int32_t x2391 = INT32_MIN;
int64_t x2489 = INT64_MIN;
int32_t x2491 = -1733985;
static int32_t t83 = 0;
int8_t x2512 = 2;
uint64_t x2608 = 5LLU;
int8_t x2736 = 0;
static uint32_t x2749 = UINT32_MAX;
uint8_t x2754 = UINT8_MAX;
int32_t t92 = -1;
uint16_t x2781 = 28816U;
int32_t x2782 = INT32_MAX;
int8_t x2783 = -1;
int32_t x2887 = INT32_MAX;
int16_t x2888 = 1;
volatile int32_t t96 = 139;
int64_t x2977 = -1LL;
int16_t x2978 = 186;
volatile uint8_t x2980 = 2U;
int32_t t98 = 0;
uint8_t x3029 = UINT8_MAX;


void f0(void) {
	static int8_t x1 = -1;
	int64_t x3 = -1LL;
	volatile int8_t x4 = 0;

	t0 = (x1<=((x2==x3)>>x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x62 = INT16_MIN;
	uint8_t x64 = 10U;
	static volatile int32_t t1 = 357;

	t1 = (x61<=((x62==x63)>>x64));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = -36;
	int8_t x72 = 1;
	static volatile int32_t t2 = 265601;

	t2 = (x69<=((x70==x71)>>x72));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x89 = -1LL;
	uint16_t x90 = 476U;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = 1LL;
	static int32_t t3 = 2;

	t3 = (x89<=((x90==x91)>>x92));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x105 = 1121U;
	uint64_t x106 = UINT64_MAX;
	uint64_t x107 = UINT64_MAX;
	int16_t x108 = 23;

	t4 = (x105<=((x106==x107)>>x108));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x161 = 2LLU;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 18U;
	volatile int32_t t5 = 0;

	t5 = (x161<=((x162==x163)>>x164));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x177 = 3126U;
	static int32_t x178 = -101;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = 2LLU;
	volatile int32_t t6 = 1;

	t6 = (x177<=((x178==x179)>>x180));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x182 = -1;
	volatile int32_t x183 = INT32_MIN;
	uint16_t x184 = 1U;
	volatile int32_t t7 = -49157;

	t7 = (x181<=((x182==x183)>>x184));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint64_t x315 = 62LLU;
	uint8_t x316 = 4U;
	volatile int32_t t8 = -6360314;

	t8 = (x313<=((x314==x315)>>x316));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x321 = 3850902190323038LL;
	static int32_t x322 = INT32_MIN;
	volatile uint16_t x323 = 3U;
	uint8_t x324 = 1U;
	volatile int32_t t9 = -384;

	t9 = (x321<=((x322==x323)>>x324));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x325 = INT32_MAX;
	int16_t x327 = -1;
	int32_t t10 = -107;

	t10 = (x325<=((x326==x327)>>x328));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x329 = 7U;
	int8_t x330 = INT8_MAX;
	int16_t x331 = -1;
	static int8_t x332 = 15;

	t11 = (x329<=((x330==x331)>>x332));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x350 = -1;
	volatile int16_t x351 = INT16_MAX;
	volatile int8_t x352 = 6;
	static int32_t t12 = 3332;

	t12 = (x349<=((x350==x351)>>x352));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x373 = -1;
	volatile int8_t x374 = -1;
	static int32_t x375 = -1;
	uint8_t x376 = 0U;
	static volatile int32_t t13 = -1301150;

	t13 = (x373<=((x374==x375)>>x376));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x393 = INT16_MIN;
	int64_t x394 = 73840LL;
	static uint16_t x396 = 0U;
	volatile int32_t t14 = 38;

	t14 = (x393<=((x394==x395)>>x396));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x421 = -5;
	int32_t x422 = 657942;
	int8_t x423 = INT8_MAX;
	static uint8_t x424 = 1U;
	volatile int32_t t15 = 247836;

	t15 = (x421<=((x422==x423)>>x424));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x429 = INT32_MAX;
	static uint16_t x430 = UINT16_MAX;
	uint8_t x432 = 9U;

	t16 = (x429<=((x430==x431)>>x432));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x489 = -344;
	static int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MIN;
	uint32_t x492 = 8U;
	volatile int32_t t17 = -322746376;

	t17 = (x489<=((x490==x491)>>x492));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x505 = 3U;
	int32_t x507 = INT32_MIN;
	volatile uint8_t x508 = 5U;
	int32_t t18 = -26044547;

	t18 = (x505<=((x506==x507)>>x508));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x509 = 33U;
	static volatile uint32_t x511 = UINT32_MAX;
	int32_t t19 = 30419;

	t19 = (x509<=((x510==x511)>>x512));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x585 = INT8_MIN;
	int16_t x586 = -1;
	uint8_t x587 = 0U;
	int32_t t20 = -11;

	t20 = (x585<=((x586==x587)>>x588));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x597 = 22956491U;
	int64_t x598 = -1LL;
	uint8_t x599 = 94U;
	uint8_t x600 = 3U;
	int32_t t21 = 0;

	t21 = (x597<=((x598==x599)>>x600));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x621 = UINT8_MAX;
	uint64_t x622 = 7380336864LLU;
	volatile uint8_t x623 = UINT8_MAX;
	volatile int32_t t22 = -3;

	t22 = (x621<=((x622==x623)>>x624));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x661 = -3160121;
	int32_t x662 = INT32_MAX;
	volatile int64_t x663 = -19465671776453986LL;
	uint16_t x664 = 1U;
	static int32_t t23 = 5;

	t23 = (x661<=((x662==x663)>>x664));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x729 = UINT16_MAX;
	static volatile uint16_t x730 = 3U;
	int8_t x732 = 1;
	static int32_t t24 = 1038351;

	t24 = (x729<=((x730==x731)>>x732));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x773 = -1;
	int64_t x774 = 3414949476874042020LL;
	int32_t x775 = 3177498;
	int8_t x776 = 0;

	t25 = (x773<=((x774==x775)>>x776));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x785 = 55;
	static int32_t x786 = INT32_MIN;
	int16_t x787 = -2055;
	int8_t x788 = 0;

	t26 = (x785<=((x786==x787)>>x788));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x837 = 3U;
	static int32_t x838 = -1;
	int8_t x839 = 53;
	static uint8_t x840 = 0U;
	volatile int32_t t27 = 1408166;

	t27 = (x837<=((x838==x839)>>x840));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x857 = 232U;
	static uint64_t x858 = 967777572870LLU;
	static int32_t t28 = 510974471;

	t28 = (x857<=((x858==x859)>>x860));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x877 = -1;
	int8_t x878 = 2;
	int8_t x879 = INT8_MAX;
	int8_t x880 = 8;
	volatile int32_t t29 = 1;

	t29 = (x877<=((x878==x879)>>x880));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x885 = INT8_MIN;
	int64_t x886 = -9894122799LL;
	static volatile int16_t x887 = -1;
	volatile int32_t t30 = -351411849;

	t30 = (x885<=((x886==x887)>>x888));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x899 = -1;
	static int16_t x900 = 10;
	static volatile int32_t t31 = -4730147;

	t31 = (x897<=((x898==x899)>>x900));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1005 = -11123805193297LL;
	int8_t x1006 = INT8_MIN;
	int32_t x1008 = 3;
	int32_t t32 = 11773325;

	t32 = (x1005<=((x1006==x1007)>>x1008));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1051 = INT8_MAX;
	int8_t x1052 = 7;
	static int32_t t33 = 1701170;

	t33 = (x1049<=((x1050==x1051)>>x1052));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1065 = 2017675164729LL;
	int64_t x1066 = -1LL;
	uint8_t x1067 = 4U;
	volatile int32_t t34 = -256;

	t34 = (x1065<=((x1066==x1067)>>x1068));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1081 = 33U;
	volatile int8_t x1084 = 3;
	volatile int32_t t35 = 982;

	t35 = (x1081<=((x1082==x1083)>>x1084));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1122 = INT8_MIN;
	static volatile uint64_t x1123 = 1827934LLU;
	volatile int64_t x1124 = 3LL;
	volatile int32_t t36 = 8326;

	t36 = (x1121<=((x1122==x1123)>>x1124));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1136 = 10;
	volatile int32_t t37 = -1016095;

	t37 = (x1133<=((x1134==x1135)>>x1136));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x1137 = 26030U;
	uint16_t x1138 = 5443U;
	static uint8_t x1139 = 52U;
	int32_t t38 = 513726;

	t38 = (x1137<=((x1138==x1139)>>x1140));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1145 = -1LL;
	volatile uint64_t x1147 = 86289573226421LLU;
	uint16_t x1148 = 4U;
	volatile int32_t t39 = 1038;

	t39 = (x1145<=((x1146==x1147)>>x1148));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1157 = 35689LLU;
	uint32_t x1158 = 215U;
	uint16_t x1159 = 753U;
	static int8_t x1160 = 10;
	static int32_t t40 = -414;

	t40 = (x1157<=((x1158==x1159)>>x1160));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1201 = 26464718;
	int8_t x1202 = 6;
	int8_t x1203 = INT8_MAX;
	int32_t x1204 = 0;

	t41 = (x1201<=((x1202==x1203)>>x1204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1283 = INT32_MAX;
	int16_t x1284 = 0;
	volatile int32_t t42 = -1981;

	t42 = (x1281<=((x1282==x1283)>>x1284));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1353 = -1;
	static uint64_t x1354 = 1LLU;
	static int16_t x1355 = INT16_MIN;
	volatile int8_t x1356 = 3;
	int32_t t43 = 153;

	t43 = (x1353<=((x1354==x1355)>>x1356));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1370 = -1;
	int64_t x1371 = -3LL;
	int8_t x1372 = 19;
	static volatile int32_t t44 = 2093;

	t44 = (x1369<=((x1370==x1371)>>x1372));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1381 = INT8_MIN;
	int32_t x1382 = -235;
	static int16_t x1383 = -1;
	volatile int32_t x1384 = 5;

	t45 = (x1381<=((x1382==x1383)>>x1384));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1413 = INT16_MAX;
	static uint16_t x1414 = UINT16_MAX;
	int32_t x1415 = INT32_MIN;
	volatile int8_t x1416 = 20;
	int32_t t46 = 6928242;

	t46 = (x1413<=((x1414==x1415)>>x1416));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x1429 = 2U;
	int32_t x1430 = INT32_MAX;
	uint8_t x1432 = 3U;

	t47 = (x1429<=((x1430==x1431)>>x1432));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x1433 = -1;
	uint32_t x1434 = 972304299U;
	static int32_t x1435 = INT32_MIN;
	uint16_t x1436 = 5U;
	int32_t t48 = 0;

	t48 = (x1433<=((x1434==x1435)>>x1436));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x1477 = UINT64_MAX;
	static uint16_t x1478 = 1499U;
	int8_t x1479 = INT8_MIN;
	static volatile int32_t t49 = 90;

	t49 = (x1477<=((x1478==x1479)>>x1480));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1493 = 8U;
	uint8_t x1496 = 5U;

	t50 = (x1493<=((x1494==x1495)>>x1496));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1509 = 66746503;
	static int8_t x1510 = INT8_MAX;
	static int64_t x1511 = INT64_MIN;
	static int8_t x1512 = 8;
	volatile int32_t t51 = 14589;

	t51 = (x1509<=((x1510==x1511)>>x1512));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1524 = 2U;
	static int32_t t52 = -1;

	t52 = (x1521<=((x1522==x1523)>>x1524));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1553 = INT16_MIN;
	int32_t x1554 = -27;
	volatile int64_t x1555 = 23809219904LL;
	int8_t x1556 = 10;
	static int32_t t53 = 254;

	t53 = (x1553<=((x1554==x1555)>>x1556));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1573 = INT8_MIN;
	int16_t x1574 = INT16_MAX;
	int32_t x1575 = 33062;
	int32_t t54 = 4;

	t54 = (x1573<=((x1574==x1575)>>x1576));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1581 = 1819336LLU;
	uint16_t x1582 = UINT16_MAX;
	uint8_t x1584 = 2U;
	volatile int32_t t55 = 132603018;

	t55 = (x1581<=((x1582==x1583)>>x1584));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1593 = UINT32_MAX;
	int32_t x1594 = -29415;
	int16_t x1595 = INT16_MAX;
	int16_t x1596 = 1;
	int32_t t56 = -3649608;

	t56 = (x1593<=((x1594==x1595)>>x1596));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1601 = 19U;
	volatile int32_t x1602 = INT32_MIN;
	int64_t x1603 = 0LL;
	uint32_t x1604 = 5U;
	int32_t t57 = -1;

	t57 = (x1601<=((x1602==x1603)>>x1604));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1621 = -301;
	uint16_t x1622 = 2U;
	uint16_t x1623 = UINT16_MAX;
	int32_t t58 = -5875;

	t58 = (x1621<=((x1622==x1623)>>x1624));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1645 = INT8_MAX;
	int8_t x1646 = INT8_MIN;
	int64_t x1647 = INT64_MAX;
	uint8_t x1648 = 2U;
	volatile int32_t t59 = 7801464;

	t59 = (x1645<=((x1646==x1647)>>x1648));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1673 = 2;
	int32_t t60 = 124184839;

	t60 = (x1673<=((x1674==x1675)>>x1676));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1703 = 772412903455298LLU;
	static uint8_t x1704 = 2U;
	static volatile int32_t t61 = -168;

	t61 = (x1701<=((x1702==x1703)>>x1704));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1737 = 0U;
	volatile uint16_t x1738 = 34U;
	volatile uint8_t x1740 = 0U;
	int32_t t62 = -112;

	t62 = (x1737<=((x1738==x1739)>>x1740));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1810 = 13128U;
	int16_t x1812 = 1;
	int32_t t63 = -477;

	t63 = (x1809<=((x1810==x1811)>>x1812));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1829 = INT32_MIN;
	volatile uint16_t x1830 = UINT16_MAX;
	volatile int8_t x1831 = INT8_MIN;
	static int16_t x1832 = 0;
	volatile int32_t t64 = -721;

	t64 = (x1829<=((x1830==x1831)>>x1832));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x1857 = INT8_MAX;
	volatile uint64_t x1858 = UINT64_MAX;
	static int16_t x1859 = INT16_MIN;
	uint8_t x1860 = 4U;
	int32_t t65 = -2020;

	t65 = (x1857<=((x1858==x1859)>>x1860));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1861 = INT16_MIN;
	int8_t x1862 = -1;
	volatile int8_t x1863 = INT8_MIN;
	uint32_t x1864 = 6U;
	volatile int32_t t66 = 352264325;

	t66 = (x1861<=((x1862==x1863)>>x1864));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1881 = INT32_MAX;
	int8_t x1882 = -22;
	int32_t x1883 = 5585406;
	int64_t x1884 = 3LL;
	volatile int32_t t67 = 15616409;

	t67 = (x1881<=((x1882==x1883)>>x1884));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1913 = 30;
	static volatile int8_t x1914 = INT8_MAX;
	int16_t x1915 = 184;
	int8_t x1916 = 0;
	volatile int32_t t68 = -21;

	t68 = (x1913<=((x1914==x1915)>>x1916));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1929 = -85;
	static volatile int32_t x1931 = -1;
	volatile uint64_t x1932 = 14LLU;
	static volatile int32_t t69 = -10154581;

	t69 = (x1929<=((x1930==x1931)>>x1932));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x1981 = -482;
	int32_t x1982 = INT32_MAX;
	volatile uint16_t x1984 = 0U;
	volatile int32_t t70 = -8;

	t70 = (x1981<=((x1982==x1983)>>x1984));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x1985 = INT32_MIN;
	uint64_t x1986 = UINT64_MAX;
	uint8_t x1987 = 5U;
	static volatile uint8_t x1988 = 3U;
	int32_t t71 = -196237116;

	t71 = (x1985<=((x1986==x1987)>>x1988));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2002 = 345;
	int16_t x2003 = -1;
	uint16_t x2004 = 22U;
	int32_t t72 = 6356;

	t72 = (x2001<=((x2002==x2003)>>x2004));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2050 = UINT8_MAX;
	int64_t x2051 = INT64_MIN;
	static volatile int32_t t73 = 0;

	t73 = (x2049<=((x2050==x2051)>>x2052));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x2081 = 6;
	int16_t x2082 = -1;
	int8_t x2083 = INT8_MIN;
	int32_t t74 = -27862605;

	t74 = (x2081<=((x2082==x2083)>>x2084));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2106 = INT64_MAX;
	int32_t x2107 = INT32_MAX;
	int32_t t75 = -2;

	t75 = (x2105<=((x2106==x2107)>>x2108));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2161 = 470043914;
	uint16_t x2162 = 3503U;
	uint64_t x2163 = 78079865LLU;
	volatile int32_t t76 = -1;

	t76 = (x2161<=((x2162==x2163)>>x2164));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x2201 = 20;
	uint32_t x2202 = 311U;
	static int64_t x2203 = INT64_MAX;
	int16_t x2204 = 1;
	int32_t t77 = -108754699;

	t77 = (x2201<=((x2202==x2203)>>x2204));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x2349 = 2367LLU;
	volatile uint32_t x2350 = 5505930U;
	uint32_t x2352 = 5U;

	t78 = (x2349<=((x2350==x2351)>>x2352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2358 = 31;
	uint8_t x2360 = 4U;
	int32_t t79 = 9;

	t79 = (x2357<=((x2358==x2359)>>x2360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2390 = -1;
	uint8_t x2392 = 4U;
	static volatile int32_t t80 = -4086142;

	t80 = (x2389<=((x2390==x2391)>>x2392));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2461 = INT8_MAX;
	uint32_t x2462 = UINT32_MAX;
	uint16_t x2463 = UINT16_MAX;
	uint64_t x2464 = 0LLU;
	static volatile int32_t t81 = -122;

	t81 = (x2461<=((x2462==x2463)>>x2464));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2490 = -1;
	int16_t x2492 = 1;
	static volatile int32_t t82 = 273147;

	t82 = (x2489<=((x2490==x2491)>>x2492));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2497 = INT16_MIN;
	uint16_t x2498 = 2597U;
	uint32_t x2499 = UINT32_MAX;
	static uint16_t x2500 = 1U;

	t83 = (x2497<=((x2498==x2499)>>x2500));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2509 = -31007084;
	int8_t x2510 = -1;
	uint32_t x2511 = 292145U;
	volatile int32_t t84 = -461628;

	t84 = (x2509<=((x2510==x2511)>>x2512));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2581 = -288;
	static int8_t x2582 = INT8_MIN;
	int16_t x2583 = INT16_MAX;
	uint8_t x2584 = 1U;
	static volatile int32_t t85 = -2264079;

	t85 = (x2581<=((x2582==x2583)>>x2584));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2589 = INT8_MIN;
	uint16_t x2590 = 22U;
	int32_t x2591 = INT32_MIN;
	uint16_t x2592 = 5U;
	int32_t t86 = -15801296;

	t86 = (x2589<=((x2590==x2591)>>x2592));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x2605 = INT64_MIN;
	static int8_t x2606 = -1;
	int32_t x2607 = INT32_MAX;
	volatile int32_t t87 = -39527758;

	t87 = (x2605<=((x2606==x2607)>>x2608));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2645 = -1;
	int32_t x2646 = INT32_MIN;
	int16_t x2647 = INT16_MAX;
	uint8_t x2648 = 1U;
	volatile int32_t t88 = -2732497;

	t88 = (x2645<=((x2646==x2647)>>x2648));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2657 = INT8_MIN;
	int64_t x2658 = -1LL;
	uint8_t x2659 = UINT8_MAX;
	volatile uint8_t x2660 = 1U;
	int32_t t89 = -2281812;

	t89 = (x2657<=((x2658==x2659)>>x2660));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2733 = -1;
	int8_t x2734 = INT8_MAX;
	int64_t x2735 = INT64_MIN;
	int32_t t90 = -36686967;

	t90 = (x2733<=((x2734==x2735)>>x2736));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2750 = -1;
	int32_t x2751 = 62;
	uint8_t x2752 = 13U;
	volatile int32_t t91 = -4058;

	t91 = (x2749<=((x2750==x2751)>>x2752));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x2753 = 1426U;
	int32_t x2755 = -27304;
	uint8_t x2756 = 7U;

	t92 = (x2753<=((x2754==x2755)>>x2756));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x2784 = 6U;
	int32_t t93 = 8543;

	t93 = (x2781<=((x2782==x2783)>>x2784));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2825 = 49U;
	int16_t x2826 = 13;
	static uint32_t x2827 = 9U;
	uint16_t x2828 = 0U;
	volatile int32_t t94 = 3;

	t94 = (x2825<=((x2826==x2827)>>x2828));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2885 = 321715472LLU;
	int32_t x2886 = -1;
	int32_t t95 = -65;

	t95 = (x2885<=((x2886==x2887)>>x2888));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2913 = 51U;
	static volatile int64_t x2914 = -760LL;
	int8_t x2915 = INT8_MIN;
	uint16_t x2916 = 14U;

	t96 = (x2913<=((x2914==x2915)>>x2916));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2979 = -596;
	static int32_t t97 = 502006;

	t97 = (x2977<=((x2978==x2979)>>x2980));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3025 = INT16_MIN;
	int16_t x3026 = INT16_MIN;
	static volatile int16_t x3027 = INT16_MAX;
	int32_t x3028 = 1;

	t98 = (x3025<=((x3026==x3027)>>x3028));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3030 = INT16_MIN;
	static int64_t x3031 = 21610834994656857LL;
	int8_t x3032 = 1;
	volatile int32_t t99 = 3614492;

	t99 = (x3029<=((x3030==x3031)>>x3032));

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


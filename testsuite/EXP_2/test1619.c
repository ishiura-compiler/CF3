#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x42 = 126;
int8_t x91 = 7;
volatile int8_t x92 = 0;
static int32_t x133 = 21954185;
static int32_t x134 = -368;
uint16_t x136 = 1U;
int32_t t2 = 215870827;
int8_t x205 = -59;
volatile int8_t x318 = INT8_MIN;
int16_t x319 = -1;
static volatile int32_t t8 = 7791;
uint64_t x371 = UINT64_MAX;
volatile int32_t t10 = 11;
int8_t x441 = 1;
int32_t t11 = 1;
int32_t x464 = 3;
volatile int32_t t15 = 1;
volatile int8_t x557 = 27;
volatile int32_t t16 = -1;
volatile int32_t t17 = -13036916;
static volatile int8_t x594 = -1;
static uint32_t x679 = UINT32_MAX;
int8_t x719 = INT8_MIN;
uint8_t x720 = 1U;
static volatile int32_t t23 = -1228;
volatile int64_t x773 = -774055515126LL;
static int32_t x775 = INT32_MAX;
int32_t x862 = 339;
volatile uint8_t x935 = UINT8_MAX;
uint8_t x936 = 0U;
int8_t x952 = 16;
uint16_t x976 = 3U;
uint32_t x977 = 1219539899U;
int16_t x983 = 1;
int8_t x1096 = 22;
static int32_t x1097 = -323;
int64_t x1102 = INT64_MAX;
volatile int64_t x1125 = -1LL;
int8_t x1128 = 0;
static int32_t t36 = 722866;
int32_t t37 = 6;
static uint8_t x1177 = UINT8_MAX;
int32_t t38 = -65831131;
int32_t x1185 = 33899;
static int32_t t39 = 6;
int32_t x1241 = 44;
static uint16_t x1243 = UINT16_MAX;
volatile int16_t x1255 = INT16_MIN;
volatile int32_t t44 = 517321558;
uint64_t x1457 = 256LLU;
volatile int64_t x1467 = INT64_MAX;
int8_t x1468 = 1;
static volatile uint64_t x1483 = UINT64_MAX;
volatile uint16_t x1484 = 11U;
uint8_t x1532 = 2U;
static uint64_t x1545 = 22729472LLU;
uint32_t x1574 = UINT32_MAX;
volatile int32_t t52 = 21994093;
static uint32_t x1596 = 2U;
int32_t t54 = -12018246;
int64_t x1615 = INT64_MIN;
int16_t x1631 = -1;
int32_t t58 = 205077707;
uint8_t x1672 = 2U;
int32_t t59 = 113;
uint64_t x1833 = 21LLU;
int32_t t60 = 4147;
uint32_t x1865 = UINT32_MAX;
uint8_t x1868 = 23U;
uint8_t x1883 = UINT8_MAX;
int64_t x1911 = -1LL;
uint16_t x1926 = 864U;
static uint8_t x1927 = 1U;
uint8_t x1928 = 1U;
int8_t x1991 = INT8_MAX;
volatile int32_t x2093 = INT32_MIN;
int64_t x2115 = -54496976362LL;
int32_t t71 = 0;
uint16_t x2224 = 13U;
int32_t t74 = -1;
uint8_t x2237 = UINT8_MAX;
int16_t x2309 = INT16_MIN;
int8_t x2341 = INT8_MAX;
volatile int32_t t78 = 1332023;
int32_t x2390 = -1;
static uint16_t x2513 = UINT16_MAX;
uint32_t x2514 = 87U;
uint8_t x2516 = 0U;
volatile int32_t t80 = 196977685;
int16_t x2548 = 7;
int64_t x2553 = INT64_MIN;
uint64_t x2555 = UINT64_MAX;
uint8_t x2556 = 0U;
int64_t x2566 = 280836885809LL;
volatile int32_t t84 = 15;
static volatile int16_t x2621 = INT16_MIN;
static int32_t t85 = 1721399;
int8_t x2648 = 13;
uint16_t x2674 = 17500U;
uint16_t x2695 = 5U;
static volatile int16_t x2710 = -7;
volatile int32_t t89 = 15532;
int8_t x2713 = INT8_MAX;
int64_t x2718 = INT64_MIN;
volatile uint16_t x2764 = 0U;
uint16_t x2818 = UINT16_MAX;
int8_t x2837 = 23;
volatile int64_t x2897 = 10316451LL;


void f0(void) {
	int8_t x41 = INT8_MIN;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 6U;
	int32_t t0 = -15;

	t0 = ((x41==(x42<=x43))>>x44);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x89 = 52;
	uint8_t x90 = 14U;
	static volatile int32_t t1 = -15;

	t1 = ((x89==(x90<=x91))>>x92);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x135 = 2;

	t2 = ((x133==(x134<=x135))>>x136);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x149 = INT8_MIN;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = 1863;
	static int64_t x152 = 1LL;
	int32_t t3 = -54798873;

	t3 = ((x149==(x150<=x151))>>x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MAX;
	static uint16_t x179 = 206U;
	static uint8_t x180 = 12U;
	static volatile int32_t t4 = 44;

	t4 = ((x177==(x178<=x179))>>x180);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 218U;
	int32_t x187 = -1;
	static int8_t x188 = 4;
	volatile int32_t t5 = 41059;

	t5 = ((x185==(x186<=x187))>>x188);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x206 = -1LL;
	static int32_t x207 = INT32_MAX;
	int16_t x208 = 0;
	int32_t t6 = -1639;

	t6 = ((x205==(x206<=x207))>>x208);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x317 = -49;
	uint16_t x320 = 3U;
	static volatile int32_t t7 = -954;

	t7 = ((x317==(x318<=x319))>>x320);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x329 = -1LL;
	int8_t x330 = 1;
	static uint32_t x331 = 241U;
	volatile int16_t x332 = 0;

	t8 = ((x329==(x330<=x331))>>x332);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x369 = 5;
	int16_t x370 = -1;
	volatile int16_t x372 = 19;
	static volatile int32_t t9 = -1;

	t9 = ((x369==(x370<=x371))>>x372);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x433 = UINT16_MAX;
	int64_t x434 = INT64_MIN;
	static int8_t x435 = INT8_MIN;
	uint32_t x436 = 14U;

	t10 = ((x433==(x434<=x435))>>x436);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = -1;
	volatile int8_t x444 = 1;

	t11 = ((x441==(x442<=x443))>>x444);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x445 = 274435U;
	volatile int8_t x446 = INT8_MIN;
	uint8_t x447 = 15U;
	volatile int32_t x448 = 1;
	volatile int32_t t12 = -24258118;

	t12 = ((x445==(x446<=x447))>>x448);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x461 = 1U;
	int16_t x462 = -12734;
	int64_t x463 = 12181134398322LL;
	int32_t t13 = -24584918;

	t13 = ((x461==(x462<=x463))>>x464);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x521 = 14U;
	uint16_t x522 = 26288U;
	volatile int64_t x523 = INT64_MAX;
	volatile uint16_t x524 = 0U;
	static volatile int32_t t14 = -1692;

	t14 = ((x521==(x522<=x523))>>x524);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x533 = -1LL;
	int64_t x534 = INT64_MAX;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = 1;

	t15 = ((x533==(x534<=x535))>>x536);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x558 = INT32_MAX;
	static int16_t x559 = 532;
	static uint8_t x560 = 0U;

	t16 = ((x557==(x558<=x559))>>x560);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x573 = INT32_MIN;
	uint8_t x574 = 0U;
	int8_t x575 = INT8_MAX;
	uint8_t x576 = 2U;

	t17 = ((x573==(x574<=x575))>>x576);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x593 = UINT8_MAX;
	int16_t x595 = -14;
	uint16_t x596 = 1U;
	int32_t t18 = -3301;

	t18 = ((x593==(x594<=x595))>>x596);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x677 = UINT64_MAX;
	int8_t x678 = INT8_MIN;
	static uint32_t x680 = 7U;
	int32_t t19 = -204822;

	t19 = ((x677==(x678<=x679))>>x680);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x697 = UINT32_MAX;
	volatile int16_t x698 = -1557;
	static int32_t x699 = INT32_MAX;
	uint16_t x700 = 13U;
	volatile int32_t t20 = 0;

	t20 = ((x697==(x698<=x699))>>x700);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x701 = 427;
	uint32_t x702 = 1559420U;
	volatile int8_t x703 = INT8_MIN;
	static int8_t x704 = 3;
	volatile int32_t t21 = -129;

	t21 = ((x701==(x702<=x703))>>x704);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x717 = 72U;
	volatile int64_t x718 = INT64_MAX;
	int32_t t22 = 74;

	t22 = ((x717==(x718<=x719))>>x720);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x733 = 13U;
	uint16_t x734 = UINT16_MAX;
	int64_t x735 = 68008306707868629LL;
	static volatile int64_t x736 = 1LL;

	t23 = ((x733==(x734<=x735))>>x736);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x774 = 51561LLU;
	uint32_t x776 = 1U;
	int32_t t24 = 0;

	t24 = ((x773==(x774<=x775))>>x776);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x845 = 8636329U;
	int16_t x846 = 1;
	uint64_t x847 = 14172386609781921LLU;
	uint8_t x848 = 3U;
	static int32_t t25 = -129;

	t25 = ((x845==(x846<=x847))>>x848);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x861 = INT32_MIN;
	static int8_t x863 = INT8_MIN;
	volatile uint32_t x864 = 3U;
	static int32_t t26 = -7712976;

	t26 = ((x861==(x862<=x863))>>x864);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x933 = INT32_MIN;
	int32_t x934 = 108;
	static volatile int32_t t27 = 1061;

	t27 = ((x933==(x934<=x935))>>x936);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x949 = -1;
	int8_t x950 = -1;
	volatile int16_t x951 = INT16_MIN;
	int32_t t28 = 1;

	t28 = ((x949==(x950<=x951))>>x952);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x973 = INT16_MIN;
	static uint16_t x974 = 1U;
	int16_t x975 = 122;
	int32_t t29 = -41742454;

	t29 = ((x973==(x974<=x975))>>x976);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x978 = 98U;
	static uint64_t x979 = UINT64_MAX;
	static uint32_t x980 = 10U;
	volatile int32_t t30 = 181;

	t30 = ((x977==(x978<=x979))>>x980);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x981 = INT64_MAX;
	static int64_t x982 = 52318LL;
	int8_t x984 = 1;
	volatile int32_t t31 = 3658038;

	t31 = ((x981==(x982<=x983))>>x984);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1093 = 0U;
	int16_t x1094 = INT16_MIN;
	uint64_t x1095 = 990LLU;
	static int32_t t32 = 14354171;

	t32 = ((x1093==(x1094<=x1095))>>x1096);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1098 = INT32_MIN;
	uint32_t x1099 = 1280891831U;
	uint8_t x1100 = 5U;
	static volatile int32_t t33 = 238;

	t33 = ((x1097==(x1098<=x1099))>>x1100);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1101 = INT64_MIN;
	uint64_t x1103 = UINT64_MAX;
	static int8_t x1104 = 1;
	static volatile int32_t t34 = 325537;

	t34 = ((x1101==(x1102<=x1103))>>x1104);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x1126 = 19U;
	uint32_t x1127 = 484202U;
	volatile int32_t t35 = -16392;

	t35 = ((x1125==(x1126<=x1127))>>x1128);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1141 = UINT64_MAX;
	static int8_t x1142 = INT8_MIN;
	static int32_t x1143 = 804;
	volatile int16_t x1144 = 0;

	t36 = ((x1141==(x1142<=x1143))>>x1144);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1161 = 118869873654LLU;
	int8_t x1162 = -1;
	uint32_t x1163 = 1U;
	volatile int8_t x1164 = 1;

	t37 = ((x1161==(x1162<=x1163))>>x1164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1178 = UINT16_MAX;
	uint64_t x1179 = 5342247505675LLU;
	int8_t x1180 = 7;

	t38 = ((x1177==(x1178<=x1179))>>x1180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1186 = INT64_MIN;
	volatile int32_t x1187 = -15155723;
	int16_t x1188 = 14;

	t39 = ((x1185==(x1186<=x1187))>>x1188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1242 = UINT32_MAX;
	uint8_t x1244 = 29U;
	volatile int32_t t40 = -223977;

	t40 = ((x1241==(x1242<=x1243))>>x1244);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1253 = INT64_MIN;
	int16_t x1254 = -36;
	uint64_t x1256 = 3LLU;
	volatile int32_t t41 = 21930437;

	t41 = ((x1253==(x1254<=x1255))>>x1256);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1305 = INT8_MIN;
	volatile int16_t x1306 = 24;
	int32_t x1307 = -1773;
	uint8_t x1308 = 3U;
	int32_t t42 = 7990;

	t42 = ((x1305==(x1306<=x1307))>>x1308);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1333 = INT16_MIN;
	volatile uint8_t x1334 = 6U;
	int32_t x1335 = INT32_MIN;
	static uint8_t x1336 = 0U;
	volatile int32_t t43 = -52;

	t43 = ((x1333==(x1334<=x1335))>>x1336);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1353 = 18189410964LLU;
	volatile int32_t x1354 = INT32_MIN;
	uint64_t x1355 = 2072096849694657LLU;
	uint16_t x1356 = 3U;

	t44 = ((x1353==(x1354<=x1355))>>x1356);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1397 = 2U;
	uint16_t x1398 = 3U;
	static uint64_t x1399 = UINT64_MAX;
	int32_t x1400 = 0;
	static volatile int32_t t45 = 11485607;

	t45 = ((x1397==(x1398<=x1399))>>x1400);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1458 = 913097LLU;
	volatile uint16_t x1459 = UINT16_MAX;
	int16_t x1460 = 3;
	static volatile int32_t t46 = 12313;

	t46 = ((x1457==(x1458<=x1459))>>x1460);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1465 = 436;
	static int64_t x1466 = INT64_MIN;
	int32_t t47 = -32232;

	t47 = ((x1465==(x1466<=x1467))>>x1468);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1481 = 23U;
	int64_t x1482 = INT64_MIN;
	int32_t t48 = -112820;

	t48 = ((x1481==(x1482<=x1483))>>x1484);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1497 = -46;
	volatile int8_t x1498 = -1;
	volatile uint64_t x1499 = UINT64_MAX;
	volatile int16_t x1500 = 0;
	volatile int32_t t49 = -6;

	t49 = ((x1497==(x1498<=x1499))>>x1500);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1529 = 235808852U;
	int8_t x1530 = INT8_MAX;
	volatile uint8_t x1531 = 9U;
	volatile int32_t t50 = -1;

	t50 = ((x1529==(x1530<=x1531))>>x1532);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1546 = -24404163LL;
	uint16_t x1547 = UINT16_MAX;
	int64_t x1548 = 25LL;
	int32_t t51 = 1240031;

	t51 = ((x1545==(x1546<=x1547))>>x1548);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1573 = -1;
	int16_t x1575 = -1;
	static int8_t x1576 = 1;

	t52 = ((x1573==(x1574<=x1575))>>x1576);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1589 = -1;
	uint32_t x1590 = 68519U;
	volatile int8_t x1591 = -1;
	static int16_t x1592 = 3;
	static volatile int32_t t53 = -1;

	t53 = ((x1589==(x1590<=x1591))>>x1592);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1593 = -1;
	int32_t x1594 = -6220461;
	static uint32_t x1595 = 8U;

	t54 = ((x1593==(x1594<=x1595))>>x1596);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x1605 = -1;
	int16_t x1606 = 15;
	int32_t x1607 = 233938;
	uint16_t x1608 = 20U;
	int32_t t55 = 47;

	t55 = ((x1605==(x1606<=x1607))>>x1608);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1613 = INT8_MIN;
	static int64_t x1614 = -90420159246538LL;
	uint8_t x1616 = 27U;
	int32_t t56 = -44562;

	t56 = ((x1613==(x1614<=x1615))>>x1616);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1629 = -25;
	int8_t x1630 = INT8_MIN;
	int16_t x1632 = 2;
	volatile int32_t t57 = 252208078;

	t57 = ((x1629==(x1630<=x1631))>>x1632);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1637 = INT8_MAX;
	int32_t x1638 = 4;
	uint16_t x1639 = UINT16_MAX;
	uint64_t x1640 = 6LLU;

	t58 = ((x1637==(x1638<=x1639))>>x1640);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1669 = 2502U;
	uint32_t x1670 = 425675541U;
	int8_t x1671 = INT8_MAX;

	t59 = ((x1669==(x1670<=x1671))>>x1672);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1834 = 443;
	int8_t x1835 = -8;
	int16_t x1836 = 8;

	t60 = ((x1833==(x1834<=x1835))>>x1836);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1866 = 172;
	int16_t x1867 = -1;
	int32_t t61 = -9067399;

	t61 = ((x1865==(x1866<=x1867))>>x1868);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1877 = -1;
	volatile int8_t x1878 = INT8_MIN;
	static int64_t x1879 = INT64_MIN;
	uint8_t x1880 = 19U;
	int32_t t62 = -2227133;

	t62 = ((x1877==(x1878<=x1879))>>x1880);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1881 = INT64_MIN;
	int32_t x1882 = -7275;
	uint32_t x1884 = 9U;
	volatile int32_t t63 = 51693491;

	t63 = ((x1881==(x1882<=x1883))>>x1884);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1909 = -120501038LL;
	volatile int16_t x1910 = INT16_MIN;
	int16_t x1912 = 1;
	static volatile int32_t t64 = 28613495;

	t64 = ((x1909==(x1910<=x1911))>>x1912);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1925 = -1371947446470856596LL;
	volatile int32_t t65 = -16068315;

	t65 = ((x1925==(x1926<=x1927))>>x1928);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1961 = 26677LLU;
	uint64_t x1962 = 15827362709400LLU;
	volatile int16_t x1963 = INT16_MIN;
	static uint32_t x1964 = 1U;
	int32_t t66 = -8;

	t66 = ((x1961==(x1962<=x1963))>>x1964);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1977 = 302U;
	int64_t x1978 = INT64_MIN;
	int32_t x1979 = 0;
	uint8_t x1980 = 2U;
	volatile int32_t t67 = -3990;

	t67 = ((x1977==(x1978<=x1979))>>x1980);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x1989 = 176U;
	static volatile int64_t x1990 = -1LL;
	volatile uint8_t x1992 = 0U;
	static volatile int32_t t68 = 9023213;

	t68 = ((x1989==(x1990<=x1991))>>x1992);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2094 = INT8_MIN;
	uint64_t x2095 = 337LLU;
	uint16_t x2096 = 5U;
	volatile int32_t t69 = -96;

	t69 = ((x2093==(x2094<=x2095))>>x2096);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2113 = 417557352612592LLU;
	volatile int8_t x2114 = INT8_MIN;
	int16_t x2116 = 1;
	int32_t t70 = 0;

	t70 = ((x2113==(x2114<=x2115))>>x2116);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2161 = INT32_MIN;
	volatile uint64_t x2162 = 2LLU;
	int64_t x2163 = INT64_MIN;
	static uint8_t x2164 = 7U;

	t71 = ((x2161==(x2162<=x2163))>>x2164);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2177 = 14U;
	int32_t x2178 = INT32_MIN;
	static int32_t x2179 = INT32_MIN;
	uint8_t x2180 = 1U;
	volatile int32_t t72 = -10393;

	t72 = ((x2177==(x2178<=x2179))>>x2180);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x2189 = INT8_MIN;
	int8_t x2190 = INT8_MAX;
	int32_t x2191 = 148047;
	int16_t x2192 = 0;
	int32_t t73 = 2470859;

	t73 = ((x2189==(x2190<=x2191))>>x2192);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2221 = INT8_MAX;
	int64_t x2222 = 40818824LL;
	volatile uint16_t x2223 = 1702U;

	t74 = ((x2221==(x2222<=x2223))>>x2224);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2238 = 6987U;
	static int16_t x2239 = 4731;
	int32_t x2240 = 1;
	volatile int32_t t75 = -8442;

	t75 = ((x2237==(x2238<=x2239))>>x2240);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2310 = INT16_MIN;
	uint16_t x2311 = 10168U;
	uint8_t x2312 = 3U;
	int32_t t76 = -1919;

	t76 = ((x2309==(x2310<=x2311))>>x2312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2325 = INT64_MAX;
	static volatile uint64_t x2326 = UINT64_MAX;
	volatile uint16_t x2327 = 8836U;
	uint8_t x2328 = 1U;
	int32_t t77 = 41713;

	t77 = ((x2325==(x2326<=x2327))>>x2328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2342 = 6;
	static uint32_t x2343 = 1796597U;
	uint8_t x2344 = 13U;

	t78 = ((x2341==(x2342<=x2343))>>x2344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2389 = -1;
	int64_t x2391 = 19510LL;
	uint32_t x2392 = 1U;
	int32_t t79 = 216007900;

	t79 = ((x2389==(x2390<=x2391))>>x2392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2515 = INT64_MAX;

	t80 = ((x2513==(x2514<=x2515))>>x2516);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2545 = INT8_MIN;
	int8_t x2546 = INT8_MIN;
	int16_t x2547 = 591;
	int32_t t81 = -108417;

	t81 = ((x2545==(x2546<=x2547))>>x2548);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2549 = INT64_MIN;
	uint8_t x2550 = 2U;
	int64_t x2551 = 2LL;
	static int32_t x2552 = 0;
	volatile int32_t t82 = -60240573;

	t82 = ((x2549==(x2550<=x2551))>>x2552);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2554 = 10U;
	int32_t t83 = -64553;

	t83 = ((x2553==(x2554<=x2555))>>x2556);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2565 = INT16_MIN;
	uint32_t x2567 = 650U;
	volatile uint8_t x2568 = 0U;

	t84 = ((x2565==(x2566<=x2567))>>x2568);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2622 = UINT64_MAX;
	int64_t x2623 = INT64_MAX;
	uint8_t x2624 = 0U;

	t85 = ((x2621==(x2622<=x2623))>>x2624);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x2645 = INT16_MIN;
	int8_t x2646 = -22;
	static volatile uint8_t x2647 = 1U;
	int32_t t86 = 26885268;

	t86 = ((x2645==(x2646<=x2647))>>x2648);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2673 = 156U;
	volatile int8_t x2675 = -1;
	int8_t x2676 = 0;
	int32_t t87 = 894771;

	t87 = ((x2673==(x2674<=x2675))>>x2676);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2693 = INT16_MIN;
	int64_t x2694 = INT64_MAX;
	int8_t x2696 = 27;
	int32_t t88 = 42515872;

	t88 = ((x2693==(x2694<=x2695))>>x2696);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2709 = INT32_MAX;
	int8_t x2711 = INT8_MIN;
	int8_t x2712 = 3;

	t89 = ((x2709==(x2710<=x2711))>>x2712);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2714 = 687388U;
	int32_t x2715 = INT32_MAX;
	uint32_t x2716 = 4U;
	int32_t t90 = 3;

	t90 = ((x2713==(x2714<=x2715))>>x2716);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x2717 = 1U;
	int64_t x2719 = INT64_MIN;
	uint8_t x2720 = 1U;
	volatile int32_t t91 = 3817;

	t91 = ((x2717==(x2718<=x2719))>>x2720);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2753 = INT64_MAX;
	uint16_t x2754 = 347U;
	int64_t x2755 = INT64_MIN;
	static volatile uint16_t x2756 = 6U;
	static volatile int32_t t92 = -48785;

	t92 = ((x2753==(x2754<=x2755))>>x2756);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2761 = INT8_MIN;
	uint64_t x2762 = 8646279067LLU;
	int8_t x2763 = -1;
	static int32_t t93 = -46532642;

	t93 = ((x2761==(x2762<=x2763))>>x2764);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2817 = -3735LL;
	volatile int8_t x2819 = 44;
	uint8_t x2820 = 10U;
	int32_t t94 = -5886050;

	t94 = ((x2817==(x2818<=x2819))>>x2820);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x2833 = 40U;
	volatile int16_t x2834 = INT16_MAX;
	int32_t x2835 = -1;
	volatile int16_t x2836 = 5;
	int32_t t95 = -42835777;

	t95 = ((x2833==(x2834<=x2835))>>x2836);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x2838 = 649333105LLU;
	int8_t x2839 = INT8_MAX;
	int32_t x2840 = 0;
	volatile int32_t t96 = 52098874;

	t96 = ((x2837==(x2838<=x2839))>>x2840);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2853 = -1;
	int16_t x2854 = -1;
	uint8_t x2855 = UINT8_MAX;
	uint32_t x2856 = 13U;
	static int32_t t97 = -344;

	t97 = ((x2853==(x2854<=x2855))>>x2856);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2898 = INT16_MAX;
	int16_t x2899 = -27;
	int16_t x2900 = 17;
	volatile int32_t t98 = 189557;

	t98 = ((x2897==(x2898<=x2899))>>x2900);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2909 = -88319926;
	uint16_t x2910 = 3321U;
	int8_t x2911 = INT8_MIN;
	uint8_t x2912 = 1U;
	int32_t t99 = 0;

	t99 = ((x2909==(x2910<=x2911))>>x2912);

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


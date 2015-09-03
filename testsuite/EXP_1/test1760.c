#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x70 = -1;
uint8_t x71 = 12U;
volatile uint64_t t0 = 10081124772LLU;
uint32_t x139 = 0U;
volatile int16_t x140 = INT16_MIN;
static int8_t x172 = INT8_MIN;
int32_t t2 = -21666876;
uint16_t x210 = 15U;
static int64_t t4 = 32696LL;
int32_t x245 = INT32_MIN;
int32_t x246 = 800;
uint16_t x282 = 2U;
uint64_t x394 = UINT64_MAX;
int8_t x395 = 4;
int32_t x424 = INT32_MIN;
static uint16_t x527 = 0U;
int8_t x603 = 1;
static int16_t x665 = INT16_MAX;
uint8_t x668 = 3U;
int32_t t13 = -31940;
int64_t x682 = INT64_MIN;
volatile int32_t x684 = INT32_MIN;
int64_t x694 = 156LL;
uint64_t x729 = 1461418617819711737LLU;
volatile int32_t t19 = 6;
int32_t x797 = INT32_MIN;
int16_t x808 = INT16_MIN;
int8_t x851 = 22;
int16_t x881 = 1;
volatile int32_t x961 = 7;
uint32_t x962 = 1583282U;
volatile uint8_t x964 = 29U;
int64_t x993 = INT64_MIN;
uint32_t x995 = 7U;
int8_t x1009 = -1;
int64_t t28 = -376065960467437594LL;
uint8_t x1034 = UINT8_MAX;
int8_t x1111 = 0;
int16_t x1129 = 0;
int64_t x1141 = INT64_MIN;
uint16_t x1144 = 1360U;
uint8_t x1159 = 0U;
volatile int64_t x1202 = -719012551607LL;
volatile int32_t x1204 = INT32_MIN;
int32_t x1211 = 0;
volatile int32_t x1241 = INT32_MAX;
static volatile uint64_t t37 = 13644766546LLU;
int16_t x1294 = INT16_MIN;
volatile int8_t x1295 = 3;
volatile int32_t x1326 = INT32_MAX;
uint32_t x1355 = 7U;
static uint16_t x1356 = UINT16_MAX;
int64_t t41 = 5293681LL;
volatile int64_t t42 = -2055358LL;
volatile uint8_t x1505 = UINT8_MAX;
volatile int32_t x1506 = 4;
int32_t t43 = 2;
static uint32_t x1641 = 30276453U;
volatile int8_t x1642 = INT8_MAX;
int32_t x1649 = INT32_MAX;
uint32_t x1652 = 97353737U;
static uint64_t t47 = 149276324575985376LLU;
int32_t x1725 = 1;
static int8_t x1727 = 3;
volatile uint8_t x1895 = 25U;
static uint32_t x1896 = 11905977U;
int8_t x1919 = 3;
volatile int8_t x1920 = INT8_MIN;
volatile int32_t t52 = -505873216;
uint8_t x1960 = 11U;
uint64_t t53 = 1438LLU;
volatile int64_t x1968 = -1012673LL;
static volatile int64_t x2008 = INT64_MIN;
uint8_t x2071 = 1U;
static int32_t x2072 = INT32_MAX;
uint8_t x2112 = 1U;
volatile int64_t x2261 = -1LL;
int16_t x2264 = -19;
volatile int64_t x2266 = 243059095912478LL;
int16_t x2307 = 1;
volatile int32_t t63 = 2473528;
static int64_t x2348 = INT64_MIN;
int64_t t64 = 6394LL;
uint32_t x2506 = 0U;
int64_t t66 = -57004772151LL;
int8_t x2534 = -1;
uint32_t x2535 = 9U;
volatile int8_t x2554 = INT8_MAX;
static int64_t x2589 = -781801909153775LL;
uint32_t t70 = 489919U;
int32_t x2635 = 1;
volatile int64_t t72 = 5582431LL;
int64_t t76 = -198718380122703LL;
uint8_t x3010 = UINT8_MAX;
uint8_t x3021 = 27U;
volatile uint16_t x3171 = 1U;
int32_t x3205 = 829786;
static int16_t x3206 = 11;
uint16_t x3207 = 11U;
int32_t x3208 = 363;
uint16_t x3294 = 382U;
uint32_t x3306 = 22746655U;
volatile int32_t x3307 = 1;
volatile int32_t x3419 = 1;
uint16_t x3420 = UINT16_MAX;
uint32_t x3430 = 27508U;
static uint64_t x3556 = UINT64_MAX;
static int8_t x3581 = INT8_MAX;
volatile int64_t x3598 = -1LL;
uint8_t x3599 = 0U;
volatile int64_t t97 = 232LL;
int16_t x3633 = -9561;
volatile int16_t x3636 = INT16_MAX;
volatile int8_t x3639 = 0;


void f0(void) {
	static uint64_t x69 = 7LLU;
	int32_t x72 = INT32_MIN;

	t0 = (((x69&x70)<<x71)%x72);

	if (t0 != 28672LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x137 = -13;
	uint64_t x138 = 27107196337LLU;
	volatile uint64_t t1 = 11876LLU;

	t1 = (((x137&x138)<<x139)%x140);

	if (t1 != 27107196337LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x169 = 1406;
	uint8_t x170 = 2U;
	volatile int32_t x171 = 1;

	t2 = (((x169&x170)<<x171)%x172);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x209 = 5;
	uint8_t x211 = 0U;
	uint32_t x212 = 141118534U;
	uint32_t t3 = 1365218U;

	t3 = (((x209&x210)<<x211)%x212);

	if (t3 != 5U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = 3212214216129LL;
	volatile uint8_t x227 = 1U;
	volatile int16_t x228 = INT16_MIN;

	t4 = (((x225&x226)<<x227)%x228);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x247 = 1;
	int8_t x248 = 1;
	volatile int32_t t5 = 4686394;

	t5 = (((x245&x246)<<x247)%x248);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x281 = INT32_MAX;
	static uint8_t x283 = 0U;
	volatile int8_t x284 = -1;
	static volatile int32_t t6 = 494;

	t6 = (((x281&x282)<<x283)%x284);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x393 = INT32_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t7 = 1313240363888LLU;

	t7 = (((x393&x394)<<x395)%x396);

	if (t7 != 65527LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x421 = INT32_MIN;
	static volatile int32_t x422 = 120187818;
	static uint8_t x423 = 1U;
	int32_t t8 = -9358247;

	t8 = (((x421&x422)<<x423)%x424);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x433 = 3616830280927297535LLU;
	volatile uint16_t x434 = UINT16_MAX;
	uint16_t x435 = 20U;
	int64_t x436 = -1LL;
	static volatile uint64_t t9 = 9147627179LLU;

	t9 = (((x433&x434)<<x435)%x436);

	if (t9 != 17178820608LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x525 = 9;
	int32_t x526 = -1;
	static int32_t x528 = -55;
	volatile int32_t t10 = -975;

	t10 = (((x525&x526)<<x527)%x528);

	if (t10 != 9) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x601 = -1;
	volatile uint16_t x602 = 5910U;
	int64_t x604 = INT64_MAX;
	static volatile int64_t t11 = -27LL;

	t11 = (((x601&x602)<<x603)%x604);

	if (t11 != 11820LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x637 = INT16_MIN;
	static volatile uint16_t x638 = 130U;
	static uint8_t x639 = 5U;
	int32_t x640 = -74;
	int32_t t12 = 5000160;

	t12 = (((x637&x638)<<x639)%x640);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x666 = -1;
	int32_t x667 = 1;

	t13 = (((x665&x666)<<x667)%x668);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x673 = INT64_MAX;
	int64_t x674 = INT64_MIN;
	static uint8_t x675 = 13U;
	uint64_t x676 = 56LLU;
	volatile uint64_t t14 = 69437589962907LLU;

	t14 = (((x673&x674)<<x675)%x676);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x681 = INT64_MAX;
	volatile int32_t x683 = 49;
	volatile int64_t t15 = -208LL;

	t15 = (((x681&x682)<<x683)%x684);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x693 = 14;
	static uint8_t x695 = 0U;
	uint16_t x696 = UINT16_MAX;
	int64_t t16 = -8501360935501507LL;

	t16 = (((x693&x694)<<x695)%x696);

	if (t16 != 12LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x709 = UINT32_MAX;
	volatile int32_t x710 = -1;
	uint8_t x711 = 12U;
	static int8_t x712 = INT8_MIN;
	uint32_t t17 = 123245684U;

	t17 = (((x709&x710)<<x711)%x712);

	if (t17 != 4294963200U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x730 = -30;
	static volatile int8_t x731 = 1;
	int32_t x732 = -1;
	static uint64_t t18 = 43183054583948932LLU;

	t18 = (((x729&x730)<<x731)%x732);

	if (t18 != 2922837235639423424LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x793 = UINT8_MAX;
	int32_t x794 = INT32_MAX;
	volatile uint16_t x795 = 6U;
	uint16_t x796 = 15701U;

	t19 = (((x793&x794)<<x795)%x796);

	if (t19 != 619) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x798 = 95U;
	volatile int8_t x799 = 4;
	volatile uint64_t x800 = 4LLU;
	static uint64_t t20 = 11657591LLU;

	t20 = (((x797&x798)<<x799)%x800);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x805 = 13LL;
	int16_t x806 = INT16_MIN;
	uint8_t x807 = 0U;
	volatile int64_t t21 = 45433LL;

	t21 = (((x805&x806)<<x807)%x808);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x809 = UINT8_MAX;
	volatile int16_t x810 = INT16_MIN;
	volatile uint16_t x811 = 1U;
	static uint64_t x812 = UINT64_MAX;
	static uint64_t t22 = 1615LLU;

	t22 = (((x809&x810)<<x811)%x812);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x849 = 1228U;
	volatile int8_t x850 = INT8_MIN;
	uint32_t x852 = UINT32_MAX;
	uint32_t t23 = 168052U;

	t23 = (((x849&x850)<<x851)%x852);

	if (t23 != 536870912U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x882 = 3075214670321051213LLU;
	uint64_t x883 = 0LLU;
	int32_t x884 = INT32_MIN;
	uint64_t t24 = 6990036674964LLU;

	t24 = (((x881&x882)<<x883)%x884);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x963 = 0U;
	static volatile uint32_t t25 = 148247087U;

	t25 = (((x961&x962)<<x963)%x964);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x994 = INT32_MAX;
	static int8_t x996 = INT8_MIN;
	volatile int64_t t26 = -20783663701LL;

	t26 = (((x993&x994)<<x995)%x996);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x997 = -1LL;
	uint8_t x998 = 10U;
	int64_t x999 = 5LL;
	uint64_t x1000 = 282152425655345348LLU;
	volatile uint64_t t27 = 7113219114039874376LLU;

	t27 = (((x997&x998)<<x999)%x1000);

	if (t27 != 320LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1010 = 51U;
	int8_t x1011 = 19;
	int64_t x1012 = -1LL;

	t28 = (((x1009&x1010)<<x1011)%x1012);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1033 = -5265;
	int8_t x1035 = 12;
	static int8_t x1036 = INT8_MAX;
	volatile int32_t t29 = 8689523;

	t29 = (((x1033&x1034)<<x1035)%x1036);

	if (t29 != 123) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1105 = 998634301;
	int64_t x1106 = INT64_MAX;
	uint8_t x1107 = 29U;
	uint32_t x1108 = 237U;
	int64_t t30 = 265322866410136LL;

	t30 = (((x1105&x1106)<<x1107)%x1108);

	if (t30 != 197LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1109 = 2747U;
	int8_t x1110 = -1;
	uint8_t x1112 = 57U;
	static volatile uint32_t t31 = 59906U;

	t31 = (((x1109&x1110)<<x1111)%x1112);

	if (t31 != 11U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1130 = INT8_MAX;
	int8_t x1131 = 2;
	uint8_t x1132 = 102U;
	volatile int32_t t32 = -2;

	t32 = (((x1129&x1130)<<x1131)%x1132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1142 = UINT8_MAX;
	int64_t x1143 = 0LL;
	volatile int64_t t33 = -12LL;

	t33 = (((x1141&x1142)<<x1143)%x1144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1157 = -1LL;
	volatile uint32_t x1158 = 0U;
	int16_t x1160 = 3877;
	volatile int64_t t34 = 917195364504LL;

	t34 = (((x1157&x1158)<<x1159)%x1160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1201 = 10U;
	volatile int8_t x1203 = 13;
	volatile int64_t t35 = -702LL;

	t35 = (((x1201&x1202)<<x1203)%x1204);

	if (t35 != 65536LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1209 = -348972LL;
	volatile uint32_t x1210 = 2602203U;
	static volatile int8_t x1212 = INT8_MIN;
	volatile int64_t t36 = 3457558962457LL;

	t36 = (((x1209&x1210)<<x1211)%x1212);

	if (t36 != 80LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1242 = INT16_MAX;
	volatile uint8_t x1243 = 13U;
	volatile uint64_t x1244 = 601661220697LLU;

	t37 = (((x1241&x1242)<<x1243)%x1244);

	if (t37 != 268427264LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1293 = 85394785;
	uint16_t x1296 = UINT16_MAX;
	static int32_t t38 = 44;

	t38 = (((x1293&x1294)<<x1295)%x1296);

	if (t38 != 10424) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1325 = INT32_MIN;
	int64_t x1327 = 7LL;
	int8_t x1328 = INT8_MIN;
	int32_t t39 = -154;

	t39 = (((x1325&x1326)<<x1327)%x1328);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1353 = INT8_MAX;
	uint64_t x1354 = 20214LLU;
	volatile uint64_t t40 = 1LLU;

	t40 = (((x1353&x1354)<<x1355)%x1356);

	if (t40 != 15104LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1441 = INT32_MIN;
	static int64_t x1442 = 14LL;
	int16_t x1443 = 27;
	uint16_t x1444 = 3966U;

	t41 = (((x1441&x1442)<<x1443)%x1444);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1477 = 822LL;
	int8_t x1478 = -1;
	volatile uint8_t x1479 = 3U;
	uint16_t x1480 = UINT16_MAX;

	t42 = (((x1477&x1478)<<x1479)%x1480);

	if (t42 != 6576LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1507 = 0U;
	int8_t x1508 = INT8_MIN;

	t43 = (((x1505&x1506)<<x1507)%x1508);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1621 = INT8_MIN;
	uint16_t x1622 = 514U;
	static uint16_t x1623 = 0U;
	uint16_t x1624 = 2U;
	int32_t t44 = -157091860;

	t44 = (((x1621&x1622)<<x1623)%x1624);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1643 = 0;
	int64_t x1644 = INT64_MAX;
	volatile int64_t t45 = 240010LL;

	t45 = (((x1641&x1642)<<x1643)%x1644);

	if (t45 != 101LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1650 = 3911U;
	int8_t x1651 = 1;
	uint32_t t46 = 196U;

	t46 = (((x1649&x1650)<<x1651)%x1652);

	if (t46 != 7822U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1713 = INT16_MAX;
	volatile int8_t x1714 = -1;
	int32_t x1715 = 13;
	static uint64_t x1716 = 161434369545LLU;

	t47 = (((x1713&x1714)<<x1715)%x1716);

	if (t47 != 268427264LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1721 = -334338;
	uint32_t x1722 = 97122U;
	static uint8_t x1723 = 0U;
	int16_t x1724 = -9;
	uint32_t t48 = 426831U;

	t48 = (((x1721&x1722)<<x1723)%x1724);

	if (t48 != 24930U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1726 = INT8_MAX;
	volatile int16_t x1728 = 3495;
	volatile int32_t t49 = 1;

	t49 = (((x1725&x1726)<<x1727)%x1728);

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1745 = INT8_MIN;
	volatile uint64_t x1746 = 14833563338934LLU;
	int32_t x1747 = 1;
	volatile int8_t x1748 = INT8_MIN;
	static uint64_t t50 = 146733458LLU;

	t50 = (((x1745&x1746)<<x1747)%x1748);

	if (t50 != 29667126677760LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1893 = INT16_MAX;
	volatile int64_t x1894 = -4996901730516LL;
	volatile int64_t t51 = 18202497306994LL;

	t51 = (((x1893&x1894)<<x1895)%x1896);

	if (t51 != 4412154LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1917 = INT8_MIN;
	uint16_t x1918 = 0U;

	t52 = (((x1917&x1918)<<x1919)%x1920);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1957 = 91055625651223LLU;
	int32_t x1958 = -1;
	uint16_t x1959 = 3U;

	t53 = (((x1957&x1958)<<x1959)%x1960);

	if (t53 != 5LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1965 = INT32_MIN;
	volatile uint16_t x1966 = 8041U;
	volatile int16_t x1967 = 19;
	volatile int64_t t54 = -303788LL;

	t54 = (((x1965&x1966)<<x1967)%x1968);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2005 = INT64_MAX;
	uint16_t x2006 = UINT16_MAX;
	static uint16_t x2007 = 1U;
	int64_t t55 = 16LL;

	t55 = (((x2005&x2006)<<x2007)%x2008);

	if (t55 != 131070LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2049 = -1LL;
	volatile int16_t x2050 = INT16_MAX;
	uint8_t x2051 = 24U;
	int16_t x2052 = INT16_MIN;
	int64_t t56 = -24283103844092035LL;

	t56 = (((x2049&x2050)<<x2051)%x2052);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2069 = UINT16_MAX;
	static volatile int8_t x2070 = INT8_MIN;
	static volatile int32_t t57 = 0;

	t57 = (((x2069&x2070)<<x2071)%x2072);

	if (t57 != 130816) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x2109 = 45LL;
	int64_t x2110 = INT64_MIN;
	static uint32_t x2111 = 6U;
	int64_t t58 = 201802032782062196LL;

	t58 = (((x2109&x2110)<<x2111)%x2112);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2137 = 126878U;
	int64_t x2138 = INT64_MAX;
	volatile int16_t x2139 = 1;
	uint64_t x2140 = 5067069LLU;
	uint64_t t59 = 113461252LLU;

	t59 = (((x2137&x2138)<<x2139)%x2140);

	if (t59 != 253756LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2157 = -1;
	volatile int16_t x2158 = INT16_MAX;
	int8_t x2159 = 2;
	uint64_t x2160 = UINT64_MAX;
	uint64_t t60 = 8093123036LLU;

	t60 = (((x2157&x2158)<<x2159)%x2160);

	if (t60 != 131068LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2262 = 1LLU;
	uint8_t x2263 = 1U;
	uint64_t t61 = 3772998442250LLU;

	t61 = (((x2261&x2262)<<x2263)%x2264);

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2265 = INT32_MAX;
	volatile int8_t x2267 = 3;
	static int64_t x2268 = -25578125LL;
	volatile int64_t t62 = 107LL;

	t62 = (((x2265&x2266)<<x2267)%x2268);

	if (t62 != 1353402LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2305 = INT32_MAX;
	static int8_t x2306 = 34;
	int32_t x2308 = 315327460;

	t63 = (((x2305&x2306)<<x2307)%x2308);

	if (t63 != 68) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2345 = 12431334;
	int16_t x2346 = INT16_MAX;
	uint32_t x2347 = 0U;

	t64 = (((x2345&x2346)<<x2347)%x2348);

	if (t64 != 12262LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2485 = INT64_MIN;
	volatile uint32_t x2486 = 2433701U;
	static uint16_t x2487 = 19U;
	volatile uint64_t x2488 = 455111054271827810LLU;
	uint64_t t65 = 4469557624227987024LLU;

	t65 = (((x2485&x2486)<<x2487)%x2488);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2505 = -1LL;
	static uint32_t x2507 = 4U;
	int32_t x2508 = INT32_MIN;

	t66 = (((x2505&x2506)<<x2507)%x2508);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x2533 = 0;
	int32_t x2536 = INT32_MIN;
	volatile int32_t t67 = 0;

	t67 = (((x2533&x2534)<<x2535)%x2536);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2553 = INT64_MIN;
	uint8_t x2555 = 0U;
	int32_t x2556 = INT32_MAX;
	static volatile int64_t t68 = 283882966025LL;

	t68 = (((x2553&x2554)<<x2555)%x2556);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2590 = 49U;
	uint16_t x2591 = 33U;
	int8_t x2592 = INT8_MIN;
	static volatile int64_t t69 = 2420606972LL;

	t69 = (((x2589&x2590)<<x2591)%x2592);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2593 = UINT32_MAX;
	volatile int8_t x2594 = INT8_MIN;
	uint16_t x2595 = 5U;
	int8_t x2596 = INT8_MAX;

	t70 = (((x2593&x2594)<<x2595)%x2596);

	if (t70 != 111U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x2633 = 13U;
	uint64_t x2634 = UINT64_MAX;
	int16_t x2636 = INT16_MIN;
	uint64_t t71 = 12962565348630LLU;

	t71 = (((x2633&x2634)<<x2635)%x2636);

	if (t71 != 26LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2653 = INT32_MAX;
	int64_t x2654 = INT64_MAX;
	int8_t x2655 = 13;
	volatile int16_t x2656 = INT16_MIN;

	t72 = (((x2653&x2654)<<x2655)%x2656);

	if (t72 != 24576LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2661 = 2951773LLU;
	uint32_t x2662 = 14100310U;
	int32_t x2663 = 11;
	static int64_t x2664 = 186551972430LL;
	uint64_t t73 = 9085140247LLU;

	t73 = (((x2661&x2662)<<x2663)%x2664);

	if (t73 != 672309248LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2801 = 94U;
	uint64_t x2802 = 1LLU;
	static int32_t x2803 = 11;
	int32_t x2804 = INT32_MAX;
	uint64_t t74 = 6LLU;

	t74 = (((x2801&x2802)<<x2803)%x2804);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2841 = 950860695220395685LL;
	static uint16_t x2842 = 6658U;
	int16_t x2843 = 0;
	int64_t x2844 = -1LL;
	volatile int64_t t75 = 70918190701540LL;

	t75 = (((x2841&x2842)<<x2843)%x2844);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2849 = 5U;
	uint16_t x2850 = 16U;
	uint16_t x2851 = 2U;
	int64_t x2852 = -1LL;

	t76 = (((x2849&x2850)<<x2851)%x2852);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2869 = INT16_MIN;
	volatile uint32_t x2870 = 14094U;
	volatile uint8_t x2871 = 23U;
	int16_t x2872 = INT16_MIN;
	volatile uint32_t t77 = 501577U;

	t77 = (((x2869&x2870)<<x2871)%x2872);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2941 = -1923954710899135737LL;
	int64_t x2942 = 2044103LL;
	static uint16_t x2943 = 0U;
	uint64_t x2944 = UINT64_MAX;
	volatile uint64_t t78 = 147LLU;

	t78 = (((x2941&x2942)<<x2943)%x2944);

	if (t78 != 663559LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2945 = INT32_MAX;
	uint8_t x2946 = UINT8_MAX;
	uint8_t x2947 = 12U;
	int8_t x2948 = INT8_MIN;
	volatile int32_t t79 = -351974163;

	t79 = (((x2945&x2946)<<x2947)%x2948);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3009 = INT8_MIN;
	int16_t x3011 = 5;
	static int8_t x3012 = -22;
	int32_t t80 = -55881447;

	t80 = (((x3009&x3010)<<x3011)%x3012);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x3022 = 12U;
	uint16_t x3023 = 3U;
	int64_t x3024 = -9411208249LL;
	volatile int64_t t81 = -2076669LL;

	t81 = (((x3021&x3022)<<x3023)%x3024);

	if (t81 != 64LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x3109 = INT32_MAX;
	uint8_t x3110 = 1U;
	volatile uint16_t x3111 = 1U;
	static uint64_t x3112 = UINT64_MAX;
	uint64_t t82 = 31953150LLU;

	t82 = (((x3109&x3110)<<x3111)%x3112);

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3169 = -1;
	uint32_t x3170 = UINT32_MAX;
	int16_t x3172 = -1;
	uint32_t t83 = 564150138U;

	t83 = (((x3169&x3170)<<x3171)%x3172);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t t84 = -7;

	t84 = (((x3205&x3206)<<x3207)%x3208);

	if (t84 != 152) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x3277 = 1U;
	int64_t x3278 = INT64_MIN;
	int16_t x3279 = 50;
	int16_t x3280 = 3;
	volatile int64_t t85 = -14194259LL;

	t85 = (((x3277&x3278)<<x3279)%x3280);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3293 = INT32_MIN;
	uint8_t x3295 = 1U;
	volatile int64_t x3296 = -894822848LL;
	static int64_t t86 = 6LL;

	t86 = (((x3293&x3294)<<x3295)%x3296);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3305 = 1438573795LL;
	uint16_t x3308 = UINT16_MAX;
	int64_t t87 = 177942942617LL;

	t87 = (((x3305&x3306)<<x3307)%x3308);

	if (t87 != 2618LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3341 = 87276135293115LLU;
	volatile uint8_t x3342 = 0U;
	int8_t x3343 = 17;
	static uint16_t x3344 = 462U;
	uint64_t t88 = 1957396LLU;

	t88 = (((x3341&x3342)<<x3343)%x3344);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3401 = INT32_MIN;
	volatile uint16_t x3402 = 4U;
	uint32_t x3403 = 14U;
	static volatile int32_t x3404 = INT32_MAX;
	volatile int32_t t89 = 0;

	t89 = (((x3401&x3402)<<x3403)%x3404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3413 = -1;
	static volatile uint64_t x3414 = 10800LLU;
	int8_t x3415 = 26;
	uint32_t x3416 = 16U;
	volatile uint64_t t90 = 4LLU;

	t90 = (((x3413&x3414)<<x3415)%x3416);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3417 = -1;
	uint64_t x3418 = 1211879053894LLU;
	static uint64_t t91 = 953687LLU;

	t91 = (((x3417&x3418)<<x3419)%x3420);

	if (t91 != 2558LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x3429 = UINT8_MAX;
	uint32_t x3431 = 1U;
	uint8_t x3432 = 2U;
	uint32_t t92 = 248906574U;

	t92 = (((x3429&x3430)<<x3431)%x3432);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3521 = INT32_MAX;
	int64_t x3522 = INT64_MIN;
	uint8_t x3523 = 1U;
	static volatile int32_t x3524 = -21029;
	static int64_t t93 = -167414924978214LL;

	t93 = (((x3521&x3522)<<x3523)%x3524);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x3553 = 1;
	static int16_t x3554 = -2;
	int8_t x3555 = 31;
	volatile uint64_t t94 = 2165671LLU;

	t94 = (((x3553&x3554)<<x3555)%x3556);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3582 = -1;
	uint8_t x3583 = 24U;
	int8_t x3584 = -1;
	static int32_t t95 = 0;

	t95 = (((x3581&x3582)<<x3583)%x3584);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3597 = 1;
	int32_t x3600 = INT32_MIN;
	volatile int64_t t96 = 29155LL;

	t96 = (((x3597&x3598)<<x3599)%x3600);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3617 = INT64_MIN;
	static uint8_t x3618 = 42U;
	uint8_t x3619 = 1U;
	static int8_t x3620 = INT8_MIN;

	t97 = (((x3617&x3618)<<x3619)%x3620);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x3634 = 1;
	static int16_t x3635 = 10;
	int32_t t98 = -161566433;

	t98 = (((x3633&x3634)<<x3635)%x3636);

	if (t98 != 1024) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3637 = INT8_MIN;
	uint8_t x3638 = UINT8_MAX;
	uint64_t x3640 = 91256150087985449LLU;
	volatile uint64_t t99 = 1594616720505LLU;

	t99 = (((x3637&x3638)<<x3639)%x3640);

	if (t99 != 128LLU) { NG(); } else { ; }
	
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


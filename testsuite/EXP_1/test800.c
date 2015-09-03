#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x57 = 10U;
uint8_t x72 = 11U;
static int8_t x203 = INT8_MIN;
volatile int32_t t3 = -63964775;
int8_t x208 = 1;
int8_t x214 = INT8_MIN;
uint16_t x265 = UINT16_MAX;
uint8_t x268 = 1U;
volatile int32_t t7 = 3751537;
int16_t x357 = INT16_MIN;
static int32_t x358 = INT32_MIN;
volatile uint64_t x360 = 2LLU;
uint8_t x380 = 7U;
uint16_t x409 = UINT16_MAX;
int64_t x411 = -1LL;
static int32_t x422 = INT32_MAX;
volatile int8_t x465 = INT8_MAX;
static uint8_t x466 = UINT8_MAX;
uint8_t x468 = 12U;
int64_t x553 = INT64_MAX;
int8_t x554 = -1;
static volatile int32_t t17 = -6;
int32_t t18 = 11;
uint32_t x665 = UINT32_MAX;
uint64_t x666 = 218LLU;
static uint16_t x668 = 15U;
static volatile int32_t t20 = 150;
int8_t x669 = -7;
uint32_t x699 = 1985061U;
volatile uint32_t x732 = 22U;
static uint64_t x749 = 182217LLU;
volatile uint8_t x801 = UINT8_MAX;
volatile int16_t x802 = -1;
static int32_t x803 = 4714200;
int8_t x880 = 0;
static uint64_t x930 = UINT64_MAX;
uint16_t x944 = 14U;
volatile int32_t t30 = -48405;
static int64_t x949 = INT64_MAX;
uint16_t x951 = 468U;
int8_t x999 = 6;
uint32_t x1011 = UINT32_MAX;
int8_t x1012 = 0;
static int64_t x1038 = -1LL;
uint8_t x1039 = 3U;
int32_t x1111 = INT32_MIN;
int32_t x1122 = -1;
uint64_t x1218 = UINT64_MAX;
int8_t x1245 = INT8_MAX;
int8_t x1247 = INT8_MIN;
int32_t x1265 = -8066;
int64_t x1266 = INT64_MIN;
volatile uint16_t x1479 = 1307U;
static uint64_t x1543 = 375277298LLU;
static int16_t x1558 = -1;
uint16_t x1559 = 250U;
volatile int32_t t48 = 2091487;
static int64_t x1581 = INT64_MIN;
volatile uint64_t x1613 = 703712256470250616LLU;
uint8_t x1615 = UINT8_MAX;
volatile int32_t t50 = 1;
int64_t x1681 = -1LL;
static int64_t x1682 = INT64_MAX;
volatile int32_t x1683 = INT32_MAX;
uint64_t x1704 = 1LLU;
static volatile int32_t t53 = 5197843;
int64_t x1738 = -1LL;
int32_t x1748 = 21;
static volatile int32_t t55 = -2350337;
uint32_t x1757 = 260094U;
static int8_t x1760 = 6;
volatile int32_t t56 = 33517009;
static uint64_t x1797 = 245LLU;
int32_t t57 = 0;
uint8_t x1812 = 2U;
int16_t x2020 = 1;
volatile int32_t t60 = 4484;
uint16_t x2056 = 22U;
int32_t t61 = 205;
int32_t t63 = 0;
uint32_t x2332 = 15U;
volatile int32_t t66 = 4112292;
uint16_t x2424 = 13U;
uint8_t x2484 = 8U;
volatile int64_t x2493 = 560875214708LL;
static int32_t x2494 = 4645713;
static int8_t x2510 = -1;
int16_t x2546 = INT16_MIN;
uint32_t x2586 = 7U;
uint32_t x2587 = UINT32_MAX;
uint32_t x2681 = 229178456U;
int8_t x2695 = INT8_MAX;
static int16_t x2718 = -7252;
uint16_t x2760 = 11U;
int64_t x2846 = INT64_MAX;
int32_t x2903 = -1;
volatile int32_t t81 = 2726;
volatile int8_t x2906 = -1;
int8_t x2908 = 0;
static uint32_t x3025 = UINT32_MAX;
static int32_t x3027 = INT32_MAX;
uint8_t x3028 = 3U;
volatile int32_t t84 = 1334628;
volatile int32_t t86 = -157023;
uint32_t x3059 = 1U;
uint16_t x3085 = 17U;
int16_t x3201 = INT16_MAX;
volatile int16_t x3203 = -1071;
volatile int32_t t92 = 11726;
volatile int32_t t94 = 1434;
volatile int32_t x3256 = 1;
int32_t t95 = 54299110;
uint8_t x3380 = 6U;
int64_t x3390 = INT64_MIN;
int64_t x3434 = -2477640187LL;


void f0(void) {
	int32_t x53 = 25;
	uint8_t x54 = 29U;
	static volatile int16_t x55 = INT16_MAX;
	uint8_t x56 = 1U;
	int32_t t0 = 756927;

	t0 = (((x53%x54)<=x55)>>x56);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x58 = 1776151291945586353LLU;
	static int8_t x59 = 25;
	uint16_t x60 = 9U;
	static int32_t t1 = 91620285;

	t1 = (((x57%x58)<=x59)>>x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x69 = INT8_MIN;
	uint8_t x70 = 18U;
	int16_t x71 = -4;
	static int32_t t2 = -117953;

	t2 = (((x69%x70)<=x71)>>x72);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x201 = -1;
	int32_t x202 = -1;
	int8_t x204 = 0;

	t3 = (((x201%x202)<=x203)>>x204);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x205 = UINT64_MAX;
	int64_t x206 = -27535600LL;
	static int64_t x207 = -1LL;
	static volatile int32_t t4 = -39085162;

	t4 = (((x205%x206)<=x207)>>x208);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x213 = UINT32_MAX;
	int64_t x215 = -2130647023399LL;
	uint32_t x216 = 0U;
	volatile int32_t t5 = 0;

	t5 = (((x213%x214)<=x215)>>x216);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x245 = INT32_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint8_t x248 = 6U;
	int32_t t6 = -1;

	t6 = (((x245%x246)<=x247)>>x248);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x266 = INT16_MAX;
	int8_t x267 = -1;

	t7 = (((x265%x266)<=x267)>>x268);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x341 = -1LL;
	static uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 15U;
	int32_t t8 = 149;

	t8 = (((x341%x342)<=x343)>>x344);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x359 = INT64_MAX;
	int32_t t9 = -7;

	t9 = (((x357%x358)<=x359)>>x360);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x361 = -3587;
	static int8_t x362 = INT8_MIN;
	static uint8_t x363 = UINT8_MAX;
	uint8_t x364 = 16U;
	int32_t t10 = -6139588;

	t10 = (((x361%x362)<=x363)>>x364);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	static uint8_t x379 = UINT8_MAX;
	volatile int32_t t11 = 455;

	t11 = (((x377%x378)<=x379)>>x380);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x386 = 976U;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = 15;
	volatile int32_t t12 = 76552877;

	t12 = (((x385%x386)<=x387)>>x388);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x410 = 2U;
	int8_t x412 = 2;
	volatile int32_t t13 = -7;

	t13 = (((x409%x410)<=x411)>>x412);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x421 = 1918U;
	int32_t x423 = INT32_MIN;
	volatile uint16_t x424 = 0U;
	volatile int32_t t14 = -8;

	t14 = (((x421%x422)<=x423)>>x424);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x467 = UINT16_MAX;
	volatile int32_t t15 = 428522965;

	t15 = (((x465%x466)<=x467)>>x468);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x493 = INT32_MAX;
	uint64_t x494 = 315250508560005LLU;
	volatile int32_t x495 = -395604;
	volatile uint8_t x496 = 3U;
	volatile int32_t t16 = -1;

	t16 = (((x493%x494)<=x495)>>x496);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x555 = UINT64_MAX;
	uint8_t x556 = 0U;

	t17 = (((x553%x554)<=x555)>>x556);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x605 = 1;
	int16_t x606 = INT16_MIN;
	volatile uint32_t x607 = 43U;
	static uint8_t x608 = 3U;

	t18 = (((x605%x606)<=x607)>>x608);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x637 = 1;
	int32_t x638 = -5355;
	int16_t x639 = -1;
	int8_t x640 = 23;
	volatile int32_t t19 = -240837497;

	t19 = (((x637%x638)<=x639)>>x640);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x667 = 658662584LLU;

	t20 = (((x665%x666)<=x667)>>x668);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x670 = 6;
	int64_t x671 = -1LL;
	int16_t x672 = 1;
	volatile int32_t t21 = 412108694;

	t21 = (((x669%x670)<=x671)>>x672);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x697 = INT8_MIN;
	static int16_t x698 = INT16_MIN;
	int8_t x700 = 1;
	volatile int32_t t22 = -1202126;

	t22 = (((x697%x698)<=x699)>>x700);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x729 = 9064U;
	volatile uint64_t x730 = 55LLU;
	int8_t x731 = INT8_MIN;
	static int32_t t23 = -7420;

	t23 = (((x729%x730)<=x731)>>x732);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x750 = INT64_MIN;
	uint16_t x751 = UINT16_MAX;
	static int8_t x752 = 0;
	int32_t t24 = 0;

	t24 = (((x749%x750)<=x751)>>x752);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x785 = 2971;
	uint32_t x786 = 14523741U;
	int16_t x787 = -1;
	uint8_t x788 = 12U;
	int32_t t25 = -1088;

	t25 = (((x785%x786)<=x787)>>x788);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x804 = 1;
	static int32_t t26 = -25535;

	t26 = (((x801%x802)<=x803)>>x804);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x877 = 0LL;
	uint64_t x878 = UINT64_MAX;
	uint8_t x879 = 28U;
	int32_t t27 = -14287;

	t27 = (((x877%x878)<=x879)>>x880);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x901 = INT64_MIN;
	int8_t x902 = -1;
	static int8_t x903 = INT8_MAX;
	volatile int8_t x904 = 0;
	volatile int32_t t28 = 1;

	t28 = (((x901%x902)<=x903)>>x904);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x929 = UINT16_MAX;
	static int64_t x931 = INT64_MIN;
	int64_t x932 = 1LL;
	int32_t t29 = -7390974;

	t29 = (((x929%x930)<=x931)>>x932);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x941 = -1LL;
	volatile int8_t x942 = INT8_MAX;
	uint8_t x943 = 6U;

	t30 = (((x941%x942)<=x943)>>x944);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x950 = 900LL;
	static int64_t x952 = 0LL;
	volatile int32_t t31 = 584546;

	t31 = (((x949%x950)<=x951)>>x952);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x997 = 11U;
	int32_t x998 = 141749;
	int64_t x1000 = 7LL;
	int32_t t32 = -88845;

	t32 = (((x997%x998)<=x999)>>x1000);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1009 = -1596465;
	static int8_t x1010 = -57;
	volatile int32_t t33 = -32;

	t33 = (((x1009%x1010)<=x1011)>>x1012);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1037 = -728200421866357963LL;
	uint32_t x1040 = 1U;
	volatile int32_t t34 = -327975;

	t34 = (((x1037%x1038)<=x1039)>>x1040);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1109 = INT8_MAX;
	int32_t x1110 = INT32_MAX;
	uint32_t x1112 = 15U;
	volatile int32_t t35 = 47;

	t35 = (((x1109%x1110)<=x1111)>>x1112);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1121 = 3U;
	int32_t x1123 = 4;
	uint32_t x1124 = 14U;
	static int32_t t36 = 615;

	t36 = (((x1121%x1122)<=x1123)>>x1124);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1149 = 121U;
	int32_t x1150 = INT32_MIN;
	int8_t x1151 = INT8_MIN;
	static uint64_t x1152 = 3LLU;
	static volatile int32_t t37 = 0;

	t37 = (((x1149%x1150)<=x1151)>>x1152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1153 = 27159762LL;
	volatile int64_t x1154 = -1LL;
	int8_t x1155 = INT8_MAX;
	int16_t x1156 = 1;
	volatile int32_t t38 = -544261;

	t38 = (((x1153%x1154)<=x1155)>>x1156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1217 = UINT16_MAX;
	int32_t x1219 = 0;
	uint8_t x1220 = 2U;
	volatile int32_t t39 = -19536;

	t39 = (((x1217%x1218)<=x1219)>>x1220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1246 = INT16_MAX;
	int16_t x1248 = 14;
	int32_t t40 = -2;

	t40 = (((x1245%x1246)<=x1247)>>x1248);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1249 = -7LL;
	uint16_t x1250 = UINT16_MAX;
	int8_t x1251 = INT8_MAX;
	volatile int32_t x1252 = 23;
	volatile int32_t t41 = -60584;

	t41 = (((x1249%x1250)<=x1251)>>x1252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1257 = UINT32_MAX;
	uint8_t x1258 = 1U;
	volatile uint8_t x1259 = 4U;
	static int8_t x1260 = 2;
	int32_t t42 = 69;

	t42 = (((x1257%x1258)<=x1259)>>x1260);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1267 = 0;
	int8_t x1268 = 5;
	int32_t t43 = 1953;

	t43 = (((x1265%x1266)<=x1267)>>x1268);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1281 = 3674474404220147LL;
	uint64_t x1282 = 1204258140387LLU;
	int16_t x1283 = 132;
	static uint8_t x1284 = 12U;
	int32_t t44 = -6498;

	t44 = (((x1281%x1282)<=x1283)>>x1284);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1477 = 15;
	uint16_t x1478 = 820U;
	uint8_t x1480 = 0U;
	volatile int32_t t45 = -6914661;

	t45 = (((x1477%x1478)<=x1479)>>x1480);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1541 = INT32_MAX;
	static int16_t x1542 = -1;
	static int8_t x1544 = 1;
	int32_t t46 = -135;

	t46 = (((x1541%x1542)<=x1543)>>x1544);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1545 = UINT32_MAX;
	uint8_t x1546 = UINT8_MAX;
	volatile uint64_t x1547 = UINT64_MAX;
	uint8_t x1548 = 3U;
	volatile int32_t t47 = 4601114;

	t47 = (((x1545%x1546)<=x1547)>>x1548);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x1557 = INT16_MAX;
	uint16_t x1560 = 14U;

	t48 = (((x1557%x1558)<=x1559)>>x1560);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1582 = -1364499LL;
	uint64_t x1583 = 20LLU;
	static uint32_t x1584 = 0U;
	volatile int32_t t49 = 6;

	t49 = (((x1581%x1582)<=x1583)>>x1584);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x1614 = 693476273230LL;
	int32_t x1616 = 15;

	t50 = (((x1613%x1614)<=x1615)>>x1616);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1621 = -1;
	static uint8_t x1622 = UINT8_MAX;
	static int8_t x1623 = INT8_MAX;
	uint8_t x1624 = 2U;
	int32_t t51 = 2014589;

	t51 = (((x1621%x1622)<=x1623)>>x1624);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1684 = 9U;
	int32_t t52 = -14515;

	t52 = (((x1681%x1682)<=x1683)>>x1684);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1701 = 1;
	uint16_t x1702 = 433U;
	uint16_t x1703 = UINT16_MAX;

	t53 = (((x1701%x1702)<=x1703)>>x1704);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x1737 = -388610174276169LL;
	int64_t x1739 = INT64_MIN;
	static volatile int8_t x1740 = 0;
	static int32_t t54 = -429291687;

	t54 = (((x1737%x1738)<=x1739)>>x1740);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1745 = 153584860315LL;
	static int32_t x1746 = -463305;
	volatile uint64_t x1747 = UINT64_MAX;

	t55 = (((x1745%x1746)<=x1747)>>x1748);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1758 = UINT64_MAX;
	int64_t x1759 = -1LL;

	t56 = (((x1757%x1758)<=x1759)>>x1760);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x1798 = 16U;
	volatile int32_t x1799 = -1;
	uint16_t x1800 = 8U;

	t57 = (((x1797%x1798)<=x1799)>>x1800);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1809 = INT8_MIN;
	uint64_t x1810 = UINT64_MAX;
	int32_t x1811 = -24539944;
	volatile int32_t t58 = -49685205;

	t58 = (((x1809%x1810)<=x1811)>>x1812);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1897 = 0U;
	uint16_t x1898 = 13U;
	uint8_t x1899 = 65U;
	volatile int8_t x1900 = 3;
	int32_t t59 = -172;

	t59 = (((x1897%x1898)<=x1899)>>x1900);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2017 = 890U;
	volatile uint32_t x2018 = 316436288U;
	uint32_t x2019 = UINT32_MAX;

	t60 = (((x2017%x2018)<=x2019)>>x2020);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x2053 = UINT16_MAX;
	int64_t x2054 = INT64_MIN;
	uint64_t x2055 = 134237262051426LLU;

	t61 = (((x2053%x2054)<=x2055)>>x2056);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2089 = -997413096943LL;
	static int64_t x2090 = 33299156LL;
	static int8_t x2091 = INT8_MIN;
	static volatile uint8_t x2092 = 0U;
	int32_t t62 = 586700;

	t62 = (((x2089%x2090)<=x2091)>>x2092);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2101 = INT8_MIN;
	uint64_t x2102 = 50201501826617LLU;
	int64_t x2103 = -24578007LL;
	volatile int8_t x2104 = 1;

	t63 = (((x2101%x2102)<=x2103)>>x2104);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2113 = INT8_MIN;
	int8_t x2114 = INT8_MIN;
	volatile uint32_t x2115 = 1194239U;
	volatile int8_t x2116 = 1;
	static int32_t t64 = 8447312;

	t64 = (((x2113%x2114)<=x2115)>>x2116);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2329 = -1;
	int8_t x2330 = INT8_MIN;
	static int32_t x2331 = -1;
	volatile int32_t t65 = 330792;

	t65 = (((x2329%x2330)<=x2331)>>x2332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2405 = INT32_MIN;
	int32_t x2406 = -626;
	static int16_t x2407 = INT16_MIN;
	uint8_t x2408 = 0U;

	t66 = (((x2405%x2406)<=x2407)>>x2408);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2421 = INT8_MAX;
	static volatile int64_t x2422 = -59936375264698862LL;
	int16_t x2423 = INT16_MIN;
	volatile int32_t t67 = -593771367;

	t67 = (((x2421%x2422)<=x2423)>>x2424);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x2461 = 11996;
	volatile uint8_t x2462 = 1U;
	int8_t x2463 = INT8_MAX;
	int8_t x2464 = 2;
	int32_t t68 = -31403331;

	t68 = (((x2461%x2462)<=x2463)>>x2464);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x2481 = 162U;
	int64_t x2482 = -1LL;
	int16_t x2483 = -1;
	volatile int32_t t69 = 1;

	t69 = (((x2481%x2482)<=x2483)>>x2484);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2495 = INT64_MIN;
	uint8_t x2496 = 0U;
	volatile int32_t t70 = 33271071;

	t70 = (((x2493%x2494)<=x2495)>>x2496);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2509 = INT32_MIN;
	static int8_t x2511 = -1;
	uint8_t x2512 = 7U;
	volatile int32_t t71 = 0;

	t71 = (((x2509%x2510)<=x2511)>>x2512);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x2545 = INT64_MAX;
	int64_t x2547 = -8902515473756LL;
	int16_t x2548 = 4;
	volatile int32_t t72 = -18;

	t72 = (((x2545%x2546)<=x2547)>>x2548);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x2585 = -54182LL;
	uint16_t x2588 = 29U;
	int32_t t73 = 187743272;

	t73 = (((x2585%x2586)<=x2587)>>x2588);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x2682 = INT32_MAX;
	volatile uint64_t x2683 = UINT64_MAX;
	int8_t x2684 = 0;
	volatile int32_t t74 = -13;

	t74 = (((x2681%x2682)<=x2683)>>x2684);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2693 = -1LL;
	volatile int32_t x2694 = INT32_MIN;
	static int8_t x2696 = 31;
	int32_t t75 = 204;

	t75 = (((x2693%x2694)<=x2695)>>x2696);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2717 = INT64_MIN;
	uint8_t x2719 = UINT8_MAX;
	static uint16_t x2720 = 15U;
	volatile int32_t t76 = 138;

	t76 = (((x2717%x2718)<=x2719)>>x2720);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2757 = INT64_MAX;
	static volatile uint8_t x2758 = 3U;
	int16_t x2759 = INT16_MIN;
	volatile int32_t t77 = -184816029;

	t77 = (((x2757%x2758)<=x2759)>>x2760);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2845 = 371923818174220LLU;
	volatile uint8_t x2847 = 24U;
	uint64_t x2848 = 3LLU;
	volatile int32_t t78 = -23274208;

	t78 = (((x2845%x2846)<=x2847)>>x2848);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2853 = -1;
	int8_t x2854 = -1;
	int16_t x2855 = 428;
	static int8_t x2856 = 1;
	int32_t t79 = -9;

	t79 = (((x2853%x2854)<=x2855)>>x2856);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2861 = -4025;
	int64_t x2862 = INT64_MAX;
	uint32_t x2863 = UINT32_MAX;
	uint8_t x2864 = 11U;
	static volatile int32_t t80 = 54427075;

	t80 = (((x2861%x2862)<=x2863)>>x2864);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2901 = 1U;
	int16_t x2902 = INT16_MIN;
	volatile uint8_t x2904 = 30U;

	t81 = (((x2901%x2902)<=x2903)>>x2904);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x2905 = UINT32_MAX;
	static uint8_t x2907 = 3U;
	volatile int32_t t82 = -859802;

	t82 = (((x2905%x2906)<=x2907)>>x2908);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x2965 = 51U;
	static int64_t x2966 = INT64_MIN;
	int64_t x2967 = INT64_MIN;
	uint32_t x2968 = 0U;
	static int32_t t83 = -282333;

	t83 = (((x2965%x2966)<=x2967)>>x2968);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3026 = INT16_MIN;

	t84 = (((x3025%x3026)<=x3027)>>x3028);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x3037 = UINT32_MAX;
	static volatile uint64_t x3038 = 268673LLU;
	uint64_t x3039 = UINT64_MAX;
	int8_t x3040 = 14;
	volatile int32_t t85 = -55;

	t85 = (((x3037%x3038)<=x3039)>>x3040);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3045 = INT16_MIN;
	int64_t x3046 = -176178495455410558LL;
	uint8_t x3047 = 73U;
	uint8_t x3048 = 31U;

	t86 = (((x3045%x3046)<=x3047)>>x3048);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3049 = 101231274444LLU;
	int16_t x3050 = -1;
	volatile int32_t x3051 = INT32_MIN;
	static uint8_t x3052 = 1U;
	int32_t t87 = 3;

	t87 = (((x3049%x3050)<=x3051)>>x3052);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3057 = 13U;
	volatile uint8_t x3058 = 5U;
	uint8_t x3060 = 6U;
	static volatile int32_t t88 = 105;

	t88 = (((x3057%x3058)<=x3059)>>x3060);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3086 = INT32_MIN;
	int8_t x3087 = INT8_MIN;
	static volatile int8_t x3088 = 26;
	int32_t t89 = 7346979;

	t89 = (((x3085%x3086)<=x3087)>>x3088);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x3202 = UINT64_MAX;
	uint16_t x3204 = 1U;
	volatile int32_t t90 = -31351;

	t90 = (((x3201%x3202)<=x3203)>>x3204);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x3213 = UINT8_MAX;
	int8_t x3214 = -8;
	volatile uint8_t x3215 = UINT8_MAX;
	uint8_t x3216 = 18U;
	volatile int32_t t91 = 29560583;

	t91 = (((x3213%x3214)<=x3215)>>x3216);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x3217 = -1;
	int8_t x3218 = INT8_MIN;
	int32_t x3219 = 100625;
	uint32_t x3220 = 0U;

	t92 = (((x3217%x3218)<=x3219)>>x3220);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3221 = -1;
	int32_t x3222 = INT32_MIN;
	int64_t x3223 = INT64_MAX;
	int32_t x3224 = 1;
	int32_t t93 = -191332634;

	t93 = (((x3221%x3222)<=x3223)>>x3224);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3237 = 15425148LLU;
	uint32_t x3238 = 11U;
	static int8_t x3239 = -1;
	uint32_t x3240 = 21U;

	t94 = (((x3237%x3238)<=x3239)>>x3240);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3253 = -1;
	uint8_t x3254 = UINT8_MAX;
	static int64_t x3255 = INT64_MIN;

	t95 = (((x3253%x3254)<=x3255)>>x3256);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3357 = 2LLU;
	static int16_t x3358 = INT16_MIN;
	static uint8_t x3359 = UINT8_MAX;
	uint8_t x3360 = 0U;
	volatile int32_t t96 = -6396694;

	t96 = (((x3357%x3358)<=x3359)>>x3360);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x3377 = UINT32_MAX;
	int32_t x3378 = -1;
	volatile int32_t x3379 = -1;
	static volatile int32_t t97 = -223;

	t97 = (((x3377%x3378)<=x3379)>>x3380);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3389 = -67095792;
	static volatile int8_t x3391 = INT8_MIN;
	static uint8_t x3392 = 1U;
	volatile int32_t t98 = -686727;

	t98 = (((x3389%x3390)<=x3391)>>x3392);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3433 = INT32_MIN;
	int8_t x3435 = INT8_MAX;
	static int8_t x3436 = 9;
	volatile int32_t t99 = -2273;

	t99 = (((x3433%x3434)<=x3435)>>x3436);

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


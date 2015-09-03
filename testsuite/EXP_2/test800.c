#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x32 = 3U;
static int32_t t3 = 226739032;
static volatile int32_t t4 = 214841;
int32_t x183 = 188747278;
int64_t x246 = -1LL;
uint32_t x312 = 1U;
static volatile int32_t t12 = 230017;
volatile int64_t x411 = -56LL;
static uint16_t x412 = 2U;
static int16_t x449 = -82;
int16_t x451 = -1;
static volatile int32_t x498 = INT32_MAX;
uint16_t x500 = 3U;
static volatile int32_t t19 = -7;
uint8_t x567 = 77U;
uint32_t x706 = UINT32_MAX;
uint8_t x709 = UINT8_MAX;
int32_t t24 = -76;
int8_t x736 = 1;
volatile int32_t x755 = -1;
int8_t x759 = INT8_MIN;
uint16_t x789 = 955U;
static int8_t x792 = 1;
uint16_t x816 = 1U;
static int64_t x862 = INT64_MAX;
int64_t x863 = 119LL;
int8_t x864 = 1;
volatile int32_t t30 = 865806372;
static uint32_t x885 = 15755801U;
static int32_t t31 = 36;
int16_t x889 = INT16_MAX;
uint32_t x920 = 1U;
uint16_t x1082 = 60U;
static int64_t x1083 = INT64_MIN;
uint64_t x1093 = UINT64_MAX;
uint32_t x1096 = 31U;
volatile int32_t t40 = -278;
static volatile int32_t t41 = -1;
int8_t x1183 = INT8_MAX;
int64_t x1206 = INT64_MIN;
int8_t x1207 = INT8_MIN;
int64_t x1261 = -1LL;
uint32_t x1291 = UINT32_MAX;
int32_t x1343 = 43530;
int16_t x1344 = 0;
int16_t x1394 = INT16_MAX;
static int16_t x1395 = INT16_MIN;
uint8_t x1396 = 1U;
int8_t x1464 = 0;
uint32_t x1517 = 0U;
static int8_t x1537 = INT8_MAX;
uint8_t x1539 = UINT8_MAX;
volatile int32_t t53 = -1;
uint16_t x1545 = UINT16_MAX;
int32_t t54 = -40;
uint8_t x1608 = 21U;
int64_t x1627 = INT64_MIN;
volatile int32_t t60 = 81879;
uint32_t x1806 = UINT32_MAX;
static volatile uint8_t x1808 = 3U;
static int32_t t63 = -75436477;
uint64_t x1821 = UINT64_MAX;
volatile int32_t t65 = 6073;
uint8_t x1939 = 109U;
int8_t x1940 = 0;
static int64_t x1951 = 2232532747126LL;
uint64_t x1970 = 226770277LLU;
uint32_t x1998 = UINT32_MAX;
static int64_t x2059 = -1LL;
static uint64_t x2062 = UINT64_MAX;
int32_t t71 = 5945;
volatile int32_t t73 = -150;
int32_t x2081 = -32311;
volatile int32_t t75 = -113466;
uint16_t x2148 = 12U;
volatile int32_t t78 = -12;
uint32_t x2242 = 498U;
uint8_t x2244 = 1U;
uint32_t x2319 = UINT32_MAX;
uint16_t x2320 = 0U;
volatile int64_t x2351 = INT64_MIN;
int8_t x2352 = 1;
int32_t x2363 = 138;
int32_t t86 = 127352216;
uint16_t x2451 = 1481U;
static volatile int32_t t87 = -7;
static int16_t x2586 = -1;
uint8_t x2587 = UINT8_MAX;
uint16_t x2605 = UINT16_MAX;
static int32_t t91 = 0;
uint8_t x2768 = 3U;
int32_t t94 = 537;
static uint8_t x2792 = 30U;
volatile int32_t t95 = 20;
uint64_t x2799 = 1834936620086600571LLU;
int32_t t98 = -920718497;
volatile uint8_t x2893 = 0U;
int8_t x2894 = -1;


void f0(void) {
	uint64_t x29 = 4378335205323175LLU;
	static int64_t x30 = INT64_MIN;
	uint64_t x31 = 13671197950205LLU;
	static int32_t t0 = -4975;

	t0 = ((x29<=(x30%x31))>>x32);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = 7;
	int8_t x95 = -1;
	int16_t x96 = 1;
	int32_t t1 = -63254976;

	t1 = ((x93<=(x94%x95))>>x96);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x105 = UINT8_MAX;
	int64_t x106 = -1338446879281868LL;
	static uint8_t x107 = UINT8_MAX;
	uint8_t x108 = 15U;
	int32_t t2 = -111899;

	t2 = ((x105<=(x106%x107))>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x141 = -1;
	uint8_t x142 = 29U;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 4U;

	t3 = ((x141<=(x142%x143))>>x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x145 = -17;
	static uint16_t x146 = UINT16_MAX;
	int32_t x147 = -9;
	static int8_t x148 = 15;

	t4 = ((x145<=(x146%x147))>>x148);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x165 = UINT32_MAX;
	uint64_t x166 = UINT64_MAX;
	volatile int32_t x167 = INT32_MIN;
	uint32_t x168 = 8U;
	static int32_t t5 = -15;

	t5 = ((x165<=(x166%x167))>>x168);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x181 = 0;
	volatile int8_t x182 = -41;
	uint8_t x184 = 15U;
	static volatile int32_t t6 = -125510964;

	t6 = ((x181<=(x182%x183))>>x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x201 = 14U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 4U;
	uint8_t x204 = 3U;
	volatile int32_t t7 = 689183244;

	t7 = ((x201<=(x202%x203))>>x204);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	int64_t x227 = -1LL;
	int16_t x228 = 2;
	static volatile int32_t t8 = 118240616;

	t8 = ((x225<=(x226%x227))>>x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x245 = -1;
	static uint64_t x247 = UINT64_MAX;
	static uint64_t x248 = 1LLU;
	int32_t t9 = 8;

	t9 = ((x245<=(x246%x247))>>x248);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x257 = 47U;
	int64_t x258 = 1426673638LL;
	int32_t x259 = -204733;
	uint64_t x260 = 3LLU;
	int32_t t10 = 15;

	t10 = ((x257<=(x258%x259))>>x260);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x265 = 6U;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = 9;
	static int32_t t11 = 347721617;

	t11 = ((x265<=(x266%x267))>>x268);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = -1;
	int8_t x311 = INT8_MIN;

	t12 = ((x309<=(x310%x311))>>x312);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x321 = 39482LLU;
	int32_t x322 = 502100;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 1U;
	static volatile int32_t t13 = 12;

	t13 = ((x321<=(x322%x323))>>x324);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = 2;
	static int8_t x379 = 22;
	static int64_t x380 = 1LL;
	volatile int32_t t14 = -866;

	t14 = ((x377<=(x378%x379))>>x380);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x409 = -26073220LL;
	int16_t x410 = -1;
	volatile int32_t t15 = -213530;

	t15 = ((x409<=(x410%x411))>>x412);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x441 = INT8_MIN;
	uint64_t x442 = 1364010629LLU;
	volatile int8_t x443 = 25;
	uint8_t x444 = 2U;
	int32_t t16 = 64899085;

	t16 = ((x441<=(x442%x443))>>x444);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x450 = INT16_MAX;
	uint16_t x452 = 6U;
	volatile int32_t t17 = -102;

	t17 = ((x449<=(x450%x451))>>x452);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x465 = INT16_MAX;
	static uint32_t x466 = 1304973U;
	volatile uint16_t x467 = UINT16_MAX;
	volatile uint32_t x468 = 3U;
	int32_t t18 = -12;

	t18 = ((x465<=(x466%x467))>>x468);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x497 = UINT64_MAX;
	static int64_t x499 = INT64_MIN;

	t19 = ((x497<=(x498%x499))>>x500);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x565 = INT64_MIN;
	uint32_t x566 = 96U;
	uint8_t x568 = 14U;
	int32_t t20 = 86;

	t20 = ((x565<=(x566%x567))>>x568);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x657 = UINT64_MAX;
	int32_t x658 = -207059;
	int64_t x659 = -32LL;
	uint8_t x660 = 3U;
	int32_t t21 = -63;

	t21 = ((x657<=(x658%x659))>>x660);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x661 = 433352LLU;
	int32_t x662 = INT32_MAX;
	int32_t x663 = INT32_MIN;
	int8_t x664 = 2;
	int32_t t22 = -916016;

	t22 = ((x661<=(x662%x663))>>x664);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x705 = UINT64_MAX;
	int16_t x707 = INT16_MAX;
	volatile uint32_t x708 = 1U;
	static volatile int32_t t23 = -127;

	t23 = ((x705<=(x706%x707))>>x708);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x710 = 3U;
	volatile uint64_t x711 = 11026564172475800LLU;
	uint64_t x712 = 24LLU;

	t24 = ((x709<=(x710%x711))>>x712);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x733 = 1U;
	static int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MIN;
	volatile int32_t t25 = 451470510;

	t25 = ((x733<=(x734%x735))>>x736);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x753 = INT64_MIN;
	int8_t x754 = 1;
	int8_t x756 = 5;
	volatile int32_t t26 = 52195102;

	t26 = ((x753<=(x754%x755))>>x756);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x757 = 1;
	static int8_t x758 = -1;
	static uint8_t x760 = 3U;
	static int32_t t27 = 1;

	t27 = ((x757<=(x758%x759))>>x760);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x790 = -5;
	static uint64_t x791 = UINT64_MAX;
	volatile int32_t t28 = 850742;

	t28 = ((x789<=(x790%x791))>>x792);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x813 = UINT8_MAX;
	static int16_t x814 = INT16_MIN;
	static uint16_t x815 = 31U;
	int32_t t29 = -1;

	t29 = ((x813<=(x814%x815))>>x816);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x861 = INT16_MIN;

	t30 = ((x861<=(x862%x863))>>x864);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x886 = -1;
	uint8_t x887 = 2U;
	int64_t x888 = 1LL;

	t31 = ((x885<=(x886%x887))>>x888);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x890 = INT16_MIN;
	int32_t x891 = INT32_MIN;
	int16_t x892 = 0;
	int32_t t32 = 277374;

	t32 = ((x889<=(x890%x891))>>x892);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x917 = 30;
	static int16_t x918 = 60;
	int32_t x919 = -29;
	int32_t t33 = 19;

	t33 = ((x917<=(x918%x919))>>x920);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x929 = 57;
	uint64_t x930 = UINT64_MAX;
	int32_t x931 = -4564;
	static uint32_t x932 = 0U;
	int32_t t34 = 700;

	t34 = ((x929<=(x930%x931))>>x932);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x969 = INT64_MAX;
	uint64_t x970 = 4253039078705959LLU;
	static int8_t x971 = -1;
	uint16_t x972 = 22U;
	volatile int32_t t35 = -31;

	t35 = ((x969<=(x970%x971))>>x972);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1001 = INT8_MAX;
	int8_t x1002 = INT8_MIN;
	static int64_t x1003 = INT64_MIN;
	int8_t x1004 = 0;
	static int32_t t36 = 20418520;

	t36 = ((x1001<=(x1002%x1003))>>x1004);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1009 = 0;
	volatile int64_t x1010 = 2545639744978LL;
	int32_t x1011 = 23396;
	int16_t x1012 = 2;
	volatile int32_t t37 = 176;

	t37 = ((x1009<=(x1010%x1011))>>x1012);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1061 = INT32_MIN;
	uint16_t x1062 = UINT16_MAX;
	int8_t x1063 = -2;
	int32_t x1064 = 0;
	int32_t t38 = 32109609;

	t38 = ((x1061<=(x1062%x1063))>>x1064);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1081 = 236486U;
	uint8_t x1084 = 0U;
	volatile int32_t t39 = 1790528;

	t39 = ((x1081<=(x1082%x1083))>>x1084);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1094 = INT8_MIN;
	static int16_t x1095 = INT16_MAX;

	t40 = ((x1093<=(x1094%x1095))>>x1096);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1113 = 0U;
	int8_t x1114 = INT8_MIN;
	int8_t x1115 = -1;
	uint8_t x1116 = 0U;

	t41 = ((x1113<=(x1114%x1115))>>x1116);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1141 = UINT64_MAX;
	uint16_t x1142 = UINT16_MAX;
	volatile int16_t x1143 = -1;
	static volatile int8_t x1144 = 4;
	int32_t t42 = -41;

	t42 = ((x1141<=(x1142%x1143))>>x1144);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x1181 = UINT8_MAX;
	volatile uint64_t x1182 = 29LLU;
	uint16_t x1184 = 27U;
	volatile int32_t t43 = -82156;

	t43 = ((x1181<=(x1182%x1183))>>x1184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1205 = UINT8_MAX;
	int8_t x1208 = 7;
	int32_t t44 = -328699413;

	t44 = ((x1205<=(x1206%x1207))>>x1208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1225 = 0U;
	static int64_t x1226 = INT64_MIN;
	int32_t x1227 = INT32_MIN;
	uint8_t x1228 = 1U;
	int32_t t45 = -3;

	t45 = ((x1225<=(x1226%x1227))>>x1228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1262 = 0;
	static int16_t x1263 = 43;
	uint8_t x1264 = 1U;
	int32_t t46 = -60;

	t46 = ((x1261<=(x1262%x1263))>>x1264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1289 = UINT16_MAX;
	int64_t x1290 = INT64_MIN;
	static uint8_t x1292 = 14U;
	volatile int32_t t47 = 642231;

	t47 = ((x1289<=(x1290%x1291))>>x1292);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1341 = 0;
	static uint64_t x1342 = UINT64_MAX;
	static int32_t t48 = -16078433;

	t48 = ((x1341<=(x1342%x1343))>>x1344);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1393 = 91U;
	static int32_t t49 = 1;

	t49 = ((x1393<=(x1394%x1395))>>x1396);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1461 = INT16_MAX;
	static int16_t x1462 = -1;
	static int8_t x1463 = INT8_MIN;
	static int32_t t50 = -380;

	t50 = ((x1461<=(x1462%x1463))>>x1464);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1518 = 40247487239LL;
	int16_t x1519 = -93;
	uint8_t x1520 = 18U;
	static int32_t t51 = -1340821;

	t51 = ((x1517<=(x1518%x1519))>>x1520);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1521 = -728LL;
	int8_t x1522 = INT8_MIN;
	int8_t x1523 = -63;
	int32_t x1524 = 3;
	int32_t t52 = 24;

	t52 = ((x1521<=(x1522%x1523))>>x1524);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1538 = UINT8_MAX;
	int16_t x1540 = 1;

	t53 = ((x1537<=(x1538%x1539))>>x1540);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1546 = INT64_MIN;
	uint16_t x1547 = UINT16_MAX;
	uint16_t x1548 = 1U;

	t54 = ((x1545<=(x1546%x1547))>>x1548);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1581 = UINT16_MAX;
	int32_t x1582 = -923510278;
	uint32_t x1583 = 2U;
	int8_t x1584 = 1;
	int32_t t55 = 13969;

	t55 = ((x1581<=(x1582%x1583))>>x1584);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1605 = INT8_MAX;
	int16_t x1606 = 45;
	int16_t x1607 = INT16_MIN;
	static volatile int32_t t56 = -32096;

	t56 = ((x1605<=(x1606%x1607))>>x1608);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1625 = UINT64_MAX;
	int64_t x1626 = -51063857547LL;
	int8_t x1628 = 4;
	static int32_t t57 = 4132;

	t57 = ((x1625<=(x1626%x1627))>>x1628);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1629 = -3626086679LL;
	uint32_t x1630 = UINT32_MAX;
	volatile int64_t x1631 = -1LL;
	int16_t x1632 = 0;
	static int32_t t58 = 979632975;

	t58 = ((x1629<=(x1630%x1631))>>x1632);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1649 = 6946LLU;
	static uint8_t x1650 = 43U;
	uint32_t x1651 = 8U;
	uint64_t x1652 = 1LLU;
	volatile int32_t t59 = 0;

	t59 = ((x1649<=(x1650%x1651))>>x1652);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1741 = 36829756LLU;
	int16_t x1742 = -1;
	static uint16_t x1743 = 5U;
	uint8_t x1744 = 3U;

	t60 = ((x1741<=(x1742%x1743))>>x1744);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1773 = -1;
	int32_t x1774 = INT32_MIN;
	int8_t x1775 = -1;
	static uint8_t x1776 = 3U;
	int32_t t61 = -10;

	t61 = ((x1773<=(x1774%x1775))>>x1776);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1789 = INT8_MIN;
	int32_t x1790 = -1;
	static int16_t x1791 = -1;
	uint16_t x1792 = 8U;
	int32_t t62 = 15;

	t62 = ((x1789<=(x1790%x1791))>>x1792);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x1805 = INT32_MIN;
	volatile int64_t x1807 = -2199366LL;

	t63 = ((x1805<=(x1806%x1807))>>x1808);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1822 = 5;
	static uint32_t x1823 = 447350514U;
	uint8_t x1824 = 0U;
	int32_t t64 = -490;

	t64 = ((x1821<=(x1822%x1823))>>x1824);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1833 = -15367952358611LL;
	int16_t x1834 = INT16_MAX;
	int16_t x1835 = 7664;
	int8_t x1836 = 0;

	t65 = ((x1833<=(x1834%x1835))>>x1836);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x1937 = INT64_MAX;
	static int64_t x1938 = INT64_MIN;
	volatile int32_t t66 = -10;

	t66 = ((x1937<=(x1938%x1939))>>x1940);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1949 = -1LL;
	int64_t x1950 = INT64_MIN;
	uint8_t x1952 = 1U;
	volatile int32_t t67 = 32375192;

	t67 = ((x1949<=(x1950%x1951))>>x1952);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x1969 = -39;
	uint16_t x1971 = 73U;
	uint16_t x1972 = 2U;
	int32_t t68 = 106927;

	t68 = ((x1969<=(x1970%x1971))>>x1972);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1997 = INT8_MIN;
	int8_t x1999 = INT8_MAX;
	volatile int8_t x2000 = 0;
	volatile int32_t t69 = -127;

	t69 = ((x1997<=(x1998%x1999))>>x2000);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x2057 = INT32_MIN;
	uint16_t x2058 = 0U;
	uint16_t x2060 = 2U;
	volatile int32_t t70 = -291450;

	t70 = ((x2057<=(x2058%x2059))>>x2060);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2061 = -1;
	int8_t x2063 = INT8_MIN;
	volatile uint32_t x2064 = 0U;

	t71 = ((x2061<=(x2062%x2063))>>x2064);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2065 = INT32_MAX;
	int32_t x2066 = -1;
	int32_t x2067 = INT32_MIN;
	volatile int8_t x2068 = 2;
	static volatile int32_t t72 = -24;

	t72 = ((x2065<=(x2066%x2067))>>x2068);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2077 = -8;
	static volatile int8_t x2078 = INT8_MIN;
	int32_t x2079 = INT32_MIN;
	uint8_t x2080 = 27U;

	t73 = ((x2077<=(x2078%x2079))>>x2080);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2082 = 77;
	volatile uint64_t x2083 = 2940705463LLU;
	uint8_t x2084 = 5U;
	volatile int32_t t74 = 2386;

	t74 = ((x2081<=(x2082%x2083))>>x2084);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2121 = INT32_MIN;
	int8_t x2122 = -1;
	volatile int32_t x2123 = INT32_MIN;
	volatile uint8_t x2124 = 2U;

	t75 = ((x2121<=(x2122%x2123))>>x2124);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x2145 = UINT32_MAX;
	volatile int32_t x2146 = INT32_MIN;
	uint8_t x2147 = 1U;
	volatile int32_t t76 = 60;

	t76 = ((x2145<=(x2146%x2147))>>x2148);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2149 = INT8_MAX;
	int32_t x2150 = INT32_MIN;
	static volatile int16_t x2151 = -1;
	volatile uint8_t x2152 = 12U;
	volatile int32_t t77 = 233006158;

	t77 = ((x2149<=(x2150%x2151))>>x2152);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2225 = UINT64_MAX;
	int8_t x2226 = INT8_MIN;
	uint64_t x2227 = 1812480043953449LLU;
	uint16_t x2228 = 1U;

	t78 = ((x2225<=(x2226%x2227))>>x2228);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2241 = INT8_MAX;
	int32_t x2243 = -7203;
	int32_t t79 = 1;

	t79 = ((x2241<=(x2242%x2243))>>x2244);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x2317 = 16U;
	volatile uint16_t x2318 = 480U;
	int32_t t80 = 613272978;

	t80 = ((x2317<=(x2318%x2319))>>x2320);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2349 = UINT16_MAX;
	uint64_t x2350 = 1LLU;
	volatile int32_t t81 = 1;

	t81 = ((x2349<=(x2350%x2351))>>x2352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2361 = 8;
	uint16_t x2362 = UINT16_MAX;
	uint8_t x2364 = 10U;
	volatile int32_t t82 = -82657812;

	t82 = ((x2361<=(x2362%x2363))>>x2364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2377 = UINT64_MAX;
	int64_t x2378 = -1LL;
	int64_t x2379 = -1973LL;
	volatile uint16_t x2380 = 21U;
	static volatile int32_t t83 = -52469;

	t83 = ((x2377<=(x2378%x2379))>>x2380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2389 = -1;
	uint32_t x2390 = 3U;
	int16_t x2391 = -925;
	static uint32_t x2392 = 1U;
	int32_t t84 = 1;

	t84 = ((x2389<=(x2390%x2391))>>x2392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2401 = UINT16_MAX;
	int64_t x2402 = -1LL;
	static int8_t x2403 = INT8_MIN;
	uint16_t x2404 = 15U;
	volatile int32_t t85 = 3300961;

	t85 = ((x2401<=(x2402%x2403))>>x2404);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x2429 = -1LL;
	int32_t x2430 = -7677;
	uint16_t x2431 = 11755U;
	int16_t x2432 = 1;

	t86 = ((x2429<=(x2430%x2431))>>x2432);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2449 = 8123751440014836491LLU;
	uint64_t x2450 = UINT64_MAX;
	int64_t x2452 = 1LL;

	t87 = ((x2449<=(x2450%x2451))>>x2452);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2577 = UINT8_MAX;
	uint64_t x2578 = 1853680192062252LLU;
	int64_t x2579 = INT64_MIN;
	int8_t x2580 = 14;
	volatile int32_t t88 = 30738;

	t88 = ((x2577<=(x2578%x2579))>>x2580);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2585 = 18;
	static uint8_t x2588 = 11U;
	static int32_t t89 = 26979681;

	t89 = ((x2585<=(x2586%x2587))>>x2588);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2593 = -2222;
	uint32_t x2594 = 1190436U;
	volatile int32_t x2595 = 64206394;
	uint16_t x2596 = 2U;
	volatile int32_t t90 = -2;

	t90 = ((x2593<=(x2594%x2595))>>x2596);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2606 = 0U;
	uint64_t x2607 = UINT64_MAX;
	int64_t x2608 = 25LL;

	t91 = ((x2605<=(x2606%x2607))>>x2608);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2685 = -1LL;
	int32_t x2686 = INT32_MIN;
	static volatile int8_t x2687 = -1;
	uint16_t x2688 = 1U;
	volatile int32_t t92 = -9;

	t92 = ((x2685<=(x2686%x2687))>>x2688);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2765 = -1;
	volatile int8_t x2766 = INT8_MIN;
	volatile int16_t x2767 = -9;
	volatile int32_t t93 = 744202713;

	t93 = ((x2765<=(x2766%x2767))>>x2768);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2781 = INT32_MIN;
	static int8_t x2782 = 0;
	int16_t x2783 = -1;
	uint8_t x2784 = 31U;

	t94 = ((x2781<=(x2782%x2783))>>x2784);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2789 = INT8_MIN;
	int16_t x2790 = -4;
	int64_t x2791 = -57416632LL;

	t95 = ((x2789<=(x2790%x2791))>>x2792);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x2797 = UINT64_MAX;
	int64_t x2798 = INT64_MAX;
	int16_t x2800 = 2;
	volatile int32_t t96 = -816;

	t96 = ((x2797<=(x2798%x2799))>>x2800);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2801 = UINT8_MAX;
	volatile int16_t x2802 = -861;
	uint64_t x2803 = UINT64_MAX;
	uint8_t x2804 = 0U;
	volatile int32_t t97 = -60985;

	t97 = ((x2801<=(x2802%x2803))>>x2804);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2869 = 3850583U;
	static int8_t x2870 = -1;
	volatile uint64_t x2871 = 47331632586084900LLU;
	uint16_t x2872 = 1U;

	t98 = ((x2869<=(x2870%x2871))>>x2872);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2895 = 21052169LLU;
	int8_t x2896 = 1;
	int32_t t99 = 7628912;

	t99 = ((x2893<=(x2894%x2895))>>x2896);

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


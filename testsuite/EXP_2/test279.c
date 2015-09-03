#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x12 = 6U;
int64_t x29 = 142188856752231LL;
int16_t x30 = -2134;
uint64_t x42 = UINT64_MAX;
volatile int32_t t2 = 26145467;
int64_t x46 = -765903LL;
volatile uint32_t x140 = 3U;
uint8_t x146 = 3U;
uint16_t x147 = 833U;
int32_t t6 = 36986594;
volatile int32_t t7 = -396948;
uint8_t x260 = 1U;
static uint32_t x269 = 330U;
volatile int32_t x270 = -23867;
static uint8_t x272 = 7U;
int32_t t10 = -54036;
uint8_t x338 = 1U;
int16_t x339 = 1;
volatile uint16_t x340 = 5U;
static int32_t t12 = -632949;
int32_t t14 = 0;
uint16_t x489 = 5023U;
int16_t x490 = -1;
uint8_t x492 = 24U;
static uint8_t x508 = 5U;
int64_t x545 = -44908456620854LL;
volatile uint8_t x546 = UINT8_MAX;
uint32_t x548 = 12U;
int8_t x616 = 5;
static int8_t x645 = -1;
int8_t x646 = INT8_MIN;
int64_t x666 = -270126256252637874LL;
int64_t x697 = 6827LL;
uint8_t x700 = 6U;
uint16_t x704 = 2U;
uint8_t x782 = 11U;
int32_t t29 = 907167133;
static int16_t x818 = -1;
int16_t x941 = -317;
int8_t x1056 = 13;
volatile int32_t x1058 = INT32_MIN;
static int32_t x1059 = -9416663;
int16_t x1146 = INT16_MAX;
static int8_t x1172 = 1;
int16_t x1317 = INT16_MIN;
int16_t x1341 = INT16_MIN;
static uint8_t x1374 = 21U;
int16_t x1435 = INT16_MAX;
volatile uint8_t x1442 = UINT8_MAX;
int32_t x1505 = 11846235;
uint16_t x1523 = 10U;
int8_t x1590 = -52;
static volatile int32_t t49 = -12;
int32_t x1619 = INT32_MIN;
uint8_t x1633 = UINT8_MAX;
static volatile uint16_t x1922 = 1082U;
int8_t x1983 = 42;
int32_t x1994 = INT32_MIN;
int32_t x2078 = -1;
int64_t x2158 = -1LL;
int8_t x2228 = 1;
int32_t t67 = 19049;
int16_t x2309 = INT16_MIN;
volatile int32_t t69 = 36318;
uint64_t x2348 = 24LLU;
static int8_t x2476 = 7;
int8_t x2511 = INT8_MAX;
static volatile int8_t x2516 = 3;
uint32_t x2535 = UINT32_MAX;
volatile int32_t t76 = 986;
uint16_t x2689 = 8U;
volatile int32_t t79 = -666202;
int8_t x2697 = INT8_MIN;
volatile int8_t x2700 = 1;
volatile int32_t t80 = -99144;
int16_t x2750 = INT16_MIN;
static volatile uint64_t x2752 = 6LLU;
uint32_t x2778 = UINT32_MAX;
int32_t t82 = -38545370;
uint8_t x2781 = 55U;
int32_t x2826 = INT32_MIN;
static int8_t x2882 = -1;
uint64_t x2934 = 522846527364019LLU;
volatile int32_t x2936 = 6;
uint32_t x2957 = UINT32_MAX;
volatile int32_t t89 = -837;
volatile int8_t x2987 = -7;
uint8_t x3036 = 4U;
volatile int64_t x3053 = INT64_MIN;
static uint32_t x3054 = 931046207U;
uint8_t x3081 = 30U;
int8_t x3083 = 1;
uint16_t x3182 = UINT16_MAX;
volatile uint8_t x3184 = 5U;
static uint16_t x3366 = 0U;


void f0(void) {
	uint16_t x9 = 3U;
	static uint32_t x10 = 13U;
	static int32_t x11 = INT32_MAX;
	volatile int32_t t0 = 198;

	t0 = ((x9<(x10-x11))<<x12);

	if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x31 = 1322U;
	static uint8_t x32 = 16U;
	static volatile int32_t t1 = -506302888;

	t1 = ((x29<(x30-x31))<<x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x41 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	int8_t x44 = 4;

	t2 = ((x41<(x42-x43))<<x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x45 = -1;
	int8_t x47 = INT8_MIN;
	int8_t x48 = 1;
	int32_t t3 = -104870268;

	t3 = ((x45<(x46-x47))<<x48);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x81 = INT64_MAX;
	uint64_t x82 = 112433LLU;
	volatile uint64_t x83 = 123093LLU;
	int32_t x84 = 1;
	static int32_t t4 = 127517;

	t4 = ((x81<(x82-x83))<<x84);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x137 = -2590604LL;
	int16_t x138 = -13;
	int64_t x139 = 2LL;
	static int32_t t5 = 16433269;

	t5 = ((x137<(x138-x139))<<x140);

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x145 = -2;
	volatile uint8_t x148 = 1U;

	t6 = ((x145<(x146-x147))<<x148);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x197 = 44U;
	static int64_t x198 = INT64_MIN;
	int32_t x199 = -13;
	int16_t x200 = 14;

	t7 = ((x197<(x198-x199))<<x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x225 = 652570;
	uint8_t x226 = 2U;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 1U;
	volatile int32_t t8 = -1;

	t8 = ((x225<(x226-x227))<<x228);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x257 = 1075485U;
	int16_t x258 = -1;
	uint32_t x259 = 100180447U;
	static volatile int32_t t9 = 202178;

	t9 = ((x257<(x258-x259))<<x260);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x271 = 6198U;

	t10 = ((x269<(x270-x271))<<x272);

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x310 = 1U;
	int64_t x311 = -1LL;
	volatile uint16_t x312 = 11U;
	static volatile int32_t t11 = -7953035;

	t11 = ((x309<(x310-x311))<<x312);

	if (t11 != 2048) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x337 = -1;

	t12 = ((x337<(x338-x339))<<x340);

	if (t12 != 32) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x365 = 2U;
	int32_t x366 = INT32_MIN;
	int32_t x367 = -1;
	int8_t x368 = 1;
	static int32_t t13 = -9;

	t13 = ((x365<(x366-x367))<<x368);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x377 = INT16_MAX;
	int16_t x378 = -1;
	volatile int32_t x379 = INT32_MAX;
	int16_t x380 = 1;

	t14 = ((x377<(x378-x379))<<x380);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x491 = 24304U;
	int32_t t15 = -1868;

	t15 = ((x489<(x490-x491))<<x492);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	int8_t x499 = 0;
	uint8_t x500 = 0U;
	int32_t t16 = 13706665;

	t16 = ((x497<(x498-x499))<<x500);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x505 = INT16_MIN;
	int16_t x506 = -42;
	int64_t x507 = 53368273414069LL;
	static int32_t t17 = 64952864;

	t17 = ((x505<(x506-x507))<<x508);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x547 = UINT32_MAX;
	int32_t t18 = 0;

	t18 = ((x545<(x546-x547))<<x548);

	if (t18 != 4096) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x549 = 907286138U;
	int8_t x550 = 12;
	uint64_t x551 = 833462569468881LLU;
	volatile int16_t x552 = 1;
	int32_t t19 = -437033974;

	t19 = ((x549<(x550-x551))<<x552);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x613 = UINT8_MAX;
	static uint64_t x614 = UINT64_MAX;
	static int64_t x615 = -1LL;
	int32_t t20 = 8392;

	t20 = ((x613<(x614-x615))<<x616);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x629 = 68U;
	int16_t x630 = 1;
	volatile int32_t x631 = INT32_MAX;
	int8_t x632 = 0;
	static int32_t t21 = 435656;

	t21 = ((x629<(x630-x631))<<x632);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x647 = INT32_MIN;
	volatile int32_t x648 = 2;
	static volatile int32_t t22 = -1028646653;

	t22 = ((x645<(x646-x647))<<x648);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x657 = 1986540893484954400LLU;
	int16_t x658 = INT16_MAX;
	static int8_t x659 = INT8_MIN;
	uint8_t x660 = 1U;
	static volatile int32_t t23 = 201;

	t23 = ((x657<(x658-x659))<<x660);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x665 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	int8_t x668 = 13;
	int32_t t24 = 0;

	t24 = ((x665<(x666-x667))<<x668);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x698 = 15663U;
	static int32_t x699 = -20489;
	int32_t t25 = -2278668;

	t25 = ((x697<(x698-x699))<<x700);

	if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x701 = UINT16_MAX;
	int64_t x702 = -1LL;
	int8_t x703 = INT8_MIN;
	static int32_t t26 = 152;

	t26 = ((x701<(x702-x703))<<x704);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x749 = INT64_MIN;
	uint16_t x750 = 1U;
	uint16_t x751 = UINT16_MAX;
	uint16_t x752 = 3U;
	volatile int32_t t27 = 2;

	t27 = ((x749<(x750-x751))<<x752);

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x753 = INT8_MIN;
	int32_t x754 = -1;
	static int64_t x755 = -1LL;
	uint16_t x756 = 9U;
	int32_t t28 = -9;

	t28 = ((x753<(x754-x755))<<x756);

	if (t28 != 512) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x781 = INT64_MIN;
	static uint16_t x783 = UINT16_MAX;
	uint16_t x784 = 1U;

	t29 = ((x781<(x782-x783))<<x784);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x817 = INT16_MIN;
	uint32_t x819 = UINT32_MAX;
	uint16_t x820 = 6U;
	volatile int32_t t30 = 1279420;

	t30 = ((x817<(x818-x819))<<x820);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x881 = 260034U;
	uint16_t x882 = UINT16_MAX;
	static int32_t x883 = -1;
	static uint32_t x884 = 3U;
	volatile int32_t t31 = 69348;

	t31 = ((x881<(x882-x883))<<x884);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x942 = -1;
	static int8_t x943 = 1;
	int64_t x944 = 0LL;
	volatile int32_t t32 = -25;

	t32 = ((x941<(x942-x943))<<x944);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1045 = -1438;
	static uint16_t x1046 = UINT16_MAX;
	volatile int32_t x1047 = -142589;
	volatile uint16_t x1048 = 14U;
	int32_t t33 = 0;

	t33 = ((x1045<(x1046-x1047))<<x1048);

	if (t33 != 16384) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1053 = -1;
	int64_t x1054 = INT64_MAX;
	int64_t x1055 = 224688644LL;
	volatile int32_t t34 = 896;

	t34 = ((x1053<(x1054-x1055))<<x1056);

	if (t34 != 8192) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1057 = 57U;
	uint16_t x1060 = 5U;
	int32_t t35 = 0;

	t35 = ((x1057<(x1058-x1059))<<x1060);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1061 = 10810U;
	volatile int8_t x1062 = 5;
	uint32_t x1063 = UINT32_MAX;
	static volatile int8_t x1064 = 0;
	static int32_t t36 = 229;

	t36 = ((x1061<(x1062-x1063))<<x1064);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1133 = INT64_MAX;
	static uint16_t x1134 = 18U;
	uint64_t x1135 = 43894334569395LLU;
	volatile int8_t x1136 = 16;
	volatile int32_t t37 = -1573;

	t37 = ((x1133<(x1134-x1135))<<x1136);

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1145 = INT8_MAX;
	int64_t x1147 = -69LL;
	volatile uint16_t x1148 = 0U;
	int32_t t38 = -2;

	t38 = ((x1145<(x1146-x1147))<<x1148);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1169 = UINT64_MAX;
	volatile int32_t x1170 = INT32_MIN;
	static uint64_t x1171 = UINT64_MAX;
	static volatile int32_t t39 = -492816463;

	t39 = ((x1169<(x1170-x1171))<<x1172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1193 = INT16_MAX;
	volatile uint64_t x1194 = UINT64_MAX;
	int64_t x1195 = -1LL;
	uint8_t x1196 = 9U;
	int32_t t40 = 48518;

	t40 = ((x1193<(x1194-x1195))<<x1196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1281 = -4212302214121794750LL;
	int32_t x1282 = INT32_MAX;
	volatile uint64_t x1283 = 192461592774469LLU;
	uint16_t x1284 = 0U;
	static int32_t t41 = 0;

	t41 = ((x1281<(x1282-x1283))<<x1284);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1318 = INT64_MAX;
	int16_t x1319 = INT16_MAX;
	static int16_t x1320 = 12;
	volatile int32_t t42 = -124625883;

	t42 = ((x1317<(x1318-x1319))<<x1320);

	if (t42 != 4096) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1342 = UINT8_MAX;
	int32_t x1343 = -1;
	static int8_t x1344 = 1;
	volatile int32_t t43 = -27;

	t43 = ((x1341<(x1342-x1343))<<x1344);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1373 = INT32_MAX;
	int8_t x1375 = 0;
	volatile uint8_t x1376 = 1U;
	static int32_t t44 = -3826919;

	t44 = ((x1373<(x1374-x1375))<<x1376);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1433 = INT64_MAX;
	static uint16_t x1434 = 117U;
	uint8_t x1436 = 1U;
	static volatile int32_t t45 = -85;

	t45 = ((x1433<(x1434-x1435))<<x1436);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1441 = UINT8_MAX;
	uint64_t x1443 = 10916LLU;
	uint8_t x1444 = 2U;
	volatile int32_t t46 = 4889;

	t46 = ((x1441<(x1442-x1443))<<x1444);

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1506 = 112U;
	int64_t x1507 = -11LL;
	static uint8_t x1508 = 2U;
	int32_t t47 = 1;

	t47 = ((x1505<(x1506-x1507))<<x1508);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1521 = 32403U;
	int16_t x1522 = -1;
	static uint32_t x1524 = 13U;
	int32_t t48 = 53;

	t48 = ((x1521<(x1522-x1523))<<x1524);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1589 = INT16_MIN;
	volatile uint16_t x1591 = 1629U;
	uint8_t x1592 = 6U;

	t49 = ((x1589<(x1590-x1591))<<x1592);

	if (t49 != 64) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x1617 = UINT32_MAX;
	int8_t x1618 = -13;
	static uint8_t x1620 = 0U;
	int32_t t50 = -171419;

	t50 = ((x1617<(x1618-x1619))<<x1620);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1634 = 7;
	int32_t x1635 = -289623;
	int8_t x1636 = 0;
	volatile int32_t t51 = -32556;

	t51 = ((x1633<(x1634-x1635))<<x1636);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1661 = -8;
	static int16_t x1662 = -1;
	int16_t x1663 = -1180;
	uint64_t x1664 = 18LLU;
	volatile int32_t t52 = -3;

	t52 = ((x1661<(x1662-x1663))<<x1664);

	if (t52 != 262144) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1681 = INT16_MAX;
	int64_t x1682 = INT64_MIN;
	int16_t x1683 = -1;
	static uint8_t x1684 = 0U;
	volatile int32_t t53 = -195027410;

	t53 = ((x1681<(x1682-x1683))<<x1684);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1713 = 2666442LLU;
	int32_t x1714 = 431399;
	volatile int8_t x1715 = 1;
	int8_t x1716 = 13;
	static int32_t t54 = -335485;

	t54 = ((x1713<(x1714-x1715))<<x1716);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1773 = INT8_MIN;
	uint8_t x1774 = UINT8_MAX;
	volatile int64_t x1775 = 1850094657690882LL;
	static volatile uint8_t x1776 = 1U;
	static volatile int32_t t55 = -635095211;

	t55 = ((x1773<(x1774-x1775))<<x1776);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1793 = -1;
	int16_t x1794 = -1;
	int32_t x1795 = INT32_MAX;
	int8_t x1796 = 1;
	int32_t t56 = 15;

	t56 = ((x1793<(x1794-x1795))<<x1796);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1853 = 36U;
	int8_t x1854 = INT8_MIN;
	int32_t x1855 = INT32_MIN;
	static int8_t x1856 = 3;
	volatile int32_t t57 = -1124;

	t57 = ((x1853<(x1854-x1855))<<x1856);

	if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1857 = INT16_MAX;
	uint16_t x1858 = 3U;
	int8_t x1859 = INT8_MIN;
	int32_t x1860 = 2;
	volatile int32_t t58 = -13548;

	t58 = ((x1857<(x1858-x1859))<<x1860);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1905 = 7;
	int8_t x1906 = INT8_MIN;
	uint8_t x1907 = UINT8_MAX;
	uint32_t x1908 = 1U;
	volatile int32_t t59 = 12085;

	t59 = ((x1905<(x1906-x1907))<<x1908);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1921 = 0;
	uint8_t x1923 = 1U;
	static int16_t x1924 = 1;
	int32_t t60 = -109853791;

	t60 = ((x1921<(x1922-x1923))<<x1924);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1981 = 2U;
	uint64_t x1982 = 6LLU;
	int8_t x1984 = 3;
	volatile int32_t t61 = -28689174;

	t61 = ((x1981<(x1982-x1983))<<x1984);

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1993 = INT64_MIN;
	int8_t x1995 = 0;
	int8_t x1996 = 0;
	int32_t t62 = -526;

	t62 = ((x1993<(x1994-x1995))<<x1996);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1997 = 66U;
	int32_t x1998 = -3;
	volatile int64_t x1999 = INT64_MIN;
	static uint16_t x2000 = 0U;
	volatile int32_t t63 = -3158;

	t63 = ((x1997<(x1998-x1999))<<x2000);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2077 = -1;
	int16_t x2079 = -7;
	int16_t x2080 = 30;
	int32_t t64 = 734350453;

	t64 = ((x2077<(x2078-x2079))<<x2080);

	if (t64 != 1073741824) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2145 = -2;
	volatile int8_t x2146 = -1;
	volatile uint8_t x2147 = 7U;
	uint16_t x2148 = 3U;
	volatile int32_t t65 = -474383059;

	t65 = ((x2145<(x2146-x2147))<<x2148);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2157 = -247;
	int16_t x2159 = INT16_MIN;
	uint16_t x2160 = 2U;
	volatile int32_t t66 = 58590;

	t66 = ((x2157<(x2158-x2159))<<x2160);

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2225 = INT8_MIN;
	int32_t x2226 = -1;
	uint64_t x2227 = UINT64_MAX;

	t67 = ((x2225<(x2226-x2227))<<x2228);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2233 = -58;
	static int64_t x2234 = -1LL;
	uint32_t x2235 = 7761267U;
	volatile uint8_t x2236 = 6U;
	int32_t t68 = 1;

	t68 = ((x2233<(x2234-x2235))<<x2236);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x2310 = INT32_MIN;
	int64_t x2311 = 1LL;
	volatile int8_t x2312 = 1;

	t69 = ((x2309<(x2310-x2311))<<x2312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2345 = INT16_MIN;
	int16_t x2346 = INT16_MIN;
	uint32_t x2347 = 44U;
	volatile int32_t t70 = 797;

	t70 = ((x2345<(x2346-x2347))<<x2348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2473 = 112534U;
	uint8_t x2474 = 0U;
	volatile int16_t x2475 = 579;
	volatile int32_t t71 = 4;

	t71 = ((x2473<(x2474-x2475))<<x2476);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2489 = 3U;
	static uint8_t x2490 = 49U;
	volatile uint64_t x2491 = UINT64_MAX;
	int8_t x2492 = 6;
	int32_t t72 = 100727744;

	t72 = ((x2489<(x2490-x2491))<<x2492);

	if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2509 = -183;
	uint16_t x2510 = 18561U;
	uint8_t x2512 = 30U;
	int32_t t73 = -1;

	t73 = ((x2509<(x2510-x2511))<<x2512);

	if (t73 != 1073741824) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2513 = -13090246;
	uint64_t x2514 = 160347347LLU;
	static volatile int64_t x2515 = -72931705475LL;
	int32_t t74 = -32577;

	t74 = ((x2513<(x2514-x2515))<<x2516);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2525 = 505983050623LL;
	int32_t x2526 = INT32_MAX;
	uint8_t x2527 = 54U;
	uint8_t x2528 = 0U;
	int32_t t75 = 7847;

	t75 = ((x2525<(x2526-x2527))<<x2528);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2533 = 0;
	volatile int32_t x2534 = -3073465;
	uint8_t x2536 = 2U;

	t76 = ((x2533<(x2534-x2535))<<x2536);

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2613 = INT16_MIN;
	volatile uint8_t x2614 = 0U;
	static int8_t x2615 = INT8_MAX;
	volatile uint8_t x2616 = 1U;
	volatile int32_t t77 = 835851315;

	t77 = ((x2613<(x2614-x2615))<<x2616);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2637 = -13009835819275LL;
	volatile uint64_t x2638 = UINT64_MAX;
	uint8_t x2639 = UINT8_MAX;
	uint8_t x2640 = 0U;
	int32_t t78 = -4081365;

	t78 = ((x2637<(x2638-x2639))<<x2640);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2690 = 34;
	static int64_t x2691 = -477308238091764LL;
	int8_t x2692 = 1;

	t79 = ((x2689<(x2690-x2691))<<x2692);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2698 = INT32_MIN;
	static int64_t x2699 = INT64_MIN;

	t80 = ((x2697<(x2698-x2699))<<x2700);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2749 = -1;
	uint64_t x2751 = 7LLU;
	int32_t t81 = 348451175;

	t81 = ((x2749<(x2750-x2751))<<x2752);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2777 = INT64_MAX;
	static uint64_t x2779 = 525087931LLU;
	int16_t x2780 = 1;

	t82 = ((x2777<(x2778-x2779))<<x2780);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2782 = INT8_MAX;
	int8_t x2783 = INT8_MIN;
	int32_t x2784 = 3;
	int32_t t83 = -17423149;

	t83 = ((x2781<(x2782-x2783))<<x2784);

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2797 = INT8_MAX;
	uint64_t x2798 = 15LLU;
	int8_t x2799 = INT8_MIN;
	uint8_t x2800 = 20U;
	volatile int32_t t84 = 795349115;

	t84 = ((x2797<(x2798-x2799))<<x2800);

	if (t84 != 1048576) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x2825 = 27;
	uint32_t x2827 = 37U;
	uint64_t x2828 = 4LLU;
	volatile int32_t t85 = 30772;

	t85 = ((x2825<(x2826-x2827))<<x2828);

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2881 = INT32_MAX;
	static int8_t x2883 = -9;
	int16_t x2884 = 0;
	volatile int32_t t86 = -5;

	t86 = ((x2881<(x2882-x2883))<<x2884);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2901 = INT64_MIN;
	int8_t x2902 = INT8_MIN;
	static uint32_t x2903 = 13U;
	volatile int8_t x2904 = 2;
	static volatile int32_t t87 = -7;

	t87 = ((x2901<(x2902-x2903))<<x2904);

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2933 = INT8_MIN;
	int16_t x2935 = -5;
	volatile int32_t t88 = -22792;

	t88 = ((x2933<(x2934-x2935))<<x2936);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2958 = -14728;
	int16_t x2959 = -39;
	static uint8_t x2960 = 5U;

	t89 = ((x2957<(x2958-x2959))<<x2960);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2985 = INT8_MIN;
	int64_t x2986 = INT64_MIN;
	int8_t x2988 = 1;
	static int32_t t90 = -45;

	t90 = ((x2985<(x2986-x2987))<<x2988);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2997 = 1067498393;
	int32_t x2998 = -3706;
	int32_t x2999 = INT32_MIN;
	uint32_t x3000 = 18U;
	int32_t t91 = -1959;

	t91 = ((x2997<(x2998-x2999))<<x3000);

	if (t91 != 262144) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3021 = 3282;
	static int32_t x3022 = INT32_MIN;
	volatile int16_t x3023 = -3;
	uint64_t x3024 = 20LLU;
	volatile int32_t t92 = -8677;

	t92 = ((x3021<(x3022-x3023))<<x3024);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3033 = 9U;
	static int16_t x3034 = 105;
	int64_t x3035 = -1LL;
	volatile int32_t t93 = 213;

	t93 = ((x3033<(x3034-x3035))<<x3036);

	if (t93 != 16) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3055 = -1;
	uint16_t x3056 = 14U;
	int32_t t94 = 24626;

	t94 = ((x3053<(x3054-x3055))<<x3056);

	if (t94 != 16384) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3082 = UINT64_MAX;
	uint8_t x3084 = 5U;
	volatile int32_t t95 = 5122;

	t95 = ((x3081<(x3082-x3083))<<x3084);

	if (t95 != 32) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x3089 = 3U;
	int8_t x3090 = 15;
	int64_t x3091 = -1LL;
	uint16_t x3092 = 19U;
	volatile int32_t t96 = -194263;

	t96 = ((x3089<(x3090-x3091))<<x3092);

	if (t96 != 524288) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3181 = UINT64_MAX;
	int8_t x3183 = -1;
	int32_t t97 = 66393887;

	t97 = ((x3181<(x3182-x3183))<<x3184);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3365 = -46;
	int16_t x3367 = -1;
	uint16_t x3368 = 2U;
	volatile int32_t t98 = -11376471;

	t98 = ((x3365<(x3366-x3367))<<x3368);

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3461 = UINT16_MAX;
	volatile int16_t x3462 = INT16_MIN;
	volatile int8_t x3463 = -30;
	int16_t x3464 = 1;
	static volatile int32_t t99 = -574016851;

	t99 = ((x3461<(x3462-x3463))<<x3464);

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


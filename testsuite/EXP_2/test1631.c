#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x41 = INT16_MIN;
volatile int64_t x42 = -246LL;
volatile int32_t t0 = 6985030;
volatile int64_t x141 = -377966LL;
int8_t x234 = INT8_MAX;
static volatile int32_t x235 = -1;
volatile uint16_t x238 = 24U;
volatile uint8_t x240 = 28U;
int8_t x318 = 1;
volatile int16_t x426 = INT16_MAX;
int8_t x427 = INT8_MAX;
uint16_t x435 = 737U;
uint8_t x436 = 4U;
int16_t x502 = -167;
int32_t t12 = -186951354;
uint32_t x553 = 396820182U;
int32_t x554 = 328716431;
uint8_t x666 = UINT8_MAX;
int32_t x667 = INT32_MIN;
volatile int32_t t15 = 23061;
volatile int32_t t16 = 1;
int8_t x750 = INT8_MIN;
static int32_t x751 = INT32_MAX;
uint32_t x752 = 7U;
int8_t x768 = 6;
static int32_t x769 = -1;
uint8_t x772 = 1U;
int16_t x799 = INT16_MIN;
uint16_t x800 = 1U;
int32_t x815 = INT32_MAX;
static int8_t x837 = -1;
int64_t x975 = INT64_MAX;
static int64_t x981 = 4800922LL;
static volatile uint32_t x982 = 191441U;
static int64_t x983 = INT64_MIN;
static uint8_t x1001 = 56U;
static volatile int32_t t28 = -311948;
volatile int16_t x1011 = -1;
volatile int32_t t29 = -1;
volatile uint32_t x1023 = 6117U;
static uint16_t x1037 = 204U;
static int16_t x1039 = INT16_MAX;
int8_t x1152 = 1;
static int8_t x1196 = 8;
int8_t x1262 = -5;
int16_t x1391 = INT16_MAX;
static int64_t x1521 = -1149253906734661LL;
int8_t x1536 = 0;
uint64_t x1541 = 75818704133LLU;
int16_t x1542 = -1;
uint64_t x1548 = 1LLU;
int32_t t45 = -398;
uint64_t x1550 = 981LLU;
volatile int32_t x1579 = INT32_MAX;
int32_t t48 = 1;
uint32_t x1619 = UINT32_MAX;
static volatile int8_t x1647 = INT8_MAX;
int8_t x1833 = 3;
int32_t x1857 = 418;
int32_t x1866 = -1;
volatile int32_t t56 = 0;
uint32_t x1924 = 1U;
int32_t t59 = -41310727;
static int32_t x1961 = -14;
int32_t x2058 = -1;
uint16_t x2083 = 9U;
uint8_t x2084 = 1U;
volatile int32_t t62 = 339117;
static uint8_t x2116 = 8U;
volatile int32_t x2175 = -159767765;
int16_t x2289 = INT16_MAX;
int32_t t69 = -319;
static uint32_t x2401 = 58U;
static volatile int64_t x2403 = 1910587517887483LL;
int32_t t71 = -691;
volatile int8_t x2431 = INT8_MIN;
volatile int8_t x2437 = INT8_MIN;
volatile int64_t x2440 = 4LL;
volatile int64_t x2533 = -1LL;
static int8_t x2534 = INT8_MIN;
static uint8_t x2536 = 2U;
static uint8_t x2540 = 2U;
static uint64_t x2553 = 4067155723734340LLU;
int32_t x2581 = INT32_MIN;
volatile int32_t t79 = -24584;
int64_t x2627 = INT64_MAX;
static uint16_t x2628 = 5U;
uint64_t x2639 = 61547LLU;
int32_t x2647 = INT32_MIN;
uint64_t x2654 = 11754180281LLU;
uint32_t x2655 = 12588U;
uint32_t x2656 = 2U;
volatile int8_t x2703 = INT8_MIN;
static int32_t t87 = -21;
int32_t x2757 = INT32_MAX;
int32_t x2758 = INT32_MIN;
uint8_t x2898 = 0U;
uint32_t x2899 = 1432992330U;
int32_t t92 = 507;
uint64_t x2935 = 1865746743LLU;
int64_t x2969 = INT64_MIN;
int16_t x2995 = INT16_MIN;
int32_t t95 = 0;
int32_t x3012 = 10;
static volatile int8_t x3046 = INT8_MIN;
volatile int32_t t97 = 1;
int8_t x3066 = -1;
static uint16_t x3069 = 12U;


void f0(void) {
	uint16_t x43 = 29U;
	volatile uint64_t x44 = 6LLU;

	t0 = ((x41<(x42<=x43))<<x44);

	if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x133 = INT64_MIN;
	volatile uint32_t x134 = 3628U;
	int64_t x135 = INT64_MAX;
	uint8_t x136 = 4U;
	volatile int32_t t1 = -11;

	t1 = ((x133<(x134<=x135))<<x136);

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x137 = -1LL;
	uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 5076LLU;
	uint16_t x140 = 3U;
	int32_t t2 = 0;

	t2 = ((x137<(x138<=x139))<<x140);

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 3U;
	volatile int32_t t3 = -150445;

	t3 = ((x141<(x142<=x143))<<x144);

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x233 = UINT64_MAX;
	int8_t x236 = 2;
	volatile int32_t t4 = -6;

	t4 = ((x233<(x234<=x235))<<x236);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x237 = INT8_MAX;
	static int16_t x239 = 879;
	int32_t t5 = 1075;

	t5 = ((x237<(x238<=x239))<<x240);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x249 = INT64_MAX;
	uint32_t x250 = 88U;
	static uint64_t x251 = 5888LLU;
	uint8_t x252 = 3U;
	int32_t t6 = -2588688;

	t6 = ((x249<(x250<=x251))<<x252);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x319 = 65942555672915716LLU;
	uint8_t x320 = 1U;
	int32_t t7 = 3680;

	t7 = ((x317<(x318<=x319))<<x320);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x345 = 1904;
	int64_t x346 = -97199454643194LL;
	uint8_t x347 = UINT8_MAX;
	int16_t x348 = 30;
	static int32_t t8 = 0;

	t8 = ((x345<(x346<=x347))<<x348);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x425 = -3;
	static int8_t x428 = 1;
	int32_t t9 = -369402;

	t9 = ((x425<(x426<=x427))<<x428);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x433 = INT16_MIN;
	uint32_t x434 = 475973U;
	static volatile int32_t t10 = 21534868;

	t10 = ((x433<(x434<=x435))<<x436);

	if (t10 != 16) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x501 = 61;
	int32_t x503 = -182;
	uint32_t x504 = 1U;
	int32_t t11 = 112360570;

	t11 = ((x501<(x502<=x503))<<x504);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x529 = INT16_MIN;
	uint16_t x530 = 21U;
	int8_t x531 = INT8_MIN;
	uint8_t x532 = 8U;

	t12 = ((x529<(x530<=x531))<<x532);

	if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x555 = -1LL;
	static uint8_t x556 = 1U;
	volatile int32_t t13 = 198473;

	t13 = ((x553<(x554<=x555))<<x556);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x625 = 4029U;
	int16_t x626 = INT16_MAX;
	int16_t x627 = INT16_MAX;
	uint16_t x628 = 8U;
	volatile int32_t t14 = 266165;

	t14 = ((x625<(x626<=x627))<<x628);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x665 = 0;
	int8_t x668 = 3;

	t15 = ((x665<(x666<=x667))<<x668);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x725 = 1094933;
	volatile int16_t x726 = INT16_MAX;
	volatile int16_t x727 = -385;
	volatile int32_t x728 = 2;

	t16 = ((x725<(x726<=x727))<<x728);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x749 = INT8_MIN;
	int32_t t17 = 16408;

	t17 = ((x749<(x750<=x751))<<x752);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x765 = UINT64_MAX;
	uint16_t x766 = UINT16_MAX;
	static volatile uint16_t x767 = 20U;
	volatile int32_t t18 = 3996457;

	t18 = ((x765<(x766<=x767))<<x768);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x770 = INT8_MIN;
	int64_t x771 = INT64_MIN;
	volatile int32_t t19 = -6686;

	t19 = ((x769<(x770<=x771))<<x772);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x797 = 19U;
	uint16_t x798 = 376U;
	int32_t t20 = 69733437;

	t20 = ((x797<(x798<=x799))<<x800);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x813 = 9U;
	uint64_t x814 = 2685156703609978707LLU;
	uint8_t x816 = 17U;
	volatile int32_t t21 = 126;

	t21 = ((x813<(x814<=x815))<<x816);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x838 = -1LL;
	int32_t x839 = INT32_MAX;
	uint8_t x840 = 15U;
	volatile int32_t t22 = -603;

	t22 = ((x837<(x838<=x839))<<x840);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x869 = 2;
	int16_t x870 = INT16_MIN;
	static uint8_t x871 = 17U;
	int64_t x872 = 12LL;
	volatile int32_t t23 = 2;

	t23 = ((x869<(x870<=x871))<<x872);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x909 = -1LL;
	uint32_t x910 = 409U;
	int64_t x911 = -199234763756876854LL;
	volatile int8_t x912 = 7;
	volatile int32_t t24 = 803;

	t24 = ((x909<(x910<=x911))<<x912);

	if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x973 = UINT64_MAX;
	int32_t x974 = INT32_MIN;
	uint8_t x976 = 0U;
	int32_t t25 = 21661;

	t25 = ((x973<(x974<=x975))<<x976);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x984 = 0;
	int32_t t26 = -54;

	t26 = ((x981<(x982<=x983))<<x984);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x993 = 15372807992LLU;
	int64_t x994 = INT64_MIN;
	static uint64_t x995 = 1939111LLU;
	static volatile int32_t x996 = 0;
	int32_t t27 = 22;

	t27 = ((x993<(x994<=x995))<<x996);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1002 = INT32_MIN;
	uint8_t x1003 = 15U;
	static int16_t x1004 = 1;

	t28 = ((x1001<(x1002<=x1003))<<x1004);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1009 = INT64_MIN;
	uint32_t x1010 = UINT32_MAX;
	uint16_t x1012 = 7U;

	t29 = ((x1009<(x1010<=x1011))<<x1012);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1021 = INT8_MIN;
	int16_t x1022 = -1;
	volatile uint8_t x1024 = 1U;
	volatile int32_t t30 = -45797829;

	t30 = ((x1021<(x1022<=x1023))<<x1024);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x1038 = 5384400U;
	int8_t x1040 = 1;
	volatile int32_t t31 = 16;

	t31 = ((x1037<(x1038<=x1039))<<x1040);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1149 = INT8_MAX;
	static volatile int8_t x1150 = 24;
	uint16_t x1151 = 0U;
	int32_t t32 = 0;

	t32 = ((x1149<(x1150<=x1151))<<x1152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1169 = INT64_MIN;
	volatile uint8_t x1170 = UINT8_MAX;
	volatile uint8_t x1171 = 46U;
	static int8_t x1172 = 8;
	volatile int32_t t33 = -46912;

	t33 = ((x1169<(x1170<=x1171))<<x1172);

	if (t33 != 256) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1193 = UINT8_MAX;
	static volatile uint8_t x1194 = 2U;
	int64_t x1195 = INT64_MIN;
	int32_t t34 = 5;

	t34 = ((x1193<(x1194<=x1195))<<x1196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1261 = -1;
	int64_t x1263 = -1LL;
	int8_t x1264 = 11;
	static int32_t t35 = 214945;

	t35 = ((x1261<(x1262<=x1263))<<x1264);

	if (t35 != 2048) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1293 = INT32_MIN;
	volatile int16_t x1294 = INT16_MIN;
	uint16_t x1295 = UINT16_MAX;
	volatile uint8_t x1296 = 28U;
	volatile int32_t t36 = -1844492;

	t36 = ((x1293<(x1294<=x1295))<<x1296);

	if (t36 != 268435456) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1341 = 163869;
	int64_t x1342 = INT64_MIN;
	uint32_t x1343 = UINT32_MAX;
	static int8_t x1344 = 1;
	static int32_t t37 = -2;

	t37 = ((x1341<(x1342<=x1343))<<x1344);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1353 = 989U;
	int16_t x1354 = -1;
	int32_t x1355 = INT32_MIN;
	volatile int8_t x1356 = 2;
	volatile int32_t t38 = -3;

	t38 = ((x1353<(x1354<=x1355))<<x1356);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1389 = INT16_MAX;
	int64_t x1390 = 0LL;
	static uint32_t x1392 = 7U;
	int32_t t39 = -812997;

	t39 = ((x1389<(x1390<=x1391))<<x1392);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1413 = 8;
	static volatile uint8_t x1414 = 29U;
	static int16_t x1415 = -81;
	static uint32_t x1416 = 7U;
	static volatile int32_t t40 = -4925;

	t40 = ((x1413<(x1414<=x1415))<<x1416);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1497 = 1678U;
	int16_t x1498 = -14448;
	static int32_t x1499 = INT32_MIN;
	uint32_t x1500 = 3U;
	static volatile int32_t t41 = 2;

	t41 = ((x1497<(x1498<=x1499))<<x1500);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1522 = INT64_MIN;
	int64_t x1523 = -1LL;
	int16_t x1524 = 1;
	volatile int32_t t42 = 361113;

	t42 = ((x1521<(x1522<=x1523))<<x1524);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1533 = INT64_MIN;
	int16_t x1534 = INT16_MIN;
	static uint16_t x1535 = UINT16_MAX;
	int32_t t43 = 316309;

	t43 = ((x1533<(x1534<=x1535))<<x1536);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1543 = -1;
	uint8_t x1544 = 7U;
	int32_t t44 = -9;

	t44 = ((x1541<(x1542<=x1543))<<x1544);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1545 = INT32_MAX;
	int64_t x1546 = 416110LL;
	static int16_t x1547 = INT16_MIN;

	t45 = ((x1545<(x1546<=x1547))<<x1548);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x1549 = 240LL;
	volatile int16_t x1551 = -1;
	volatile uint8_t x1552 = 16U;
	int32_t t46 = 58453;

	t46 = ((x1549<(x1550<=x1551))<<x1552);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1577 = INT16_MIN;
	int32_t x1578 = -1;
	uint16_t x1580 = 26U;
	int32_t t47 = -192101492;

	t47 = ((x1577<(x1578<=x1579))<<x1580);

	if (t47 != 67108864) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1581 = 756459335;
	static uint32_t x1582 = 6985771U;
	int32_t x1583 = -1;
	static int16_t x1584 = 2;

	t48 = ((x1581<(x1582<=x1583))<<x1584);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1617 = INT64_MIN;
	uint16_t x1618 = 11U;
	int8_t x1620 = 13;
	int32_t t49 = -15;

	t49 = ((x1617<(x1618<=x1619))<<x1620);

	if (t49 != 8192) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x1629 = UINT32_MAX;
	uint16_t x1630 = 75U;
	static uint64_t x1631 = 30022103437155642LLU;
	static int16_t x1632 = 3;
	int32_t t50 = 25;

	t50 = ((x1629<(x1630<=x1631))<<x1632);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x1645 = UINT8_MAX;
	uint8_t x1646 = UINT8_MAX;
	volatile int8_t x1648 = 0;
	volatile int32_t t51 = -1;

	t51 = ((x1645<(x1646<=x1647))<<x1648);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1745 = INT32_MIN;
	volatile int32_t x1746 = INT32_MIN;
	uint16_t x1747 = UINT16_MAX;
	static int64_t x1748 = 18LL;
	volatile int32_t t52 = -40626;

	t52 = ((x1745<(x1746<=x1747))<<x1748);

	if (t52 != 262144) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1753 = INT64_MIN;
	uint8_t x1754 = 7U;
	int32_t x1755 = -127701;
	volatile int8_t x1756 = 16;
	static volatile int32_t t53 = -38;

	t53 = ((x1753<(x1754<=x1755))<<x1756);

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1834 = 2023687019415LLU;
	uint16_t x1835 = 576U;
	uint8_t x1836 = 0U;
	volatile int32_t t54 = -184174;

	t54 = ((x1833<(x1834<=x1835))<<x1836);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x1858 = 955581030822645LL;
	int8_t x1859 = -59;
	static uint16_t x1860 = 1U;
	int32_t t55 = -52925262;

	t55 = ((x1857<(x1858<=x1859))<<x1860);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1865 = 23730U;
	volatile int16_t x1867 = -1;
	uint8_t x1868 = 2U;

	t56 = ((x1865<(x1866<=x1867))<<x1868);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x1909 = 14U;
	volatile int64_t x1910 = 1LL;
	uint16_t x1911 = 68U;
	int16_t x1912 = 0;
	static volatile int32_t t57 = -996035;

	t57 = ((x1909<(x1910<=x1911))<<x1912);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x1921 = 46116U;
	static int16_t x1922 = -1;
	int16_t x1923 = INT16_MAX;
	int32_t t58 = -1187;

	t58 = ((x1921<(x1922<=x1923))<<x1924);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1953 = 3744LLU;
	int64_t x1954 = -1LL;
	static volatile int8_t x1955 = INT8_MIN;
	int32_t x1956 = 1;

	t59 = ((x1953<(x1954<=x1955))<<x1956);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1962 = INT32_MIN;
	int8_t x1963 = -33;
	uint32_t x1964 = 1U;
	static volatile int32_t t60 = -62;

	t60 = ((x1961<(x1962<=x1963))<<x1964);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2057 = -4;
	int8_t x2059 = -1;
	static int8_t x2060 = 30;
	int32_t t61 = 336058;

	t61 = ((x2057<(x2058<=x2059))<<x2060);

	if (t61 != 1073741824) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2081 = 1LLU;
	static int8_t x2082 = -57;

	t62 = ((x2081<(x2082<=x2083))<<x2084);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2113 = 78914U;
	uint64_t x2114 = 1081916817LLU;
	static int32_t x2115 = INT32_MIN;
	volatile int32_t t63 = -331766;

	t63 = ((x2113<(x2114<=x2115))<<x2116);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2153 = 4;
	volatile int8_t x2154 = 1;
	uint32_t x2155 = 1483766U;
	static volatile uint8_t x2156 = 2U;
	volatile int32_t t64 = -1666;

	t64 = ((x2153<(x2154<=x2155))<<x2156);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2173 = INT8_MAX;
	static int8_t x2174 = INT8_MIN;
	volatile int8_t x2176 = 1;
	volatile int32_t t65 = 15;

	t65 = ((x2173<(x2174<=x2175))<<x2176);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2229 = 2U;
	int32_t x2230 = INT32_MIN;
	int8_t x2231 = -34;
	int8_t x2232 = 4;
	volatile int32_t t66 = 44;

	t66 = ((x2229<(x2230<=x2231))<<x2232);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x2277 = 40U;
	static volatile int32_t x2278 = INT32_MAX;
	volatile uint16_t x2279 = 2438U;
	int16_t x2280 = 3;
	volatile int32_t t67 = -1;

	t67 = ((x2277<(x2278<=x2279))<<x2280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2290 = INT64_MIN;
	volatile int32_t x2291 = -6599268;
	static uint8_t x2292 = 0U;
	static volatile int32_t t68 = 3;

	t68 = ((x2289<(x2290<=x2291))<<x2292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2337 = UINT8_MAX;
	uint64_t x2338 = UINT64_MAX;
	static volatile int16_t x2339 = -1;
	volatile uint16_t x2340 = 17U;

	t69 = ((x2337<(x2338<=x2339))<<x2340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2402 = 518043729LLU;
	uint8_t x2404 = 28U;
	volatile int32_t t70 = 0;

	t70 = ((x2401<(x2402<=x2403))<<x2404);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2413 = INT8_MIN;
	static int16_t x2414 = INT16_MIN;
	volatile int16_t x2415 = -1;
	uint32_t x2416 = 3U;

	t71 = ((x2413<(x2414<=x2415))<<x2416);

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2429 = 3U;
	volatile int64_t x2430 = -782635575535LL;
	volatile int8_t x2432 = 2;
	volatile int32_t t72 = -213;

	t72 = ((x2429<(x2430<=x2431))<<x2432);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2438 = 6;
	static volatile int32_t x2439 = 0;
	volatile int32_t t73 = 0;

	t73 = ((x2437<(x2438<=x2439))<<x2440);

	if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2525 = INT16_MAX;
	volatile int64_t x2526 = -1LL;
	int64_t x2527 = INT64_MIN;
	volatile uint16_t x2528 = 0U;
	int32_t t74 = 316395;

	t74 = ((x2525<(x2526<=x2527))<<x2528);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x2535 = 31U;
	volatile int32_t t75 = -33607434;

	t75 = ((x2533<(x2534<=x2535))<<x2536);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2537 = 8949LL;
	int8_t x2538 = 10;
	int16_t x2539 = INT16_MIN;
	volatile int32_t t76 = 212529443;

	t76 = ((x2537<(x2538<=x2539))<<x2540);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2554 = INT16_MAX;
	static volatile int64_t x2555 = INT64_MIN;
	volatile uint8_t x2556 = 7U;
	volatile int32_t t77 = 2290095;

	t77 = ((x2553<(x2554<=x2555))<<x2556);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2573 = 0U;
	int32_t x2574 = 478589;
	int16_t x2575 = INT16_MIN;
	int8_t x2576 = 16;
	static volatile int32_t t78 = 10938;

	t78 = ((x2573<(x2574<=x2575))<<x2576);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x2582 = 60294509220322431LLU;
	static int32_t x2583 = -1;
	static uint8_t x2584 = 1U;

	t79 = ((x2581<(x2582<=x2583))<<x2584);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2625 = INT16_MIN;
	volatile uint64_t x2626 = UINT64_MAX;
	volatile int32_t t80 = -20020;

	t80 = ((x2625<(x2626<=x2627))<<x2628);

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x2637 = 151U;
	int16_t x2638 = INT16_MIN;
	volatile int8_t x2640 = 20;
	volatile int32_t t81 = -1107;

	t81 = ((x2637<(x2638<=x2639))<<x2640);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2645 = INT64_MAX;
	volatile int64_t x2646 = INT64_MIN;
	int16_t x2648 = 18;
	volatile int32_t t82 = -1404;

	t82 = ((x2645<(x2646<=x2647))<<x2648);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2653 = 1605380627897701023LLU;
	static volatile int32_t t83 = -131;

	t83 = ((x2653<(x2654<=x2655))<<x2656);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2665 = 67U;
	int8_t x2666 = -1;
	uint8_t x2667 = 3U;
	int16_t x2668 = 1;
	volatile int32_t t84 = -97;

	t84 = ((x2665<(x2666<=x2667))<<x2668);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2669 = INT8_MAX;
	uint32_t x2670 = UINT32_MAX;
	int16_t x2671 = 850;
	int8_t x2672 = 0;
	int32_t t85 = -143008939;

	t85 = ((x2669<(x2670<=x2671))<<x2672);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2701 = 23U;
	static int32_t x2702 = INT32_MAX;
	static uint8_t x2704 = 0U;
	volatile int32_t t86 = -225449199;

	t86 = ((x2701<(x2702<=x2703))<<x2704);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2705 = INT8_MIN;
	int64_t x2706 = -37548LL;
	static uint16_t x2707 = 0U;
	int8_t x2708 = 13;

	t87 = ((x2705<(x2706<=x2707))<<x2708);

	if (t87 != 8192) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2759 = 14U;
	volatile int8_t x2760 = 3;
	static int32_t t88 = -218;

	t88 = ((x2757<(x2758<=x2759))<<x2760);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x2825 = -1;
	int16_t x2826 = INT16_MIN;
	int64_t x2827 = INT64_MIN;
	uint8_t x2828 = 3U;
	volatile int32_t t89 = 17976263;

	t89 = ((x2825<(x2826<=x2827))<<x2828);

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2861 = 8115LLU;
	int16_t x2862 = INT16_MIN;
	uint8_t x2863 = 1U;
	volatile int32_t x2864 = 1;
	volatile int32_t t90 = -27028;

	t90 = ((x2861<(x2862<=x2863))<<x2864);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2881 = -7;
	static int8_t x2882 = INT8_MAX;
	int16_t x2883 = INT16_MIN;
	uint8_t x2884 = 6U;
	int32_t t91 = 157044;

	t91 = ((x2881<(x2882<=x2883))<<x2884);

	if (t91 != 64) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2897 = 4071;
	int16_t x2900 = 8;

	t92 = ((x2897<(x2898<=x2899))<<x2900);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2933 = -1LL;
	static int64_t x2934 = 274539665723LL;
	uint32_t x2936 = 3U;
	int32_t t93 = 18688;

	t93 = ((x2933<(x2934<=x2935))<<x2936);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x2970 = 31U;
	volatile int32_t x2971 = INT32_MAX;
	uint8_t x2972 = 1U;
	static volatile int32_t t94 = -425015;

	t94 = ((x2969<(x2970<=x2971))<<x2972);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x2993 = INT16_MAX;
	int16_t x2994 = -1;
	static uint8_t x2996 = 14U;

	t95 = ((x2993<(x2994<=x2995))<<x2996);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3009 = 5;
	uint8_t x3010 = 1U;
	int64_t x3011 = INT64_MIN;
	int32_t t96 = 64;

	t96 = ((x3009<(x3010<=x3011))<<x3012);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3045 = 3U;
	int32_t x3047 = -971769;
	uint8_t x3048 = 11U;

	t97 = ((x3045<(x3046<=x3047))<<x3048);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3065 = UINT64_MAX;
	int8_t x3067 = INT8_MIN;
	static uint16_t x3068 = 0U;
	static volatile int32_t t98 = 38146;

	t98 = ((x3065<(x3066<=x3067))<<x3068);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3070 = INT16_MAX;
	uint8_t x3071 = UINT8_MAX;
	int8_t x3072 = 1;
	volatile int32_t t99 = -34;

	t99 = ((x3069<(x3070<=x3071))<<x3072);

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


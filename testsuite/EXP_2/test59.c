#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 7882648;
uint16_t x167 = 19203U;
int32_t x180 = 3;
int32_t t4 = -374;
volatile int8_t x183 = INT8_MIN;
uint8_t x184 = 4U;
int32_t x238 = INT32_MAX;
static int8_t x312 = 11;
int64_t x338 = -463730LL;
volatile int64_t x345 = -43LL;
uint64_t x346 = UINT64_MAX;
int16_t x373 = INT16_MAX;
uint64_t x457 = UINT64_MAX;
int32_t x458 = 0;
static volatile int8_t x460 = 0;
volatile int8_t x473 = -2;
uint8_t x475 = 2U;
uint32_t t15 = 15081U;
int8_t x564 = 5;
int16_t x601 = INT16_MAX;
uint64_t t20 = 3333LLU;
int8_t x734 = INT8_MAX;
uint8_t x735 = UINT8_MAX;
int8_t x796 = 0;
volatile uint64_t t22 = 7754516400LLU;
int64_t t23 = -187581724LL;
static volatile uint64_t t24 = 3LLU;
uint64_t t25 = 132432112961LLU;
volatile uint32_t x837 = UINT32_MAX;
int8_t x894 = INT8_MAX;
uint64_t t27 = 6111502969282LLU;
volatile int32_t t28 = -498501;
static int8_t x977 = -23;
int16_t x979 = INT16_MIN;
static uint32_t x980 = 14U;
int16_t x1066 = INT16_MIN;
uint16_t x1068 = 6U;
static uint8_t x1100 = 6U;
static volatile uint64_t x1142 = 5LLU;
uint32_t x1185 = 51U;
int64_t x1187 = INT64_MIN;
volatile int16_t x1188 = 8;
int64_t t36 = 22520447485066LL;
int16_t x1193 = INT16_MIN;
int64_t x1251 = INT64_MAX;
int16_t x1348 = 0;
int8_t x1381 = INT8_MAX;
uint32_t x1404 = 4U;
int32_t x1459 = -1;
uint8_t x1460 = 2U;
int8_t x1466 = INT8_MAX;
volatile int16_t x1468 = 1;
int16_t x1482 = INT16_MIN;
int16_t x1794 = 88;
uint16_t x1796 = 33U;
volatile uint32_t x1799 = 15402167U;
volatile int64_t t52 = 4LL;
volatile int16_t x2042 = INT16_MIN;
static uint32_t t53 = 2587880U;
static volatile int32_t x2229 = -1;
uint8_t x2232 = 25U;
static int8_t x2286 = INT8_MIN;
volatile int32_t x2287 = 192660091;
static uint8_t x2346 = UINT8_MAX;
uint8_t x2348 = 0U;
static volatile uint32_t t60 = 508088U;
uint32_t x2425 = 4478279U;
static int64_t x2427 = INT64_MIN;
volatile int32_t x2453 = INT32_MIN;
uint16_t x2456 = 31U;
int32_t x2491 = INT32_MIN;
int64_t x2550 = 107062549619813LL;
uint16_t x2660 = 1U;
static int8_t x2720 = 1;
volatile uint32_t t68 = 838U;
uint32_t t69 = 501601426U;
int8_t x2842 = INT8_MAX;
int64_t t72 = -150456768859361LL;
volatile uint32_t x3070 = UINT32_MAX;
volatile uint8_t x3076 = 1U;
static uint64_t x3170 = 28LLU;
uint16_t x3309 = 4U;
static uint16_t x3312 = 0U;
volatile int32_t x3322 = INT32_MIN;
volatile int16_t x3323 = INT16_MAX;
uint32_t x3474 = UINT32_MAX;
static int64_t x3476 = 56LL;
uint8_t x3594 = 79U;
uint64_t x3595 = 994759622LLU;
volatile uint64_t x3675 = 1240494574127LLU;
int64_t x3690 = 14021619614016LL;
uint16_t x3777 = UINT16_MAX;
static int64_t t87 = 590328674794628LL;
uint32_t x3993 = UINT32_MAX;
int64_t x4026 = -1439480LL;
int8_t x4129 = 16;
int32_t t94 = 362;
int8_t x4350 = -1;
uint64_t x4365 = UINT64_MAX;
int32_t x4366 = INT32_MAX;
uint64_t t97 = 6LLU;


void f0(void) {
	uint32_t x21 = UINT32_MAX;
	int8_t x22 = -12;
	int8_t x23 = INT8_MAX;
	int16_t x24 = 3;
	volatile uint32_t t0 = 1350U;

	t0 = ((x21%(x22+x23))>>x24);

	if (t0 != 10U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x81 = INT32_MAX;
	static volatile uint8_t x82 = 11U;
	uint8_t x83 = UINT8_MAX;
	volatile uint8_t x84 = 29U;

	t1 = ((x81%(x82+x83))>>x84);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	volatile int32_t x119 = 1375537;
	uint16_t x120 = 4U;
	int32_t t2 = 181324496;

	t2 = ((x117%(x118+x119))>>x120);

	if (t2 != 2047) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MIN;
	uint8_t x168 = 1U;
	volatile uint32_t t3 = 11740U;

	t3 = ((x165%(x166+x167))>>x168);

	if (t3 != 1072U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x177 = 211U;
	int32_t x178 = 8;
	int8_t x179 = INT8_MIN;

	t4 = ((x177%(x178+x179))>>x180);

	if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x181 = 357849549675061562LL;
	uint32_t x182 = UINT32_MAX;
	volatile int64_t t5 = 31745259180195LL;

	t5 = ((x181%(x182+x183))>>x184);

	if (t5 != 130076080LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x209 = 3157654430864LLU;
	int32_t x210 = 147159961;
	int16_t x211 = INT16_MIN;
	volatile int64_t x212 = 36LL;
	static volatile uint64_t t6 = 53268793115082420LLU;

	t6 = ((x209%(x210+x211))>>x212);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x213 = UINT8_MAX;
	int64_t x214 = -1LL;
	volatile uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 2U;
	int64_t t7 = 139201303854491269LL;

	t7 = ((x213%(x214+x215))>>x216);

	if (t7 != 63LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x237 = INT16_MAX;
	int8_t x239 = 0;
	uint8_t x240 = 1U;
	int32_t t8 = 0;

	t8 = ((x237%(x238+x239))>>x240);

	if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x309 = 39LLU;
	int16_t x310 = -1;
	uint16_t x311 = 23U;
	volatile uint64_t t9 = 1LLU;

	t9 = ((x309%(x310+x311))>>x312);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x337 = INT8_MAX;
	uint64_t x339 = 2465897859997808LLU;
	static int16_t x340 = 5;
	uint64_t t10 = 1366345872LLU;

	t10 = ((x337%(x338+x339))>>x340);

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x347 = INT64_MIN;
	volatile uint32_t x348 = 7U;
	volatile uint64_t t11 = 1559LLU;

	t11 = ((x345%(x346+x347))>>x348);

	if (t11 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x374 = 27703754939LLU;
	static int8_t x375 = -1;
	static uint16_t x376 = 3U;
	uint64_t t12 = 147265019387004LLU;

	t12 = ((x373%(x374+x375))>>x376);

	if (t12 != 4095LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x389 = 0U;
	volatile int8_t x390 = -6;
	int8_t x391 = -6;
	uint32_t x392 = 6U;
	volatile int32_t t13 = -1123261;

	t13 = ((x389%(x390+x391))>>x392);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x459 = 22U;
	volatile uint64_t t14 = 46675118144519LLU;

	t14 = ((x457%(x458+x459))>>x460);

	if (t14 != 15LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x474 = 6U;
	static volatile uint8_t x476 = 3U;

	t15 = ((x473%(x474+x475))>>x476);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x525 = 2799446U;
	static uint32_t x526 = UINT32_MAX;
	uint8_t x527 = 122U;
	int32_t x528 = 0;
	volatile uint32_t t16 = 54351844U;

	t16 = ((x525%(x526+x527))>>x528);

	if (t16 != 111U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x545 = 5416379U;
	volatile int64_t x546 = -1LL;
	int8_t x547 = INT8_MIN;
	int32_t x548 = 0;
	volatile int64_t t17 = 3417153813LL;

	t17 = ((x545%(x546+x547))>>x548);

	if (t17 != 56LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x561 = INT16_MAX;
	int32_t x562 = 351;
	static int8_t x563 = -1;
	int32_t t18 = -69633;

	t18 = ((x561%(x562+x563))>>x564);

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x573 = INT8_MAX;
	uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MAX;
	int8_t x576 = 2;
	static volatile uint64_t t19 = 192056989022575LLU;

	t19 = ((x573%(x574+x575))>>x576);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x602 = UINT64_MAX;
	static uint16_t x603 = UINT16_MAX;
	volatile uint16_t x604 = 17U;

	t20 = ((x601%(x602+x603))>>x604);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x733 = 69683479621963000LL;
	uint8_t x736 = 32U;
	volatile int64_t t21 = 3481651957LL;

	t21 = ((x733%(x734+x735))>>x736);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x793 = INT16_MIN;
	volatile int8_t x794 = 1;
	uint64_t x795 = 8503145136LLU;

	t22 = ((x793%(x794+x795))>>x796);

	if (t22 != 2230085321LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x797 = 487014U;
	int64_t x798 = -1LL;
	static int32_t x799 = INT32_MIN;
	uint8_t x800 = 24U;

	t23 = ((x797%(x798+x799))>>x800);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x809 = 49U;
	static uint8_t x810 = 3U;
	uint64_t x811 = UINT64_MAX;
	static uint32_t x812 = 29U;

	t24 = ((x809%(x810+x811))>>x812);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x833 = INT8_MIN;
	uint64_t x834 = 13631070384921624LLU;
	uint8_t x835 = UINT8_MAX;
	static volatile int8_t x836 = 7;

	t25 = ((x833%(x834+x835))>>x836);

	if (t25 != 30514397736321LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x838 = INT16_MAX;
	int32_t x839 = -1;
	uint8_t x840 = 1U;
	volatile uint32_t t26 = 1U;

	t26 = ((x837%(x838+x839))>>x840);

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x893 = 3907871LLU;
	int32_t x895 = INT32_MIN;
	int8_t x896 = 1;

	t27 = ((x893%(x894+x895))>>x896);

	if (t27 != 1953935LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x913 = 15U;
	static int32_t x914 = -1;
	int16_t x915 = INT16_MIN;
	int16_t x916 = 1;

	t28 = ((x913%(x914+x915))>>x916);

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x937 = UINT16_MAX;
	int16_t x938 = 6458;
	static int8_t x939 = -54;
	int8_t x940 = 0;
	int32_t t29 = 978066054;

	t29 = ((x937%(x938+x939))>>x940);

	if (t29 != 1495) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x978 = UINT32_MAX;
	volatile uint32_t t30 = 57U;

	t30 = ((x977%(x978+x979))>>x980);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1009 = 6828096620599LLU;
	uint16_t x1010 = 7U;
	static int64_t x1011 = 131097257LL;
	static uint8_t x1012 = 0U;
	uint64_t t31 = 85952494845276LLU;

	t31 = ((x1009%(x1010+x1011))>>x1012);

	if (t31 != 26722423LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1065 = 4U;
	volatile int32_t x1067 = -1;
	volatile int32_t t32 = -13078629;

	t32 = ((x1065%(x1066+x1067))>>x1068);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1097 = -1;
	static volatile uint32_t x1098 = 2236191U;
	uint8_t x1099 = 41U;
	static uint32_t t33 = 230570961U;

	t33 = ((x1097%(x1098+x1099))>>x1100);

	if (t33 != 21903U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1141 = INT64_MIN;
	static uint8_t x1143 = 3U;
	uint8_t x1144 = 53U;
	uint64_t t34 = 176284033471583301LLU;

	t34 = ((x1141%(x1142+x1143))>>x1144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1169 = UINT16_MAX;
	static int16_t x1170 = 9172;
	int8_t x1171 = 9;
	uint64_t x1172 = 2LLU;
	int32_t t35 = -71;

	t35 = ((x1169%(x1170+x1171))>>x1172);

	if (t35 != 317) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1186 = 45U;

	t36 = ((x1185%(x1186+x1187))>>x1188);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x1194 = -92;
	uint32_t x1195 = 47658U;
	int8_t x1196 = 0;
	uint32_t t37 = 4345786U;

	t37 = ((x1193%(x1194+x1195))>>x1196);

	if (t37 != 10124U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1249 = UINT32_MAX;
	volatile int16_t x1250 = INT16_MIN;
	uint16_t x1252 = 9U;
	volatile int64_t t38 = -7LL;

	t38 = ((x1249%(x1250+x1251))>>x1252);

	if (t38 != 8388607LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1345 = -50;
	uint32_t x1346 = 1908526U;
	int8_t x1347 = INT8_MAX;
	volatile uint32_t t39 = 60323699U;

	t39 = ((x1345%(x1346+x1347))>>x1348);

	if (t39 != 497996U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1382 = 60LLU;
	uint32_t x1383 = UINT32_MAX;
	uint16_t x1384 = 6U;
	volatile uint64_t t40 = 416034379125982LLU;

	t40 = ((x1381%(x1382+x1383))>>x1384);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1401 = 93U;
	static int16_t x1402 = INT16_MIN;
	uint64_t x1403 = 85352LLU;
	uint64_t t41 = 506625407269719LLU;

	t41 = ((x1401%(x1402+x1403))>>x1404);

	if (t41 != 5LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1457 = 24060U;
	int8_t x1458 = INT8_MIN;
	int32_t t42 = 99921335;

	t42 = ((x1457%(x1458+x1459))>>x1460);

	if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1465 = 29;
	volatile int8_t x1467 = INT8_MIN;
	int32_t t43 = -81;

	t43 = ((x1465%(x1466+x1467))>>x1468);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1481 = UINT16_MAX;
	int16_t x1483 = INT16_MIN;
	static uint8_t x1484 = 5U;
	int32_t t44 = -108;

	t44 = ((x1481%(x1482+x1483))>>x1484);

	if (t44 != 2047) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1541 = UINT8_MAX;
	int16_t x1542 = -14;
	int64_t x1543 = -1LL;
	uint16_t x1544 = 12U;
	int64_t t45 = -2195636454188LL;

	t45 = ((x1541%(x1542+x1543))>>x1544);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1629 = 500LLU;
	volatile int32_t x1630 = -78;
	volatile uint16_t x1631 = 148U;
	volatile uint8_t x1632 = 1U;
	static uint64_t t46 = 168950LLU;

	t46 = ((x1629%(x1630+x1631))>>x1632);

	if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1661 = 967403U;
	int32_t x1662 = -1;
	int16_t x1663 = -1;
	uint64_t x1664 = 1LLU;
	volatile uint32_t t47 = 603U;

	t47 = ((x1661%(x1662+x1663))>>x1664);

	if (t47 != 483701U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1793 = UINT8_MAX;
	uint64_t x1795 = UINT64_MAX;
	volatile uint64_t t48 = 263231330719290656LLU;

	t48 = ((x1793%(x1794+x1795))>>x1796);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1797 = 0;
	static volatile uint16_t x1798 = 394U;
	int16_t x1800 = 0;
	volatile uint32_t t49 = 5564130U;

	t49 = ((x1797%(x1798+x1799))>>x1800);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1853 = INT8_MAX;
	int64_t x1854 = INT64_MIN;
	volatile int64_t x1855 = INT64_MAX;
	int8_t x1856 = 0;
	int64_t t50 = 3837148032425820LL;

	t50 = ((x1853%(x1854+x1855))>>x1856);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1877 = 67U;
	int64_t x1878 = -1LL;
	uint64_t x1879 = 5895LLU;
	int64_t x1880 = 0LL;
	uint64_t t51 = 50LLU;

	t51 = ((x1877%(x1878+x1879))>>x1880);

	if (t51 != 67LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1937 = 0U;
	int16_t x1938 = INT16_MIN;
	int64_t x1939 = 739237791LL;
	int8_t x1940 = 1;

	t52 = ((x1937%(x1938+x1939))>>x1940);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2041 = -1;
	uint32_t x2043 = 302U;
	static uint8_t x2044 = 3U;

	t53 = ((x2041%(x2042+x2043))>>x2044);

	if (t53 != 4058U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x2061 = 1026U;
	static int16_t x2062 = -1;
	int16_t x2063 = INT16_MIN;
	uint8_t x2064 = 5U;
	int32_t t54 = -845811510;

	t54 = ((x2061%(x2062+x2063))>>x2064);

	if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2230 = 69337393058941LLU;
	static volatile int8_t x2231 = INT8_MIN;
	volatile uint64_t t55 = 1LLU;

	t55 = ((x2229%(x2230+x2231))>>x2232);

	if (t55 != 477199LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2285 = 20934;
	int32_t x2288 = 6;
	int32_t t56 = 7237;

	t56 = ((x2285%(x2286+x2287))>>x2288);

	if (t56 != 327) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x2297 = 15U;
	int16_t x2298 = INT16_MAX;
	uint32_t x2299 = UINT32_MAX;
	uint8_t x2300 = 5U;
	volatile uint32_t t57 = 23486U;

	t57 = ((x2297%(x2298+x2299))>>x2300);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2309 = 851;
	int32_t x2310 = 204692;
	int8_t x2311 = INT8_MIN;
	int8_t x2312 = 2;
	volatile int32_t t58 = 2350;

	t58 = ((x2309%(x2310+x2311))>>x2312);

	if (t58 != 212) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2345 = 117U;
	volatile uint8_t x2347 = 0U;
	static int32_t t59 = -111483740;

	t59 = ((x2345%(x2346+x2347))>>x2348);

	if (t59 != 117) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2397 = 77265U;
	uint8_t x2398 = 11U;
	int16_t x2399 = INT16_MAX;
	uint8_t x2400 = 6U;

	t60 = ((x2397%(x2398+x2399))>>x2400);

	if (t60 != 182U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x2426 = 1903753578460965LLU;
	uint16_t x2428 = 0U;
	volatile uint64_t t61 = 911187LLU;

	t61 = ((x2425%(x2426+x2427))>>x2428);

	if (t61 != 4478279LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2454 = -40758279;
	uint64_t x2455 = 19348383LLU;
	volatile uint64_t t62 = 5001319810600056LLU;

	t62 = ((x2453%(x2454+x2455))>>x2456);

	if (t62 != 8589934591LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2489 = -3272432;
	static volatile uint64_t x2490 = 213231742LLU;
	int16_t x2492 = 5;
	uint64_t t63 = 127973582LLU;

	t63 = ((x2489%(x2490+x2491))>>x2492);

	if (t63 != 60343108LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2513 = INT32_MAX;
	int16_t x2514 = INT16_MIN;
	uint16_t x2515 = 1151U;
	int32_t x2516 = 4;
	int32_t t64 = -23760688;

	t64 = ((x2513%(x2514+x2515))>>x2516);

	if (t64 != 1586) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2549 = 2050094U;
	volatile int32_t x2551 = -1575949;
	static uint8_t x2552 = 25U;
	volatile int64_t t65 = 432462223012947LL;

	t65 = ((x2549%(x2550+x2551))>>x2552);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x2645 = 55U;
	uint16_t x2646 = 561U;
	int64_t x2647 = INT64_MIN;
	uint8_t x2648 = 0U;
	volatile int64_t t66 = -32006868114153682LL;

	t66 = ((x2645%(x2646+x2647))>>x2648);

	if (t66 != 55LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2657 = UINT64_MAX;
	static uint16_t x2658 = 1U;
	static int16_t x2659 = INT16_MIN;
	uint64_t t67 = 10153LLU;

	t67 = ((x2657%(x2658+x2659))>>x2660);

	if (t67 != 16383LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2717 = INT16_MIN;
	volatile uint32_t x2718 = 5U;
	int8_t x2719 = -1;

	t68 = ((x2717%(x2718+x2719))>>x2720);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2829 = INT8_MIN;
	static uint32_t x2830 = 6U;
	volatile uint32_t x2831 = UINT32_MAX;
	int16_t x2832 = 0;

	t69 = ((x2829%(x2830+x2831))>>x2832);

	if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2841 = 57635105;
	int32_t x2843 = 2406;
	int8_t x2844 = 19;
	volatile int32_t t70 = -97103999;

	t70 = ((x2841%(x2842+x2843))>>x2844);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3049 = INT16_MIN;
	volatile uint32_t x3050 = 505445U;
	int32_t x3051 = 187664;
	volatile uint8_t x3052 = 3U;
	uint32_t t71 = 56076U;

	t71 = ((x3049%(x3050+x3051))>>x3052);

	if (t71 != 53895U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3065 = 0LL;
	uint32_t x3066 = 1U;
	uint8_t x3067 = UINT8_MAX;
	uint8_t x3068 = 26U;

	t72 = ((x3065%(x3066+x3067))>>x3068);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3069 = 1;
	uint16_t x3071 = 4U;
	volatile uint8_t x3072 = 0U;
	volatile uint32_t t73 = 5U;

	t73 = ((x3069%(x3070+x3071))>>x3072);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3073 = INT8_MAX;
	int16_t x3074 = INT16_MAX;
	uint32_t x3075 = 98088U;
	volatile uint32_t t74 = 6622U;

	t74 = ((x3073%(x3074+x3075))>>x3076);

	if (t74 != 63U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3165 = 1;
	volatile int64_t x3166 = INT64_MIN;
	static int8_t x3167 = 61;
	int64_t x3168 = 0LL;
	static volatile int64_t t75 = -17305202752614198LL;

	t75 = ((x3165%(x3166+x3167))>>x3168);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3169 = UINT8_MAX;
	int8_t x3171 = 62;
	uint32_t x3172 = 21U;
	volatile uint64_t t76 = 59855716564769LLU;

	t76 = ((x3169%(x3170+x3171))>>x3172);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3201 = INT64_MIN;
	int16_t x3202 = INT16_MIN;
	static uint8_t x3203 = 0U;
	uint8_t x3204 = 8U;
	volatile int64_t t77 = 759LL;

	t77 = ((x3201%(x3202+x3203))>>x3204);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3229 = 0;
	int16_t x3230 = INT16_MAX;
	int16_t x3231 = 2811;
	uint8_t x3232 = 3U;
	volatile int32_t t78 = -2;

	t78 = ((x3229%(x3230+x3231))>>x3232);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3245 = 485U;
	volatile int32_t x3246 = -1;
	volatile int8_t x3247 = INT8_MIN;
	int8_t x3248 = 27;
	int32_t t79 = -3539;

	t79 = ((x3245%(x3246+x3247))>>x3248);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3310 = INT8_MIN;
	int16_t x3311 = -1;
	volatile int32_t t80 = 515115;

	t80 = ((x3309%(x3310+x3311))>>x3312);

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x3321 = UINT64_MAX;
	uint16_t x3324 = 21U;
	uint64_t t81 = 27527492LLU;

	t81 = ((x3321%(x3322+x3323))>>x3324);

	if (t81 != 1023LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3473 = 1618619634618168263LL;
	volatile int64_t x3475 = 63937283258928656LL;
	static int64_t t82 = -3966LL;

	t82 = ((x3473%(x3474+x3475))>>x3476);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3489 = 143U;
	int16_t x3490 = INT16_MAX;
	int8_t x3491 = INT8_MIN;
	int16_t x3492 = 9;
	volatile uint32_t t83 = 7U;

	t83 = ((x3489%(x3490+x3491))>>x3492);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3593 = INT16_MIN;
	static int8_t x3596 = 55;
	volatile uint64_t t84 = 251102767LLU;

	t84 = ((x3593%(x3594+x3595))>>x3596);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3673 = 12;
	int32_t x3674 = INT32_MAX;
	uint16_t x3676 = 32U;
	uint64_t t85 = 974399004152LLU;

	t85 = ((x3673%(x3674+x3675))>>x3676);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3689 = 151;
	int32_t x3691 = -1;
	uint8_t x3692 = 27U;
	int64_t t86 = -472763046850070300LL;

	t86 = ((x3689%(x3690+x3691))>>x3692);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3778 = INT16_MAX;
	int64_t x3779 = INT64_MIN;
	int8_t x3780 = 2;

	t87 = ((x3777%(x3778+x3779))>>x3780);

	if (t87 != 16383LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3837 = INT64_MAX;
	volatile uint16_t x3838 = 39U;
	int64_t x3839 = -1LL;
	uint64_t x3840 = 10LLU;
	volatile int64_t t88 = 465301496LL;

	t88 = ((x3837%(x3838+x3839))>>x3840);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3841 = 407905;
	static int64_t x3842 = INT64_MAX;
	static int8_t x3843 = -5;
	uint16_t x3844 = 9U;
	static volatile int64_t t89 = -277942LL;

	t89 = ((x3841%(x3842+x3843))>>x3844);

	if (t89 != 796LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3925 = UINT64_MAX;
	volatile int32_t x3926 = INT32_MIN;
	uint16_t x3927 = 5U;
	volatile uint8_t x3928 = 30U;
	volatile uint64_t t90 = 1LLU;

	t90 = ((x3925%(x3926+x3927))>>x3928);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x3994 = 70231U;
	uint64_t x3995 = 3593377550786002033LLU;
	volatile uint32_t x3996 = 1U;
	uint64_t t91 = 8424993546376LLU;

	t91 = ((x3993%(x3994+x3995))>>x3996);

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4025 = -1;
	volatile uint64_t x4027 = UINT64_MAX;
	int32_t x4028 = 0;
	uint64_t t92 = 5202916LLU;

	t92 = ((x4025%(x4026+x4027))>>x4028);

	if (t92 != 1439480LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4041 = 379U;
	volatile int16_t x4042 = -1;
	volatile uint8_t x4043 = UINT8_MAX;
	uint16_t x4044 = 2U;
	int32_t t93 = 1;

	t93 = ((x4041%(x4042+x4043))>>x4044);

	if (t93 != 31) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4130 = INT8_MAX;
	int32_t x4131 = -1;
	uint8_t x4132 = 12U;

	t94 = ((x4129%(x4130+x4131))>>x4132);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x4233 = INT64_MIN;
	uint64_t x4234 = UINT64_MAX;
	int16_t x4235 = 1426;
	int8_t x4236 = 1;
	volatile uint64_t t95 = 1627617022LLU;

	t95 = ((x4233%(x4234+x4235))>>x4236);

	if (t95 != 341LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4349 = INT16_MIN;
	int64_t x4351 = -1LL;
	volatile int32_t x4352 = 3;
	volatile int64_t t96 = -43642086774638621LL;

	t96 = ((x4349%(x4350+x4351))>>x4352);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x4367 = 777175LL;
	uint8_t x4368 = 26U;

	t97 = ((x4365%(x4366+x4367))>>x4368);

	if (t97 != 20LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4473 = INT16_MAX;
	uint16_t x4474 = 1U;
	int8_t x4475 = INT8_MIN;
	uint8_t x4476 = 0U;
	volatile int32_t t98 = 1447097;

	t98 = ((x4473%(x4474+x4475))>>x4476);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x4489 = 23U;
	int32_t x4490 = INT32_MIN;
	uint32_t x4491 = 4019117U;
	uint8_t x4492 = 8U;
	volatile uint32_t t99 = 111725097U;

	t99 = ((x4489%(x4490+x4491))>>x4492);

	if (t99 != 0U) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x25 = UINT8_MAX;
int64_t x79 = -70LL;
static int16_t x87 = -212;
int16_t x116 = 0;
int64_t x167 = INT64_MIN;
int32_t t7 = -1345798;
static uint32_t x178 = 8732995U;
static uint16_t x179 = 355U;
int16_t x193 = INT16_MIN;
int64_t x194 = INT64_MIN;
int32_t t9 = 28473;
int16_t x217 = INT16_MIN;
static uint32_t x219 = 0U;
int8_t x336 = 0;
volatile int32_t t14 = -1;
static int8_t x338 = -1;
uint32_t x339 = 1803U;
uint32_t x340 = 25U;
int32_t x344 = 2;
uint32_t x444 = 1U;
int32_t t19 = -123352155;
volatile int16_t x453 = -202;
static int16_t x456 = 1;
static int32_t t20 = -1;
int32_t t22 = 90308504;
uint32_t x484 = 1U;
volatile uint8_t x568 = 0U;
int8_t x717 = -5;
uint8_t x729 = UINT8_MAX;
int32_t t30 = 29553;
static int64_t x746 = 102774092LL;
int64_t x765 = -1LL;
uint32_t x766 = 1U;
volatile int32_t t34 = -31988435;
int32_t x809 = -8034033;
int64_t x810 = -1LL;
int16_t x811 = INT16_MIN;
int64_t x818 = -244LL;
int8_t x905 = -1;
uint64_t x907 = 4422LLU;
int32_t x922 = 489;
uint64_t x923 = 245805470960895622LLU;
static volatile int64_t x972 = 0LL;
int64_t x1013 = INT64_MIN;
uint64_t x1034 = 1637569163906LLU;
static int32_t t44 = 1947;
int32_t t45 = 4791;
uint64_t x1171 = 7LLU;
volatile uint64_t x1217 = UINT64_MAX;
uint8_t x1220 = 7U;
static int64_t x1273 = -1LL;
int8_t x1275 = INT8_MIN;
int8_t x1277 = -1;
static volatile uint64_t x1278 = 138618162280859003LLU;
int32_t x1289 = -1;
int32_t t53 = 116310481;
int32_t t54 = -26352966;
uint16_t x1408 = 16U;
int32_t x1459 = -1;
int32_t t58 = -11959;
int16_t x1494 = INT16_MIN;
volatile int32_t t59 = -2148;
static uint64_t x1523 = UINT64_MAX;
uint16_t x1524 = 0U;
uint32_t x1593 = UINT32_MAX;
int64_t x1594 = -257647006716692LL;
volatile int8_t x1596 = 6;
static int32_t t64 = 6;
int32_t t65 = 8309079;
volatile uint32_t x1747 = 65516U;
int32_t t69 = 499;
int16_t x1769 = -1;
int16_t x1770 = -2;
static int16_t x1774 = INT16_MAX;
static int64_t x1775 = 1387LL;
static uint8_t x1776 = 8U;
static int64_t x1777 = -1LL;
static volatile int8_t x1783 = -1;
int8_t x1784 = 28;
volatile int32_t x1802 = 211;
int8_t x1818 = -1;
static int64_t x1885 = INT64_MIN;
int32_t x1908 = 15;
int32_t t81 = 503147425;
uint8_t x1939 = UINT8_MAX;
uint8_t x1941 = 7U;
volatile int64_t x1943 = -1LL;
volatile uint16_t x2056 = 14U;
static int16_t x2111 = -1;
int16_t x2244 = 0;
int16_t x2278 = -1;
int8_t x2308 = 18;
static uint64_t x2313 = 71LLU;
int16_t x2363 = INT16_MAX;
int16_t x2394 = INT16_MIN;
volatile int8_t x2490 = -1;
volatile int8_t x2510 = INT8_MIN;
static int8_t x2512 = 9;
int32_t t99 = 10;


void f0(void) {
	uint16_t x26 = 7813U;
	volatile uint16_t x27 = 77U;
	uint32_t x28 = 0U;
	int32_t t0 = -1;

	t0 = (x25==((x26==x27)>>x28));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x45 = INT64_MIN;
	uint8_t x46 = 44U;
	volatile uint64_t x47 = 15013341667637068LLU;
	volatile uint32_t x48 = 0U;
	volatile int32_t t1 = -5679;

	t1 = (x45==((x46==x47)>>x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MAX;
	volatile uint8_t x80 = 14U;
	static volatile int32_t t2 = 496;

	t2 = (x77==((x78==x79)>>x80));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int8_t x88 = 0;
	int32_t t3 = 5936740;

	t3 = (x85==((x86==x87)>>x88));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x113 = UINT64_MAX;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MIN;
	int32_t t4 = -1;

	t4 = (x113==((x114==x115)>>x116));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x133 = INT64_MAX;
	static int16_t x134 = INT16_MIN;
	volatile int64_t x135 = 117765006LL;
	int16_t x136 = 0;
	volatile int32_t t5 = -1;

	t5 = (x133==((x134==x135)>>x136));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile uint8_t x158 = 24U;
	int8_t x159 = -1;
	volatile uint8_t x160 = 0U;
	int32_t t6 = -16484264;

	t6 = (x157==((x158==x159)>>x160));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x165 = 1U;
	static volatile int8_t x166 = INT8_MIN;
	static int8_t x168 = 1;

	t7 = (x165==((x166==x167)>>x168));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x177 = INT32_MAX;
	uint16_t x180 = 2U;
	int32_t t8 = -1888461;

	t8 = (x177==((x178==x179)>>x180));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x195 = INT64_MIN;
	static volatile int8_t x196 = 10;

	t9 = (x193==((x194==x195)>>x196));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x218 = -1LL;
	static uint8_t x220 = 21U;
	volatile int32_t t10 = 32578;

	t10 = (x217==((x218==x219)>>x220));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x229 = 554876U;
	int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	static int16_t x232 = 7;
	volatile int32_t t11 = 22;

	t11 = (x229==((x230==x231)>>x232));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x233 = INT32_MIN;
	static uint16_t x234 = 2847U;
	int32_t x235 = -1;
	uint8_t x236 = 1U;
	volatile int32_t t12 = -29196959;

	t12 = (x233==((x234==x235)>>x236));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = -9;
	uint8_t x331 = 0U;
	volatile int8_t x332 = 1;
	volatile int32_t t13 = -1;

	t13 = (x329==((x330==x331)>>x332));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	static int8_t x335 = 1;

	t14 = (x333==((x334==x335)>>x336));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x337 = UINT32_MAX;
	static volatile int32_t t15 = -123631372;

	t15 = (x337==((x338==x339)>>x340));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x341 = INT16_MIN;
	volatile int32_t x342 = 0;
	static uint32_t x343 = 2046003U;
	static volatile int32_t t16 = -13095327;

	t16 = (x341==((x342==x343)>>x344));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x349 = 2331539065017340LL;
	static uint8_t x350 = 5U;
	uint64_t x351 = 566681585637263LLU;
	uint64_t x352 = 9LLU;
	volatile int32_t t17 = 63271653;

	t17 = (x349==((x350==x351)>>x352));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MIN;
	volatile uint16_t x355 = 5U;
	static uint8_t x356 = 25U;
	int32_t t18 = 60;

	t18 = (x353==((x354==x355)>>x356));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x441 = -1;
	int16_t x442 = INT16_MIN;
	static volatile int64_t x443 = INT64_MAX;

	t19 = (x441==((x442==x443)>>x444));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x454 = 528U;
	static int64_t x455 = -1LL;

	t20 = (x453==((x454==x455)>>x456));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = -9;
	uint32_t x471 = UINT32_MAX;
	volatile uint8_t x472 = 1U;
	volatile int32_t t21 = -3965;

	t21 = (x469==((x470==x471)>>x472));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x477 = UINT64_MAX;
	int8_t x478 = -1;
	uint8_t x479 = 5U;
	int8_t x480 = 25;

	t22 = (x477==((x478==x479)>>x480));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x481 = UINT16_MAX;
	int8_t x482 = -1;
	int8_t x483 = INT8_MIN;
	volatile int32_t t23 = 25;

	t23 = (x481==((x482==x483)>>x484));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x565 = 254521548167699979LLU;
	uint64_t x566 = 16276541726LLU;
	uint32_t x567 = UINT32_MAX;
	int32_t t24 = 508674;

	t24 = (x565==((x566==x567)>>x568));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x577 = 233U;
	int32_t x578 = -13819;
	int8_t x579 = INT8_MAX;
	int16_t x580 = 3;
	static volatile int32_t t25 = -268200080;

	t25 = (x577==((x578==x579)>>x580));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x637 = -1;
	int16_t x638 = -1127;
	int16_t x639 = 1;
	int8_t x640 = 8;
	int32_t t26 = -7473;

	t26 = (x637==((x638==x639)>>x640));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x681 = 3U;
	volatile int32_t x682 = 1;
	static int8_t x683 = 0;
	int8_t x684 = 18;
	volatile int32_t t27 = 6;

	t27 = (x681==((x682==x683)>>x684));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x709 = INT8_MAX;
	static int16_t x710 = INT16_MIN;
	static int32_t x711 = -2;
	uint16_t x712 = 19U;
	volatile int32_t t28 = -8820;

	t28 = (x709==((x710==x711)>>x712));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x718 = -3;
	volatile int8_t x719 = -33;
	volatile int8_t x720 = 4;
	int32_t t29 = 0;

	t29 = (x717==((x718==x719)>>x720));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x730 = -1;
	static volatile int64_t x731 = INT64_MAX;
	uint8_t x732 = 4U;

	t30 = (x729==((x730==x731)>>x732));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x745 = -1;
	int8_t x747 = -1;
	uint8_t x748 = 0U;
	volatile int32_t t31 = -247978;

	t31 = (x745==((x746==x747)>>x748));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x767 = UINT32_MAX;
	uint16_t x768 = 2U;
	volatile int32_t t32 = 847404;

	t32 = (x765==((x766==x767)>>x768));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x793 = INT8_MIN;
	int32_t x794 = INT32_MIN;
	int8_t x795 = -1;
	static uint8_t x796 = 3U;
	static int32_t t33 = -2160908;

	t33 = (x793==((x794==x795)>>x796));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x801 = INT16_MAX;
	uint32_t x802 = UINT32_MAX;
	static uint8_t x803 = 6U;
	uint8_t x804 = 0U;

	t34 = (x801==((x802==x803)>>x804));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x812 = 7;
	int32_t t35 = -46;

	t35 = (x809==((x810==x811)>>x812));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x817 = 274U;
	static int32_t x819 = -58427;
	int8_t x820 = 3;
	volatile int32_t t36 = -3;

	t36 = (x817==((x818==x819)>>x820));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x906 = -1;
	uint8_t x908 = 1U;
	int32_t t37 = 158;

	t37 = (x905==((x906==x907)>>x908));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x921 = -1;
	uint64_t x924 = 24LLU;
	volatile int32_t t38 = -7511;

	t38 = (x921==((x922==x923)>>x924));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x969 = INT8_MIN;
	uint64_t x970 = 3024468361LLU;
	static int64_t x971 = INT64_MAX;
	volatile int32_t t39 = 205;

	t39 = (x969==((x970==x971)>>x972));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x977 = INT64_MAX;
	int64_t x978 = -569299646808LL;
	volatile int8_t x979 = INT8_MAX;
	static uint8_t x980 = 25U;
	volatile int32_t t40 = 0;

	t40 = (x977==((x978==x979)>>x980));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x985 = -1652778059614LL;
	volatile uint64_t x986 = 60153360LLU;
	int32_t x987 = INT32_MAX;
	int32_t x988 = 16;
	volatile int32_t t41 = -85584371;

	t41 = (x985==((x986==x987)>>x988));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1014 = INT16_MAX;
	int32_t x1015 = INT32_MIN;
	static uint16_t x1016 = 7U;
	int32_t t42 = -11329;

	t42 = (x1013==((x1014==x1015)>>x1016));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1021 = UINT8_MAX;
	static volatile int8_t x1022 = INT8_MIN;
	int64_t x1023 = -3943573LL;
	volatile int8_t x1024 = 0;
	static volatile int32_t t43 = -29135816;

	t43 = (x1021==((x1022==x1023)>>x1024));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1033 = INT8_MIN;
	uint64_t x1035 = 9764010LLU;
	volatile uint8_t x1036 = 6U;

	t44 = (x1033==((x1034==x1035)>>x1036));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1069 = -1;
	volatile int32_t x1070 = -22697;
	int32_t x1071 = 495;
	static uint8_t x1072 = 4U;

	t45 = (x1069==((x1070==x1071)>>x1072));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1169 = -1;
	uint64_t x1170 = UINT64_MAX;
	uint8_t x1172 = 1U;
	int32_t t46 = 64;

	t46 = (x1169==((x1170==x1171)>>x1172));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1218 = 5270438LLU;
	uint16_t x1219 = 471U;
	static volatile int32_t t47 = -10932895;

	t47 = (x1217==((x1218==x1219)>>x1220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1233 = INT8_MAX;
	int64_t x1234 = -1LL;
	uint16_t x1235 = UINT16_MAX;
	uint8_t x1236 = 25U;
	int32_t t48 = 115755819;

	t48 = (x1233==((x1234==x1235)>>x1236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1237 = -244;
	int8_t x1238 = -1;
	uint64_t x1239 = 3LLU;
	int32_t x1240 = 8;
	static volatile int32_t t49 = 0;

	t49 = (x1237==((x1238==x1239)>>x1240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1274 = -6;
	static uint16_t x1276 = 10U;
	volatile int32_t t50 = -6;

	t50 = (x1273==((x1274==x1275)>>x1276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1279 = -58014753;
	volatile uint16_t x1280 = 27U;
	int32_t t51 = 0;

	t51 = (x1277==((x1278==x1279)>>x1280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1290 = UINT32_MAX;
	int8_t x1291 = INT8_MAX;
	static uint8_t x1292 = 3U;
	int32_t t52 = 0;

	t52 = (x1289==((x1290==x1291)>>x1292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1309 = -1;
	static volatile uint8_t x1310 = UINT8_MAX;
	static volatile int8_t x1311 = -1;
	int16_t x1312 = 0;

	t53 = (x1309==((x1310==x1311)>>x1312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1369 = 92U;
	volatile int16_t x1370 = INT16_MIN;
	int8_t x1371 = 6;
	static volatile int8_t x1372 = 18;

	t54 = (x1369==((x1370==x1371)>>x1372));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1405 = -1LL;
	int64_t x1406 = -176LL;
	uint16_t x1407 = 0U;
	volatile int32_t t55 = -496221910;

	t55 = (x1405==((x1406==x1407)>>x1408));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1441 = 1353;
	volatile uint16_t x1442 = 460U;
	uint64_t x1443 = 46LLU;
	int8_t x1444 = 1;
	int32_t t56 = -313717;

	t56 = (x1441==((x1442==x1443)>>x1444));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1457 = INT8_MAX;
	static int8_t x1458 = INT8_MIN;
	int8_t x1460 = 8;
	volatile int32_t t57 = 1015;

	t57 = (x1457==((x1458==x1459)>>x1460));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1481 = 30552701LLU;
	int32_t x1482 = 29943123;
	int8_t x1483 = INT8_MIN;
	volatile uint16_t x1484 = 0U;

	t58 = (x1481==((x1482==x1483)>>x1484));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1493 = -6;
	volatile uint8_t x1495 = 99U;
	uint8_t x1496 = 9U;

	t59 = (x1493==((x1494==x1495)>>x1496));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1521 = 2085626;
	int8_t x1522 = -1;
	static int32_t t60 = -264280;

	t60 = (x1521==((x1522==x1523)>>x1524));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1529 = INT16_MIN;
	int8_t x1530 = INT8_MAX;
	int32_t x1531 = INT32_MIN;
	static volatile uint16_t x1532 = 5U;
	int32_t t61 = -22831;

	t61 = (x1529==((x1530==x1531)>>x1532));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1545 = -1;
	int32_t x1546 = INT32_MIN;
	int16_t x1547 = INT16_MIN;
	uint8_t x1548 = 5U;
	volatile int32_t t62 = 89384;

	t62 = (x1545==((x1546==x1547)>>x1548));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1595 = 15;
	volatile int32_t t63 = -85708;

	t63 = (x1593==((x1594==x1595)>>x1596));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x1609 = -6;
	int64_t x1610 = -6532138973412LL;
	uint16_t x1611 = UINT16_MAX;
	int16_t x1612 = 3;

	t64 = (x1609==((x1610==x1611)>>x1612));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1649 = 1754U;
	int8_t x1650 = INT8_MIN;
	int32_t x1651 = INT32_MAX;
	int64_t x1652 = 0LL;

	t65 = (x1649==((x1650==x1651)>>x1652));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x1653 = 2404840562LLU;
	int16_t x1654 = 4;
	int8_t x1655 = INT8_MAX;
	uint8_t x1656 = 30U;
	volatile int32_t t66 = -56028;

	t66 = (x1653==((x1654==x1655)>>x1656));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x1681 = 2423491124083412314LL;
	int16_t x1682 = 3;
	int32_t x1683 = 7846547;
	uint8_t x1684 = 2U;
	int32_t t67 = -338;

	t67 = (x1681==((x1682==x1683)>>x1684));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1705 = 66677767094LL;
	int16_t x1706 = -1;
	int32_t x1707 = -1019844994;
	int8_t x1708 = 3;
	static volatile int32_t t68 = 16076;

	t68 = (x1705==((x1706==x1707)>>x1708));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x1745 = 14334LLU;
	static uint8_t x1746 = 125U;
	int8_t x1748 = 12;

	t69 = (x1745==((x1746==x1747)>>x1748));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1753 = UINT64_MAX;
	volatile int16_t x1754 = INT16_MIN;
	int64_t x1755 = INT64_MIN;
	volatile uint8_t x1756 = 2U;
	volatile int32_t t70 = 143492;

	t70 = (x1753==((x1754==x1755)>>x1756));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1771 = UINT8_MAX;
	static volatile uint8_t x1772 = 18U;
	int32_t t71 = 1;

	t71 = (x1769==((x1770==x1771)>>x1772));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1773 = -1;
	static volatile int32_t t72 = 321503366;

	t72 = (x1773==((x1774==x1775)>>x1776));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1778 = -1;
	volatile uint16_t x1779 = UINT16_MAX;
	uint8_t x1780 = 2U;
	volatile int32_t t73 = -126324;

	t73 = (x1777==((x1778==x1779)>>x1780));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1781 = 110170665109791LLU;
	int8_t x1782 = -1;
	volatile int32_t t74 = -5707733;

	t74 = (x1781==((x1782==x1783)>>x1784));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x1785 = UINT32_MAX;
	int16_t x1786 = -2642;
	uint32_t x1787 = UINT32_MAX;
	int8_t x1788 = 0;
	volatile int32_t t75 = 165;

	t75 = (x1785==((x1786==x1787)>>x1788));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x1801 = 183;
	uint16_t x1803 = UINT16_MAX;
	uint16_t x1804 = 1U;
	volatile int32_t t76 = -853226436;

	t76 = (x1801==((x1802==x1803)>>x1804));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x1817 = 13U;
	uint64_t x1819 = UINT64_MAX;
	int8_t x1820 = 0;
	static int32_t t77 = -42619;

	t77 = (x1817==((x1818==x1819)>>x1820));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1833 = INT64_MAX;
	uint32_t x1834 = 1U;
	static uint16_t x1835 = UINT16_MAX;
	uint8_t x1836 = 1U;
	int32_t t78 = 6173;

	t78 = (x1833==((x1834==x1835)>>x1836));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1886 = 902762LL;
	volatile int16_t x1887 = 2543;
	static uint16_t x1888 = 22U;
	volatile int32_t t79 = -912;

	t79 = (x1885==((x1886==x1887)>>x1888));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1905 = INT32_MAX;
	static int32_t x1906 = INT32_MAX;
	int64_t x1907 = INT64_MIN;
	volatile int32_t t80 = 1880;

	t80 = (x1905==((x1906==x1907)>>x1908));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1933 = 26497121249LLU;
	volatile int64_t x1934 = INT64_MIN;
	int8_t x1935 = INT8_MIN;
	static uint16_t x1936 = 3U;

	t81 = (x1933==((x1934==x1935)>>x1936));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1937 = UINT8_MAX;
	int64_t x1938 = -1LL;
	static volatile uint8_t x1940 = 8U;
	int32_t t82 = 515270283;

	t82 = (x1937==((x1938==x1939)>>x1940));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1942 = INT16_MIN;
	static uint64_t x1944 = 16LLU;
	static volatile int32_t t83 = -1033865917;

	t83 = (x1941==((x1942==x1943)>>x1944));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1965 = -1;
	volatile uint8_t x1966 = 1U;
	static int8_t x1967 = INT8_MIN;
	uint16_t x1968 = 3U;
	static int32_t t84 = -15049;

	t84 = (x1965==((x1966==x1967)>>x1968));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x1989 = INT8_MIN;
	uint16_t x1990 = UINT16_MAX;
	int32_t x1991 = INT32_MIN;
	volatile int8_t x1992 = 3;
	static volatile int32_t t85 = 10487784;

	t85 = (x1989==((x1990==x1991)>>x1992));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2053 = 5205185604LLU;
	static int16_t x2054 = 71;
	int16_t x2055 = -1;
	volatile int32_t t86 = -17755;

	t86 = (x2053==((x2054==x2055)>>x2056));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2109 = -515942;
	uint8_t x2110 = 6U;
	int16_t x2112 = 0;
	int32_t t87 = 2825;

	t87 = (x2109==((x2110==x2111)>>x2112));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2241 = 3LLU;
	volatile uint8_t x2242 = 13U;
	volatile int32_t x2243 = -1;
	volatile int32_t t88 = -421625;

	t88 = (x2241==((x2242==x2243)>>x2244));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2253 = UINT32_MAX;
	int64_t x2254 = -1LL;
	int16_t x2255 = -1;
	int8_t x2256 = 14;
	int32_t t89 = -6037001;

	t89 = (x2253==((x2254==x2255)>>x2256));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2269 = 6246;
	uint8_t x2270 = UINT8_MAX;
	int16_t x2271 = INT16_MIN;
	uint16_t x2272 = 23U;
	static int32_t t90 = -153292;

	t90 = (x2269==((x2270==x2271)>>x2272));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2277 = -92;
	uint32_t x2279 = 20U;
	int16_t x2280 = 25;
	static volatile int32_t t91 = 16064;

	t91 = (x2277==((x2278==x2279)>>x2280));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2305 = UINT32_MAX;
	volatile int16_t x2306 = INT16_MIN;
	static uint64_t x2307 = UINT64_MAX;
	int32_t t92 = -1574961;

	t92 = (x2305==((x2306==x2307)>>x2308));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2314 = INT16_MIN;
	int16_t x2315 = -1;
	static int8_t x2316 = 1;
	static int32_t t93 = 1;

	t93 = (x2313==((x2314==x2315)>>x2316));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2361 = -62;
	int64_t x2362 = INT64_MAX;
	static uint8_t x2364 = 11U;
	int32_t t94 = 13447793;

	t94 = (x2361==((x2362==x2363)>>x2364));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2393 = UINT8_MAX;
	int32_t x2395 = INT32_MIN;
	uint8_t x2396 = 0U;
	int32_t t95 = 872;

	t95 = (x2393==((x2394==x2395)>>x2396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x2417 = INT16_MAX;
	uint32_t x2418 = 172U;
	int8_t x2419 = INT8_MAX;
	uint8_t x2420 = 1U;
	int32_t t96 = -996041;

	t96 = (x2417==((x2418==x2419)>>x2420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x2489 = 1167879155961215LLU;
	int8_t x2491 = INT8_MAX;
	int8_t x2492 = 1;
	volatile int32_t t97 = -6392;

	t97 = (x2489==((x2490==x2491)>>x2492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x2509 = -1;
	uint32_t x2511 = 39857U;
	int32_t t98 = -1;

	t98 = (x2509==((x2510==x2511)>>x2512));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2533 = -1;
	static int16_t x2534 = -1;
	int8_t x2535 = -11;
	volatile uint16_t x2536 = 16U;

	t99 = (x2533==((x2534==x2535)>>x2536));

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


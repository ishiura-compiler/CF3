#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 4025U;
int64_t x53 = INT64_MAX;
uint8_t x54 = UINT8_MAX;
static uint16_t x55 = 837U;
int32_t t1 = 17;
int64_t x57 = -3LL;
static volatile int8_t x59 = 1;
int32_t x126 = 6046;
static volatile int32_t x141 = INT32_MAX;
int64_t x171 = INT64_MIN;
int8_t x189 = INT8_MIN;
uint32_t x191 = 1430910U;
int32_t t8 = 24160;
uint16_t x228 = 2U;
int32_t x302 = -1;
uint32_t x310 = 5952773U;
volatile int32_t x319 = INT32_MIN;
volatile int32_t x354 = 75288998;
static int32_t t15 = 383821;
uint64_t x361 = UINT64_MAX;
int32_t x363 = INT32_MIN;
int8_t x418 = INT8_MIN;
int8_t x419 = INT8_MAX;
uint8_t x420 = 10U;
int32_t t17 = 14;
int8_t x436 = 1;
volatile uint64_t x513 = UINT64_MAX;
uint8_t x516 = 0U;
volatile uint8_t x548 = 4U;
int8_t x551 = 0;
uint16_t x590 = 3002U;
int64_t x591 = -58314124LL;
int32_t x607 = INT32_MIN;
int16_t x718 = INT16_MIN;
static int16_t x719 = INT16_MAX;
static uint8_t x788 = 0U;
static uint32_t x811 = 446577950U;
static uint8_t x812 = 2U;
volatile int32_t t32 = 748260630;
int32_t t33 = -1;
int64_t x855 = INT64_MIN;
int32_t t34 = -5791;
volatile int16_t x876 = 2;
static volatile uint32_t x942 = 1907U;
uint64_t x1001 = UINT64_MAX;
int32_t t40 = -21;
uint64_t x1018 = UINT64_MAX;
int64_t x1037 = INT64_MIN;
static uint16_t x1057 = 1843U;
static int32_t t43 = -95498537;
uint16_t x1145 = 28525U;
static int32_t t45 = -2646;
volatile int32_t t46 = -928;
int64_t x1259 = INT64_MIN;
int8_t x1273 = -5;
uint8_t x1324 = 1U;
volatile int32_t t52 = 64694189;
static int8_t x1403 = INT8_MIN;
uint8_t x1406 = UINT8_MAX;
int16_t x1435 = INT16_MIN;
int32_t t55 = -23593590;
static int8_t x1492 = 28;
volatile int32_t t56 = -363362312;
uint8_t x1512 = 1U;
int8_t x1537 = -11;
uint32_t x1560 = 4U;
uint32_t x1594 = 5323U;
uint8_t x1616 = 15U;
volatile int32_t t63 = -6219058;
static int32_t t64 = 2561348;
static volatile int32_t t65 = -412374;
int8_t x1690 = -1;
int16_t x1749 = -1596;
uint16_t x1752 = 0U;
int32_t t68 = 14074;
static int16_t x1761 = INT16_MIN;
static volatile int32_t t73 = -592689;
static int32_t x1990 = -1;
int8_t x1991 = INT8_MAX;
uint16_t x2013 = 6U;
uint16_t x2022 = 3286U;
int64_t x2027 = -68324938241188864LL;
volatile uint8_t x2028 = 10U;
volatile int32_t t79 = -5600565;
static uint8_t x2120 = 25U;
static int64_t x2131 = -105502655707397LL;
static uint8_t x2132 = 31U;
int16_t x2158 = INT16_MIN;
static uint64_t x2159 = 22855575091480LLU;
static int64_t x2183 = INT64_MAX;
static int8_t x2187 = INT8_MAX;
int32_t t90 = 1389;
int16_t x2301 = INT16_MIN;
uint16_t x2323 = 6U;
int64_t x2335 = -1035836839742787111LL;
int8_t x2336 = 3;
volatile int8_t x2344 = 12;
int64_t x2371 = INT64_MIN;
int16_t x2394 = 7;
volatile int16_t x2410 = INT16_MIN;
volatile int32_t x2411 = 15;
int16_t x2462 = 123;
int8_t x2496 = 1;


void f0(void) {
	int64_t x5 = 139961113142201LL;
	int32_t x6 = 304951;
	int8_t x8 = 1;
	volatile int32_t t0 = -890484802;

	t0 = (((x5%x6)<=x7)<<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x56 = 14U;

	t1 = (((x53%x54)<=x55)<<x56);

	if (t1 != 16384) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x58 = INT16_MAX;
	volatile int16_t x60 = 1;
	int32_t t2 = 2998;

	t2 = (((x57%x58)<=x59)<<x60);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x93 = 1909101U;
	int8_t x94 = -27;
	uint8_t x95 = 0U;
	int8_t x96 = 1;
	static int32_t t3 = 125;

	t3 = (((x93%x94)<=x95)<<x96);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x105 = -1;
	int16_t x106 = INT16_MAX;
	int8_t x107 = 1;
	static int16_t x108 = 1;
	int32_t t4 = -5;

	t4 = (((x105%x106)<=x107)<<x108);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x125 = 198294;
	int32_t x127 = INT32_MIN;
	volatile uint16_t x128 = 1U;
	int32_t t5 = -2616782;

	t5 = (((x125%x126)<=x127)<<x128);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	volatile uint32_t x144 = 1U;
	static volatile int32_t t6 = -1;

	t6 = (((x141%x142)<=x143)<<x144);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	volatile uint16_t x172 = 0U;
	volatile int32_t t7 = 1;

	t7 = (((x169%x170)<=x171)<<x172);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x190 = INT64_MAX;
	uint64_t x192 = 12LLU;

	t8 = (((x189%x190)<=x191)<<x192);

	if (t8 != 4096) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x221 = INT64_MIN;
	volatile uint8_t x222 = 1U;
	int16_t x223 = 51;
	uint8_t x224 = 3U;
	volatile int32_t t9 = -8;

	t9 = (((x221%x222)<=x223)<<x224);

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x225 = 2950154003380LLU;
	int16_t x226 = -16;
	int32_t x227 = INT32_MIN;
	int32_t t10 = -5091;

	t10 = (((x225%x226)<=x227)<<x228);

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	int8_t x288 = 1;
	volatile int32_t t11 = 4;

	t11 = (((x285%x286)<=x287)<<x288);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x301 = INT8_MAX;
	volatile uint8_t x303 = 14U;
	uint16_t x304 = 1U;
	volatile int32_t t12 = -110;

	t12 = (((x301%x302)<=x303)<<x304);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x309 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	uint16_t x312 = 1U;
	volatile int32_t t13 = 304;

	t13 = (((x309%x310)<=x311)<<x312);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x317 = 484U;
	int32_t x318 = -2918;
	uint8_t x320 = 16U;
	volatile int32_t t14 = -2566156;

	t14 = (((x317%x318)<=x319)<<x320);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x353 = INT64_MIN;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 0U;

	t15 = (((x353%x354)<=x355)<<x356);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x362 = 36122LLU;
	int8_t x364 = 5;
	int32_t t16 = -1712040;

	t16 = (((x361%x362)<=x363)<<x364);

	if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x417 = 18U;

	t17 = (((x417%x418)<=x419)<<x420);

	if (t17 != 1024) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x425 = UINT16_MAX;
	static int16_t x426 = INT16_MIN;
	volatile uint32_t x427 = 65U;
	uint32_t x428 = 23U;
	volatile int32_t t18 = 47;

	t18 = (((x425%x426)<=x427)<<x428);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x433 = -1;
	volatile int8_t x434 = -1;
	static int8_t x435 = INT8_MIN;
	int32_t t19 = -391679354;

	t19 = (((x433%x434)<=x435)<<x436);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x457 = UINT8_MAX;
	static int16_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile uint16_t x460 = 11U;
	volatile int32_t t20 = 2459;

	t20 = (((x457%x458)<=x459)<<x460);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x469 = 31;
	int8_t x470 = INT8_MAX;
	uint64_t x471 = 51977487LLU;
	volatile int32_t x472 = 0;
	int32_t t21 = -34;

	t21 = (((x469%x470)<=x471)<<x472);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x497 = INT16_MIN;
	static int16_t x498 = INT16_MIN;
	uint32_t x499 = UINT32_MAX;
	uint64_t x500 = 1LLU;
	int32_t t22 = -217;

	t22 = (((x497%x498)<=x499)<<x500);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x514 = -3571;
	int32_t x515 = INT32_MAX;
	static volatile int32_t t23 = -17;

	t23 = (((x513%x514)<=x515)<<x516);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x545 = 255547209043LL;
	volatile uint8_t x546 = 53U;
	volatile int16_t x547 = INT16_MIN;
	volatile int32_t t24 = -127437;

	t24 = (((x545%x546)<=x547)<<x548);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x549 = UINT64_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	uint16_t x552 = 1U;
	int32_t t25 = 1477146;

	t25 = (((x549%x550)<=x551)<<x552);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x557 = -1;
	int8_t x558 = -1;
	volatile int64_t x559 = -1LL;
	int16_t x560 = 31;
	int32_t t26 = 14171741;

	t26 = (((x557%x558)<=x559)<<x560);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x589 = 0;
	static uint64_t x592 = 3LLU;
	volatile int32_t t27 = 123221422;

	t27 = (((x589%x590)<=x591)<<x592);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x605 = UINT16_MAX;
	uint8_t x606 = 30U;
	static int32_t x608 = 1;
	int32_t t28 = 323943428;

	t28 = (((x605%x606)<=x607)<<x608);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x717 = 17162824413LL;
	volatile int16_t x720 = 0;
	int32_t t29 = 695693681;

	t29 = (((x717%x718)<=x719)<<x720);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x737 = 2278492U;
	int8_t x738 = 55;
	static volatile uint8_t x739 = UINT8_MAX;
	uint16_t x740 = 7U;
	int32_t t30 = 8183729;

	t30 = (((x737%x738)<=x739)<<x740);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MIN;
	volatile int64_t x787 = INT64_MIN;
	int32_t t31 = 1;

	t31 = (((x785%x786)<=x787)<<x788);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x809 = INT64_MIN;
	uint32_t x810 = 688U;

	t32 = (((x809%x810)<=x811)<<x812);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x821 = 13U;
	int16_t x822 = -85;
	static int32_t x823 = -1;
	uint8_t x824 = 0U;

	t33 = (((x821%x822)<=x823)<<x824);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x853 = -1;
	uint16_t x854 = 43U;
	uint8_t x856 = 6U;

	t34 = (((x853%x854)<=x855)<<x856);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x869 = -1;
	uint32_t x870 = UINT32_MAX;
	uint64_t x871 = UINT64_MAX;
	uint8_t x872 = 23U;
	int32_t t35 = -320;

	t35 = (((x869%x870)<=x871)<<x872);

	if (t35 != 8388608) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x873 = UINT16_MAX;
	int64_t x874 = INT64_MAX;
	static volatile int16_t x875 = -123;
	static volatile int32_t t36 = -242;

	t36 = (((x873%x874)<=x875)<<x876);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x941 = -1;
	uint8_t x943 = 0U;
	uint8_t x944 = 5U;
	volatile int32_t t37 = -834380;

	t37 = (((x941%x942)<=x943)<<x944);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x985 = INT8_MIN;
	static int64_t x986 = 993671089123LL;
	int32_t x987 = INT32_MIN;
	int32_t x988 = 0;
	volatile int32_t t38 = 50;

	t38 = (((x985%x986)<=x987)<<x988);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1002 = INT32_MIN;
	uint8_t x1003 = UINT8_MAX;
	static int16_t x1004 = 11;
	volatile int32_t t39 = 1755767;

	t39 = (((x1001%x1002)<=x1003)<<x1004);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1009 = -1;
	uint32_t x1010 = UINT32_MAX;
	int16_t x1011 = -1;
	static volatile uint8_t x1012 = 3U;

	t40 = (((x1009%x1010)<=x1011)<<x1012);

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1017 = -1LL;
	int8_t x1019 = -1;
	int8_t x1020 = 0;
	static volatile int32_t t41 = 0;

	t41 = (((x1017%x1018)<=x1019)<<x1020);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1038 = 14455829LLU;
	int8_t x1039 = INT8_MIN;
	int16_t x1040 = 1;
	volatile int32_t t42 = 0;

	t42 = (((x1037%x1038)<=x1039)<<x1040);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1058 = 17U;
	uint32_t x1059 = UINT32_MAX;
	int16_t x1060 = 1;

	t43 = (((x1057%x1058)<=x1059)<<x1060);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1101 = -7081;
	int16_t x1102 = 987;
	int8_t x1103 = INT8_MIN;
	static int8_t x1104 = 26;
	static volatile int32_t t44 = -1;

	t44 = (((x1101%x1102)<=x1103)<<x1104);

	if (t44 != 67108864) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1146 = INT64_MIN;
	int8_t x1147 = 0;
	static int16_t x1148 = 0;

	t45 = (((x1145%x1146)<=x1147)<<x1148);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1177 = INT64_MIN;
	static int16_t x1178 = INT16_MIN;
	uint32_t x1179 = 20308645U;
	static int64_t x1180 = 28LL;

	t46 = (((x1177%x1178)<=x1179)<<x1180);

	if (t46 != 268435456) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1237 = 454899381620888LLU;
	volatile int16_t x1238 = INT16_MIN;
	static uint16_t x1239 = 4074U;
	int32_t x1240 = 0;
	static int32_t t47 = -385;

	t47 = (((x1237%x1238)<=x1239)<<x1240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1241 = UINT8_MAX;
	volatile int8_t x1242 = -1;
	static int8_t x1243 = 1;
	uint32_t x1244 = 0U;
	volatile int32_t t48 = -45575148;

	t48 = (((x1241%x1242)<=x1243)<<x1244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1257 = -1;
	uint32_t x1258 = 626288987U;
	uint8_t x1260 = 1U;
	int32_t t49 = -455;

	t49 = (((x1257%x1258)<=x1259)<<x1260);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1274 = 28LL;
	volatile uint32_t x1275 = 55550U;
	static uint8_t x1276 = 2U;
	int32_t t50 = -1;

	t50 = (((x1273%x1274)<=x1275)<<x1276);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1285 = INT8_MIN;
	uint32_t x1286 = UINT32_MAX;
	int64_t x1287 = INT64_MAX;
	int8_t x1288 = 0;
	static volatile int32_t t51 = -37330;

	t51 = (((x1285%x1286)<=x1287)<<x1288);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1321 = INT32_MAX;
	static volatile int64_t x1322 = INT64_MAX;
	uint16_t x1323 = 3U;

	t52 = (((x1321%x1322)<=x1323)<<x1324);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1401 = INT16_MIN;
	int32_t x1402 = INT32_MIN;
	uint32_t x1404 = 1U;
	int32_t t53 = 596090648;

	t53 = (((x1401%x1402)<=x1403)<<x1404);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1405 = INT64_MIN;
	volatile int64_t x1407 = INT64_MIN;
	int8_t x1408 = 1;
	volatile int32_t t54 = -8;

	t54 = (((x1405%x1406)<=x1407)<<x1408);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1433 = INT64_MIN;
	int64_t x1434 = -1LL;
	uint32_t x1436 = 0U;

	t55 = (((x1433%x1434)<=x1435)<<x1436);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x1489 = INT16_MAX;
	static volatile uint8_t x1490 = UINT8_MAX;
	uint16_t x1491 = 1U;

	t56 = (((x1489%x1490)<=x1491)<<x1492);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1509 = -1LL;
	static volatile int32_t x1510 = 165076;
	int8_t x1511 = -1;
	volatile int32_t t57 = 15106434;

	t57 = (((x1509%x1510)<=x1511)<<x1512);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1529 = INT16_MIN;
	int16_t x1530 = 100;
	uint16_t x1531 = 191U;
	static volatile int16_t x1532 = 3;
	int32_t t58 = -429090;

	t58 = (((x1529%x1530)<=x1531)<<x1532);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1538 = 228350299LLU;
	static volatile int32_t x1539 = INT32_MAX;
	int16_t x1540 = 8;
	int32_t t59 = 3209;

	t59 = (((x1537%x1538)<=x1539)<<x1540);

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1541 = INT8_MIN;
	volatile int16_t x1542 = 5676;
	uint32_t x1543 = 1846U;
	uint32_t x1544 = 12U;
	volatile int32_t t60 = -136751582;

	t60 = (((x1541%x1542)<=x1543)<<x1544);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1557 = 2U;
	volatile int16_t x1558 = INT16_MIN;
	int64_t x1559 = 4163533327LL;
	int32_t t61 = -130;

	t61 = (((x1557%x1558)<=x1559)<<x1560);

	if (t61 != 16) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1593 = -124;
	int64_t x1595 = 610194904265LL;
	uint8_t x1596 = 1U;
	static int32_t t62 = 401111283;

	t62 = (((x1593%x1594)<=x1595)<<x1596);

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1613 = 1;
	uint16_t x1614 = UINT16_MAX;
	uint32_t x1615 = UINT32_MAX;

	t63 = (((x1613%x1614)<=x1615)<<x1616);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1633 = INT8_MIN;
	static volatile int16_t x1634 = -1;
	uint64_t x1635 = UINT64_MAX;
	static uint8_t x1636 = 3U;

	t64 = (((x1633%x1634)<=x1635)<<x1636);

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x1665 = 180988680367LL;
	uint64_t x1666 = 193544787931674059LLU;
	uint32_t x1667 = 5663231U;
	volatile int8_t x1668 = 0;

	t65 = (((x1665%x1666)<=x1667)<<x1668);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x1689 = 11858595LL;
	int8_t x1691 = -47;
	static int8_t x1692 = 2;
	int32_t t66 = -838582520;

	t66 = (((x1689%x1690)<=x1691)<<x1692);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1709 = UINT64_MAX;
	int16_t x1710 = -1;
	int16_t x1711 = INT16_MIN;
	uint64_t x1712 = 7LLU;
	int32_t t67 = -91428;

	t67 = (((x1709%x1710)<=x1711)<<x1712);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1750 = 4536359764594888LLU;
	int8_t x1751 = -1;

	t68 = (((x1749%x1750)<=x1751)<<x1752);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x1762 = INT8_MAX;
	int16_t x1763 = INT16_MIN;
	uint16_t x1764 = 0U;
	static volatile int32_t t69 = 4989;

	t69 = (((x1761%x1762)<=x1763)<<x1764);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1813 = 0U;
	uint16_t x1814 = 2U;
	int32_t x1815 = INT32_MIN;
	uint32_t x1816 = 18U;
	int32_t t70 = 25;

	t70 = (((x1813%x1814)<=x1815)<<x1816);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1829 = UINT64_MAX;
	static uint32_t x1830 = UINT32_MAX;
	int8_t x1831 = -2;
	int16_t x1832 = 0;
	int32_t t71 = 1499846;

	t71 = (((x1829%x1830)<=x1831)<<x1832);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x1889 = UINT32_MAX;
	uint8_t x1890 = 2U;
	int16_t x1891 = -1;
	int8_t x1892 = 1;
	volatile int32_t t72 = 748057;

	t72 = (((x1889%x1890)<=x1891)<<x1892);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1897 = -627;
	volatile int64_t x1898 = -1LL;
	int16_t x1899 = INT16_MIN;
	uint64_t x1900 = 2LLU;

	t73 = (((x1897%x1898)<=x1899)<<x1900);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x1901 = -2806028LL;
	int32_t x1902 = -796236;
	uint16_t x1903 = UINT16_MAX;
	static uint16_t x1904 = 0U;
	static int32_t t74 = -7818;

	t74 = (((x1901%x1902)<=x1903)<<x1904);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x1989 = 118U;
	static uint8_t x1992 = 11U;
	volatile int32_t t75 = 5050;

	t75 = (((x1989%x1990)<=x1991)<<x1992);

	if (t75 != 2048) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1993 = INT16_MIN;
	static volatile int16_t x1994 = INT16_MIN;
	static uint8_t x1995 = 0U;
	static int64_t x1996 = 0LL;
	volatile int32_t t76 = 46828636;

	t76 = (((x1993%x1994)<=x1995)<<x1996);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2014 = -1;
	int64_t x2015 = INT64_MIN;
	static int16_t x2016 = 24;
	volatile int32_t t77 = 169394;

	t77 = (((x2013%x2014)<=x2015)<<x2016);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2021 = -1;
	int8_t x2023 = INT8_MIN;
	uint8_t x2024 = 4U;
	int32_t t78 = -139;

	t78 = (((x2021%x2022)<=x2023)<<x2024);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x2025 = 1U;
	volatile int16_t x2026 = -1;

	t79 = (((x2025%x2026)<=x2027)<<x2028);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2077 = UINT16_MAX;
	int16_t x2078 = INT16_MIN;
	int32_t x2079 = INT32_MIN;
	uint8_t x2080 = 4U;
	int32_t t80 = -2796026;

	t80 = (((x2077%x2078)<=x2079)<<x2080);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x2085 = 324LL;
	int32_t x2086 = INT32_MIN;
	int64_t x2087 = -147436179411408758LL;
	volatile int32_t x2088 = 9;
	static volatile int32_t t81 = 85407;

	t81 = (((x2085%x2086)<=x2087)<<x2088);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2093 = 55U;
	uint64_t x2094 = 3461987707LLU;
	int64_t x2095 = 13007053LL;
	int64_t x2096 = 1LL;
	volatile int32_t t82 = -30768;

	t82 = (((x2093%x2094)<=x2095)<<x2096);

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2117 = UINT8_MAX;
	int32_t x2118 = -1;
	uint16_t x2119 = 13559U;
	int32_t t83 = -384585;

	t83 = (((x2117%x2118)<=x2119)<<x2120);

	if (t83 != 33554432) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x2129 = 1;
	volatile uint16_t x2130 = 29U;
	volatile int32_t t84 = 888438;

	t84 = (((x2129%x2130)<=x2131)<<x2132);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2157 = 35667780;
	int8_t x2160 = 2;
	volatile int32_t t85 = 1050761;

	t85 = (((x2157%x2158)<=x2159)<<x2160);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2177 = INT8_MAX;
	int64_t x2178 = -3697LL;
	int64_t x2179 = 1LL;
	static uint8_t x2180 = 0U;
	volatile int32_t t86 = 5;

	t86 = (((x2177%x2178)<=x2179)<<x2180);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2181 = INT16_MIN;
	uint16_t x2182 = 267U;
	volatile uint16_t x2184 = 21U;
	volatile int32_t t87 = -1;

	t87 = (((x2181%x2182)<=x2183)<<x2184);

	if (t87 != 2097152) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2185 = UINT32_MAX;
	uint8_t x2186 = UINT8_MAX;
	int8_t x2188 = 1;
	volatile int32_t t88 = 7234889;

	t88 = (((x2185%x2186)<=x2187)<<x2188);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2221 = 3U;
	volatile int8_t x2222 = INT8_MAX;
	static uint64_t x2223 = UINT64_MAX;
	uint8_t x2224 = 5U;
	volatile int32_t t89 = 3744;

	t89 = (((x2221%x2222)<=x2223)<<x2224);

	if (t89 != 32) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2289 = -1LL;
	int16_t x2290 = 6217;
	int32_t x2291 = INT32_MIN;
	uint8_t x2292 = 0U;

	t90 = (((x2289%x2290)<=x2291)<<x2292);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2302 = -1;
	static int8_t x2303 = INT8_MAX;
	uint8_t x2304 = 2U;
	volatile int32_t t91 = -1023;

	t91 = (((x2301%x2302)<=x2303)<<x2304);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x2321 = UINT8_MAX;
	int32_t x2322 = INT32_MAX;
	uint16_t x2324 = 2U;
	volatile int32_t t92 = -69453;

	t92 = (((x2321%x2322)<=x2323)<<x2324);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2333 = -1;
	int64_t x2334 = 168LL;
	static volatile int32_t t93 = -2189;

	t93 = (((x2333%x2334)<=x2335)<<x2336);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x2341 = 7U;
	int32_t x2342 = -55966;
	int64_t x2343 = -1LL;
	static volatile int32_t t94 = -23321623;

	t94 = (((x2341%x2342)<=x2343)<<x2344);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2369 = 1;
	volatile int8_t x2370 = INT8_MIN;
	static uint16_t x2372 = 10U;
	volatile int32_t t95 = -78262;

	t95 = (((x2369%x2370)<=x2371)<<x2372);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2393 = INT32_MAX;
	int16_t x2395 = -904;
	static int32_t x2396 = 1;
	int32_t t96 = 102;

	t96 = (((x2393%x2394)<=x2395)<<x2396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x2409 = -1;
	uint8_t x2412 = 11U;
	int32_t t97 = 882717;

	t97 = (((x2409%x2410)<=x2411)<<x2412);

	if (t97 != 2048) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x2461 = -10275;
	int16_t x2463 = -1;
	uint16_t x2464 = 3U;
	volatile int32_t t98 = -554;

	t98 = (((x2461%x2462)<=x2463)<<x2464);

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2493 = UINT32_MAX;
	volatile int16_t x2494 = 1664;
	int32_t x2495 = INT32_MAX;
	int32_t t99 = 4955;

	t99 = (((x2493%x2494)<=x2495)<<x2496);

	if (t99 != 2) { NG(); } else { ; }
	
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


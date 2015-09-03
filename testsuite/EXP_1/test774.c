#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 145;
volatile uint16_t x53 = 6U;
int64_t x55 = INT64_MIN;
uint32_t x66 = 2251879U;
volatile int32_t t4 = 173089294;
int8_t x204 = 0;
static int32_t x275 = 237;
uint64_t x357 = UINT64_MAX;
static int16_t x391 = INT16_MIN;
static uint8_t x423 = UINT8_MAX;
uint8_t x431 = 0U;
volatile uint8_t x471 = 7U;
static uint8_t x478 = UINT8_MAX;
volatile int32_t t15 = 290715450;
int8_t x517 = INT8_MIN;
uint64_t x609 = 3116LLU;
static int16_t x641 = -93;
volatile uint16_t x644 = 17U;
volatile int32_t t21 = 1;
static int8_t x673 = INT8_MIN;
uint8_t x701 = 2U;
volatile int32_t x703 = -1;
int64_t x706 = 8656657029138LL;
int16_t x707 = -1;
int32_t t25 = -989173187;
uint32_t x813 = 580434U;
volatile uint16_t x816 = 1U;
uint64_t x894 = 1594488563013380LLU;
int64_t x916 = 1LL;
int16_t x961 = 486;
static int64_t x985 = INT64_MAX;
int32_t x987 = INT32_MIN;
uint8_t x988 = 9U;
uint64_t x1069 = 539765645969099625LLU;
static volatile uint32_t x1071 = 3050U;
uint8_t x1074 = 6U;
uint8_t x1076 = 7U;
volatile int64_t x1077 = -1LL;
int32_t t36 = 12406311;
uint32_t x1103 = UINT32_MAX;
uint16_t x1125 = 345U;
volatile int16_t x1127 = -213;
uint32_t x1128 = 6U;
static int32_t t39 = -1;
volatile uint32_t x1263 = 1975721454U;
static volatile int32_t t41 = -16160742;
int16_t x1278 = -1;
static volatile uint8_t x1285 = 0U;
uint8_t x1310 = 3U;
int32_t x1339 = -1;
uint32_t x1441 = 8438416U;
int32_t t51 = -147565482;
int32_t t52 = -10;
volatile uint32_t x1619 = UINT32_MAX;
static uint64_t x1665 = 16537942328061LLU;
volatile int32_t t55 = 5763125;
static uint16_t x1701 = 0U;
int8_t x1708 = 7;
int8_t x1752 = 0;
static int8_t x1760 = 5;
volatile uint8_t x1813 = 1U;
int32_t x1814 = -1;
uint16_t x1816 = 1U;
int32_t t62 = -53645060;
int8_t x1878 = INT8_MIN;
int32_t t65 = -298070;
int16_t x1910 = -1;
static volatile uint16_t x1944 = 7U;
volatile int32_t t67 = -1;
static volatile int32_t t69 = -980;
uint8_t x2064 = 4U;
uint32_t x2069 = 61383938U;
uint16_t x2146 = UINT16_MAX;
int8_t x2147 = INT8_MIN;
uint8_t x2148 = 5U;
volatile int32_t x2257 = -6;
int32_t t76 = 29;
static volatile uint8_t x2302 = UINT8_MAX;
static uint16_t x2303 = 203U;
volatile int32_t t78 = 328080153;
static int8_t x2318 = INT8_MAX;
static int16_t x2433 = INT16_MIN;
int32_t t82 = 13168;
uint8_t x2460 = 4U;
int32_t t84 = -51;
int64_t x2502 = 1537991559213258LL;
volatile uint32_t x2519 = UINT32_MAX;
int8_t x2520 = 0;
int32_t t86 = 11;
volatile int8_t x2538 = -61;
static int64_t x2615 = -1LL;
volatile int32_t t88 = 27407196;
uint16_t x2665 = UINT16_MAX;
static int64_t x2666 = -1LL;
static uint32_t x2677 = 53397150U;
int32_t x2678 = INT32_MIN;
static int8_t x2689 = -1;
int64_t x2699 = INT64_MIN;
uint8_t x2708 = 11U;
static int8_t x2891 = 1;
volatile int8_t x2906 = INT8_MAX;
static int64_t x2907 = INT64_MIN;
volatile int32_t t97 = 261488661;
volatile int32_t x2914 = 446641;
int32_t x2935 = INT32_MIN;


void f0(void) {
	volatile int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = 13334;
	uint8_t x12 = 7U;
	int32_t t0 = 4179000;

	t0 = (((x9%x10)==x11)>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x25 = 21933878U;
	uint64_t x26 = 19980646441LLU;
	static int16_t x27 = -1;
	static uint16_t x28 = 5U;

	t1 = (((x25%x26)==x27)>>x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x49 = 108790LLU;
	static uint32_t x50 = 2859451U;
	static int64_t x51 = INT64_MAX;
	static uint32_t x52 = 6U;
	volatile int32_t t2 = -174738921;

	t2 = (((x49%x50)==x51)>>x52);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x54 = INT64_MIN;
	int16_t x56 = 2;
	int32_t t3 = -227;

	t3 = (((x53%x54)==x55)>>x56);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x65 = 3729;
	volatile int8_t x67 = -60;
	static volatile uint8_t x68 = 1U;

	t4 = (((x65%x66)==x67)>>x68);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x201 = 22U;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 24851424893746LLU;
	int32_t t5 = 402080;

	t5 = (((x201%x202)==x203)>>x204);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x211 = 3375158766LL;
	uint16_t x212 = 8U;
	volatile int32_t t6 = -179;

	t6 = (((x209%x210)==x211)>>x212);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x273 = -10LL;
	int32_t x274 = 48858;
	static uint8_t x276 = 11U;
	volatile int32_t t7 = -10546359;

	t7 = (((x273%x274)==x275)>>x276);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x341 = UINT8_MAX;
	uint16_t x342 = 3305U;
	uint16_t x343 = 65U;
	uint8_t x344 = 2U;
	static volatile int32_t t8 = -78575;

	t8 = (((x341%x342)==x343)>>x344);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 11U;
	volatile int32_t t9 = 27;

	t9 = (((x357%x358)==x359)>>x360);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 1;
	static volatile int32_t t10 = 4955201;

	t10 = (((x373%x374)==x375)>>x376);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	uint16_t x392 = 0U;
	volatile int32_t t11 = 508698;

	t11 = (((x389%x390)==x391)>>x392);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x421 = 350LLU;
	static uint32_t x422 = UINT32_MAX;
	int8_t x424 = 0;
	static volatile int32_t t12 = -7;

	t12 = (((x421%x422)==x423)>>x424);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x429 = UINT8_MAX;
	volatile int16_t x430 = INT16_MIN;
	int8_t x432 = 2;
	int32_t t13 = -18404;

	t13 = (((x429%x430)==x431)>>x432);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x469 = INT64_MAX;
	uint32_t x470 = 977986U;
	volatile int8_t x472 = 12;
	volatile int32_t t14 = -9289;

	t14 = (((x469%x470)==x471)>>x472);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x477 = INT64_MIN;
	static int64_t x479 = INT64_MAX;
	static uint8_t x480 = 14U;

	t15 = (((x477%x478)==x479)>>x480);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x518 = 25LLU;
	volatile int8_t x519 = INT8_MIN;
	uint8_t x520 = 5U;
	static volatile int32_t t16 = -110271351;

	t16 = (((x517%x518)==x519)>>x520);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x525 = INT64_MIN;
	int32_t x526 = INT32_MAX;
	int16_t x527 = INT16_MAX;
	volatile int16_t x528 = 1;
	int32_t t17 = 13;

	t17 = (((x525%x526)==x527)>>x528);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x549 = -3;
	int32_t x550 = INT32_MIN;
	int16_t x551 = 105;
	volatile uint8_t x552 = 8U;
	volatile int32_t t18 = -157;

	t18 = (((x549%x550)==x551)>>x552);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x557 = UINT16_MAX;
	int8_t x558 = -1;
	static uint8_t x559 = 107U;
	uint16_t x560 = 0U;
	volatile int32_t t19 = -3865203;

	t19 = (((x557%x558)==x559)>>x560);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x610 = -5;
	int64_t x611 = -1LL;
	uint8_t x612 = 23U;
	int32_t t20 = -410;

	t20 = (((x609%x610)==x611)>>x612);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x642 = 738535LLU;
	int64_t x643 = INT64_MIN;

	t21 = (((x641%x642)==x643)>>x644);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x674 = -1;
	int8_t x675 = -2;
	uint8_t x676 = 5U;
	volatile int32_t t22 = -7204971;

	t22 = (((x673%x674)==x675)>>x676);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x702 = UINT64_MAX;
	uint64_t x704 = 12LLU;
	volatile int32_t t23 = -171;

	t23 = (((x701%x702)==x703)>>x704);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x705 = INT8_MIN;
	static int8_t x708 = 3;
	int32_t t24 = 4;

	t24 = (((x705%x706)==x707)>>x708);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x717 = INT16_MIN;
	int16_t x718 = 15255;
	uint32_t x719 = 16105U;
	volatile uint8_t x720 = 27U;

	t25 = (((x717%x718)==x719)>>x720);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x814 = -11;
	int16_t x815 = 9;
	volatile int32_t t26 = -2;

	t26 = (((x813%x814)==x815)>>x816);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x833 = INT32_MAX;
	int64_t x834 = INT64_MIN;
	int32_t x835 = 17945;
	static uint8_t x836 = 7U;
	volatile int32_t t27 = 10;

	t27 = (((x833%x834)==x835)>>x836);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x893 = 1;
	int8_t x895 = INT8_MAX;
	int16_t x896 = 6;
	volatile int32_t t28 = 559529;

	t28 = (((x893%x894)==x895)>>x896);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x909 = INT8_MIN;
	int16_t x910 = INT16_MIN;
	int8_t x911 = INT8_MIN;
	uint16_t x912 = 1U;
	static volatile int32_t t29 = -1612;

	t29 = (((x909%x910)==x911)>>x912);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x913 = UINT16_MAX;
	int64_t x914 = -15904709756282LL;
	static volatile uint16_t x915 = 7986U;
	int32_t t30 = 67;

	t30 = (((x913%x914)==x915)>>x916);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x962 = -1;
	volatile int32_t x963 = INT32_MAX;
	static uint8_t x964 = 8U;
	int32_t t31 = 182;

	t31 = (((x961%x962)==x963)>>x964);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x986 = -1;
	int32_t t32 = 1;

	t32 = (((x985%x986)==x987)>>x988);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x993 = UINT8_MAX;
	uint16_t x994 = UINT16_MAX;
	int32_t x995 = INT32_MIN;
	uint8_t x996 = 13U;
	static int32_t t33 = 89181667;

	t33 = (((x993%x994)==x995)>>x996);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1070 = INT32_MAX;
	static uint8_t x1072 = 2U;
	volatile int32_t t34 = -50899;

	t34 = (((x1069%x1070)==x1071)>>x1072);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1073 = INT8_MAX;
	int16_t x1075 = INT16_MIN;
	volatile int32_t t35 = -215452802;

	t35 = (((x1073%x1074)==x1075)>>x1076);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1078 = 2;
	uint8_t x1079 = 1U;
	uint32_t x1080 = 24U;

	t36 = (((x1077%x1078)==x1079)>>x1080);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1101 = UINT8_MAX;
	volatile int16_t x1102 = -1;
	volatile uint8_t x1104 = 7U;
	int32_t t37 = -36081;

	t37 = (((x1101%x1102)==x1103)>>x1104);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1126 = -1LL;
	volatile int32_t t38 = -50504398;

	t38 = (((x1125%x1126)==x1127)>>x1128);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1141 = INT16_MIN;
	volatile int64_t x1142 = -76553187490147LL;
	int8_t x1143 = 21;
	uint16_t x1144 = 13U;

	t39 = (((x1141%x1142)==x1143)>>x1144);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1241 = -988240LL;
	static volatile int32_t x1242 = -1;
	static volatile int8_t x1243 = INT8_MIN;
	uint32_t x1244 = 5U;
	int32_t t40 = 6;

	t40 = (((x1241%x1242)==x1243)>>x1244);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1261 = INT8_MIN;
	int64_t x1262 = -2565LL;
	static int16_t x1264 = 10;

	t41 = (((x1261%x1262)==x1263)>>x1264);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1269 = 781107752788LL;
	int64_t x1270 = INT64_MAX;
	uint64_t x1271 = UINT64_MAX;
	static int16_t x1272 = 11;
	int32_t t42 = -127365764;

	t42 = (((x1269%x1270)==x1271)>>x1272);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1277 = -1;
	int32_t x1279 = INT32_MAX;
	int8_t x1280 = 0;
	volatile int32_t t43 = 744792606;

	t43 = (((x1277%x1278)==x1279)>>x1280);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1286 = INT8_MIN;
	int8_t x1287 = INT8_MIN;
	uint32_t x1288 = 0U;
	volatile int32_t t44 = 146458622;

	t44 = (((x1285%x1286)==x1287)>>x1288);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1305 = -1LL;
	static uint32_t x1306 = 103839U;
	static volatile uint32_t x1307 = 17U;
	uint32_t x1308 = 1U;
	int32_t t45 = 22290196;

	t45 = (((x1305%x1306)==x1307)>>x1308);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1309 = INT64_MIN;
	static uint32_t x1311 = 13385U;
	static volatile int8_t x1312 = 2;
	int32_t t46 = -313;

	t46 = (((x1309%x1310)==x1311)>>x1312);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1337 = UINT16_MAX;
	int32_t x1338 = 4816;
	volatile int8_t x1340 = 8;
	int32_t t47 = 937878;

	t47 = (((x1337%x1338)==x1339)>>x1340);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1373 = -1119819997129957LL;
	static int16_t x1374 = -1453;
	uint32_t x1375 = 28280U;
	int8_t x1376 = 1;
	int32_t t48 = 62938881;

	t48 = (((x1373%x1374)==x1375)>>x1376);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1393 = -1;
	uint32_t x1394 = 75U;
	static int64_t x1395 = -28824422LL;
	int16_t x1396 = 1;
	int32_t t49 = -15821697;

	t49 = (((x1393%x1394)==x1395)>>x1396);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1405 = -1LL;
	int16_t x1406 = INT16_MIN;
	int64_t x1407 = INT64_MAX;
	volatile uint32_t x1408 = 12U;
	int32_t t50 = 1054610832;

	t50 = (((x1405%x1406)==x1407)>>x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1442 = 8552U;
	static volatile uint64_t x1443 = 55791468LLU;
	static uint32_t x1444 = 5U;

	t51 = (((x1441%x1442)==x1443)>>x1444);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1581 = -1;
	int32_t x1582 = INT32_MIN;
	volatile int64_t x1583 = 4099120062882686LL;
	uint8_t x1584 = 8U;

	t52 = (((x1581%x1582)==x1583)>>x1584);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1609 = INT32_MIN;
	volatile uint16_t x1610 = UINT16_MAX;
	int64_t x1611 = INT64_MIN;
	int16_t x1612 = 1;
	volatile int32_t t53 = -383328035;

	t53 = (((x1609%x1610)==x1611)>>x1612);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1617 = INT8_MIN;
	static int8_t x1618 = -1;
	uint8_t x1620 = 6U;
	int32_t t54 = -13;

	t54 = (((x1617%x1618)==x1619)>>x1620);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1666 = -4069671;
	volatile int8_t x1667 = -1;
	int8_t x1668 = 7;

	t55 = (((x1665%x1666)==x1667)>>x1668);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1702 = INT32_MIN;
	int8_t x1703 = -1;
	static volatile uint16_t x1704 = 1U;
	int32_t t56 = -208;

	t56 = (((x1701%x1702)==x1703)>>x1704);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1705 = -7;
	static uint8_t x1706 = 1U;
	volatile int16_t x1707 = INT16_MAX;
	int32_t t57 = -21;

	t57 = (((x1705%x1706)==x1707)>>x1708);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1709 = INT64_MIN;
	int8_t x1710 = INT8_MIN;
	volatile uint8_t x1711 = 0U;
	static uint32_t x1712 = 7U;
	int32_t t58 = -1;

	t58 = (((x1709%x1710)==x1711)>>x1712);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1749 = INT32_MAX;
	int16_t x1750 = INT16_MAX;
	volatile int32_t x1751 = -244130;
	int32_t t59 = 5;

	t59 = (((x1749%x1750)==x1751)>>x1752);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1753 = INT8_MIN;
	int8_t x1754 = INT8_MIN;
	int16_t x1755 = INT16_MIN;
	int32_t x1756 = 1;
	static int32_t t60 = -45742;

	t60 = (((x1753%x1754)==x1755)>>x1756);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x1757 = INT16_MIN;
	int64_t x1758 = 207094323281177310LL;
	volatile uint8_t x1759 = UINT8_MAX;
	volatile int32_t t61 = -322;

	t61 = (((x1757%x1758)==x1759)>>x1760);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1815 = INT64_MIN;

	t62 = (((x1813%x1814)==x1815)>>x1816);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1853 = -1LL;
	uint8_t x1854 = UINT8_MAX;
	static int32_t x1855 = INT32_MIN;
	uint8_t x1856 = 0U;
	int32_t t63 = -340;

	t63 = (((x1853%x1854)==x1855)>>x1856);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1877 = INT16_MIN;
	uint16_t x1879 = 3370U;
	uint8_t x1880 = 8U;
	volatile int32_t t64 = 3;

	t64 = (((x1877%x1878)==x1879)>>x1880);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1893 = 15U;
	volatile uint8_t x1894 = UINT8_MAX;
	int8_t x1895 = INT8_MIN;
	static volatile uint8_t x1896 = 1U;

	t65 = (((x1893%x1894)==x1895)>>x1896);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x1909 = UINT64_MAX;
	static int16_t x1911 = -940;
	static uint16_t x1912 = 0U;
	int32_t t66 = -75669;

	t66 = (((x1909%x1910)==x1911)>>x1912);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1941 = INT64_MIN;
	volatile int8_t x1942 = INT8_MIN;
	uint64_t x1943 = 0LLU;

	t67 = (((x1941%x1942)==x1943)>>x1944);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1965 = -1LL;
	int16_t x1966 = -2167;
	volatile int64_t x1967 = 23916LL;
	static uint64_t x1968 = 0LLU;
	int32_t t68 = -4902942;

	t68 = (((x1965%x1966)==x1967)>>x1968);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1973 = INT64_MIN;
	uint32_t x1974 = UINT32_MAX;
	int16_t x1975 = INT16_MIN;
	uint64_t x1976 = 13LLU;

	t69 = (((x1973%x1974)==x1975)>>x1976);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1981 = -2134239111821769LL;
	uint32_t x1982 = 61041775U;
	static int32_t x1983 = -1;
	uint8_t x1984 = 22U;
	int32_t t70 = 6;

	t70 = (((x1981%x1982)==x1983)>>x1984);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2061 = INT16_MAX;
	volatile int16_t x2062 = 3;
	int16_t x2063 = -1287;
	volatile int32_t t71 = -177;

	t71 = (((x2061%x2062)==x2063)>>x2064);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2070 = INT32_MIN;
	uint16_t x2071 = UINT16_MAX;
	volatile uint8_t x2072 = 0U;
	volatile int32_t t72 = 14;

	t72 = (((x2069%x2070)==x2071)>>x2072);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2133 = INT8_MIN;
	static uint32_t x2134 = 15U;
	volatile int8_t x2135 = -1;
	uint8_t x2136 = 1U;
	int32_t t73 = 11059;

	t73 = (((x2133%x2134)==x2135)>>x2136);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2145 = 11;
	volatile int32_t t74 = -3774187;

	t74 = (((x2145%x2146)==x2147)>>x2148);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2201 = 1721;
	int16_t x2202 = INT16_MIN;
	uint8_t x2203 = 12U;
	volatile uint8_t x2204 = 15U;
	int32_t t75 = 0;

	t75 = (((x2201%x2202)==x2203)>>x2204);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2258 = INT64_MAX;
	int8_t x2259 = 10;
	static uint16_t x2260 = 11U;

	t76 = (((x2257%x2258)==x2259)>>x2260);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2261 = 3187;
	int32_t x2262 = INT32_MAX;
	static int16_t x2263 = -1;
	uint32_t x2264 = 5U;
	static volatile int32_t t77 = -1225184;

	t77 = (((x2261%x2262)==x2263)>>x2264);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x2301 = INT32_MIN;
	static int32_t x2304 = 3;

	t78 = (((x2301%x2302)==x2303)>>x2304);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x2317 = 25279U;
	uint32_t x2319 = 2U;
	uint32_t x2320 = 1U;
	int32_t t79 = -87261;

	t79 = (((x2317%x2318)==x2319)>>x2320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2337 = -1;
	volatile int16_t x2338 = -1;
	uint64_t x2339 = UINT64_MAX;
	uint8_t x2340 = 28U;
	volatile int32_t t80 = -3150700;

	t80 = (((x2337%x2338)==x2339)>>x2340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2365 = 21550229779489331LLU;
	int64_t x2366 = -109941340012657191LL;
	int8_t x2367 = INT8_MIN;
	int16_t x2368 = 3;
	int32_t t81 = -18073893;

	t81 = (((x2365%x2366)==x2367)>>x2368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x2434 = 224U;
	int64_t x2435 = INT64_MIN;
	volatile uint16_t x2436 = 4U;

	t82 = (((x2433%x2434)==x2435)>>x2436);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2457 = 2038958866008124045LLU;
	uint64_t x2458 = 15267719906182702LLU;
	uint64_t x2459 = UINT64_MAX;
	volatile int32_t t83 = -1908;

	t83 = (((x2457%x2458)==x2459)>>x2460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2497 = 3592U;
	int32_t x2498 = -1;
	int8_t x2499 = -2;
	static int8_t x2500 = 2;

	t84 = (((x2497%x2498)==x2499)>>x2500);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2501 = -1;
	int16_t x2503 = INT16_MAX;
	volatile uint8_t x2504 = 0U;
	volatile int32_t t85 = 817232;

	t85 = (((x2501%x2502)==x2503)>>x2504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x2517 = INT32_MAX;
	uint32_t x2518 = 1U;

	t86 = (((x2517%x2518)==x2519)>>x2520);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x2537 = INT64_MIN;
	volatile int32_t x2539 = -127425344;
	int16_t x2540 = 0;
	int32_t t87 = -1604;

	t87 = (((x2537%x2538)==x2539)>>x2540);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2613 = INT64_MIN;
	uint8_t x2614 = 26U;
	static uint8_t x2616 = 2U;

	t88 = (((x2613%x2614)==x2615)>>x2616);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x2667 = INT8_MIN;
	uint16_t x2668 = 8U;
	volatile int32_t t89 = 659;

	t89 = (((x2665%x2666)==x2667)>>x2668);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2679 = INT8_MAX;
	static int8_t x2680 = 0;
	int32_t t90 = 122424118;

	t90 = (((x2677%x2678)==x2679)>>x2680);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2690 = UINT32_MAX;
	volatile uint8_t x2691 = UINT8_MAX;
	volatile uint32_t x2692 = 31U;
	int32_t t91 = -2950;

	t91 = (((x2689%x2690)==x2691)>>x2692);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2697 = INT64_MIN;
	volatile int16_t x2698 = INT16_MIN;
	uint8_t x2700 = 2U;
	int32_t t92 = 2068625;

	t92 = (((x2697%x2698)==x2699)>>x2700);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2705 = INT8_MIN;
	volatile int64_t x2706 = INT64_MIN;
	int32_t x2707 = 1;
	int32_t t93 = 3066;

	t93 = (((x2705%x2706)==x2707)>>x2708);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2809 = INT8_MIN;
	volatile uint8_t x2810 = UINT8_MAX;
	int8_t x2811 = INT8_MIN;
	int16_t x2812 = 1;
	int32_t t94 = -43451;

	t94 = (((x2809%x2810)==x2811)>>x2812);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2861 = 43286U;
	volatile uint64_t x2862 = 132LLU;
	int16_t x2863 = INT16_MIN;
	static int16_t x2864 = 15;
	int32_t t95 = -1;

	t95 = (((x2861%x2862)==x2863)>>x2864);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2889 = UINT8_MAX;
	uint16_t x2890 = 4582U;
	int16_t x2892 = 10;
	static volatile int32_t t96 = 12;

	t96 = (((x2889%x2890)==x2891)>>x2892);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x2905 = 2U;
	static uint8_t x2908 = 1U;

	t97 = (((x2905%x2906)==x2907)>>x2908);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x2913 = 212594LL;
	int64_t x2915 = INT64_MIN;
	int8_t x2916 = 0;
	int32_t t98 = -44790;

	t98 = (((x2913%x2914)==x2915)>>x2916);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x2933 = -9262515;
	int8_t x2934 = -1;
	int8_t x2936 = 0;
	int32_t t99 = 478739035;

	t99 = (((x2933%x2934)==x2935)>>x2936);

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


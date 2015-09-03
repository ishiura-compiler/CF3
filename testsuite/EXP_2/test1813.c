#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x27 = 13U;
volatile int8_t x32 = 3;
volatile int32_t t1 = -3339496;
int8_t x69 = -2;
uint8_t x72 = 12U;
volatile int32_t x138 = -1;
uint16_t x140 = 11U;
int64_t x208 = 29LL;
volatile int32_t t6 = -31;
static int16_t x218 = -358;
uint16_t x294 = 9384U;
int32_t t8 = -2112;
int32_t t9 = 114944262;
int32_t x313 = INT32_MIN;
static int8_t x374 = -7;
volatile int32_t t11 = -24817789;
int32_t x394 = INT32_MIN;
volatile uint16_t x395 = 4U;
volatile int32_t t12 = 10;
uint8_t x420 = 10U;
int8_t x421 = 1;
static volatile uint64_t x481 = UINT64_MAX;
uint16_t x609 = 10736U;
uint16_t x695 = 65U;
int16_t x761 = INT16_MIN;
uint8_t x764 = 9U;
uint16_t x768 = 3U;
int8_t x809 = INT8_MIN;
static int32_t t26 = 27;
static volatile uint8_t x860 = 20U;
int64_t x869 = INT64_MIN;
uint64_t x871 = 1136209LLU;
volatile int64_t x872 = 1LL;
int64_t x917 = INT64_MAX;
uint32_t x1013 = UINT32_MAX;
uint16_t x1014 = 24U;
volatile int16_t x1016 = 0;
static volatile int32_t t34 = 183;
uint32_t x1036 = 22U;
volatile int32_t t35 = -99408187;
volatile int32_t t36 = -1;
int32_t x1083 = -415;
volatile int32_t t39 = 67145;
volatile int64_t x1289 = INT64_MAX;
int64_t x1290 = INT64_MAX;
int64_t x1310 = -26854854733LL;
static int32_t t44 = -2951595;
int8_t x1361 = -1;
int32_t x1362 = -533;
int32_t x1373 = INT32_MIN;
int64_t x1374 = INT64_MIN;
int16_t x1376 = 1;
int16_t x1497 = INT16_MAX;
int32_t x1502 = -1;
volatile int64_t x1506 = -45LL;
int64_t x1507 = INT64_MIN;
static int32_t t52 = -51;
uint8_t x1536 = 4U;
static int16_t x1552 = 11;
int32_t t54 = -192;
volatile int8_t x1574 = INT8_MAX;
int32_t t56 = 300;
volatile int32_t t58 = 42;
int64_t x1653 = 1400616963947382LL;
int8_t x1654 = -9;
volatile int32_t x1747 = -53117;
volatile uint8_t x1756 = 17U;
static volatile int32_t t61 = 324;
volatile uint16_t x1762 = 3U;
volatile int32_t t62 = -1;
int64_t x1799 = INT64_MAX;
int32_t t69 = 4210839;
volatile int32_t t70 = 183548;
uint32_t x2069 = 86347517U;
int8_t x2072 = 0;
volatile int8_t x2148 = 2;
volatile int32_t t72 = 414961;
int8_t x2157 = INT8_MIN;
volatile uint16_t x2158 = 340U;
static int8_t x2217 = -20;
int8_t x2231 = INT8_MIN;
volatile int32_t t75 = 6199947;
int32_t x2263 = INT32_MIN;
volatile int32_t t76 = -12545208;
volatile int64_t x2310 = INT64_MAX;
int32_t t79 = -28;
int8_t x2449 = INT8_MAX;
int32_t x2450 = -1;
static volatile int32_t t81 = -1570;
int16_t x2481 = -1;
static volatile int32_t t82 = 287523;
int8_t x2502 = -1;
static uint8_t x2504 = 0U;
int64_t x2581 = INT64_MIN;
int8_t x2584 = 3;
static volatile int64_t x2587 = INT64_MAX;
int16_t x2615 = INT16_MAX;
int64_t x2779 = INT64_MAX;
int64_t x2826 = INT64_MIN;
uint16_t x2841 = UINT16_MAX;
uint8_t x2864 = 1U;
volatile int32_t t96 = 334542;
uint32_t x2934 = 91992461U;


void f0(void) {
	static int64_t x25 = INT64_MIN;
	int32_t x26 = 15;
	int32_t x28 = 0;
	volatile int32_t t0 = 86;

	t0 = ((x25<=(x26&x27))<<x28);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = -4;
	uint32_t x30 = 908088770U;
	int8_t x31 = INT8_MIN;

	t1 = ((x29<=(x30&x31))<<x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MAX;
	uint16_t x51 = 8201U;
	static int8_t x52 = 3;
	volatile int32_t t2 = 2101;

	t2 = ((x49<=(x50&x51))<<x52);

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = 0;
	int32_t t3 = -52252459;

	t3 = ((x69<=(x70&x71))<<x72);

	if (t3 != 4096) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x137 = 28LL;
	int32_t x139 = 0;
	volatile int32_t t4 = 3;

	t4 = ((x137<=(x138&x139))<<x140);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x181 = -1919;
	int64_t x182 = -13285497634257LL;
	volatile int16_t x183 = INT16_MAX;
	int16_t x184 = 24;
	static volatile int32_t t5 = 317;

	t5 = ((x181<=(x182&x183))<<x184);

	if (t5 != 16777216) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	uint32_t x207 = 83U;

	t6 = ((x205<=(x206&x207))<<x208);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x219 = -1;
	int8_t x220 = 0;
	int32_t t7 = -335595182;

	t7 = ((x217<=(x218&x219))<<x220);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x293 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 3U;

	t8 = ((x293<=(x294&x295))<<x296);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x297 = 14;
	int32_t x298 = 6;
	static uint8_t x299 = 49U;
	volatile int64_t x300 = 3LL;

	t9 = ((x297<=(x298&x299))<<x300);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x314 = 16739474729303LL;
	uint16_t x315 = 230U;
	uint8_t x316 = 1U;
	volatile int32_t t10 = -963;

	t10 = ((x313<=(x314&x315))<<x316);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x375 = -1;
	uint8_t x376 = 26U;

	t11 = ((x373<=(x374&x375))<<x376);

	if (t11 != 67108864) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x393 = 26U;
	static uint16_t x396 = 5U;

	t12 = ((x393<=(x394&x395))<<x396);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x409 = 2929098;
	static int64_t x410 = INT64_MAX;
	volatile int8_t x411 = -1;
	uint8_t x412 = 3U;
	volatile int32_t t13 = 464948;

	t13 = ((x409<=(x410&x411))<<x412);

	if (t13 != 8) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x417 = 111554;
	int8_t x418 = -1;
	int64_t x419 = INT64_MIN;
	int32_t t14 = -289587;

	t14 = ((x417<=(x418&x419))<<x420);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x422 = UINT8_MAX;
	static int16_t x423 = INT16_MAX;
	uint8_t x424 = 4U;
	static int32_t t15 = 20812;

	t15 = ((x421<=(x422&x423))<<x424);

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x482 = -163072467LL;
	static int32_t x483 = INT32_MIN;
	volatile uint8_t x484 = 0U;
	int32_t t16 = 1;

	t16 = ((x481<=(x482&x483))<<x484);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x489 = -6LL;
	int8_t x490 = 0;
	static uint16_t x491 = 1U;
	int8_t x492 = 20;
	volatile int32_t t17 = 202110030;

	t17 = ((x489<=(x490&x491))<<x492);

	if (t17 != 1048576) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x610 = INT8_MIN;
	uint32_t x611 = 27684U;
	uint16_t x612 = 25U;
	int32_t t18 = 862263;

	t18 = ((x609<=(x610&x611))<<x612);

	if (t18 != 33554432) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x613 = -185;
	uint32_t x614 = 38170664U;
	int64_t x615 = 1018729878626320LL;
	volatile int32_t x616 = 0;
	volatile int32_t t19 = 1;

	t19 = ((x613<=(x614&x615))<<x616);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x685 = 77U;
	static uint32_t x686 = UINT32_MAX;
	int64_t x687 = -7LL;
	static volatile int8_t x688 = 5;
	volatile int32_t t20 = 28728;

	t20 = ((x685<=(x686&x687))<<x688);

	if (t20 != 32) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x693 = INT8_MIN;
	int32_t x694 = INT32_MAX;
	volatile int8_t x696 = 22;
	int32_t t21 = 1793;

	t21 = ((x693<=(x694&x695))<<x696);

	if (t21 != 4194304) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x705 = UINT16_MAX;
	uint64_t x706 = UINT64_MAX;
	uint64_t x707 = 6692635723568349726LLU;
	static uint8_t x708 = 11U;
	int32_t t22 = -15;

	t22 = ((x705<=(x706&x707))<<x708);

	if (t22 != 2048) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x762 = INT32_MIN;
	volatile int64_t x763 = INT64_MIN;
	static int32_t t23 = 0;

	t23 = ((x761<=(x762&x763))<<x764);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x765 = INT8_MAX;
	uint8_t x766 = 15U;
	volatile int64_t x767 = -163941986464086733LL;
	volatile int32_t t24 = -2005611;

	t24 = ((x765<=(x766&x767))<<x768);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x793 = INT8_MIN;
	int32_t x794 = INT32_MAX;
	uint8_t x795 = 1U;
	uint8_t x796 = 0U;
	volatile int32_t t25 = 2812738;

	t25 = ((x793<=(x794&x795))<<x796);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x810 = 0U;
	uint32_t x811 = UINT32_MAX;
	static uint16_t x812 = 2U;

	t26 = ((x809<=(x810&x811))<<x812);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x857 = 3757680U;
	volatile int8_t x858 = -1;
	uint64_t x859 = UINT64_MAX;
	static volatile int32_t t27 = 286983565;

	t27 = ((x857<=(x858&x859))<<x860);

	if (t27 != 1048576) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x870 = 2U;
	volatile int32_t t28 = 187;

	t28 = ((x869<=(x870&x871))<<x872);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x889 = INT16_MIN;
	static int16_t x890 = INT16_MIN;
	uint16_t x891 = 2U;
	uint64_t x892 = 9LLU;
	int32_t t29 = -21;

	t29 = ((x889<=(x890&x891))<<x892);

	if (t29 != 512) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x909 = INT64_MIN;
	int64_t x910 = -1LL;
	volatile uint64_t x911 = 79222953LLU;
	static int8_t x912 = 0;
	volatile int32_t t30 = -446;

	t30 = ((x909<=(x910&x911))<<x912);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x918 = -7931;
	int8_t x919 = INT8_MIN;
	uint16_t x920 = 1U;
	int32_t t31 = 4189905;

	t31 = ((x917<=(x918&x919))<<x920);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x961 = UINT16_MAX;
	uint16_t x962 = 3257U;
	int32_t x963 = INT32_MIN;
	int16_t x964 = 1;
	static volatile int32_t t32 = 386738254;

	t32 = ((x961<=(x962&x963))<<x964);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x993 = -166;
	int32_t x994 = -1;
	uint8_t x995 = 39U;
	int8_t x996 = 1;
	int32_t t33 = -521901056;

	t33 = ((x993<=(x994&x995))<<x996);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1015 = 1;

	t34 = ((x1013<=(x1014&x1015))<<x1016);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1033 = INT16_MAX;
	int32_t x1034 = INT32_MAX;
	uint8_t x1035 = 91U;

	t35 = ((x1033<=(x1034&x1035))<<x1036);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x1041 = 27872627136597LLU;
	uint32_t x1042 = 58373U;
	volatile int32_t x1043 = 2415309;
	int16_t x1044 = 1;

	t36 = ((x1041<=(x1042&x1043))<<x1044);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1069 = 2692253102609065640LLU;
	int16_t x1070 = INT16_MAX;
	int8_t x1071 = INT8_MAX;
	uint32_t x1072 = 5U;
	volatile int32_t t37 = -51198;

	t37 = ((x1069<=(x1070&x1071))<<x1072);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1081 = -1;
	static int8_t x1082 = 30;
	uint8_t x1084 = 1U;
	volatile int32_t t38 = 166525180;

	t38 = ((x1081<=(x1082&x1083))<<x1084);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1097 = 6U;
	uint32_t x1098 = 6454705U;
	uint8_t x1099 = 2U;
	uint16_t x1100 = 31U;

	t39 = ((x1097<=(x1098&x1099))<<x1100);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1113 = INT8_MIN;
	int64_t x1114 = -1LL;
	uint32_t x1115 = 10130U;
	static volatile uint8_t x1116 = 3U;
	static int32_t t40 = 37343;

	t40 = ((x1113<=(x1114&x1115))<<x1116);

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x1161 = 76293LLU;
	int32_t x1162 = INT32_MIN;
	volatile uint16_t x1163 = 6182U;
	uint8_t x1164 = 1U;
	int32_t t41 = -16749639;

	t41 = ((x1161<=(x1162&x1163))<<x1164);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x1285 = 54;
	uint32_t x1286 = UINT32_MAX;
	int8_t x1287 = 0;
	uint16_t x1288 = 18U;
	volatile int32_t t42 = -370437138;

	t42 = ((x1285<=(x1286&x1287))<<x1288);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1291 = -1;
	uint8_t x1292 = 7U;
	volatile int32_t t43 = -3407245;

	t43 = ((x1289<=(x1290&x1291))<<x1292);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1309 = INT32_MAX;
	int8_t x1311 = -41;
	uint8_t x1312 = 19U;

	t44 = ((x1309<=(x1310&x1311))<<x1312);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1333 = INT64_MIN;
	volatile int16_t x1334 = -1;
	volatile int32_t x1335 = INT32_MIN;
	int8_t x1336 = 6;
	static volatile int32_t t45 = 28;

	t45 = ((x1333<=(x1334&x1335))<<x1336);

	if (t45 != 64) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1363 = INT32_MIN;
	static volatile uint16_t x1364 = 24U;
	static volatile int32_t t46 = -1397;

	t46 = ((x1361<=(x1362&x1363))<<x1364);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1375 = INT64_MIN;
	volatile int32_t t47 = 4703260;

	t47 = ((x1373<=(x1374&x1375))<<x1376);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1381 = -339;
	int16_t x1382 = INT16_MAX;
	volatile int8_t x1383 = -6;
	uint8_t x1384 = 0U;
	volatile int32_t t48 = 2;

	t48 = ((x1381<=(x1382&x1383))<<x1384);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1433 = INT16_MIN;
	uint64_t x1434 = 8951LLU;
	int8_t x1435 = 3;
	volatile uint16_t x1436 = 1U;
	volatile int32_t t49 = 237070;

	t49 = ((x1433<=(x1434&x1435))<<x1436);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1498 = INT64_MAX;
	volatile int64_t x1499 = -674LL;
	uint8_t x1500 = 14U;
	static int32_t t50 = 616;

	t50 = ((x1497<=(x1498&x1499))<<x1500);

	if (t50 != 16384) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x1501 = 1U;
	volatile uint64_t x1503 = 979221125802LLU;
	uint8_t x1504 = 26U;
	volatile int32_t t51 = 5;

	t51 = ((x1501<=(x1502&x1503))<<x1504);

	if (t51 != 67108864) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1505 = INT8_MIN;
	int16_t x1508 = 2;

	t52 = ((x1505<=(x1506&x1507))<<x1508);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1533 = INT16_MIN;
	int8_t x1534 = INT8_MAX;
	int8_t x1535 = INT8_MIN;
	volatile int32_t t53 = 123650;

	t53 = ((x1533<=(x1534&x1535))<<x1536);

	if (t53 != 16) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1549 = UINT8_MAX;
	int16_t x1550 = INT16_MAX;
	volatile int64_t x1551 = INT64_MAX;

	t54 = ((x1549<=(x1550&x1551))<<x1552);

	if (t54 != 2048) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1569 = -1LL;
	uint16_t x1570 = 12U;
	int64_t x1571 = -1763673167LL;
	uint8_t x1572 = 5U;
	static volatile int32_t t55 = -57521873;

	t55 = ((x1569<=(x1570&x1571))<<x1572);

	if (t55 != 32) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1573 = UINT32_MAX;
	static uint64_t x1575 = 60976099212LLU;
	static uint64_t x1576 = 1LLU;

	t56 = ((x1573<=(x1574&x1575))<<x1576);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1581 = -98347749588301LL;
	static int16_t x1582 = -10301;
	uint32_t x1583 = UINT32_MAX;
	static int8_t x1584 = 1;
	volatile int32_t t57 = 10645486;

	t57 = ((x1581<=(x1582&x1583))<<x1584);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1625 = -2410;
	int64_t x1626 = INT64_MAX;
	static uint32_t x1627 = 25U;
	uint8_t x1628 = 17U;

	t58 = ((x1625<=(x1626&x1627))<<x1628);

	if (t58 != 131072) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1655 = 73675108172655LLU;
	uint64_t x1656 = 27LLU;
	volatile int32_t t59 = -6300771;

	t59 = ((x1653<=(x1654&x1655))<<x1656);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1745 = 7LLU;
	static int32_t x1746 = INT32_MIN;
	int8_t x1748 = 5;
	int32_t t60 = -1;

	t60 = ((x1745<=(x1746&x1747))<<x1748);

	if (t60 != 32) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1753 = 0U;
	static int64_t x1754 = INT64_MIN;
	volatile uint32_t x1755 = UINT32_MAX;

	t61 = ((x1753<=(x1754&x1755))<<x1756);

	if (t61 != 131072) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1761 = INT64_MIN;
	uint16_t x1763 = 278U;
	int32_t x1764 = 5;

	t62 = ((x1761<=(x1762&x1763))<<x1764);

	if (t62 != 32) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1797 = 8360999143LLU;
	int16_t x1798 = INT16_MAX;
	int8_t x1800 = 0;
	volatile int32_t t63 = 55;

	t63 = ((x1797<=(x1798&x1799))<<x1800);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x1805 = 1U;
	int64_t x1806 = 9787655882581554LL;
	int64_t x1807 = INT64_MIN;
	uint64_t x1808 = 0LLU;
	volatile int32_t t64 = 42891;

	t64 = ((x1805<=(x1806&x1807))<<x1808);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1821 = INT32_MAX;
	int16_t x1822 = -15667;
	uint32_t x1823 = UINT32_MAX;
	uint16_t x1824 = 13U;
	int32_t t65 = -749208670;

	t65 = ((x1821<=(x1822&x1823))<<x1824);

	if (t65 != 8192) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1909 = UINT32_MAX;
	int32_t x1910 = INT32_MAX;
	volatile uint16_t x1911 = 7449U;
	uint8_t x1912 = 2U;
	static int32_t t66 = -21504;

	t66 = ((x1909<=(x1910&x1911))<<x1912);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x1917 = 6U;
	int64_t x1918 = INT64_MAX;
	volatile int8_t x1919 = -1;
	int16_t x1920 = 1;
	static int32_t t67 = -3;

	t67 = ((x1917<=(x1918&x1919))<<x1920);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1941 = INT64_MAX;
	uint16_t x1942 = 26105U;
	volatile int16_t x1943 = -1;
	uint8_t x1944 = 0U;
	volatile int32_t t68 = -8;

	t68 = ((x1941<=(x1942&x1943))<<x1944);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1969 = INT32_MIN;
	volatile int16_t x1970 = 1;
	int32_t x1971 = INT32_MAX;
	static uint8_t x1972 = 2U;

	t69 = ((x1969<=(x1970&x1971))<<x1972);

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2029 = UINT64_MAX;
	int64_t x2030 = -62485051275917599LL;
	static int32_t x2031 = INT32_MAX;
	static volatile int8_t x2032 = 3;

	t70 = ((x2029<=(x2030&x2031))<<x2032);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2070 = INT32_MIN;
	static volatile int16_t x2071 = INT16_MIN;
	int32_t t71 = 552;

	t71 = ((x2069<=(x2070&x2071))<<x2072);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2145 = -1;
	uint64_t x2146 = 75707354159480930LLU;
	volatile int8_t x2147 = INT8_MAX;

	t72 = ((x2145<=(x2146&x2147))<<x2148);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2159 = -462;
	uint8_t x2160 = 2U;
	volatile int32_t t73 = 1;

	t73 = ((x2157<=(x2158&x2159))<<x2160);

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2218 = 51586LLU;
	int64_t x2219 = INT64_MIN;
	uint16_t x2220 = 6U;
	int32_t t74 = 48002280;

	t74 = ((x2217<=(x2218&x2219))<<x2220);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2229 = 84U;
	static int8_t x2230 = -11;
	int8_t x2232 = 4;

	t75 = ((x2229<=(x2230&x2231))<<x2232);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x2261 = -1LL;
	int64_t x2262 = -1LL;
	int8_t x2264 = 7;

	t76 = ((x2261<=(x2262&x2263))<<x2264);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2281 = 797U;
	int64_t x2282 = INT64_MIN;
	volatile int64_t x2283 = INT64_MIN;
	uint32_t x2284 = 2U;
	int32_t t77 = 14;

	t77 = ((x2281<=(x2282&x2283))<<x2284);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x2309 = 28U;
	uint8_t x2311 = UINT8_MAX;
	static uint32_t x2312 = 5U;
	int32_t t78 = 43182;

	t78 = ((x2309<=(x2310&x2311))<<x2312);

	if (t78 != 32) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x2361 = INT8_MIN;
	volatile int8_t x2362 = -23;
	static uint64_t x2363 = UINT64_MAX;
	volatile int8_t x2364 = 2;

	t79 = ((x2361<=(x2362&x2363))<<x2364);

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x2377 = INT64_MIN;
	int32_t x2378 = -1;
	int32_t x2379 = INT32_MAX;
	uint8_t x2380 = 9U;
	static int32_t t80 = -679690282;

	t80 = ((x2377<=(x2378&x2379))<<x2380);

	if (t80 != 512) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x2451 = INT16_MIN;
	uint8_t x2452 = 12U;

	t81 = ((x2449<=(x2450&x2451))<<x2452);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2482 = 473;
	uint8_t x2483 = 1U;
	int8_t x2484 = 3;

	t82 = ((x2481<=(x2482&x2483))<<x2484);

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2501 = 16U;
	int16_t x2503 = -234;
	static volatile int32_t t83 = -9689841;

	t83 = ((x2501<=(x2502&x2503))<<x2504);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2509 = -1;
	int8_t x2510 = INT8_MAX;
	uint8_t x2511 = UINT8_MAX;
	int8_t x2512 = 1;
	volatile int32_t t84 = 538076;

	t84 = ((x2509<=(x2510&x2511))<<x2512);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2537 = INT32_MIN;
	int64_t x2538 = -10LL;
	volatile uint32_t x2539 = 8431U;
	volatile uint8_t x2540 = 5U;
	int32_t t85 = 509530;

	t85 = ((x2537<=(x2538&x2539))<<x2540);

	if (t85 != 32) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2565 = INT64_MAX;
	uint64_t x2566 = UINT64_MAX;
	volatile uint16_t x2567 = 401U;
	uint8_t x2568 = 2U;
	volatile int32_t t86 = 18525643;

	t86 = ((x2565<=(x2566&x2567))<<x2568);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2577 = 0;
	int16_t x2578 = -57;
	int64_t x2579 = 3617642537LL;
	uint16_t x2580 = 6U;
	int32_t t87 = 16925578;

	t87 = ((x2577<=(x2578&x2579))<<x2580);

	if (t87 != 64) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2582 = 15464632LL;
	int8_t x2583 = INT8_MIN;
	int32_t t88 = -144;

	t88 = ((x2581<=(x2582&x2583))<<x2584);

	if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x2585 = 309U;
	uint16_t x2586 = UINT16_MAX;
	int32_t x2588 = 3;
	static volatile int32_t t89 = -30;

	t89 = ((x2585<=(x2586&x2587))<<x2588);

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2613 = 14;
	static uint32_t x2614 = 8842343U;
	int8_t x2616 = 2;
	volatile int32_t t90 = -21693808;

	t90 = ((x2613<=(x2614&x2615))<<x2616);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2677 = -1;
	uint64_t x2678 = UINT64_MAX;
	static int32_t x2679 = INT32_MAX;
	uint8_t x2680 = 7U;
	volatile int32_t t91 = -63873;

	t91 = ((x2677<=(x2678&x2679))<<x2680);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x2733 = 59U;
	int8_t x2734 = -1;
	static uint64_t x2735 = 25179378LLU;
	volatile uint16_t x2736 = 1U;
	int32_t t92 = -598194073;

	t92 = ((x2733<=(x2734&x2735))<<x2736);

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2777 = UINT8_MAX;
	int8_t x2778 = INT8_MAX;
	int16_t x2780 = 6;
	volatile int32_t t93 = 18802925;

	t93 = ((x2777<=(x2778&x2779))<<x2780);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2825 = 80U;
	uint8_t x2827 = 107U;
	static uint8_t x2828 = 1U;
	volatile int32_t t94 = 54;

	t94 = ((x2825<=(x2826&x2827))<<x2828);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2842 = INT16_MAX;
	int8_t x2843 = INT8_MAX;
	static int16_t x2844 = 0;
	int32_t t95 = -1;

	t95 = ((x2841<=(x2842&x2843))<<x2844);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2861 = UINT8_MAX;
	static int8_t x2862 = INT8_MIN;
	volatile int16_t x2863 = -516;

	t96 = ((x2861<=(x2862&x2863))<<x2864);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x2885 = INT16_MIN;
	int16_t x2886 = -1;
	int16_t x2887 = INT16_MIN;
	int16_t x2888 = 0;
	static volatile int32_t t97 = -29718;

	t97 = ((x2885<=(x2886&x2887))<<x2888);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2909 = -1LL;
	volatile uint16_t x2910 = 11607U;
	static volatile int16_t x2911 = INT16_MIN;
	uint32_t x2912 = 0U;
	volatile int32_t t98 = -327236;

	t98 = ((x2909<=(x2910&x2911))<<x2912);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2933 = INT32_MAX;
	static int16_t x2935 = INT16_MAX;
	uint8_t x2936 = 2U;
	int32_t t99 = 180;

	t99 = ((x2933<=(x2934&x2935))<<x2936);

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


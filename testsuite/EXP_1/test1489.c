#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x11 = 77008U;
static int8_t x12 = 1;
volatile int64_t t1 = 47091067LL;
uint16_t x102 = 11U;
volatile int8_t x221 = -56;
int8_t x238 = -31;
volatile int32_t t10 = 1713561;
int32_t x293 = INT32_MIN;
int16_t x313 = -7;
uint16_t x315 = 63U;
static int8_t x336 = 4;
volatile int32_t t14 = 328494;
volatile uint8_t x348 = 4U;
volatile int32_t t18 = -95691;
int64_t x386 = INT64_MIN;
uint8_t x387 = 116U;
volatile uint8_t x388 = 0U;
int16_t x466 = 0;
int8_t x467 = -1;
uint64_t x473 = UINT64_MAX;
volatile int8_t x475 = 1;
int32_t t21 = 87890367;
static int8_t x482 = -1;
static uint32_t x550 = UINT32_MAX;
uint64_t x612 = 30LLU;
uint16_t x656 = 1U;
int32_t x681 = INT32_MIN;
static int8_t x707 = INT8_MIN;
uint16_t x794 = UINT16_MAX;
int16_t x810 = INT16_MIN;
uint16_t x852 = 9U;
uint8_t x907 = 5U;
static uint16_t x951 = 1U;
uint16_t x981 = 247U;
static volatile uint64_t t38 = 56LLU;
int32_t x1045 = INT32_MIN;
uint8_t x1048 = 10U;
volatile int8_t x1054 = INT8_MAX;
uint8_t x1056 = 1U;
volatile int32_t t41 = -3971;
int8_t x1143 = 0;
volatile int8_t x1155 = INT8_MIN;
volatile int16_t x1156 = 0;
volatile int32_t t43 = -3172255;
uint8_t x1170 = 124U;
volatile int32_t t46 = -345470;
uint16_t x1183 = 15U;
uint8_t x1184 = 13U;
uint16_t x1241 = UINT16_MAX;
static int64_t x1285 = -1LL;
int8_t x1299 = INT8_MAX;
int8_t x1300 = 20;
uint64_t x1353 = UINT64_MAX;
int64_t x1354 = INT64_MAX;
static volatile int16_t x1434 = INT16_MIN;
int16_t x1435 = INT16_MAX;
int32_t t59 = 0;
int8_t x1511 = -58;
int32_t t62 = -426789267;
volatile int16_t x1548 = 1;
static int8_t x1557 = INT8_MIN;
int32_t x1573 = INT32_MAX;
static uint32_t x1637 = UINT32_MAX;
int32_t x1639 = INT32_MIN;
volatile int32_t t69 = 39379213;
uint8_t x1661 = 53U;
static uint64_t x1699 = 2548499276422263168LLU;
int32_t x1715 = -1;
uint32_t x1758 = 7163U;
uint32_t t74 = 472087U;
uint8_t x1787 = 3U;
int16_t x1809 = INT16_MIN;
int8_t x1821 = INT8_MAX;
static int64_t x1823 = INT64_MIN;
static int8_t x1846 = -1;
volatile int64_t t81 = -7492093008045525LL;
int32_t x1903 = INT32_MIN;
volatile uint64_t x2043 = UINT64_MAX;
static int8_t x2060 = 0;
static uint16_t x2100 = 1U;
volatile uint64_t x2103 = 47856773562LLU;
volatile int8_t x2104 = 1;
static int32_t t87 = -27635361;
int32_t x2195 = -59;
static int64_t x2261 = INT64_MIN;
uint64_t x2309 = 31340242572527LLU;
int32_t x2322 = 24023;
volatile uint8_t x2361 = 94U;
uint16_t x2366 = 31014U;
volatile uint8_t x2367 = 3U;
volatile int16_t x2421 = INT16_MIN;
volatile int8_t x2422 = -1;
static uint16_t x2562 = UINT16_MAX;


void f0(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = -6;
	uint32_t t0 = 10U;

	t0 = (((x9<x10)&x11)>>x12);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = 400595845185655645LLU;
	volatile int64_t x59 = INT64_MAX;
	uint32_t x60 = 51U;

	t1 = (((x57<x58)&x59)>>x60);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x65 = 606222291719944LLU;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	uint8_t x68 = 4U;
	int32_t t2 = -339182;

	t2 = (((x65<x66)&x67)>>x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x101 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	volatile uint32_t x104 = 54U;
	volatile int64_t t3 = -13873075619970325LL;

	t3 = (((x101<x102)&x103)>>x104);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x105 = -1LL;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 101U;
	volatile int8_t x108 = 7;
	uint32_t t4 = 19310U;

	t4 = (((x105<x106)&x107)>>x108);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x109 = -16;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = -6;
	uint8_t x112 = 0U;
	int32_t t5 = 3286693;

	t5 = (((x109<x110)&x111)>>x112);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x137 = 310001646U;
	volatile int16_t x138 = -1;
	volatile int64_t x139 = -1LL;
	int8_t x140 = 0;
	static int64_t t6 = 94738411588566LL;

	t6 = (((x137<x138)&x139)>>x140);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x217 = INT64_MIN;
	int8_t x218 = -1;
	volatile uint64_t x219 = UINT64_MAX;
	static volatile int8_t x220 = 22;
	uint64_t t7 = 59898655074LLU;

	t7 = (((x217<x218)&x219)>>x220);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = INT64_MIN;
	uint8_t x224 = 8U;
	volatile int64_t t8 = 31839782932LL;

	t8 = (((x221<x222)&x223)>>x224);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x237 = -83;
	static uint32_t x239 = UINT32_MAX;
	uint8_t x240 = 8U;
	uint32_t t9 = 76000215U;

	t9 = (((x237<x238)&x239)>>x240);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x241 = -659872902;
	int32_t x242 = 1322770;
	static int16_t x243 = INT16_MIN;
	uint8_t x244 = 8U;

	t10 = (((x241<x242)&x243)>>x244);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x294 = 793U;
	int8_t x295 = INT8_MAX;
	uint8_t x296 = 12U;
	volatile int32_t t11 = 12998;

	t11 = (((x293<x294)&x295)>>x296);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x310 = 6948U;
	int64_t x311 = INT64_MIN;
	int8_t x312 = 0;
	volatile int64_t t12 = -323810429825041LL;

	t12 = (((x309<x310)&x311)>>x312);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x314 = INT16_MIN;
	uint16_t x316 = 0U;
	static int32_t t13 = -90;

	t13 = (((x313<x314)&x315)>>x316);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x333 = 0;
	int8_t x334 = INT8_MIN;
	volatile int32_t x335 = INT32_MIN;

	t14 = (((x333<x334)&x335)>>x336);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x345 = 1LLU;
	int32_t x346 = -1;
	static volatile int32_t x347 = 33542;
	int32_t t15 = -4458864;

	t15 = (((x345<x346)&x347)>>x348);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile int8_t x358 = INT8_MIN;
	uint64_t x359 = 705348234LLU;
	volatile int16_t x360 = 1;
	uint64_t t16 = 13164LLU;

	t16 = (((x357<x358)&x359)>>x360);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x365 = 3;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 41U;
	static volatile int16_t x368 = 7;
	int32_t t17 = 1997;

	t17 = (((x365<x366)&x367)>>x368);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	int8_t x372 = 0;

	t18 = (((x369<x370)&x371)>>x372);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x385 = 1;
	int32_t t19 = 4439719;

	t19 = (((x385<x386)&x387)>>x388);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x465 = 24;
	uint8_t x468 = 1U;
	int32_t t20 = -153838;

	t20 = (((x465<x466)&x467)>>x468);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x474 = INT8_MIN;
	int16_t x476 = 29;

	t21 = (((x473<x474)&x475)>>x476);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x481 = INT8_MIN;
	uint8_t x483 = 97U;
	volatile int8_t x484 = 1;
	int32_t t22 = 404701;

	t22 = (((x481<x482)&x483)>>x484);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x549 = INT8_MAX;
	uint8_t x551 = 0U;
	volatile uint8_t x552 = 1U;
	int32_t t23 = 420306;

	t23 = (((x549<x550)&x551)>>x552);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x609 = INT8_MAX;
	static int16_t x610 = INT16_MIN;
	int64_t x611 = 114630601869LL;
	static volatile int64_t t24 = -15800LL;

	t24 = (((x609<x610)&x611)>>x612);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x613 = -1;
	int32_t x614 = -180;
	volatile int8_t x615 = -15;
	volatile uint32_t x616 = 8U;
	static int32_t t25 = 422129412;

	t25 = (((x613<x614)&x615)>>x616);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x621 = 2398879;
	static volatile int64_t x622 = 215LL;
	int8_t x623 = INT8_MIN;
	int8_t x624 = 0;
	volatile int32_t t26 = 169365;

	t26 = (((x621<x622)&x623)>>x624);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x653 = -1;
	int64_t x654 = -158270LL;
	static uint16_t x655 = 120U;
	volatile int32_t t27 = -4680;

	t27 = (((x653<x654)&x655)>>x656);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x682 = 26684LL;
	uint16_t x683 = 3935U;
	uint8_t x684 = 4U;
	volatile int32_t t28 = 12;

	t28 = (((x681<x682)&x683)>>x684);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x705 = 33U;
	volatile uint16_t x706 = 22329U;
	int8_t x708 = 1;
	static volatile int32_t t29 = -87499;

	t29 = (((x705<x706)&x707)>>x708);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x721 = INT64_MAX;
	volatile int64_t x722 = INT64_MIN;
	volatile int32_t x723 = INT32_MIN;
	volatile uint16_t x724 = 11U;
	static int32_t t30 = 4;

	t30 = (((x721<x722)&x723)>>x724);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x793 = INT8_MIN;
	static int32_t x795 = INT32_MIN;
	int8_t x796 = 0;
	static int32_t t31 = 93051091;

	t31 = (((x793<x794)&x795)>>x796);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x809 = 13U;
	volatile uint8_t x811 = 25U;
	static volatile int32_t x812 = 3;
	volatile int32_t t32 = 0;

	t32 = (((x809<x810)&x811)>>x812);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x849 = 1LLU;
	volatile int64_t x850 = 621964937698912800LL;
	static int8_t x851 = -6;
	volatile int32_t t33 = -54799229;

	t33 = (((x849<x850)&x851)>>x852);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x905 = -1LL;
	static int64_t x906 = -312LL;
	uint8_t x908 = 0U;
	volatile int32_t t34 = 15903064;

	t34 = (((x905<x906)&x907)>>x908);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x941 = 4846;
	int32_t x942 = INT32_MIN;
	static uint16_t x943 = UINT16_MAX;
	uint8_t x944 = 10U;
	static volatile int32_t t35 = 442425561;

	t35 = (((x941<x942)&x943)>>x944);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x949 = INT64_MIN;
	int64_t x950 = -1LL;
	volatile uint8_t x952 = 2U;
	volatile int32_t t36 = -33991241;

	t36 = (((x949<x950)&x951)>>x952);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x969 = 3093U;
	int16_t x970 = INT16_MIN;
	uint64_t x971 = UINT64_MAX;
	int16_t x972 = 0;
	volatile uint64_t t37 = 396923035LLU;

	t37 = (((x969<x970)&x971)>>x972);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x982 = 58120913256LLU;
	volatile uint64_t x983 = 12695152020889LLU;
	static int8_t x984 = 24;

	t38 = (((x981<x982)&x983)>>x984);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x1001 = UINT8_MAX;
	uint8_t x1002 = 1U;
	int8_t x1003 = INT8_MIN;
	volatile int8_t x1004 = 15;
	int32_t t39 = -49;

	t39 = (((x1001<x1002)&x1003)>>x1004);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1046 = INT64_MIN;
	int32_t x1047 = -10144936;
	volatile int32_t t40 = 34502342;

	t40 = (((x1045<x1046)&x1047)>>x1048);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1053 = INT16_MAX;
	int16_t x1055 = INT16_MIN;

	t41 = (((x1053<x1054)&x1055)>>x1056);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1141 = 62009U;
	static int8_t x1142 = INT8_MAX;
	static volatile int16_t x1144 = 1;
	static int32_t t42 = -1438;

	t42 = (((x1141<x1142)&x1143)>>x1144);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1153 = INT32_MIN;
	volatile int32_t x1154 = -1;

	t43 = (((x1153<x1154)&x1155)>>x1156);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1157 = 10735258LLU;
	uint16_t x1158 = 3U;
	int32_t x1159 = INT32_MIN;
	int8_t x1160 = 1;
	volatile int32_t t44 = -719546081;

	t44 = (((x1157<x1158)&x1159)>>x1160);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1169 = 5312LLU;
	uint8_t x1171 = 29U;
	static uint8_t x1172 = 13U;
	volatile int32_t t45 = 438210346;

	t45 = (((x1169<x1170)&x1171)>>x1172);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x1173 = -1;
	static int8_t x1174 = -1;
	int32_t x1175 = 106;
	int16_t x1176 = 25;

	t46 = (((x1173<x1174)&x1175)>>x1176);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1181 = INT64_MIN;
	int8_t x1182 = INT8_MIN;
	volatile int32_t t47 = -391552571;

	t47 = (((x1181<x1182)&x1183)>>x1184);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1242 = INT64_MIN;
	static int16_t x1243 = -78;
	static uint16_t x1244 = 2U;
	static volatile int32_t t48 = -120207170;

	t48 = (((x1241<x1242)&x1243)>>x1244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1286 = 3431512U;
	uint16_t x1287 = 3006U;
	int8_t x1288 = 10;
	int32_t t49 = -870493;

	t49 = (((x1285<x1286)&x1287)>>x1288);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1289 = UINT8_MAX;
	static volatile uint64_t x1290 = 7848156454912074LLU;
	int64_t x1291 = INT64_MAX;
	int16_t x1292 = 0;
	volatile int64_t t50 = -2593LL;

	t50 = (((x1289<x1290)&x1291)>>x1292);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1297 = -1LL;
	static int64_t x1298 = INT64_MIN;
	volatile int32_t t51 = -11567;

	t51 = (((x1297<x1298)&x1299)>>x1300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x1309 = UINT32_MAX;
	static int32_t x1310 = -111824591;
	volatile uint8_t x1311 = UINT8_MAX;
	int16_t x1312 = 6;
	volatile int32_t t52 = 34642658;

	t52 = (((x1309<x1310)&x1311)>>x1312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1355 = -1;
	volatile int16_t x1356 = 7;
	int32_t t53 = -252609401;

	t53 = (((x1353<x1354)&x1355)>>x1356);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1361 = INT32_MIN;
	static volatile int16_t x1362 = INT16_MIN;
	int32_t x1363 = -1;
	volatile uint16_t x1364 = 1U;
	volatile int32_t t54 = 990813454;

	t54 = (((x1361<x1362)&x1363)>>x1364);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x1373 = 7;
	static int32_t x1374 = INT32_MIN;
	volatile int64_t x1375 = INT64_MIN;
	int8_t x1376 = 16;
	volatile int64_t t55 = 976LL;

	t55 = (((x1373<x1374)&x1375)>>x1376);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x1405 = 0U;
	static int64_t x1406 = 0LL;
	int16_t x1407 = INT16_MIN;
	volatile uint8_t x1408 = 7U;
	int32_t t56 = -1048;

	t56 = (((x1405<x1406)&x1407)>>x1408);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1409 = INT8_MAX;
	static int32_t x1410 = INT32_MIN;
	static int8_t x1411 = INT8_MIN;
	uint32_t x1412 = 4U;
	static volatile int32_t t57 = -57579434;

	t57 = (((x1409<x1410)&x1411)>>x1412);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1429 = -1;
	uint8_t x1430 = 30U;
	static uint64_t x1431 = 6090448LLU;
	static uint8_t x1432 = 0U;
	volatile uint64_t t58 = 91646433060LLU;

	t58 = (((x1429<x1430)&x1431)>>x1432);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1433 = 120985961U;
	static uint8_t x1436 = 2U;

	t59 = (((x1433<x1434)&x1435)>>x1436);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1437 = 1U;
	uint16_t x1438 = 49U;
	uint32_t x1439 = 2U;
	uint16_t x1440 = 2U;
	uint32_t t60 = 14U;

	t60 = (((x1437<x1438)&x1439)>>x1440);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x1477 = INT16_MIN;
	int64_t x1478 = -2236669379835LL;
	uint32_t x1479 = 5233096U;
	static int8_t x1480 = 4;
	uint32_t t61 = 112292U;

	t61 = (((x1477<x1478)&x1479)>>x1480);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1509 = UINT64_MAX;
	uint8_t x1510 = 76U;
	static uint16_t x1512 = 1U;

	t62 = (((x1509<x1510)&x1511)>>x1512);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1533 = INT32_MIN;
	int8_t x1534 = -1;
	int16_t x1535 = INT16_MAX;
	int32_t x1536 = 0;
	static int32_t t63 = 41167;

	t63 = (((x1533<x1534)&x1535)>>x1536);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1545 = -16;
	int8_t x1546 = -12;
	int16_t x1547 = -1;
	volatile int32_t t64 = -51;

	t64 = (((x1545<x1546)&x1547)>>x1548);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1558 = UINT16_MAX;
	volatile int16_t x1559 = -1;
	uint16_t x1560 = 1U;
	int32_t t65 = 55022;

	t65 = (((x1557<x1558)&x1559)>>x1560);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1565 = 727LL;
	int32_t x1566 = 1;
	int32_t x1567 = 51339492;
	static uint8_t x1568 = 26U;
	volatile int32_t t66 = -474645;

	t66 = (((x1565<x1566)&x1567)>>x1568);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1574 = 6655810094656414LLU;
	int32_t x1575 = INT32_MIN;
	uint8_t x1576 = 0U;
	int32_t t67 = 928;

	t67 = (((x1573<x1574)&x1575)>>x1576);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1605 = -8;
	static volatile int64_t x1606 = INT64_MAX;
	static int8_t x1607 = -1;
	volatile int16_t x1608 = 1;
	int32_t t68 = -8172556;

	t68 = (((x1605<x1606)&x1607)>>x1608);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x1638 = INT64_MIN;
	static int16_t x1640 = 3;

	t69 = (((x1637<x1638)&x1639)>>x1640);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x1662 = -1;
	volatile uint64_t x1663 = 6LLU;
	int8_t x1664 = 1;
	uint64_t t70 = 1773476LLU;

	t70 = (((x1661<x1662)&x1663)>>x1664);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1685 = 1490267U;
	static volatile uint64_t x1686 = UINT64_MAX;
	uint64_t x1687 = 3LLU;
	int16_t x1688 = 0;
	volatile uint64_t t71 = 24509523629636665LLU;

	t71 = (((x1685<x1686)&x1687)>>x1688);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x1697 = INT16_MIN;
	int64_t x1698 = -1LL;
	static int32_t x1700 = 5;
	volatile uint64_t t72 = 18554418109389LLU;

	t72 = (((x1697<x1698)&x1699)>>x1700);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x1713 = -1;
	uint16_t x1714 = UINT16_MAX;
	static uint32_t x1716 = 0U;
	int32_t t73 = -375;

	t73 = (((x1713<x1714)&x1715)>>x1716);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x1757 = UINT8_MAX;
	static uint32_t x1759 = 1U;
	uint16_t x1760 = 0U;

	t74 = (((x1757<x1758)&x1759)>>x1760);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1785 = -9982248175411360LL;
	volatile uint64_t x1786 = 16986630200776360LLU;
	int8_t x1788 = 1;
	static int32_t t75 = -132;

	t75 = (((x1785<x1786)&x1787)>>x1788);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1810 = -4350910193442742LL;
	int16_t x1811 = 2804;
	uint16_t x1812 = 0U;
	volatile int32_t t76 = -16;

	t76 = (((x1809<x1810)&x1811)>>x1812);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1822 = INT8_MAX;
	uint64_t x1824 = 1LLU;
	volatile int64_t t77 = -5888377473603226LL;

	t77 = (((x1821<x1822)&x1823)>>x1824);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x1829 = 2U;
	uint16_t x1830 = 454U;
	int64_t x1831 = -1LL;
	static volatile int16_t x1832 = 1;
	volatile int64_t t78 = 6985434120281LL;

	t78 = (((x1829<x1830)&x1831)>>x1832);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x1837 = INT32_MAX;
	int64_t x1838 = INT64_MIN;
	static volatile int16_t x1839 = INT16_MIN;
	uint16_t x1840 = 9U;
	static int32_t t79 = -5307;

	t79 = (((x1837<x1838)&x1839)>>x1840);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1845 = 1;
	int32_t x1847 = INT32_MAX;
	uint8_t x1848 = 4U;
	volatile int32_t t80 = -218;

	t80 = (((x1845<x1846)&x1847)>>x1848);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1865 = -25;
	static uint64_t x1866 = 21227184092893LLU;
	int64_t x1867 = INT64_MIN;
	static uint8_t x1868 = 60U;

	t81 = (((x1865<x1866)&x1867)>>x1868);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1901 = INT16_MAX;
	static int64_t x1902 = -6489134LL;
	static int32_t x1904 = 0;
	volatile int32_t t82 = -24;

	t82 = (((x1901<x1902)&x1903)>>x1904);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2041 = INT32_MIN;
	uint8_t x2042 = 0U;
	uint16_t x2044 = 1U;
	static uint64_t t83 = 840148347306445232LLU;

	t83 = (((x2041<x2042)&x2043)>>x2044);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2057 = INT16_MAX;
	int64_t x2058 = INT64_MAX;
	int16_t x2059 = 1;
	volatile int32_t t84 = -448774;

	t84 = (((x2057<x2058)&x2059)>>x2060);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2097 = INT64_MAX;
	static uint32_t x2098 = 6U;
	static int8_t x2099 = 1;
	static volatile int32_t t85 = -1628;

	t85 = (((x2097<x2098)&x2099)>>x2100);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2101 = INT64_MAX;
	static volatile int64_t x2102 = 4206711033868063LL;
	static volatile uint64_t t86 = 3423LLU;

	t86 = (((x2101<x2102)&x2103)>>x2104);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2141 = 1;
	static int8_t x2142 = -1;
	int8_t x2143 = -1;
	uint8_t x2144 = 0U;

	t87 = (((x2141<x2142)&x2143)>>x2144);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2153 = INT64_MAX;
	uint64_t x2154 = 438946984533049LLU;
	int16_t x2155 = INT16_MIN;
	int8_t x2156 = 31;
	int32_t t88 = 14643;

	t88 = (((x2153<x2154)&x2155)>>x2156);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2193 = 291388287416222709LL;
	static int64_t x2194 = -1LL;
	uint8_t x2196 = 25U;
	static volatile int32_t t89 = 1468996;

	t89 = (((x2193<x2194)&x2195)>>x2196);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x2201 = -8725557074545304LL;
	int32_t x2202 = INT32_MIN;
	static int32_t x2203 = INT32_MIN;
	uint32_t x2204 = 1U;
	static int32_t t90 = -1;

	t90 = (((x2201<x2202)&x2203)>>x2204);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2262 = INT32_MAX;
	int64_t x2263 = 86LL;
	uint8_t x2264 = 1U;
	int64_t t91 = 2377054393117373LL;

	t91 = (((x2261<x2262)&x2263)>>x2264);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x2277 = -746359LL;
	int16_t x2278 = INT16_MIN;
	uint64_t x2279 = 232495LLU;
	int16_t x2280 = 8;
	static uint64_t t92 = 123810LLU;

	t92 = (((x2277<x2278)&x2279)>>x2280);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2310 = INT8_MAX;
	volatile int64_t x2311 = -1LL;
	volatile uint32_t x2312 = 3U;
	int64_t t93 = -171434LL;

	t93 = (((x2309<x2310)&x2311)>>x2312);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2321 = INT16_MIN;
	int32_t x2323 = INT32_MIN;
	uint64_t x2324 = 11LLU;
	int32_t t94 = 59257;

	t94 = (((x2321<x2322)&x2323)>>x2324);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2349 = 2732016485085LL;
	static int32_t x2350 = INT32_MIN;
	volatile uint16_t x2351 = 18728U;
	volatile uint8_t x2352 = 2U;
	int32_t t95 = 14118;

	t95 = (((x2349<x2350)&x2351)>>x2352);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x2362 = 24039LL;
	uint32_t x2363 = 144U;
	static uint8_t x2364 = 4U;
	uint32_t t96 = 837U;

	t96 = (((x2361<x2362)&x2363)>>x2364);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2365 = INT32_MIN;
	static uint8_t x2368 = 21U;
	static volatile int32_t t97 = -893677;

	t97 = (((x2365<x2366)&x2367)>>x2368);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2423 = 29U;
	int8_t x2424 = 8;
	int32_t t98 = -51299;

	t98 = (((x2421<x2422)&x2423)>>x2424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2561 = -13;
	int16_t x2563 = INT16_MAX;
	int16_t x2564 = 2;
	static int32_t t99 = 49918462;

	t99 = (((x2561<x2562)&x2563)>>x2564);

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


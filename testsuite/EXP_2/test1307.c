#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x50 = 15775U;
uint8_t x52 = 6U;
int32_t x82 = 1;
uint32_t x105 = 1650908U;
volatile int16_t x155 = 1866;
int32_t t3 = -88664254;
uint16_t x169 = UINT16_MAX;
uint16_t x174 = 15U;
volatile int32_t x230 = INT32_MIN;
volatile uint8_t x232 = 31U;
int32_t x265 = INT32_MIN;
static volatile int64_t x267 = INT64_MIN;
volatile int64_t x309 = 164095LL;
int16_t x326 = -1;
volatile int32_t t10 = 94523349;
uint32_t x330 = UINT32_MAX;
int64_t x385 = -1LL;
static volatile int32_t t12 = 23028;
int64_t x473 = -2588737LL;
int32_t t15 = 3174;
uint64_t x521 = UINT64_MAX;
int32_t t16 = -4539;
uint64_t x530 = 1474860LLU;
volatile int32_t x531 = -1928;
uint32_t x535 = UINT32_MAX;
static volatile int32_t t22 = 1867;
int16_t x702 = -1;
int8_t x710 = INT8_MIN;
int8_t x711 = INT8_MIN;
uint8_t x784 = 1U;
volatile uint8_t x789 = 46U;
static volatile int8_t x790 = INT8_MAX;
volatile uint16_t x791 = 1U;
static uint8_t x792 = 1U;
int8_t x957 = -1;
int16_t x958 = -1;
int8_t x959 = -1;
int32_t x1008 = 1;
int16_t x1070 = INT16_MIN;
volatile int32_t t37 = 9020547;
uint64_t x1086 = UINT64_MAX;
int32_t x1093 = 23;
static uint8_t x1096 = 1U;
volatile int32_t t39 = -10;
volatile uint16_t x1176 = 5U;
int32_t x1189 = -647019;
int64_t x1191 = -509LL;
uint16_t x1192 = 21U;
volatile int64_t x1221 = 215LL;
static int8_t x1224 = 1;
static volatile int32_t t42 = 1;
int64_t x1226 = INT64_MIN;
static int32_t t43 = 3;
static uint64_t x1245 = 2LLU;
static volatile int16_t x1246 = INT16_MIN;
int32_t t44 = 3573027;
volatile int32_t t45 = -231274486;
int64_t x1353 = 861840LL;
int64_t x1355 = INT64_MAX;
int8_t x1513 = INT8_MIN;
volatile int64_t x1514 = -8707210276127084LL;
uint8_t x1516 = 5U;
static volatile int32_t t49 = 11520673;
int8_t x1556 = 19;
static volatile int8_t x1558 = -1;
static int32_t t54 = -2924;
volatile int32_t x1749 = 60035;
volatile int16_t x1898 = INT16_MIN;
int32_t x2019 = INT32_MIN;
int8_t x2033 = -7;
static volatile int8_t x2034 = INT8_MIN;
static volatile int32_t t61 = 88417733;
int64_t x2058 = INT64_MIN;
int8_t x2064 = 2;
uint32_t x2169 = UINT32_MAX;
volatile int32_t t66 = -441849373;
uint16_t x2394 = UINT16_MAX;
int32_t x2396 = 2;
static int32_t t67 = 13118;
volatile int32_t t68 = 531;
uint16_t x2508 = 31U;
volatile int32_t t70 = -51;
int16_t x2551 = INT16_MIN;
volatile int32_t t71 = -121;
int16_t x2597 = -503;
int64_t x2599 = INT64_MIN;
int8_t x2763 = 18;
int64_t x2767 = INT64_MAX;
int16_t x2802 = -439;
uint8_t x2804 = 0U;
volatile int32_t t81 = 1;
int16_t x2884 = 3;
int32_t t82 = -3925792;
int16_t x2950 = 2478;
int8_t x2952 = 1;
int32_t x3127 = -1;
int16_t x3173 = INT16_MIN;
uint16_t x3174 = UINT16_MAX;
uint16_t x3189 = UINT16_MAX;
int16_t x3190 = INT16_MIN;
uint8_t x3192 = 2U;
int16_t x3291 = -1;
int16_t x3292 = 16;
int8_t x3295 = -1;
volatile int32_t t94 = -5;
uint8_t x3303 = 2U;
volatile uint8_t x3304 = 2U;
int32_t x3335 = 1224256;
volatile int16_t x3336 = 0;
uint8_t x3352 = 29U;
static volatile int32_t t97 = -15621;
uint16_t x3366 = 3U;
uint16_t x3368 = 0U;


void f0(void) {
	int64_t x49 = -1LL;
	int32_t x51 = -5459082;
	volatile int32_t t0 = 399;

	t0 = ((x49<=(x50==x51))>>x52);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x81 = 0U;
	static volatile uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 0U;
	int32_t t1 = 4099737;

	t1 = ((x81<=(x82==x83))>>x84);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x106 = INT32_MIN;
	int64_t x107 = -18362LL;
	int8_t x108 = 8;
	int32_t t2 = 5889661;

	t2 = ((x105<=(x106==x107))>>x108);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -1LL;
	int16_t x156 = 1;

	t3 = ((x153<=(x154==x155))>>x156);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x170 = 934U;
	int32_t x171 = INT32_MIN;
	static volatile uint32_t x172 = 28U;
	volatile int32_t t4 = -1;

	t4 = ((x169<=(x170==x171))>>x172);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = 30946177559628LLU;
	volatile uint8_t x176 = 9U;
	int32_t t5 = 8346;

	t5 = ((x173<=(x174==x175))>>x176);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x201 = INT32_MAX;
	uint16_t x202 = 19U;
	int32_t x203 = -14076315;
	static int16_t x204 = 0;
	int32_t t6 = -173;

	t6 = ((x201<=(x202==x203))>>x204);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x229 = INT8_MIN;
	static volatile int8_t x231 = -1;
	volatile int32_t t7 = 21026;

	t7 = ((x229<=(x230==x231))>>x232);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x266 = 1;
	int8_t x268 = 13;
	int32_t t8 = -1;

	t8 = ((x265<=(x266==x267))>>x268);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x310 = INT16_MIN;
	int64_t x311 = 95LL;
	uint16_t x312 = 1U;
	volatile int32_t t9 = -14506205;

	t9 = ((x309<=(x310==x311))>>x312);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x325 = 199U;
	static int64_t x327 = 219LL;
	volatile uint8_t x328 = 0U;

	t10 = ((x325<=(x326==x327))>>x328);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x329 = 0U;
	int16_t x331 = -3408;
	volatile uint8_t x332 = 3U;
	volatile int32_t t11 = 112;

	t11 = ((x329<=(x330==x331))>>x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MIN;
	volatile uint16_t x388 = 14U;

	t12 = ((x385<=(x386==x387))>>x388);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x397 = INT32_MAX;
	static uint16_t x398 = 3031U;
	static int8_t x399 = -1;
	uint32_t x400 = 1U;
	int32_t t13 = -4843;

	t13 = ((x397<=(x398==x399))>>x400);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x465 = -2;
	static volatile int32_t x466 = -1;
	int8_t x467 = INT8_MAX;
	uint16_t x468 = 1U;
	volatile int32_t t14 = 1730431;

	t14 = ((x465<=(x466==x467))>>x468);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x474 = 0;
	static int64_t x475 = -1750112LL;
	static uint16_t x476 = 13U;

	t15 = ((x473<=(x474==x475))>>x476);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x522 = 66454194U;
	int16_t x523 = INT16_MIN;
	int16_t x524 = 1;

	t16 = ((x521<=(x522==x523))>>x524);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x529 = INT8_MIN;
	static uint16_t x532 = 4U;
	volatile int32_t t17 = 954;

	t17 = ((x529<=(x530==x531))>>x532);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x533 = INT16_MAX;
	static int16_t x534 = -10337;
	static uint16_t x536 = 0U;
	int32_t t18 = -967170646;

	t18 = ((x533<=(x534==x535))>>x536);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x553 = 1038U;
	volatile uint16_t x554 = 2U;
	int64_t x555 = INT64_MIN;
	static int8_t x556 = 0;
	int32_t t19 = 88467570;

	t19 = ((x553<=(x554==x555))>>x556);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x573 = 6050U;
	int8_t x574 = INT8_MAX;
	int8_t x575 = INT8_MAX;
	volatile uint16_t x576 = 5U;
	volatile int32_t t20 = 1009987442;

	t20 = ((x573<=(x574==x575))>>x576);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x577 = -1LL;
	uint16_t x578 = 2516U;
	volatile int16_t x579 = -5659;
	volatile int8_t x580 = 2;
	static int32_t t21 = 21973308;

	t21 = ((x577<=(x578==x579))>>x580);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x597 = 33U;
	int64_t x598 = 6141568436107467LL;
	volatile uint8_t x599 = 1U;
	int16_t x600 = 20;

	t22 = ((x597<=(x598==x599))>>x600);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x701 = INT64_MAX;
	int64_t x703 = -59LL;
	static int8_t x704 = 10;
	volatile int32_t t23 = 10535;

	t23 = ((x701<=(x702==x703))>>x704);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x709 = INT16_MIN;
	uint8_t x712 = 30U;
	int32_t t24 = 518;

	t24 = ((x709<=(x710==x711))>>x712);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x737 = INT16_MIN;
	uint8_t x738 = UINT8_MAX;
	uint64_t x739 = UINT64_MAX;
	uint8_t x740 = 7U;
	int32_t t25 = 3;

	t25 = ((x737<=(x738==x739))>>x740);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x757 = INT64_MIN;
	static volatile int64_t x758 = 2LL;
	uint32_t x759 = 6U;
	uint8_t x760 = 23U;
	static int32_t t26 = -4331318;

	t26 = ((x757<=(x758==x759))>>x760);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x781 = 3U;
	int32_t x782 = INT32_MIN;
	uint16_t x783 = 4018U;
	volatile int32_t t27 = 4362841;

	t27 = ((x781<=(x782==x783))>>x784);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t t28 = 35;

	t28 = ((x789<=(x790==x791))>>x792);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x825 = -1;
	static int64_t x826 = 1583670LL;
	volatile int32_t x827 = -1;
	uint32_t x828 = 0U;
	volatile int32_t t29 = 470886;

	t29 = ((x825<=(x826==x827))>>x828);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x829 = -11;
	uint16_t x830 = UINT16_MAX;
	static int32_t x831 = INT32_MAX;
	uint64_t x832 = 1LLU;
	static int32_t t30 = -1949344;

	t30 = ((x829<=(x830==x831))>>x832);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x865 = 122U;
	static int16_t x866 = 56;
	volatile int8_t x867 = -1;
	uint8_t x868 = 1U;
	volatile int32_t t31 = 16053;

	t31 = ((x865<=(x866==x867))>>x868);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x869 = INT32_MIN;
	uint16_t x870 = 129U;
	static int64_t x871 = 63650831917380LL;
	volatile int32_t x872 = 21;
	int32_t t32 = 79337105;

	t32 = ((x869<=(x870==x871))>>x872);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x941 = 11U;
	int16_t x942 = -1;
	uint8_t x943 = 1U;
	uint16_t x944 = 1U;
	static int32_t t33 = 251063;

	t33 = ((x941<=(x942==x943))>>x944);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x960 = 4U;
	int32_t t34 = -2487775;

	t34 = ((x957<=(x958==x959))>>x960);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x989 = 14;
	volatile uint64_t x990 = 5LLU;
	volatile int8_t x991 = 9;
	volatile uint8_t x992 = 7U;
	int32_t t35 = 431;

	t35 = ((x989<=(x990==x991))>>x992);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1005 = INT8_MIN;
	static volatile int16_t x1006 = INT16_MIN;
	int16_t x1007 = -1;
	volatile int32_t t36 = 5414156;

	t36 = ((x1005<=(x1006==x1007))>>x1008);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1069 = -1;
	int64_t x1071 = 71182767426694964LL;
	volatile int8_t x1072 = 0;

	t37 = ((x1069<=(x1070==x1071))>>x1072);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1085 = -23;
	static int8_t x1087 = -1;
	volatile uint16_t x1088 = 3U;
	int32_t t38 = -6;

	t38 = ((x1085<=(x1086==x1087))>>x1088);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1094 = INT16_MIN;
	volatile int64_t x1095 = 56LL;

	t39 = ((x1093<=(x1094==x1095))>>x1096);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1173 = INT64_MAX;
	int32_t x1174 = 16;
	static volatile int8_t x1175 = 1;
	int32_t t40 = 447;

	t40 = ((x1173<=(x1174==x1175))>>x1176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1190 = 3U;
	int32_t t41 = 740521211;

	t41 = ((x1189<=(x1190==x1191))>>x1192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1222 = 14690LLU;
	static volatile uint16_t x1223 = UINT16_MAX;

	t42 = ((x1221<=(x1222==x1223))>>x1224);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1225 = INT64_MIN;
	static int64_t x1227 = INT64_MIN;
	uint8_t x1228 = 16U;

	t43 = ((x1225<=(x1226==x1227))>>x1228);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1247 = INT32_MAX;
	uint8_t x1248 = 1U;

	t44 = ((x1245<=(x1246==x1247))>>x1248);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1285 = 239U;
	int64_t x1286 = INT64_MIN;
	int16_t x1287 = -1;
	static uint8_t x1288 = 1U;

	t45 = ((x1285<=(x1286==x1287))>>x1288);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1325 = UINT32_MAX;
	int16_t x1326 = 0;
	volatile int8_t x1327 = -33;
	uint16_t x1328 = 1U;
	static volatile int32_t t46 = 1;

	t46 = ((x1325<=(x1326==x1327))>>x1328);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1354 = -1LL;
	uint8_t x1356 = 1U;
	volatile int32_t t47 = 211439900;

	t47 = ((x1353<=(x1354==x1355))>>x1356);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1373 = 3542U;
	uint32_t x1374 = UINT32_MAX;
	int16_t x1375 = INT16_MAX;
	uint16_t x1376 = 0U;
	volatile int32_t t48 = -32021;

	t48 = ((x1373<=(x1374==x1375))>>x1376);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x1515 = INT8_MIN;

	t49 = ((x1513<=(x1514==x1515))>>x1516);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1545 = 1047310120676043165LL;
	uint8_t x1546 = UINT8_MAX;
	uint8_t x1547 = 5U;
	int8_t x1548 = 1;
	int32_t t50 = 11040718;

	t50 = ((x1545<=(x1546==x1547))>>x1548);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1553 = -1;
	uint8_t x1554 = 11U;
	uint64_t x1555 = 1545LLU;
	static int32_t t51 = 11509;

	t51 = ((x1553<=(x1554==x1555))>>x1556);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1557 = INT16_MIN;
	static int16_t x1559 = INT16_MIN;
	uint16_t x1560 = 12U;
	static volatile int32_t t52 = -3009674;

	t52 = ((x1557<=(x1558==x1559))>>x1560);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1605 = -1;
	int16_t x1606 = INT16_MIN;
	int16_t x1607 = -1;
	uint8_t x1608 = 7U;
	int32_t t53 = 14338;

	t53 = ((x1605<=(x1606==x1607))>>x1608);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1673 = -8115;
	int16_t x1674 = INT16_MAX;
	int16_t x1675 = 0;
	volatile uint8_t x1676 = 12U;

	t54 = ((x1673<=(x1674==x1675))>>x1676);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1750 = 1613230923585LLU;
	static volatile int8_t x1751 = 0;
	int64_t x1752 = 0LL;
	volatile int32_t t55 = 206016153;

	t55 = ((x1749<=(x1750==x1751))>>x1752);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1789 = UINT64_MAX;
	int64_t x1790 = 3058177280238642084LL;
	uint8_t x1791 = UINT8_MAX;
	uint16_t x1792 = 5U;
	int32_t t56 = -1004473079;

	t56 = ((x1789<=(x1790==x1791))>>x1792);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x1897 = 5;
	static int64_t x1899 = INT64_MAX;
	uint8_t x1900 = 7U;
	volatile int32_t t57 = -3373691;

	t57 = ((x1897<=(x1898==x1899))>>x1900);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2013 = INT32_MIN;
	static volatile int8_t x2014 = -1;
	volatile int64_t x2015 = INT64_MIN;
	uint8_t x2016 = 10U;
	int32_t t58 = 51;

	t58 = ((x2013<=(x2014==x2015))>>x2016);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2017 = -1;
	static int8_t x2018 = INT8_MIN;
	volatile uint8_t x2020 = 0U;
	int32_t t59 = -2899;

	t59 = ((x2017<=(x2018==x2019))>>x2020);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2029 = -1;
	int32_t x2030 = -3;
	int16_t x2031 = -1;
	static volatile uint8_t x2032 = 0U;
	volatile int32_t t60 = 1630027;

	t60 = ((x2029<=(x2030==x2031))>>x2032);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2035 = -1LL;
	int16_t x2036 = 31;

	t61 = ((x2033<=(x2034==x2035))>>x2036);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2057 = INT16_MAX;
	int8_t x2059 = INT8_MIN;
	uint8_t x2060 = 4U;
	volatile int32_t t62 = -53;

	t62 = ((x2057<=(x2058==x2059))>>x2060);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2061 = -1;
	int64_t x2062 = -1LL;
	uint16_t x2063 = 4U;
	int32_t t63 = 506;

	t63 = ((x2061<=(x2062==x2063))>>x2064);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x2170 = UINT32_MAX;
	int32_t x2171 = INT32_MIN;
	int16_t x2172 = 0;
	int32_t t64 = 1698;

	t64 = ((x2169<=(x2170==x2171))>>x2172);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2257 = -17072;
	static int8_t x2258 = INT8_MIN;
	int8_t x2259 = INT8_MIN;
	uint8_t x2260 = 0U;
	int32_t t65 = -127066811;

	t65 = ((x2257<=(x2258==x2259))>>x2260);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x2301 = 3U;
	int64_t x2302 = -1LL;
	uint16_t x2303 = 5679U;
	volatile uint8_t x2304 = 3U;

	t66 = ((x2301<=(x2302==x2303))>>x2304);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2393 = 1702838443719097LL;
	volatile int64_t x2395 = INT64_MIN;

	t67 = ((x2393<=(x2394==x2395))>>x2396);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2405 = 692649277727787591LLU;
	uint16_t x2406 = 62U;
	volatile uint8_t x2407 = 2U;
	volatile uint8_t x2408 = 2U;

	t68 = ((x2405<=(x2406==x2407))>>x2408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x2409 = 11381328653893344LLU;
	int64_t x2410 = INT64_MAX;
	static int64_t x2411 = 114668945326560161LL;
	int16_t x2412 = 3;
	int32_t t69 = -969468;

	t69 = ((x2409<=(x2410==x2411))>>x2412);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2505 = INT8_MIN;
	uint8_t x2506 = UINT8_MAX;
	int32_t x2507 = 125050;

	t70 = ((x2505<=(x2506==x2507))>>x2508);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2549 = -1;
	volatile int16_t x2550 = -1;
	uint16_t x2552 = 1U;

	t71 = ((x2549<=(x2550==x2551))>>x2552);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2598 = 3053544457LL;
	static uint16_t x2600 = 24U;
	volatile int32_t t72 = 1;

	t72 = ((x2597<=(x2598==x2599))>>x2600);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2609 = UINT32_MAX;
	static uint32_t x2610 = 5627U;
	static int8_t x2611 = 0;
	static int16_t x2612 = 2;
	static int32_t t73 = 523941;

	t73 = ((x2609<=(x2610==x2611))>>x2612);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x2717 = 32184723665LLU;
	int16_t x2718 = INT16_MIN;
	int8_t x2719 = INT8_MIN;
	int16_t x2720 = 6;
	int32_t t74 = 16;

	t74 = ((x2717<=(x2718==x2719))>>x2720);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2749 = UINT16_MAX;
	static volatile int32_t x2750 = -2257266;
	int64_t x2751 = -133302980002757LL;
	static uint32_t x2752 = 27U;
	static volatile int32_t t75 = -502888771;

	t75 = ((x2749<=(x2750==x2751))>>x2752);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x2753 = UINT8_MAX;
	int16_t x2754 = 1;
	uint64_t x2755 = 1950744349035LLU;
	uint8_t x2756 = 9U;
	int32_t t76 = 1;

	t76 = ((x2753<=(x2754==x2755))>>x2756);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2761 = -1;
	static int8_t x2762 = -1;
	int8_t x2764 = 2;
	volatile int32_t t77 = 0;

	t77 = ((x2761<=(x2762==x2763))>>x2764);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x2765 = UINT64_MAX;
	int16_t x2766 = 1;
	static int8_t x2768 = 15;
	volatile int32_t t78 = 1;

	t78 = ((x2765<=(x2766==x2767))>>x2768);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2789 = UINT16_MAX;
	int64_t x2790 = INT64_MIN;
	uint64_t x2791 = 20131LLU;
	volatile int8_t x2792 = 1;
	int32_t t79 = -193078540;

	t79 = ((x2789<=(x2790==x2791))>>x2792);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2801 = UINT64_MAX;
	uint16_t x2803 = 2U;
	volatile int32_t t80 = 394;

	t80 = ((x2801<=(x2802==x2803))>>x2804);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2813 = 8;
	uint64_t x2814 = 9533947062LLU;
	static int16_t x2815 = INT16_MIN;
	uint8_t x2816 = 11U;

	t81 = ((x2813<=(x2814==x2815))>>x2816);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2881 = 174324716957733226LL;
	int16_t x2882 = -1;
	volatile int32_t x2883 = INT32_MIN;

	t82 = ((x2881<=(x2882==x2883))>>x2884);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x2949 = 9576;
	uint16_t x2951 = 0U;
	volatile int32_t t83 = -78795;

	t83 = ((x2949<=(x2950==x2951))>>x2952);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3069 = -1;
	uint32_t x3070 = 1700U;
	int32_t x3071 = INT32_MAX;
	static uint8_t x3072 = 0U;
	int32_t t84 = -3004;

	t84 = ((x3069<=(x3070==x3071))>>x3072);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x3101 = INT8_MIN;
	volatile int16_t x3102 = INT16_MAX;
	uint32_t x3103 = 334793U;
	int32_t x3104 = 0;
	volatile int32_t t85 = 319;

	t85 = ((x3101<=(x3102==x3103))>>x3104);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3125 = 27968U;
	int8_t x3126 = INT8_MAX;
	volatile uint8_t x3128 = 4U;
	volatile int32_t t86 = -8;

	t86 = ((x3125<=(x3126==x3127))>>x3128);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3149 = -1LL;
	volatile int16_t x3150 = 5;
	uint32_t x3151 = 48704072U;
	static volatile uint16_t x3152 = 27U;
	int32_t t87 = 1166362;

	t87 = ((x3149<=(x3150==x3151))>>x3152);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3175 = INT64_MIN;
	static int32_t x3176 = 3;
	int32_t t88 = -3254;

	t88 = ((x3173<=(x3174==x3175))>>x3176);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3191 = 19203U;
	static int32_t t89 = 323663426;

	t89 = ((x3189<=(x3190==x3191))>>x3192);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3221 = -560;
	volatile uint8_t x3222 = 2U;
	int32_t x3223 = INT32_MAX;
	uint8_t x3224 = 28U;
	volatile int32_t t90 = -776;

	t90 = ((x3221<=(x3222==x3223))>>x3224);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3225 = -1;
	static int64_t x3226 = INT64_MIN;
	volatile int32_t x3227 = INT32_MAX;
	int64_t x3228 = 1LL;
	volatile int32_t t91 = -127;

	t91 = ((x3225<=(x3226==x3227))>>x3228);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3249 = 753;
	static int16_t x3250 = 1;
	static uint32_t x3251 = UINT32_MAX;
	static int8_t x3252 = 25;
	int32_t t92 = 199977691;

	t92 = ((x3249<=(x3250==x3251))>>x3252);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3289 = 3326;
	volatile uint16_t x3290 = 62U;
	int32_t t93 = -2006;

	t93 = ((x3289<=(x3290==x3291))>>x3292);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3293 = 13289875LL;
	volatile int64_t x3294 = -1LL;
	int8_t x3296 = 1;

	t94 = ((x3293<=(x3294==x3295))>>x3296);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x3301 = INT16_MIN;
	uint8_t x3302 = 0U;
	int32_t t95 = -240;

	t95 = ((x3301<=(x3302==x3303))>>x3304);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3333 = 5U;
	int8_t x3334 = 2;
	static int32_t t96 = 78;

	t96 = ((x3333<=(x3334==x3335))>>x3336);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3349 = 315095219913LL;
	volatile int8_t x3350 = INT8_MAX;
	volatile int32_t x3351 = 51;

	t97 = ((x3349<=(x3350==x3351))>>x3352);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3365 = 73213U;
	int32_t x3367 = -1;
	static int32_t t98 = 1492781;

	t98 = ((x3365<=(x3366==x3367))>>x3368);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3389 = 47003535919173899LL;
	int16_t x3390 = 2;
	int32_t x3391 = INT32_MAX;
	int8_t x3392 = 1;
	static int32_t t99 = 1698;

	t99 = ((x3389<=(x3390==x3391))>>x3392);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x47 = 2U;
int64_t t1 = 9LL;
int32_t x100 = INT32_MIN;
static int8_t x157 = -1;
volatile int32_t t5 = 1792214;
static int8_t x287 = 0;
volatile int64_t t7 = 1539LL;
volatile int32_t x345 = -1;
static int8_t x346 = -1;
volatile int16_t x349 = -4746;
int64_t x351 = 0LL;
int32_t x352 = INT32_MAX;
int8_t x368 = INT8_MIN;
volatile int32_t x369 = -1043;
static uint16_t x370 = 12U;
int8_t x414 = -1;
int64_t x437 = INT64_MIN;
int64_t x440 = 15597368636LL;
volatile uint32_t t15 = 14U;
uint64_t x485 = 10226LLU;
int32_t t17 = 205;
volatile int32_t x564 = INT32_MIN;
uint32_t x627 = 6U;
int32_t x628 = 1243206;
int16_t x685 = 8;
uint16_t x687 = 11U;
static int16_t x701 = INT16_MIN;
static int64_t x736 = -180274LL;
static volatile int64_t t23 = -83070141852997LL;
int64_t x881 = -676612LL;
volatile int32_t x883 = 0;
static int64_t x884 = -1LL;
int64_t x885 = -7014923589LL;
int32_t x888 = INT32_MAX;
int64_t x913 = -1LL;
volatile uint16_t x916 = 27U;
int32_t x958 = INT32_MIN;
uint16_t x959 = 0U;
int64_t x1056 = -1LL;
volatile int16_t x1150 = INT16_MIN;
uint8_t x1152 = UINT8_MAX;
volatile uint32_t x1163 = 2U;
uint32_t x1169 = 251851918U;
int64_t x1172 = 2627771487LL;
uint8_t x1175 = 0U;
int64_t x1176 = 592222138138089LL;
static volatile int32_t t42 = -108;
uint8_t x1301 = UINT8_MAX;
uint8_t x1302 = 17U;
int32_t x1369 = 4106;
static uint64_t x1370 = UINT64_MAX;
int64_t x1414 = -1LL;
int32_t x1415 = 23;
int16_t x1423 = 3;
int32_t t47 = -9564746;
volatile uint64_t x1451 = 6LLU;
volatile uint64_t x1452 = 26374361513442LLU;
volatile int32_t t49 = 5702;
uint64_t x1592 = UINT64_MAX;
volatile uint64_t t51 = UINT64_MAX;
static int32_t x1637 = INT32_MAX;
volatile uint64_t x1665 = 50763649381LLU;
uint32_t x1676 = 7508U;
static volatile int8_t x1708 = INT8_MAX;
int64_t t58 = 3020005657241LL;
uint16_t x1787 = 0U;
static uint32_t t60 = UINT32_MAX;
static int32_t x1841 = INT32_MIN;
volatile int32_t t65 = INT32_MIN;
int16_t x1946 = 1;
uint16_t x1985 = 12503U;
int8_t x1986 = INT8_MAX;
uint16_t x1988 = UINT16_MAX;
volatile int64_t x2010 = INT64_MIN;
uint64_t x2022 = UINT64_MAX;
uint8_t x2032 = 0U;
static volatile int64_t x2051 = 3LL;
volatile int64_t t73 = 1LL;
volatile int16_t x2098 = -1;
int64_t x2137 = -751LL;
static uint64_t x2139 = 1LLU;
volatile int32_t t75 = 556800;
volatile uint16_t x2239 = 0U;
int64_t x2264 = INT64_MIN;
int64_t t78 = INT64_MIN;
volatile int32_t t80 = 73562075;
int32_t x2416 = 1629;
volatile int32_t t84 = 1;
int32_t x2474 = INT32_MIN;
uint16_t x2475 = 10U;
int32_t x2476 = INT32_MIN;
int8_t x2489 = INT8_MIN;
static int8_t x2511 = 1;
volatile uint8_t x2512 = UINT8_MAX;
static uint16_t x2615 = 7U;
static int16_t x2710 = -1;
static volatile int32_t t93 = 5487;
volatile int16_t x2720 = 2568;
int8_t x2721 = -30;
volatile int32_t t96 = -82;
volatile uint8_t x2799 = 0U;
volatile int32_t t97 = -85;
int16_t x2845 = INT16_MAX;
volatile uint32_t x2847 = 9U;
uint64_t x2898 = UINT64_MAX;


void f0(void) {
	int16_t x37 = INT16_MAX;
	static int16_t x38 = INT16_MIN;
	volatile int8_t x39 = 1;
	int16_t x40 = 492;
	int32_t t0 = 1800961;

	t0 = (((x37==x38)>>x39)+x40);

	if (t0 != 492) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MAX;
	int64_t x48 = -1LL;

	t1 = (((x45==x46)>>x47)+x48);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = -1;
	uint64_t x99 = 10LLU;
	volatile int32_t t2 = INT32_MIN;

	t2 = (((x97==x98)>>x99)+x100);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x158 = INT8_MIN;
	volatile int8_t x159 = 1;
	int64_t x160 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (((x157==x158)>>x159)+x160);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x173 = 87422009U;
	static int8_t x174 = -1;
	uint16_t x175 = 12U;
	static uint64_t x176 = 230450LLU;
	uint64_t t4 = 243857LLU;

	t4 = (((x173==x174)>>x175)+x176);

	if (t4 != 230450LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x177 = -1;
	static int16_t x178 = -2626;
	uint32_t x179 = 4U;
	volatile int16_t x180 = -1;

	t5 = (((x177==x178)>>x179)+x180);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x185 = INT16_MIN;
	static int64_t x186 = 278285770LL;
	volatile int8_t x187 = 0;
	int64_t x188 = 110950407128LL;
	volatile int64_t t6 = 1286LL;

	t6 = (((x185==x186)>>x187)+x188);

	if (t6 != 110950407128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x285 = 36463600U;
	static int16_t x286 = INT16_MIN;
	static int64_t x288 = -3171668640LL;

	t7 = (((x285==x286)>>x287)+x288);

	if (t7 != -3171668640LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x329 = -3;
	uint64_t x330 = 26LLU;
	int8_t x331 = 17;
	static int8_t x332 = 29;
	int32_t t8 = -12;

	t8 = (((x329==x330)>>x331)+x332);

	if (t8 != 29) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x347 = 0;
	volatile int16_t x348 = INT16_MAX;
	int32_t t9 = -5071;

	t9 = (((x345==x346)>>x347)+x348);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x350 = INT64_MIN;
	volatile int32_t t10 = INT32_MAX;

	t10 = (((x349==x350)>>x351)+x352);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x365 = -1;
	uint32_t x366 = 1534175U;
	static uint8_t x367 = 11U;
	int32_t t11 = 1;

	t11 = (((x365==x366)>>x367)+x368);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x371 = 24U;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t12 = 7433;

	t12 = (((x369==x370)>>x371)+x372);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x413 = INT8_MAX;
	uint64_t x415 = 10LLU;
	int16_t x416 = INT16_MAX;
	int32_t t13 = -6611767;

	t13 = (((x413==x414)>>x415)+x416);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x438 = INT64_MIN;
	volatile int64_t x439 = 0LL;
	static volatile int64_t t14 = 0LL;

	t14 = (((x437==x438)>>x439)+x440);

	if (t14 != 15597368637LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x441 = 255U;
	uint8_t x442 = UINT8_MAX;
	uint64_t x443 = 0LLU;
	uint32_t x444 = 1288238131U;

	t15 = (((x441==x442)>>x443)+x444);

	if (t15 != 1288238132U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x486 = 0;
	uint16_t x487 = 1U;
	uint64_t x488 = 749636851LLU;
	static uint64_t t16 = 5LLU;

	t16 = (((x485==x486)>>x487)+x488);

	if (t16 != 749636851LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x493 = 7;
	int32_t x494 = -1;
	static uint8_t x495 = 1U;
	static int32_t x496 = -945436;

	t17 = (((x493==x494)>>x495)+x496);

	if (t17 != -945436) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	volatile int16_t x543 = 6;
	int8_t x544 = INT8_MIN;
	static volatile int32_t t18 = 116;

	t18 = (((x541==x542)>>x543)+x544);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x561 = UINT32_MAX;
	static int8_t x562 = 3;
	uint32_t x563 = 6U;
	int32_t t19 = INT32_MIN;

	t19 = (((x561==x562)>>x563)+x564);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x625 = 2846U;
	int8_t x626 = INT8_MIN;
	static int32_t t20 = 215747829;

	t20 = (((x625==x626)>>x627)+x628);

	if (t20 != 1243206) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x686 = -1;
	uint16_t x688 = UINT16_MAX;
	int32_t t21 = -1432796;

	t21 = (((x685==x686)>>x687)+x688);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x702 = 1U;
	uint8_t x703 = 1U;
	int64_t x704 = -6481718LL;
	volatile int64_t t22 = -464366LL;

	t22 = (((x701==x702)>>x703)+x704);

	if (t22 != -6481718LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x733 = INT32_MIN;
	int32_t x734 = -6531;
	volatile int16_t x735 = 0;

	t23 = (((x733==x734)>>x735)+x736);

	if (t23 != -180274LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x821 = 1802296LLU;
	int16_t x822 = -1;
	uint8_t x823 = 3U;
	int32_t x824 = 523533630;
	static volatile int32_t t24 = 25799;

	t24 = (((x821==x822)>>x823)+x824);

	if (t24 != 523533630) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x882 = UINT8_MAX;
	volatile int64_t t25 = -8485535219509LL;

	t25 = (((x881==x882)>>x883)+x884);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x886 = UINT16_MAX;
	uint8_t x887 = 0U;
	volatile int32_t t26 = INT32_MAX;

	t26 = (((x885==x886)>>x887)+x888);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x914 = UINT8_MAX;
	static int8_t x915 = 11;
	volatile int32_t t27 = -25;

	t27 = (((x913==x914)>>x915)+x916);

	if (t27 != 27) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x957 = 717;
	uint16_t x960 = UINT16_MAX;
	volatile int32_t t28 = 258488802;

	t28 = (((x957==x958)>>x959)+x960);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x965 = 18U;
	volatile uint8_t x966 = UINT8_MAX;
	uint8_t x967 = 29U;
	uint8_t x968 = 31U;
	volatile int32_t t29 = -27543;

	t29 = (((x965==x966)>>x967)+x968);

	if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1045 = 13864U;
	static uint32_t x1046 = 1255925U;
	uint8_t x1047 = 14U;
	int64_t x1048 = 32922331755692992LL;
	static volatile int64_t t30 = 5LL;

	t30 = (((x1045==x1046)>>x1047)+x1048);

	if (t30 != 32922331755692992LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1053 = INT8_MIN;
	volatile uint32_t x1054 = 662U;
	uint16_t x1055 = 10U;
	static volatile int64_t t31 = 286006226686903305LL;

	t31 = (((x1053==x1054)>>x1055)+x1056);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1117 = INT16_MAX;
	static volatile int16_t x1118 = -14540;
	int32_t x1119 = 1;
	int16_t x1120 = INT16_MAX;
	volatile int32_t t32 = 169817520;

	t32 = (((x1117==x1118)>>x1119)+x1120);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1129 = 87286820867LLU;
	int64_t x1130 = -1LL;
	int32_t x1131 = 0;
	static uint32_t x1132 = UINT32_MAX;
	uint32_t t33 = UINT32_MAX;

	t33 = (((x1129==x1130)>>x1131)+x1132);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1137 = 2U;
	uint8_t x1138 = UINT8_MAX;
	uint8_t x1139 = 31U;
	uint8_t x1140 = 2U;
	static int32_t t34 = -780;

	t34 = (((x1137==x1138)>>x1139)+x1140);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1149 = INT16_MIN;
	int16_t x1151 = 0;
	volatile int32_t t35 = 3671;

	t35 = (((x1149==x1150)>>x1151)+x1152);

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1161 = INT64_MIN;
	static uint8_t x1162 = UINT8_MAX;
	int16_t x1164 = 86;
	volatile int32_t t36 = 7;

	t36 = (((x1161==x1162)>>x1163)+x1164);

	if (t36 != 86) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1170 = -23;
	uint32_t x1171 = 0U;
	volatile int64_t t37 = -474LL;

	t37 = (((x1169==x1170)>>x1171)+x1172);

	if (t37 != 2627771487LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1173 = 222847121664719LL;
	static volatile int64_t x1174 = INT64_MIN;
	volatile int64_t t38 = 2LL;

	t38 = (((x1173==x1174)>>x1175)+x1176);

	if (t38 != 592222138138089LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1241 = 2;
	volatile int64_t x1242 = INT64_MAX;
	volatile uint32_t x1243 = 1U;
	int32_t x1244 = 2151;
	int32_t t39 = -7599;

	t39 = (((x1241==x1242)>>x1243)+x1244);

	if (t39 != 2151) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1245 = INT16_MAX;
	static int16_t x1246 = INT16_MIN;
	uint8_t x1247 = 2U;
	uint8_t x1248 = 0U;
	int32_t t40 = -3696;

	t40 = (((x1245==x1246)>>x1247)+x1248);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1273 = INT16_MIN;
	uint8_t x1274 = 4U;
	int8_t x1275 = 0;
	volatile int32_t x1276 = INT32_MAX;
	int32_t t41 = INT32_MAX;

	t41 = (((x1273==x1274)>>x1275)+x1276);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1289 = INT32_MAX;
	uint64_t x1290 = 432280482603117LLU;
	int8_t x1291 = 1;
	int32_t x1292 = 198;

	t42 = (((x1289==x1290)>>x1291)+x1292);

	if (t42 != 198) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1303 = 12U;
	volatile int32_t x1304 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

	t43 = (((x1301==x1302)>>x1303)+x1304);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1353 = UINT16_MAX;
	int16_t x1354 = -1;
	int8_t x1355 = 0;
	int64_t x1356 = -534931512126029LL;
	static volatile int64_t t44 = 6356766887230LL;

	t44 = (((x1353==x1354)>>x1355)+x1356);

	if (t44 != -534931512126029LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1371 = 1U;
	uint64_t x1372 = UINT64_MAX;
	static uint64_t t45 = UINT64_MAX;

	t45 = (((x1369==x1370)>>x1371)+x1372);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1413 = UINT16_MAX;
	uint32_t x1416 = UINT32_MAX;
	static uint32_t t46 = UINT32_MAX;

	t46 = (((x1413==x1414)>>x1415)+x1416);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1421 = UINT16_MAX;
	volatile int8_t x1422 = 2;
	uint16_t x1424 = UINT16_MAX;

	t47 = (((x1421==x1422)>>x1423)+x1424);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1449 = INT32_MAX;
	int32_t x1450 = -29924;
	uint64_t t48 = 111935559LLU;

	t48 = (((x1449==x1450)>>x1451)+x1452);

	if (t48 != 26374361513442LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1581 = -5852898LL;
	static uint8_t x1582 = 66U;
	static int32_t x1583 = 5;
	int16_t x1584 = -56;

	t49 = (((x1581==x1582)>>x1583)+x1584);

	if (t49 != -56) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1585 = INT32_MIN;
	int64_t x1586 = INT64_MIN;
	volatile int16_t x1587 = 4;
	static int32_t x1588 = 2450;
	static volatile int32_t t50 = -98;

	t50 = (((x1585==x1586)>>x1587)+x1588);

	if (t50 != 2450) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1589 = UINT64_MAX;
	int8_t x1590 = INT8_MIN;
	int16_t x1591 = 0;

	t51 = (((x1589==x1590)>>x1591)+x1592);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x1593 = 49U;
	static int16_t x1594 = 7271;
	uint8_t x1595 = 7U;
	uint8_t x1596 = 34U;
	volatile int32_t t52 = 44;

	t52 = (((x1593==x1594)>>x1595)+x1596);

	if (t52 != 34) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1617 = UINT64_MAX;
	int8_t x1618 = -1;
	static volatile int8_t x1619 = 5;
	int16_t x1620 = INT16_MIN;
	volatile int32_t t53 = 8301701;

	t53 = (((x1617==x1618)>>x1619)+x1620);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x1638 = UINT64_MAX;
	uint32_t x1639 = 14U;
	int16_t x1640 = INT16_MAX;
	volatile int32_t t54 = -852075;

	t54 = (((x1637==x1638)>>x1639)+x1640);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1666 = 2761370;
	static uint64_t x1667 = 30LLU;
	int32_t x1668 = 1015393;
	static int32_t t55 = 389644278;

	t55 = (((x1665==x1666)>>x1667)+x1668);

	if (t55 != 1015393) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x1673 = INT64_MAX;
	int64_t x1674 = -3302000826267LL;
	uint16_t x1675 = 3U;
	volatile uint32_t t56 = 9049645U;

	t56 = (((x1673==x1674)>>x1675)+x1676);

	if (t56 != 7508U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1705 = UINT32_MAX;
	int32_t x1706 = 62489162;
	volatile uint8_t x1707 = 0U;
	volatile int32_t t57 = 227;

	t57 = (((x1705==x1706)>>x1707)+x1708);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1713 = 1062419664;
	static int16_t x1714 = -1;
	uint32_t x1715 = 1U;
	int64_t x1716 = 11708260481829224LL;

	t58 = (((x1713==x1714)>>x1715)+x1716);

	if (t58 != 11708260481829224LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1725 = INT16_MIN;
	static int16_t x1726 = INT16_MAX;
	static uint32_t x1727 = 10U;
	uint32_t x1728 = 21247070U;
	volatile uint32_t t59 = 865796947U;

	t59 = (((x1725==x1726)>>x1727)+x1728);

	if (t59 != 21247070U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x1785 = 56LL;
	int16_t x1786 = INT16_MIN;
	uint32_t x1788 = UINT32_MAX;

	t60 = (((x1785==x1786)>>x1787)+x1788);

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1817 = 138852211086188562LL;
	volatile int32_t x1818 = -1;
	int8_t x1819 = 1;
	volatile int8_t x1820 = INT8_MIN;
	int32_t t61 = -475624;

	t61 = (((x1817==x1818)>>x1819)+x1820);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x1842 = -1LL;
	volatile int64_t x1843 = 0LL;
	int64_t x1844 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (((x1841==x1842)>>x1843)+x1844);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1921 = INT64_MAX;
	int8_t x1922 = INT8_MAX;
	static int8_t x1923 = 18;
	int16_t x1924 = 500;
	static int32_t t63 = 0;

	t63 = (((x1921==x1922)>>x1923)+x1924);

	if (t63 != 500) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x1929 = 6513LL;
	static int8_t x1930 = 1;
	uint8_t x1931 = 2U;
	int64_t x1932 = 43284657045575LL;
	static int64_t t64 = -6047LL;

	t64 = (((x1929==x1930)>>x1931)+x1932);

	if (t64 != 43284657045575LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x1937 = INT16_MAX;
	int8_t x1938 = INT8_MIN;
	uint8_t x1939 = 3U;
	int32_t x1940 = INT32_MIN;

	t65 = (((x1937==x1938)>>x1939)+x1940);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1945 = -1;
	int8_t x1947 = 0;
	int16_t x1948 = 39;
	static volatile int32_t t66 = -1639818;

	t66 = (((x1945==x1946)>>x1947)+x1948);

	if (t66 != 39) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1987 = 0;
	volatile int32_t t67 = 33398584;

	t67 = (((x1985==x1986)>>x1987)+x1988);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1993 = 83U;
	uint32_t x1994 = 3956433U;
	static volatile uint8_t x1995 = 13U;
	static int32_t x1996 = 13927783;
	int32_t t68 = -5899;

	t68 = (((x1993==x1994)>>x1995)+x1996);

	if (t68 != 13927783) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2009 = 21795U;
	uint8_t x2011 = 2U;
	static volatile int64_t x2012 = -1LL;
	volatile int64_t t69 = 956107749090LL;

	t69 = (((x2009==x2010)>>x2011)+x2012);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x2021 = INT16_MIN;
	uint8_t x2023 = 1U;
	int64_t x2024 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = (((x2021==x2022)>>x2023)+x2024);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2029 = INT16_MIN;
	static int64_t x2030 = 182342061361LL;
	int16_t x2031 = 1;
	volatile int32_t t71 = 1482503;

	t71 = (((x2029==x2030)>>x2031)+x2032);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2049 = 54U;
	static int32_t x2050 = -4;
	volatile int64_t x2052 = -9400643662619LL;
	static volatile int64_t t72 = -279831935601231339LL;

	t72 = (((x2049==x2050)>>x2051)+x2052);

	if (t72 != -9400643662619LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2069 = -1;
	static volatile uint8_t x2070 = UINT8_MAX;
	uint8_t x2071 = 3U;
	int64_t x2072 = 60LL;

	t73 = (((x2069==x2070)>>x2071)+x2072);

	if (t73 != 60LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2097 = 418U;
	static int8_t x2099 = 0;
	volatile uint16_t x2100 = 28U;
	volatile int32_t t74 = 921;

	t74 = (((x2097==x2098)>>x2099)+x2100);

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2138 = INT64_MIN;
	int32_t x2140 = -1545;

	t75 = (((x2137==x2138)>>x2139)+x2140);

	if (t75 != -1545) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x2189 = INT8_MIN;
	volatile uint8_t x2190 = 1U;
	int16_t x2191 = 23;
	volatile uint8_t x2192 = 2U;
	volatile int32_t t76 = 112330199;

	t76 = (((x2189==x2190)>>x2191)+x2192);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2237 = UINT64_MAX;
	uint16_t x2238 = 2U;
	int64_t x2240 = INT64_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (((x2237==x2238)>>x2239)+x2240);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x2261 = 345766989252694LLU;
	static int32_t x2262 = -3;
	uint16_t x2263 = 1U;

	t78 = (((x2261==x2262)>>x2263)+x2264);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2277 = 3;
	static int32_t x2278 = INT32_MIN;
	uint64_t x2279 = 14LLU;
	int64_t x2280 = INT64_MAX;
	int64_t t79 = INT64_MAX;

	t79 = (((x2277==x2278)>>x2279)+x2280);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2281 = -1;
	volatile uint32_t x2282 = UINT32_MAX;
	static int8_t x2283 = 1;
	int8_t x2284 = INT8_MAX;

	t80 = (((x2281==x2282)>>x2283)+x2284);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2317 = INT32_MIN;
	int32_t x2318 = -13165;
	static volatile int64_t x2319 = 6LL;
	int64_t x2320 = 60326LL;
	int64_t t81 = 250327LL;

	t81 = (((x2317==x2318)>>x2319)+x2320);

	if (t81 != 60326LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2325 = 1;
	uint8_t x2326 = 0U;
	static volatile uint32_t x2327 = 9U;
	static uint32_t x2328 = 41U;
	uint32_t t82 = 68561U;

	t82 = (((x2325==x2326)>>x2327)+x2328);

	if (t82 != 41U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2413 = 16234U;
	static int8_t x2414 = INT8_MIN;
	static int16_t x2415 = 3;
	volatile int32_t t83 = 114;

	t83 = (((x2413==x2414)>>x2415)+x2416);

	if (t83 != 1629) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x2417 = 1317609606LL;
	int32_t x2418 = INT32_MAX;
	volatile uint32_t x2419 = 14U;
	int16_t x2420 = -1;

	t84 = (((x2417==x2418)>>x2419)+x2420);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2429 = 5401U;
	uint8_t x2430 = 0U;
	uint32_t x2431 = 0U;
	int16_t x2432 = 8114;
	volatile int32_t t85 = -1;

	t85 = (((x2429==x2430)>>x2431)+x2432);

	if (t85 != 8114) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2449 = 130458LLU;
	int32_t x2450 = INT32_MIN;
	static uint8_t x2451 = 3U;
	volatile int64_t x2452 = INT64_MIN;
	static int64_t t86 = INT64_MIN;

	t86 = (((x2449==x2450)>>x2451)+x2452);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2473 = 221068800U;
	volatile int32_t t87 = INT32_MIN;

	t87 = (((x2473==x2474)>>x2475)+x2476);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x2490 = 396;
	int16_t x2491 = 4;
	int16_t x2492 = INT16_MIN;
	volatile int32_t t88 = 1;

	t88 = (((x2489==x2490)>>x2491)+x2492);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2509 = INT32_MIN;
	int8_t x2510 = INT8_MIN;
	static int32_t t89 = -1016683;

	t89 = (((x2509==x2510)>>x2511)+x2512);

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x2613 = INT16_MIN;
	uint16_t x2614 = UINT16_MAX;
	volatile uint64_t x2616 = 108LLU;
	uint64_t t90 = 1419396LLU;

	t90 = (((x2613==x2614)>>x2615)+x2616);

	if (t90 != 108LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2617 = -7071;
	static int32_t x2618 = INT32_MIN;
	volatile uint16_t x2619 = 9U;
	static int8_t x2620 = -1;
	volatile int32_t t91 = 11320;

	t91 = (((x2617==x2618)>>x2619)+x2620);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2649 = INT16_MIN;
	static int8_t x2650 = -1;
	uint32_t x2651 = 9U;
	static int16_t x2652 = INT16_MAX;
	int32_t t92 = 3;

	t92 = (((x2649==x2650)>>x2651)+x2652);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2709 = -1;
	int16_t x2711 = 1;
	uint8_t x2712 = 1U;

	t93 = (((x2709==x2710)>>x2711)+x2712);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x2717 = UINT32_MAX;
	volatile int16_t x2718 = INT16_MAX;
	int8_t x2719 = 0;
	volatile int32_t t94 = 299946064;

	t94 = (((x2717==x2718)>>x2719)+x2720);

	if (t94 != 2568) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x2722 = 2474U;
	int8_t x2723 = 1;
	uint8_t x2724 = UINT8_MAX;
	int32_t t95 = -77787;

	t95 = (((x2721==x2722)>>x2723)+x2724);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2749 = INT64_MIN;
	int16_t x2750 = INT16_MAX;
	int32_t x2751 = 30;
	volatile uint8_t x2752 = 2U;

	t96 = (((x2749==x2750)>>x2751)+x2752);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2797 = 0;
	int16_t x2798 = INT16_MIN;
	static int16_t x2800 = INT16_MIN;

	t97 = (((x2797==x2798)>>x2799)+x2800);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x2846 = UINT8_MAX;
	int64_t x2848 = -133675970650927LL;
	volatile int64_t t98 = 3798LL;

	t98 = (((x2845==x2846)>>x2847)+x2848);

	if (t98 != -133675970650927LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2897 = INT32_MAX;
	uint16_t x2899 = 9U;
	int16_t x2900 = 10;
	static volatile int32_t t99 = -127747;

	t99 = (((x2897==x2898)>>x2899)+x2900);

	if (t99 != 10) { NG(); } else { ; }
	
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


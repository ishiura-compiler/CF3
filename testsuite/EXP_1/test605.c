#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -339;
volatile int32_t t2 = 19483479;
volatile int32_t t3 = -56358506;
int32_t x97 = INT32_MAX;
uint8_t x100 = 1U;
static int32_t t5 = 23711136;
static volatile int8_t x170 = -3;
volatile int32_t t6 = -4;
int64_t x182 = INT64_MAX;
static uint8_t x186 = 117U;
volatile uint32_t x194 = 9794U;
uint8_t x195 = 0U;
static int16_t x210 = INT16_MIN;
int32_t t10 = 173548415;
uint16_t x448 = 0U;
static int32_t t14 = -188;
int32_t x557 = INT32_MAX;
int32_t x558 = INT32_MIN;
volatile uint8_t x570 = UINT8_MAX;
volatile int8_t x577 = 63;
volatile int8_t x596 = 13;
static int16_t x659 = INT16_MAX;
uint32_t x660 = 2U;
static volatile int32_t t22 = 337101;
int16_t x722 = INT16_MIN;
static uint32_t x825 = UINT32_MAX;
volatile int32_t t26 = 513;
static volatile int32_t t30 = 49;
int32_t x1135 = INT32_MIN;
static uint16_t x1226 = 1U;
int8_t x1264 = 2;
int64_t x1273 = 1LL;
static uint64_t x1285 = 3714261566LLU;
int64_t x1334 = 997LL;
uint8_t x1336 = 19U;
int8_t x1345 = 48;
int32_t t45 = 996910;
uint64_t x1453 = 3123037LLU;
uint8_t x1454 = UINT8_MAX;
int16_t x1455 = INT16_MAX;
int32_t t48 = 5705086;
int64_t x1497 = INT64_MIN;
int32_t x1561 = 31412;
volatile uint32_t x1643 = 2487531U;
int32_t t52 = -4536993;
volatile int8_t x1645 = INT8_MIN;
uint8_t x1689 = 1U;
int16_t x1723 = INT16_MAX;
int32_t x1893 = INT32_MIN;
volatile int8_t x1918 = INT8_MAX;
static int32_t t61 = 4531561;
volatile uint16_t x2104 = 7U;
uint16_t x2213 = UINT16_MAX;
volatile int32_t t66 = -1165982;
int64_t x2269 = -1LL;
volatile int32_t t68 = 0;
static volatile int32_t t69 = 18097;
int32_t x2539 = 458;
uint8_t x2541 = 39U;
int8_t x2544 = 3;
int16_t x2610 = 113;
static uint8_t x2680 = 4U;
uint8_t x2696 = 11U;
int32_t t78 = -646;
static int64_t x2698 = 1LL;
volatile uint8_t x2803 = 12U;
uint16_t x2867 = UINT16_MAX;
int8_t x2912 = 25;
static int32_t x2998 = 16398044;
volatile int8_t x3000 = 23;
int32_t t87 = 590305;
static int8_t x3044 = 3;
int8_t x3097 = 36;
uint8_t x3100 = 1U;
uint32_t x3186 = 282721378U;
static volatile int8_t x3188 = 3;
int32_t x3208 = 20;
int16_t x3318 = -1;
volatile uint32_t x3373 = UINT32_MAX;
static uint8_t x3375 = UINT8_MAX;
volatile int8_t x3376 = 0;
uint8_t x3498 = 5U;
int32_t t96 = 286057321;
int32_t x3511 = -447436092;
int8_t x3611 = INT8_MIN;
int32_t t99 = -1;


void f0(void) {
	int16_t x9 = INT16_MIN;
	volatile int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	static uint8_t x12 = 23U;
	int32_t t0 = 5769876;

	t0 = (((x9/x10)==x11)>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 328825871652179601LL;
	volatile int32_t x14 = -3;
	static volatile int32_t x15 = INT32_MIN;
	int8_t x16 = 1;

	t1 = (((x13/x14)==x15)>>x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x53 = UINT16_MAX;
	uint64_t x54 = 145583838988519674LLU;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = 2U;

	t2 = (((x53/x54)==x55)>>x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	volatile int32_t x91 = INT32_MAX;
	static int8_t x92 = 0;

	t3 = (((x89/x90)==x91)>>x92);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x98 = INT16_MIN;
	int64_t x99 = 227633962LL;
	int32_t t4 = -5;

	t4 = (((x97/x98)==x99)>>x100);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x145 = 24706733LLU;
	static volatile uint64_t x146 = UINT64_MAX;
	static int64_t x147 = 259392384015LL;
	uint8_t x148 = 21U;

	t5 = (((x145/x146)==x147)>>x148);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x169 = 422U;
	static volatile int8_t x171 = INT8_MIN;
	volatile int64_t x172 = 2LL;

	t6 = (((x169/x170)==x171)>>x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x181 = INT16_MIN;
	int8_t x183 = 15;
	int8_t x184 = 0;
	int32_t t7 = 235794264;

	t7 = (((x181/x182)==x183)>>x184);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x185 = 200581607664038LL;
	uint64_t x187 = 106LLU;
	uint16_t x188 = 0U;
	int32_t t8 = 184200;

	t8 = (((x185/x186)==x187)>>x188);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x193 = -1;
	int8_t x196 = 0;
	int32_t t9 = -5;

	t9 = (((x193/x194)==x195)>>x196);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x209 = INT8_MAX;
	static volatile int32_t x211 = -2036645;
	volatile uint32_t x212 = 0U;

	t10 = (((x209/x210)==x211)>>x212);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x265 = 111422735U;
	int8_t x266 = -1;
	volatile int64_t x267 = INT64_MAX;
	static uint16_t x268 = 1U;
	volatile int32_t t11 = 31;

	t11 = (((x265/x266)==x267)>>x268);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 104932732LLU;
	static int8_t x351 = INT8_MIN;
	volatile int64_t x352 = 14LL;
	volatile int32_t t12 = -25773;

	t12 = (((x349/x350)==x351)>>x352);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x413 = -11034887000LL;
	volatile int64_t x414 = -2535447853914LL;
	uint8_t x415 = UINT8_MAX;
	int8_t x416 = 0;
	int32_t t13 = 1;

	t13 = (((x413/x414)==x415)>>x416);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x445 = -4;
	uint8_t x446 = 43U;
	uint16_t x447 = 1U;

	t14 = (((x445/x446)==x447)>>x448);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x525 = INT16_MIN;
	volatile int8_t x526 = -1;
	int32_t x527 = 43895227;
	int32_t x528 = 7;
	int32_t t15 = -6221672;

	t15 = (((x525/x526)==x527)>>x528);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x559 = INT16_MIN;
	int64_t x560 = 14LL;
	static volatile int32_t t16 = -1466;

	t16 = (((x557/x558)==x559)>>x560);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x569 = INT64_MIN;
	int64_t x571 = -1LL;
	int64_t x572 = 9LL;
	volatile int32_t t17 = 34146815;

	t17 = (((x569/x570)==x571)>>x572);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x578 = 3U;
	static int8_t x579 = INT8_MIN;
	int16_t x580 = 15;
	static volatile int32_t t18 = -631;

	t18 = (((x577/x578)==x579)>>x580);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x593 = INT16_MIN;
	static volatile uint32_t x594 = 103863351U;
	int64_t x595 = INT64_MAX;
	static int32_t t19 = -4150;

	t19 = (((x593/x594)==x595)>>x596);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x597 = 10U;
	int32_t x598 = -1;
	int16_t x599 = -1;
	uint16_t x600 = 0U;
	volatile int32_t t20 = -5736251;

	t20 = (((x597/x598)==x599)>>x600);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x621 = 1221U;
	int32_t x622 = -14240970;
	static int16_t x623 = 0;
	int32_t x624 = 13;
	static int32_t t21 = 14;

	t21 = (((x621/x622)==x623)>>x624);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x657 = 0LL;
	volatile int32_t x658 = -1;

	t22 = (((x657/x658)==x659)>>x660);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x721 = 600103029LL;
	static int16_t x723 = -1;
	int64_t x724 = 0LL;
	volatile int32_t t23 = -5;

	t23 = (((x721/x722)==x723)>>x724);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x777 = -1;
	int16_t x778 = INT16_MIN;
	uint32_t x779 = 198U;
	int8_t x780 = 1;
	volatile int32_t t24 = -1924;

	t24 = (((x777/x778)==x779)>>x780);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x793 = 131290686LLU;
	uint32_t x794 = 5540442U;
	int16_t x795 = INT16_MIN;
	static int8_t x796 = 14;
	volatile int32_t t25 = -6748;

	t25 = (((x793/x794)==x795)>>x796);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x826 = INT16_MIN;
	int16_t x827 = -1;
	int8_t x828 = 0;

	t26 = (((x825/x826)==x827)>>x828);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x881 = INT64_MIN;
	static uint16_t x882 = UINT16_MAX;
	int8_t x883 = INT8_MIN;
	uint16_t x884 = 0U;
	volatile int32_t t27 = 2513;

	t27 = (((x881/x882)==x883)>>x884);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x917 = 21469LLU;
	int64_t x918 = 42LL;
	volatile int16_t x919 = -1;
	uint32_t x920 = 14U;
	volatile int32_t t28 = 30959123;

	t28 = (((x917/x918)==x919)>>x920);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x945 = 33U;
	int16_t x946 = INT16_MAX;
	volatile uint8_t x947 = 2U;
	int16_t x948 = 21;
	static volatile int32_t t29 = -6379;

	t29 = (((x945/x946)==x947)>>x948);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x989 = -1;
	volatile int64_t x990 = INT64_MAX;
	uint16_t x991 = 0U;
	static int32_t x992 = 11;

	t30 = (((x989/x990)==x991)>>x992);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1001 = -1;
	int64_t x1002 = 260292LL;
	static uint8_t x1003 = UINT8_MAX;
	uint8_t x1004 = 0U;
	volatile int32_t t31 = -1065;

	t31 = (((x1001/x1002)==x1003)>>x1004);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1065 = 1U;
	int8_t x1066 = -1;
	static volatile int16_t x1067 = -1;
	volatile int8_t x1068 = 0;
	int32_t t32 = -399796815;

	t32 = (((x1065/x1066)==x1067)>>x1068);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1093 = 647346LL;
	int8_t x1094 = 2;
	uint64_t x1095 = 280193388841535LLU;
	volatile int32_t x1096 = 0;
	int32_t t33 = -5;

	t33 = (((x1093/x1094)==x1095)>>x1096);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1133 = UINT64_MAX;
	uint64_t x1134 = 3743636169955LLU;
	int16_t x1136 = 0;
	volatile int32_t t34 = -1169;

	t34 = (((x1133/x1134)==x1135)>>x1136);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x1149 = INT8_MIN;
	int64_t x1150 = -1LL;
	uint16_t x1151 = 7420U;
	volatile uint8_t x1152 = 0U;
	volatile int32_t t35 = -1023;

	t35 = (((x1149/x1150)==x1151)>>x1152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1225 = INT32_MIN;
	int32_t x1227 = -383453347;
	static int16_t x1228 = 3;
	volatile int32_t t36 = -1003;

	t36 = (((x1225/x1226)==x1227)>>x1228);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1261 = INT32_MIN;
	static uint32_t x1262 = UINT32_MAX;
	uint16_t x1263 = 1U;
	static volatile int32_t t37 = 60096;

	t37 = (((x1261/x1262)==x1263)>>x1264);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1274 = INT32_MIN;
	int32_t x1275 = INT32_MAX;
	uint64_t x1276 = 2LLU;
	volatile int32_t t38 = -674972;

	t38 = (((x1273/x1274)==x1275)>>x1276);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1286 = 602013699547141894LL;
	static int8_t x1287 = INT8_MAX;
	static int64_t x1288 = 0LL;
	static volatile int32_t t39 = -1246437;

	t39 = (((x1285/x1286)==x1287)>>x1288);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1321 = -3;
	uint16_t x1322 = UINT16_MAX;
	volatile uint16_t x1323 = 552U;
	int64_t x1324 = 11LL;
	int32_t t40 = -22602641;

	t40 = (((x1321/x1322)==x1323)>>x1324);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1329 = INT64_MAX;
	uint32_t x1330 = UINT32_MAX;
	int16_t x1331 = INT16_MAX;
	uint8_t x1332 = 6U;
	int32_t t41 = 0;

	t41 = (((x1329/x1330)==x1331)>>x1332);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1333 = 113U;
	int32_t x1335 = -171632343;
	volatile int32_t t42 = -1;

	t42 = (((x1333/x1334)==x1335)>>x1336);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1346 = INT64_MAX;
	uint8_t x1347 = 7U;
	volatile int8_t x1348 = 4;
	volatile int32_t t43 = -86765;

	t43 = (((x1345/x1346)==x1347)>>x1348);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1373 = 2U;
	int32_t x1374 = -1;
	uint8_t x1375 = 14U;
	int8_t x1376 = 0;
	int32_t t44 = 0;

	t44 = (((x1373/x1374)==x1375)>>x1376);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1393 = 9511U;
	int64_t x1394 = INT64_MIN;
	static uint16_t x1395 = 0U;
	int8_t x1396 = 5;

	t45 = (((x1393/x1394)==x1395)>>x1396);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1409 = -1;
	int32_t x1410 = INT32_MIN;
	int32_t x1411 = INT32_MIN;
	uint8_t x1412 = 0U;
	static volatile int32_t t46 = -134;

	t46 = (((x1409/x1410)==x1411)>>x1412);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1456 = 1U;
	volatile int32_t t47 = -46;

	t47 = (((x1453/x1454)==x1455)>>x1456);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1461 = -1;
	static uint8_t x1462 = 3U;
	uint8_t x1463 = UINT8_MAX;
	uint8_t x1464 = 5U;

	t48 = (((x1461/x1462)==x1463)>>x1464);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1498 = INT8_MIN;
	int64_t x1499 = 1842894315633315LL;
	uint8_t x1500 = 3U;
	volatile int32_t t49 = 0;

	t49 = (((x1497/x1498)==x1499)>>x1500);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1513 = INT32_MIN;
	static volatile uint32_t x1514 = 47U;
	int8_t x1515 = INT8_MIN;
	uint8_t x1516 = 7U;
	int32_t t50 = -515431;

	t50 = (((x1513/x1514)==x1515)>>x1516);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1562 = INT8_MAX;
	int16_t x1563 = 15977;
	int8_t x1564 = 1;
	static int32_t t51 = -428422;

	t51 = (((x1561/x1562)==x1563)>>x1564);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1641 = INT64_MAX;
	int8_t x1642 = -5;
	volatile uint32_t x1644 = 5U;

	t52 = (((x1641/x1642)==x1643)>>x1644);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1646 = 14223U;
	uint8_t x1647 = 0U;
	int8_t x1648 = 19;
	static volatile int32_t t53 = 401633;

	t53 = (((x1645/x1646)==x1647)>>x1648);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1649 = 1U;
	volatile int32_t x1650 = INT32_MIN;
	int32_t x1651 = INT32_MAX;
	static uint32_t x1652 = 29U;
	int32_t t54 = -125863395;

	t54 = (((x1649/x1650)==x1651)>>x1652);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1690 = -352;
	volatile int64_t x1691 = -300130LL;
	uint32_t x1692 = 19U;
	int32_t t55 = 979;

	t55 = (((x1689/x1690)==x1691)>>x1692);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1721 = -1;
	volatile int8_t x1722 = INT8_MIN;
	uint8_t x1724 = 16U;
	int32_t t56 = -1;

	t56 = (((x1721/x1722)==x1723)>>x1724);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1805 = -1LL;
	int32_t x1806 = INT32_MAX;
	uint8_t x1807 = 0U;
	uint8_t x1808 = 13U;
	int32_t t57 = -2;

	t57 = (((x1805/x1806)==x1807)>>x1808);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1829 = -1;
	static int16_t x1830 = INT16_MIN;
	uint32_t x1831 = UINT32_MAX;
	static uint16_t x1832 = 3U;
	static int32_t t58 = -539878;

	t58 = (((x1829/x1830)==x1831)>>x1832);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1873 = 696160LLU;
	int8_t x1874 = INT8_MIN;
	int16_t x1875 = INT16_MIN;
	uint16_t x1876 = 3U;
	int32_t t59 = -3;

	t59 = (((x1873/x1874)==x1875)>>x1876);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x1894 = INT32_MIN;
	uint32_t x1895 = 19U;
	uint16_t x1896 = 3U;
	int32_t t60 = 216939;

	t60 = (((x1893/x1894)==x1895)>>x1896);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1917 = INT64_MAX;
	int64_t x1919 = INT64_MAX;
	uint8_t x1920 = 5U;

	t61 = (((x1917/x1918)==x1919)>>x1920);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x1953 = UINT32_MAX;
	int16_t x1954 = -1;
	uint8_t x1955 = 27U;
	int8_t x1956 = 1;
	static volatile int32_t t62 = -100139350;

	t62 = (((x1953/x1954)==x1955)>>x1956);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2057 = -4629;
	int64_t x2058 = INT64_MIN;
	uint16_t x2059 = UINT16_MAX;
	static int8_t x2060 = 1;
	static volatile int32_t t63 = 1653773;

	t63 = (((x2057/x2058)==x2059)>>x2060);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2101 = 3U;
	static int64_t x2102 = INT64_MAX;
	static uint64_t x2103 = 1091104679396LLU;
	volatile int32_t t64 = 4029936;

	t64 = (((x2101/x2102)==x2103)>>x2104);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x2205 = INT32_MIN;
	int32_t x2206 = INT32_MAX;
	int8_t x2207 = -1;
	static volatile int8_t x2208 = 0;
	int32_t t65 = 350825247;

	t65 = (((x2205/x2206)==x2207)>>x2208);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2214 = 112996095455LL;
	int8_t x2215 = INT8_MAX;
	uint16_t x2216 = 1U;

	t66 = (((x2213/x2214)==x2215)>>x2216);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2229 = INT32_MAX;
	int32_t x2230 = -1;
	int64_t x2231 = INT64_MIN;
	uint8_t x2232 = 6U;
	volatile int32_t t67 = 6;

	t67 = (((x2229/x2230)==x2231)>>x2232);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2270 = INT32_MIN;
	int8_t x2271 = 0;
	volatile uint8_t x2272 = 10U;

	t68 = (((x2269/x2270)==x2271)>>x2272);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x2369 = 93U;
	int16_t x2370 = -1;
	uint32_t x2371 = 4U;
	uint32_t x2372 = 4U;

	t69 = (((x2369/x2370)==x2371)>>x2372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x2397 = UINT64_MAX;
	int32_t x2398 = INT32_MIN;
	uint16_t x2399 = 0U;
	static volatile uint8_t x2400 = 4U;
	int32_t t70 = -2026;

	t70 = (((x2397/x2398)==x2399)>>x2400);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2485 = 2U;
	int64_t x2486 = INT64_MIN;
	uint16_t x2487 = 896U;
	static volatile int8_t x2488 = 6;
	int32_t t71 = 18;

	t71 = (((x2485/x2486)==x2487)>>x2488);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x2537 = 145LLU;
	int8_t x2538 = -5;
	int8_t x2540 = 1;
	int32_t t72 = -1;

	t72 = (((x2537/x2538)==x2539)>>x2540);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2542 = INT32_MIN;
	uint64_t x2543 = UINT64_MAX;
	static int32_t t73 = 3975;

	t73 = (((x2541/x2542)==x2543)>>x2544);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2577 = 1;
	int32_t x2578 = INT32_MAX;
	volatile int64_t x2579 = 2LL;
	static int8_t x2580 = 0;
	static volatile int32_t t74 = -1375;

	t74 = (((x2577/x2578)==x2579)>>x2580);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2593 = -1;
	int32_t x2594 = 1141;
	static int8_t x2595 = INT8_MAX;
	uint64_t x2596 = 22LLU;
	volatile int32_t t75 = -2358;

	t75 = (((x2593/x2594)==x2595)>>x2596);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2609 = 15U;
	int64_t x2611 = INT64_MIN;
	uint8_t x2612 = 27U;
	volatile int32_t t76 = -7;

	t76 = (((x2609/x2610)==x2611)>>x2612);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2677 = 2;
	volatile int8_t x2678 = 27;
	int16_t x2679 = -1;
	int32_t t77 = -207;

	t77 = (((x2677/x2678)==x2679)>>x2680);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2693 = 1776;
	int16_t x2694 = INT16_MIN;
	uint16_t x2695 = UINT16_MAX;

	t78 = (((x2693/x2694)==x2695)>>x2696);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2697 = INT16_MIN;
	static int8_t x2699 = 22;
	uint32_t x2700 = 1U;
	static volatile int32_t t79 = 43;

	t79 = (((x2697/x2698)==x2699)>>x2700);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x2753 = UINT32_MAX;
	static int64_t x2754 = -5LL;
	uint8_t x2755 = 93U;
	uint16_t x2756 = 0U;
	int32_t t80 = 445;

	t80 = (((x2753/x2754)==x2755)>>x2756);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2793 = 639578114U;
	uint16_t x2794 = 11U;
	uint16_t x2795 = 31U;
	int32_t x2796 = 0;
	volatile int32_t t81 = -112917;

	t81 = (((x2793/x2794)==x2795)>>x2796);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x2801 = INT32_MIN;
	uint32_t x2802 = 3036873U;
	uint8_t x2804 = 1U;
	int32_t t82 = -95701;

	t82 = (((x2801/x2802)==x2803)>>x2804);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2865 = UINT16_MAX;
	static uint8_t x2866 = UINT8_MAX;
	volatile uint8_t x2868 = 29U;
	int32_t t83 = -14;

	t83 = (((x2865/x2866)==x2867)>>x2868);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x2909 = -1LL;
	uint32_t x2910 = 134U;
	int16_t x2911 = -1;
	static volatile int32_t t84 = -1218;

	t84 = (((x2909/x2910)==x2911)>>x2912);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2997 = -12906432730695859LL;
	int8_t x2999 = INT8_MIN;
	int32_t t85 = 1023130;

	t85 = (((x2997/x2998)==x2999)>>x3000);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x3001 = INT32_MIN;
	static int8_t x3002 = INT8_MAX;
	volatile int32_t x3003 = -1;
	uint32_t x3004 = 3U;
	int32_t t86 = -1;

	t86 = (((x3001/x3002)==x3003)>>x3004);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3009 = 1896907060593LLU;
	int64_t x3010 = INT64_MIN;
	static uint16_t x3011 = 12U;
	static uint32_t x3012 = 14U;

	t87 = (((x3009/x3010)==x3011)>>x3012);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3041 = INT32_MIN;
	static int16_t x3042 = INT16_MAX;
	volatile int16_t x3043 = INT16_MIN;
	int32_t t88 = 45927;

	t88 = (((x3041/x3042)==x3043)>>x3044);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3085 = -1;
	int16_t x3086 = -1;
	int16_t x3087 = -437;
	int8_t x3088 = 1;
	volatile int32_t t89 = 2;

	t89 = (((x3085/x3086)==x3087)>>x3088);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x3098 = UINT32_MAX;
	uint64_t x3099 = 69859602499032LLU;
	int32_t t90 = -76;

	t90 = (((x3097/x3098)==x3099)>>x3100);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3185 = INT8_MAX;
	static int64_t x3187 = -54893197LL;
	volatile int32_t t91 = 343179;

	t91 = (((x3185/x3186)==x3187)>>x3188);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3205 = INT8_MIN;
	int32_t x3206 = INT32_MIN;
	static int16_t x3207 = -1;
	int32_t t92 = 985734927;

	t92 = (((x3205/x3206)==x3207)>>x3208);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x3317 = INT16_MIN;
	uint16_t x3319 = 89U;
	int8_t x3320 = 0;
	volatile int32_t t93 = -15350690;

	t93 = (((x3317/x3318)==x3319)>>x3320);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3374 = UINT16_MAX;
	int32_t t94 = -28689;

	t94 = (((x3373/x3374)==x3375)>>x3376);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3473 = 4517209192LL;
	uint64_t x3474 = 3LLU;
	int32_t x3475 = INT32_MIN;
	static uint16_t x3476 = 1U;
	volatile int32_t t95 = -112;

	t95 = (((x3473/x3474)==x3475)>>x3476);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3497 = INT32_MAX;
	uint32_t x3499 = 2U;
	int8_t x3500 = 1;

	t96 = (((x3497/x3498)==x3499)>>x3500);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3509 = 180145355569840941LLU;
	uint16_t x3510 = UINT16_MAX;
	static volatile uint8_t x3512 = 17U;
	volatile int32_t t97 = -3400;

	t97 = (((x3509/x3510)==x3511)>>x3512);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3577 = INT8_MIN;
	uint8_t x3578 = 32U;
	volatile int8_t x3579 = INT8_MAX;
	int32_t x3580 = 14;
	int32_t t98 = 476528613;

	t98 = (((x3577/x3578)==x3579)>>x3580);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x3609 = 2;
	volatile uint32_t x3610 = 56473860U;
	int8_t x3612 = 0;

	t99 = (((x3609/x3610)==x3611)>>x3612);

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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 5U;
int32_t x66 = 1588145;
int64_t x77 = -1LL;
uint16_t x79 = 18U;
int32_t t3 = -76;
int8_t x169 = INT8_MAX;
int32_t x171 = INT32_MIN;
static int8_t x172 = 1;
volatile int32_t t7 = -22;
int64_t x213 = -9607359LL;
static int64_t x238 = 3986445408359362753LL;
int64_t x299 = INT64_MAX;
int32_t x358 = INT32_MAX;
uint32_t x359 = 423045U;
volatile int32_t t13 = -292023309;
int32_t x406 = -1;
volatile int32_t t14 = 185883;
uint8_t x432 = 0U;
uint32_t x477 = 60461U;
static uint8_t x480 = 4U;
uint8_t x518 = UINT8_MAX;
int16_t x612 = 0;
uint8_t x620 = 2U;
volatile int32_t t23 = -1;
volatile int8_t x720 = 0;
uint16_t x736 = 6U;
int8_t x738 = INT8_MAX;
uint16_t x739 = 24U;
uint8_t x740 = 4U;
int32_t t28 = -117884454;
uint8_t x753 = UINT8_MAX;
int64_t x773 = INT64_MIN;
static volatile int8_t x796 = 0;
int16_t x799 = -1;
int8_t x800 = 13;
uint32_t x846 = 94U;
int64_t x849 = INT64_MAX;
volatile int8_t x851 = INT8_MIN;
uint64_t x862 = 18820720048172LLU;
int64_t x863 = 1753829LL;
volatile int32_t x943 = -67;
static volatile int32_t t39 = -7098507;
volatile uint16_t x951 = UINT16_MAX;
uint64_t x992 = 5LLU;
volatile int32_t t44 = -739622;
int16_t x1119 = INT16_MAX;
int32_t t47 = 2602563;
uint32_t x1288 = 12U;
uint8_t x1432 = 12U;
static int16_t x1491 = INT16_MIN;
uint16_t x1496 = 10U;
int32_t x1573 = 25521164;
int32_t t60 = 13;
uint64_t x1597 = UINT64_MAX;
int32_t x1599 = 96630;
volatile int32_t t61 = 452;
int32_t t65 = 57798998;
static int64_t x1693 = -1LL;
uint8_t x1695 = 11U;
static int32_t t66 = -106466;
int32_t t71 = 25;
static uint32_t x1920 = 9U;
uint8_t x1930 = 0U;
volatile int32_t t77 = -186794679;
static uint16_t x2107 = UINT16_MAX;
static int8_t x2130 = INT8_MIN;
int64_t x2132 = 1LL;
int8_t x2140 = 2;
volatile int32_t t80 = -426397;
int8_t x2218 = INT8_MIN;
static int64_t x2219 = INT64_MIN;
volatile int32_t t83 = -569463;
int8_t x2274 = INT8_MIN;
uint64_t x2370 = 999977405081LLU;
int32_t x2371 = INT32_MIN;
static volatile int32_t t89 = -7711;
int16_t x2450 = 4066;
volatile int8_t x2451 = -24;
static int32_t t93 = 1455;
int16_t x2465 = INT16_MIN;
uint64_t x2468 = 5LLU;
int16_t x2550 = INT16_MIN;
static int16_t x2565 = INT16_MAX;
int64_t x2567 = INT64_MIN;
static volatile int16_t x2614 = 5;
volatile int32_t t98 = 209347;
int8_t x2621 = -1;
uint32_t x2624 = 13U;


void f0(void) {
	static int16_t x10 = -1;
	int8_t x11 = -1;
	volatile uint32_t x12 = 1U;
	int32_t t0 = -11102793;

	t0 = (((x9<=x10)<x11)>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x65 = -2279LL;
	uint32_t x67 = 985241U;
	int64_t x68 = 1LL;
	int32_t t1 = 1;

	t1 = (((x65<=x66)<x67)>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x78 = 3605276239523368LLU;
	int16_t x80 = 13;
	int32_t t2 = 61302;

	t2 = (((x77<=x78)<x79)>>x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -1LL;
	uint32_t x95 = 692691310U;
	static int32_t x96 = 4;

	t3 = (((x93<=x94)<x95)>>x96);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x109 = 305526138204922379LL;
	uint16_t x110 = 7U;
	static volatile int16_t x111 = -1;
	static volatile int16_t x112 = 0;
	static volatile int32_t t4 = -7220748;

	t4 = (((x109<=x110)<x111)>>x112);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x113 = -1;
	int16_t x114 = -72;
	int32_t x115 = -1;
	volatile int8_t x116 = 19;
	int32_t t5 = 7664792;

	t5 = (((x113<=x114)<x115)>>x116);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x170 = UINT16_MAX;
	int32_t t6 = -37505;

	t6 = (((x169<=x170)<x171)>>x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	volatile int16_t x200 = 30;

	t7 = (((x197<=x198)<x199)>>x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	volatile uint8_t x216 = 5U;
	int32_t t8 = -14;

	t8 = (((x213<=x214)<x215)>>x216);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x237 = 54515491220LLU;
	static uint32_t x239 = 87643U;
	int8_t x240 = 1;
	int32_t t9 = -63;

	t9 = (((x237<=x238)<x239)>>x240);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x261 = 0;
	volatile uint64_t x262 = UINT64_MAX;
	static volatile int32_t x263 = 393019;
	uint16_t x264 = 1U;
	volatile int32_t t10 = 175898475;

	t10 = (((x261<=x262)<x263)>>x264);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x297 = 11U;
	int32_t x298 = 4709;
	volatile uint16_t x300 = 2U;
	int32_t t11 = -1;

	t11 = (((x297<=x298)<x299)>>x300);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x357 = UINT32_MAX;
	int8_t x360 = 21;
	int32_t t12 = 2182625;

	t12 = (((x357<=x358)<x359)>>x360);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 8108733U;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = 10U;

	t13 = (((x389<=x390)<x391)>>x392);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x405 = 61051;
	static int64_t x407 = INT64_MIN;
	static int8_t x408 = 6;

	t14 = (((x405<=x406)<x407)>>x408);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x429 = UINT8_MAX;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = -1;
	volatile int32_t t15 = 15;

	t15 = (((x429<=x430)<x431)>>x432);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x478 = INT32_MIN;
	static uint8_t x479 = 28U;
	int32_t t16 = 148;

	t16 = (((x477<=x478)<x479)>>x480);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x517 = INT16_MAX;
	volatile int32_t x519 = -598862816;
	uint8_t x520 = 7U;
	int32_t t17 = 395164;

	t17 = (((x517<=x518)<x519)>>x520);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x609 = 1;
	uint8_t x610 = 78U;
	int16_t x611 = -1;
	int32_t t18 = 773;

	t18 = (((x609<=x610)<x611)>>x612);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x617 = INT32_MAX;
	int64_t x618 = INT64_MAX;
	int16_t x619 = INT16_MAX;
	int32_t t19 = -246041252;

	t19 = (((x617<=x618)<x619)>>x620);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x625 = INT16_MIN;
	uint64_t x626 = 11988334LLU;
	volatile uint8_t x627 = UINT8_MAX;
	int32_t x628 = 24;
	volatile int32_t t20 = -8241;

	t20 = (((x625<=x626)<x627)>>x628);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x665 = 738U;
	int32_t x666 = INT32_MIN;
	int32_t x667 = INT32_MIN;
	int16_t x668 = 4;
	volatile int32_t t21 = -34505;

	t21 = (((x665<=x666)<x667)>>x668);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x677 = 110681336302LLU;
	uint64_t x678 = 3598LLU;
	static volatile int32_t x679 = INT32_MIN;
	volatile uint8_t x680 = 0U;
	volatile int32_t t22 = -1;

	t22 = (((x677<=x678)<x679)>>x680);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x681 = -1;
	int32_t x682 = INT32_MIN;
	int32_t x683 = -3375197;
	uint32_t x684 = 29U;

	t23 = (((x681<=x682)<x683)>>x684);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x697 = 14863078LLU;
	int8_t x698 = INT8_MIN;
	uint8_t x699 = 6U;
	volatile int32_t x700 = 2;
	static volatile int32_t t24 = -41;

	t24 = (((x697<=x698)<x699)>>x700);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x717 = INT32_MIN;
	static int32_t x718 = INT32_MAX;
	uint32_t x719 = UINT32_MAX;
	int32_t t25 = -1523151;

	t25 = (((x717<=x718)<x719)>>x720);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x721 = -1;
	static int64_t x722 = -18442629434LL;
	uint32_t x723 = 1992359572U;
	static volatile int32_t x724 = 0;
	int32_t t26 = -9841231;

	t26 = (((x721<=x722)<x723)>>x724);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x733 = UINT8_MAX;
	volatile uint64_t x734 = 347LLU;
	int64_t x735 = -1LL;
	int32_t t27 = 1;

	t27 = (((x733<=x734)<x735)>>x736);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x737 = INT16_MIN;

	t28 = (((x737<=x738)<x739)>>x740);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x754 = INT16_MIN;
	static int32_t x755 = -1;
	static int8_t x756 = 0;
	static volatile int32_t t29 = -1;

	t29 = (((x753<=x754)<x755)>>x756);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x774 = INT16_MIN;
	uint32_t x775 = UINT32_MAX;
	int8_t x776 = 1;
	volatile int32_t t30 = -33240124;

	t30 = (((x773<=x774)<x775)>>x776);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MAX;
	int8_t x792 = 1;
	int32_t t31 = -88;

	t31 = (((x789<=x790)<x791)>>x792);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x793 = INT16_MIN;
	static uint16_t x794 = UINT16_MAX;
	static int32_t x795 = -13021;
	volatile int32_t t32 = 1017079;

	t32 = (((x793<=x794)<x795)>>x796);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x797 = INT16_MIN;
	static uint64_t x798 = UINT64_MAX;
	static int32_t t33 = 306514357;

	t33 = (((x797<=x798)<x799)>>x800);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x813 = 12U;
	static uint64_t x814 = 28LLU;
	volatile int8_t x815 = INT8_MIN;
	uint16_t x816 = 2U;
	int32_t t34 = 15727912;

	t34 = (((x813<=x814)<x815)>>x816);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x845 = -10;
	volatile int64_t x847 = INT64_MIN;
	int8_t x848 = 1;
	static int32_t t35 = -24047298;

	t35 = (((x845<=x846)<x847)>>x848);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x850 = INT32_MAX;
	uint16_t x852 = 2U;
	volatile int32_t t36 = -100961725;

	t36 = (((x849<=x850)<x851)>>x852);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x861 = 123U;
	uint64_t x864 = 15LLU;
	int32_t t37 = 1866;

	t37 = (((x861<=x862)<x863)>>x864);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x865 = INT32_MIN;
	int32_t x866 = INT32_MIN;
	int32_t x867 = 15460;
	volatile uint64_t x868 = 1LLU;
	volatile int32_t t38 = 79111674;

	t38 = (((x865<=x866)<x867)>>x868);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x941 = INT64_MAX;
	int32_t x942 = INT32_MIN;
	uint16_t x944 = 4U;

	t39 = (((x941<=x942)<x943)>>x944);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x949 = INT16_MIN;
	static uint8_t x950 = 62U;
	int8_t x952 = 1;
	int32_t t40 = -203;

	t40 = (((x949<=x950)<x951)>>x952);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x953 = 27U;
	int32_t x954 = INT32_MIN;
	int64_t x955 = -516631111LL;
	uint8_t x956 = 16U;
	int32_t t41 = 7311348;

	t41 = (((x953<=x954)<x955)>>x956);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x989 = 1;
	static uint64_t x990 = 694LLU;
	static int16_t x991 = -961;
	volatile int32_t t42 = -255;

	t42 = (((x989<=x990)<x991)>>x992);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1025 = 1U;
	int64_t x1026 = INT64_MIN;
	static int8_t x1027 = INT8_MAX;
	int64_t x1028 = 0LL;
	static int32_t t43 = -379504741;

	t43 = (((x1025<=x1026)<x1027)>>x1028);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1073 = UINT64_MAX;
	uint8_t x1074 = UINT8_MAX;
	static uint32_t x1075 = UINT32_MAX;
	int8_t x1076 = 1;

	t44 = (((x1073<=x1074)<x1075)>>x1076);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1085 = 15073712LL;
	static int16_t x1086 = INT16_MAX;
	int8_t x1087 = INT8_MIN;
	volatile int16_t x1088 = 0;
	int32_t t45 = -58;

	t45 = (((x1085<=x1086)<x1087)>>x1088);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1117 = -10;
	uint64_t x1118 = 27835591845200003LLU;
	volatile uint8_t x1120 = 10U;
	int32_t t46 = -13019220;

	t46 = (((x1117<=x1118)<x1119)>>x1120);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1173 = INT32_MIN;
	int8_t x1174 = -15;
	volatile uint16_t x1175 = 0U;
	static uint16_t x1176 = 3U;

	t47 = (((x1173<=x1174)<x1175)>>x1176);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1213 = UINT16_MAX;
	int8_t x1214 = INT8_MIN;
	volatile int32_t x1215 = INT32_MAX;
	int16_t x1216 = 1;
	volatile int32_t t48 = 218965129;

	t48 = (((x1213<=x1214)<x1215)>>x1216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1253 = INT32_MIN;
	volatile uint64_t x1254 = 762LLU;
	int32_t x1255 = -10961797;
	volatile uint8_t x1256 = 6U;
	volatile int32_t t49 = -46;

	t49 = (((x1253<=x1254)<x1255)>>x1256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1285 = 944586681167181LLU;
	int16_t x1286 = -4;
	int8_t x1287 = -1;
	int32_t t50 = -9;

	t50 = (((x1285<=x1286)<x1287)>>x1288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1293 = UINT8_MAX;
	uint32_t x1294 = 5U;
	int16_t x1295 = 650;
	uint64_t x1296 = 13LLU;
	volatile int32_t t51 = -273577;

	t51 = (((x1293<=x1294)<x1295)>>x1296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1377 = UINT16_MAX;
	static volatile int64_t x1378 = 1590023LL;
	int16_t x1379 = -6292;
	uint8_t x1380 = 2U;
	static volatile int32_t t52 = -33109385;

	t52 = (((x1377<=x1378)<x1379)>>x1380);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x1409 = -1;
	static int8_t x1410 = -1;
	uint64_t x1411 = 548091297155310LLU;
	int8_t x1412 = 23;
	int32_t t53 = 22851796;

	t53 = (((x1409<=x1410)<x1411)>>x1412);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1413 = 678631415LLU;
	int8_t x1414 = INT8_MAX;
	volatile int8_t x1415 = 1;
	uint8_t x1416 = 19U;
	volatile int32_t t54 = 5654559;

	t54 = (((x1413<=x1414)<x1415)>>x1416);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1417 = INT64_MIN;
	volatile int32_t x1418 = INT32_MIN;
	int64_t x1419 = 10244734303164LL;
	static int32_t x1420 = 6;
	volatile int32_t t55 = -427;

	t55 = (((x1417<=x1418)<x1419)>>x1420);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1429 = INT32_MAX;
	int32_t x1430 = -111;
	static int64_t x1431 = 279241LL;
	int32_t t56 = -1;

	t56 = (((x1429<=x1430)<x1431)>>x1432);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x1437 = 13524192U;
	static volatile int32_t x1438 = INT32_MAX;
	int64_t x1439 = INT64_MAX;
	uint32_t x1440 = 1U;
	volatile int32_t t57 = 1703;

	t57 = (((x1437<=x1438)<x1439)>>x1440);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1489 = 0U;
	int8_t x1490 = INT8_MIN;
	uint16_t x1492 = 7U;
	int32_t t58 = 787586437;

	t58 = (((x1489<=x1490)<x1491)>>x1492);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1493 = 0U;
	uint8_t x1494 = 0U;
	int64_t x1495 = INT64_MAX;
	volatile int32_t t59 = 152;

	t59 = (((x1493<=x1494)<x1495)>>x1496);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1574 = -10405088;
	int64_t x1575 = INT64_MIN;
	int16_t x1576 = 6;

	t60 = (((x1573<=x1574)<x1575)>>x1576);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1598 = INT8_MAX;
	uint8_t x1600 = 0U;

	t61 = (((x1597<=x1598)<x1599)>>x1600);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x1601 = 0;
	uint64_t x1602 = UINT64_MAX;
	int64_t x1603 = INT64_MIN;
	static uint8_t x1604 = 19U;
	int32_t t62 = 33439448;

	t62 = (((x1601<=x1602)<x1603)>>x1604);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1617 = INT64_MAX;
	static int32_t x1618 = INT32_MIN;
	uint16_t x1619 = 145U;
	static int16_t x1620 = 0;
	int32_t t63 = -104;

	t63 = (((x1617<=x1618)<x1619)>>x1620);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1633 = INT16_MIN;
	int16_t x1634 = INT16_MIN;
	static volatile int16_t x1635 = INT16_MIN;
	uint8_t x1636 = 0U;
	int32_t t64 = -33700;

	t64 = (((x1633<=x1634)<x1635)>>x1636);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1661 = INT8_MIN;
	volatile uint16_t x1662 = UINT16_MAX;
	volatile int64_t x1663 = -1LL;
	uint8_t x1664 = 28U;

	t65 = (((x1661<=x1662)<x1663)>>x1664);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x1694 = 13U;
	int64_t x1696 = 1LL;

	t66 = (((x1693<=x1694)<x1695)>>x1696);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1753 = INT32_MIN;
	int8_t x1754 = INT8_MAX;
	uint64_t x1755 = UINT64_MAX;
	uint8_t x1756 = 12U;
	volatile int32_t t67 = -1389191;

	t67 = (((x1753<=x1754)<x1755)>>x1756);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1793 = 11U;
	volatile int64_t x1794 = -1LL;
	static int8_t x1795 = -5;
	static uint8_t x1796 = 6U;
	static volatile int32_t t68 = -28;

	t68 = (((x1793<=x1794)<x1795)>>x1796);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1841 = UINT8_MAX;
	static uint16_t x1842 = 3235U;
	int32_t x1843 = INT32_MIN;
	int32_t x1844 = 0;
	volatile int32_t t69 = -1595;

	t69 = (((x1841<=x1842)<x1843)>>x1844);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1877 = -1;
	uint32_t x1878 = 2222925U;
	volatile int64_t x1879 = -178LL;
	uint16_t x1880 = 1U;
	volatile int32_t t70 = 0;

	t70 = (((x1877<=x1878)<x1879)>>x1880);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1889 = INT32_MIN;
	uint8_t x1890 = UINT8_MAX;
	static int16_t x1891 = INT16_MIN;
	static uint8_t x1892 = 0U;

	t71 = (((x1889<=x1890)<x1891)>>x1892);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1917 = INT32_MAX;
	volatile int16_t x1918 = INT16_MAX;
	int64_t x1919 = -1122641618058985873LL;
	int32_t t72 = 302672;

	t72 = (((x1917<=x1918)<x1919)>>x1920);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x1929 = UINT64_MAX;
	static int32_t x1931 = INT32_MAX;
	static uint8_t x1932 = 0U;
	volatile int32_t t73 = 1;

	t73 = (((x1929<=x1930)<x1931)>>x1932);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1961 = 4507632859LLU;
	uint16_t x1962 = UINT16_MAX;
	int64_t x1963 = 1427LL;
	uint16_t x1964 = 1U;
	volatile int32_t t74 = 3900;

	t74 = (((x1961<=x1962)<x1963)>>x1964);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1965 = 109518146032110531LL;
	uint32_t x1966 = 109U;
	static volatile int64_t x1967 = -1LL;
	uint32_t x1968 = 21U;
	volatile int32_t t75 = 49;

	t75 = (((x1965<=x1966)<x1967)>>x1968);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2049 = -2;
	uint32_t x2050 = UINT32_MAX;
	volatile uint64_t x2051 = 591379390112580LLU;
	uint16_t x2052 = 18U;
	static int32_t t76 = -1;

	t76 = (((x2049<=x2050)<x2051)>>x2052);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2093 = -1;
	uint8_t x2094 = UINT8_MAX;
	uint32_t x2095 = 26619942U;
	int8_t x2096 = 27;

	t77 = (((x2093<=x2094)<x2095)>>x2096);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2105 = -9;
	uint32_t x2106 = 32856U;
	volatile uint8_t x2108 = 13U;
	volatile int32_t t78 = 466970;

	t78 = (((x2105<=x2106)<x2107)>>x2108);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2129 = 302U;
	uint16_t x2131 = 17U;
	int32_t t79 = -1;

	t79 = (((x2129<=x2130)<x2131)>>x2132);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2137 = INT64_MAX;
	int16_t x2138 = -1;
	static volatile int8_t x2139 = -8;

	t80 = (((x2137<=x2138)<x2139)>>x2140);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2145 = -246874904534607LL;
	uint8_t x2146 = 0U;
	static int16_t x2147 = INT16_MIN;
	uint8_t x2148 = 5U;
	int32_t t81 = 478691591;

	t81 = (((x2145<=x2146)<x2147)>>x2148);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2185 = -1;
	volatile uint64_t x2186 = 1210221LLU;
	int32_t x2187 = -2;
	volatile uint8_t x2188 = 22U;
	volatile int32_t t82 = -972;

	t82 = (((x2185<=x2186)<x2187)>>x2188);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2217 = INT32_MIN;
	int8_t x2220 = 7;

	t83 = (((x2217<=x2218)<x2219)>>x2220);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x2273 = UINT8_MAX;
	uint32_t x2275 = 230574705U;
	int16_t x2276 = 16;
	volatile int32_t t84 = 214850;

	t84 = (((x2273<=x2274)<x2275)>>x2276);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2289 = 256935235535263LLU;
	static int64_t x2290 = INT64_MIN;
	volatile int32_t x2291 = -1;
	uint8_t x2292 = 1U;
	static int32_t t85 = 1;

	t85 = (((x2289<=x2290)<x2291)>>x2292);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2293 = 2553901U;
	int16_t x2294 = INT16_MAX;
	int16_t x2295 = INT16_MAX;
	static uint32_t x2296 = 30U;
	int32_t t86 = -2;

	t86 = (((x2293<=x2294)<x2295)>>x2296);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x2333 = INT16_MAX;
	volatile int8_t x2334 = -5;
	static int32_t x2335 = -29512;
	uint8_t x2336 = 19U;
	volatile int32_t t87 = 255652788;

	t87 = (((x2333<=x2334)<x2335)>>x2336);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2341 = -10;
	static volatile int32_t x2342 = -1;
	uint16_t x2343 = UINT16_MAX;
	int32_t x2344 = 3;
	int32_t t88 = -120;

	t88 = (((x2341<=x2342)<x2343)>>x2344);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2369 = 15976923315LLU;
	uint32_t x2372 = 4U;

	t89 = (((x2369<=x2370)<x2371)>>x2372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2381 = UINT64_MAX;
	int32_t x2382 = INT32_MAX;
	int64_t x2383 = INT64_MAX;
	int64_t x2384 = 0LL;
	volatile int32_t t90 = -28;

	t90 = (((x2381<=x2382)<x2383)>>x2384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x2385 = INT32_MIN;
	int16_t x2386 = INT16_MAX;
	int8_t x2387 = INT8_MAX;
	int8_t x2388 = 1;
	volatile int32_t t91 = -2463246;

	t91 = (((x2385<=x2386)<x2387)>>x2388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2413 = UINT32_MAX;
	int64_t x2414 = -57LL;
	volatile int64_t x2415 = -1083928549274534843LL;
	int64_t x2416 = 12LL;
	static volatile int32_t t92 = -9097;

	t92 = (((x2413<=x2414)<x2415)>>x2416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2449 = 9494118;
	volatile uint8_t x2452 = 1U;

	t93 = (((x2449<=x2450)<x2451)>>x2452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2466 = INT8_MIN;
	volatile int8_t x2467 = INT8_MAX;
	volatile int32_t t94 = -10339;

	t94 = (((x2465<=x2466)<x2467)>>x2468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2529 = UINT64_MAX;
	volatile int8_t x2530 = -1;
	static uint8_t x2531 = 15U;
	static uint8_t x2532 = 19U;
	static int32_t t95 = -16470815;

	t95 = (((x2529<=x2530)<x2531)>>x2532);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2549 = 112U;
	volatile int8_t x2551 = -1;
	int64_t x2552 = 4LL;
	static int32_t t96 = 20562612;

	t96 = (((x2549<=x2550)<x2551)>>x2552);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2566 = 103U;
	uint32_t x2568 = 2U;
	static int32_t t97 = -2;

	t97 = (((x2565<=x2566)<x2567)>>x2568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x2613 = INT8_MAX;
	uint32_t x2615 = 1992U;
	volatile uint8_t x2616 = 16U;

	t98 = (((x2613<=x2614)<x2615)>>x2616);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2622 = 0U;
	uint32_t x2623 = UINT32_MAX;
	volatile int32_t t99 = -588168;

	t99 = (((x2621<=x2622)<x2623)>>x2624);

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


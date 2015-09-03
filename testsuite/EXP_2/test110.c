#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = 8;
uint16_t x7 = 58U;
uint64_t x13 = 4364159954361433LLU;
int8_t x16 = 0;
int16_t x17 = 579;
int32_t t2 = 3;
uint64_t x51 = 6865090LLU;
volatile int32_t t3 = 428;
uint64_t x139 = UINT64_MAX;
int64_t x140 = 27LL;
uint16_t x162 = UINT16_MAX;
volatile int32_t x269 = INT32_MIN;
int8_t x271 = INT8_MAX;
static int8_t x461 = -1;
int8_t x462 = INT8_MIN;
int16_t x463 = INT16_MIN;
volatile int32_t t11 = -46;
int8_t x496 = 15;
static volatile uint32_t x502 = 4989U;
static uint32_t x540 = 3U;
static int32_t t14 = 172227019;
static int8_t x542 = INT8_MIN;
static int32_t t15 = -6;
int64_t x573 = INT64_MIN;
int32_t t16 = -1768;
static int16_t x602 = 7932;
int16_t x604 = 7;
int8_t x609 = -1;
uint32_t x611 = UINT32_MAX;
int32_t x612 = 0;
volatile int8_t x622 = -7;
uint8_t x623 = 26U;
int64_t x678 = -125710129371260409LL;
volatile int16_t x685 = INT16_MIN;
volatile int8_t x686 = INT8_MAX;
uint32_t x766 = UINT32_MAX;
int16_t x768 = 1;
static uint16_t x785 = UINT16_MAX;
uint8_t x788 = 3U;
volatile int64_t x789 = INT64_MIN;
int32_t t28 = -14840;
volatile int8_t x809 = -1;
volatile uint8_t x812 = 5U;
static int32_t x813 = -1;
int16_t x816 = 30;
uint8_t x859 = UINT8_MAX;
int64_t x869 = INT64_MIN;
static uint8_t x871 = 0U;
uint8_t x872 = 18U;
static volatile uint8_t x1001 = 119U;
static uint8_t x1036 = 1U;
int16_t x1039 = 2;
int8_t x1050 = INT8_MIN;
volatile int32_t x1158 = INT32_MIN;
int64_t x1253 = INT64_MIN;
volatile int16_t x1254 = 15564;
static int64_t x1282 = INT64_MIN;
int64_t x1283 = 1965932608526203LL;
uint16_t x1284 = 24U;
volatile int32_t x1286 = 37;
uint64_t x1314 = 106096062925265179LLU;
int64_t x1326 = -129170044LL;
int16_t x1349 = INT16_MAX;
static uint8_t x1350 = 0U;
static int32_t t50 = -5567913;
int64_t x1475 = INT64_MIN;
int8_t x1563 = INT8_MIN;
volatile int32_t t54 = -1;
uint8_t x1620 = 1U;
int8_t x1622 = 37;
volatile int16_t x1627 = INT16_MIN;
int32_t t57 = 2;
uint8_t x1647 = UINT8_MAX;
int32_t x1700 = 0;
int8_t x1737 = -1;
volatile int32_t x1739 = INT32_MAX;
uint64_t x1786 = UINT64_MAX;
volatile int8_t x1796 = 2;
volatile int32_t t64 = -1;
volatile int16_t x1855 = INT16_MAX;
volatile int8_t x1860 = 9;
volatile int64_t x1931 = INT64_MAX;
volatile int32_t t72 = 4518615;
static int32_t x2005 = INT32_MIN;
int8_t x2117 = INT8_MIN;
int8_t x2118 = 25;
volatile int32_t t75 = 961;
int8_t x2167 = INT8_MIN;
int64_t x2185 = 253LL;
uint64_t x2187 = 23361358460730082LLU;
volatile uint32_t x2188 = 0U;
uint16_t x2213 = 61U;
static int64_t x2214 = 2LL;
volatile int8_t x2262 = 1;
uint8_t x2263 = UINT8_MAX;
int16_t x2290 = INT16_MIN;
static int64_t x2291 = -1LL;
static volatile uint32_t x2292 = 1U;
volatile int32_t t86 = 4877;
uint64_t x2398 = 116LLU;
volatile int64_t x2437 = 15LL;
int16_t x2445 = INT16_MIN;
int16_t x2456 = 0;
static uint64_t x2511 = 0LLU;
int16_t x2657 = -48;
uint32_t x2706 = 45378931U;
volatile int16_t x2707 = INT16_MIN;
uint16_t x2772 = 12U;
int32_t t99 = -1297;


void f0(void) {
	volatile uint64_t x6 = UINT64_MAX;
	static int8_t x8 = 2;
	int32_t t0 = -14762946;

	t0 = ((x5<(x6+x7))<<x8);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x14 = -1;
	volatile int64_t x15 = -2863LL;
	static volatile int32_t t1 = -65;

	t1 = ((x13<(x14+x15))<<x16);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x18 = -4;
	uint32_t x19 = UINT32_MAX;
	uint32_t x20 = 10U;

	t2 = ((x17<(x18+x19))<<x20);

	if (t2 != 1024) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x49 = -1;
	int64_t x50 = -1LL;
	uint8_t x52 = 0U;

	t3 = ((x49<(x50+x51))<<x52);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x137 = -118864;
	volatile int16_t x138 = -1;
	volatile int32_t t4 = -3006515;

	t4 = ((x137<(x138+x139))<<x140);

	if (t4 != 134217728) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 64616U;
	int8_t x155 = INT8_MAX;
	int8_t x156 = 6;
	volatile int32_t t5 = -10;

	t5 = ((x153<(x154+x155))<<x156);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x161 = 1125907656U;
	static int64_t x163 = 753632983039LL;
	volatile uint16_t x164 = 27U;
	int32_t t6 = 34709759;

	t6 = ((x161<(x162+x163))<<x164);

	if (t6 != 134217728) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x221 = INT8_MIN;
	uint16_t x222 = UINT16_MAX;
	volatile int16_t x223 = INT16_MIN;
	int16_t x224 = 1;
	volatile int32_t t7 = -194687;

	t7 = ((x221<(x222+x223))<<x224);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x270 = -1;
	int8_t x272 = 10;
	volatile int32_t t8 = -98;

	t8 = ((x269<(x270+x271))<<x272);

	if (t8 != 1024) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x381 = 14;
	int16_t x382 = INT16_MIN;
	volatile int32_t x383 = -6;
	volatile int64_t x384 = 2LL;
	int32_t t9 = 199;

	t9 = ((x381<(x382+x383))<<x384);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x417 = 1954065U;
	int64_t x418 = 128945LL;
	static uint16_t x419 = UINT16_MAX;
	uint8_t x420 = 7U;
	volatile int32_t t10 = 908878;

	t10 = ((x417<(x418+x419))<<x420);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x464 = 0U;

	t11 = ((x461<(x462+x463))<<x464);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x493 = -13;
	volatile int16_t x494 = 920;
	uint8_t x495 = 13U;
	static int32_t t12 = 22652689;

	t12 = ((x493<(x494+x495))<<x496);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x501 = -199353;
	uint32_t x503 = 1711178659U;
	uint8_t x504 = 29U;
	volatile int32_t t13 = 2619;

	t13 = ((x501<(x502+x503))<<x504);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x537 = -1LL;
	int64_t x538 = INT64_MIN;
	uint64_t x539 = 33285898791LLU;

	t14 = ((x537<(x538+x539))<<x540);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x541 = 22LLU;
	uint64_t x543 = 814274926LLU;
	int8_t x544 = 0;

	t15 = ((x541<(x542+x543))<<x544);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x574 = UINT64_MAX;
	volatile int8_t x575 = 8;
	uint8_t x576 = 5U;

	t16 = ((x573<(x574+x575))<<x576);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x601 = -874936LL;
	int8_t x603 = INT8_MIN;
	static volatile int32_t t17 = 686158713;

	t17 = ((x601<(x602+x603))<<x604);

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x610 = -1LL;
	int32_t t18 = -40;

	t18 = ((x609<(x610+x611))<<x612);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x621 = -1;
	static uint8_t x624 = 27U;
	volatile int32_t t19 = 161;

	t19 = ((x621<(x622+x623))<<x624);

	if (t19 != 134217728) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x653 = INT8_MAX;
	static int16_t x654 = -1;
	volatile uint16_t x655 = 55U;
	uint8_t x656 = 0U;
	static volatile int32_t t20 = -663;

	t20 = ((x653<(x654+x655))<<x656);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x661 = -259758;
	uint16_t x662 = 839U;
	int8_t x663 = -20;
	uint8_t x664 = 5U;
	volatile int32_t t21 = 2021683;

	t21 = ((x661<(x662+x663))<<x664);

	if (t21 != 32) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x677 = UINT32_MAX;
	int64_t x679 = 1025230LL;
	volatile int16_t x680 = 0;
	volatile int32_t t22 = -2;

	t22 = ((x677<(x678+x679))<<x680);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x687 = INT8_MIN;
	uint16_t x688 = 0U;
	int32_t t23 = -154933396;

	t23 = ((x685<(x686+x687))<<x688);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x737 = 8273U;
	volatile int8_t x738 = 8;
	volatile int8_t x739 = INT8_MIN;
	volatile uint8_t x740 = 23U;
	volatile int32_t t24 = 187163890;

	t24 = ((x737<(x738+x739))<<x740);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x749 = -1;
	int16_t x750 = 401;
	uint8_t x751 = 16U;
	uint8_t x752 = 7U;
	volatile int32_t t25 = -651465;

	t25 = ((x749<(x750+x751))<<x752);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x765 = 0U;
	int16_t x767 = INT16_MIN;
	volatile int32_t t26 = -468;

	t26 = ((x765<(x766+x767))<<x768);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x786 = INT16_MIN;
	uint16_t x787 = 6759U;
	volatile int32_t t27 = -1641;

	t27 = ((x785<(x786+x787))<<x788);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x790 = -1;
	static uint64_t x791 = 117035LLU;
	static uint8_t x792 = 14U;

	t28 = ((x789<(x790+x791))<<x792);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x810 = -1LL;
	volatile int64_t x811 = -30846395833048LL;
	static int32_t t29 = -31402;

	t29 = ((x809<(x810+x811))<<x812);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x814 = 57U;
	uint16_t x815 = UINT16_MAX;
	volatile int32_t t30 = 163920;

	t30 = ((x813<(x814+x815))<<x816);

	if (t30 != 1073741824) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x821 = -1;
	static int8_t x822 = 1;
	static int64_t x823 = -9302LL;
	int16_t x824 = 0;
	int32_t t31 = 874;

	t31 = ((x821<(x822+x823))<<x824);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x849 = -1;
	uint16_t x850 = UINT16_MAX;
	uint64_t x851 = UINT64_MAX;
	static int8_t x852 = 7;
	volatile int32_t t32 = 95727;

	t32 = ((x849<(x850+x851))<<x852);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x857 = UINT64_MAX;
	uint32_t x858 = 244556645U;
	uint8_t x860 = 3U;
	volatile int32_t t33 = 3217;

	t33 = ((x857<(x858+x859))<<x860);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x870 = 48U;
	volatile int32_t t34 = -295446201;

	t34 = ((x869<(x870+x871))<<x872);

	if (t34 != 262144) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x901 = 3567U;
	int32_t x902 = INT32_MIN;
	static uint64_t x903 = 4113822493747824LLU;
	volatile uint8_t x904 = 7U;
	volatile int32_t t35 = 6;

	t35 = ((x901<(x902+x903))<<x904);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x1002 = INT8_MIN;
	int32_t x1003 = -1;
	uint32_t x1004 = 12U;
	int32_t t36 = 1;

	t36 = ((x1001<(x1002+x1003))<<x1004);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1033 = INT64_MIN;
	uint16_t x1034 = 54U;
	int32_t x1035 = INT32_MIN;
	volatile int32_t t37 = 1456629;

	t37 = ((x1033<(x1034+x1035))<<x1036);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1037 = UINT8_MAX;
	static int64_t x1038 = -1LL;
	uint8_t x1040 = 0U;
	volatile int32_t t38 = 349;

	t38 = ((x1037<(x1038+x1039))<<x1040);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1049 = INT16_MIN;
	int64_t x1051 = -3315384LL;
	uint8_t x1052 = 31U;
	static int32_t t39 = 774126490;

	t39 = ((x1049<(x1050+x1051))<<x1052);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1125 = 533416567U;
	uint64_t x1126 = UINT64_MAX;
	int64_t x1127 = -169483852LL;
	uint8_t x1128 = 4U;
	volatile int32_t t40 = 3577;

	t40 = ((x1125<(x1126+x1127))<<x1128);

	if (t40 != 16) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1133 = INT16_MAX;
	uint8_t x1134 = 3U;
	uint64_t x1135 = 1049699LLU;
	static volatile int16_t x1136 = 0;
	int32_t t41 = -171;

	t41 = ((x1133<(x1134+x1135))<<x1136);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1157 = INT8_MAX;
	uint8_t x1159 = UINT8_MAX;
	uint8_t x1160 = 27U;
	volatile int32_t t42 = -2;

	t42 = ((x1157<(x1158+x1159))<<x1160);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1255 = UINT8_MAX;
	int32_t x1256 = 1;
	int32_t t43 = 10152015;

	t43 = ((x1253<(x1254+x1255))<<x1256);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1281 = -1904;
	volatile int32_t t44 = 837;

	t44 = ((x1281<(x1282+x1283))<<x1284);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1285 = 7987U;
	static volatile int32_t x1287 = -3526291;
	uint8_t x1288 = 1U;
	volatile int32_t t45 = 98;

	t45 = ((x1285<(x1286+x1287))<<x1288);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1313 = INT8_MAX;
	static int16_t x1315 = -1;
	int64_t x1316 = 1LL;
	int32_t t46 = 21;

	t46 = ((x1313<(x1314+x1315))<<x1316);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1325 = UINT16_MAX;
	static int64_t x1327 = -1LL;
	uint32_t x1328 = 7U;
	volatile int32_t t47 = 126;

	t47 = ((x1325<(x1326+x1327))<<x1328);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1345 = 37U;
	static int16_t x1346 = INT16_MIN;
	static volatile int64_t x1347 = -1LL;
	uint8_t x1348 = 2U;
	volatile int32_t t48 = -414318853;

	t48 = ((x1345<(x1346+x1347))<<x1348);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1351 = -6644225636167866LL;
	uint32_t x1352 = 1U;
	volatile int32_t t49 = 762936401;

	t49 = ((x1349<(x1350+x1351))<<x1352);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1401 = -1LL;
	static uint32_t x1402 = 72871U;
	int32_t x1403 = INT32_MIN;
	volatile uint8_t x1404 = 3U;

	t50 = ((x1401<(x1402+x1403))<<x1404);

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1405 = 29;
	static int16_t x1406 = -17;
	volatile int32_t x1407 = INT32_MAX;
	int8_t x1408 = 18;
	int32_t t51 = -87;

	t51 = ((x1405<(x1406+x1407))<<x1408);

	if (t51 != 262144) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1473 = INT32_MAX;
	static volatile uint16_t x1474 = UINT16_MAX;
	uint8_t x1476 = 22U;
	volatile int32_t t52 = 1023648603;

	t52 = ((x1473<(x1474+x1475))<<x1476);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1561 = 2U;
	int8_t x1562 = INT8_MAX;
	int8_t x1564 = 1;
	volatile int32_t t53 = -53354551;

	t53 = ((x1561<(x1562+x1563))<<x1564);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1593 = INT32_MIN;
	int16_t x1594 = 1395;
	volatile int64_t x1595 = INT64_MIN;
	int16_t x1596 = 1;

	t54 = ((x1593<(x1594+x1595))<<x1596);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1617 = INT8_MIN;
	int64_t x1618 = -1LL;
	int8_t x1619 = -10;
	static volatile int32_t t55 = -14246;

	t55 = ((x1617<(x1618+x1619))<<x1620);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1621 = 22523;
	static int64_t x1623 = 0LL;
	uint16_t x1624 = 17U;
	static volatile int32_t t56 = -62475304;

	t56 = ((x1621<(x1622+x1623))<<x1624);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1625 = 372461297237310120LLU;
	static uint64_t x1626 = UINT64_MAX;
	volatile uint8_t x1628 = 6U;

	t57 = ((x1625<(x1626+x1627))<<x1628);

	if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1645 = -1LL;
	uint64_t x1646 = 1467LLU;
	static volatile uint32_t x1648 = 0U;
	volatile int32_t t58 = 7;

	t58 = ((x1645<(x1646+x1647))<<x1648);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1697 = 435LLU;
	int32_t x1698 = INT32_MIN;
	uint16_t x1699 = 32519U;
	static int32_t t59 = 16;

	t59 = ((x1697<(x1698+x1699))<<x1700);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x1709 = INT64_MAX;
	int64_t x1710 = -2770143881147057LL;
	static int32_t x1711 = -1;
	int8_t x1712 = 2;
	static int32_t t60 = -987651738;

	t60 = ((x1709<(x1710+x1711))<<x1712);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1738 = -1;
	int8_t x1740 = 2;
	volatile int32_t t61 = -1;

	t61 = ((x1737<(x1738+x1739))<<x1740);

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1753 = 112LLU;
	volatile int16_t x1754 = 1;
	static int16_t x1755 = -1;
	int32_t x1756 = 5;
	int32_t t62 = -944;

	t62 = ((x1753<(x1754+x1755))<<x1756);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1785 = -1;
	uint32_t x1787 = 385252712U;
	int8_t x1788 = 2;
	volatile int32_t t63 = -15;

	t63 = ((x1785<(x1786+x1787))<<x1788);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1793 = 393U;
	volatile int64_t x1794 = INT64_MAX;
	volatile uint64_t x1795 = 1099617LLU;

	t64 = ((x1793<(x1794+x1795))<<x1796);

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x1837 = 12701413443LLU;
	uint32_t x1838 = UINT32_MAX;
	int64_t x1839 = -14097LL;
	uint8_t x1840 = 8U;
	int32_t t65 = 9;

	t65 = ((x1837<(x1838+x1839))<<x1840);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1853 = -10278LL;
	int32_t x1854 = -1111;
	int64_t x1856 = 0LL;
	volatile int32_t t66 = 24;

	t66 = ((x1853<(x1854+x1855))<<x1856);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1857 = 5;
	volatile uint32_t x1858 = 37U;
	int8_t x1859 = INT8_MIN;
	volatile int32_t t67 = 0;

	t67 = ((x1857<(x1858+x1859))<<x1860);

	if (t67 != 512) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x1861 = 62U;
	static int16_t x1862 = 0;
	int64_t x1863 = -4245342506374323044LL;
	uint32_t x1864 = 3U;
	static int32_t t68 = 551;

	t68 = ((x1861<(x1862+x1863))<<x1864);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x1865 = UINT64_MAX;
	int8_t x1866 = INT8_MIN;
	volatile int16_t x1867 = INT16_MIN;
	volatile int32_t x1868 = 1;
	int32_t t69 = -191;

	t69 = ((x1865<(x1866+x1867))<<x1868);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x1929 = 2492U;
	int16_t x1930 = -1;
	static int8_t x1932 = 1;
	int32_t t70 = 26;

	t70 = ((x1929<(x1930+x1931))<<x1932);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1957 = UINT8_MAX;
	int32_t x1958 = -253567;
	int16_t x1959 = -1;
	volatile int8_t x1960 = 30;
	int32_t t71 = -12567;

	t71 = ((x1957<(x1958+x1959))<<x1960);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1965 = UINT8_MAX;
	volatile int16_t x1966 = INT16_MIN;
	static uint16_t x1967 = 753U;
	uint8_t x1968 = 16U;

	t72 = ((x1965<(x1966+x1967))<<x1968);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2006 = 2U;
	int32_t x2007 = 1;
	int8_t x2008 = 0;
	volatile int32_t t73 = -94907894;

	t73 = ((x2005<(x2006+x2007))<<x2008);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x2119 = 3U;
	uint8_t x2120 = 0U;
	volatile int32_t t74 = 16891152;

	t74 = ((x2117<(x2118+x2119))<<x2120);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x2129 = INT8_MIN;
	int32_t x2130 = -71546993;
	volatile uint8_t x2131 = UINT8_MAX;
	uint32_t x2132 = 6U;

	t75 = ((x2129<(x2130+x2131))<<x2132);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2165 = 4U;
	int64_t x2166 = 1LL;
	static volatile uint8_t x2168 = 19U;
	volatile int32_t t76 = -7;

	t76 = ((x2165<(x2166+x2167))<<x2168);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2173 = 16LLU;
	static uint16_t x2174 = 335U;
	uint8_t x2175 = UINT8_MAX;
	uint64_t x2176 = 2LLU;
	volatile int32_t t77 = 51;

	t77 = ((x2173<(x2174+x2175))<<x2176);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2186 = 7897517U;
	static int32_t t78 = -2013659;

	t78 = ((x2185<(x2186+x2187))<<x2188);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2215 = INT16_MIN;
	static int16_t x2216 = 8;
	static int32_t t79 = -970021;

	t79 = ((x2213<(x2214+x2215))<<x2216);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2261 = INT32_MIN;
	volatile uint32_t x2264 = 19U;
	volatile int32_t t80 = -3;

	t80 = ((x2261<(x2262+x2263))<<x2264);

	if (t80 != 524288) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x2281 = INT16_MIN;
	int32_t x2282 = 4951527;
	int32_t x2283 = 187;
	uint16_t x2284 = 24U;
	int32_t t81 = 7;

	t81 = ((x2281<(x2282+x2283))<<x2284);

	if (t81 != 16777216) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x2289 = INT8_MIN;
	int32_t t82 = 4594;

	t82 = ((x2289<(x2290+x2291))<<x2292);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2357 = -1;
	uint16_t x2358 = UINT16_MAX;
	static uint16_t x2359 = UINT16_MAX;
	int8_t x2360 = 2;
	volatile int32_t t83 = -12194466;

	t83 = ((x2357<(x2358+x2359))<<x2360);

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2369 = INT32_MAX;
	uint16_t x2370 = 12315U;
	int64_t x2371 = -132653435144934161LL;
	static uint8_t x2372 = 0U;
	int32_t t84 = 76653081;

	t84 = ((x2369<(x2370+x2371))<<x2372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2373 = INT8_MAX;
	static uint16_t x2374 = 425U;
	int8_t x2375 = -1;
	static volatile uint8_t x2376 = 8U;
	int32_t t85 = -25044;

	t85 = ((x2373<(x2374+x2375))<<x2376);

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2377 = INT16_MIN;
	uint16_t x2378 = 0U;
	uint32_t x2379 = UINT32_MAX;
	uint16_t x2380 = 1U;

	t86 = ((x2377<(x2378+x2379))<<x2380);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2397 = UINT8_MAX;
	static int8_t x2399 = INT8_MAX;
	volatile int16_t x2400 = 0;
	int32_t t87 = 10;

	t87 = ((x2397<(x2398+x2399))<<x2400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2417 = INT16_MAX;
	int16_t x2418 = INT16_MAX;
	volatile int8_t x2419 = 2;
	volatile uint8_t x2420 = 6U;
	int32_t t88 = -30;

	t88 = ((x2417<(x2418+x2419))<<x2420);

	if (t88 != 64) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x2438 = 397U;
	int64_t x2439 = -1LL;
	static uint16_t x2440 = 3U;
	volatile int32_t t89 = -9387861;

	t89 = ((x2437<(x2438+x2439))<<x2440);

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2446 = 3;
	static volatile int32_t x2447 = -17;
	static int8_t x2448 = 3;
	volatile int32_t t90 = 1898;

	t90 = ((x2445<(x2446+x2447))<<x2448);

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2453 = -1;
	int16_t x2454 = INT16_MIN;
	int32_t x2455 = -42;
	static int32_t t91 = 14;

	t91 = ((x2453<(x2454+x2455))<<x2456);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2469 = 250495910;
	int16_t x2470 = -1;
	int8_t x2471 = INT8_MAX;
	uint8_t x2472 = 3U;
	volatile int32_t t92 = -2086353;

	t92 = ((x2469<(x2470+x2471))<<x2472);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2509 = -1LL;
	int16_t x2510 = -14;
	uint8_t x2512 = 7U;
	volatile int32_t t93 = -73880;

	t93 = ((x2509<(x2510+x2511))<<x2512);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2561 = 15656U;
	int64_t x2562 = -3367823378LL;
	static uint32_t x2563 = UINT32_MAX;
	static volatile uint16_t x2564 = 0U;
	volatile int32_t t94 = -16236;

	t94 = ((x2561<(x2562+x2563))<<x2564);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2617 = INT64_MIN;
	int64_t x2618 = -1LL;
	int32_t x2619 = 84396;
	uint8_t x2620 = 4U;
	volatile int32_t t95 = 1873;

	t95 = ((x2617<(x2618+x2619))<<x2620);

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2645 = INT16_MAX;
	uint8_t x2646 = UINT8_MAX;
	int64_t x2647 = -885561363991LL;
	static volatile int16_t x2648 = 1;
	volatile int32_t t96 = -416;

	t96 = ((x2645<(x2646+x2647))<<x2648);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2658 = INT32_MAX;
	int64_t x2659 = -1531995306LL;
	uint16_t x2660 = 2U;
	volatile int32_t t97 = 0;

	t97 = ((x2657<(x2658+x2659))<<x2660);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2705 = -9183001;
	uint8_t x2708 = 0U;
	volatile int32_t t98 = 1;

	t98 = ((x2705<(x2706+x2707))<<x2708);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2769 = 13871805675878LLU;
	static int16_t x2770 = -2;
	uint8_t x2771 = 2U;

	t99 = ((x2769<(x2770+x2771))<<x2772);

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


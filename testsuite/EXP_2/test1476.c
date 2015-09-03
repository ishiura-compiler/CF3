#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x92 = 0U;
int8_t x184 = 2;
int32_t t5 = 395193820;
uint8_t x207 = UINT8_MAX;
uint8_t x249 = UINT8_MAX;
int32_t x250 = INT32_MIN;
static int32_t t7 = -653;
int16_t x272 = 1;
int16_t x293 = INT16_MAX;
uint8_t x299 = 58U;
uint8_t x300 = 10U;
uint8_t x308 = 0U;
int8_t x330 = 3;
int16_t x385 = INT16_MAX;
static volatile uint8_t x388 = 6U;
static int64_t x394 = -1LL;
int32_t t17 = 235;
static int64_t x453 = 290792675LL;
uint16_t x472 = 1U;
static uint64_t x493 = UINT64_MAX;
int8_t x495 = 19;
uint8_t x620 = 16U;
int16_t x754 = INT16_MIN;
volatile int32_t t29 = 40690366;
static int8_t x850 = -5;
volatile uint16_t x1008 = 3U;
int16_t x1043 = -421;
volatile int32_t x1044 = 0;
static int32_t t36 = -62;
int16_t x1069 = INT16_MAX;
uint16_t x1071 = 126U;
volatile uint8_t x1072 = 4U;
int32_t x1091 = INT32_MIN;
volatile uint64_t x1157 = 19229495LLU;
volatile int8_t x1261 = -1;
static int16_t x1262 = INT16_MAX;
volatile int32_t t42 = 22466;
uint32_t x1271 = UINT32_MAX;
int32_t x1272 = 0;
uint8_t x1312 = 8U;
int16_t x1341 = INT16_MIN;
int8_t x1394 = 0;
int8_t x1395 = -3;
int8_t x1406 = INT8_MIN;
volatile int16_t x1447 = 420;
static uint8_t x1448 = 0U;
int8_t x1492 = 11;
int64_t x1546 = INT64_MAX;
uint8_t x1547 = 25U;
uint8_t x1548 = 1U;
int32_t t53 = 1;
int8_t x1641 = -1;
uint32_t x1642 = 1868152U;
int16_t x1643 = INT16_MIN;
volatile int32_t t55 = 42;
int8_t x1808 = 26;
int8_t x1821 = INT8_MIN;
static uint32_t x1822 = 19U;
volatile int32_t x1864 = 1;
volatile uint16_t x1889 = 22513U;
uint32_t x2103 = UINT32_MAX;
volatile uint64_t x2121 = UINT64_MAX;
static uint16_t x2129 = 1U;
int16_t x2169 = -310;
int16_t x2170 = INT16_MIN;
static uint16_t x2172 = 12U;
static volatile int8_t x2221 = INT8_MIN;
uint16_t x2258 = 1U;
int8_t x2287 = INT8_MIN;
static volatile uint16_t x2315 = 55U;
static uint64_t x2317 = 1225734912LLU;
uint16_t x2319 = UINT16_MAX;
static int32_t t79 = 132308904;
int32_t t80 = 10299742;
int16_t x2415 = INT16_MIN;
volatile int16_t x2416 = 1;
uint16_t x2459 = 480U;
volatile int32_t t83 = 928781782;
uint16_t x2507 = 1U;
volatile int64_t x2613 = 304110337LL;
static uint16_t x2616 = 6U;
int32_t x2639 = INT32_MIN;
int64_t x2653 = 1LL;
uint16_t x2654 = UINT16_MAX;
volatile int32_t t88 = -523213;
int16_t x2718 = -1;
int16_t x2719 = INT16_MIN;
int8_t x2752 = 1;
uint64_t x2758 = 3037295076927247LLU;
uint32_t x2760 = 6U;
uint64_t x2798 = 1602591710170LLU;
volatile uint16_t x2849 = UINT16_MAX;
volatile uint64_t x2881 = 30133092LLU;
int16_t x2882 = INT16_MIN;
static uint16_t x2885 = 5U;
uint64_t x2887 = 486205LLU;


void f0(void) {
	volatile int32_t x89 = -1;
	int8_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	volatile int32_t t0 = -144364031;

	t0 = ((x89<=(x90<x91))>>x92);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x98 = -156992LL;
	int32_t x99 = INT32_MIN;
	static uint16_t x100 = 3U;
	int32_t t1 = -252146566;

	t1 = ((x97<=(x98<x99))>>x100);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x101 = 9U;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = 1;
	uint32_t x104 = 0U;
	volatile int32_t t2 = -456;

	t2 = ((x101<=(x102<x103))>>x104);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x129 = INT64_MIN;
	static volatile int8_t x130 = 8;
	int16_t x131 = INT16_MIN;
	int8_t x132 = 1;
	int32_t t3 = -668198988;

	t3 = ((x129<=(x130<x131))>>x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x177 = 7963LL;
	uint16_t x178 = 143U;
	uint16_t x179 = 12U;
	int8_t x180 = 0;
	volatile int32_t t4 = 10455499;

	t4 = ((x177<=(x178<x179))>>x180);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x181 = 10U;
	uint64_t x182 = UINT64_MAX;
	static int32_t x183 = INT32_MAX;

	t5 = ((x181<=(x182<x183))>>x184);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x205 = 112;
	static uint8_t x206 = UINT8_MAX;
	static int8_t x208 = 1;
	volatile int32_t t6 = -7450995;

	t6 = ((x205<=(x206<x207))>>x208);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x251 = INT8_MAX;
	static volatile uint32_t x252 = 1U;

	t7 = ((x249<=(x250<x251))>>x252);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x269 = 84U;
	uint64_t x270 = UINT64_MAX;
	volatile int64_t x271 = INT64_MIN;
	int32_t t8 = -77;

	t8 = ((x269<=(x270<x271))>>x272);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x277 = INT64_MAX;
	volatile uint16_t x278 = UINT16_MAX;
	int32_t x279 = 1467;
	uint16_t x280 = 16U;
	volatile int32_t t9 = 1417461;

	t9 = ((x277<=(x278<x279))>>x280);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = 20754;
	volatile uint8_t x283 = 22U;
	int64_t x284 = 5LL;
	int32_t t10 = -218585;

	t10 = ((x281<=(x282<x283))>>x284);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x285 = -18;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = 5940585U;
	static uint16_t x288 = 11U;
	volatile int32_t t11 = 30946;

	t11 = ((x285<=(x286<x287))>>x288);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x294 = -17970462LL;
	static volatile uint8_t x295 = 2U;
	static uint8_t x296 = 6U;
	static int32_t t12 = 288;

	t12 = ((x293<=(x294<x295))>>x296);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = 1;
	int32_t t13 = 122;

	t13 = ((x297<=(x298<x299))>>x300);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x305 = INT64_MAX;
	int8_t x306 = -1;
	int8_t x307 = -24;
	volatile int32_t t14 = 0;

	t14 = ((x305<=(x306<x307))>>x308);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x329 = 575865753LLU;
	int64_t x331 = 232600421LL;
	int8_t x332 = 1;
	static volatile int32_t t15 = -1041711;

	t15 = ((x329<=(x330<x331))>>x332);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x386 = UINT64_MAX;
	volatile uint32_t x387 = 4922U;
	volatile int32_t t16 = 47;

	t16 = ((x385<=(x386<x387))>>x388);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x393 = 18081898LLU;
	uint64_t x395 = 486945779251LLU;
	volatile uint16_t x396 = 12U;

	t17 = ((x393<=(x394<x395))>>x396);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x437 = INT32_MIN;
	uint32_t x438 = UINT32_MAX;
	static int16_t x439 = INT16_MAX;
	uint8_t x440 = 7U;
	volatile int32_t t18 = 638170;

	t18 = ((x437<=(x438<x439))>>x440);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x454 = INT16_MAX;
	int64_t x455 = -219774548LL;
	uint64_t x456 = 0LLU;
	int32_t t19 = -114863;

	t19 = ((x453<=(x454<x455))>>x456);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x457 = INT16_MAX;
	int8_t x458 = -1;
	volatile int64_t x459 = -1LL;
	uint32_t x460 = 3U;
	static volatile int32_t t20 = 404;

	t20 = ((x457<=(x458<x459))>>x460);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x469 = 11469543465LL;
	static int16_t x470 = -1;
	int8_t x471 = 0;
	int32_t t21 = -1;

	t21 = ((x469<=(x470<x471))>>x472);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x477 = INT32_MIN;
	int64_t x478 = INT64_MAX;
	uint64_t x479 = UINT64_MAX;
	static uint16_t x480 = 3U;
	int32_t t22 = 1265;

	t22 = ((x477<=(x478<x479))>>x480);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x494 = INT16_MAX;
	volatile int8_t x496 = 23;
	int32_t t23 = -4465;

	t23 = ((x493<=(x494<x495))>>x496);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x617 = -1;
	int32_t x618 = -1;
	int8_t x619 = INT8_MIN;
	volatile int32_t t24 = -16;

	t24 = ((x617<=(x618<x619))>>x620);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x661 = UINT8_MAX;
	uint8_t x662 = UINT8_MAX;
	volatile uint32_t x663 = UINT32_MAX;
	int8_t x664 = 1;
	int32_t t25 = 13;

	t25 = ((x661<=(x662<x663))>>x664);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x713 = 1U;
	volatile int32_t x714 = INT32_MAX;
	volatile int32_t x715 = INT32_MIN;
	uint8_t x716 = 0U;
	int32_t t26 = 922325727;

	t26 = ((x713<=(x714<x715))>>x716);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x729 = INT32_MIN;
	static uint64_t x730 = UINT64_MAX;
	uint64_t x731 = 13688LLU;
	volatile uint16_t x732 = 4U;
	int32_t t27 = 0;

	t27 = ((x729<=(x730<x731))>>x732);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x753 = UINT32_MAX;
	static volatile int32_t x755 = INT32_MIN;
	static uint8_t x756 = 0U;
	int32_t t28 = 1;

	t28 = ((x753<=(x754<x755))>>x756);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x769 = 39;
	int8_t x770 = 22;
	int16_t x771 = INT16_MIN;
	uint8_t x772 = 18U;

	t29 = ((x769<=(x770<x771))>>x772);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x825 = INT32_MAX;
	static int16_t x826 = -854;
	uint16_t x827 = 7678U;
	uint64_t x828 = 1LLU;
	int32_t t30 = -236990;

	t30 = ((x825<=(x826<x827))>>x828);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x849 = INT8_MIN;
	static uint8_t x851 = 2U;
	static uint16_t x852 = 7U;
	static int32_t t31 = 18;

	t31 = ((x849<=(x850<x851))>>x852);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x889 = 81387U;
	static int8_t x890 = -39;
	volatile uint8_t x891 = 6U;
	static uint8_t x892 = 1U;
	int32_t t32 = -45545;

	t32 = ((x889<=(x890<x891))>>x892);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x941 = -1LL;
	uint64_t x942 = 343187738LLU;
	int32_t x943 = -1;
	int16_t x944 = 5;
	volatile int32_t t33 = 27;

	t33 = ((x941<=(x942<x943))>>x944);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x949 = 2310806069655517LL;
	static volatile int64_t x950 = INT64_MIN;
	static int16_t x951 = INT16_MAX;
	uint32_t x952 = 15U;
	int32_t t34 = 1345207;

	t34 = ((x949<=(x950<x951))>>x952);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1005 = INT64_MIN;
	uint16_t x1006 = 9U;
	static int8_t x1007 = INT8_MIN;
	int32_t t35 = 4853;

	t35 = ((x1005<=(x1006<x1007))>>x1008);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1041 = UINT32_MAX;
	volatile int8_t x1042 = 23;

	t36 = ((x1041<=(x1042<x1043))>>x1044);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1070 = INT16_MAX;
	int32_t t37 = -1331;

	t37 = ((x1069<=(x1070<x1071))>>x1072);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1089 = INT64_MAX;
	volatile uint64_t x1090 = 18197748478LLU;
	int16_t x1092 = 1;
	volatile int32_t t38 = 2;

	t38 = ((x1089<=(x1090<x1091))>>x1092);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1149 = INT8_MIN;
	int16_t x1150 = -1;
	static volatile int32_t x1151 = INT32_MAX;
	uint16_t x1152 = 28U;
	int32_t t39 = -3;

	t39 = ((x1149<=(x1150<x1151))>>x1152);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1158 = -1;
	volatile int16_t x1159 = INT16_MAX;
	volatile int32_t x1160 = 1;
	int32_t t40 = -926483684;

	t40 = ((x1157<=(x1158<x1159))>>x1160);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1193 = INT8_MIN;
	int8_t x1194 = 1;
	int8_t x1195 = 1;
	static uint64_t x1196 = 6LLU;
	int32_t t41 = 60635108;

	t41 = ((x1193<=(x1194<x1195))>>x1196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1263 = 31;
	uint8_t x1264 = 16U;

	t42 = ((x1261<=(x1262<x1263))>>x1264);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x1269 = -1;
	uint16_t x1270 = 496U;
	int32_t t43 = 3495;

	t43 = ((x1269<=(x1270<x1271))>>x1272);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1309 = UINT64_MAX;
	uint16_t x1310 = 4415U;
	static int32_t x1311 = INT32_MIN;
	static volatile int32_t t44 = 830419322;

	t44 = ((x1309<=(x1310<x1311))>>x1312);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1342 = 3U;
	int64_t x1343 = 14179118287LL;
	uint16_t x1344 = 0U;
	int32_t t45 = 6409;

	t45 = ((x1341<=(x1342<x1343))>>x1344);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1365 = 0;
	uint64_t x1366 = 92605LLU;
	static int32_t x1367 = -36761;
	volatile uint32_t x1368 = 3U;
	int32_t t46 = -1684326;

	t46 = ((x1365<=(x1366<x1367))>>x1368);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1393 = -2023;
	int16_t x1396 = 2;
	int32_t t47 = -1;

	t47 = ((x1393<=(x1394<x1395))>>x1396);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1405 = UINT32_MAX;
	int32_t x1407 = INT32_MIN;
	int8_t x1408 = 1;
	int32_t t48 = -1;

	t48 = ((x1405<=(x1406<x1407))>>x1408);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1445 = 3247LLU;
	int32_t x1446 = INT32_MAX;
	volatile int32_t t49 = 1;

	t49 = ((x1445<=(x1446<x1447))>>x1448);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1453 = -8423429456LL;
	int32_t x1454 = -126797;
	static int16_t x1455 = INT16_MIN;
	uint32_t x1456 = 1U;
	int32_t t50 = -47825587;

	t50 = ((x1453<=(x1454<x1455))>>x1456);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1489 = 6;
	int32_t x1490 = 28073;
	int64_t x1491 = -1LL;
	static volatile int32_t t51 = -162;

	t51 = ((x1489<=(x1490<x1491))>>x1492);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1545 = -1;
	static volatile int32_t t52 = -555105344;

	t52 = ((x1545<=(x1546<x1547))>>x1548);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1577 = 16U;
	uint16_t x1578 = 31U;
	int16_t x1579 = INT16_MIN;
	volatile uint16_t x1580 = 21U;

	t53 = ((x1577<=(x1578<x1579))>>x1580);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1601 = -1;
	static int32_t x1602 = INT32_MIN;
	volatile int16_t x1603 = -1;
	static uint8_t x1604 = 24U;
	static int32_t t54 = -1;

	t54 = ((x1601<=(x1602<x1603))>>x1604);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1644 = 14;

	t55 = ((x1641<=(x1642<x1643))>>x1644);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1729 = INT8_MIN;
	static int8_t x1730 = INT8_MAX;
	int32_t x1731 = -15038314;
	int64_t x1732 = 22LL;
	volatile int32_t t56 = -5;

	t56 = ((x1729<=(x1730<x1731))>>x1732);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x1769 = -2;
	volatile int32_t x1770 = INT32_MIN;
	static int16_t x1771 = -26;
	uint8_t x1772 = 15U;
	static int32_t t57 = -5;

	t57 = ((x1769<=(x1770<x1771))>>x1772);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1805 = INT8_MAX;
	int16_t x1806 = INT16_MAX;
	static uint32_t x1807 = 19U;
	static volatile int32_t t58 = 1;

	t58 = ((x1805<=(x1806<x1807))>>x1808);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1823 = -1;
	static uint16_t x1824 = 0U;
	int32_t t59 = 1;

	t59 = ((x1821<=(x1822<x1823))>>x1824);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1825 = UINT32_MAX;
	int32_t x1826 = -1;
	static int8_t x1827 = INT8_MIN;
	static uint8_t x1828 = 2U;
	volatile int32_t t60 = 23134218;

	t60 = ((x1825<=(x1826<x1827))>>x1828);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1861 = 160548884;
	uint16_t x1862 = 1U;
	static int16_t x1863 = INT16_MIN;
	volatile int32_t t61 = -956;

	t61 = ((x1861<=(x1862<x1863))>>x1864);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1890 = 31;
	int64_t x1891 = -1LL;
	uint32_t x1892 = 1U;
	static int32_t t62 = 1609015;

	t62 = ((x1889<=(x1890<x1891))>>x1892);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1909 = 65918823569667LLU;
	uint16_t x1910 = UINT16_MAX;
	volatile uint16_t x1911 = 122U;
	int8_t x1912 = 1;
	volatile int32_t t63 = -1464941;

	t63 = ((x1909<=(x1910<x1911))>>x1912);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x1969 = -1;
	static int32_t x1970 = 45365;
	uint16_t x1971 = 18U;
	static volatile int8_t x1972 = 4;
	int32_t t64 = 111872695;

	t64 = ((x1969<=(x1970<x1971))>>x1972);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2029 = UINT16_MAX;
	int32_t x2030 = INT32_MAX;
	static int64_t x2031 = INT64_MIN;
	uint64_t x2032 = 30LLU;
	int32_t t65 = -12820;

	t65 = ((x2029<=(x2030<x2031))>>x2032);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2093 = INT16_MAX;
	int32_t x2094 = -1074;
	int8_t x2095 = -1;
	uint8_t x2096 = 0U;
	volatile int32_t t66 = -62738;

	t66 = ((x2093<=(x2094<x2095))>>x2096);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x2101 = 255U;
	volatile uint32_t x2102 = 3550U;
	static uint8_t x2104 = 2U;
	int32_t t67 = 1;

	t67 = ((x2101<=(x2102<x2103))>>x2104);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2122 = -1;
	uint8_t x2123 = 1U;
	uint16_t x2124 = 15U;
	int32_t t68 = 1011;

	t68 = ((x2121<=(x2122<x2123))>>x2124);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2130 = -1LL;
	volatile int16_t x2131 = -3;
	uint8_t x2132 = 1U;
	int32_t t69 = 16;

	t69 = ((x2129<=(x2130<x2131))>>x2132);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2137 = INT32_MAX;
	int64_t x2138 = -1LL;
	uint16_t x2139 = 6U;
	volatile uint8_t x2140 = 12U;
	static int32_t t70 = 1;

	t70 = ((x2137<=(x2138<x2139))>>x2140);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2171 = -1;
	int32_t t71 = 6584897;

	t71 = ((x2169<=(x2170<x2171))>>x2172);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x2197 = UINT8_MAX;
	int32_t x2198 = INT32_MAX;
	int8_t x2199 = 2;
	static uint8_t x2200 = 1U;
	volatile int32_t t72 = -940;

	t72 = ((x2197<=(x2198<x2199))>>x2200);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2222 = -1;
	static uint8_t x2223 = UINT8_MAX;
	uint32_t x2224 = 13U;
	volatile int32_t t73 = -28638;

	t73 = ((x2221<=(x2222<x2223))>>x2224);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2233 = -12839;
	int8_t x2234 = INT8_MAX;
	int32_t x2235 = INT32_MIN;
	volatile uint8_t x2236 = 18U;
	volatile int32_t t74 = -33;

	t74 = ((x2233<=(x2234<x2235))>>x2236);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2257 = 0U;
	uint32_t x2259 = 286495322U;
	static int8_t x2260 = 5;
	int32_t t75 = 7;

	t75 = ((x2257<=(x2258<x2259))>>x2260);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2285 = 100U;
	volatile uint64_t x2286 = 2520538LLU;
	uint16_t x2288 = 9U;
	static volatile int32_t t76 = -22209;

	t76 = ((x2285<=(x2286<x2287))>>x2288);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2313 = 9U;
	int32_t x2314 = INT32_MAX;
	volatile uint16_t x2316 = 24U;
	int32_t t77 = -30576;

	t77 = ((x2313<=(x2314<x2315))>>x2316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2318 = INT8_MAX;
	uint8_t x2320 = 10U;
	static volatile int32_t t78 = -4440672;

	t78 = ((x2317<=(x2318<x2319))>>x2320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2369 = INT16_MAX;
	uint64_t x2370 = 10839462LLU;
	uint16_t x2371 = UINT16_MAX;
	int8_t x2372 = 0;

	t79 = ((x2369<=(x2370<x2371))>>x2372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2377 = INT64_MIN;
	uint32_t x2378 = UINT32_MAX;
	static int16_t x2379 = -1;
	volatile int8_t x2380 = 1;

	t80 = ((x2377<=(x2378<x2379))>>x2380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2413 = 54140934693903LLU;
	int64_t x2414 = -1LL;
	static int32_t t81 = 95;

	t81 = ((x2413<=(x2414<x2415))>>x2416);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2441 = INT8_MIN;
	uint32_t x2442 = UINT32_MAX;
	static uint32_t x2443 = 1U;
	uint8_t x2444 = 3U;
	static int32_t t82 = -8;

	t82 = ((x2441<=(x2442<x2443))>>x2444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2457 = -28;
	static int32_t x2458 = INT32_MIN;
	int8_t x2460 = 29;

	t83 = ((x2457<=(x2458<x2459))>>x2460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x2505 = -1;
	int64_t x2506 = INT64_MIN;
	int16_t x2508 = 9;
	volatile int32_t t84 = -6537;

	t84 = ((x2505<=(x2506<x2507))>>x2508);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x2565 = UINT16_MAX;
	int32_t x2566 = -37174;
	static int64_t x2567 = INT64_MIN;
	int8_t x2568 = 17;
	int32_t t85 = -1;

	t85 = ((x2565<=(x2566<x2567))>>x2568);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x2614 = INT32_MAX;
	int8_t x2615 = INT8_MAX;
	int32_t t86 = 121;

	t86 = ((x2613<=(x2614<x2615))>>x2616);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x2637 = 24408322LLU;
	uint8_t x2638 = UINT8_MAX;
	int16_t x2640 = 2;
	static int32_t t87 = -25581;

	t87 = ((x2637<=(x2638<x2639))>>x2640);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2655 = 26314369640LL;
	static uint8_t x2656 = 3U;

	t88 = ((x2653<=(x2654<x2655))>>x2656);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x2693 = UINT64_MAX;
	int64_t x2694 = INT64_MIN;
	int16_t x2695 = INT16_MIN;
	uint64_t x2696 = 12LLU;
	volatile int32_t t89 = -55132005;

	t89 = ((x2693<=(x2694<x2695))>>x2696);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2717 = 41;
	static int16_t x2720 = 5;
	volatile int32_t t90 = 2;

	t90 = ((x2717<=(x2718<x2719))>>x2720);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x2725 = UINT64_MAX;
	int64_t x2726 = INT64_MIN;
	uint64_t x2727 = 7327240290840236886LLU;
	int8_t x2728 = 0;
	int32_t t91 = 47;

	t91 = ((x2725<=(x2726<x2727))>>x2728);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2749 = UINT16_MAX;
	volatile uint64_t x2750 = 582571791446118989LLU;
	int8_t x2751 = 3;
	int32_t t92 = 6;

	t92 = ((x2749<=(x2750<x2751))>>x2752);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x2757 = 184189U;
	static volatile int64_t x2759 = INT64_MAX;
	volatile int32_t t93 = -27;

	t93 = ((x2757<=(x2758<x2759))>>x2760);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2761 = 28904613288054144LLU;
	volatile int8_t x2762 = -1;
	volatile int16_t x2763 = INT16_MAX;
	uint8_t x2764 = 0U;
	static int32_t t94 = -75;

	t94 = ((x2761<=(x2762<x2763))>>x2764);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x2797 = UINT32_MAX;
	int32_t x2799 = -46569070;
	int8_t x2800 = 10;
	int32_t t95 = -3;

	t95 = ((x2797<=(x2798<x2799))>>x2800);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2837 = INT64_MIN;
	static uint64_t x2838 = 765218053003400LLU;
	volatile int64_t x2839 = INT64_MAX;
	volatile uint8_t x2840 = 4U;
	volatile int32_t t96 = 69;

	t96 = ((x2837<=(x2838<x2839))>>x2840);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2850 = INT64_MAX;
	uint8_t x2851 = UINT8_MAX;
	volatile uint8_t x2852 = 4U;
	static volatile int32_t t97 = -3901;

	t97 = ((x2849<=(x2850<x2851))>>x2852);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x2883 = 288075285262476379LLU;
	volatile uint16_t x2884 = 2U;
	volatile int32_t t98 = -295838046;

	t98 = ((x2881<=(x2882<x2883))>>x2884);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2886 = 58U;
	volatile int8_t x2888 = 1;
	int32_t t99 = -1;

	t99 = ((x2885<=(x2886<x2887))>>x2888);

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


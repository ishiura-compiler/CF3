#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x94 = 1U;
static uint8_t x95 = 1U;
uint8_t x97 = 5U;
uint64_t x99 = UINT64_MAX;
uint8_t x164 = 16U;
static uint64_t x199 = UINT64_MAX;
int16_t x233 = 27;
uint64_t x234 = UINT64_MAX;
int32_t t9 = 886;
volatile uint8_t x382 = UINT8_MAX;
int32_t x428 = 1;
int32_t t12 = -3230350;
int64_t x431 = INT64_MAX;
int32_t t13 = 66620;
int32_t t15 = -4036040;
int32_t t16 = -3544800;
uint8_t x567 = 0U;
uint64_t x590 = 1973161828359729LLU;
int8_t x591 = INT8_MIN;
volatile int32_t t18 = 1176;
uint64_t x614 = 187LLU;
int32_t t19 = -714934744;
int8_t x617 = INT8_MAX;
uint8_t x688 = 13U;
int16_t x722 = INT16_MIN;
int64_t x723 = 6774510LL;
volatile uint64_t x766 = 29408852LLU;
int8_t x767 = INT8_MAX;
static int64_t t29 = 987975219LL;
uint16_t x881 = 1912U;
static int16_t x884 = 1;
int32_t t32 = 573975;
uint8_t x968 = 29U;
volatile int32_t t33 = 134999;
int8_t x977 = INT8_MIN;
int8_t x1018 = -25;
volatile int16_t x1020 = 0;
int32_t t36 = 320;
int32_t t39 = -2;
volatile int64_t x1157 = 1LL;
int32_t x1178 = INT32_MIN;
int32_t t42 = 9668;
static volatile int32_t x1195 = INT32_MIN;
static int32_t t43 = -324;
uint8_t x1272 = 1U;
static int32_t t47 = 405189;
int32_t t48 = 216;
volatile int32_t t49 = -3;
int8_t x1402 = 0;
volatile int8_t x1420 = 10;
volatile int32_t x1492 = 14;
static uint8_t x1495 = 15U;
uint32_t x1504 = 1U;
uint64_t x1523 = 61430987676979LLU;
volatile int16_t x1675 = INT16_MAX;
int64_t t58 = -8002935527977LL;
int8_t x1723 = 3;
uint32_t x1811 = 235149574U;
static uint16_t x1824 = 1U;
volatile uint64_t x1965 = UINT64_MAX;
uint64_t x1966 = UINT64_MAX;
int32_t x1967 = INT32_MAX;
int64_t x2018 = 2206758717544LL;
static int32_t t69 = 86;
volatile int32_t t72 = 23752;
int32_t t74 = 32;
int32_t x2242 = -770003161;
volatile uint64_t t75 = 0LLU;
uint16_t x2255 = 5582U;
uint32_t x2256 = 6U;
uint16_t x2289 = 73U;
int8_t x2292 = 0;
static volatile uint64_t x2387 = UINT64_MAX;
static volatile uint32_t t81 = 121740450U;
volatile int32_t t85 = 108121;
static int64_t x2573 = -1LL;
static int32_t x2574 = INT32_MAX;
static int16_t x2594 = -1;
volatile int64_t x2595 = 78429987885196587LL;
int32_t t89 = 4750408;
int32_t x2678 = INT32_MIN;
int64_t x2713 = -1LL;
static uint16_t x2738 = 44U;
volatile int32_t x2750 = 1;
uint8_t x2813 = 8U;
uint16_t x2814 = 4845U;


void f0(void) {
	uint32_t x1 = 148U;
	static volatile int8_t x2 = INT8_MIN;
	int8_t x3 = -1;
	uint8_t x4 = 1U;
	volatile uint32_t t0 = 15U;

	t0 = (x1&((x2<x3)<<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x61 = -1LL;
	uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = INT8_MIN;
	uint16_t x64 = 2U;
	volatile int64_t t1 = 84520LL;

	t1 = (x61&((x62<x63)<<x64));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x93 = 3015064027909265LLU;
	volatile int32_t x96 = 1;
	uint64_t t2 = 1132936LLU;

	t2 = (x93&((x94<x95)<<x96));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x98 = -1LL;
	volatile int16_t x100 = 1;
	volatile int32_t t3 = -2926;

	t3 = (x97&((x98<x99)<<x100));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x117 = INT32_MAX;
	int64_t x118 = -1615477037306892LL;
	int32_t x119 = -1;
	uint64_t x120 = 3LLU;
	volatile int32_t t4 = -1524464;

	t4 = (x117&((x118<x119)<<x120));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x161 = INT32_MAX;
	volatile int64_t x162 = INT64_MAX;
	int32_t x163 = -1;
	static volatile int32_t t5 = 53249;

	t5 = (x161&((x162<x163)<<x164));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = INT32_MAX;
	uint8_t x200 = 3U;
	volatile int32_t t6 = 0;

	t6 = (x197&((x198<x199)<<x200));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x235 = INT16_MIN;
	int8_t x236 = 0;
	volatile int32_t t7 = 3;

	t7 = (x233&((x234<x235)<<x236));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x293 = INT16_MAX;
	static volatile int16_t x294 = INT16_MIN;
	static int16_t x295 = INT16_MAX;
	uint16_t x296 = 1U;
	volatile int32_t t8 = 994750832;

	t8 = (x293&((x294<x295)<<x296));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	volatile int16_t x363 = INT16_MAX;
	int32_t x364 = 10;

	t9 = (x361&((x362<x363)<<x364));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x381 = 63110986310813LLU;
	static int64_t x383 = 48747882LL;
	static uint32_t x384 = 0U;
	static uint64_t t10 = 8166933889LLU;

	t10 = (x381&((x382<x383)<<x384));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x405 = INT8_MIN;
	volatile uint64_t x406 = UINT64_MAX;
	static int64_t x407 = 213606875602357963LL;
	uint16_t x408 = 4U;
	volatile int32_t t11 = -45;

	t11 = (x405&((x406<x407)<<x408));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x425 = INT32_MIN;
	static volatile uint32_t x426 = 21476U;
	uint64_t x427 = 284551894757343525LLU;

	t12 = (x425&((x426<x427)<<x428));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	uint8_t x432 = 0U;

	t13 = (x429&((x430<x431)<<x432));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x433 = -1;
	static uint16_t x434 = 63U;
	uint16_t x435 = 23U;
	uint8_t x436 = 20U;
	int32_t t14 = -120255880;

	t14 = (x433&((x434<x435)<<x436));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x453 = UINT16_MAX;
	uint16_t x454 = 573U;
	int64_t x455 = 3178432LL;
	int8_t x456 = 30;

	t15 = (x453&((x454<x455)<<x456));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x461 = INT16_MIN;
	static volatile int32_t x462 = INT32_MIN;
	int32_t x463 = 229721870;
	uint32_t x464 = 1U;

	t16 = (x461&((x462<x463)<<x464));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x565 = -58;
	uint8_t x566 = 7U;
	volatile uint32_t x568 = 0U;
	volatile int32_t t17 = 1;

	t17 = (x565&((x566<x567)<<x568));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x589 = -235;
	uint8_t x592 = 27U;

	t18 = (x589&((x590<x591)<<x592));

	if (t18 != 134217728) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x613 = INT32_MIN;
	int16_t x615 = INT16_MIN;
	uint8_t x616 = 7U;

	t19 = (x613&((x614<x615)<<x616));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x618 = -1LL;
	static volatile uint32_t x619 = UINT32_MAX;
	static int8_t x620 = 3;
	int32_t t20 = 927;

	t20 = (x617&((x618<x619)<<x620));

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x677 = INT8_MIN;
	static int32_t x678 = -780499455;
	static int64_t x679 = -370552444152671LL;
	uint8_t x680 = 1U;
	volatile int32_t t21 = -150092;

	t21 = (x677&((x678<x679)<<x680));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x681 = INT16_MIN;
	uint64_t x682 = 161578LLU;
	uint8_t x683 = 7U;
	uint8_t x684 = 6U;
	volatile int32_t t22 = 504141771;

	t22 = (x681&((x682<x683)<<x684));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x685 = INT64_MIN;
	int16_t x686 = INT16_MIN;
	volatile uint64_t x687 = 367043953LLU;
	volatile int64_t t23 = 1619218339306LL;

	t23 = (x685&((x686<x687)<<x688));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x713 = -1;
	static uint8_t x714 = 67U;
	int64_t x715 = 64627LL;
	volatile uint16_t x716 = 2U;
	volatile int32_t t24 = 11962;

	t24 = (x713&((x714<x715)<<x716));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x721 = -1;
	volatile uint8_t x724 = 6U;
	volatile int32_t t25 = -758457197;

	t25 = (x721&((x722<x723)<<x724));

	if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x737 = INT32_MAX;
	static uint64_t x738 = 1283062439435145LLU;
	int16_t x739 = INT16_MIN;
	uint16_t x740 = 2U;
	volatile int32_t t26 = 29145;

	t26 = (x737&((x738<x739)<<x740));

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x765 = -1;
	uint16_t x768 = 6U;
	int32_t t27 = -1091;

	t27 = (x765&((x766<x767)<<x768));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x813 = UINT8_MAX;
	int8_t x814 = -1;
	int64_t x815 = -1LL;
	int32_t x816 = 0;
	static volatile int32_t t28 = -2280;

	t28 = (x813&((x814<x815)<<x816));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x821 = 1270373957131LL;
	int64_t x822 = INT64_MIN;
	volatile int16_t x823 = INT16_MIN;
	volatile uint8_t x824 = 1U;

	t29 = (x821&((x822<x823)<<x824));

	if (t29 != 2LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x869 = INT64_MAX;
	int64_t x870 = INT64_MAX;
	volatile int64_t x871 = -130444241LL;
	static uint8_t x872 = 0U;
	int64_t t30 = 401479234LL;

	t30 = (x869&((x870<x871)<<x872));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x882 = -1090530LL;
	uint8_t x883 = UINT8_MAX;
	static int32_t t31 = -1;

	t31 = (x881&((x882<x883)<<x884));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x929 = INT8_MIN;
	uint64_t x930 = UINT64_MAX;
	static int16_t x931 = INT16_MAX;
	uint32_t x932 = 24U;

	t32 = (x929&((x930<x931)<<x932));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x965 = 8U;
	int64_t x966 = 3538671232LL;
	int16_t x967 = INT16_MAX;

	t33 = (x965&((x966<x967)<<x968));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x978 = -1;
	uint16_t x979 = 20U;
	int64_t x980 = 14LL;
	int32_t t34 = -24;

	t34 = (x977&((x978<x979)<<x980));

	if (t34 != 16384) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x989 = -1;
	static int8_t x990 = INT8_MIN;
	uint8_t x991 = 103U;
	uint32_t x992 = 12U;
	static int32_t t35 = -411670506;

	t35 = (x989&((x990<x991)<<x992));

	if (t35 != 4096) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1017 = UINT8_MAX;
	static uint8_t x1019 = 0U;

	t36 = (x1017&((x1018<x1019)<<x1020));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1037 = INT64_MIN;
	uint16_t x1038 = 18U;
	int16_t x1039 = 1;
	uint8_t x1040 = 0U;
	int64_t t37 = -874479799052094LL;

	t37 = (x1037&((x1038<x1039)<<x1040));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1065 = 6U;
	volatile uint16_t x1066 = 2116U;
	volatile int32_t x1067 = -4;
	int8_t x1068 = 7;
	int32_t t38 = -59219;

	t38 = (x1065&((x1066<x1067)<<x1068));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1081 = 6U;
	int64_t x1082 = INT64_MAX;
	int8_t x1083 = -1;
	uint8_t x1084 = 0U;

	t39 = (x1081&((x1082<x1083)<<x1084));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1145 = INT32_MAX;
	int8_t x1146 = INT8_MAX;
	static volatile uint8_t x1147 = 19U;
	int8_t x1148 = 1;
	volatile int32_t t40 = 15;

	t40 = (x1145&((x1146<x1147)<<x1148));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1158 = -332;
	uint64_t x1159 = 1294057039072527LLU;
	static int8_t x1160 = 26;
	volatile int64_t t41 = -1954380669973197LL;

	t41 = (x1157&((x1158<x1159)<<x1160));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1177 = INT8_MAX;
	int16_t x1179 = -3589;
	static volatile uint64_t x1180 = 1LLU;

	t42 = (x1177&((x1178<x1179)<<x1180));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1193 = 6U;
	int32_t x1194 = INT32_MIN;
	uint8_t x1196 = 23U;

	t43 = (x1193&((x1194<x1195)<<x1196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1261 = -1;
	uint16_t x1262 = 106U;
	int32_t x1263 = -1794675;
	uint8_t x1264 = 1U;
	volatile int32_t t44 = -12;

	t44 = (x1261&((x1262<x1263)<<x1264));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1269 = INT32_MIN;
	static uint32_t x1270 = 57953U;
	int8_t x1271 = INT8_MAX;
	int32_t t45 = -161;

	t45 = (x1269&((x1270<x1271)<<x1272));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1309 = UINT64_MAX;
	int64_t x1310 = 741LL;
	uint8_t x1311 = 51U;
	volatile uint8_t x1312 = 21U;
	volatile uint64_t t46 = 10458975LLU;

	t46 = (x1309&((x1310<x1311)<<x1312));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1369 = 8952U;
	volatile int8_t x1370 = INT8_MIN;
	volatile int32_t x1371 = 28136274;
	uint64_t x1372 = 0LLU;

	t47 = (x1369&((x1370<x1371)<<x1372));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1389 = INT8_MIN;
	static uint8_t x1390 = UINT8_MAX;
	int32_t x1391 = 597;
	int8_t x1392 = 1;

	t48 = (x1389&((x1390<x1391)<<x1392));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1397 = -1;
	int64_t x1398 = INT64_MIN;
	uint8_t x1399 = 11U;
	uint8_t x1400 = 1U;

	t49 = (x1397&((x1398<x1399)<<x1400));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1401 = 15414U;
	int8_t x1403 = -1;
	uint64_t x1404 = 31LLU;
	static uint32_t t50 = 6619U;

	t50 = (x1401&((x1402<x1403)<<x1404));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1417 = -10;
	static volatile int64_t x1418 = -1670LL;
	uint64_t x1419 = 24511502695981772LLU;
	int32_t t51 = -173;

	t51 = (x1417&((x1418<x1419)<<x1420));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1489 = INT32_MIN;
	uint32_t x1490 = 146925439U;
	static int64_t x1491 = 246669506LL;
	volatile int32_t t52 = -13369444;

	t52 = (x1489&((x1490<x1491)<<x1492));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1493 = -1;
	static uint8_t x1494 = 8U;
	uint8_t x1496 = 2U;
	int32_t t53 = 1595718;

	t53 = (x1493&((x1494<x1495)<<x1496));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1501 = INT16_MIN;
	volatile int16_t x1502 = INT16_MIN;
	uint32_t x1503 = 63583U;
	volatile int32_t t54 = -7;

	t54 = (x1501&((x1502<x1503)<<x1504));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1505 = UINT16_MAX;
	volatile uint64_t x1506 = UINT64_MAX;
	int64_t x1507 = -1LL;
	int16_t x1508 = 18;
	int32_t t55 = 0;

	t55 = (x1505&((x1506<x1507)<<x1508));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x1521 = -1;
	int16_t x1522 = INT16_MIN;
	int8_t x1524 = 5;
	int32_t t56 = 48284228;

	t56 = (x1521&((x1522<x1523)<<x1524));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1629 = UINT8_MAX;
	volatile int64_t x1630 = -11455387737752LL;
	uint64_t x1631 = 528723702707LLU;
	volatile uint16_t x1632 = 16U;
	static volatile int32_t t57 = -6;

	t57 = (x1629&((x1630<x1631)<<x1632));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1673 = INT64_MIN;
	uint64_t x1674 = 290947822103094LLU;
	int8_t x1676 = 0;

	t58 = (x1673&((x1674<x1675)<<x1676));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1721 = UINT16_MAX;
	int64_t x1722 = -1LL;
	volatile uint8_t x1724 = 9U;
	int32_t t59 = -8;

	t59 = (x1721&((x1722<x1723)<<x1724));

	if (t59 != 512) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1741 = INT32_MIN;
	volatile uint8_t x1742 = UINT8_MAX;
	int64_t x1743 = INT64_MIN;
	uint8_t x1744 = 14U;
	volatile int32_t t60 = 260962392;

	t60 = (x1741&((x1742<x1743)<<x1744));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1809 = UINT16_MAX;
	uint64_t x1810 = UINT64_MAX;
	static int32_t x1812 = 1;
	volatile int32_t t61 = 22459553;

	t61 = (x1809&((x1810<x1811)<<x1812));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1821 = INT32_MAX;
	int64_t x1822 = -1LL;
	volatile int64_t x1823 = INT64_MIN;
	static volatile int32_t t62 = -331738253;

	t62 = (x1821&((x1822<x1823)<<x1824));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x1913 = UINT8_MAX;
	volatile uint32_t x1914 = 3290521U;
	int16_t x1915 = -1;
	uint8_t x1916 = 24U;
	int32_t t63 = 5566;

	t63 = (x1913&((x1914<x1915)<<x1916));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1941 = -956LL;
	static volatile int8_t x1942 = INT8_MIN;
	int16_t x1943 = INT16_MIN;
	int16_t x1944 = 3;
	static volatile int64_t t64 = 6839311LL;

	t64 = (x1941&((x1942<x1943)<<x1944));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1968 = 11;
	volatile uint64_t t65 = 64998LLU;

	t65 = (x1965&((x1966<x1967)<<x1968));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1981 = INT16_MIN;
	int8_t x1982 = 6;
	static uint16_t x1983 = UINT16_MAX;
	static int64_t x1984 = 1LL;
	volatile int32_t t66 = 14230770;

	t66 = (x1981&((x1982<x1983)<<x1984));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x1985 = INT16_MAX;
	uint32_t x1986 = 2697U;
	int32_t x1987 = -1;
	uint8_t x1988 = 28U;
	volatile int32_t t67 = -6158404;

	t67 = (x1985&((x1986<x1987)<<x1988));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2017 = 10105813047985105LLU;
	int64_t x2019 = INT64_MAX;
	int8_t x2020 = 0;
	uint64_t t68 = 1151785735552LLU;

	t68 = (x2017&((x2018<x2019)<<x2020));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2021 = -1;
	int32_t x2022 = -267301449;
	int16_t x2023 = INT16_MIN;
	int8_t x2024 = 1;

	t69 = (x2021&((x2022<x2023)<<x2024));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2045 = INT16_MIN;
	volatile int16_t x2046 = INT16_MIN;
	int16_t x2047 = INT16_MIN;
	uint16_t x2048 = 1U;
	static int32_t t70 = 1402712;

	t70 = (x2045&((x2046<x2047)<<x2048));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x2069 = -1;
	int64_t x2070 = INT64_MAX;
	uint8_t x2071 = 2U;
	int8_t x2072 = 1;
	volatile int32_t t71 = 8612941;

	t71 = (x2069&((x2070<x2071)<<x2072));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2073 = -8;
	volatile int32_t x2074 = -427420201;
	static uint32_t x2075 = 49U;
	uint64_t x2076 = 30LLU;

	t72 = (x2073&((x2074<x2075)<<x2076));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x2137 = UINT8_MAX;
	int64_t x2138 = INT64_MAX;
	int8_t x2139 = -1;
	int16_t x2140 = 0;
	static int32_t t73 = 108;

	t73 = (x2137&((x2138<x2139)<<x2140));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2205 = 0;
	static int8_t x2206 = 4;
	volatile int16_t x2207 = -1;
	uint8_t x2208 = 4U;

	t74 = (x2205&((x2206<x2207)<<x2208));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2241 = 175074LLU;
	static uint64_t x2243 = 94LLU;
	uint8_t x2244 = 3U;

	t75 = (x2241&((x2242<x2243)<<x2244));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2253 = UINT16_MAX;
	static int64_t x2254 = INT64_MIN;
	static int32_t t76 = -210604943;

	t76 = (x2253&((x2254<x2255)<<x2256));

	if (t76 != 64) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2290 = 9;
	uint16_t x2291 = 232U;
	int32_t t77 = 63594479;

	t77 = (x2289&((x2290<x2291)<<x2292));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2369 = -1;
	volatile uint64_t x2370 = UINT64_MAX;
	uint16_t x2371 = UINT16_MAX;
	static int8_t x2372 = 15;
	volatile int32_t t78 = -473634800;

	t78 = (x2369&((x2370<x2371)<<x2372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2385 = 85434739U;
	volatile uint8_t x2386 = 94U;
	static uint16_t x2388 = 5U;
	volatile uint32_t t79 = 1U;

	t79 = (x2385&((x2386<x2387)<<x2388));

	if (t79 != 32U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2405 = -1LL;
	static int8_t x2406 = INT8_MIN;
	uint32_t x2407 = 555997808U;
	uint32_t x2408 = 1U;
	volatile int64_t t80 = -1LL;

	t80 = (x2405&((x2406<x2407)<<x2408));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2413 = 30764844U;
	int16_t x2414 = INT16_MIN;
	volatile int16_t x2415 = -1;
	uint16_t x2416 = 16U;

	t81 = (x2413&((x2414<x2415)<<x2416));

	if (t81 != 65536U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2485 = 1495U;
	static int64_t x2486 = 296LL;
	uint8_t x2487 = 6U;
	uint8_t x2488 = 1U;
	static uint32_t t82 = 7U;

	t82 = (x2485&((x2486<x2487)<<x2488));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2497 = INT8_MIN;
	volatile int32_t x2498 = -1;
	uint64_t x2499 = UINT64_MAX;
	uint8_t x2500 = 0U;
	volatile int32_t t83 = -1656515;

	t83 = (x2497&((x2498<x2499)<<x2500));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x2537 = UINT32_MAX;
	volatile int64_t x2538 = INT64_MAX;
	uint64_t x2539 = 20224367278LLU;
	uint32_t x2540 = 2U;
	uint32_t t84 = 26525U;

	t84 = (x2537&((x2538<x2539)<<x2540));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2545 = 13;
	volatile int8_t x2546 = INT8_MAX;
	int16_t x2547 = -801;
	uint32_t x2548 = 1U;

	t85 = (x2545&((x2546<x2547)<<x2548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2553 = -2473;
	static uint16_t x2554 = 105U;
	int16_t x2555 = -1;
	static uint64_t x2556 = 6LLU;
	volatile int32_t t86 = -3001641;

	t86 = (x2553&((x2554<x2555)<<x2556));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2575 = -26;
	volatile uint64_t x2576 = 29LLU;
	static volatile int64_t t87 = 60LL;

	t87 = (x2573&((x2574<x2575)<<x2576));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x2593 = 1;
	volatile uint8_t x2596 = 16U;
	static volatile int32_t t88 = -2135261;

	t88 = (x2593&((x2594<x2595)<<x2596));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x2637 = 5U;
	uint8_t x2638 = 94U;
	int8_t x2639 = 1;
	static int8_t x2640 = 14;

	t89 = (x2637&((x2638<x2639)<<x2640));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x2673 = 119222LLU;
	uint32_t x2674 = 1U;
	static uint64_t x2675 = 3366254978LLU;
	uint8_t x2676 = 12U;
	uint64_t t90 = 733124217LLU;

	t90 = (x2673&((x2674<x2675)<<x2676));

	if (t90 != 4096LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2677 = INT64_MIN;
	int32_t x2679 = 194109;
	uint16_t x2680 = 2U;
	volatile int64_t t91 = 15677557LL;

	t91 = (x2677&((x2678<x2679)<<x2680));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2685 = 0U;
	uint32_t x2686 = UINT32_MAX;
	volatile uint32_t x2687 = 9856U;
	volatile uint16_t x2688 = 12U;
	int32_t t92 = -324;

	t92 = (x2685&((x2686<x2687)<<x2688));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2714 = INT8_MIN;
	volatile int64_t x2715 = INT64_MIN;
	static uint8_t x2716 = 6U;
	static int64_t t93 = 149697372569244254LL;

	t93 = (x2713&((x2714<x2715)<<x2716));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x2737 = 1U;
	int16_t x2739 = 3249;
	int8_t x2740 = 2;
	static volatile int32_t t94 = 692;

	t94 = (x2737&((x2738<x2739)<<x2740));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2749 = INT32_MIN;
	uint32_t x2751 = 701186317U;
	int32_t x2752 = 6;
	volatile int32_t t95 = -44576749;

	t95 = (x2749&((x2750<x2751)<<x2752));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2793 = INT8_MAX;
	uint32_t x2794 = 107220U;
	uint16_t x2795 = 50U;
	int8_t x2796 = 0;
	int32_t t96 = -11441531;

	t96 = (x2793&((x2794<x2795)<<x2796));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x2815 = 243155315U;
	volatile int16_t x2816 = 9;
	int32_t t97 = 18581;

	t97 = (x2813&((x2814<x2815)<<x2816));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x2821 = 2034858947LLU;
	int64_t x2822 = 1118571048004LL;
	uint64_t x2823 = UINT64_MAX;
	uint8_t x2824 = 7U;
	uint64_t t98 = 221269698881939LLU;

	t98 = (x2821&((x2822<x2823)<<x2824));

	if (t98 != 128LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x2825 = 2U;
	volatile uint16_t x2826 = 8U;
	int32_t x2827 = 6;
	uint8_t x2828 = 19U;
	volatile int32_t t99 = 2126;

	t99 = (x2825&((x2826<x2827)<<x2828));

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


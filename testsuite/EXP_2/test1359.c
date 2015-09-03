#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x141 = 8;
int64_t x144 = 15LL;
uint32_t x350 = UINT32_MAX;
int32_t x351 = 135428;
int64_t x363 = 55200722LL;
uint64_t x364 = 0LLU;
volatile uint64_t t3 = 6LLU;
int32_t x493 = -1;
int64_t x499 = INT64_MIN;
uint8_t x500 = 18U;
volatile int32_t t6 = 41;
uint64_t x535 = UINT64_MAX;
int32_t t7 = 3;
volatile uint32_t t8 = 1813U;
int16_t x686 = INT16_MIN;
int32_t t9 = -235515;
int32_t t11 = -881130;
int32_t x869 = 1;
int16_t x872 = 26;
static volatile int64_t x886 = INT64_MIN;
uint8_t x931 = 49U;
int32_t x938 = INT32_MIN;
static int8_t x939 = INT8_MIN;
int8_t x1041 = INT8_MAX;
volatile int16_t x1073 = -1;
uint64_t x1074 = 47LLU;
volatile int64_t x1179 = 537078617321413015LL;
volatile uint64_t t23 = 62LLU;
static uint8_t x1195 = 0U;
int16_t x1243 = -974;
volatile uint64_t x1318 = UINT64_MAX;
uint32_t x1320 = 0U;
volatile uint32_t x1373 = UINT32_MAX;
uint32_t t28 = 652516U;
uint64_t x1413 = 19904LLU;
volatile uint64_t t29 = 8367685563468LLU;
int16_t x1431 = 4;
int16_t x1434 = -6;
uint32_t t31 = 46194U;
uint32_t x1597 = 1147198U;
int8_t x1640 = 28;
int64_t x1777 = INT64_MAX;
int8_t x1829 = 1;
int16_t x1831 = INT16_MIN;
uint64_t x1832 = 3LLU;
int64_t x1890 = INT64_MIN;
volatile uint32_t t43 = 28065582U;
int64_t x2021 = INT64_MAX;
uint32_t x2091 = 63341U;
static volatile uint32_t x2107 = 64410098U;
uint32_t x2108 = 0U;
uint64_t t46 = 5663LLU;
volatile uint64_t t47 = 836LLU;
int32_t x2206 = INT32_MIN;
int16_t x2327 = INT16_MAX;
int32_t t50 = 0;
uint32_t x2464 = 28U;
static int8_t x2513 = -1;
static int32_t x2515 = 6259447;
volatile int32_t t52 = -65973994;
uint32_t x2621 = 13U;
int32_t x2650 = INT32_MIN;
uint64_t t58 = 6385333457LLU;
uint32_t x2677 = 223175854U;
uint8_t x2680 = 3U;
uint16_t x2751 = UINT16_MAX;
static int16_t x2752 = 1;
uint8_t x2812 = 1U;
volatile uint64_t x2841 = UINT64_MAX;
static volatile int32_t t65 = -1;
int8_t x3098 = -1;
uint16_t x3163 = 130U;
int32_t x3205 = INT32_MAX;
volatile int32_t x3207 = INT32_MIN;
uint16_t x3213 = 7U;
uint8_t x3214 = 3U;
volatile uint32_t x3310 = UINT32_MAX;
static volatile int64_t t73 = -5534404170484LL;
uint16_t x3372 = 1U;
int32_t x3438 = INT32_MIN;
int32_t t75 = 7778625;
int8_t x3507 = INT8_MIN;
static int8_t x3508 = 0;
static int32_t t76 = -8;
int16_t x3546 = 45;
int64_t x3548 = 0LL;
uint32_t x3562 = 35562U;
volatile uint64_t x3563 = 12914735LLU;
volatile int32_t t78 = -19736;
uint32_t x3822 = UINT32_MAX;
int16_t x3823 = 59;
static int8_t x3934 = INT8_MAX;
volatile int32_t x3943 = INT32_MIN;
int64_t x4021 = 0LL;
volatile int32_t x4132 = 2;
static volatile int32_t t86 = 50773;
volatile uint64_t t87 = 2185699368517893LLU;
uint32_t x4141 = UINT32_MAX;
uint8_t x4143 = 13U;
static uint32_t t88 = 53527U;
int8_t x4160 = 0;
int64_t x4173 = 9677355688LL;
uint64_t x4176 = 2LLU;
static volatile uint64_t x4182 = 331396533076448LLU;
uint16_t x4192 = 1U;
uint8_t x4251 = UINT8_MAX;
volatile uint32_t t94 = 330260U;
int8_t x4296 = 0;
static int64_t x4532 = 0LL;
volatile int64_t x4538 = 1216LL;
uint8_t x4540 = 5U;


void f0(void) {
	uint16_t x93 = UINT16_MAX;
	static volatile int16_t x94 = 10;
	uint8_t x95 = 2U;
	volatile int16_t x96 = 6;
	static volatile int32_t t0 = -54;

	t0 = ((x93+(x94<x95))>>x96);

	if (t0 != 1023) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x142 = INT64_MIN;
	volatile uint16_t x143 = 147U;
	volatile int32_t t1 = 18;

	t1 = ((x141+(x142<x143))>>x144);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x349 = 9693U;
	static uint8_t x352 = 14U;
	int32_t t2 = -29462;

	t2 = ((x349+(x350<x351))>>x352);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x361 = 6253878461LLU;
	uint8_t x362 = 2U;

	t3 = ((x361+(x362<x363))>>x364);

	if (t3 != 6253878462LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x413 = 1903LLU;
	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 37U;
	uint64_t t4 = 1441LLU;

	t4 = ((x413+(x414<x415))>>x416);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x494 = INT64_MIN;
	int8_t x495 = INT8_MAX;
	uint64_t x496 = 0LLU;
	volatile int32_t t5 = -33479;

	t5 = ((x493+(x494<x495))>>x496);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x497 = 12U;
	int8_t x498 = 1;

	t6 = ((x497+(x498<x499))>>x500);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x533 = 8U;
	int16_t x534 = INT16_MAX;
	volatile uint32_t x536 = 31U;

	t7 = ((x533+(x534<x535))>>x536);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x541 = 188U;
	int64_t x542 = INT64_MIN;
	uint8_t x543 = 3U;
	static uint8_t x544 = 0U;

	t8 = ((x541+(x542<x543))>>x544);

	if (t8 != 189U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x685 = UINT16_MAX;
	int32_t x687 = -1;
	int16_t x688 = 16;

	t9 = ((x685+(x686<x687))>>x688);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x777 = 24251U;
	uint64_t x778 = 13518524190LLU;
	static volatile int64_t x779 = -112748LL;
	uint16_t x780 = 17U;
	int32_t t10 = -5;

	t10 = ((x777+(x778<x779))>>x780);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x833 = -1;
	volatile int16_t x834 = INT16_MIN;
	uint16_t x835 = 1538U;
	uint16_t x836 = 2U;

	t11 = ((x833+(x834<x835))>>x836);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x870 = 9U;
	uint64_t x871 = 1003393272892LLU;
	static volatile int32_t t12 = -289351;

	t12 = ((x869+(x870<x871))>>x872);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x885 = 32739368698LLU;
	int16_t x887 = -26;
	static uint8_t x888 = 5U;
	static volatile uint64_t t13 = 1107291829930216LLU;

	t13 = ((x885+(x886<x887))>>x888);

	if (t13 != 1023105271LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x909 = 0LL;
	int8_t x910 = -1;
	static volatile int64_t x911 = -332255LL;
	volatile int8_t x912 = 3;
	volatile int64_t t14 = -1096279662LL;

	t14 = ((x909+(x910<x911))>>x912);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x921 = 0;
	uint16_t x922 = 0U;
	volatile int32_t x923 = INT32_MIN;
	int8_t x924 = 6;
	int32_t t15 = 1400474;

	t15 = ((x921+(x922<x923))>>x924);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x929 = UINT32_MAX;
	int32_t x930 = INT32_MIN;
	volatile uint8_t x932 = 1U;
	volatile uint32_t t16 = 16352U;

	t16 = ((x929+(x930<x931))>>x932);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x937 = 16609U;
	uint16_t x940 = 6U;
	static volatile int32_t t17 = 18;

	t17 = ((x937+(x938<x939))>>x940);

	if (t17 != 259) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x1021 = 3149942919470431546LLU;
	uint16_t x1022 = UINT16_MAX;
	int32_t x1023 = INT32_MIN;
	uint32_t x1024 = 16U;
	volatile uint64_t t18 = 35641444109621834LLU;

	t18 = ((x1021+(x1022<x1023))>>x1024);

	if (t18 != 48064314567114LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1042 = 2LLU;
	int16_t x1043 = INT16_MIN;
	volatile int8_t x1044 = 2;
	volatile int32_t t19 = -1;

	t19 = ((x1041+(x1042<x1043))>>x1044);

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1075 = 10144372LLU;
	uint8_t x1076 = 0U;
	volatile int32_t t20 = -112;

	t20 = ((x1073+(x1074<x1075))>>x1076);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1157 = UINT8_MAX;
	uint16_t x1158 = 218U;
	volatile int64_t x1159 = 10360052204990640LL;
	uint8_t x1160 = 14U;
	int32_t t21 = 2645618;

	t21 = ((x1157+(x1158<x1159))>>x1160);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1177 = -1LL;
	int32_t x1178 = INT32_MIN;
	volatile int8_t x1180 = 0;
	int64_t t22 = 4LL;

	t22 = ((x1177+(x1178<x1179))>>x1180);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1189 = 127514126932453LLU;
	int64_t x1190 = INT64_MIN;
	static int8_t x1191 = -1;
	static int64_t x1192 = 2LL;

	t23 = ((x1189+(x1190<x1191))>>x1192);

	if (t23 != 31878531733113LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x1193 = 7U;
	int32_t x1194 = INT32_MAX;
	int32_t x1196 = 0;
	static int32_t t24 = -962;

	t24 = ((x1193+(x1194<x1195))>>x1196);

	if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1241 = INT8_MAX;
	static uint16_t x1242 = 428U;
	uint8_t x1244 = 0U;
	int32_t t25 = 0;

	t25 = ((x1241+(x1242<x1243))>>x1244);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1317 = 1U;
	static uint64_t x1319 = 604529897170071586LLU;
	int32_t t26 = -11;

	t26 = ((x1317+(x1318<x1319))>>x1320);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1345 = 1020;
	int8_t x1346 = INT8_MAX;
	int64_t x1347 = 773802774LL;
	static uint32_t x1348 = 1U;
	volatile int32_t t27 = -199;

	t27 = ((x1345+(x1346<x1347))>>x1348);

	if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1374 = INT32_MIN;
	int64_t x1375 = INT64_MAX;
	int64_t x1376 = 1LL;

	t28 = ((x1373+(x1374<x1375))>>x1376);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1414 = -1;
	int8_t x1415 = INT8_MIN;
	uint64_t x1416 = 1LLU;

	t29 = ((x1413+(x1414<x1415))>>x1416);

	if (t29 != 9952LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1429 = 64080LLU;
	int64_t x1430 = INT64_MAX;
	uint16_t x1432 = 20U;
	static volatile uint64_t t30 = 50118LLU;

	t30 = ((x1429+(x1430<x1431))>>x1432);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1433 = UINT32_MAX;
	volatile int32_t x1435 = -16378169;
	int16_t x1436 = 2;

	t31 = ((x1433+(x1434<x1435))>>x1436);

	if (t31 != 1073741823U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1473 = UINT64_MAX;
	volatile uint64_t x1474 = 8338759699352873242LLU;
	int16_t x1475 = -3;
	uint8_t x1476 = 5U;
	uint64_t t32 = 6228529LLU;

	t32 = ((x1473+(x1474<x1475))>>x1476);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1573 = UINT64_MAX;
	int64_t x1574 = INT64_MIN;
	int8_t x1575 = INT8_MAX;
	uint8_t x1576 = 8U;
	static uint64_t t33 = 128012LLU;

	t33 = ((x1573+(x1574<x1575))>>x1576);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1581 = 1;
	static uint8_t x1582 = 1U;
	static int8_t x1583 = INT8_MIN;
	uint8_t x1584 = 2U;
	static int32_t t34 = -7400771;

	t34 = ((x1581+(x1582<x1583))>>x1584);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1585 = 48U;
	int32_t x1586 = 409;
	int32_t x1587 = -11656;
	int8_t x1588 = 0;
	volatile int32_t t35 = 362445;

	t35 = ((x1585+(x1586<x1587))>>x1588);

	if (t35 != 48) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1598 = INT32_MIN;
	int8_t x1599 = INT8_MIN;
	int8_t x1600 = 1;
	uint32_t t36 = 20U;

	t36 = ((x1597+(x1598<x1599))>>x1600);

	if (t36 != 573599U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1637 = INT8_MAX;
	int32_t x1638 = -311020356;
	static uint64_t x1639 = 38789373LLU;
	volatile int32_t t37 = 499899259;

	t37 = ((x1637+(x1638<x1639))>>x1640);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1649 = 112076804704886859LL;
	uint16_t x1650 = 613U;
	int8_t x1651 = 1;
	int8_t x1652 = 1;
	volatile int64_t t38 = 8210505651LL;

	t38 = ((x1649+(x1650<x1651))>>x1652);

	if (t38 != 56038402352443429LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1778 = -57148474;
	volatile uint64_t x1779 = 1414614LLU;
	int16_t x1780 = 13;
	static int64_t t39 = 16939863152412LL;

	t39 = ((x1777+(x1778<x1779))>>x1780);

	if (t39 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1830 = 23U;
	int32_t t40 = -4844970;

	t40 = ((x1829+(x1830<x1831))>>x1832);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1877 = 1U;
	volatile uint16_t x1878 = 0U;
	volatile int16_t x1879 = 8986;
	static volatile uint32_t x1880 = 6U;
	volatile int32_t t41 = 0;

	t41 = ((x1877+(x1878<x1879))>>x1880);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1889 = 0U;
	static int32_t x1891 = INT32_MAX;
	static int8_t x1892 = 6;
	static uint32_t t42 = 108659U;

	t42 = ((x1889+(x1890<x1891))>>x1892);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1941 = 96975884U;
	uint64_t x1942 = 163LLU;
	uint8_t x1943 = UINT8_MAX;
	uint32_t x1944 = 1U;

	t43 = ((x1941+(x1942<x1943))>>x1944);

	if (t43 != 48487942U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2022 = -1;
	static int32_t x2023 = -1;
	int16_t x2024 = 2;
	int64_t t44 = 13963LL;

	t44 = ((x2021+(x2022<x2023))>>x2024);

	if (t44 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2089 = 990LLU;
	int64_t x2090 = INT64_MIN;
	uint8_t x2092 = 0U;
	volatile uint64_t t45 = 788588067LLU;

	t45 = ((x2089+(x2090<x2091))>>x2092);

	if (t45 != 991LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2105 = 221389295LLU;
	int8_t x2106 = -1;

	t46 = ((x2105+(x2106<x2107))>>x2108);

	if (t46 != 221389295LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2109 = UINT64_MAX;
	uint32_t x2110 = 3204609U;
	volatile uint64_t x2111 = UINT64_MAX;
	uint8_t x2112 = 0U;

	t47 = ((x2109+(x2110<x2111))>>x2112);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2177 = 43;
	volatile int32_t x2178 = -1;
	int32_t x2179 = 4818;
	static uint16_t x2180 = 1U;
	int32_t t48 = -2;

	t48 = ((x2177+(x2178<x2179))>>x2180);

	if (t48 != 22) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2205 = UINT64_MAX;
	volatile int64_t x2207 = INT64_MAX;
	int8_t x2208 = 6;
	static uint64_t t49 = 715440LLU;

	t49 = ((x2205+(x2206<x2207))>>x2208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2325 = 194741;
	volatile int32_t x2326 = INT32_MIN;
	static uint32_t x2328 = 24U;

	t50 = ((x2325+(x2326<x2327))>>x2328);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2461 = INT8_MAX;
	int64_t x2462 = INT64_MAX;
	static volatile int64_t x2463 = INT64_MIN;
	static volatile int32_t t51 = 5153;

	t51 = ((x2461+(x2462<x2463))>>x2464);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2514 = 41916;
	uint16_t x2516 = 2U;

	t52 = ((x2513+(x2514<x2515))>>x2516);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2517 = 136U;
	int64_t x2518 = INT64_MIN;
	static int16_t x2519 = INT16_MAX;
	uint64_t x2520 = 14LLU;
	volatile uint32_t t53 = 125U;

	t53 = ((x2517+(x2518<x2519))>>x2520);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2553 = 30LLU;
	int32_t x2554 = INT32_MAX;
	int16_t x2555 = INT16_MAX;
	uint8_t x2556 = 54U;
	static volatile uint64_t t54 = 1801017542876342640LLU;

	t54 = ((x2553+(x2554<x2555))>>x2556);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2569 = 1300630264U;
	int32_t x2570 = 172447;
	uint64_t x2571 = UINT64_MAX;
	uint32_t x2572 = 1U;
	uint32_t t55 = 4625529U;

	t55 = ((x2569+(x2570<x2571))>>x2572);

	if (t55 != 650315132U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2622 = 393U;
	volatile int8_t x2623 = INT8_MIN;
	volatile int16_t x2624 = 0;
	uint32_t t56 = 145270U;

	t56 = ((x2621+(x2622<x2623))>>x2624);

	if (t56 != 14U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2649 = -1;
	volatile uint64_t x2651 = UINT64_MAX;
	static volatile int32_t x2652 = 1;
	int32_t t57 = 360250;

	t57 = ((x2649+(x2650<x2651))>>x2652);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2673 = UINT64_MAX;
	uint64_t x2674 = 150228560891085408LLU;
	static int16_t x2675 = INT16_MIN;
	uint8_t x2676 = 13U;

	t58 = ((x2673+(x2674<x2675))>>x2676);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2678 = INT16_MAX;
	volatile int32_t x2679 = INT32_MAX;
	uint32_t t59 = 1929413244U;

	t59 = ((x2677+(x2678<x2679))>>x2680);

	if (t59 != 27896981U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2693 = 60U;
	int64_t x2694 = 2274075LL;
	static volatile int16_t x2695 = 1;
	volatile uint32_t x2696 = 2U;
	static int32_t t60 = -6;

	t60 = ((x2693+(x2694<x2695))>>x2696);

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2749 = 4;
	int8_t x2750 = INT8_MAX;
	int32_t t61 = 17404654;

	t61 = ((x2749+(x2750<x2751))>>x2752);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x2809 = -1;
	int64_t x2810 = INT64_MIN;
	uint32_t x2811 = 1310017707U;
	int32_t t62 = -1005467;

	t62 = ((x2809+(x2810<x2811))>>x2812);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2842 = INT32_MIN;
	uint16_t x2843 = UINT16_MAX;
	uint16_t x2844 = 0U;
	uint64_t t63 = 9809413LLU;

	t63 = ((x2841+(x2842<x2843))>>x2844);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2869 = -1;
	volatile int8_t x2870 = -1;
	int16_t x2871 = INT16_MAX;
	uint8_t x2872 = 3U;
	static int32_t t64 = 4537;

	t64 = ((x2869+(x2870<x2871))>>x2872);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2881 = 13U;
	int64_t x2882 = INT64_MAX;
	volatile int64_t x2883 = INT64_MIN;
	static volatile int64_t x2884 = 1LL;

	t65 = ((x2881+(x2882<x2883))>>x2884);

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2929 = 1;
	int32_t x2930 = -1;
	static int32_t x2931 = INT32_MAX;
	uint8_t x2932 = 13U;
	volatile int32_t t66 = 5101494;

	t66 = ((x2929+(x2930<x2931))>>x2932);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2953 = -1;
	int64_t x2954 = -267789574428488LL;
	volatile uint64_t x2955 = UINT64_MAX;
	int64_t x2956 = 2LL;
	volatile int32_t t67 = 224;

	t67 = ((x2953+(x2954<x2955))>>x2956);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3097 = 3;
	uint8_t x3099 = UINT8_MAX;
	uint8_t x3100 = 7U;
	volatile int32_t t68 = -441912530;

	t68 = ((x3097+(x3098<x3099))>>x3100);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3137 = -1;
	int16_t x3138 = INT16_MIN;
	uint8_t x3139 = 0U;
	int16_t x3140 = 4;
	volatile int32_t t69 = -11;

	t69 = ((x3137+(x3138<x3139))>>x3140);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3161 = 81855;
	static uint32_t x3162 = UINT32_MAX;
	static uint8_t x3164 = 10U;
	volatile int32_t t70 = 61;

	t70 = ((x3161+(x3162<x3163))>>x3164);

	if (t70 != 79) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3206 = 3U;
	uint8_t x3208 = 21U;
	static int32_t t71 = 5796;

	t71 = ((x3205+(x3206<x3207))>>x3208);

	if (t71 != 1023) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3215 = 32;
	static int8_t x3216 = 19;
	static int32_t t72 = -382307;

	t72 = ((x3213+(x3214<x3215))>>x3216);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3309 = INT64_MAX;
	uint32_t x3311 = 1U;
	int16_t x3312 = 31;

	t73 = ((x3309+(x3310<x3311))>>x3312);

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3369 = UINT16_MAX;
	int16_t x3370 = 8;
	uint64_t x3371 = 34288109852201123LLU;
	volatile int32_t t74 = 16022204;

	t74 = ((x3369+(x3370<x3371))>>x3372);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3437 = UINT8_MAX;
	int8_t x3439 = -2;
	uint16_t x3440 = 31U;

	t75 = ((x3437+(x3438<x3439))>>x3440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3505 = -1;
	int64_t x3506 = -526037131124LL;

	t76 = ((x3505+(x3506<x3507))>>x3508);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3545 = 3975518U;
	static int8_t x3547 = INT8_MIN;
	static uint32_t t77 = 9U;

	t77 = ((x3545+(x3546<x3547))>>x3548);

	if (t77 != 3975518U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3561 = 0U;
	volatile uint64_t x3564 = 14LLU;

	t78 = ((x3561+(x3562<x3563))>>x3564);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3593 = INT16_MAX;
	int64_t x3594 = -1LL;
	int16_t x3595 = INT16_MAX;
	uint64_t x3596 = 12LLU;
	volatile int32_t t79 = 4363835;

	t79 = ((x3593+(x3594<x3595))>>x3596);

	if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3697 = 27136;
	int16_t x3698 = INT16_MAX;
	static uint16_t x3699 = 0U;
	uint32_t x3700 = 0U;
	int32_t t80 = 450166;

	t80 = ((x3697+(x3698<x3699))>>x3700);

	if (t80 != 27136) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3821 = 6U;
	int8_t x3824 = 0;
	volatile int32_t t81 = -4613;

	t81 = ((x3821+(x3822<x3823))>>x3824);

	if (t81 != 6) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3933 = 77U;
	uint16_t x3935 = UINT16_MAX;
	volatile int64_t x3936 = 2LL;
	static volatile int32_t t82 = 226005574;

	t82 = ((x3933+(x3934<x3935))>>x3936);

	if (t82 != 19) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x3941 = INT8_MAX;
	int64_t x3942 = -44LL;
	volatile uint8_t x3944 = 12U;
	int32_t t83 = -1;

	t83 = ((x3941+(x3942<x3943))>>x3944);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3989 = 11U;
	int32_t x3990 = INT32_MIN;
	uint8_t x3991 = 1U;
	uint8_t x3992 = 10U;
	volatile int32_t t84 = 158;

	t84 = ((x3989+(x3990<x3991))>>x3992);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4022 = 56;
	volatile int32_t x4023 = -3186;
	int8_t x4024 = 0;
	int64_t t85 = -7891383030LL;

	t85 = ((x4021+(x4022<x4023))>>x4024);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4129 = 30;
	uint32_t x4130 = UINT32_MAX;
	uint64_t x4131 = 513518750160LLU;

	t86 = ((x4129+(x4130<x4131))>>x4132);

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x4137 = 411873087LLU;
	int32_t x4138 = INT32_MIN;
	static uint32_t x4139 = 13965185U;
	int32_t x4140 = 1;

	t87 = ((x4137+(x4138<x4139))>>x4140);

	if (t87 != 205936543LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4142 = INT8_MIN;
	static uint16_t x4144 = 19U;

	t88 = ((x4141+(x4142<x4143))>>x4144);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4157 = INT32_MAX;
	int16_t x4158 = INT16_MIN;
	int16_t x4159 = INT16_MIN;
	static int32_t t89 = INT32_MAX;

	t89 = ((x4157+(x4158<x4159))>>x4160);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x4174 = 1U;
	int32_t x4175 = INT32_MAX;
	int64_t t90 = 20686792LL;

	t90 = ((x4173+(x4174<x4175))>>x4176);

	if (t90 != 2419338922LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4181 = 261477LLU;
	uint8_t x4183 = 0U;
	int8_t x4184 = 0;
	static volatile uint64_t t91 = 108LLU;

	t91 = ((x4181+(x4182<x4183))>>x4184);

	if (t91 != 261477LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x4189 = 18U;
	static uint64_t x4190 = UINT64_MAX;
	static uint16_t x4191 = 3U;
	static volatile uint32_t t92 = 13U;

	t92 = ((x4189+(x4190<x4191))>>x4192);

	if (t92 != 9U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4205 = 4;
	int64_t x4206 = INT64_MAX;
	static int64_t x4207 = -67464049439LL;
	volatile uint8_t x4208 = 11U;
	volatile int32_t t93 = -188356;

	t93 = ((x4205+(x4206<x4207))>>x4208);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4249 = 9141U;
	uint32_t x4250 = 1901866U;
	int8_t x4252 = 2;

	t94 = ((x4249+(x4250<x4251))>>x4252);

	if (t94 != 2285U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4293 = 451U;
	volatile int8_t x4294 = 1;
	volatile uint32_t x4295 = 499U;
	uint32_t t95 = 137910173U;

	t95 = ((x4293+(x4294<x4295))>>x4296);

	if (t95 != 452U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4441 = 211LLU;
	volatile int64_t x4442 = 3LL;
	int32_t x4443 = INT32_MIN;
	uint64_t x4444 = 13LLU;
	volatile uint64_t t96 = 42286493308082163LLU;

	t96 = ((x4441+(x4442<x4443))>>x4444);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x4485 = 103U;
	static volatile uint16_t x4486 = UINT16_MAX;
	uint32_t x4487 = 104011520U;
	int16_t x4488 = 0;
	int32_t t97 = 1301119;

	t97 = ((x4485+(x4486<x4487))>>x4488);

	if (t97 != 104) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4529 = 1427;
	uint8_t x4530 = UINT8_MAX;
	int32_t x4531 = INT32_MIN;
	int32_t t98 = -14878286;

	t98 = ((x4529+(x4530<x4531))>>x4532);

	if (t98 != 1427) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4537 = UINT8_MAX;
	int32_t x4539 = INT32_MAX;
	int32_t t99 = 106831479;

	t99 = ((x4537+(x4538<x4539))>>x4540);

	if (t99 != 8) { NG(); } else { ; }
	
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


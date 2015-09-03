#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x40 = 3U;
static uint8_t x165 = UINT8_MAX;
uint64_t x166 = 9LLU;
uint8_t x168 = 4U;
volatile uint32_t x170 = 5555879U;
int32_t x172 = 1;
int32_t x342 = 19332;
volatile int16_t x361 = INT16_MIN;
volatile uint64_t t5 = 747297485356581LLU;
uint16_t x426 = UINT16_MAX;
int64_t x514 = -10686096767280LL;
static int64_t x516 = 25LL;
volatile int64_t t8 = 16109938432404LL;
uint16_t x534 = 7914U;
int16_t x535 = INT16_MIN;
int32_t x630 = -218074279;
uint16_t x692 = 3U;
static volatile uint64_t t13 = 27653337262158030LLU;
int32_t t16 = 0;
uint64_t t17 = 29254218249LLU;
int8_t x871 = INT8_MAX;
volatile int16_t x872 = 15;
int32_t x877 = -73222;
uint64_t t19 = 1015544927303LLU;
static int16_t x887 = -1;
int64_t x915 = 3887LL;
int32_t x945 = INT32_MAX;
int32_t t24 = 189504;
static int8_t x1140 = 1;
volatile int32_t t26 = 122253134;
volatile int32_t t28 = -17196;
uint64_t x1179 = 10620LLU;
int8_t x1279 = INT8_MIN;
volatile uint64_t t31 = 58608535745LLU;
int8_t x1329 = INT8_MAX;
volatile uint64_t x1522 = UINT64_MAX;
int8_t x1524 = 16;
int8_t x1528 = 22;
volatile int64_t x1559 = 86421739LL;
uint64_t t40 = 226888684235LLU;
volatile int64_t x1644 = 2LL;
uint16_t x1646 = 3003U;
static int32_t t42 = -1016057477;
uint8_t x1821 = 38U;
static uint8_t x1824 = 0U;
volatile int64_t x1849 = INT64_MIN;
uint64_t x1850 = UINT64_MAX;
int64_t x1877 = 121783LL;
static volatile uint8_t x1936 = 28U;
int16_t x1997 = INT16_MIN;
int64_t x2026 = 34138266886369321LL;
int8_t x2028 = 32;
volatile uint64_t t48 = 20594612822897825LLU;
int8_t x2040 = 0;
uint64_t x2162 = 97998873349662435LLU;
uint64_t x2178 = UINT64_MAX;
uint64_t t51 = 4548962LLU;
int64_t t53 = 127LL;
volatile int8_t x2341 = 2;
volatile int16_t x2343 = INT16_MIN;
uint32_t x2414 = UINT32_MAX;
uint8_t x2415 = 54U;
uint64_t t58 = 31LLU;
volatile uint8_t x2542 = UINT8_MAX;
int32_t x2603 = INT32_MIN;
static uint64_t x2658 = UINT64_MAX;
uint64_t x2844 = 3LLU;
uint8_t x2856 = 10U;
volatile uint32_t x2857 = 577359206U;
static uint32_t t67 = 21849232U;
int64_t x2874 = -6386098289258LL;
int16_t x2891 = INT16_MIN;
static int64_t t70 = 8LL;
static int16_t x2933 = 70;
static volatile int32_t x2935 = INT32_MIN;
int32_t t71 = 576589366;
volatile int32_t t72 = 28036125;
int32_t x3045 = INT32_MIN;
volatile uint32_t t74 = 2820726U;
int32_t t75 = 0;
volatile int16_t x3133 = -1616;
int16_t x3187 = INT16_MIN;
int8_t x3215 = 12;
static int8_t x3361 = 0;
int16_t x3362 = -1;
int64_t t80 = -117496345LL;
uint8_t x3500 = 1U;
int64_t x3673 = -1LL;
int16_t x3674 = -1;
uint64_t x3698 = UINT64_MAX;
volatile uint64_t t86 = 625140115440LLU;
static int8_t x3711 = INT8_MIN;
uint16_t x3712 = 2U;
static int16_t x3925 = -1;
uint32_t x3927 = UINT32_MAX;
uint16_t x4072 = 24U;
static uint64_t x4109 = UINT64_MAX;
int16_t x4137 = -1;


void f0(void) {
	uint8_t x37 = 1U;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 1U;
	int32_t t0 = -15;

	t0 = ((x37/(x38*x39))<<x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	int16_t x155 = INT16_MIN;
	static uint16_t x156 = 14U;
	int32_t t1 = -23301239;

	t1 = ((x153/(x154*x155))<<x156);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x167 = -27738931630051056LL;
	uint64_t t2 = 33141206058756LLU;

	t2 = ((x165/(x166*x167))<<x168);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x171 = INT8_MAX;
	uint64_t t3 = 8538031104542LLU;

	t3 = ((x169/(x170*x171))<<x172);

	if (t3 != 52286939054LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x341 = 1;
	int16_t x343 = -1;
	uint8_t x344 = 3U;
	int32_t t4 = 919;

	t4 = ((x341/(x342*x343))<<x344);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x362 = 1921144933LLU;
	int32_t x363 = -1;
	uint32_t x364 = 33U;

	t5 = ((x361/(x362*x363))<<x364);

	if (t5 != 8589934592LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x425 = -1;
	volatile int32_t x427 = -1;
	int16_t x428 = 1;
	int32_t t6 = -24406;

	t6 = ((x425/(x426*x427))<<x428);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x465 = INT32_MAX;
	uint64_t x466 = 147876LLU;
	int8_t x467 = -1;
	uint16_t x468 = 6U;
	static volatile uint64_t t7 = 2397615LLU;

	t7 = ((x465/(x466*x467))<<x468);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x513 = UINT8_MAX;
	uint16_t x515 = UINT16_MAX;

	t8 = ((x513/(x514*x515))<<x516);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x533 = 1;
	int64_t x536 = 8LL;
	int32_t t9 = -764612180;

	t9 = ((x533/(x534*x535))<<x536);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x629 = 2;
	int64_t x631 = 1LL;
	int8_t x632 = 1;
	int64_t t10 = 4226LL;

	t10 = ((x629/(x630*x631))<<x632);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x645 = INT64_MIN;
	volatile uint8_t x646 = 3U;
	static int8_t x647 = INT8_MIN;
	uint32_t x648 = 0U;
	volatile int64_t t11 = 9LL;

	t11 = ((x645/(x646*x647))<<x648);

	if (t11 != 24019198012642645LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x689 = INT16_MIN;
	uint32_t x690 = UINT32_MAX;
	int8_t x691 = -2;
	uint32_t t12 = 87709U;

	t12 = ((x689/(x690*x691))<<x692);

	if (t12 != 4294836224U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x757 = 21U;
	static int64_t x758 = -1LL;
	uint64_t x759 = UINT64_MAX;
	uint16_t x760 = 0U;

	t13 = ((x757/(x758*x759))<<x760);

	if (t13 != 21LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x781 = 39U;
	int64_t x782 = INT64_MAX;
	int8_t x783 = 1;
	uint8_t x784 = 7U;
	int64_t t14 = 35880344448802LL;

	t14 = ((x781/(x782*x783))<<x784);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x789 = INT64_MIN;
	int8_t x790 = -1;
	uint64_t x791 = UINT64_MAX;
	uint8_t x792 = 16U;
	static volatile uint64_t t15 = 3607075775473886LLU;

	t15 = ((x789/(x790*x791))<<x792);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x825 = INT16_MIN;
	uint16_t x826 = 24251U;
	static volatile uint8_t x827 = 16U;
	static uint8_t x828 = 6U;

	t16 = ((x825/(x826*x827))<<x828);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x857 = INT32_MIN;
	int64_t x858 = INT64_MAX;
	static uint64_t x859 = UINT64_MAX;
	int8_t x860 = 0;

	t17 = ((x857/(x858*x859))<<x860);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x869 = 15U;
	int8_t x870 = -7;
	volatile int32_t t18 = -23;

	t18 = ((x869/(x870*x871))<<x872);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x878 = 1;
	static uint64_t x879 = UINT64_MAX;
	uint8_t x880 = 0U;

	t19 = ((x877/(x878*x879))<<x880);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x885 = -2;
	static int64_t x886 = -10931777271208LL;
	uint16_t x888 = 50U;
	volatile int64_t t20 = -318991734023LL;

	t20 = ((x885/(x886*x887))<<x888);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x901 = INT16_MIN;
	volatile int64_t x902 = -1485026574387LL;
	uint16_t x903 = 44U;
	int8_t x904 = 1;
	volatile int64_t t21 = -3034880244LL;

	t21 = ((x901/(x902*x903))<<x904);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x913 = 1;
	int16_t x914 = -3073;
	static uint16_t x916 = 52U;
	volatile int64_t t22 = 89904118204546LL;

	t22 = ((x913/(x914*x915))<<x916);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x946 = 932U;
	static uint32_t x947 = UINT32_MAX;
	static volatile int64_t x948 = 13LL;
	uint32_t t23 = 209081U;

	t23 = ((x945/(x946*x947))<<x948);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x985 = 1;
	static int8_t x986 = INT8_MIN;
	volatile int32_t x987 = -1;
	int8_t x988 = 1;

	t24 = ((x985/(x986*x987))<<x988);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x1045 = 19207909456LLU;
	static int32_t x1046 = INT32_MAX;
	int32_t x1047 = -1;
	static volatile int8_t x1048 = 0;
	static uint64_t t25 = 14921LLU;

	t25 = ((x1045/(x1046*x1047))<<x1048);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1137 = 16;
	uint8_t x1138 = UINT8_MAX;
	int16_t x1139 = -1;

	t26 = ((x1137/(x1138*x1139))<<x1140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1149 = 775971954U;
	static int32_t x1150 = INT32_MIN;
	uint64_t x1151 = 3371445973LLU;
	static volatile uint16_t x1152 = 44U;
	volatile uint64_t t27 = 51LLU;

	t27 = ((x1149/(x1150*x1151))<<x1152);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1165 = 24U;
	int16_t x1166 = -2;
	int16_t x1167 = -9189;
	int16_t x1168 = 0;

	t28 = ((x1165/(x1166*x1167))<<x1168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1173 = UINT32_MAX;
	uint8_t x1174 = 41U;
	volatile int8_t x1175 = -1;
	uint16_t x1176 = 14U;
	uint32_t t29 = 53073756U;

	t29 = ((x1173/(x1174*x1175))<<x1176);

	if (t29 != 16384U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x1177 = 0U;
	int32_t x1178 = 202310134;
	int16_t x1180 = 0;
	static volatile uint64_t t30 = 930933711LLU;

	t30 = ((x1177/(x1178*x1179))<<x1180);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1277 = UINT64_MAX;
	volatile int64_t x1278 = 5414LL;
	volatile int16_t x1280 = 47;

	t31 = ((x1277/(x1278*x1279))<<x1280);

	if (t31 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1313 = -1;
	int32_t x1314 = -1;
	int32_t x1315 = -43817;
	int8_t x1316 = 3;
	int32_t t32 = 7922;

	t32 = ((x1313/(x1314*x1315))<<x1316);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1330 = INT16_MIN;
	volatile uint64_t x1331 = 313470LLU;
	uint64_t x1332 = 38LLU;
	uint64_t t33 = 6074885072079402LLU;

	t33 = ((x1329/(x1330*x1331))<<x1332);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1333 = -3648;
	static uint64_t x1334 = 324078804020390145LLU;
	int64_t x1335 = INT64_MIN;
	volatile uint8_t x1336 = 5U;
	volatile uint64_t t34 = 19LLU;

	t34 = ((x1333/(x1334*x1335))<<x1336);

	if (t34 != 32LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1353 = -1;
	uint64_t x1354 = UINT64_MAX;
	int32_t x1355 = INT32_MIN;
	uint8_t x1356 = 3U;
	volatile uint64_t t35 = 19853850LLU;

	t35 = ((x1353/(x1354*x1355))<<x1356);

	if (t35 != 68719476728LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1393 = INT8_MIN;
	volatile int8_t x1394 = INT8_MIN;
	int16_t x1395 = -7736;
	uint8_t x1396 = 1U;
	volatile int32_t t36 = -27447491;

	t36 = ((x1393/(x1394*x1395))<<x1396);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1521 = -1LL;
	int8_t x1523 = INT8_MIN;
	uint64_t t37 = 0LLU;

	t37 = ((x1521/(x1522*x1523))<<x1524);

	if (t37 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1525 = INT8_MAX;
	volatile uint64_t x1526 = UINT64_MAX;
	uint32_t x1527 = 3317U;
	volatile uint64_t t38 = 7937567297LLU;

	t38 = ((x1525/(x1526*x1527))<<x1528);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1557 = -13;
	static int16_t x1558 = 2;
	int16_t x1560 = 0;
	int64_t t39 = 22231498624838469LL;

	t39 = ((x1557/(x1558*x1559))<<x1560);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1605 = 3;
	uint32_t x1606 = 28U;
	volatile uint64_t x1607 = 34903196626295438LLU;
	int8_t x1608 = 1;

	t40 = ((x1605/(x1606*x1607))<<x1608);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1641 = 84001705726LL;
	uint8_t x1642 = 1U;
	int64_t x1643 = INT64_MIN;
	volatile int64_t t41 = 14523813380706686LL;

	t41 = ((x1641/(x1642*x1643))<<x1644);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1645 = 95;
	int8_t x1647 = INT8_MAX;
	volatile uint16_t x1648 = 2U;

	t42 = ((x1645/(x1646*x1647))<<x1648);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1822 = -1;
	volatile int8_t x1823 = -1;
	int32_t t43 = -2610989;

	t43 = ((x1821/(x1822*x1823))<<x1824);

	if (t43 != 38) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1851 = -1;
	uint8_t x1852 = 1U;
	uint64_t t44 = 59LLU;

	t44 = ((x1849/(x1850*x1851))<<x1852);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1878 = INT16_MIN;
	int16_t x1879 = -9837;
	uint8_t x1880 = 6U;
	volatile int64_t t45 = 1414107LL;

	t45 = ((x1877/(x1878*x1879))<<x1880);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1933 = 773016LL;
	uint32_t x1934 = UINT32_MAX;
	uint64_t x1935 = 9155341158518080958LLU;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x1933/(x1934*x1935))<<x1936);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1998 = -1977839771959136LL;
	uint64_t x1999 = 962846209502LLU;
	static uint8_t x2000 = 9U;
	volatile uint64_t t47 = 1LLU;

	t47 = ((x1997/(x1998*x1999))<<x2000);

	if (t47 != 512LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2025 = INT32_MIN;
	uint64_t x2027 = UINT64_MAX;

	t48 = ((x2025/(x2026*x2027))<<x2028);

	if (t48 != 4294967296LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2037 = INT16_MAX;
	static volatile int16_t x2038 = 3;
	static int64_t x2039 = -744439903664LL;
	volatile int64_t t49 = -12LL;

	t49 = ((x2037/(x2038*x2039))<<x2040);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2161 = 20209U;
	static uint64_t x2163 = 14LLU;
	int16_t x2164 = 1;
	uint64_t t50 = 12082141554263LLU;

	t50 = ((x2161/(x2162*x2163))<<x2164);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2177 = 5836858655LLU;
	static int8_t x2179 = INT8_MIN;
	uint32_t x2180 = 7U;

	t51 = ((x2177/(x2178*x2179))<<x2180);

	if (t51 != 5836858624LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2281 = 58;
	volatile int8_t x2282 = INT8_MIN;
	uint64_t x2283 = 9374925218LLU;
	uint8_t x2284 = 0U;
	static uint64_t t52 = 2668LLU;

	t52 = ((x2281/(x2282*x2283))<<x2284);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2333 = 0U;
	static int8_t x2334 = -50;
	static int64_t x2335 = -3004183LL;
	uint8_t x2336 = 0U;

	t53 = ((x2333/(x2334*x2335))<<x2336);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2342 = INT16_MAX;
	static uint16_t x2344 = 15U;
	volatile int32_t t54 = -2175161;

	t54 = ((x2341/(x2342*x2343))<<x2344);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2369 = 40825121034LLU;
	uint32_t x2370 = 452399092U;
	static uint32_t x2371 = UINT32_MAX;
	volatile uint16_t x2372 = 8U;
	static volatile uint64_t t55 = 39593LLU;

	t55 = ((x2369/(x2370*x2371))<<x2372);

	if (t55 != 2560LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2413 = UINT8_MAX;
	int8_t x2416 = 9;
	uint32_t t56 = 367515230U;

	t56 = ((x2413/(x2414*x2415))<<x2416);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2449 = 17U;
	static uint32_t x2450 = 65115U;
	int32_t x2451 = 4359802;
	uint64_t x2452 = 2LLU;
	uint32_t t57 = 2U;

	t57 = ((x2449/(x2450*x2451))<<x2452);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2489 = INT8_MIN;
	uint64_t x2490 = UINT64_MAX;
	int8_t x2491 = INT8_MAX;
	uint64_t x2492 = 1LLU;

	t58 = ((x2489/(x2490*x2491))<<x2492);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2529 = INT8_MIN;
	uint16_t x2530 = 359U;
	uint64_t x2531 = 533380774477829LLU;
	volatile int64_t x2532 = 36LL;
	uint64_t t59 = 12LLU;

	t59 = ((x2529/(x2530*x2531))<<x2532);

	if (t59 != 6597069766656LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2541 = 176540LL;
	int16_t x2543 = INT16_MIN;
	int8_t x2544 = 45;
	volatile int64_t t60 = -278224007378004LL;

	t60 = ((x2541/(x2542*x2543))<<x2544);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2553 = -48;
	static uint32_t x2554 = 25817842U;
	uint16_t x2555 = UINT16_MAX;
	volatile int16_t x2556 = 29;
	uint32_t t61 = 1U;

	t61 = ((x2553/(x2554*x2555))<<x2556);

	if (t61 != 536870912U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2601 = 0;
	static uint64_t x2602 = UINT64_MAX;
	int8_t x2604 = 6;
	uint64_t t62 = 13368894728128004LLU;

	t62 = ((x2601/(x2602*x2603))<<x2604);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x2657 = UINT64_MAX;
	static uint8_t x2659 = UINT8_MAX;
	uint16_t x2660 = 10U;
	volatile uint64_t t63 = 36581371995LLU;

	t63 = ((x2657/(x2658*x2659))<<x2660);

	if (t63 != 1024LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2733 = 1U;
	int64_t x2734 = -1LL;
	int16_t x2735 = INT16_MIN;
	int8_t x2736 = 2;
	volatile int64_t t64 = 1499716605824831LL;

	t64 = ((x2733/(x2734*x2735))<<x2736);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2841 = INT8_MIN;
	uint8_t x2842 = 2U;
	int16_t x2843 = INT16_MIN;
	int32_t t65 = 376778;

	t65 = ((x2841/(x2842*x2843))<<x2844);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2853 = UINT8_MAX;
	int16_t x2854 = INT16_MIN;
	uint16_t x2855 = UINT16_MAX;
	int32_t t66 = -398140;

	t66 = ((x2853/(x2854*x2855))<<x2856);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2858 = INT8_MAX;
	int16_t x2859 = INT16_MIN;
	int8_t x2860 = 24;

	t67 = ((x2857/(x2858*x2859))<<x2860);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2873 = INT16_MIN;
	int32_t x2875 = -272568;
	int8_t x2876 = 0;
	volatile int64_t t68 = -91951LL;

	t68 = ((x2873/(x2874*x2875))<<x2876);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x2889 = -55664427903325929LL;
	int16_t x2890 = 20;
	int8_t x2892 = 14;
	int64_t t69 = 17572291822728399LL;

	t69 = ((x2889/(x2890*x2891))<<x2892);

	if (t69 != 1391610697580544LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2893 = -1LL;
	int32_t x2894 = -37;
	uint32_t x2895 = 10574U;
	volatile uint16_t x2896 = 9U;

	t70 = ((x2893/(x2894*x2895))<<x2896);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2934 = 1;
	uint8_t x2936 = 7U;

	t71 = ((x2933/(x2934*x2935))<<x2936);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2969 = 394;
	uint16_t x2970 = UINT16_MAX;
	uint8_t x2971 = 3U;
	uint16_t x2972 = 4U;

	t72 = ((x2969/(x2970*x2971))<<x2972);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x3033 = 6U;
	uint64_t x3034 = 32756LLU;
	uint16_t x3035 = 3U;
	uint32_t x3036 = 27U;
	volatile uint64_t t73 = 254004044639270LLU;

	t73 = ((x3033/(x3034*x3035))<<x3036);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3046 = INT16_MIN;
	uint32_t x3047 = 16482U;
	static int16_t x3048 = 1;

	t74 = ((x3045/(x3046*x3047))<<x3048);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3129 = -1;
	volatile int16_t x3130 = INT16_MIN;
	int8_t x3131 = INT8_MIN;
	static uint16_t x3132 = 1U;

	t75 = ((x3129/(x3130*x3131))<<x3132);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x3134 = -1974;
	static int16_t x3135 = -11514;
	volatile int8_t x3136 = 15;
	volatile int32_t t76 = 1424;

	t76 = ((x3133/(x3134*x3135))<<x3136);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3185 = 952575114LLU;
	uint64_t x3186 = UINT64_MAX;
	volatile uint16_t x3188 = 0U;
	static volatile uint64_t t77 = 15803LLU;

	t77 = ((x3185/(x3186*x3187))<<x3188);

	if (t77 != 29070LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3213 = 3;
	static int64_t x3214 = -1LL;
	uint16_t x3216 = 1U;
	int64_t t78 = 978216875704LL;

	t78 = ((x3213/(x3214*x3215))<<x3216);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3363 = 278U;
	static int8_t x3364 = 3;
	static volatile int32_t t79 = -40;

	t79 = ((x3361/(x3362*x3363))<<x3364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3437 = INT64_MIN;
	int16_t x3438 = INT16_MIN;
	uint16_t x3439 = 20215U;
	static uint16_t x3440 = 1U;

	t80 = ((x3437/(x3438*x3439))<<x3440);

	if (t80 != 27848130270LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x3473 = UINT64_MAX;
	int16_t x3474 = 15;
	uint64_t x3475 = 3793807451LLU;
	static volatile uint16_t x3476 = 1U;
	volatile uint64_t t81 = 96922341112494205LLU;

	t81 = ((x3473/(x3474*x3475))<<x3476);

	if (t81 != 648310676LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3497 = INT8_MIN;
	uint16_t x3498 = UINT16_MAX;
	volatile uint16_t x3499 = 1U;
	int32_t t82 = 9196543;

	t82 = ((x3497/(x3498*x3499))<<x3500);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3657 = 35123367533732662LL;
	uint16_t x3658 = 1U;
	static uint64_t x3659 = 48LLU;
	uint8_t x3660 = 60U;
	static uint64_t t83 = 967638LLU;

	t83 = ((x3657/(x3658*x3659))<<x3660);

	if (t83 != 6917529027641081856LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3669 = -1LL;
	uint32_t x3670 = 86U;
	static int16_t x3671 = INT16_MAX;
	uint8_t x3672 = 0U;
	static volatile int64_t t84 = -70672741184192LL;

	t84 = ((x3669/(x3670*x3671))<<x3672);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x3675 = 14;
	int8_t x3676 = 6;
	volatile int64_t t85 = -301LL;

	t85 = ((x3673/(x3674*x3675))<<x3676);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x3697 = 1U;
	volatile int8_t x3699 = INT8_MIN;
	int8_t x3700 = 4;

	t86 = ((x3697/(x3698*x3699))<<x3700);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3709 = UINT32_MAX;
	int16_t x3710 = 4;
	uint32_t t87 = 113392U;

	t87 = ((x3709/(x3710*x3711))<<x3712);

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x3725 = 60LLU;
	int16_t x3726 = 19;
	int16_t x3727 = INT16_MIN;
	static volatile uint16_t x3728 = 3U;
	static volatile uint64_t t88 = 10891749233835LLU;

	t88 = ((x3725/(x3726*x3727))<<x3728);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x3805 = 55;
	int16_t x3806 = INT16_MIN;
	int16_t x3807 = INT16_MIN;
	static int8_t x3808 = 0;
	volatile int32_t t89 = -446;

	t89 = ((x3805/(x3806*x3807))<<x3808);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x3917 = UINT16_MAX;
	uint32_t x3918 = 465053U;
	int16_t x3919 = INT16_MAX;
	int16_t x3920 = 1;
	volatile uint32_t t90 = 191U;

	t90 = ((x3917/(x3918*x3919))<<x3920);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3926 = -1;
	static uint8_t x3928 = 1U;
	volatile uint32_t t91 = 211238463U;

	t91 = ((x3925/(x3926*x3927))<<x3928);

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3929 = -1LL;
	int16_t x3930 = 11;
	int32_t x3931 = -889;
	uint16_t x3932 = 55U;
	static volatile int64_t t92 = 21498715LL;

	t92 = ((x3929/(x3930*x3931))<<x3932);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3977 = -1;
	int16_t x3978 = INT16_MIN;
	static int8_t x3979 = INT8_MIN;
	static uint8_t x3980 = 2U;
	static volatile int32_t t93 = -123;

	t93 = ((x3977/(x3978*x3979))<<x3980);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4069 = -29;
	int64_t x4070 = INT64_MAX;
	uint64_t x4071 = UINT64_MAX;
	volatile uint64_t t94 = 4629420816686LLU;

	t94 = ((x4069/(x4070*x4071))<<x4072);

	if (t94 != 16777216LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x4110 = 70570036369838772LLU;
	int8_t x4111 = -1;
	int8_t x4112 = 4;
	static volatile uint64_t t95 = 29631499LLU;

	t95 = ((x4109/(x4110*x4111))<<x4112);

	if (t95 != 16LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4138 = INT8_MIN;
	static int16_t x4139 = INT16_MAX;
	int16_t x4140 = 13;
	volatile int32_t t96 = 61;

	t96 = ((x4137/(x4138*x4139))<<x4140);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4149 = 3U;
	volatile int8_t x4150 = INT8_MIN;
	int8_t x4151 = INT8_MAX;
	int16_t x4152 = 2;
	int32_t t97 = 4;

	t97 = ((x4149/(x4150*x4151))<<x4152);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4201 = 9311LLU;
	volatile int8_t x4202 = INT8_MIN;
	static int64_t x4203 = -1LL;
	int64_t x4204 = 12LL;
	uint64_t t98 = 484LLU;

	t98 = ((x4201/(x4202*x4203))<<x4204);

	if (t98 != 294912LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4229 = -3LL;
	int16_t x4230 = INT16_MIN;
	uint32_t x4231 = 576075U;
	uint16_t x4232 = 2U;
	int64_t t99 = -27190060155LL;

	t99 = ((x4229/(x4230*x4231))<<x4232);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


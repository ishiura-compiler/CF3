#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x50 = 24;
uint64_t x145 = 2LLU;
uint16_t x146 = 104U;
volatile uint16_t x147 = UINT16_MAX;
uint8_t x201 = 2U;
int64_t x204 = INT64_MAX;
static volatile int32_t t4 = 1;
int64_t x205 = 478LL;
volatile int8_t x410 = 5;
volatile uint32_t x417 = 139503628U;
int8_t x455 = INT8_MAX;
uint64_t x465 = 15LLU;
volatile uint64_t t11 = 14828111LLU;
uint8_t x535 = 1U;
int8_t x906 = 1;
uint16_t x907 = 0U;
uint16_t x908 = 26784U;
volatile int32_t t14 = -1;
volatile uint8_t x1182 = 20U;
int32_t t16 = 0;
uint16_t x1266 = 8U;
int8_t x1355 = -1;
int32_t x1516 = INT32_MAX;
int16_t x1571 = 1;
uint8_t x1610 = 6U;
uint64_t x1612 = 7959812325LLU;
uint8_t x1650 = 4U;
static uint64_t x1651 = 3185LLU;
volatile uint16_t x1677 = 67U;
volatile uint16_t x1679 = 14926U;
volatile uint8_t x1686 = 2U;
int32_t t28 = -1507;
static uint64_t x1873 = 11780060LLU;
uint64_t x1891 = UINT64_MAX;
int32_t x1892 = INT32_MIN;
uint8_t x1917 = 14U;
uint16_t x1919 = UINT16_MAX;
uint16_t x2085 = 2U;
uint64_t x2120 = 192664127007390116LLU;
int64_t x2172 = -11213413LL;
int8_t x2191 = 23;
volatile uint32_t x2248 = UINT32_MAX;
static int8_t x2261 = 2;
volatile uint16_t x2262 = 5U;
uint8_t x2378 = 0U;
int16_t x2401 = 4220;
static int32_t t44 = -2;
volatile int32_t t47 = -38097;
int32_t x2600 = INT32_MIN;
volatile int64_t t49 = INT64_MAX;
int32_t x2699 = INT32_MIN;
volatile int32_t t51 = INT32_MAX;
static volatile int64_t t52 = -2025635373339LL;
uint64_t x2821 = UINT64_MAX;
uint8_t x2822 = 31U;
volatile int32_t x2823 = -1;
uint32_t x2824 = UINT32_MAX;
int32_t x2846 = 1;
static volatile uint8_t x2847 = 29U;
int32_t t56 = 4242141;
volatile int32_t t59 = -1141;
uint64_t t60 = 16400598298617LLU;
uint32_t x3309 = 20U;
static int64_t x3311 = INT64_MIN;
volatile int32_t x3373 = 0;
volatile int16_t x3375 = INT16_MAX;
int32_t x3603 = INT32_MIN;
int8_t x3630 = 1;
uint32_t x3713 = UINT32_MAX;
volatile uint8_t x3954 = 0U;
int8_t x3956 = INT8_MAX;
uint64_t x3989 = 3LLU;
static int16_t x3991 = -6250;
int64_t x3999 = INT64_MIN;
int32_t t70 = -2544963;
static int16_t x4009 = INT16_MAX;
int16_t x4012 = INT16_MAX;
static uint8_t x4022 = 40U;
int64_t x4023 = INT64_MIN;
volatile uint32_t t73 = 440U;
int8_t x4235 = -7;
uint8_t x4326 = 3U;
volatile int64_t x4328 = -1LL;
uint16_t x4385 = 0U;
int32_t t80 = 553575659;
volatile int16_t x4462 = 27;
volatile int64_t x4463 = -1LL;
volatile int16_t x4508 = 3;
uint64_t x4537 = 332740072701628LLU;
static uint32_t x4550 = 8U;
int32_t x4551 = -1;
uint8_t x4562 = 37U;
volatile int64_t x4563 = INT64_MIN;
static int64_t x4564 = INT64_MIN;
int32_t x4619 = INT32_MIN;
int64_t x4727 = INT64_MIN;
uint8_t x4728 = UINT8_MAX;
volatile int32_t t92 = 3;
int32_t t95 = -3593;
int8_t x4947 = 0;
static int32_t t97 = 766345;
int8_t x5006 = INT8_MAX;


void f0(void) {
	static uint64_t x5 = UINT64_MAX;
	volatile int16_t x6 = 0;
	static volatile int8_t x7 = 14;
	int32_t x8 = -1;
	uint64_t t0 = UINT64_MAX;

	t0 = (x5<<(x6>>(x7<=x8)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int8_t x51 = INT8_MAX;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t1 = 113995;

	t1 = (x49<<(x50>>(x51<=x52)));

	if (t1 != 1044480) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x89 = INT16_MAX;
	volatile uint16_t x90 = 6U;
	uint64_t x91 = 3289880630731032LLU;
	static int8_t x92 = -1;
	static volatile int32_t t2 = 1;

	t2 = (x89<<(x90>>(x91<=x92)));

	if (t2 != 262136) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x148 = UINT16_MAX;
	static uint64_t t3 = 806673346LLU;

	t3 = (x145<<(x146>>(x147<=x148)));

	if (t3 != 9007199254740992LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x202 = 1U;
	static uint8_t x203 = 16U;

	t4 = (x201<<(x202>>(x203<=x204)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x206 = 0;
	static int8_t x207 = -12;
	int8_t x208 = INT8_MIN;
	volatile int64_t t5 = 67368255150620LL;

	t5 = (x205<<(x206>>(x207<=x208)));

	if (t5 != 478LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x221 = 0U;
	uint8_t x222 = 11U;
	int8_t x223 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t6 = -498848614;

	t6 = (x221<<(x222>>(x223<=x224)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x409 = UINT64_MAX;
	int64_t x411 = INT64_MIN;
	uint32_t x412 = 1105U;
	uint64_t t7 = 2899831222553136653LLU;

	t7 = (x409<<(x410>>(x411<=x412)));

	if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x413 = 1U;
	static int8_t x414 = 5;
	volatile int8_t x415 = INT8_MIN;
	uint16_t x416 = 3059U;
	volatile int32_t t8 = 1;

	t8 = (x413<<(x414>>(x415<=x416)));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x418 = 1;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = -13;
	volatile uint32_t t9 = 74852726U;

	t9 = (x417<<(x418>>(x419<=x420)));

	if (t9 != 279007256U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x453 = INT64_MAX;
	volatile uint16_t x454 = 1U;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x453<<(x454>>(x455<=x456)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x466 = 1LL;
	static uint64_t x467 = 1048837279641LLU;
	int64_t x468 = INT64_MIN;

	t11 = (x465<<(x466>>(x467<=x468)));

	if (t11 != 15LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x533 = UINT64_MAX;
	int32_t x534 = 6;
	static volatile int64_t x536 = INT64_MAX;
	volatile uint64_t t12 = 148513546LLU;

	t12 = (x533<<(x534>>(x535<=x536)));

	if (t12 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x905 = 3U;
	int32_t t13 = 30427;

	t13 = (x905<<(x906>>(x907<=x908)));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x957 = 36U;
	uint64_t x958 = 5LLU;
	int16_t x959 = -1;
	int8_t x960 = INT8_MAX;

	t14 = (x957<<(x958>>(x959<=x960)));

	if (t14 != 144) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1153 = UINT16_MAX;
	static int8_t x1154 = 0;
	volatile int32_t x1155 = INT32_MAX;
	int8_t x1156 = INT8_MAX;
	static volatile int32_t t15 = 663022336;

	t15 = (x1153<<(x1154>>(x1155<=x1156)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1181 = 14U;
	int16_t x1183 = INT16_MAX;
	uint32_t x1184 = 10622551U;

	t16 = (x1181<<(x1182>>(x1183<=x1184)));

	if (t16 != 14336) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1241 = UINT64_MAX;
	int8_t x1242 = INT8_MAX;
	int64_t x1243 = INT64_MIN;
	uint16_t x1244 = 11U;
	volatile uint64_t t17 = 13437LLU;

	t17 = (x1241<<(x1242>>(x1243<=x1244)));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1257 = 0;
	uint8_t x1258 = 59U;
	uint32_t x1259 = 806693U;
	volatile int32_t x1260 = -1;
	int32_t t18 = 4;

	t18 = (x1257<<(x1258>>(x1259<=x1260)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1265 = 17434U;
	static int8_t x1267 = INT8_MIN;
	volatile int8_t x1268 = INT8_MIN;
	volatile uint32_t t19 = 10600655U;

	t19 = (x1265<<(x1266>>(x1267<=x1268)));

	if (t19 != 278944U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1345 = INT8_MAX;
	static uint8_t x1346 = 2U;
	int64_t x1347 = 30269134450145LL;
	static int64_t x1348 = -54594114LL;
	int32_t t20 = 8795497;

	t20 = (x1345<<(x1346>>(x1347<=x1348)));

	if (t20 != 508) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1353 = 64758911647LLU;
	uint32_t x1354 = 3U;
	uint32_t x1356 = UINT32_MAX;
	static uint64_t t21 = 828088736LLU;

	t21 = (x1353<<(x1354>>(x1355<=x1356)));

	if (t21 != 129517823294LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1513 = 69702LL;
	int8_t x1514 = 23;
	int64_t x1515 = 152LL;
	volatile int64_t t22 = -103145744689863524LL;

	t22 = (x1513<<(x1514>>(x1515<=x1516)));

	if (t22 != 142749696LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1569 = 6591U;
	volatile uint16_t x1570 = 6U;
	uint16_t x1572 = UINT16_MAX;
	static volatile int32_t t23 = -962465;

	t23 = (x1569<<(x1570>>(x1571<=x1572)));

	if (t23 != 52728) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1609 = 6U;
	uint8_t x1611 = 26U;
	volatile uint32_t t24 = 98584681U;

	t24 = (x1609<<(x1610>>(x1611<=x1612)));

	if (t24 != 48U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1625 = 25U;
	int64_t x1626 = 0LL;
	volatile uint64_t x1627 = 57746809646399LLU;
	int8_t x1628 = -1;
	static volatile int32_t t25 = 49479;

	t25 = (x1625<<(x1626>>(x1627<=x1628)));

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1649 = 4584U;
	int64_t x1652 = INT64_MIN;
	uint32_t t26 = 28453989U;

	t26 = (x1649<<(x1650>>(x1651<=x1652)));

	if (t26 != 18336U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1678 = 1;
	int32_t x1680 = -1;
	volatile int32_t t27 = -520083;

	t27 = (x1677<<(x1678>>(x1679<=x1680)));

	if (t27 != 134) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1685 = UINT8_MAX;
	int16_t x1687 = -969;
	volatile uint32_t x1688 = 5135041U;

	t28 = (x1685<<(x1686>>(x1687<=x1688)));

	if (t28 != 1020) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1737 = UINT64_MAX;
	int8_t x1738 = 3;
	static int64_t x1739 = INT64_MAX;
	uint64_t x1740 = UINT64_MAX;
	volatile uint64_t t29 = 169377181LLU;

	t29 = (x1737<<(x1738>>(x1739<=x1740)));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1874 = 0;
	int32_t x1875 = INT32_MIN;
	int16_t x1876 = INT16_MAX;
	volatile uint64_t t30 = 16458068014LLU;

	t30 = (x1873<<(x1874>>(x1875<=x1876)));

	if (t30 != 11780060LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1889 = 157605591U;
	volatile uint8_t x1890 = 2U;
	volatile uint32_t t31 = 5559048U;

	t31 = (x1889<<(x1890>>(x1891<=x1892)));

	if (t31 != 630422364U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1918 = 25U;
	uint64_t x1920 = UINT64_MAX;
	static int32_t t32 = 3704;

	t32 = (x1917<<(x1918>>(x1919<=x1920)));

	if (t32 != 57344) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x2021 = 303825590549264LL;
	uint16_t x2022 = 1U;
	static int16_t x2023 = -1024;
	static int16_t x2024 = -1;
	int64_t t33 = -614315399269LL;

	t33 = (x2021<<(x2022>>(x2023<=x2024)));

	if (t33 != 303825590549264LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2045 = 3402LLU;
	volatile uint32_t x2046 = 3U;
	int32_t x2047 = INT32_MAX;
	uint16_t x2048 = 6U;
	volatile uint64_t t34 = 69917826317942064LLU;

	t34 = (x2045<<(x2046>>(x2047<=x2048)));

	if (t34 != 27216LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2086 = 28U;
	int8_t x2087 = -26;
	int8_t x2088 = -1;
	int32_t t35 = 7412;

	t35 = (x2085<<(x2086>>(x2087<=x2088)));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2117 = UINT64_MAX;
	static uint8_t x2118 = 1U;
	int64_t x2119 = -1LL;
	volatile uint64_t t36 = 40815655502039LLU;

	t36 = (x2117<<(x2118>>(x2119<=x2120)));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2157 = 6LL;
	volatile int16_t x2158 = 91;
	int32_t x2159 = INT32_MIN;
	volatile int16_t x2160 = INT16_MIN;
	int64_t t37 = -5LL;

	t37 = (x2157<<(x2158>>(x2159<=x2160)));

	if (t37 != 211106232532992LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2169 = INT64_MAX;
	uint16_t x2170 = 0U;
	static uint8_t x2171 = UINT8_MAX;
	int64_t t38 = INT64_MAX;

	t38 = (x2169<<(x2170>>(x2171<=x2172)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2189 = 9550U;
	uint8_t x2190 = 1U;
	int64_t x2192 = -1LL;
	volatile int32_t t39 = 68906305;

	t39 = (x2189<<(x2190>>(x2191<=x2192)));

	if (t39 != 19100) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2245 = 5U;
	int8_t x2246 = 7;
	int32_t x2247 = -1;
	volatile uint32_t t40 = 74705U;

	t40 = (x2245<<(x2246>>(x2247<=x2248)));

	if (t40 != 40U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2263 = INT16_MIN;
	static volatile int8_t x2264 = INT8_MAX;
	volatile int32_t t41 = -24145;

	t41 = (x2261<<(x2262>>(x2263<=x2264)));

	if (t41 != 8) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2293 = 3U;
	int16_t x2294 = 13;
	int64_t x2295 = INT64_MIN;
	int64_t x2296 = INT64_MAX;
	static volatile int32_t t42 = 67610;

	t42 = (x2293<<(x2294>>(x2295<=x2296)));

	if (t42 != 192) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2377 = UINT64_MAX;
	static uint16_t x2379 = 8U;
	int8_t x2380 = 0;
	uint64_t t43 = UINT64_MAX;

	t43 = (x2377<<(x2378>>(x2379<=x2380)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2402 = 15;
	uint64_t x2403 = 251484799127LLU;
	int64_t x2404 = -1LL;

	t44 = (x2401<<(x2402>>(x2403<=x2404)));

	if (t44 != 540160) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2421 = INT8_MAX;
	int8_t x2422 = 0;
	static uint16_t x2423 = UINT16_MAX;
	static uint64_t x2424 = UINT64_MAX;
	int32_t t45 = 6097;

	t45 = (x2421<<(x2422>>(x2423<=x2424)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2461 = INT32_MAX;
	int8_t x2462 = 0;
	int64_t x2463 = -16824166101LL;
	uint32_t x2464 = UINT32_MAX;
	static volatile int32_t t46 = INT32_MAX;

	t46 = (x2461<<(x2462>>(x2463<=x2464)));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2529 = INT8_MAX;
	uint8_t x2530 = 3U;
	int8_t x2531 = -1;
	volatile uint64_t x2532 = 11239507691364737LLU;

	t47 = (x2529<<(x2530>>(x2531<=x2532)));

	if (t47 != 1016) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2597 = 25U;
	uint8_t x2598 = 3U;
	static volatile int64_t x2599 = -78408727068048LL;
	static volatile int32_t t48 = -884059429;

	t48 = (x2597<<(x2598>>(x2599<=x2600)));

	if (t48 != 50) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2617 = INT64_MAX;
	static int8_t x2618 = 1;
	volatile int32_t x2619 = INT32_MAX;
	static int64_t x2620 = 14958727887586364LL;

	t49 = (x2617<<(x2618>>(x2619<=x2620)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2669 = 125;
	volatile int8_t x2670 = 0;
	int8_t x2671 = -1;
	volatile uint32_t x2672 = UINT32_MAX;
	volatile int32_t t50 = 36887865;

	t50 = (x2669<<(x2670>>(x2671<=x2672)));

	if (t50 != 125) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2697 = INT32_MAX;
	int16_t x2698 = 1;
	int16_t x2700 = INT16_MAX;

	t51 = (x2697<<(x2698>>(x2699<=x2700)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2785 = 432703528047LL;
	static uint32_t x2786 = 5U;
	static int64_t x2787 = 3723085LL;
	uint8_t x2788 = 118U;

	t52 = (x2785<<(x2786>>(x2787<=x2788)));

	if (t52 != 13846512897504LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x2789 = UINT16_MAX;
	int64_t x2790 = 1LL;
	uint16_t x2791 = 32699U;
	int16_t x2792 = -1;
	int32_t t53 = -57683;

	t53 = (x2789<<(x2790>>(x2791<=x2792)));

	if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t t54 = 3257LLU;

	t54 = (x2821<<(x2822>>(x2823<=x2824)));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2829 = 2;
	volatile int16_t x2830 = 4;
	volatile int16_t x2831 = -1;
	int64_t x2832 = INT64_MAX;
	int32_t t55 = 2;

	t55 = (x2829<<(x2830>>(x2831<=x2832)));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2845 = UINT8_MAX;
	static int32_t x2848 = INT32_MAX;

	t56 = (x2845<<(x2846>>(x2847<=x2848)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3133 = INT8_MAX;
	volatile uint16_t x3134 = 8U;
	static int16_t x3135 = INT16_MIN;
	int64_t x3136 = -258189821LL;
	int32_t t57 = -74324640;

	t57 = (x3133<<(x3134>>(x3135<=x3136)));

	if (t57 != 32512) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3137 = UINT64_MAX;
	int32_t x3138 = 7;
	volatile int32_t x3139 = 1;
	uint16_t x3140 = UINT16_MAX;
	uint64_t t58 = 1619LLU;

	t58 = (x3137<<(x3138>>(x3139<=x3140)));

	if (t58 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3201 = UINT8_MAX;
	uint64_t x3202 = 4LLU;
	int32_t x3203 = INT32_MIN;
	uint8_t x3204 = 7U;

	t59 = (x3201<<(x3202>>(x3203<=x3204)));

	if (t59 != 1020) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3297 = 9227836751353048LLU;
	int16_t x3298 = 7;
	uint16_t x3299 = 3892U;
	int64_t x3300 = 579301773LL;

	t60 = (x3297<<(x3298>>(x3299<=x3300)));

	if (t60 != 73822694010824384LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3310 = 41U;
	volatile int32_t x3312 = INT32_MIN;
	volatile uint32_t t61 = 61U;

	t61 = (x3309<<(x3310>>(x3311<=x3312)));

	if (t61 != 20971520U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3374 = 11;
	volatile int32_t x3376 = INT32_MAX;
	static volatile int32_t t62 = -87780;

	t62 = (x3373<<(x3374>>(x3375<=x3376)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3601 = INT32_MAX;
	int16_t x3602 = 1;
	int64_t x3604 = 1704600200167600313LL;
	int32_t t63 = INT32_MAX;

	t63 = (x3601<<(x3602>>(x3603<=x3604)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3629 = 253944085515LLU;
	uint8_t x3631 = UINT8_MAX;
	int16_t x3632 = -1;
	volatile uint64_t t64 = 24LLU;

	t64 = (x3629<<(x3630>>(x3631<=x3632)));

	if (t64 != 507888171030LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3661 = 31353345380675LL;
	static uint16_t x3662 = 0U;
	volatile uint64_t x3663 = UINT64_MAX;
	uint8_t x3664 = 56U;
	int64_t t65 = 484818942476003LL;

	t65 = (x3661<<(x3662>>(x3663<=x3664)));

	if (t65 != 31353345380675LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3714 = 10U;
	int16_t x3715 = INT16_MIN;
	uint8_t x3716 = 2U;
	static uint32_t t66 = 361494738U;

	t66 = (x3713<<(x3714>>(x3715<=x3716)));

	if (t66 != 4294967264U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3757 = UINT32_MAX;
	uint8_t x3758 = 21U;
	static int32_t x3759 = 1084;
	static uint32_t x3760 = UINT32_MAX;
	uint32_t t67 = 6U;

	t67 = (x3757<<(x3758>>(x3759<=x3760)));

	if (t67 != 4294966272U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x3953 = 1327374825U;
	int8_t x3955 = -59;
	volatile uint32_t t68 = 8U;

	t68 = (x3953<<(x3954>>(x3955<=x3956)));

	if (t68 != 1327374825U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3990 = INT8_MAX;
	int8_t x3992 = INT8_MIN;
	uint64_t t69 = 5239017620008446404LLU;

	t69 = (x3989<<(x3990>>(x3991<=x3992)));

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3997 = 1330U;
	volatile uint64_t x3998 = 10LLU;
	int64_t x4000 = INT64_MIN;

	t70 = (x3997<<(x3998>>(x3999<=x4000)));

	if (t70 != 42560) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4010 = 8LL;
	static int64_t x4011 = INT64_MIN;
	static volatile int32_t t71 = 315900;

	t71 = (x4009<<(x4010>>(x4011<=x4012)));

	if (t71 != 524272) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4021 = 1489U;
	int8_t x4024 = INT8_MAX;
	int32_t t72 = -6541377;

	t72 = (x4021<<(x4022>>(x4023<=x4024)));

	if (t72 != 1561329664) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x4053 = 4427U;
	volatile uint16_t x4054 = 0U;
	static volatile int16_t x4055 = INT16_MAX;
	uint64_t x4056 = 5894LLU;

	t73 = (x4053<<(x4054>>(x4055<=x4056)));

	if (t73 != 4427U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x4105 = INT16_MAX;
	int16_t x4106 = 29;
	int8_t x4107 = INT8_MIN;
	uint16_t x4108 = 30U;
	static int32_t t74 = -1;

	t74 = (x4105<<(x4106>>(x4107<=x4108)));

	if (t74 != 536854528) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4209 = UINT64_MAX;
	static uint32_t x4210 = 0U;
	int32_t x4211 = INT32_MIN;
	int32_t x4212 = INT32_MIN;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = (x4209<<(x4210>>(x4211<=x4212)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x4213 = 1815915;
	uint16_t x4214 = 0U;
	static int16_t x4215 = -50;
	int8_t x4216 = -1;
	volatile int32_t t76 = -312;

	t76 = (x4213<<(x4214>>(x4215<=x4216)));

	if (t76 != 1815915) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4233 = 350161380382LL;
	volatile uint64_t x4234 = 18LLU;
	volatile int16_t x4236 = INT16_MIN;
	int64_t t77 = -203LL;

	t77 = (x4233<<(x4234>>(x4235<=x4236)));

	if (t77 != 91792704898859008LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4325 = 17U;
	int64_t x4327 = INT64_MIN;
	volatile int32_t t78 = 0;

	t78 = (x4325<<(x4326>>(x4327<=x4328)));

	if (t78 != 34) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4386 = 3U;
	int16_t x4387 = INT16_MIN;
	int32_t x4388 = 0;
	volatile int32_t t79 = 96772;

	t79 = (x4385<<(x4386>>(x4387<=x4388)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4393 = UINT8_MAX;
	volatile uint16_t x4394 = 21U;
	int16_t x4395 = 574;
	static int16_t x4396 = -1;

	t80 = (x4393<<(x4394>>(x4395<=x4396)));

	if (t80 != 534773760) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4461 = 313U;
	static volatile uint8_t x4464 = 90U;
	volatile int32_t t81 = 214295;

	t81 = (x4461<<(x4462>>(x4463<=x4464)));

	if (t81 != 2564096) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4505 = 11;
	int64_t x4506 = 1LL;
	uint64_t x4507 = UINT64_MAX;
	int32_t t82 = -202470;

	t82 = (x4505<<(x4506>>(x4507<=x4508)));

	if (t82 != 22) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4538 = 0U;
	uint64_t x4539 = 25LLU;
	uint64_t x4540 = 3938209416LLU;
	uint64_t t83 = 6273592LLU;

	t83 = (x4537<<(x4538>>(x4539<=x4540)));

	if (t83 != 332740072701628LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4549 = 6;
	volatile int32_t x4552 = -78658;
	int32_t t84 = 37322;

	t84 = (x4549<<(x4550>>(x4551<=x4552)));

	if (t84 != 1536) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4553 = UINT64_MAX;
	volatile uint32_t x4554 = 15U;
	int32_t x4555 = -6702241;
	int8_t x4556 = -1;
	volatile uint64_t t85 = 1327250748459262919LLU;

	t85 = (x4553<<(x4554>>(x4555<=x4556)));

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4561 = 39391604U;
	volatile uint32_t t86 = 36019554U;

	t86 = (x4561<<(x4562>>(x4563<=x4564)));

	if (t86 != 1171259392U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4589 = 7LLU;
	uint64_t x4590 = 2LLU;
	int16_t x4591 = 65;
	int8_t x4592 = -1;
	uint64_t t87 = 1125191518413315607LLU;

	t87 = (x4589<<(x4590>>(x4591<=x4592)));

	if (t87 != 28LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4617 = 5;
	int16_t x4618 = 1;
	volatile int64_t x4620 = -1LL;
	static volatile int32_t t88 = 0;

	t88 = (x4617<<(x4618>>(x4619<=x4620)));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4621 = 20;
	uint32_t x4622 = 5U;
	int16_t x4623 = INT16_MIN;
	int32_t x4624 = -4;
	int32_t t89 = -1;

	t89 = (x4621<<(x4622>>(x4623<=x4624)));

	if (t89 != 80) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4689 = UINT16_MAX;
	int32_t x4690 = 15;
	int16_t x4691 = INT16_MIN;
	static uint32_t x4692 = 55U;
	volatile int32_t t90 = 1;

	t90 = (x4689<<(x4690>>(x4691<=x4692)));

	if (t90 != 2147450880) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4693 = 1U;
	int8_t x4694 = 1;
	int32_t x4695 = -4496966;
	int16_t x4696 = 2;
	volatile int32_t t91 = 14527274;

	t91 = (x4693<<(x4694>>(x4695<=x4696)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4725 = INT16_MAX;
	uint16_t x4726 = 17U;

	t92 = (x4725<<(x4726>>(x4727<=x4728)));

	if (t92 != 8388352) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x4753 = 29863U;
	int16_t x4754 = 21;
	volatile int8_t x4755 = INT8_MIN;
	int8_t x4756 = 60;
	static volatile int32_t t93 = 51681887;

	t93 = (x4753<<(x4754>>(x4755<=x4756)));

	if (t93 != 30579712) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4769 = 2502;
	uint16_t x4770 = 15U;
	int16_t x4771 = -217;
	int8_t x4772 = -4;
	volatile int32_t t94 = 18;

	t94 = (x4769<<(x4770>>(x4771<=x4772)));

	if (t94 != 320256) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x4861 = 287U;
	static int8_t x4862 = 2;
	uint8_t x4863 = 1U;
	static uint64_t x4864 = 164LLU;

	t95 = (x4861<<(x4862>>(x4863<=x4864)));

	if (t95 != 574) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x4945 = 13698081LLU;
	volatile uint8_t x4946 = 12U;
	volatile uint32_t x4948 = 122803U;
	uint64_t t96 = 47627LLU;

	t96 = (x4945<<(x4946>>(x4947<=x4948)));

	if (t96 != 876677184LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4957 = INT8_MAX;
	volatile uint32_t x4958 = 18U;
	static uint16_t x4959 = UINT16_MAX;
	static int8_t x4960 = INT8_MIN;

	t97 = (x4957<<(x4958>>(x4959<=x4960)));

	if (t97 != 33292288) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5005 = UINT64_MAX;
	int64_t x5007 = INT64_MIN;
	uint8_t x5008 = 23U;
	uint64_t t98 = 1100793LLU;

	t98 = (x5005<<(x5006>>(x5007<=x5008)));

	if (t98 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5013 = UINT32_MAX;
	static uint8_t x5014 = 26U;
	int64_t x5015 = INT64_MIN;
	volatile int16_t x5016 = -1;
	uint32_t t99 = 44878067U;

	t99 = (x5013<<(x5014>>(x5015<=x5016)));

	if (t99 != 4294959104U) { NG(); } else { ; }
	
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


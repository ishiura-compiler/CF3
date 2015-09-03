#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x121 = INT32_MIN;
int32_t x124 = 1;
volatile uint64_t t1 = 1695452789568022969LLU;
int64_t x190 = 18305LL;
uint64_t x191 = UINT64_MAX;
int8_t x213 = 1;
int8_t x216 = 0;
int32_t t4 = -486191;
int64_t x268 = 0LL;
static int16_t x399 = INT16_MAX;
volatile int8_t x400 = 6;
int64_t t7 = 949848LL;
uint64_t x475 = UINT64_MAX;
static volatile int64_t t9 = 636561LL;
uint32_t x557 = 2053696U;
static int16_t x597 = INT16_MIN;
static int16_t x598 = INT16_MIN;
uint16_t x599 = UINT16_MAX;
int64_t x613 = -1559980099LL;
int32_t x634 = -2;
volatile uint64_t x755 = 222LLU;
int64_t x766 = -1LL;
int64_t x778 = INT64_MAX;
static uint64_t x1069 = 31446816796LLU;
uint8_t x1251 = 58U;
uint64_t x1355 = 20837LLU;
int8_t x1457 = INT8_MAX;
uint64_t t23 = 2581040263339LLU;
static volatile uint8_t x1470 = 3U;
volatile int64_t t25 = 19355316750299069LL;
volatile int8_t x1550 = -1;
int64_t x1552 = 3LL;
static int64_t t26 = -1LL;
uint64_t x1667 = UINT64_MAX;
int64_t x1711 = 1333759079872335LL;
int32_t x1725 = 54;
volatile int64_t t31 = -6703670148116LL;
static uint16_t x1920 = 5U;
uint32_t x1929 = UINT32_MAX;
int16_t x2067 = 40;
uint32_t x2094 = UINT32_MAX;
volatile int8_t x2095 = 13;
static volatile uint64_t t39 = 2636457495906175LLU;
uint8_t x2258 = UINT8_MAX;
volatile uint64_t t41 = 32869321411929744LLU;
int32_t x2599 = INT32_MAX;
volatile int8_t x2600 = 0;
volatile int64_t t45 = 2716212LL;
volatile int16_t x2651 = 1;
static volatile int32_t t47 = 502;
static volatile int64_t x2789 = INT64_MIN;
uint8_t x2790 = 3U;
uint16_t x2891 = UINT16_MAX;
volatile int64_t t52 = -69126427686499LL;
int32_t x2981 = INT32_MIN;
static uint8_t x2983 = UINT8_MAX;
uint32_t t53 = 103834U;
volatile int8_t x3152 = 6;
int8_t x3287 = 27;
uint16_t x3499 = 97U;
int64_t x3525 = -1LL;
volatile int32_t x3746 = -40331541;
uint8_t x3848 = 7U;
volatile int64_t t67 = -760686184097130611LL;
static uint16_t x4009 = 6U;
int16_t x4024 = 14;
volatile uint64_t t71 = 25863415892954405LLU;
volatile uint64_t t72 = 130924769816LLU;
uint16_t x4215 = 147U;
int8_t x4395 = 63;
uint8_t x4396 = 2U;
volatile int8_t x4405 = 21;
volatile uint32_t x4459 = 296U;
uint16_t x4467 = 14U;
volatile uint16_t x4468 = 10U;
uint64_t x4500 = 15LLU;
int64_t t80 = 189667LL;
static int64_t x4583 = INT64_MAX;
uint64_t t82 = 934840104LLU;
int16_t x4637 = INT16_MIN;
uint64_t x4638 = 44LLU;
static int64_t x4669 = -1LL;
int64_t x4670 = INT64_MAX;
int64_t t84 = 6148377408537171LL;
volatile int8_t x4888 = 3;
int8_t x4902 = INT8_MIN;
uint64_t x4909 = 55561441989533LLU;
uint8_t x4912 = 1U;
volatile uint8_t x5027 = 0U;
uint8_t x5040 = 0U;
int16_t x5313 = 0;
uint8_t x5316 = 2U;
uint8_t x5360 = 1U;
uint64_t x5602 = 118213489550LLU;


void f0(void) {
	int64_t x1 = 517622965396466907LL;
	volatile uint8_t x2 = 29U;
	uint16_t x3 = UINT16_MAX;
	uint16_t x4 = 7U;
	int64_t t0 = -647LL;

	t0 = ((x1%x2)*(x3>>x4));

	if (t0 != 4599LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x122 = 1LLU;
	uint64_t x123 = 1974517270LLU;

	t1 = ((x121%x122)*(x123>>x124));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile uint16_t x160 = 3U;
	volatile uint64_t t2 = 70936588956924LLU;

	t2 = ((x157%x158)*(x159>>x160));

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x189 = INT8_MAX;
	int16_t x192 = 0;
	volatile uint64_t t3 = 141077779916319285LLU;

	t3 = ((x189%x190)*(x191>>x192));

	if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x214 = INT32_MIN;
	static uint8_t x215 = UINT8_MAX;

	t4 = ((x213%x214)*(x215>>x216));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MAX;
	volatile int64_t t5 = 833573LL;

	t5 = ((x265%x266)*(x267>>x268));

	if (t5 != -1073709056LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x301 = 70388875;
	uint64_t x302 = 473735772391726650LLU;
	uint64_t x303 = 9LLU;
	int16_t x304 = 1;
	uint64_t t6 = 49LLU;

	t6 = ((x301%x302)*(x303>>x304));

	if (t6 != 281555500LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x397 = INT64_MIN;
	uint8_t x398 = 15U;

	t7 = ((x397%x398)*(x399>>x400));

	if (t7 != -4088LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x473 = 3U;
	static uint8_t x474 = UINT8_MAX;
	int16_t x476 = 0;
	volatile uint64_t t8 = 1LLU;

	t8 = ((x473%x474)*(x475>>x476));

	if (t8 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x493 = INT64_MIN;
	static int64_t x494 = INT64_MAX;
	static int16_t x495 = 74;
	int16_t x496 = 31;

	t9 = ((x493%x494)*(x495>>x496));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x558 = 28U;
	volatile uint32_t x559 = 55U;
	uint16_t x560 = 30U;
	static uint32_t t10 = 1938283U;

	t10 = ((x557%x558)*(x559>>x560));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x600 = 1;
	volatile int32_t t11 = 581612122;

	t11 = ((x597%x598)*(x599>>x600));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x614 = UINT8_MAX;
	volatile int16_t x615 = INT16_MAX;
	uint8_t x616 = 0U;
	static int64_t t12 = -20LL;

	t12 = ((x613%x614)*(x615>>x616));

	if (t12 != -131068LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x633 = INT64_MIN;
	uint64_t x635 = 280813290136843LLU;
	static volatile int16_t x636 = 2;
	volatile uint64_t t13 = 41429822431371LLU;

	t13 = ((x633%x634)*(x635>>x636));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x753 = UINT8_MAX;
	int64_t x754 = INT64_MIN;
	volatile int8_t x756 = 29;
	volatile uint64_t t14 = 4018515LLU;

	t14 = ((x753%x754)*(x755>>x756));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x765 = -1;
	uint8_t x767 = 29U;
	uint8_t x768 = 0U;
	int64_t t15 = -13433460LL;

	t15 = ((x765%x766)*(x767>>x768));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x777 = 126212U;
	volatile uint64_t x779 = UINT64_MAX;
	volatile uint32_t x780 = 22U;
	uint64_t t16 = 26382385LLU;

	t16 = ((x777%x778)*(x779>>x780));

	if (t16 != 555086246259331836LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1045 = 50191422U;
	int64_t x1046 = 148173015112183033LL;
	uint8_t x1047 = 38U;
	uint8_t x1048 = 4U;
	static int64_t t17 = -1LL;

	t17 = ((x1045%x1046)*(x1047>>x1048));

	if (t17 != 100382844LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1070 = 21808774207481LLU;
	uint32_t x1071 = 838U;
	int8_t x1072 = 1;
	volatile uint64_t t18 = 61496159LLU;

	t18 = ((x1069%x1070)*(x1071>>x1072));

	if (t18 != 13176216237524LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1137 = 353389U;
	uint16_t x1138 = UINT16_MAX;
	volatile uint64_t x1139 = UINT64_MAX;
	int16_t x1140 = 1;
	uint64_t t19 = 3951579LLU;

	t19 = ((x1137%x1138)*(x1139>>x1140));

	if (t19 != 18446744073709525902LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1249 = INT32_MIN;
	int16_t x1250 = -1;
	uint16_t x1252 = 2U;
	int32_t t20 = 13;

	t20 = ((x1249%x1250)*(x1251>>x1252));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1273 = INT8_MAX;
	int16_t x1274 = -1;
	volatile int32_t x1275 = 2545065;
	uint8_t x1276 = 15U;
	int32_t t21 = -450963;

	t21 = ((x1273%x1274)*(x1275>>x1276));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1353 = -130393270671LL;
	int32_t x1354 = INT32_MIN;
	static int8_t x1356 = 0;
	static volatile uint64_t t22 = 5LLU;

	t22 = ((x1353%x1354)*(x1355>>x1356));

	if (t22 != 18446711896134982549LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1458 = 36929544193120738LLU;
	uint16_t x1459 = 7U;
	int8_t x1460 = 1;

	t23 = ((x1457%x1458)*(x1459>>x1460));

	if (t23 != 381LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1469 = 0U;
	volatile uint16_t x1471 = 3105U;
	volatile int8_t x1472 = 4;
	volatile int32_t t24 = -5;

	t24 = ((x1469%x1470)*(x1471>>x1472));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1501 = INT64_MIN;
	static int64_t x1502 = 52LL;
	uint16_t x1503 = 13U;
	int16_t x1504 = 21;

	t25 = ((x1501%x1502)*(x1503>>x1504));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1549 = INT32_MAX;
	int64_t x1551 = 242373607217LL;

	t26 = ((x1549%x1550)*(x1551>>x1552));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1665 = UINT64_MAX;
	volatile int16_t x1666 = INT16_MIN;
	uint8_t x1668 = 2U;
	volatile uint64_t t27 = 2828167LLU;

	t27 = ((x1665%x1666)*(x1667>>x1668));

	if (t27 != 13835058055282130945LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1709 = INT16_MIN;
	static volatile int64_t x1710 = -2176277778362851LL;
	static int8_t x1712 = 27;
	volatile int64_t t28 = 190785501088LL;

	t28 = ((x1709%x1710)*(x1711>>x1712));

	if (t28 != -325624758272LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1726 = 105317143U;
	uint64_t x1727 = 22768927927LLU;
	static volatile uint16_t x1728 = 29U;
	static volatile uint64_t t29 = 0LLU;

	t29 = ((x1725%x1726)*(x1727>>x1728));

	if (t29 != 2268LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1733 = INT64_MIN;
	uint16_t x1734 = 2U;
	int8_t x1735 = INT8_MAX;
	static uint8_t x1736 = 24U;
	volatile int64_t t30 = -8852731471023340LL;

	t30 = ((x1733%x1734)*(x1735>>x1736));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1809 = -1;
	int64_t x1810 = 615119802012941848LL;
	uint8_t x1811 = 2U;
	uint8_t x1812 = 17U;

	t31 = ((x1809%x1810)*(x1811>>x1812));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1917 = UINT16_MAX;
	volatile int64_t x1918 = INT64_MIN;
	uint64_t x1919 = 198LLU;
	uint64_t t32 = 1LLU;

	t32 = ((x1917%x1918)*(x1919>>x1920));

	if (t32 != 393210LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1921 = INT64_MIN;
	static int16_t x1922 = 115;
	uint8_t x1923 = 1U;
	int16_t x1924 = 1;
	static volatile int64_t t33 = -569706488910797092LL;

	t33 = ((x1921%x1922)*(x1923>>x1924));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1930 = 910700U;
	int16_t x1931 = 60;
	int8_t x1932 = 1;
	static volatile uint32_t t34 = 6414U;

	t34 = ((x1929%x1930)*(x1931>>x1932));

	if (t34 != 3182850U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2065 = -1;
	volatile int16_t x2066 = INT16_MIN;
	volatile uint16_t x2068 = 13U;
	int32_t t35 = -306299;

	t35 = ((x2065%x2066)*(x2067>>x2068));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x2093 = 80U;
	int8_t x2096 = 0;
	uint32_t t36 = 2876073U;

	t36 = ((x2093%x2094)*(x2095>>x2096));

	if (t36 != 1040U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2129 = -1;
	volatile uint64_t x2130 = UINT64_MAX;
	uint8_t x2131 = 26U;
	static uint8_t x2132 = 3U;
	uint64_t t37 = 120144634561031LLU;

	t37 = ((x2129%x2130)*(x2131>>x2132));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2205 = 33791704094LLU;
	static int64_t x2206 = INT64_MIN;
	uint32_t x2207 = 1022028U;
	uint8_t x2208 = 14U;
	volatile uint64_t t38 = 61LLU;

	t38 = ((x2205%x2206)*(x2207>>x2208));

	if (t38 != 2095085653828LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2233 = INT16_MIN;
	volatile int64_t x2234 = 275246806160853116LL;
	uint64_t x2235 = 194887481885949892LLU;
	uint32_t x2236 = 3U;

	t39 = ((x2233%x2234)*(x2235>>x2236));

	if (t39 != 13397613438369529856LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2257 = INT64_MIN;
	uint32_t x2259 = 51478U;
	static uint8_t x2260 = 1U;
	static int64_t t40 = -2800369421301816313LL;

	t40 = ((x2257%x2258)*(x2259>>x2260));

	if (t40 != -3294592LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2357 = INT64_MIN;
	static uint8_t x2358 = UINT8_MAX;
	static uint64_t x2359 = 16038399159628LLU;
	volatile int8_t x2360 = 1;

	t41 = ((x2357%x2358)*(x2359>>x2360));

	if (t41 != 18445717616163335424LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x2405 = -898;
	int32_t x2406 = INT32_MIN;
	static uint64_t x2407 = 5681975179583249745LLU;
	volatile uint16_t x2408 = 0U;
	static uint64_t t42 = 1578LLU;

	t42 = ((x2405%x2406)*(x2407>>x2408));

	if (t42 != 7334397151787526622LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2433 = INT16_MIN;
	int16_t x2434 = INT16_MIN;
	uint8_t x2435 = 111U;
	int8_t x2436 = 6;
	int32_t t43 = 15387191;

	t43 = ((x2433%x2434)*(x2435>>x2436));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2481 = INT64_MIN;
	volatile uint16_t x2482 = 20974U;
	uint32_t x2483 = UINT32_MAX;
	uint8_t x2484 = 18U;
	static int64_t t44 = 452986276836217LL;

	t44 = ((x2481%x2482)*(x2483>>x2484));

	if (t44 != -263438640LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2597 = 38167320LL;
	int64_t x2598 = 7LL;

	t45 = ((x2597%x2598)*(x2599>>x2600));

	if (t45 != 4294967294LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x2649 = 54U;
	int16_t x2650 = -1;
	int32_t x2652 = 0;
	int32_t t46 = 10225;

	t46 = ((x2649%x2650)*(x2651>>x2652));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2681 = 1U;
	int32_t x2682 = 30264;
	volatile uint16_t x2683 = 15899U;
	static int16_t x2684 = 25;

	t47 = ((x2681%x2682)*(x2683>>x2684));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2791 = UINT16_MAX;
	volatile uint8_t x2792 = 2U;
	int64_t t48 = -5479LL;

	t48 = ((x2789%x2790)*(x2791>>x2792));

	if (t48 != -32766LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2797 = INT32_MIN;
	uint8_t x2798 = UINT8_MAX;
	uint64_t x2799 = 29538218559641LLU;
	volatile uint8_t x2800 = 14U;
	volatile uint64_t t49 = 3695092951889845876LLU;

	t49 = ((x2797%x2798)*(x2799>>x2800));

	if (t49 != 18446743842942219136LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2889 = INT32_MIN;
	uint64_t x2890 = 13189837340309LLU;
	uint16_t x2892 = 1U;
	uint64_t t50 = 1360581233616LLU;

	t50 = ((x2889%x2890)*(x2891>>x2892));

	if (t50 != 155001394729826785LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2901 = UINT8_MAX;
	volatile uint32_t x2902 = UINT32_MAX;
	int32_t x2903 = INT32_MAX;
	uint8_t x2904 = 7U;
	uint32_t t51 = 1U;

	t51 = ((x2901%x2902)*(x2903>>x2904));

	if (t51 != 4278189825U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2961 = INT64_MIN;
	static uint32_t x2962 = UINT32_MAX;
	int16_t x2963 = 1;
	uint32_t x2964 = 0U;

	t52 = ((x2961%x2962)*(x2963>>x2964));

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2982 = 144009U;
	static volatile int8_t x2984 = 0;

	t53 = ((x2981%x2982)*(x2983>>x2984));

	if (t53 != 5467200U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3097 = UINT8_MAX;
	int16_t x3098 = -1;
	volatile int32_t x3099 = INT32_MAX;
	uint8_t x3100 = 9U;
	volatile int32_t t54 = 947;

	t54 = ((x3097%x3098)*(x3099>>x3100));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3149 = INT32_MIN;
	int64_t x3150 = INT64_MAX;
	int64_t x3151 = 15855LL;
	int64_t t55 = -255941417212423LL;

	t55 = ((x3149%x3150)*(x3151>>x3152));

	if (t55 != -530428461056LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3285 = INT32_MAX;
	int32_t x3286 = INT32_MAX;
	static int16_t x3288 = 16;
	int32_t t56 = -11183;

	t56 = ((x3285%x3286)*(x3287>>x3288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3361 = -1LL;
	uint16_t x3362 = 87U;
	volatile int16_t x3363 = INT16_MAX;
	uint16_t x3364 = 2U;
	static int64_t t57 = 5462658LL;

	t57 = ((x3361%x3362)*(x3363>>x3364));

	if (t57 != -8191LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3461 = -161LL;
	static int16_t x3462 = INT16_MIN;
	static uint16_t x3463 = 2U;
	static uint8_t x3464 = 1U;
	volatile int64_t t58 = 3242667LL;

	t58 = ((x3461%x3462)*(x3463>>x3464));

	if (t58 != -161LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3497 = INT8_MIN;
	static uint32_t x3498 = 6U;
	int8_t x3500 = 7;
	static uint32_t t59 = 1U;

	t59 = ((x3497%x3498)*(x3499>>x3500));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3526 = 3U;
	volatile int16_t x3527 = INT16_MAX;
	uint8_t x3528 = 0U;
	int64_t t60 = -273930428089195213LL;

	t60 = ((x3525%x3526)*(x3527>>x3528));

	if (t60 != -32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3585 = INT64_MIN;
	int16_t x3586 = INT16_MAX;
	static uint64_t x3587 = UINT64_MAX;
	static int8_t x3588 = 1;
	static uint64_t t61 = 38LLU;

	t61 = ((x3585%x3586)*(x3587>>x3588));

	if (t61 != 8LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3745 = 16;
	uint32_t x3747 = 3U;
	static volatile uint8_t x3748 = 12U;
	static volatile uint32_t t62 = 63092U;

	t62 = ((x3745%x3746)*(x3747>>x3748));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3757 = 92U;
	uint64_t x3758 = UINT64_MAX;
	static uint32_t x3759 = UINT32_MAX;
	static uint32_t x3760 = 10U;
	static uint64_t t63 = 1LLU;

	t63 = ((x3757%x3758)*(x3759>>x3760));

	if (t63 != 385875876LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3793 = -1;
	int8_t x3794 = 3;
	uint64_t x3795 = 2562583282LLU;
	int8_t x3796 = 1;
	static volatile uint64_t t64 = 21675148401284012LLU;

	t64 = ((x3793%x3794)*(x3795>>x3796));

	if (t64 != 18446744072428259975LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3809 = INT32_MIN;
	static int8_t x3810 = INT8_MAX;
	volatile uint32_t x3811 = 88518340U;
	uint8_t x3812 = 14U;
	static uint32_t t65 = 1310436056U;

	t65 = ((x3809%x3810)*(x3811>>x3812));

	if (t65 != 4294924080U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3845 = -28209LL;
	int8_t x3846 = -1;
	uint64_t x3847 = 103LLU;
	volatile uint64_t t66 = 30LLU;

	t66 = ((x3845%x3846)*(x3847>>x3848));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x3885 = INT64_MIN;
	int64_t x3886 = INT64_MAX;
	uint32_t x3887 = 6234U;
	uint64_t x3888 = 2LLU;

	t67 = ((x3885%x3886)*(x3887>>x3888));

	if (t67 != -1558LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3897 = -47209257843496900LL;
	volatile int16_t x3898 = -1;
	int32_t x3899 = 26;
	int32_t x3900 = 1;
	volatile int64_t t68 = -28860460348893LL;

	t68 = ((x3897%x3898)*(x3899>>x3900));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3949 = INT16_MAX;
	uint64_t x3950 = 366LLU;
	static volatile uint8_t x3951 = 1U;
	int16_t x3952 = 0;
	uint64_t t69 = 10724871308123321LLU;

	t69 = ((x3949%x3950)*(x3951>>x3952));

	if (t69 != 193LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x4010 = UINT8_MAX;
	static volatile uint8_t x4011 = 1U;
	volatile int8_t x4012 = 14;
	volatile int32_t t70 = -1;

	t70 = ((x4009%x4010)*(x4011>>x4012));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4021 = 805982819974874028LL;
	volatile uint64_t x4022 = UINT64_MAX;
	volatile int64_t x4023 = INT64_MAX;

	t71 = ((x4021%x4022)*(x4023>>x4024));

	if (t71 != 18169934209950710868LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4065 = 661LLU;
	uint16_t x4066 = 5U;
	volatile uint8_t x4067 = 1U;
	uint32_t x4068 = 7U;

	t72 = ((x4065%x4066)*(x4067>>x4068));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4157 = -1;
	static volatile int8_t x4158 = INT8_MAX;
	uint16_t x4159 = 1U;
	uint8_t x4160 = 0U;
	volatile int32_t t73 = 196;

	t73 = ((x4157%x4158)*(x4159>>x4160));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4213 = INT16_MIN;
	volatile int32_t x4214 = INT32_MAX;
	volatile uint8_t x4216 = 12U;
	int32_t t74 = -306747542;

	t74 = ((x4213%x4214)*(x4215>>x4216));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4377 = 3089U;
	volatile int8_t x4378 = 3;
	static int64_t x4379 = INT64_MAX;
	static volatile int8_t x4380 = 1;
	volatile int64_t t75 = 0LL;

	t75 = ((x4377%x4378)*(x4379>>x4380));

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4393 = INT32_MIN;
	volatile uint8_t x4394 = UINT8_MAX;
	static volatile int32_t t76 = -3713931;

	t76 = ((x4393%x4394)*(x4395>>x4396));

	if (t76 != -1920) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4406 = INT32_MAX;
	int64_t x4407 = 918181546295109LL;
	int32_t x4408 = 0;
	volatile int64_t t77 = 1076009269422996LL;

	t77 = ((x4405%x4406)*(x4407>>x4408));

	if (t77 != 19281812472197289LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4457 = 37510U;
	volatile uint64_t x4458 = 31304606052886494LLU;
	int32_t x4460 = 2;
	uint64_t t78 = 14481321169LLU;

	t78 = ((x4457%x4458)*(x4459>>x4460));

	if (t78 != 2775740LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4465 = UINT32_MAX;
	int16_t x4466 = INT16_MIN;
	static volatile uint32_t t79 = 1U;

	t79 = ((x4465%x4466)*(x4467>>x4468));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4497 = 1;
	int64_t x4498 = INT64_MIN;
	int64_t x4499 = INT64_MAX;

	t80 = ((x4497%x4498)*(x4499>>x4500));

	if (t80 != 281474976710655LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4565 = INT32_MAX;
	static int64_t x4566 = INT64_MAX;
	uint8_t x4567 = 77U;
	int16_t x4568 = 5;
	volatile int64_t t81 = 0LL;

	t81 = ((x4565%x4566)*(x4567>>x4568));

	if (t81 != 4294967294LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4581 = 1375160819LLU;
	int64_t x4582 = -3038LL;
	uint32_t x4584 = 0U;

	t82 = ((x4581%x4582)*(x4583>>x4584));

	if (t82 != 9223372035479614989LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4639 = 937;
	uint32_t x4640 = 16U;
	uint64_t t83 = 2644920276146LLU;

	t83 = ((x4637%x4638)*(x4639>>x4640));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4671 = INT64_MAX;
	int8_t x4672 = 5;

	t84 = ((x4669%x4670)*(x4671>>x4672));

	if (t84 != -288230376151711743LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4833 = 2697440569171LLU;
	uint64_t x4834 = 25562LLU;
	uint16_t x4835 = 8381U;
	volatile uint16_t x4836 = 0U;
	uint64_t t85 = 43621705LLU;

	t85 = ((x4833%x4834)*(x4835>>x4836));

	if (t85 != 110537009LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4857 = 3LLU;
	uint64_t x4858 = UINT64_MAX;
	uint16_t x4859 = 2U;
	uint8_t x4860 = 4U;
	volatile uint64_t t86 = 87535LLU;

	t86 = ((x4857%x4858)*(x4859>>x4860));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4885 = 235U;
	volatile int16_t x4886 = INT16_MAX;
	static uint16_t x4887 = UINT16_MAX;
	volatile int32_t t87 = -445317;

	t87 = ((x4885%x4886)*(x4887>>x4888));

	if (t87 != 1924885) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x4889 = -1LL;
	uint16_t x4890 = UINT16_MAX;
	int64_t x4891 = 3887648250823303683LL;
	int8_t x4892 = 0;
	volatile int64_t t88 = -315936LL;

	t88 = ((x4889%x4890)*(x4891>>x4892));

	if (t88 != -3887648250823303683LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4901 = 8LLU;
	int16_t x4903 = INT16_MAX;
	uint16_t x4904 = 0U;
	static volatile uint64_t t89 = 2157310749483730281LLU;

	t89 = ((x4901%x4902)*(x4903>>x4904));

	if (t89 != 262136LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4910 = 43U;
	int64_t x4911 = 2726476LL;
	uint64_t t90 = 211299577419754676LLU;

	t90 = ((x4909%x4910)*(x4911>>x4912));

	if (t90 != 6816190LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5025 = -1;
	int64_t x5026 = 1712LL;
	uint32_t x5028 = 12U;
	static int64_t t91 = 238910465824454498LL;

	t91 = ((x5025%x5026)*(x5027>>x5028));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5037 = INT64_MAX;
	volatile uint16_t x5038 = UINT16_MAX;
	int32_t x5039 = 1769438;
	int64_t t92 = 8714813LL;

	t92 = ((x5037%x5038)*(x5039>>x5040));

	if (t92 != 57979174946LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x5041 = -177;
	volatile int64_t x5042 = INT64_MIN;
	volatile uint64_t x5043 = 9731021176892777LLU;
	int8_t x5044 = 9;
	uint64_t t93 = 149293871LLU;

	t93 = ((x5041%x5042)*(x5043>>x5044));

	if (t93 != 18443380029279258730LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5314 = INT16_MAX;
	int64_t x5315 = INT64_MAX;
	volatile int64_t t94 = 3160494LL;

	t94 = ((x5313%x5314)*(x5315>>x5316));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5357 = 1110104985U;
	volatile int64_t x5358 = 421987387LL;
	int32_t x5359 = 118571567;
	static volatile int64_t t95 = -8LL;

	t95 = ((x5357%x5358)*(x5359>>x5360));

	if (t95 != 15777737939090213LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5381 = -1;
	int32_t x5382 = INT32_MIN;
	int32_t x5383 = 198447;
	int64_t x5384 = 19LL;
	volatile int32_t t96 = 20;

	t96 = ((x5381%x5382)*(x5383>>x5384));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5597 = -1;
	int16_t x5598 = INT16_MAX;
	uint8_t x5599 = 8U;
	uint8_t x5600 = 5U;
	int32_t t97 = 8091419;

	t97 = ((x5597%x5598)*(x5599>>x5600));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5601 = INT64_MIN;
	uint64_t x5603 = 3197556777290065LLU;
	int16_t x5604 = 56;
	volatile uint64_t t98 = 4LLU;

	t98 = ((x5601%x5602)*(x5603>>x5604));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5605 = -1LL;
	uint16_t x5606 = 1121U;
	int8_t x5607 = INT8_MAX;
	uint16_t x5608 = 0U;
	volatile int64_t t99 = -74LL;

	t99 = ((x5605%x5606)*(x5607>>x5608));

	if (t99 != -127LL) { NG(); } else { ; }
	
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


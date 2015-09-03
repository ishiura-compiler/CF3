#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x95 = -1LL;
static int64_t t0 = 1565LL;
uint64_t t2 = UINT64_MAX;
int8_t x267 = -59;
int16_t x299 = INT16_MAX;
int8_t x300 = INT8_MAX;
int32_t x305 = INT32_MAX;
int32_t x307 = INT32_MIN;
int8_t x332 = -32;
int8_t x448 = 1;
volatile uint16_t x494 = 1U;
int64_t x495 = -454975446483478112LL;
uint8_t x496 = UINT8_MAX;
volatile int32_t x613 = INT32_MAX;
uint32_t x614 = 0U;
uint8_t x790 = 6U;
int16_t x836 = 360;
volatile int8_t x863 = 1;
uint8_t x870 = 0U;
static volatile uint16_t x993 = 0U;
uint64_t x995 = UINT64_MAX;
volatile int64_t t21 = -92548LL;
uint32_t x1080 = 162459U;
uint64_t t22 = 1907LLU;
int16_t x1186 = 0;
uint64_t t24 = 5749LLU;
int64_t x1332 = INT64_MAX;
uint64_t x1369 = 2139165LLU;
int8_t x1388 = INT8_MAX;
uint16_t x1442 = 1U;
int32_t x1515 = -1;
int64_t x1574 = 0LL;
volatile int16_t x1575 = INT16_MAX;
volatile uint8_t x1577 = 3U;
static int8_t x1580 = INT8_MAX;
volatile uint64_t x1690 = 3LLU;
static int16_t x1805 = INT16_MAX;
static uint32_t x1806 = 6U;
static int8_t x1807 = INT8_MAX;
int8_t x1885 = INT8_MAX;
volatile int32_t t35 = -73;
int16_t x2026 = 6;
volatile int16_t x2141 = INT16_MAX;
int16_t x2144 = -1;
static volatile uint8_t x2150 = 6U;
uint32_t x2185 = UINT32_MAX;
int8_t x2225 = INT8_MAX;
volatile int64_t t41 = 2652451LL;
static uint64_t x2229 = UINT64_MAX;
uint32_t x2388 = 1586U;
static int64_t x2408 = 406646724949400748LL;
uint64_t x2425 = 3370362954822344497LLU;
int8_t x2478 = 2;
uint8_t x2482 = 0U;
uint8_t x2601 = UINT8_MAX;
uint32_t x2602 = 1U;
uint16_t x2649 = 20198U;
volatile int8_t x2916 = -7;
volatile int16_t x2987 = INT16_MIN;
volatile uint8_t x3209 = 0U;
static uint16_t x3210 = 5U;
int32_t t56 = 1;
int8_t x3425 = INT8_MAX;
uint64_t t58 = 65146171828573LLU;
int64_t x3613 = 1989649475776807LL;
volatile uint64_t t61 = 843790LLU;
static int64_t t63 = -132057040891125103LL;
int16_t x4058 = 7;
int8_t x4059 = INT8_MAX;
volatile uint16_t x4061 = 268U;
uint16_t x4062 = 3U;
volatile uint16_t x4064 = UINT16_MAX;
int16_t x4069 = 15019;
int32_t x4071 = INT32_MIN;
static uint8_t x4078 = 1U;
volatile uint32_t t70 = 1949U;
int16_t x4162 = 4;
static volatile int8_t x4163 = -5;
int64_t x4207 = INT64_MIN;
volatile uint64_t t72 = 340862181937029LLU;
uint32_t x4332 = 14U;
volatile int8_t x4400 = INT8_MAX;
volatile uint8_t x4469 = 5U;
int16_t x4471 = -1;
volatile int32_t t78 = 930143;
uint32_t x4719 = UINT32_MAX;
int16_t x4820 = -1;
uint64_t t81 = 3515774744LLU;
int8_t x4882 = 15;
int8_t x4898 = 7;
uint64_t x5152 = 6175807LLU;
uint8_t x5193 = 16U;
int64_t x5243 = INT64_MIN;
static int8_t x5244 = 34;
int64_t t88 = -59437012481LL;
static int32_t x5670 = 22;
uint8_t x5672 = 5U;
int32_t t92 = -1741287;
volatile uint64_t t93 = 333689346LLU;
uint16_t x5705 = 3778U;
int32_t t94 = -11427271;
static uint16_t x5714 = 0U;
volatile int32_t x5722 = 1;
volatile uint64_t t96 = 8753272048993LLU;
static uint64_t x5765 = 633915450713LLU;
volatile uint16_t x5767 = UINT16_MAX;
static volatile uint8_t x5768 = 7U;
uint64_t t97 = 93959LLU;


void f0(void) {
	static uint16_t x93 = 125U;
	int8_t x94 = 1;
	uint32_t x96 = UINT32_MAX;

	t0 = ((x93<<x94)|(x95%x96));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x161 = 5U;
	volatile uint8_t x162 = 2U;
	static volatile int32_t x163 = INT32_MIN;
	uint32_t x164 = 710057908U;
	volatile uint32_t t1 = 822837934U;

	t1 = ((x161<<x162)|(x163%x164));

	if (t1 != 17309940U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x190 = 0U;
	uint16_t x191 = 4U;
	int32_t x192 = INT32_MIN;

	t2 = ((x189<<x190)|(x191%x192));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x265 = 258660LLU;
	uint32_t x266 = 2U;
	int64_t x268 = -564LL;
	uint64_t t3 = 1725953719633LLU;

	t3 = ((x265<<x266)|(x267%x268));

	if (t3 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x285 = INT8_MAX;
	static uint8_t x286 = 0U;
	static volatile int32_t x287 = INT32_MAX;
	volatile uint64_t x288 = 6145370LLU;
	volatile uint64_t t4 = 22028160921580LLU;

	t4 = ((x285<<x286)|(x287%x288));

	if (t4 != 2749567LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x297 = 19176675474LLU;
	uint8_t x298 = 33U;
	volatile uint64_t t5 = 503929LLU;

	t5 = ((x297<<x298)|(x299%x300));

	if (t5 != 17152435423994183681LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x306 = 0;
	volatile int64_t x308 = INT64_MIN;
	static volatile int64_t t6 = 2038271884LL;

	t6 = ((x305<<x306)|(x307%x308));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x329 = 62080393339887LLU;
	uint64_t x330 = 1LLU;
	volatile uint16_t x331 = 4066U;
	volatile uint64_t t7 = 16522LLU;

	t7 = ((x329<<x330)|(x331%x332));

	if (t7 != 124160786679774LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x445 = 1;
	uint64_t x446 = 2LLU;
	static int16_t x447 = INT16_MIN;
	int32_t t8 = 478;

	t8 = ((x445<<x446)|(x447%x448));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x477 = UINT64_MAX;
	static uint8_t x478 = 17U;
	static int16_t x479 = INT16_MIN;
	int32_t x480 = -19161827;
	volatile uint64_t t9 = 47932338LLU;

	t9 = ((x477<<x478)|(x479%x480));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x493 = 13361974744567385LL;
	volatile int64_t t10 = -219085796LL;

	t10 = ((x493<<x494)|(x495%x496));

	if (t10 != -14LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x615 = -1;
	int64_t x616 = -32239LL;
	volatile int64_t t11 = 4383195932090LL;

	t11 = ((x613<<x614)|(x615%x616));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x677 = UINT8_MAX;
	uint32_t x678 = 1U;
	static volatile int64_t x679 = -1LL;
	static int8_t x680 = INT8_MIN;
	int64_t t12 = -25852730LL;

	t12 = ((x677<<x678)|(x679%x680));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x697 = 473U;
	uint32_t x698 = 25U;
	static uint16_t x699 = 1011U;
	int32_t x700 = INT32_MAX;
	uint32_t t13 = 189377026U;

	t13 = ((x697<<x698)|(x699%x700));

	if (t13 != 2986345459U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x789 = UINT32_MAX;
	static uint16_t x791 = 4559U;
	int32_t x792 = INT32_MIN;
	volatile uint32_t t14 = 1008154647U;

	t14 = ((x789<<x790)|(x791%x792));

	if (t14 != 4294967247U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x833 = 5U;
	uint8_t x834 = 11U;
	volatile int8_t x835 = INT8_MIN;
	volatile int32_t t15 = 1120815;

	t15 = ((x833<<x834)|(x835%x836));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x853 = 672390444LLU;
	static uint64_t x854 = 20LLU;
	int64_t x855 = 45943131451LL;
	static int32_t x856 = INT32_MAX;
	uint64_t t16 = 14144288780LLU;

	t16 = ((x853<<x854)|(x855%x856));

	if (t16 != 705053021998416LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x861 = 3657716784436806LL;
	static int32_t x862 = 1;
	static uint64_t x864 = 9877970524841661LLU;
	uint64_t t17 = 535974201431704079LLU;

	t17 = ((x861<<x862)|(x863%x864));

	if (t17 != 7315433568873613LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x869 = UINT16_MAX;
	volatile int16_t x871 = INT16_MIN;
	uint16_t x872 = UINT16_MAX;
	volatile int32_t t18 = -191;

	t18 = ((x869<<x870)|(x871%x872));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x994 = 5;
	int8_t x996 = INT8_MAX;
	uint64_t t19 = 11LLU;

	t19 = ((x993<<x994)|(x995%x996));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1021 = 454942855011340LLU;
	volatile uint8_t x1022 = 1U;
	int32_t x1023 = INT32_MIN;
	uint32_t x1024 = 11296966U;
	uint64_t t20 = 12292LLU;

	t20 = ((x1021<<x1022)|(x1023%x1024));

	if (t20 != 909885711072540LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1041 = 1;
	uint16_t x1042 = 4U;
	uint32_t x1043 = 92650U;
	int64_t x1044 = INT64_MIN;

	t21 = ((x1041<<x1042)|(x1043%x1044));

	if (t21 != 92666LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1077 = INT64_MAX;
	volatile int16_t x1078 = 0;
	uint64_t x1079 = 6901730716756LLU;

	t22 = ((x1077<<x1078)|(x1079%x1080));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1121 = 1670862LLU;
	static uint32_t x1122 = 12U;
	int8_t x1123 = INT8_MIN;
	int32_t x1124 = INT32_MAX;
	uint64_t t23 = 1784845LLU;

	t23 = ((x1121<<x1122)|(x1123%x1124));

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1185 = INT16_MAX;
	volatile uint64_t x1187 = 412173257LLU;
	static uint64_t x1188 = 982649265016457LLU;

	t24 = ((x1185<<x1186)|(x1187%x1188));

	if (t24 != 412188671LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1329 = 24LL;
	uint16_t x1330 = 0U;
	int32_t x1331 = INT32_MIN;
	int64_t t25 = -5438981456LL;

	t25 = ((x1329<<x1330)|(x1331%x1332));

	if (t25 != -2147483624LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1370 = 0;
	int8_t x1371 = -5;
	int64_t x1372 = -10578183316915759LL;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = ((x1369<<x1370)|(x1371%x1372));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1385 = 1713344U;
	volatile uint8_t x1386 = 0U;
	int32_t x1387 = -1;
	uint32_t t27 = UINT32_MAX;

	t27 = ((x1385<<x1386)|(x1387%x1388));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1441 = UINT16_MAX;
	volatile int8_t x1443 = INT8_MIN;
	int16_t x1444 = -1;
	volatile int32_t t28 = -7885;

	t28 = ((x1441<<x1442)|(x1443%x1444));

	if (t28 != 131070) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1513 = 142LLU;
	uint16_t x1514 = 26U;
	static int8_t x1516 = -1;
	uint64_t t29 = 736804395684529525LLU;

	t29 = ((x1513<<x1514)|(x1515%x1516));

	if (t29 != 9529458688LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1521 = 445;
	uint8_t x1522 = 1U;
	uint32_t x1523 = 341310863U;
	uint32_t x1524 = 2522U;
	static volatile uint32_t t30 = 60678994U;

	t30 = ((x1521<<x1522)|(x1523%x1524));

	if (t30 != 1919U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1573 = 5;
	uint16_t x1576 = 2U;
	int32_t t31 = 0;

	t31 = ((x1573<<x1574)|(x1575%x1576));

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1578 = 1U;
	static int8_t x1579 = INT8_MIN;
	static int32_t t32 = -266794;

	t32 = ((x1577<<x1578)|(x1579%x1580));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1689 = 2U;
	static int32_t x1691 = INT32_MIN;
	static int8_t x1692 = INT8_MAX;
	volatile int32_t t33 = -370;

	t33 = ((x1689<<x1690)|(x1691%x1692));

	if (t33 != -8) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1808 = INT64_MIN;
	volatile int64_t t34 = -111100518728514082LL;

	t34 = ((x1805<<x1806)|(x1807%x1808));

	if (t34 != 2097151LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1886 = 0U;
	volatile int32_t x1887 = INT32_MIN;
	uint8_t x1888 = 1U;

	t35 = ((x1885<<x1886)|(x1887%x1888));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x2025 = 94U;
	int64_t x2027 = 6LL;
	static volatile int64_t x2028 = INT64_MIN;
	int64_t t36 = -110672903496LL;

	t36 = ((x2025<<x2026)|(x2027%x2028));

	if (t36 != 6022LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2033 = 1;
	static int16_t x2034 = 6;
	volatile int16_t x2035 = INT16_MIN;
	uint64_t x2036 = 26LLU;
	volatile uint64_t t37 = 6460LLU;

	t37 = ((x2033<<x2034)|(x2035%x2036));

	if (t37 != 72LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2142 = 3U;
	volatile uint16_t x2143 = UINT16_MAX;
	volatile int32_t t38 = 30024937;

	t38 = ((x2141<<x2142)|(x2143%x2144));

	if (t38 != 262136) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2149 = UINT32_MAX;
	int8_t x2151 = -14;
	volatile int16_t x2152 = -1;
	uint32_t t39 = 1217U;

	t39 = ((x2149<<x2150)|(x2151%x2152));

	if (t39 != 4294967232U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2186 = 1;
	int8_t x2187 = INT8_MIN;
	int16_t x2188 = 986;
	volatile uint32_t t40 = 10U;

	t40 = ((x2185<<x2186)|(x2187%x2188));

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2226 = 3U;
	int16_t x2227 = INT16_MIN;
	int64_t x2228 = -1LL;

	t41 = ((x2225<<x2226)|(x2227%x2228));

	if (t41 != 1016LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2230 = 1;
	volatile int32_t x2231 = 3635544;
	volatile int8_t x2232 = INT8_MAX;
	static uint64_t t42 = 189624482946LLU;

	t42 = ((x2229<<x2230)|(x2231%x2232));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2385 = UINT16_MAX;
	volatile uint8_t x2386 = 1U;
	static uint16_t x2387 = 1U;
	static volatile uint32_t t43 = 6784288U;

	t43 = ((x2385<<x2386)|(x2387%x2388));

	if (t43 != 131071U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2405 = 3;
	volatile int8_t x2406 = 1;
	volatile int16_t x2407 = INT16_MIN;
	static int64_t t44 = 38640919879871LL;

	t44 = ((x2405<<x2406)|(x2407%x2408));

	if (t44 != -32762LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2426 = 55U;
	volatile int8_t x2427 = 0;
	static int16_t x2428 = INT16_MIN;
	uint64_t t45 = 616991465950LLU;

	t45 = ((x2425<<x2426)|(x2427%x2428));

	if (t45 != 10988783090784010240LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2477 = 1914186122733770LLU;
	int64_t x2479 = -1LL;
	static int16_t x2480 = INT16_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = ((x2477<<x2478)|(x2479%x2480));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2481 = INT32_MAX;
	static volatile int64_t x2483 = -1LL;
	int32_t x2484 = INT32_MIN;
	int64_t t47 = 782593132444950LL;

	t47 = ((x2481<<x2482)|(x2483%x2484));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2549 = INT8_MAX;
	static int16_t x2550 = 6;
	int64_t x2551 = 297LL;
	volatile int64_t x2552 = INT64_MIN;
	volatile int64_t t48 = -1913072192LL;

	t48 = ((x2549<<x2550)|(x2551%x2552));

	if (t48 != 8169LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2585 = UINT32_MAX;
	int16_t x2586 = 31;
	static int16_t x2587 = INT16_MIN;
	volatile int8_t x2588 = INT8_MIN;
	volatile uint32_t t49 = 0U;

	t49 = ((x2585<<x2586)|(x2587%x2588));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2603 = -35473243;
	volatile int32_t x2604 = INT32_MAX;
	volatile int32_t t50 = 15;

	t50 = ((x2601<<x2602)|(x2603%x2604));

	if (t50 != -35472897) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2650 = 8U;
	uint8_t x2651 = 84U;
	volatile int16_t x2652 = -9147;
	int32_t t51 = 6;

	t51 = ((x2649<<x2650)|(x2651%x2652));

	if (t51 != 5170772) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2725 = 125193611LL;
	uint16_t x2726 = 28U;
	volatile uint16_t x2727 = UINT16_MAX;
	uint16_t x2728 = UINT16_MAX;
	int64_t t52 = -427533875323929LL;

	t52 = ((x2725<<x2726)|(x2727%x2728));

	if (t52 != 33606404057071616LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2737 = 14U;
	uint8_t x2738 = 1U;
	int16_t x2739 = -9737;
	int32_t x2740 = 14606;
	volatile int32_t t53 = -1;

	t53 = ((x2737<<x2738)|(x2739%x2740));

	if (t53 != -9729) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2913 = 60U;
	static uint16_t x2914 = 0U;
	volatile int16_t x2915 = -27;
	volatile int32_t t54 = -192097495;

	t54 = ((x2913<<x2914)|(x2915%x2916));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2985 = 18U;
	volatile int8_t x2986 = 8;
	int64_t x2988 = INT64_MIN;
	volatile int64_t t55 = 5953466281LL;

	t55 = ((x2985<<x2986)|(x2987%x2988));

	if (t55 != -28160LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x3211 = 86645184;
	int32_t x3212 = INT32_MAX;

	t56 = ((x3209<<x3210)|(x3211%x3212));

	if (t56 != 86645184) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3257 = INT64_MAX;
	int32_t x3258 = 0;
	int8_t x3259 = 3;
	int8_t x3260 = INT8_MIN;
	int64_t t57 = INT64_MAX;

	t57 = ((x3257<<x3258)|(x3259%x3260));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3426 = 1U;
	int32_t x3427 = -1;
	uint64_t x3428 = UINT64_MAX;

	t58 = ((x3425<<x3426)|(x3427%x3428));

	if (t58 != 254LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3493 = 0U;
	uint8_t x3494 = 1U;
	volatile int64_t x3495 = INT64_MAX;
	static int32_t x3496 = INT32_MAX;
	volatile int64_t t59 = 0LL;

	t59 = ((x3493<<x3494)|(x3495%x3496));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3614 = 0;
	static int16_t x3615 = INT16_MIN;
	int16_t x3616 = INT16_MIN;
	static int64_t t60 = -276026197874181LL;

	t60 = ((x3613<<x3614)|(x3615%x3616));

	if (t60 != 1989649475776807LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3677 = 1766151166067LLU;
	static uint8_t x3678 = 0U;
	volatile int8_t x3679 = INT8_MAX;
	volatile uint64_t x3680 = 3154LLU;

	t61 = ((x3677<<x3678)|(x3679%x3680));

	if (t61 != 1766151166079LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3717 = UINT8_MAX;
	int32_t x3718 = 0;
	int32_t x3719 = INT32_MIN;
	int64_t x3720 = INT64_MIN;
	volatile int64_t t62 = -13986LL;

	t62 = ((x3717<<x3718)|(x3719%x3720));

	if (t62 != -2147483393LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3769 = 160899202U;
	uint8_t x3770 = 1U;
	static uint8_t x3771 = UINT8_MAX;
	int64_t x3772 = INT64_MIN;

	t63 = ((x3769<<x3770)|(x3771%x3772));

	if (t63 != 321798655LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3785 = 71963058604903991LLU;
	uint16_t x3786 = 1U;
	int8_t x3787 = -1;
	uint8_t x3788 = UINT8_MAX;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x3785<<x3786)|(x3787%x3788));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3825 = UINT64_MAX;
	uint16_t x3826 = 6U;
	static int64_t x3827 = -177LL;
	volatile uint64_t x3828 = UINT64_MAX;
	static uint64_t t65 = 218LLU;

	t65 = ((x3825<<x3826)|(x3827%x3828));

	if (t65 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x4025 = UINT64_MAX;
	static volatile uint8_t x4026 = 20U;
	int8_t x4027 = -1;
	uint32_t x4028 = 15934630U;
	static volatile uint64_t t66 = 19960208436301LLU;

	t66 = ((x4025<<x4026)|(x4027%x4028));

	if (t66 != 18446744073708666257LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4057 = UINT8_MAX;
	static int64_t x4060 = -35172113731LL;
	volatile int64_t t67 = -608066790508LL;

	t67 = ((x4057<<x4058)|(x4059%x4060));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x4063 = -1;
	int32_t t68 = 151449984;

	t68 = ((x4061<<x4062)|(x4063%x4064));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4070 = 2U;
	int8_t x4072 = INT8_MIN;
	volatile int32_t t69 = 173071010;

	t69 = ((x4069<<x4070)|(x4071%x4072));

	if (t69 != 60076) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x4077 = 101706192U;
	volatile uint8_t x4079 = UINT8_MAX;
	static int16_t x4080 = 326;

	t70 = ((x4077<<x4078)|(x4079%x4080));

	if (t70 != 203412479U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4161 = UINT8_MAX;
	int32_t x4164 = 1;
	volatile int32_t t71 = 1302746;

	t71 = ((x4161<<x4162)|(x4163%x4164));

	if (t71 != 4080) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4205 = 7728401503116LLU;
	volatile uint8_t x4206 = 58U;
	int16_t x4208 = -1;

	t72 = ((x4205<<x4206)|(x4207%x4208));

	if (t72 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4221 = 57U;
	int16_t x4222 = 2;
	static int32_t x4223 = 39900105;
	int16_t x4224 = -1;
	int32_t t73 = -5321;

	t73 = ((x4221<<x4222)|(x4223%x4224));

	if (t73 != 228) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4269 = INT16_MAX;
	uint32_t x4270 = 1U;
	uint16_t x4271 = UINT16_MAX;
	uint32_t x4272 = 26U;
	volatile uint32_t t74 = 440363942U;

	t74 = ((x4269<<x4270)|(x4271%x4272));

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4321 = 14350825106184546LLU;
	uint16_t x4322 = 3U;
	uint64_t x4323 = 94822401039677060LLU;
	uint8_t x4324 = 12U;
	static volatile uint64_t t75 = 34159952795802668LLU;

	t75 = ((x4321<<x4322)|(x4323%x4324));

	if (t75 != 114806600849476376LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4329 = 1U;
	uint8_t x4330 = 1U;
	int16_t x4331 = INT16_MIN;
	volatile uint32_t t76 = 2066635U;

	t76 = ((x4329<<x4330)|(x4331%x4332));

	if (t76 != 10U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x4397 = INT16_MAX;
	uint16_t x4398 = 0U;
	volatile int64_t x4399 = INT64_MAX;
	int64_t t77 = -1421715302036031391LL;

	t77 = ((x4397<<x4398)|(x4399%x4400));

	if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4470 = 22U;
	int16_t x4472 = INT16_MAX;

	t78 = ((x4469<<x4470)|(x4471%x4472));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4653 = 8359743LL;
	uint8_t x4654 = 0U;
	static int8_t x4655 = INT8_MIN;
	static uint64_t x4656 = UINT64_MAX;
	static uint64_t t79 = 29909564879320LLU;

	t79 = ((x4653<<x4654)|(x4655%x4656));

	if (t79 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4717 = 253LL;
	int8_t x4718 = 1;
	uint8_t x4720 = 1U;
	int64_t t80 = -43757205612LL;

	t80 = ((x4717<<x4718)|(x4719%x4720));

	if (t80 != 506LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4817 = UINT64_MAX;
	volatile int8_t x4818 = 46;
	int16_t x4819 = INT16_MIN;

	t81 = ((x4817<<x4818)|(x4819%x4820));

	if (t81 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x4881 = 375304LLU;
	volatile int64_t x4883 = INT64_MIN;
	volatile int64_t x4884 = INT64_MAX;
	static uint64_t t82 = UINT64_MAX;

	t82 = ((x4881<<x4882)|(x4883%x4884));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4897 = 1U;
	uint16_t x4899 = 203U;
	int8_t x4900 = 3;
	int32_t t83 = -1563;

	t83 = ((x4897<<x4898)|(x4899%x4900));

	if (t83 != 130) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x4925 = 2U;
	uint8_t x4926 = 3U;
	volatile uint16_t x4927 = UINT16_MAX;
	int8_t x4928 = -16;
	volatile uint32_t t84 = 51240U;

	t84 = ((x4925<<x4926)|(x4927%x4928));

	if (t84 != 31U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5049 = 1;
	static uint8_t x5050 = 0U;
	uint8_t x5051 = 5U;
	uint16_t x5052 = 6556U;
	volatile int32_t t85 = 420;

	t85 = ((x5049<<x5050)|(x5051%x5052));

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x5149 = 1322U;
	volatile uint16_t x5150 = 0U;
	int8_t x5151 = INT8_MIN;
	volatile uint64_t t86 = 1521LLU;

	t86 = ((x5149<<x5150)|(x5151%x5152));

	if (t86 != 5265258LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5194 = 4U;
	volatile uint32_t x5195 = 123U;
	volatile int64_t x5196 = INT64_MIN;
	int64_t t87 = 222207LL;

	t87 = ((x5193<<x5194)|(x5195%x5196));

	if (t87 != 379LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5241 = UINT16_MAX;
	int8_t x5242 = 0;

	t88 = ((x5241<<x5242)|(x5243%x5244));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5289 = 1U;
	uint8_t x5290 = 1U;
	int8_t x5291 = INT8_MIN;
	uint16_t x5292 = 48U;
	volatile int32_t t89 = 22057;

	t89 = ((x5289<<x5290)|(x5291%x5292));

	if (t89 != -30) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5521 = 22U;
	int32_t x5522 = 1;
	uint64_t x5523 = 227LLU;
	int8_t x5524 = INT8_MAX;
	static volatile uint64_t t90 = 2056LLU;

	t90 = ((x5521<<x5522)|(x5523%x5524));

	if (t90 != 108LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5529 = 6617731U;
	static volatile uint8_t x5530 = 0U;
	int32_t x5531 = -1;
	volatile uint8_t x5532 = 1U;
	static uint32_t t91 = 2704947U;

	t91 = ((x5529<<x5530)|(x5531%x5532));

	if (t91 != 6617731U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x5669 = UINT8_MAX;
	int32_t x5671 = -2675;

	t92 = ((x5669<<x5670)|(x5671%x5672));

	if (t92 != 1069547520) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5681 = 41202984100LLU;
	uint8_t x5682 = 3U;
	static uint32_t x5683 = UINT32_MAX;
	static uint16_t x5684 = 3U;

	t93 = ((x5681<<x5682)|(x5683%x5684));

	if (t93 != 329623872800LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5706 = 19;
	uint8_t x5707 = UINT8_MAX;
	static int16_t x5708 = -1;

	t94 = ((x5705<<x5706)|(x5707%x5708));

	if (t94 != 1980760064) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x5713 = UINT16_MAX;
	int16_t x5715 = INT16_MIN;
	int32_t x5716 = -1;
	volatile int32_t t95 = -202;

	t95 = ((x5713<<x5714)|(x5715%x5716));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5721 = 14358911911LLU;
	int32_t x5723 = 1;
	int32_t x5724 = -4952097;

	t96 = ((x5721<<x5722)|(x5723%x5724));

	if (t96 != 28717823823LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5766 = 0;

	t97 = ((x5765<<x5766)|(x5767%x5768));

	if (t97 != 633915450713LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x5789 = 2582;
	int8_t x5790 = 1;
	int8_t x5791 = INT8_MIN;
	volatile int64_t x5792 = -1LL;
	int64_t t98 = 1169194143763267LL;

	t98 = ((x5789<<x5790)|(x5791%x5792));

	if (t98 != 5164LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5861 = 1LL;
	int8_t x5862 = 10;
	uint64_t x5863 = 150792995179LLU;
	int8_t x5864 = INT8_MIN;
	uint64_t t99 = 4223339694934622LLU;

	t99 = ((x5861<<x5862)|(x5863%x5864));

	if (t99 != 150792996203LLU) { NG(); } else { ; }
	
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


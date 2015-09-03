#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = -1;
uint8_t x56 = 13U;
uint16_t x80 = 1U;
static int16_t x266 = -21;
volatile uint8_t x268 = 19U;
int16_t x307 = INT16_MAX;
uint8_t x308 = 3U;
int16_t x405 = INT16_MIN;
static uint16_t x412 = 0U;
volatile int64_t t13 = 1918320LL;
volatile uint64_t t15 = 13693635261LLU;
uint64_t x630 = UINT64_MAX;
uint64_t t16 = 2893983245LLU;
int32_t x686 = -1386637;
volatile int8_t x761 = INT8_MIN;
uint64_t x762 = UINT64_MAX;
volatile int8_t x764 = 0;
volatile int32_t x890 = INT32_MAX;
uint8_t x1113 = 3U;
int16_t x1142 = -1;
int16_t x1143 = -1;
volatile int32_t x1195 = INT32_MAX;
uint64_t x1196 = 3LLU;
uint64_t x1227 = 236LLU;
volatile int32_t t29 = 176;
static uint8_t x1418 = 7U;
uint64_t x1429 = 603542LLU;
static volatile uint64_t t32 = 2185052127874800LLU;
int16_t x1489 = -1;
int8_t x1581 = -3;
static uint32_t x1615 = UINT32_MAX;
volatile uint32_t t37 = 112389U;
volatile int16_t x1934 = 10;
int16_t x2251 = 0;
uint8_t x2252 = 18U;
int32_t x2378 = 3;
static int8_t x2379 = 4;
int32_t x2430 = INT32_MAX;
volatile int16_t x2431 = -1;
uint32_t t42 = 28U;
static uint16_t x2455 = UINT16_MAX;
static uint8_t x2456 = 0U;
volatile uint32_t t44 = 53455U;
uint16_t x2816 = 19U;
uint64_t x2826 = 1183690614769LLU;
static uint32_t t50 = 299U;
int8_t x2904 = 63;
uint16_t x3123 = UINT16_MAX;
uint16_t x3145 = 8U;
int64_t x3146 = -1LL;
uint64_t t55 = 27948657772322LLU;
volatile int8_t x3299 = -5;
volatile uint32_t t57 = 3U;
static uint32_t x3453 = 20U;
int8_t x3572 = 0;
static volatile uint64_t t62 = 6683495596952LLU;
uint16_t x3648 = 1U;
volatile int64_t t64 = 1616LL;
volatile int8_t x3710 = INT8_MIN;
uint16_t x3712 = 2U;
uint64_t x3770 = UINT64_MAX;
static int16_t x3772 = 24;
volatile uint64_t t67 = 19032006395667911LLU;
uint32_t x3882 = UINT32_MAX;
uint8_t x3884 = 6U;
int32_t x3895 = INT32_MAX;
volatile uint64_t x4047 = UINT64_MAX;
uint64_t t71 = 2949848144191LLU;
volatile uint64_t t72 = 186019022LLU;
volatile uint64_t t73 = 6922469878LLU;
static uint8_t x4355 = UINT8_MAX;
uint8_t x4356 = 29U;
int64_t x4382 = 1015983LL;
int8_t x4384 = 22;
uint64_t x4445 = UINT64_MAX;
int32_t x4447 = INT32_MAX;
uint16_t x4448 = 1U;
int8_t x4498 = 0;
int16_t x4503 = 26;
volatile int8_t x4526 = INT8_MIN;
int32_t x4527 = 3278973;
int8_t x4528 = 5;
uint16_t x4731 = UINT16_MAX;
int16_t x4732 = 1;
int32_t x4750 = -1;
volatile int32_t t83 = -9274409;
uint8_t x4784 = 2U;
volatile uint32_t t84 = 46245U;
volatile int16_t x4801 = 7819;
uint8_t x4804 = 0U;
int64_t t85 = 1LL;
uint32_t t86 = 329293008U;
int8_t x4978 = 13;
uint64_t x4979 = 5LLU;
static volatile uint64_t t88 = 27086033370279LLU;
int8_t x5150 = INT8_MIN;
uint8_t x5189 = UINT8_MAX;
uint16_t x5363 = 7199U;
uint32_t x5569 = 7188U;
int8_t x5576 = 9;
static int8_t x5602 = 1;
uint32_t t99 = 2323910U;


void f0(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -4;
	int16_t x24 = 17;
	volatile int32_t t0 = -833;

	t0 = (((x21*x22)+x23)>>x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = 268359444LL;
	volatile uint64_t x26 = 2217700846LLU;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 51;
	uint64_t t1 = 22LLU;

	t1 = (((x25*x26)+x27)>>x28);

	if (t1 != 264LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x29 = INT8_MIN;
	volatile int16_t x30 = -44;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 14U;
	volatile int32_t t2 = 3917345;

	t2 = (((x29*x30)+x31)>>x32);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -9LL;
	static uint16_t x55 = 22381U;
	volatile int64_t t3 = -775498266008080604LL;

	t3 = (((x53*x54)+x55)>>x56);

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x61 = INT16_MIN;
	uint64_t x62 = UINT64_MAX;
	static int32_t x63 = INT32_MAX;
	int16_t x64 = 1;
	volatile uint64_t t4 = 878362935LLU;

	t4 = (((x61*x62)+x63)>>x64);

	if (t4 != 1073758207LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	uint8_t x67 = 17U;
	uint8_t x68 = 0U;
	static volatile int32_t t5 = 171;

	t5 = (((x65*x66)+x67)>>x68);

	if (t5 != 145) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x77 = 71638313148542500LLU;
	int16_t x78 = 2698;
	int32_t x79 = -1;
	volatile uint64_t t6 = 27347261150915LLU;

	t6 = (((x77*x78)+x79)>>x80);

	if (t6 != 4406364068836074419LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x101 = 993LL;
	int8_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 2U;
	static volatile uint64_t t7 = 4569413LLU;

	t7 = (((x101*x102)+x103)>>x104);

	if (t7 != 4611686018427387655LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x149 = 7U;
	int16_t x150 = INT16_MAX;
	uint32_t x151 = 2273U;
	uint8_t x152 = 2U;
	volatile uint32_t t8 = 696U;

	t8 = (((x149*x150)+x151)>>x152);

	if (t8 != 57910U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x189 = 1U;
	int32_t x190 = -195;
	volatile uint32_t x191 = 1806U;
	uint8_t x192 = 10U;
	volatile uint32_t t9 = 2U;

	t9 = (((x189*x190)+x191)>>x192);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x265 = 0U;
	int8_t x267 = 0;
	volatile int32_t t10 = 97;

	t10 = (((x265*x266)+x267)>>x268);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x305 = 411U;
	int32_t x306 = -1;
	uint32_t t11 = 2631212U;

	t11 = (((x305*x306)+x307)>>x308);

	if (t11 != 4044U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = 1;
	int32_t t12 = -490528722;

	t12 = (((x405*x406)+x407)>>x408);

	if (t12 != 2097279) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x409 = 86936605826401LL;
	static int8_t x410 = 9;
	int8_t x411 = INT8_MIN;

	t13 = (((x409*x410)+x411)>>x412);

	if (t13 != 782429452437481LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x549 = INT8_MIN;
	volatile uint32_t x550 = 1917U;
	uint32_t x551 = 1U;
	uint16_t x552 = 1U;
	volatile uint32_t t14 = 1527047U;

	t14 = (((x549*x550)+x551)>>x552);

	if (t14 != 2147360960U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x565 = 115892083809LLU;
	static int64_t x566 = INT64_MAX;
	uint64_t x567 = UINT64_MAX;
	uint32_t x568 = 25U;

	t15 = (((x565*x566)+x567)>>x568);

	if (t15 != 274877903490LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x629 = UINT64_MAX;
	int64_t x631 = -1LL;
	uint16_t x632 = 5U;

	t16 = (((x629*x630)+x631)>>x632);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x685 = -29464512109LL;
	int16_t x687 = -1;
	static uint8_t x688 = 46U;
	static int64_t t17 = -1272688LL;

	t17 = (((x685*x686)+x687)>>x688);

	if (t17 != 580LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x689 = 274;
	int8_t x690 = INT8_MAX;
	volatile int8_t x691 = -59;
	int16_t x692 = 0;
	volatile int32_t t18 = -109861579;

	t18 = (((x689*x690)+x691)>>x692);

	if (t18 != 34739) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x713 = 33000035077LLU;
	int16_t x714 = INT16_MIN;
	int32_t x715 = -7985;
	uint64_t x716 = 9LLU;
	volatile uint64_t t19 = 310339190665608459LLU;

	t19 = (((x713*x714)+x715)>>x716);

	if (t19 != 36026685016719024LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x763 = -1;
	static volatile uint64_t t20 = 160986973823LLU;

	t20 = (((x761*x762)+x763)>>x764);

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x797 = -1LL;
	int16_t x798 = 0;
	uint64_t x799 = 8594757845749996586LLU;
	uint8_t x800 = 3U;
	uint64_t t21 = 8319459LLU;

	t21 = (((x797*x798)+x799)>>x800);

	if (t21 != 1074344730718749573LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x889 = 834536414LL;
	uint32_t x891 = UINT32_MAX;
	uint8_t x892 = 1U;
	volatile int64_t t22 = 52114695879LL;

	t22 = (((x889*x890)+x891)>>x892);

	if (t22 != 896076653092994576LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1045 = INT32_MIN;
	uint64_t x1046 = UINT64_MAX;
	int16_t x1047 = INT16_MIN;
	volatile uint8_t x1048 = 0U;
	uint64_t t23 = 141241824751930087LLU;

	t23 = (((x1045*x1046)+x1047)>>x1048);

	if (t23 != 2147450880LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1114 = UINT8_MAX;
	uint64_t x1115 = 32507883LLU;
	volatile uint8_t x1116 = 1U;
	volatile uint64_t t24 = 687848101557734LLU;

	t24 = (((x1113*x1114)+x1115)>>x1116);

	if (t24 != 16254324LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1141 = -1;
	uint16_t x1144 = 30U;
	int32_t t25 = -27044;

	t25 = (((x1141*x1142)+x1143)>>x1144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1193 = INT8_MIN;
	uint64_t x1194 = UINT64_MAX;
	uint64_t t26 = 0LLU;

	t26 = (((x1193*x1194)+x1195)>>x1196);

	if (t26 != 268435471LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1225 = -1LL;
	static uint8_t x1226 = UINT8_MAX;
	static int8_t x1228 = 1;
	static uint64_t t27 = 102251056LLU;

	t27 = (((x1225*x1226)+x1227)>>x1228);

	if (t27 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1349 = 16040629LLU;
	int8_t x1350 = 2;
	uint32_t x1351 = UINT32_MAX;
	volatile uint8_t x1352 = 0U;
	static uint64_t t28 = 16896733LLU;

	t28 = (((x1349*x1350)+x1351)>>x1352);

	if (t28 != 4327048553LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1373 = 32U;
	volatile int8_t x1374 = INT8_MAX;
	static uint16_t x1375 = 1U;
	volatile uint8_t x1376 = 1U;

	t29 = (((x1373*x1374)+x1375)>>x1376);

	if (t29 != 2032) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1385 = -244692984;
	volatile int16_t x1386 = -1;
	uint8_t x1387 = 1U;
	volatile int8_t x1388 = 1;
	int32_t t30 = 23241782;

	t30 = (((x1385*x1386)+x1387)>>x1388);

	if (t30 != 122346492) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1417 = 5;
	int64_t x1419 = -1LL;
	uint16_t x1420 = 6U;
	int64_t t31 = 17745733964LL;

	t31 = (((x1417*x1418)+x1419)>>x1420);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1430 = UINT16_MAX;
	static uint16_t x1431 = 363U;
	uint16_t x1432 = 1U;

	t32 = (((x1429*x1430)+x1431)>>x1432);

	if (t32 != 19776562666LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1473 = -3;
	int16_t x1474 = INT16_MIN;
	int64_t x1475 = -1655LL;
	static volatile int8_t x1476 = 0;
	static int64_t t33 = 20378188010LL;

	t33 = (((x1473*x1474)+x1475)>>x1476);

	if (t33 != 96649LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1490 = UINT64_MAX;
	uint64_t x1491 = 212586797131356LLU;
	uint8_t x1492 = 0U;
	uint64_t t34 = 293669425087941120LLU;

	t34 = (((x1489*x1490)+x1491)>>x1492);

	if (t34 != 212586797131357LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1582 = 258571697475LLU;
	int64_t x1583 = INT64_MIN;
	volatile int8_t x1584 = 4;
	volatile uint64_t t35 = 299976829289598166LLU;

	t35 = (((x1581*x1582)+x1583)>>x1584);

	if (t35 != 576460703821230211LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1613 = 62U;
	static int8_t x1614 = INT8_MIN;
	uint16_t x1616 = 2U;
	uint32_t t36 = 531807061U;

	t36 = (((x1613*x1614)+x1615)>>x1616);

	if (t36 != 1073739839U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1733 = INT32_MIN;
	static uint32_t x1734 = 30U;
	int8_t x1735 = 10;
	uint8_t x1736 = 10U;

	t37 = (((x1733*x1734)+x1735)>>x1736);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1933 = -464LL;
	uint16_t x1935 = UINT16_MAX;
	uint16_t x1936 = 63U;
	volatile int64_t t38 = 10LL;

	t38 = (((x1933*x1934)+x1935)>>x1936);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2133 = 3;
	volatile uint16_t x2134 = 34U;
	int8_t x2135 = 0;
	int16_t x2136 = 19;
	volatile int32_t t39 = -90;

	t39 = (((x2133*x2134)+x2135)>>x2136);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2249 = 5;
	uint16_t x2250 = 165U;
	int32_t t40 = 913168010;

	t40 = (((x2249*x2250)+x2251)>>x2252);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2377 = 0;
	static volatile int8_t x2380 = 0;
	volatile int32_t t41 = -1601;

	t41 = (((x2377*x2378)+x2379)>>x2380);

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2429 = 8U;
	uint8_t x2432 = 3U;

	t42 = (((x2429*x2430)+x2431)>>x2432);

	if (t42 != 536870910U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2453 = -4;
	volatile uint32_t x2454 = UINT32_MAX;
	static volatile uint32_t t43 = 14U;

	t43 = (((x2453*x2454)+x2455)>>x2456);

	if (t43 != 65539U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2509 = -1;
	volatile uint32_t x2510 = 35654U;
	static int32_t x2511 = -1;
	uint8_t x2512 = 30U;

	t44 = (((x2509*x2510)+x2511)>>x2512);

	if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x2653 = 451;
	uint64_t x2654 = UINT64_MAX;
	int64_t x2655 = 43LL;
	uint8_t x2656 = 14U;
	uint64_t t45 = 264534427939957LLU;

	t45 = (((x2653*x2654)+x2655)>>x2656);

	if (t45 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2765 = 91;
	uint32_t x2766 = 0U;
	static volatile int32_t x2767 = INT32_MIN;
	uint16_t x2768 = 19U;
	volatile uint32_t t46 = 538457U;

	t46 = (((x2765*x2766)+x2767)>>x2768);

	if (t46 != 4096U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2785 = UINT32_MAX;
	uint64_t x2786 = 22387590611155LLU;
	static int8_t x2787 = -4;
	uint16_t x2788 = 6U;
	uint64_t t47 = 15LLU;

	t47 = (((x2785*x2786)+x2787)>>x2788);

	if (t47 != 149052759150064892LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2813 = 70014610U;
	volatile int32_t x2814 = INT32_MIN;
	uint64_t x2815 = 3978713151LLU;
	volatile uint64_t t48 = 175208LLU;

	t48 = (((x2813*x2814)+x2815)>>x2816);

	if (t48 != 7588LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2825 = UINT16_MAX;
	volatile int16_t x2827 = INT16_MIN;
	uint8_t x2828 = 3U;
	volatile uint64_t t49 = 1299681913419LLU;

	t49 = (((x2825*x2826)+x2827)>>x2828);

	if (t49 != 9696645554856705LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2889 = 2048356U;
	static volatile uint16_t x2890 = 28118U;
	uint16_t x2891 = UINT16_MAX;
	volatile uint32_t x2892 = 0U;

	t50 = (((x2889*x2890)+x2891)>>x2892);

	if (t50 != 1761164695U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2901 = INT32_MIN;
	volatile uint64_t x2902 = 20472359697194LLU;
	int16_t x2903 = INT16_MIN;
	static volatile uint64_t t51 = 93814542097291LLU;

	t51 = (((x2901*x2902)+x2903)>>x2904);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3017 = 35;
	uint32_t x3018 = 58U;
	volatile uint32_t x3019 = UINT32_MAX;
	static uint8_t x3020 = 0U;
	volatile uint32_t t52 = 1U;

	t52 = (((x3017*x3018)+x3019)>>x3020);

	if (t52 != 2029U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3121 = 1;
	int64_t x3122 = -1LL;
	uint32_t x3124 = 18U;
	int64_t t53 = 23008706807LL;

	t53 = (((x3121*x3122)+x3123)>>x3124);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3147 = INT8_MAX;
	static uint16_t x3148 = 1U;
	int64_t t54 = -26283140453267891LL;

	t54 = (((x3145*x3146)+x3147)>>x3148);

	if (t54 != 59LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3165 = -1LL;
	uint64_t x3166 = 7LLU;
	int32_t x3167 = 91;
	uint8_t x3168 = 0U;

	t55 = (((x3165*x3166)+x3167)>>x3168);

	if (t55 != 84LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3205 = INT16_MIN;
	uint32_t x3206 = 139U;
	static uint16_t x3207 = UINT16_MAX;
	uint16_t x3208 = 3U;
	static volatile uint32_t t56 = 99U;

	t56 = (((x3205*x3206)+x3207)>>x3208);

	if (t56 != 536309759U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3297 = UINT16_MAX;
	uint32_t x3298 = UINT32_MAX;
	int16_t x3300 = 28;

	t57 = (((x3297*x3298)+x3299)>>x3300);

	if (t57 != 15U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x3429 = INT16_MIN;
	int16_t x3430 = INT16_MIN;
	int16_t x3431 = INT16_MAX;
	uint8_t x3432 = 1U;
	volatile int32_t t58 = 5279708;

	t58 = (((x3429*x3430)+x3431)>>x3432);

	if (t58 != 536887295) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3454 = 10062U;
	int16_t x3455 = 1370;
	int16_t x3456 = 7;
	uint32_t t59 = 1369951U;

	t59 = (((x3453*x3454)+x3455)>>x3456);

	if (t59 != 1582U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3501 = 8245LLU;
	uint32_t x3502 = 320U;
	volatile int8_t x3503 = INT8_MIN;
	int8_t x3504 = 0;
	volatile uint64_t t60 = 5540845222184LLU;

	t60 = (((x3501*x3502)+x3503)>>x3504);

	if (t60 != 2638272LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3541 = 57585837LL;
	int32_t x3542 = INT32_MAX;
	int64_t x3543 = 1888124625638792607LL;
	volatile uint16_t x3544 = 5U;
	int64_t t61 = 67077775LL;

	t61 = (((x3541*x3542)+x3543)>>x3544);

	if (t61 != 62868414652971879LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x3569 = 238U;
	uint64_t x3570 = UINT64_MAX;
	volatile int16_t x3571 = -1;

	t62 = (((x3569*x3570)+x3571)>>x3572);

	if (t62 != 18446744073709551377LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3629 = 3U;
	static int8_t x3630 = 17;
	volatile uint64_t x3631 = 5357528407424651LLU;
	static uint8_t x3632 = 1U;
	uint64_t t63 = 1589639804LLU;

	t63 = (((x3629*x3630)+x3631)>>x3632);

	if (t63 != 2678764203712351LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3645 = 1984413817LL;
	uint8_t x3646 = 7U;
	int16_t x3647 = INT16_MIN;

	t64 = (((x3645*x3646)+x3647)>>x3648);

	if (t64 != 6945431975LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3709 = 123;
	uint32_t x3711 = 2927000U;
	volatile uint32_t t65 = 7U;

	t65 = (((x3709*x3710)+x3711)>>x3712);

	if (t65 != 727814U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3769 = INT32_MIN;
	uint8_t x3771 = 24U;
	uint64_t t66 = 4569213555542044LLU;

	t66 = (((x3769*x3770)+x3771)>>x3772);

	if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3857 = 2719565073875351LLU;
	volatile uint32_t x3858 = UINT32_MAX;
	uint8_t x3859 = 1U;
	uint8_t x3860 = 9U;

	t67 = (((x3857*x3858)+x3859)>>x3860);

	if (t67 != 3115105763256831LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3881 = UINT64_MAX;
	volatile uint64_t x3883 = 30886949LLU;
	uint64_t t68 = 31682LLU;

	t68 = (((x3881*x3882)+x3883)>>x3884);

	if (t68 != 288230376085085488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3893 = 128170U;
	uint16_t x3894 = 20796U;
	uint8_t x3896 = 3U;
	static uint32_t t69 = 1465U;

	t69 = (((x3893*x3894)+x3895)>>x3896);

	if (t69 != 64742458U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3937 = 1;
	static uint16_t x3938 = 3U;
	static volatile int16_t x3939 = INT16_MAX;
	uint16_t x3940 = 3U;
	volatile int32_t t70 = 32180;

	t70 = (((x3937*x3938)+x3939)>>x3940);

	if (t70 != 4096) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4045 = UINT32_MAX;
	uint8_t x4046 = 113U;
	volatile int32_t x4048 = 5;

	t71 = (((x4045*x4046)+x4047)>>x4048);

	if (t71 != 134217724LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4161 = 3022225748LLU;
	int64_t x4162 = -1LL;
	int8_t x4163 = -2;
	int32_t x4164 = 27;

	t72 = (((x4161*x4162)+x4163)>>x4164);

	if (t72 != 137438953449LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4345 = 29U;
	int64_t x4346 = -1LL;
	volatile uint64_t x4347 = 293LLU;
	int8_t x4348 = 1;

	t73 = (((x4345*x4346)+x4347)>>x4348);

	if (t73 != 132LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4353 = 55055527706LL;
	uint32_t x4354 = 1065U;
	int64_t t74 = 4117LL;

	t74 = (((x4353*x4354)+x4355)>>x4356);

	if (t74 != 109214LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4381 = UINT64_MAX;
	int16_t x4383 = INT16_MAX;
	uint64_t t75 = 36370LLU;

	t75 = (((x4381*x4382)+x4383)>>x4384);

	if (t75 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4446 = 58LLU;
	volatile uint64_t t76 = 526636282898775103LLU;

	t76 = (((x4445*x4446)+x4447)>>x4448);

	if (t76 != 1073741794LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4489 = 1243U;
	volatile uint8_t x4490 = 16U;
	uint8_t x4491 = 1U;
	int16_t x4492 = 0;
	volatile int32_t t77 = -398158;

	t77 = (((x4489*x4490)+x4491)>>x4492);

	if (t77 != 19889) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4497 = INT32_MIN;
	int16_t x4499 = 57;
	uint8_t x4500 = 1U;
	int32_t t78 = 4063957;

	t78 = (((x4497*x4498)+x4499)>>x4500);

	if (t78 != 28) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4501 = 0U;
	volatile uint16_t x4502 = 5U;
	int64_t x4504 = 1LL;
	uint32_t t79 = 532384073U;

	t79 = (((x4501*x4502)+x4503)>>x4504);

	if (t79 != 13U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4525 = UINT32_MAX;
	uint32_t t80 = 1314U;

	t80 = (((x4525*x4526)+x4527)>>x4528);

	if (t80 != 102471U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x4569 = UINT64_MAX;
	uint64_t x4570 = 2006867LLU;
	static int64_t x4571 = -1LL;
	int32_t x4572 = 0;
	uint64_t t81 = 431329532814712LLU;

	t81 = (((x4569*x4570)+x4571)>>x4572);

	if (t81 != 18446744073707544748LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4729 = 125U;
	uint16_t x4730 = 36U;
	int32_t t82 = 19;

	t82 = (((x4729*x4730)+x4731)>>x4732);

	if (t82 != 35017) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4749 = INT16_MIN;
	int16_t x4751 = INT16_MIN;
	uint8_t x4752 = 0U;

	t83 = (((x4749*x4750)+x4751)>>x4752);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x4781 = 23;
	int8_t x4782 = INT8_MIN;
	uint32_t x4783 = UINT32_MAX;

	t84 = (((x4781*x4782)+x4783)>>x4784);

	if (t84 != 1073741087U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4802 = INT8_MIN;
	int64_t x4803 = 774512456482795LL;

	t85 = (((x4801*x4802)+x4803)>>x4804);

	if (t85 != 774512455481963LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4877 = INT32_MIN;
	volatile uint32_t x4878 = 14U;
	uint32_t x4879 = UINT32_MAX;
	volatile int16_t x4880 = 9;

	t86 = (((x4877*x4878)+x4879)>>x4880);

	if (t86 != 8388607U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x4977 = -26291;
	int8_t x4980 = 1;
	uint64_t t87 = 11LLU;

	t87 = (((x4977*x4978)+x4979)>>x4980);

	if (t87 != 9223372036854604919LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5033 = 8611163375184LLU;
	uint8_t x5034 = 1U;
	volatile int64_t x5035 = INT64_MIN;
	uint16_t x5036 = 18U;

	t88 = (((x5033*x5034)+x5035)>>x5036);

	if (t88 != 35184404937813LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5137 = 15U;
	static int8_t x5138 = 38;
	volatile int64_t x5139 = -1LL;
	uint32_t x5140 = 0U;
	static int64_t t89 = 3500088LL;

	t89 = (((x5137*x5138)+x5139)>>x5140);

	if (t89 != 569LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5149 = -1;
	volatile int8_t x5151 = -1;
	int16_t x5152 = 13;
	int32_t t90 = -842187;

	t90 = (((x5149*x5150)+x5151)>>x5152);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5190 = 1128775080086861946LLU;
	int64_t x5191 = -1LL;
	static int32_t x5192 = 0;
	uint64_t t91 = 2295476040509842621LLU;

	t91 = (((x5189*x5190)+x5191)>>x5192);

	if (t91 != 11136484316506521989LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5213 = 1U;
	static uint64_t x5214 = UINT64_MAX;
	int64_t x5215 = INT64_MIN;
	volatile int8_t x5216 = 28;
	volatile uint64_t t92 = 261915924651LLU;

	t92 = (((x5213*x5214)+x5215)>>x5216);

	if (t92 != 34359738367LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x5217 = -1;
	static int32_t x5218 = 187;
	static volatile uint32_t x5219 = 1315338342U;
	uint8_t x5220 = 1U;
	uint32_t t93 = 642537424U;

	t93 = (((x5217*x5218)+x5219)>>x5220);

	if (t93 != 657669077U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5309 = UINT8_MAX;
	uint64_t x5310 = 10835548298968LLU;
	int32_t x5311 = INT32_MIN;
	uint8_t x5312 = 1U;
	uint64_t t94 = 380LLU;

	t94 = (((x5309*x5310)+x5311)>>x5312);

	if (t94 != 1381531334376596LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x5361 = 6827;
	int16_t x5362 = -1;
	uint8_t x5364 = 4U;
	int32_t t95 = -8642;

	t95 = (((x5361*x5362)+x5363)>>x5364);

	if (t95 != 23) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5513 = -1;
	volatile int32_t x5514 = INT32_MAX;
	int64_t x5515 = INT64_MAX;
	int8_t x5516 = 0;
	static volatile int64_t t96 = -4307404LL;

	t96 = (((x5513*x5514)+x5515)>>x5516);

	if (t96 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x5570 = -1;
	int8_t x5571 = -6;
	uint8_t x5572 = 14U;
	uint32_t t97 = 2939568U;

	t97 = (((x5569*x5570)+x5571)>>x5572);

	if (t97 != 262143U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5573 = 0U;
	int32_t x5574 = -26;
	int32_t x5575 = 3497;
	int32_t t98 = 0;

	t98 = (((x5573*x5574)+x5575)>>x5576);

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5601 = INT8_MAX;
	volatile uint32_t x5603 = UINT32_MAX;
	uint16_t x5604 = 5U;

	t99 = (((x5601*x5602)+x5603)>>x5604);

	if (t99 != 3U) { NG(); } else { ; }
	
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


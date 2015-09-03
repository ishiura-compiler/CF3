#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x8 = -1;
int64_t x123 = 263727379703LL;
int32_t x239 = 23422384;
static uint64_t t7 = 136580592379294897LLU;
int32_t x257 = INT32_MAX;
static int32_t x258 = 60346;
volatile int16_t x282 = INT16_MAX;
uint8_t x283 = 14U;
static int32_t x417 = INT32_MAX;
volatile int32_t t12 = -313;
int8_t x423 = INT8_MAX;
volatile int32_t t13 = 607354662;
uint64_t x450 = 13LLU;
int16_t x451 = -1;
static volatile int32_t t14 = 257773038;
uint16_t x489 = 11U;
volatile int32_t t16 = 4029322;
uint32_t x538 = 27U;
volatile int32_t t19 = -12378;
uint64_t x661 = 6663734201LLU;
volatile uint64_t t20 = 12328LLU;
volatile uint32_t x673 = 0U;
volatile uint64_t x674 = UINT64_MAX;
uint64_t x676 = 25LLU;
uint16_t x702 = 1125U;
static int64_t x703 = -1LL;
uint16_t x737 = 217U;
uint64_t x757 = UINT64_MAX;
int64_t x759 = 167695610022225002LL;
static volatile int16_t x854 = -1;
uint16_t x866 = 1786U;
volatile uint16_t x878 = UINT16_MAX;
int32_t x939 = INT32_MIN;
static int32_t t33 = -1;
uint16_t x969 = 7U;
volatile uint32_t t37 = 16470U;
static int8_t x1094 = 7;
int16_t x1109 = INT16_MAX;
int16_t x1157 = 5;
uint32_t t42 = 307049U;
static int8_t x1301 = 2;
int32_t x1302 = INT32_MIN;
int16_t x1303 = INT16_MIN;
uint32_t x1329 = 332U;
int16_t x1332 = 15;
int32_t x1335 = 183162;
uint8_t x1373 = 25U;
volatile int16_t x1374 = INT16_MIN;
static uint8_t x1376 = 9U;
int32_t t46 = -3097310;
int16_t x1607 = -11;
static int64_t x1608 = -1LL;
int8_t x1733 = 21;
static uint64_t x1749 = 1LLU;
int16_t x1750 = -1;
int32_t t56 = -524;
int64_t x1771 = INT64_MAX;
int32_t t57 = 6;
static volatile uint16_t x1797 = 1U;
int32_t x1798 = INT32_MIN;
volatile uint32_t t59 = 1372U;
int8_t x1901 = 31;
int32_t x1904 = 1;
int32_t t60 = -2566;
volatile uint32_t x1970 = 86U;
volatile int32_t t63 = -2330220;
int32_t x2014 = INT32_MAX;
uint8_t x2038 = UINT8_MAX;
static volatile uint8_t x2040 = 10U;
volatile int32_t x2126 = INT32_MIN;
uint8_t x2131 = UINT8_MAX;
volatile uint8_t x2132 = 12U;
int32_t t68 = -675;
uint32_t x2378 = UINT32_MAX;
int64_t x2380 = 1LL;
volatile int32_t t70 = -106;
volatile int32_t t71 = -13403;
uint64_t x2413 = UINT64_MAX;
uint8_t x2416 = 5U;
static int8_t x2491 = 1;
uint8_t x2616 = 9U;
volatile int32_t t78 = 1047358;
int32_t x2649 = 212070654;
static int8_t x2650 = INT8_MIN;
int32_t x2651 = -1;
int8_t x2662 = -1;
int32_t x2667 = -1;
uint8_t x2669 = 105U;
int16_t x2672 = 1;
int64_t x2678 = INT64_MIN;
static int8_t x2679 = INT8_MIN;
int64_t x2743 = -1LL;
volatile int8_t x2744 = -1;
int16_t x2748 = 0;
int64_t x2751 = -1LL;
uint64_t x2784 = UINT64_MAX;
int32_t x2791 = -1;
uint64_t t95 = 14242548LLU;
volatile uint32_t x2798 = 52166779U;
static int32_t x2799 = INT32_MIN;
uint16_t x2917 = 0U;
volatile int32_t t99 = 7;


void f0(void) {
	static int32_t x5 = 58624281;
	volatile uint16_t x6 = 20U;
	volatile uint32_t x7 = 506669915U;
	int32_t t0 = 3972772;

	t0 = (x5>>((x6<=x7)+x8));

	if (t0 != 58624281) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = 6402;
	static int32_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = -1LL;
	static int32_t t1 = 12;

	t1 = (x33>>((x34<=x35)+x36));

	if (t1 != 6402) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x45 = 0;
	int16_t x46 = INT16_MIN;
	static uint16_t x47 = 0U;
	uint8_t x48 = 17U;
	volatile int32_t t2 = 143948778;

	t2 = (x45>>((x46<=x47)+x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x69 = 137857039459648058LLU;
	uint8_t x70 = 1U;
	int32_t x71 = INT32_MIN;
	int8_t x72 = 47;
	static uint64_t t3 = 16014775738LLU;

	t3 = (x69>>((x70<=x71)+x72));

	if (t3 != 979LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x93 = UINT8_MAX;
	static uint64_t x94 = 9769150LLU;
	static int64_t x95 = -21327700LL;
	volatile int8_t x96 = -1;
	int32_t t4 = -2;

	t4 = (x93>>((x94<=x95)+x96));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x121 = 139943670654LL;
	int32_t x122 = 124;
	uint64_t x124 = UINT64_MAX;
	volatile int64_t t5 = 625332088551761LL;

	t5 = (x121>>((x122<=x123)+x124));

	if (t5 != 139943670654LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x193 = INT8_MAX;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	static uint16_t x196 = 8U;
	static int32_t t6 = -151;

	t6 = (x193>>((x194<=x195)+x196));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x237 = 1LLU;
	int8_t x238 = INT8_MIN;
	int16_t x240 = -1;

	t7 = (x237>>((x238<=x239)+x240));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x259 = -1;
	uint8_t x260 = 19U;
	int32_t t8 = 58;

	t8 = (x257>>((x258<=x259)+x260));

	if (t8 != 4095) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x281 = UINT16_MAX;
	static uint16_t x284 = 4U;
	volatile int32_t t9 = 0;

	t9 = (x281>>((x282<=x283)+x284));

	if (t9 != 4095) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x341 = 10;
	int64_t x342 = -1LL;
	static uint64_t x343 = 1356369372790LLU;
	uint8_t x344 = 0U;
	static int32_t t10 = 276;

	t10 = (x341>>((x342<=x343)+x344));

	if (t10 != 10) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x365 = 1041;
	static uint32_t x366 = 3099U;
	static int16_t x367 = -1;
	volatile uint64_t x368 = 20LLU;
	int32_t t11 = -7187;

	t11 = (x365>>((x366<=x367)+x368));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x418 = UINT8_MAX;
	uint8_t x419 = 123U;
	static int8_t x420 = 2;

	t12 = (x417>>((x418<=x419)+x420));

	if (t12 != 536870911) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x424 = -1;

	t13 = (x421>>((x422<=x423)+x424));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x449 = 57U;
	uint16_t x452 = 0U;

	t14 = (x449>>((x450<=x451)+x452));

	if (t14 != 28) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x485 = INT32_MAX;
	int64_t x486 = -1LL;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = 2;
	int32_t t15 = 904;

	t15 = (x485>>((x486<=x487)+x488));

	if (t15 != 268435455) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x490 = 487867279LL;
	uint8_t x491 = 54U;
	int8_t x492 = 1;

	t16 = (x489>>((x490<=x491)+x492));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x537 = 501168058;
	uint16_t x539 = 3499U;
	int8_t x540 = 4;
	volatile int32_t t17 = 13451;

	t17 = (x537>>((x538<=x539)+x540));

	if (t17 != 15661501) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x553 = UINT8_MAX;
	int8_t x554 = INT8_MAX;
	volatile uint16_t x555 = 2833U;
	uint64_t x556 = UINT64_MAX;
	static int32_t t18 = 2072588;

	t18 = (x553>>((x554<=x555)+x556));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x573 = INT8_MAX;
	int8_t x574 = -1;
	int8_t x575 = -1;
	volatile int8_t x576 = -1;

	t19 = (x573>>((x574<=x575)+x576));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x662 = -1;
	uint8_t x663 = UINT8_MAX;
	uint64_t x664 = UINT64_MAX;

	t20 = (x661>>((x662<=x663)+x664));

	if (t20 != 6663734201LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x669 = UINT8_MAX;
	int8_t x670 = INT8_MAX;
	uint8_t x671 = UINT8_MAX;
	uint32_t x672 = UINT32_MAX;
	static int32_t t21 = 3;

	t21 = (x669>>((x670<=x671)+x672));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x675 = UINT8_MAX;
	static uint32_t t22 = 1137U;

	t22 = (x673>>((x674<=x675)+x676));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x701 = 0;
	volatile uint8_t x704 = 24U;
	volatile int32_t t23 = -14835;

	t23 = (x701>>((x702<=x703)+x704));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x705 = 9;
	volatile int8_t x706 = -1;
	static int32_t x707 = 5617411;
	volatile uint32_t x708 = UINT32_MAX;
	int32_t t24 = 11443637;

	t24 = (x705>>((x706<=x707)+x708));

	if (t24 != 9) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x738 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 16U;
	int32_t t25 = -281747857;

	t25 = (x737>>((x738<=x739)+x740));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x758 = INT8_MIN;
	int16_t x760 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (x757>>((x758<=x759)+x760));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x773 = 3180665U;
	uint16_t x774 = UINT16_MAX;
	uint64_t x775 = UINT64_MAX;
	int32_t x776 = 1;
	static volatile uint32_t t27 = 958890348U;

	t27 = (x773>>((x774<=x775)+x776));

	if (t27 != 795166U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x845 = 168166LLU;
	volatile uint32_t x846 = 2U;
	uint8_t x847 = 21U;
	uint8_t x848 = 5U;
	static volatile uint64_t t28 = 894904843LLU;

	t28 = (x845>>((x846<=x847)+x848));

	if (t28 != 2627LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x853 = 2U;
	volatile int16_t x855 = INT16_MIN;
	static int8_t x856 = 0;
	int32_t t29 = -129161939;

	t29 = (x853>>((x854<=x855)+x856));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x865 = UINT64_MAX;
	volatile int64_t x867 = -1LL;
	uint8_t x868 = 0U;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x865>>((x866<=x867)+x868));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x877 = 74451694602498189LLU;
	uint64_t x879 = UINT64_MAX;
	int64_t x880 = 52LL;
	uint64_t t31 = 493728485LLU;

	t31 = (x877>>((x878<=x879)+x880));

	if (t31 != 8LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x881 = 396491927U;
	uint64_t x882 = 2086LLU;
	int64_t x883 = INT64_MAX;
	uint64_t x884 = UINT64_MAX;
	volatile uint32_t t32 = 6421715U;

	t32 = (x881>>((x882<=x883)+x884));

	if (t32 != 396491927U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x937 = INT16_MAX;
	int8_t x938 = INT8_MIN;
	uint8_t x940 = 0U;

	t33 = (x937>>((x938<=x939)+x940));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x970 = -1LL;
	int64_t x971 = 14874978LL;
	uint8_t x972 = 0U;
	volatile int32_t t34 = -448511;

	t34 = (x969>>((x970<=x971)+x972));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x989 = INT16_MAX;
	static volatile int32_t x990 = INT32_MIN;
	int32_t x991 = INT32_MIN;
	volatile uint32_t x992 = UINT32_MAX;
	volatile int32_t t35 = -141007;

	t35 = (x989>>((x990<=x991)+x992));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1021 = INT16_MAX;
	int64_t x1022 = -1LL;
	static int8_t x1023 = -1;
	int64_t x1024 = -1LL;
	volatile int32_t t36 = 0;

	t36 = (x1021>>((x1022<=x1023)+x1024));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1089 = 24U;
	uint16_t x1090 = 870U;
	int64_t x1091 = INT64_MAX;
	uint8_t x1092 = 2U;

	t37 = (x1089>>((x1090<=x1091)+x1092));

	if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1093 = 3338LLU;
	static int32_t x1095 = INT32_MAX;
	int32_t x1096 = -1;
	volatile uint64_t t38 = 18LLU;

	t38 = (x1093>>((x1094<=x1095)+x1096));

	if (t38 != 3338LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1110 = INT16_MIN;
	uint8_t x1111 = UINT8_MAX;
	static volatile int8_t x1112 = -1;
	volatile int32_t t39 = -10764;

	t39 = (x1109>>((x1110<=x1111)+x1112));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1158 = -1;
	int32_t x1159 = 2311;
	int64_t x1160 = -1LL;
	static int32_t t40 = -26470298;

	t40 = (x1157>>((x1158<=x1159)+x1160));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1253 = 119U;
	int32_t x1254 = -1;
	uint32_t x1255 = UINT32_MAX;
	int8_t x1256 = 3;
	volatile int32_t t41 = 54;

	t41 = (x1253>>((x1254<=x1255)+x1256));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1285 = 25692U;
	static int16_t x1286 = INT16_MAX;
	volatile int64_t x1287 = 519369629LL;
	int64_t x1288 = -1LL;

	t42 = (x1285>>((x1286<=x1287)+x1288));

	if (t42 != 25692U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1304 = 15U;
	int32_t t43 = -15;

	t43 = (x1301>>((x1302<=x1303)+x1304));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1330 = -1;
	static volatile int64_t x1331 = -1LL;
	uint32_t t44 = 2373U;

	t44 = (x1329>>((x1330<=x1331)+x1332));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x1333 = 262394U;
	uint8_t x1334 = UINT8_MAX;
	int64_t x1336 = -1LL;
	uint32_t t45 = 120U;

	t45 = (x1333>>((x1334<=x1335)+x1336));

	if (t45 != 262394U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1375 = -1;

	t46 = (x1373>>((x1374<=x1375)+x1376));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1409 = 91609861543792906LLU;
	int32_t x1410 = -1;
	int32_t x1411 = -1;
	uint32_t x1412 = 0U;
	uint64_t t47 = 189846LLU;

	t47 = (x1409>>((x1410<=x1411)+x1412));

	if (t47 != 45804930771896453LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1485 = UINT16_MAX;
	static int16_t x1486 = INT16_MIN;
	volatile int64_t x1487 = 75LL;
	int64_t x1488 = -1LL;
	volatile int32_t t48 = -12;

	t48 = (x1485>>((x1486<=x1487)+x1488));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1505 = 123;
	int64_t x1506 = -1LL;
	int64_t x1507 = -1LL;
	volatile uint8_t x1508 = 13U;
	volatile int32_t t49 = 7383037;

	t49 = (x1505>>((x1506<=x1507)+x1508));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1517 = 13320958LL;
	static int8_t x1518 = -1;
	int32_t x1519 = INT32_MAX;
	int8_t x1520 = -1;
	volatile int64_t t50 = -16313902LL;

	t50 = (x1517>>((x1518<=x1519)+x1520));

	if (t50 != 13320958LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1533 = INT64_MAX;
	int32_t x1534 = -1;
	static uint16_t x1535 = 775U;
	int64_t x1536 = -1LL;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x1533>>((x1534<=x1535)+x1536));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1597 = INT64_MAX;
	int16_t x1598 = INT16_MAX;
	int8_t x1599 = 62;
	volatile uint16_t x1600 = 3U;
	static int64_t t52 = 76786286670492LL;

	t52 = (x1597>>((x1598<=x1599)+x1600));

	if (t52 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1605 = INT16_MAX;
	int64_t x1606 = -1196137286089LL;
	int32_t t53 = -1;

	t53 = (x1605>>((x1606<=x1607)+x1608));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1734 = INT8_MAX;
	volatile int8_t x1735 = -1;
	int16_t x1736 = 1;
	static int32_t t54 = 244;

	t54 = (x1733>>((x1734<=x1735)+x1736));

	if (t54 != 10) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1751 = -1;
	volatile int8_t x1752 = 2;
	volatile uint64_t t55 = 6110LLU;

	t55 = (x1749>>((x1750<=x1751)+x1752));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1757 = UINT16_MAX;
	int32_t x1758 = INT32_MAX;
	int8_t x1759 = -55;
	uint8_t x1760 = 0U;

	t56 = (x1757>>((x1758<=x1759)+x1760));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1769 = 8303U;
	uint8_t x1770 = 2U;
	static int32_t x1772 = 1;

	t57 = (x1769>>((x1770<=x1771)+x1772));

	if (t57 != 2075) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1799 = UINT64_MAX;
	int8_t x1800 = -1;
	static volatile int32_t t58 = 999;

	t58 = (x1797>>((x1798<=x1799)+x1800));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1817 = 6010U;
	int32_t x1818 = -250128405;
	uint8_t x1819 = UINT8_MAX;
	int16_t x1820 = -1;

	t59 = (x1817>>((x1818<=x1819)+x1820));

	if (t59 != 6010U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1902 = -3519072401520574518LL;
	static uint16_t x1903 = 13493U;

	t60 = (x1901>>((x1902<=x1903)+x1904));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x1925 = 15U;
	int64_t x1926 = INT64_MIN;
	int32_t x1927 = 60;
	uint32_t x1928 = UINT32_MAX;
	volatile int32_t t61 = -1477;

	t61 = (x1925>>((x1926<=x1927)+x1928));

	if (t61 != 15) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1969 = 8006U;
	uint64_t x1971 = 302977932008LLU;
	uint8_t x1972 = 0U;
	int32_t t62 = -15950405;

	t62 = (x1969>>((x1970<=x1971)+x1972));

	if (t62 != 4003) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1997 = INT32_MAX;
	int8_t x1998 = 4;
	static uint8_t x1999 = 6U;
	int8_t x2000 = 1;

	t63 = (x1997>>((x1998<=x1999)+x2000));

	if (t63 != 536870911) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2013 = 3U;
	int32_t x2015 = -1;
	static uint8_t x2016 = 6U;
	static volatile int32_t t64 = -39438617;

	t64 = (x2013>>((x2014<=x2015)+x2016));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2037 = 1U;
	int32_t x2039 = 2;
	int32_t t65 = 20422486;

	t65 = (x2037>>((x2038<=x2039)+x2040));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2125 = 1;
	int8_t x2127 = INT8_MIN;
	int8_t x2128 = -1;
	int32_t t66 = 225;

	t66 = (x2125>>((x2126<=x2127)+x2128));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2129 = 2U;
	int16_t x2130 = INT16_MAX;
	int32_t t67 = -871765;

	t67 = (x2129>>((x2130<=x2131)+x2132));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2249 = 6U;
	volatile int16_t x2250 = -82;
	int32_t x2251 = -1;
	int16_t x2252 = -1;

	t68 = (x2249>>((x2250<=x2251)+x2252));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2313 = INT32_MAX;
	int8_t x2314 = INT8_MAX;
	volatile uint64_t x2315 = UINT64_MAX;
	uint8_t x2316 = 7U;
	static volatile int32_t t69 = 105;

	t69 = (x2313>>((x2314<=x2315)+x2316));

	if (t69 != 8388607) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2377 = UINT16_MAX;
	volatile int64_t x2379 = -1LL;

	t70 = (x2377>>((x2378<=x2379)+x2380));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2397 = INT32_MAX;
	int32_t x2398 = INT32_MIN;
	static volatile int64_t x2399 = INT64_MAX;
	uint8_t x2400 = 14U;

	t71 = (x2397>>((x2398<=x2399)+x2400));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2414 = 50U;
	int16_t x2415 = INT16_MAX;
	volatile uint64_t t72 = 14LLU;

	t72 = (x2413>>((x2414<=x2415)+x2416));

	if (t72 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2477 = INT16_MAX;
	volatile int8_t x2478 = -1;
	int64_t x2479 = -1LL;
	int8_t x2480 = -1;
	volatile int32_t t73 = 515315183;

	t73 = (x2477>>((x2478<=x2479)+x2480));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2489 = 144126LLU;
	uint32_t x2490 = 7702U;
	uint8_t x2492 = 5U;
	uint64_t t74 = 4915052LLU;

	t74 = (x2489>>((x2490<=x2491)+x2492));

	if (t74 != 4503LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x2497 = 96U;
	int8_t x2498 = -11;
	uint16_t x2499 = 0U;
	static volatile int16_t x2500 = 1;
	static int32_t t75 = -1709;

	t75 = (x2497>>((x2498<=x2499)+x2500));

	if (t75 != 24) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2517 = UINT8_MAX;
	int32_t x2518 = INT32_MIN;
	uint16_t x2519 = UINT16_MAX;
	int8_t x2520 = -1;
	volatile int32_t t76 = -358419;

	t76 = (x2517>>((x2518<=x2519)+x2520));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2609 = INT16_MAX;
	volatile uint16_t x2610 = 151U;
	int64_t x2611 = 9400295628328792LL;
	int16_t x2612 = -1;
	volatile int32_t t77 = -561790036;

	t77 = (x2609>>((x2610<=x2611)+x2612));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x2613 = INT32_MAX;
	int32_t x2614 = INT32_MIN;
	uint8_t x2615 = UINT8_MAX;

	t78 = (x2613>>((x2614<=x2615)+x2616));

	if (t78 != 2097151) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2617 = 128U;
	int64_t x2618 = INT64_MIN;
	int16_t x2619 = -1;
	int64_t x2620 = -1LL;
	volatile uint32_t t79 = 784112U;

	t79 = (x2617>>((x2618<=x2619)+x2620));

	if (t79 != 128U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x2625 = 102U;
	uint64_t x2626 = 6267925LLU;
	static int64_t x2627 = -24209871370109LL;
	uint8_t x2628 = 1U;
	static int32_t t80 = 11241;

	t80 = (x2625>>((x2626<=x2627)+x2628));

	if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2652 = -1;
	int32_t t81 = 3769;

	t81 = (x2649>>((x2650<=x2651)+x2652));

	if (t81 != 212070654) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2661 = 5U;
	int32_t x2663 = INT32_MIN;
	volatile int8_t x2664 = 9;
	volatile int32_t t82 = -29;

	t82 = (x2661>>((x2662<=x2663)+x2664));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2665 = UINT8_MAX;
	volatile int16_t x2666 = INT16_MAX;
	volatile uint8_t x2668 = 1U;
	volatile int32_t t83 = 487242509;

	t83 = (x2665>>((x2666<=x2667)+x2668));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2670 = INT16_MAX;
	int64_t x2671 = INT64_MAX;
	static int32_t t84 = -4915626;

	t84 = (x2669>>((x2670<=x2671)+x2672));

	if (t84 != 26) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2677 = 14011;
	uint32_t x2680 = UINT32_MAX;
	int32_t t85 = 0;

	t85 = (x2677>>((x2678<=x2679)+x2680));

	if (t85 != 14011) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x2693 = 0U;
	int32_t x2694 = INT32_MIN;
	uint8_t x2695 = UINT8_MAX;
	int8_t x2696 = 1;
	static volatile int32_t t86 = 13841;

	t86 = (x2693>>((x2694<=x2695)+x2696));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2701 = UINT32_MAX;
	int64_t x2702 = INT64_MIN;
	int16_t x2703 = -1;
	int64_t x2704 = -1LL;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x2701>>((x2702<=x2703)+x2704));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2713 = INT8_MAX;
	volatile int64_t x2714 = -9313436920189LL;
	volatile int8_t x2715 = INT8_MAX;
	int64_t x2716 = -1LL;
	volatile int32_t t88 = -25521560;

	t88 = (x2713>>((x2714<=x2715)+x2716));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2733 = UINT32_MAX;
	int32_t x2734 = INT32_MIN;
	volatile int8_t x2735 = -54;
	uint16_t x2736 = 29U;
	volatile uint32_t t89 = 132221U;

	t89 = (x2733>>((x2734<=x2735)+x2736));

	if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2741 = INT64_MAX;
	int64_t x2742 = INT64_MIN;
	int64_t t90 = INT64_MAX;

	t90 = (x2741>>((x2742<=x2743)+x2744));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2745 = UINT16_MAX;
	volatile int32_t x2746 = INT32_MAX;
	int8_t x2747 = INT8_MAX;
	volatile int32_t t91 = -11994064;

	t91 = (x2745>>((x2746<=x2747)+x2748));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2749 = INT32_MAX;
	int32_t x2750 = -1;
	volatile int16_t x2752 = -1;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x2749>>((x2750<=x2751)+x2752));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2781 = INT16_MAX;
	uint8_t x2782 = 2U;
	volatile uint32_t x2783 = UINT32_MAX;
	int32_t t93 = -234892;

	t93 = (x2781>>((x2782<=x2783)+x2784));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2785 = 10;
	static volatile uint32_t x2786 = 506344394U;
	int16_t x2787 = -1;
	uint32_t x2788 = 12U;
	volatile int32_t t94 = 148421981;

	t94 = (x2785>>((x2786<=x2787)+x2788));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x2789 = 57LLU;
	volatile int8_t x2790 = INT8_MAX;
	volatile uint16_t x2792 = 2U;

	t95 = (x2789>>((x2790<=x2791)+x2792));

	if (t95 != 14LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2797 = 120LL;
	volatile uint16_t x2800 = 3U;
	int64_t t96 = 42424664930LL;

	t96 = (x2797>>((x2798<=x2799)+x2800));

	if (t96 != 7LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2857 = 2977059330117857169LLU;
	int8_t x2858 = 6;
	uint32_t x2859 = 1675U;
	uint8_t x2860 = 0U;
	volatile uint64_t t97 = 12LLU;

	t97 = (x2857>>((x2858<=x2859)+x2860));

	if (t97 != 1488529665058928584LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x2913 = INT8_MAX;
	int16_t x2914 = -1;
	static uint8_t x2915 = UINT8_MAX;
	static int32_t x2916 = 7;
	static volatile int32_t t98 = 1;

	t98 = (x2913>>((x2914<=x2915)+x2916));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x2918 = -1LL;
	uint32_t x2919 = 13U;
	int64_t x2920 = -1LL;

	t99 = (x2917>>((x2918<=x2919)+x2920));

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


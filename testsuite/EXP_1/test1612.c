#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x41 = 0;
uint32_t x194 = 43U;
volatile int8_t x245 = INT8_MAX;
int8_t x247 = 1;
static uint64_t x248 = 105831610573602881LLU;
int8_t x254 = INT8_MIN;
static int64_t x261 = INT64_MAX;
int16_t x263 = 2;
uint8_t x267 = 4U;
int32_t t7 = 14873;
int32_t x293 = 1275854;
static uint64_t x534 = 16027292062287LLU;
uint16_t x561 = 9U;
volatile uint64_t x577 = 8709197540906332LLU;
int16_t x600 = INT16_MIN;
static int64_t x608 = INT64_MAX;
static int8_t x620 = -16;
volatile int32_t t15 = -3695752;
int16_t x649 = INT16_MIN;
int16_t x705 = INT16_MIN;
uint32_t x754 = 1268257U;
int32_t t19 = 860671034;
volatile uint32_t x782 = 8055U;
volatile int32_t t22 = 30;
static int16_t x863 = 1;
uint16_t x879 = 0U;
int64_t x913 = -12LL;
volatile int32_t x914 = -1;
uint32_t x916 = 865788U;
uint32_t t26 = 1U;
uint64_t x943 = 19LLU;
int16_t x962 = INT16_MAX;
static volatile int8_t x990 = 1;
volatile int64_t t30 = 2106070LL;
int8_t x1052 = -32;
uint64_t x1065 = UINT64_MAX;
uint32_t x1130 = UINT32_MAX;
int8_t x1154 = -6;
uint16_t x1194 = 9U;
static volatile int64_t x1196 = -1LL;
uint8_t x1205 = UINT8_MAX;
static uint16_t x1227 = 1U;
int32_t t41 = INT32_MIN;
int16_t x1255 = 6;
static volatile int32_t x1256 = -1;
uint32_t x1273 = UINT32_MAX;
volatile uint64_t x1274 = 7LLU;
static int8_t x1275 = 6;
int32_t x1312 = INT32_MIN;
int32_t t45 = INT32_MIN;
int64_t x1365 = INT64_MIN;
volatile int64_t t46 = 85464109380010725LL;
volatile uint64_t t48 = 1154084838829275551LLU;
volatile int64_t x1486 = 27243LL;
static int32_t t50 = -103148702;
int8_t x1501 = INT8_MIN;
int16_t x1559 = 1;
volatile int8_t x1560 = INT8_MIN;
uint8_t x1577 = UINT8_MAX;
int16_t x1789 = INT16_MIN;
static int32_t x1793 = -1;
uint64_t x1841 = 11924LLU;
int64_t x1886 = INT64_MAX;
int16_t x1912 = 133;
volatile int32_t t63 = 1;
int32_t x1938 = INT32_MAX;
int32_t t64 = INT32_MIN;
uint8_t x2000 = 14U;
int32_t t67 = -5;
uint16_t x2026 = 10941U;
static uint64_t x2028 = UINT64_MAX;
static int8_t x2090 = INT8_MIN;
int64_t t70 = INT64_MIN;
volatile uint32_t x2146 = 16575545U;
int16_t x2148 = 2;
int32_t t71 = -1;
int16_t x2213 = INT16_MAX;
int8_t x2216 = -1;
volatile int32_t t73 = 1071504490;
int64_t x2306 = INT64_MIN;
uint8_t x2307 = 1U;
static volatile int32_t t78 = -735;
uint32_t x2366 = 1U;
int8_t x2397 = -1;
static uint8_t x2398 = 55U;
int64_t x2665 = 5LL;
int32_t x2668 = INT32_MIN;
int64_t x2778 = INT64_MIN;
static int32_t x2813 = -249323309;
uint16_t x2847 = 0U;
uint64_t x2849 = 48245185951LLU;
uint64_t x2850 = UINT64_MAX;
uint8_t x2851 = 1U;
static int8_t x2852 = INT8_MAX;
int32_t t91 = -438322;
static volatile uint32_t x2862 = 94285568U;
static int32_t x2864 = -102957;
static volatile int32_t x3026 = -1;
uint16_t x3031 = 10U;
int64_t x3032 = INT64_MAX;
static int64_t x3062 = -1LL;
int32_t t95 = INT32_MIN;
int32_t x3077 = INT32_MIN;
uint16_t x3079 = 3U;


void f0(void) {
	int8_t x42 = 0;
	uint16_t x43 = 1U;
	static int16_t x44 = INT16_MIN;
	static int32_t t0 = 3108355;

	t0 = (((x41<=x42)>>x43)^x44);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 25U;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t1 = 298257;

	t1 = (((x169<=x170)>>x171)^x172);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x193 = -1;
	int8_t x195 = 23;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x193<=x194)>>x195)^x196);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x246 = INT32_MIN;
	uint64_t t3 = 109608327081222LLU;

	t3 = (((x245<=x246)>>x247)^x248);

	if (t3 != 105831610573602881LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x253 = -1LL;
	uint8_t x255 = 1U;
	static uint32_t x256 = UINT32_MAX;
	static uint32_t t4 = UINT32_MAX;

	t4 = (((x253<=x254)>>x255)^x256);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x257 = 1U;
	int32_t x258 = -1835985;
	int16_t x259 = 1;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t5 = 3452;

	t5 = (((x257<=x258)>>x259)^x260);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x262 = -469388271;
	volatile int32_t x264 = INT32_MIN;
	static int32_t t6 = INT32_MIN;

	t6 = (((x261<=x262)>>x263)^x264);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x265 = INT32_MIN;
	uint64_t x266 = 164LLU;
	int16_t x268 = 1212;

	t7 = (((x265<=x266)>>x267)^x268);

	if (t7 != 1212) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x294 = 5U;
	uint8_t x295 = 1U;
	int8_t x296 = -2;
	static volatile int32_t t8 = 30667;

	t8 = (((x293<=x294)>>x295)^x296);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x493 = UINT32_MAX;
	int64_t x494 = 1494638076LL;
	int8_t x495 = 1;
	int32_t x496 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

	t9 = (((x493<=x494)>>x495)^x496);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x533 = INT32_MIN;
	uint32_t x535 = 13U;
	uint64_t x536 = 496425407203LLU;
	volatile uint64_t t10 = 36604679LLU;

	t10 = (((x533<=x534)>>x535)^x536);

	if (t10 != 496425407203LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x562 = -756378751119242959LL;
	int8_t x563 = 20;
	uint32_t x564 = 13U;
	uint32_t t11 = 140322U;

	t11 = (((x561<=x562)>>x563)^x564);

	if (t11 != 13U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x578 = 27667U;
	static int8_t x579 = 15;
	uint8_t x580 = 9U;
	int32_t t12 = 28927;

	t12 = (((x577<=x578)>>x579)^x580);

	if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x597 = 0LL;
	int64_t x598 = 2032271403718LL;
	static int32_t x599 = 0;
	int32_t t13 = -1;

	t13 = (((x597<=x598)>>x599)^x600);

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x605 = INT8_MIN;
	int32_t x606 = 2531;
	volatile int8_t x607 = 29;
	volatile int64_t t14 = INT64_MAX;

	t14 = (((x605<=x606)>>x607)^x608);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x617 = -15;
	static uint8_t x618 = UINT8_MAX;
	static uint64_t x619 = 0LLU;

	t15 = (((x617<=x618)>>x619)^x620);

	if (t15 != -15) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x650 = 0U;
	uint16_t x651 = 0U;
	int32_t x652 = 6836;
	volatile int32_t t16 = -3637786;

	t16 = (((x649<=x650)>>x651)^x652);

	if (t16 != 6837) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x689 = -9493472;
	uint16_t x690 = 5877U;
	int64_t x691 = 17LL;
	uint8_t x692 = 19U;
	int32_t t17 = -6;

	t17 = (((x689<=x690)>>x691)^x692);

	if (t17 != 19) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x706 = 87U;
	static volatile uint16_t x707 = 30U;
	static volatile int64_t x708 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = (((x705<=x706)>>x707)^x708);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x753 = 1;
	uint8_t x755 = 0U;
	volatile int32_t x756 = -1;

	t19 = (((x753<=x754)>>x755)^x756);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x781 = INT16_MAX;
	uint32_t x783 = 0U;
	int8_t x784 = INT8_MIN;
	int32_t t20 = 1;

	t20 = (((x781<=x782)>>x783)^x784);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x801 = -1LL;
	int32_t x802 = -149807;
	static uint64_t x803 = 1LLU;
	uint8_t x804 = 1U;
	int32_t t21 = 44006611;

	t21 = (((x801<=x802)>>x803)^x804);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x817 = 52U;
	int16_t x818 = 0;
	uint16_t x819 = 1U;
	int16_t x820 = -12358;

	t22 = (((x817<=x818)>>x819)^x820);

	if (t22 != -12358) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x845 = UINT32_MAX;
	volatile int64_t x846 = INT64_MAX;
	uint8_t x847 = 1U;
	volatile int8_t x848 = INT8_MAX;
	int32_t t23 = 476553738;

	t23 = (((x845<=x846)>>x847)^x848);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x861 = -1;
	volatile uint16_t x862 = UINT16_MAX;
	int16_t x864 = -1;
	volatile int32_t t24 = -566229;

	t24 = (((x861<=x862)>>x863)^x864);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x877 = -18910942;
	int64_t x878 = INT64_MAX;
	uint8_t x880 = 29U;
	int32_t t25 = -161;

	t25 = (((x877<=x878)>>x879)^x880);

	if (t25 != 28) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x915 = 0;

	t26 = (((x913<=x914)>>x915)^x916);

	if (t26 != 865789U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x941 = -1;
	uint8_t x942 = UINT8_MAX;
	int16_t x944 = INT16_MIN;
	int32_t t27 = 1436680;

	t27 = (((x941<=x942)>>x943)^x944);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x961 = INT16_MAX;
	uint16_t x963 = 7U;
	volatile int32_t x964 = 103550;
	volatile int32_t t28 = 1629913;

	t28 = (((x961<=x962)>>x963)^x964);

	if (t28 != 103550) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x977 = 2;
	int16_t x978 = -1;
	int64_t x979 = 7LL;
	volatile uint16_t x980 = 20U;
	int32_t t29 = -551386625;

	t29 = (((x977<=x978)>>x979)^x980);

	if (t29 != 20) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x989 = 0U;
	static uint8_t x991 = 11U;
	int64_t x992 = 1327087157668904LL;

	t30 = (((x989<=x990)>>x991)^x992);

	if (t30 != 1327087157668904LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x993 = INT8_MIN;
	uint64_t x994 = 12112404872839LLU;
	int8_t x995 = 7;
	int64_t x996 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = (((x993<=x994)>>x995)^x996);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1001 = -1;
	static uint8_t x1002 = 39U;
	uint8_t x1003 = 25U;
	int16_t x1004 = -8714;
	volatile int32_t t32 = 847142;

	t32 = (((x1001<=x1002)>>x1003)^x1004);

	if (t32 != -8714) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1049 = -1;
	static int8_t x1050 = -2;
	static volatile int16_t x1051 = 19;
	int32_t t33 = 59804815;

	t33 = (((x1049<=x1050)>>x1051)^x1052);

	if (t33 != -32) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1057 = INT16_MAX;
	volatile uint64_t x1058 = UINT64_MAX;
	uint8_t x1059 = 1U;
	volatile uint16_t x1060 = 1455U;
	volatile int32_t t34 = -850;

	t34 = (((x1057<=x1058)>>x1059)^x1060);

	if (t34 != 1455) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1066 = -1;
	volatile uint16_t x1067 = 0U;
	int32_t x1068 = INT32_MIN;
	volatile int32_t t35 = 263517831;

	t35 = (((x1065<=x1066)>>x1067)^x1068);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1129 = INT32_MAX;
	static int8_t x1131 = 27;
	static uint16_t x1132 = 17322U;
	int32_t t36 = 1864;

	t36 = (((x1129<=x1130)>>x1131)^x1132);

	if (t36 != 17322) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1153 = 30740772561LLU;
	uint32_t x1155 = 12U;
	volatile int8_t x1156 = -2;
	static volatile int32_t t37 = -1;

	t37 = (((x1153<=x1154)>>x1155)^x1156);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1177 = INT16_MIN;
	int32_t x1178 = INT32_MAX;
	uint8_t x1179 = 22U;
	static volatile uint32_t x1180 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x1177<=x1178)>>x1179)^x1180);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1193 = INT16_MIN;
	int64_t x1195 = 27LL;
	int64_t t39 = 293348LL;

	t39 = (((x1193<=x1194)>>x1195)^x1196);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1206 = -41;
	volatile int8_t x1207 = 1;
	int32_t x1208 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = (((x1205<=x1206)>>x1207)^x1208);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1225 = -30319831397029LL;
	int16_t x1226 = INT16_MIN;
	static volatile int32_t x1228 = INT32_MIN;

	t41 = (((x1225<=x1226)>>x1227)^x1228);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1253 = -1;
	int16_t x1254 = INT16_MIN;
	volatile int32_t t42 = -20514801;

	t42 = (((x1253<=x1254)>>x1255)^x1256);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1276 = 1;
	volatile int32_t t43 = 11;

	t43 = (((x1273<=x1274)>>x1275)^x1276);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1297 = 223874830635017LLU;
	int32_t x1298 = 64511002;
	uint32_t x1299 = 24U;
	uint8_t x1300 = 1U;
	volatile int32_t t44 = 949996725;

	t44 = (((x1297<=x1298)>>x1299)^x1300);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1309 = 0U;
	int8_t x1310 = INT8_MIN;
	uint32_t x1311 = 17U;

	t45 = (((x1309<=x1310)>>x1311)^x1312);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1366 = 31U;
	uint32_t x1367 = 0U;
	static int64_t x1368 = INT64_MAX;

	t46 = (((x1365<=x1366)>>x1367)^x1368);

	if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1397 = INT8_MIN;
	int16_t x1398 = INT16_MIN;
	static int8_t x1399 = 23;
	int64_t x1400 = INT64_MAX;
	int64_t t47 = INT64_MAX;

	t47 = (((x1397<=x1398)>>x1399)^x1400);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1449 = 735010721U;
	uint8_t x1450 = 4U;
	uint16_t x1451 = 1U;
	uint64_t x1452 = 4603LLU;

	t48 = (((x1449<=x1450)>>x1451)^x1452);

	if (t48 != 4603LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1477 = 67177U;
	int64_t x1478 = INT64_MIN;
	uint8_t x1479 = 14U;
	uint32_t x1480 = 756620058U;
	volatile uint32_t t49 = 3U;

	t49 = (((x1477<=x1478)>>x1479)^x1480);

	if (t49 != 756620058U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x1485 = 13U;
	volatile uint8_t x1487 = 25U;
	int32_t x1488 = 484780;

	t50 = (((x1485<=x1486)>>x1487)^x1488);

	if (t50 != 484780) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1489 = INT64_MIN;
	int8_t x1490 = INT8_MIN;
	int8_t x1491 = 3;
	volatile uint16_t x1492 = 299U;
	int32_t t51 = 76065;

	t51 = (((x1489<=x1490)>>x1491)^x1492);

	if (t51 != 299) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x1502 = 12U;
	uint16_t x1503 = 12U;
	static uint16_t x1504 = UINT16_MAX;
	volatile int32_t t52 = 1;

	t52 = (((x1501<=x1502)>>x1503)^x1504);

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1557 = -231;
	uint8_t x1558 = 55U;
	volatile int32_t t53 = 291;

	t53 = (((x1557<=x1558)>>x1559)^x1560);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x1578 = 1699U;
	uint8_t x1579 = 11U;
	uint16_t x1580 = 1211U;
	int32_t t54 = 31910611;

	t54 = (((x1577<=x1578)>>x1579)^x1580);

	if (t54 != 1211) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x1689 = -231561638433952LL;
	uint16_t x1690 = UINT16_MAX;
	int8_t x1691 = 0;
	int8_t x1692 = INT8_MIN;
	int32_t t55 = 15;

	t55 = (((x1689<=x1690)>>x1691)^x1692);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1790 = UINT64_MAX;
	uint8_t x1791 = 19U;
	int64_t x1792 = -1LL;
	volatile int64_t t56 = -25227125083066576LL;

	t56 = (((x1789<=x1790)>>x1791)^x1792);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x1794 = INT32_MIN;
	static uint8_t x1795 = 13U;
	int8_t x1796 = 0;
	volatile int32_t t57 = 925497;

	t57 = (((x1793<=x1794)>>x1795)^x1796);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1842 = INT32_MAX;
	uint16_t x1843 = 1U;
	volatile int32_t x1844 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (((x1841<=x1842)>>x1843)^x1844);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1873 = UINT64_MAX;
	static int16_t x1874 = 1216;
	uint16_t x1875 = 14U;
	int32_t x1876 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

	t59 = (((x1873<=x1874)>>x1875)^x1876);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1885 = -1LL;
	volatile int8_t x1887 = 0;
	static int16_t x1888 = INT16_MIN;
	volatile int32_t t60 = -20880;

	t60 = (((x1885<=x1886)>>x1887)^x1888);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1897 = 29929U;
	int32_t x1898 = INT32_MIN;
	int16_t x1899 = 1;
	int16_t x1900 = 7993;
	int32_t t61 = 0;

	t61 = (((x1897<=x1898)>>x1899)^x1900);

	if (t61 != 7993) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1909 = 25606369667896656LLU;
	static int64_t x1910 = -104078LL;
	volatile uint16_t x1911 = 2U;
	static int32_t t62 = 1094799;

	t62 = (((x1909<=x1910)>>x1911)^x1912);

	if (t62 != 133) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1925 = INT16_MIN;
	int16_t x1926 = INT16_MIN;
	int8_t x1927 = 6;
	int16_t x1928 = INT16_MIN;

	t63 = (((x1925<=x1926)>>x1927)^x1928);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x1937 = INT8_MAX;
	uint8_t x1939 = 2U;
	int32_t x1940 = INT32_MIN;

	t64 = (((x1937<=x1938)>>x1939)^x1940);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x1949 = INT64_MIN;
	static int64_t x1950 = INT64_MIN;
	int8_t x1951 = 0;
	static int8_t x1952 = 8;
	volatile int32_t t65 = -2880172;

	t65 = (((x1949<=x1950)>>x1951)^x1952);

	if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1989 = UINT64_MAX;
	volatile int32_t x1990 = 384030768;
	volatile int32_t x1991 = 8;
	int16_t x1992 = INT16_MAX;
	static int32_t t66 = -3265;

	t66 = (((x1989<=x1990)>>x1991)^x1992);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x1997 = 20095453LLU;
	uint8_t x1998 = 1U;
	volatile int8_t x1999 = 6;

	t67 = (((x1997<=x1998)>>x1999)^x2000);

	if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2025 = INT8_MIN;
	uint8_t x2027 = 5U;
	uint64_t t68 = UINT64_MAX;

	t68 = (((x2025<=x2026)>>x2027)^x2028);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x2033 = 2956U;
	uint8_t x2034 = 3U;
	uint16_t x2035 = 1U;
	static int8_t x2036 = -1;
	int32_t t69 = 2203957;

	t69 = (((x2033<=x2034)>>x2035)^x2036);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x2089 = 192U;
	int8_t x2091 = 3;
	int64_t x2092 = INT64_MIN;

	t70 = (((x2089<=x2090)>>x2091)^x2092);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2145 = UINT8_MAX;
	int32_t x2147 = 0;

	t71 = (((x2145<=x2146)>>x2147)^x2148);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2185 = UINT16_MAX;
	int16_t x2186 = INT16_MAX;
	static uint32_t x2187 = 0U;
	int64_t x2188 = 434852448686338142LL;
	volatile int64_t t72 = -405LL;

	t72 = (((x2185<=x2186)>>x2187)^x2188);

	if (t72 != 434852448686338142LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2214 = INT32_MAX;
	static volatile uint8_t x2215 = 0U;

	t73 = (((x2213<=x2214)>>x2215)^x2216);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2249 = INT32_MIN;
	int64_t x2250 = -1LL;
	int8_t x2251 = 12;
	uint8_t x2252 = 2U;
	volatile int32_t t74 = -26;

	t74 = (((x2249<=x2250)>>x2251)^x2252);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2261 = -1;
	int64_t x2262 = INT64_MAX;
	int8_t x2263 = 0;
	static int16_t x2264 = -1;
	volatile int32_t t75 = 3;

	t75 = (((x2261<=x2262)>>x2263)^x2264);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2305 = INT32_MIN;
	int16_t x2308 = -1;
	static volatile int32_t t76 = 4;

	t76 = (((x2305<=x2306)>>x2307)^x2308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2309 = INT64_MIN;
	uint16_t x2310 = 460U;
	int8_t x2311 = 2;
	int32_t x2312 = -1;
	static volatile int32_t t77 = -225;

	t77 = (((x2309<=x2310)>>x2311)^x2312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x2317 = 2U;
	volatile int8_t x2318 = -1;
	uint8_t x2319 = 3U;
	static volatile uint8_t x2320 = UINT8_MAX;

	t78 = (((x2317<=x2318)>>x2319)^x2320);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2365 = 8372201380920LLU;
	volatile int8_t x2367 = 8;
	int32_t x2368 = INT32_MIN;
	static volatile int32_t t79 = INT32_MIN;

	t79 = (((x2365<=x2366)>>x2367)^x2368);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2399 = 1LL;
	int8_t x2400 = 1;
	int32_t t80 = 12918041;

	t80 = (((x2397<=x2398)>>x2399)^x2400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2521 = 15137U;
	static int8_t x2522 = 0;
	volatile uint8_t x2523 = 9U;
	volatile uint8_t x2524 = 14U;
	static int32_t t81 = -2015218;

	t81 = (((x2521<=x2522)>>x2523)^x2524);

	if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2541 = 14013U;
	volatile int16_t x2542 = INT16_MIN;
	int32_t x2543 = 1;
	int8_t x2544 = -1;
	volatile int32_t t82 = 13664474;

	t82 = (((x2541<=x2542)>>x2543)^x2544);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2666 = INT64_MIN;
	int16_t x2667 = 2;
	volatile int32_t t83 = INT32_MIN;

	t83 = (((x2665<=x2666)>>x2667)^x2668);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2713 = INT16_MIN;
	static int32_t x2714 = 1;
	volatile uint64_t x2715 = 0LLU;
	uint32_t x2716 = UINT32_MAX;
	uint32_t t84 = 117712U;

	t84 = (((x2713<=x2714)>>x2715)^x2716);

	if (t84 != 4294967294U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2745 = -1;
	uint64_t x2746 = 678292416253LLU;
	uint32_t x2747 = 19U;
	int16_t x2748 = INT16_MIN;
	int32_t t85 = -40;

	t85 = (((x2745<=x2746)>>x2747)^x2748);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x2777 = INT32_MIN;
	uint64_t x2779 = 13LLU;
	static int64_t x2780 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = (((x2777<=x2778)>>x2779)^x2780);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2801 = 3234;
	int64_t x2802 = INT64_MAX;
	uint32_t x2803 = 1U;
	int8_t x2804 = INT8_MIN;
	int32_t t87 = 581769820;

	t87 = (((x2801<=x2802)>>x2803)^x2804);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2814 = 0;
	int16_t x2815 = 16;
	int16_t x2816 = INT16_MAX;
	volatile int32_t t88 = -295095150;

	t88 = (((x2813<=x2814)>>x2815)^x2816);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x2825 = -368LL;
	int8_t x2826 = -3;
	uint16_t x2827 = 0U;
	static int32_t x2828 = INT32_MIN;
	int32_t t89 = -367442816;

	t89 = (((x2825<=x2826)>>x2827)^x2828);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2845 = INT8_MIN;
	int32_t x2846 = 3239479;
	volatile int32_t x2848 = -1;
	volatile int32_t t90 = 845;

	t90 = (((x2845<=x2846)>>x2847)^x2848);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {


	t91 = (((x2849<=x2850)>>x2851)^x2852);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2861 = 2589053863638LLU;
	uint8_t x2863 = 3U;
	int32_t t92 = -201966;

	t92 = (((x2861<=x2862)>>x2863)^x2864);

	if (t92 != -102957) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x3025 = INT16_MIN;
	uint16_t x3027 = 19U;
	uint8_t x3028 = 0U;
	int32_t t93 = 7335;

	t93 = (((x3025<=x3026)>>x3027)^x3028);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x3029 = INT16_MAX;
	int32_t x3030 = 6;
	int64_t t94 = INT64_MAX;

	t94 = (((x3029<=x3030)>>x3031)^x3032);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3061 = INT16_MIN;
	volatile uint8_t x3063 = 1U;
	int32_t x3064 = INT32_MIN;

	t95 = (((x3061<=x3062)>>x3063)^x3064);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3073 = -1;
	volatile uint32_t x3074 = 71U;
	int8_t x3075 = 1;
	uint16_t x3076 = 1472U;
	int32_t t96 = -813957587;

	t96 = (((x3073<=x3074)>>x3075)^x3076);

	if (t96 != 1472) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3078 = INT32_MIN;
	static int32_t x3080 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

	t97 = (((x3077<=x3078)>>x3079)^x3080);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3129 = -75;
	int64_t x3130 = 4997LL;
	int32_t x3131 = 6;
	int16_t x3132 = INT16_MAX;
	volatile int32_t t98 = -62;

	t98 = (((x3129<=x3130)>>x3131)^x3132);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3157 = -223693;
	uint32_t x3158 = 65814036U;
	volatile int8_t x3159 = 3;
	volatile int64_t x3160 = INT64_MIN;
	int64_t t99 = INT64_MIN;

	t99 = (((x3157<=x3158)>>x3159)^x3160);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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


#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x30 = INT32_MAX;
uint32_t x42 = 263598679U;
static uint16_t x46 = UINT16_MAX;
static int16_t x48 = 8;
int64_t x66 = INT64_MAX;
int64_t x106 = INT64_MIN;
int16_t x108 = 1;
static uint8_t x136 = 22U;
static volatile int32_t t6 = 1;
int8_t x169 = 0;
static uint64_t x170 = 3LLU;
static uint8_t x317 = UINT8_MAX;
volatile int16_t x318 = INT16_MAX;
static volatile uint8_t x320 = 0U;
int16_t x363 = INT16_MIN;
static uint32_t x373 = 92U;
static int64_t x375 = 346LL;
int16_t x376 = 1;
int32_t t15 = -121;
volatile int32_t t16 = 44485;
uint32_t x678 = 0U;
volatile int32_t t19 = 11;
static int32_t t20 = -143262;
volatile int64_t x941 = 11591586137LL;
int8_t x943 = -1;
int32_t t21 = -1079;
int8_t x1148 = 1;
int64_t x1179 = -1LL;
volatile int16_t x1201 = -2;
static int16_t x1203 = INT16_MIN;
volatile int32_t t25 = 18843679;
uint8_t x1232 = 2U;
uint8_t x1235 = 0U;
int32_t t31 = -445758;
volatile int64_t x1298 = INT64_MAX;
static volatile uint32_t x1317 = 1258553781U;
static volatile int32_t x1318 = -9929013;
int32_t t34 = 3428851;
int64_t x1334 = INT64_MIN;
static int8_t x1353 = INT8_MIN;
uint64_t x1356 = 4LLU;
int64_t x1359 = -1LL;
volatile int32_t t37 = -7342812;
static int16_t x1380 = 0;
int64_t x1393 = 2125LL;
static int64_t x1394 = INT64_MIN;
int16_t x1402 = INT16_MAX;
volatile uint16_t x1403 = 574U;
int32_t t41 = -861805;
uint16_t x1439 = 7U;
volatile int16_t x1485 = -1;
static volatile int32_t x1486 = INT32_MIN;
int64_t x1487 = -63089982576LL;
int8_t x1533 = 9;
int8_t x1536 = 27;
static volatile int32_t x1610 = INT32_MIN;
static int32_t t46 = 7;
int64_t x1653 = -6517LL;
static int64_t x1686 = INT64_MAX;
static volatile int32_t x1687 = INT32_MIN;
static volatile int32_t t49 = 4;
volatile int32_t x1786 = INT32_MAX;
uint32_t x1825 = 240009U;
static int64_t x1826 = INT64_MIN;
static volatile int32_t t53 = -1;
static uint32_t x1976 = 29U;
int8_t x1992 = 1;
int16_t x2044 = 0;
int8_t x2059 = INT8_MIN;
static uint64_t x2074 = UINT64_MAX;
int64_t x2097 = INT64_MIN;
int32_t x2105 = -3;
volatile int32_t t63 = 27758;
volatile int32_t t64 = 308;
static uint8_t x2351 = UINT8_MAX;
uint32_t x2353 = 3848613U;
static uint32_t x2363 = UINT32_MAX;
uint16_t x2372 = 0U;
volatile int32_t t69 = 14159;
volatile int32_t x2450 = INT32_MIN;
int64_t x2452 = 28LL;
int32_t t73 = -24276;
int16_t x2502 = 0;
int16_t x2602 = -99;
uint8_t x2604 = 1U;
int8_t x2817 = -14;
static uint32_t x2859 = UINT32_MAX;
int64_t x2861 = INT64_MAX;
static uint32_t x3037 = 35U;
static uint16_t x3097 = 388U;
int8_t x3100 = 0;
int32_t x3170 = INT32_MAX;
int16_t x3208 = 1;
static uint32_t x3302 = 0U;
int32_t x3371 = INT32_MAX;
volatile int32_t x3394 = INT32_MIN;
static uint64_t x3395 = 21399365747692LLU;
uint8_t x3415 = UINT8_MAX;
uint8_t x3467 = 3U;
volatile int32_t t98 = 0;


void f0(void) {
	uint64_t x17 = 388408550021LLU;
	int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MAX;
	int8_t x20 = 29;
	int32_t t0 = -84;

	t0 = ((x17<(x18&x19))<<x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x29 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	static int16_t x32 = 0;
	volatile int32_t t1 = 37287;

	t1 = ((x29<(x30&x31))<<x32);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x41 = 169665U;
	volatile int32_t x43 = INT32_MIN;
	uint32_t x44 = 15U;
	int32_t t2 = 14967246;

	t2 = ((x41<(x42&x43))<<x44);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x45 = 92U;
	int8_t x47 = INT8_MAX;
	volatile int32_t t3 = -364;

	t3 = ((x45<(x46&x47))<<x48);

	if (t3 != 256) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile uint32_t x67 = 294368U;
	static uint8_t x68 = 3U;
	int32_t t4 = -22588272;

	t4 = ((x65<(x66&x67))<<x68);

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x105 = INT64_MAX;
	volatile int64_t x107 = INT64_MIN;
	int32_t t5 = -782027;

	t5 = ((x105<(x106&x107))<<x108);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	int64_t x135 = -1LL;

	t6 = ((x133<(x134&x135))<<x136);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x171 = INT16_MAX;
	uint8_t x172 = 21U;
	static volatile int32_t t7 = 608166068;

	t7 = ((x169<(x170&x171))<<x172);

	if (t7 != 2097152) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x217 = 26163387367267LL;
	static uint16_t x218 = 1U;
	int64_t x219 = 115185290419LL;
	uint8_t x220 = 17U;
	static int32_t t8 = -44;

	t8 = ((x217<(x218&x219))<<x220);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x225 = 561047693536801737LL;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = 201163138LL;
	volatile uint8_t x228 = 24U;
	static volatile int32_t t9 = -15719674;

	t9 = ((x225<(x226&x227))<<x228);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x289 = 1650687493LLU;
	int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = 4940U;
	uint8_t x292 = 2U;
	volatile int32_t t10 = 1054237382;

	t10 = ((x289<(x290&x291))<<x292);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x319 = INT32_MIN;
	volatile int32_t t11 = -2669;

	t11 = ((x317<(x318&x319))<<x320);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -37679167;
	int32_t x364 = 8;
	static int32_t t12 = 53100731;

	t12 = ((x361<(x362&x363))<<x364);

	if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x374 = -1;
	int32_t t13 = -1097547;

	t13 = ((x373<(x374&x375))<<x376);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x433 = INT32_MAX;
	static int32_t x434 = -1;
	volatile uint8_t x435 = UINT8_MAX;
	uint8_t x436 = 28U;
	int32_t t14 = 6531;

	t14 = ((x433<(x434&x435))<<x436);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x461 = 6U;
	static uint32_t x462 = 2540U;
	uint32_t x463 = 23205U;
	uint16_t x464 = 0U;

	t15 = ((x461<(x462&x463))<<x464);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x617 = 11U;
	int32_t x618 = INT32_MIN;
	int64_t x619 = INT64_MIN;
	int32_t x620 = 2;

	t16 = ((x617<(x618&x619))<<x620);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x677 = -487;
	int64_t x679 = 9457LL;
	volatile uint8_t x680 = 0U;
	int32_t t17 = -950;

	t17 = ((x677<(x678&x679))<<x680);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x685 = INT8_MIN;
	volatile int8_t x686 = -1;
	static uint16_t x687 = 10U;
	int64_t x688 = 0LL;
	volatile int32_t t18 = 50239;

	t18 = ((x685<(x686&x687))<<x688);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x769 = 39638;
	static int8_t x770 = 0;
	int16_t x771 = 13556;
	uint8_t x772 = 9U;

	t19 = ((x769<(x770&x771))<<x772);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x805 = 13U;
	uint64_t x806 = UINT64_MAX;
	int8_t x807 = -1;
	int32_t x808 = 3;

	t20 = ((x805<(x806&x807))<<x808);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x942 = -32961476294LL;
	uint8_t x944 = 9U;

	t21 = ((x941<(x942&x943))<<x944);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1077 = 3;
	uint32_t x1078 = 1854610394U;
	int32_t x1079 = INT32_MIN;
	uint16_t x1080 = 29U;
	volatile int32_t t22 = -130858;

	t22 = ((x1077<(x1078&x1079))<<x1080);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1145 = UINT16_MAX;
	int32_t x1146 = -3915777;
	uint8_t x1147 = 3U;
	volatile int32_t t23 = -104797164;

	t23 = ((x1145<(x1146&x1147))<<x1148);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1177 = INT16_MIN;
	int64_t x1178 = 274301699163LL;
	int8_t x1180 = 0;
	volatile int32_t t24 = -9645;

	t24 = ((x1177<(x1178&x1179))<<x1180);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1202 = 239U;
	volatile uint16_t x1204 = 23U;

	t25 = ((x1201<(x1202&x1203))<<x1204);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1229 = INT16_MIN;
	int8_t x1230 = INT8_MAX;
	uint8_t x1231 = 11U;
	volatile int32_t t26 = -92618;

	t26 = ((x1229<(x1230&x1231))<<x1232);

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1233 = INT64_MIN;
	int16_t x1234 = INT16_MIN;
	uint8_t x1236 = 1U;
	int32_t t27 = 556002129;

	t27 = ((x1233<(x1234&x1235))<<x1236);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1237 = -1;
	int8_t x1238 = -1;
	static volatile int16_t x1239 = -63;
	uint32_t x1240 = 2U;
	int32_t t28 = -1059958902;

	t28 = ((x1237<(x1238&x1239))<<x1240);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1253 = 8370758319LLU;
	int32_t x1254 = -1;
	static uint32_t x1255 = 64799421U;
	int8_t x1256 = 1;
	volatile int32_t t29 = 1543458;

	t29 = ((x1253<(x1254&x1255))<<x1256);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1261 = INT64_MAX;
	volatile uint16_t x1262 = 7681U;
	uint16_t x1263 = 6U;
	uint8_t x1264 = 9U;
	volatile int32_t t30 = 17061;

	t30 = ((x1261<(x1262&x1263))<<x1264);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x1269 = 5676185412447LLU;
	int16_t x1270 = INT16_MAX;
	volatile int16_t x1271 = INT16_MAX;
	uint16_t x1272 = 17U;

	t31 = ((x1269<(x1270&x1271))<<x1272);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1285 = 371U;
	int8_t x1286 = INT8_MIN;
	int32_t x1287 = 981886705;
	uint8_t x1288 = 7U;
	volatile int32_t t32 = 297;

	t32 = ((x1285<(x1286&x1287))<<x1288);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1297 = 51216U;
	uint16_t x1299 = 7U;
	uint8_t x1300 = 3U;
	volatile int32_t t33 = 449;

	t33 = ((x1297<(x1298&x1299))<<x1300);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1319 = INT8_MIN;
	uint8_t x1320 = 27U;

	t34 = ((x1317<(x1318&x1319))<<x1320);

	if (t34 != 134217728) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1333 = -120;
	int32_t x1335 = -1;
	volatile int32_t x1336 = 1;
	int32_t t35 = -245;

	t35 = ((x1333<(x1334&x1335))<<x1336);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1354 = INT32_MIN;
	static int16_t x1355 = -381;
	volatile int32_t t36 = 166785;

	t36 = ((x1353<(x1354&x1355))<<x1356);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1357 = INT8_MAX;
	volatile int16_t x1358 = 2;
	uint16_t x1360 = 3U;

	t37 = ((x1357<(x1358&x1359))<<x1360);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1377 = 66U;
	static int16_t x1378 = -8588;
	int64_t x1379 = -5156562625LL;
	static int32_t t38 = 105;

	t38 = ((x1377<(x1378&x1379))<<x1380);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1395 = 593019LL;
	uint8_t x1396 = 3U;
	volatile int32_t t39 = -65026111;

	t39 = ((x1393<(x1394&x1395))<<x1396);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1401 = UINT32_MAX;
	volatile int16_t x1404 = 11;
	int32_t t40 = -844818249;

	t40 = ((x1401<(x1402&x1403))<<x1404);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1413 = INT32_MIN;
	static uint64_t x1414 = 16LLU;
	uint64_t x1415 = UINT64_MAX;
	static volatile uint8_t x1416 = 0U;

	t41 = ((x1413<(x1414&x1415))<<x1416);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1437 = INT8_MIN;
	volatile uint16_t x1438 = 0U;
	uint16_t x1440 = 8U;
	int32_t t42 = -236505;

	t42 = ((x1437<(x1438&x1439))<<x1440);

	if (t42 != 256) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1488 = 1;
	volatile int32_t t43 = 161181;

	t43 = ((x1485<(x1486&x1487))<<x1488);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1534 = 2U;
	static int64_t x1535 = INT64_MAX;
	int32_t t44 = -5075059;

	t44 = ((x1533<(x1534&x1535))<<x1536);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1609 = INT16_MIN;
	uint16_t x1611 = 141U;
	uint8_t x1612 = 6U;
	int32_t t45 = 3330;

	t45 = ((x1609<(x1610&x1611))<<x1612);

	if (t45 != 64) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1625 = INT8_MIN;
	uint8_t x1626 = UINT8_MAX;
	int8_t x1627 = -1;
	int16_t x1628 = 3;

	t46 = ((x1625<(x1626&x1627))<<x1628);

	if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1654 = 255811589;
	uint16_t x1655 = 237U;
	static int16_t x1656 = 30;
	volatile int32_t t47 = -15;

	t47 = ((x1653<(x1654&x1655))<<x1656);

	if (t47 != 1073741824) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1685 = 25U;
	int8_t x1688 = 11;
	static int32_t t48 = 870;

	t48 = ((x1685<(x1686&x1687))<<x1688);

	if (t48 != 2048) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1749 = -13380366521LL;
	int8_t x1750 = INT8_MIN;
	int16_t x1751 = -1;
	uint8_t x1752 = 11U;

	t49 = ((x1749<(x1750&x1751))<<x1752);

	if (t49 != 2048) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1777 = 0LLU;
	int64_t x1778 = INT64_MIN;
	int16_t x1779 = INT16_MIN;
	uint8_t x1780 = 6U;
	static volatile int32_t t50 = 437274970;

	t50 = ((x1777<(x1778&x1779))<<x1780);

	if (t50 != 64) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1785 = 12695700721LLU;
	int64_t x1787 = 14441755860LL;
	uint8_t x1788 = 3U;
	int32_t t51 = -27;

	t51 = ((x1785<(x1786&x1787))<<x1788);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1827 = INT64_MIN;
	int32_t x1828 = 0;
	volatile int32_t t52 = 15087234;

	t52 = ((x1825<(x1826&x1827))<<x1828);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1885 = UINT8_MAX;
	int8_t x1886 = 8;
	int32_t x1887 = -1;
	int8_t x1888 = 1;

	t53 = ((x1885<(x1886&x1887))<<x1888);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1969 = 29U;
	int32_t x1970 = INT32_MIN;
	volatile uint8_t x1971 = 0U;
	static uint64_t x1972 = 11LLU;
	int32_t t54 = -19007410;

	t54 = ((x1969<(x1970&x1971))<<x1972);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1973 = 6797U;
	volatile uint32_t x1974 = UINT32_MAX;
	uint64_t x1975 = 28710716429272865LLU;
	int32_t t55 = 114062;

	t55 = ((x1973<(x1974&x1975))<<x1976);

	if (t55 != 536870912) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1989 = UINT32_MAX;
	uint16_t x1990 = 703U;
	static int16_t x1991 = INT16_MAX;
	volatile int32_t t56 = 5009;

	t56 = ((x1989<(x1990&x1991))<<x1992);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2041 = INT16_MAX;
	uint32_t x2042 = 143231U;
	int64_t x2043 = -820903LL;
	volatile int32_t t57 = 985;

	t57 = ((x2041<(x2042&x2043))<<x2044);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2057 = 21U;
	uint16_t x2058 = 378U;
	int8_t x2060 = 17;
	int32_t t58 = -2;

	t58 = ((x2057<(x2058&x2059))<<x2060);

	if (t58 != 131072) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2073 = 23191521U;
	int64_t x2075 = -1LL;
	volatile int8_t x2076 = 6;
	static volatile int32_t t59 = -7;

	t59 = ((x2073<(x2074&x2075))<<x2076);

	if (t59 != 64) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2098 = 1881327LL;
	volatile uint32_t x2099 = UINT32_MAX;
	int8_t x2100 = 1;
	int32_t t60 = -2249;

	t60 = ((x2097<(x2098&x2099))<<x2100);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x2106 = 7U;
	static int64_t x2107 = INT64_MIN;
	uint8_t x2108 = 1U;
	int32_t t61 = -599;

	t61 = ((x2105<(x2106&x2107))<<x2108);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2121 = INT16_MIN;
	static int16_t x2122 = INT16_MIN;
	static volatile int64_t x2123 = 10320049967863LL;
	volatile uint8_t x2124 = 13U;
	volatile int32_t t62 = -5;

	t62 = ((x2121<(x2122&x2123))<<x2124);

	if (t62 != 8192) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2137 = 575U;
	uint64_t x2138 = 52LLU;
	uint32_t x2139 = 138821589U;
	int32_t x2140 = 9;

	t63 = ((x2137<(x2138&x2139))<<x2140);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2141 = 23389LLU;
	uint16_t x2142 = 12U;
	volatile int32_t x2143 = -1;
	static uint64_t x2144 = 1LLU;

	t64 = ((x2141<(x2142&x2143))<<x2144);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2165 = -1;
	int32_t x2166 = INT32_MIN;
	uint8_t x2167 = 2U;
	int8_t x2168 = 15;
	int32_t t65 = 174434246;

	t65 = ((x2165<(x2166&x2167))<<x2168);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2349 = UINT32_MAX;
	volatile uint16_t x2350 = 29684U;
	uint16_t x2352 = 3U;
	int32_t t66 = -23;

	t66 = ((x2349<(x2350&x2351))<<x2352);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2354 = -4;
	uint32_t x2355 = UINT32_MAX;
	int16_t x2356 = 0;
	int32_t t67 = -39988;

	t67 = ((x2353<(x2354&x2355))<<x2356);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2361 = UINT8_MAX;
	volatile int16_t x2362 = INT16_MAX;
	uint8_t x2364 = 2U;
	volatile int32_t t68 = 3;

	t68 = ((x2361<(x2362&x2363))<<x2364);

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2369 = INT16_MAX;
	volatile uint16_t x2370 = 197U;
	uint16_t x2371 = 6U;

	t69 = ((x2369<(x2370&x2371))<<x2372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x2381 = -1;
	int8_t x2382 = INT8_MIN;
	uint16_t x2383 = 12077U;
	uint8_t x2384 = 2U;
	int32_t t70 = -381432381;

	t70 = ((x2381<(x2382&x2383))<<x2384);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2409 = INT8_MAX;
	int32_t x2410 = INT32_MAX;
	volatile uint16_t x2411 = UINT16_MAX;
	volatile int64_t x2412 = 2LL;
	volatile int32_t t71 = -295;

	t71 = ((x2409<(x2410&x2411))<<x2412);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2449 = INT32_MIN;
	volatile int64_t x2451 = INT64_MIN;
	volatile int32_t t72 = -28;

	t72 = ((x2449<(x2450&x2451))<<x2452);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2497 = 1;
	int32_t x2498 = -1;
	uint16_t x2499 = UINT16_MAX;
	static volatile int64_t x2500 = 19LL;

	t73 = ((x2497<(x2498&x2499))<<x2500);

	if (t73 != 524288) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2501 = INT8_MAX;
	int8_t x2503 = INT8_MAX;
	volatile uint16_t x2504 = 2U;
	volatile int32_t t74 = 977537;

	t74 = ((x2501<(x2502&x2503))<<x2504);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2541 = -1LL;
	static int16_t x2542 = INT16_MAX;
	uint16_t x2543 = UINT16_MAX;
	volatile uint16_t x2544 = 3U;
	static int32_t t75 = 6160;

	t75 = ((x2541<(x2542&x2543))<<x2544);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2601 = 59;
	volatile int16_t x2603 = -1;
	static int32_t t76 = -66562;

	t76 = ((x2601<(x2602&x2603))<<x2604);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2733 = 10U;
	uint64_t x2734 = UINT64_MAX;
	uint64_t x2735 = 165343651LLU;
	volatile int16_t x2736 = 9;
	int32_t t77 = 0;

	t77 = ((x2733<(x2734&x2735))<<x2736);

	if (t77 != 512) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2818 = 1399032747989589473LL;
	uint32_t x2819 = 22381U;
	static int16_t x2820 = 0;
	static int32_t t78 = 0;

	t78 = ((x2817<(x2818&x2819))<<x2820);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2853 = 13822534LL;
	int8_t x2854 = INT8_MAX;
	volatile int64_t x2855 = INT64_MIN;
	int16_t x2856 = 22;
	volatile int32_t t79 = 1776440;

	t79 = ((x2853<(x2854&x2855))<<x2856);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2857 = INT64_MIN;
	int16_t x2858 = -817;
	uint16_t x2860 = 30U;
	volatile int32_t t80 = -32614;

	t80 = ((x2857<(x2858&x2859))<<x2860);

	if (t80 != 1073741824) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2862 = 2U;
	uint64_t x2863 = 46015970LLU;
	volatile int64_t x2864 = 2LL;
	static volatile int32_t t81 = 1024726452;

	t81 = ((x2861<(x2862&x2863))<<x2864);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x2869 = -1;
	int16_t x2870 = INT16_MAX;
	volatile int16_t x2871 = INT16_MIN;
	int8_t x2872 = 6;
	volatile int32_t t82 = 23;

	t82 = ((x2869<(x2870&x2871))<<x2872);

	if (t82 != 64) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2893 = INT32_MIN;
	int32_t x2894 = INT32_MIN;
	uint8_t x2895 = 47U;
	uint8_t x2896 = 1U;
	int32_t t83 = -2548;

	t83 = ((x2893<(x2894&x2895))<<x2896);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3038 = INT64_MIN;
	static int16_t x3039 = INT16_MIN;
	volatile uint8_t x3040 = 7U;
	static volatile int32_t t84 = -89;

	t84 = ((x3037<(x3038&x3039))<<x3040);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x3069 = UINT32_MAX;
	int8_t x3070 = -15;
	int8_t x3071 = INT8_MIN;
	uint8_t x3072 = 29U;
	int32_t t85 = -522234444;

	t85 = ((x3069<(x3070&x3071))<<x3072);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3098 = -1220;
	uint64_t x3099 = UINT64_MAX;
	static int32_t t86 = -5;

	t86 = ((x3097<(x3098&x3099))<<x3100);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3169 = 1U;
	uint8_t x3171 = UINT8_MAX;
	volatile int8_t x3172 = 0;
	int32_t t87 = -1683;

	t87 = ((x3169<(x3170&x3171))<<x3172);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3205 = INT32_MIN;
	uint8_t x3206 = 0U;
	int16_t x3207 = INT16_MAX;
	int32_t t88 = 24;

	t88 = ((x3205<(x3206&x3207))<<x3208);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3209 = 9;
	static volatile int32_t x3210 = INT32_MIN;
	uint8_t x3211 = 2U;
	static uint16_t x3212 = 0U;
	volatile int32_t t89 = -2489611;

	t89 = ((x3209<(x3210&x3211))<<x3212);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3221 = INT64_MAX;
	int16_t x3222 = INT16_MIN;
	volatile uint64_t x3223 = 2294085953LLU;
	uint16_t x3224 = 0U;
	static volatile int32_t t90 = 213552;

	t90 = ((x3221<(x3222&x3223))<<x3224);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3281 = 29657065;
	static volatile int64_t x3282 = INT64_MAX;
	int32_t x3283 = INT32_MIN;
	static int8_t x3284 = 0;
	int32_t t91 = 350123769;

	t91 = ((x3281<(x3282&x3283))<<x3284);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x3301 = 26U;
	static int64_t x3303 = INT64_MIN;
	uint8_t x3304 = 25U;
	volatile int32_t t92 = 216;

	t92 = ((x3301<(x3302&x3303))<<x3304);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3345 = UINT16_MAX;
	uint8_t x3346 = 9U;
	static volatile uint32_t x3347 = UINT32_MAX;
	static volatile int8_t x3348 = 15;
	volatile int32_t t93 = 239658;

	t93 = ((x3345<(x3346&x3347))<<x3348);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3369 = -1;
	uint8_t x3370 = 1U;
	uint8_t x3372 = 5U;
	volatile int32_t t94 = -171314689;

	t94 = ((x3369<(x3370&x3371))<<x3372);

	if (t94 != 32) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3393 = INT64_MAX;
	uint8_t x3396 = 0U;
	static int32_t t95 = -85;

	t95 = ((x3393<(x3394&x3395))<<x3396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x3413 = 24015U;
	uint64_t x3414 = 1LLU;
	static volatile uint8_t x3416 = 23U;
	static volatile int32_t t96 = 16392;

	t96 = ((x3413<(x3414&x3415))<<x3416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x3465 = 13212;
	int64_t x3466 = INT64_MIN;
	int32_t x3468 = 1;
	int32_t t97 = 12;

	t97 = ((x3465<(x3466&x3467))<<x3468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3589 = INT64_MAX;
	int8_t x3590 = 1;
	int16_t x3591 = INT16_MIN;
	int16_t x3592 = 5;

	t98 = ((x3589<(x3590&x3591))<<x3592);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x3701 = 0U;
	int8_t x3702 = INT8_MIN;
	static int8_t x3703 = 50;
	volatile uint8_t x3704 = 17U;
	int32_t t99 = -10177;

	t99 = ((x3701<(x3702&x3703))<<x3704);

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


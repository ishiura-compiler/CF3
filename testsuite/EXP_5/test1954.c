#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x53 = 5356;
int16_t x207 = -1;
uint8_t x213 = 57U;
static int16_t x221 = 5;
volatile int8_t x270 = -1;
int32_t t8 = -291;
volatile uint64_t x480 = UINT64_MAX;
int32_t t10 = 1032587925;
int16_t x529 = 0;
int8_t x531 = INT8_MIN;
uint16_t x542 = UINT16_MAX;
static int32_t t12 = -2564648;
volatile uint64_t t13 = 15302389032LLU;
int64_t x714 = INT64_MIN;
int8_t x715 = INT8_MIN;
volatile int64_t t14 = INT64_MAX;
uint32_t x848 = UINT32_MAX;
int8_t x870 = -1;
uint32_t x1016 = UINT32_MAX;
static int8_t x1024 = -1;
int32_t t22 = 6109908;
int64_t x1068 = -1LL;
static volatile int32_t t26 = -12;
int32_t x1163 = INT32_MIN;
int32_t t27 = -9400394;
int8_t x1206 = -1;
volatile uint8_t x1207 = UINT8_MAX;
volatile uint32_t t29 = UINT32_MAX;
volatile int16_t x1285 = 418;
volatile int32_t t31 = -29150;
volatile int64_t t32 = INT64_MIN;
static int32_t t33 = -160074978;
static uint64_t x1555 = UINT64_MAX;
volatile int64_t t36 = -29583043425093098LL;
static volatile uint32_t t42 = UINT32_MAX;
int16_t x2245 = INT16_MAX;
uint16_t x2257 = UINT16_MAX;
uint32_t x2260 = UINT32_MAX;
volatile int64_t x2329 = -3427LL;
static int32_t x2332 = -1;
int8_t x2392 = -1;
int64_t x2421 = INT64_MIN;
int32_t x2481 = -1;
volatile int32_t t52 = -14;
int16_t x2590 = 1;
int32_t t55 = 3912434;
static volatile int16_t x2610 = INT16_MAX;
int8_t x2612 = -1;
volatile uint16_t x2633 = UINT16_MAX;
int32_t t58 = -516;
int8_t x2691 = -1;
int32_t x2766 = INT32_MAX;
uint32_t x2820 = UINT32_MAX;
static int32_t t61 = 105409;
int32_t x2963 = INT32_MIN;
volatile int64_t x2964 = -1LL;
int8_t x2979 = INT8_MIN;
uint32_t x3012 = UINT32_MAX;
static int8_t x3087 = -1;
volatile uint16_t x3273 = 1996U;
volatile int64_t x3275 = -1LL;
static volatile int64_t x3276 = -1LL;
static int32_t t68 = -6946;
static int32_t x3278 = -603;
int32_t x3280 = -1;
int64_t t69 = -272LL;
int32_t x3310 = 702;
volatile uint32_t x3330 = UINT32_MAX;
volatile int8_t x3337 = INT8_MIN;
volatile int32_t x3373 = 9;
int16_t x3374 = 0;
uint32_t x3401 = UINT32_MAX;
uint8_t x3623 = 7U;
int16_t x3678 = 6;
uint32_t x3739 = UINT32_MAX;
int32_t x4165 = 1;
int64_t x4166 = -1LL;
int32_t x4199 = -1;
int8_t x4200 = -1;
int64_t x4238 = INT64_MIN;
volatile int8_t x4240 = -1;
int16_t x4339 = -230;
uint16_t x4477 = 4700U;
int64_t x4478 = INT64_MAX;
static int64_t x4480 = -1LL;
volatile int64_t t91 = INT64_MIN;
volatile int32_t t92 = -2261094;
int16_t x4654 = INT16_MIN;
uint64_t t93 = UINT64_MAX;
int16_t x4709 = -2030;
volatile int32_t t95 = -503038;
uint64_t x4845 = 10LLU;
uint8_t x4846 = UINT8_MAX;
uint32_t x4847 = 222U;
uint8_t x4848 = UINT8_MAX;
int8_t x5067 = -57;
static int8_t x5145 = -1;


void f0(void) {
	volatile int16_t x54 = -1;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;
	volatile int32_t t0 = -4;

	t0 = (x53/((x54|x55)==x56));

	if (t0 != 5356) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x205 = 13U;
	int64_t x206 = INT64_MAX;
	volatile int32_t x208 = -1;
	int32_t t1 = 3993090;

	t1 = (x205/((x206|x207)==x208));

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x214 = 1;
	int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;
	volatile int32_t t2 = 105643;

	t2 = (x213/((x214|x215)==x216));

	if (t2 != 57) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x222 = -38;
	int16_t x223 = -1;
	int8_t x224 = -1;
	int32_t t3 = -176360483;

	t3 = (x221/((x222|x223)==x224));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x225 = INT64_MIN;
	static int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	volatile int16_t x228 = -1;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x225/((x226|x227)==x228));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x269 = INT64_MAX;
	int16_t x271 = 541;
	int16_t x272 = -1;
	int64_t t5 = INT64_MAX;

	t5 = (x269/((x270|x271)==x272));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = -1;
	int16_t x291 = -3893;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t6 = 0;

	t6 = (x289/((x290|x291)==x292));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x349 = 40880222706142LL;
	uint64_t x350 = UINT64_MAX;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;
	int64_t t7 = -203LL;

	t7 = (x349/((x350|x351)==x352));

	if (t7 != 40880222706142LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x357 = 21U;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;

	t8 = (x357/((x358|x359)==x360));

	if (t8 != 21) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x437 = INT8_MAX;
	int64_t x438 = INT64_MAX;
	static volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = -1;
	int32_t t9 = -931504326;

	t9 = (x437/((x438|x439)==x440));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x477 = INT8_MAX;
	int16_t x478 = -1;
	static int8_t x479 = -1;

	t10 = (x477/((x478|x479)==x480));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x530 = INT32_MAX;
	uint32_t x532 = UINT32_MAX;
	int32_t t11 = -31;

	t11 = (x529/((x530|x531)==x532));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x541 = INT8_MIN;
	int16_t x543 = -1;
	uint64_t x544 = UINT64_MAX;

	t12 = (x541/((x542|x543)==x544));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x649 = 113439LLU;
	uint64_t x650 = UINT64_MAX;
	int8_t x651 = 5;
	int64_t x652 = -1LL;

	t13 = (x649/((x650|x651)==x652));

	if (t13 != 113439LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x713 = INT64_MAX;
	int8_t x716 = INT8_MIN;

	t14 = (x713/((x714|x715)==x716));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x729 = INT64_MIN;
	volatile int8_t x730 = INT8_MIN;
	int8_t x731 = -1;
	volatile int16_t x732 = -1;
	int64_t t15 = INT64_MIN;

	t15 = (x729/((x730|x731)==x732));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x845 = 817;
	int8_t x846 = -1;
	static int32_t x847 = INT32_MIN;
	static volatile int32_t t16 = 2874528;

	t16 = (x845/((x846|x847)==x848));

	if (t16 != 817) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x849 = INT64_MIN;
	int16_t x850 = -1;
	uint8_t x851 = 1U;
	int64_t x852 = -1LL;
	int64_t t17 = INT64_MIN;

	t17 = (x849/((x850|x851)==x852));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x869 = 211;
	static int8_t x871 = INT8_MIN;
	int32_t x872 = -1;
	int32_t t18 = -51;

	t18 = (x869/((x870|x871)==x872));

	if (t18 != 211) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x941 = INT16_MIN;
	static int16_t x942 = -1;
	static int16_t x943 = INT16_MIN;
	uint32_t x944 = UINT32_MAX;
	int32_t t19 = 19;

	t19 = (x941/((x942|x943)==x944));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1013 = -155033LL;
	uint32_t x1014 = UINT32_MAX;
	int8_t x1015 = -1;
	int64_t t20 = 0LL;

	t20 = (x1013/((x1014|x1015)==x1016));

	if (t20 != -155033LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1017 = -6213;
	uint8_t x1018 = 80U;
	volatile int8_t x1019 = -1;
	int32_t x1020 = -1;
	volatile int32_t t21 = -1;

	t21 = (x1017/((x1018|x1019)==x1020));

	if (t21 != -6213) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1021 = INT16_MAX;
	int8_t x1022 = -27;
	volatile int8_t x1023 = -5;

	t22 = (x1021/((x1022|x1023)==x1024));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1033 = -1;
	uint32_t x1034 = UINT32_MAX;
	uint32_t x1035 = UINT32_MAX;
	int16_t x1036 = -1;
	int32_t t23 = -1;

	t23 = (x1033/((x1034|x1035)==x1036));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1065 = -1;
	int8_t x1066 = -1;
	uint64_t x1067 = UINT64_MAX;
	int32_t t24 = 3948;

	t24 = (x1065/((x1066|x1067)==x1068));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x1105 = INT16_MIN;
	static int32_t x1106 = -1;
	int8_t x1107 = INT8_MIN;
	static uint32_t x1108 = UINT32_MAX;
	int32_t t25 = -1289;

	t25 = (x1105/((x1106|x1107)==x1108));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1149 = -1;
	uint16_t x1150 = UINT16_MAX;
	volatile uint32_t x1151 = UINT32_MAX;
	int16_t x1152 = -1;

	t26 = (x1149/((x1150|x1151)==x1152));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1161 = 4U;
	int64_t x1162 = INT64_MAX;
	static int16_t x1164 = -1;

	t27 = (x1161/((x1162|x1163)==x1164));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1205 = INT8_MIN;
	int8_t x1208 = -1;
	static int32_t t28 = 26155973;

	t28 = (x1205/((x1206|x1207)==x1208));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1209 = UINT32_MAX;
	static int32_t x1210 = -1;
	volatile int64_t x1211 = -1LL;
	int32_t x1212 = -1;

	t29 = (x1209/((x1210|x1211)==x1212));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1245 = -1LL;
	static int8_t x1246 = -1;
	volatile int64_t x1247 = -2049889599751349LL;
	int16_t x1248 = -1;
	int64_t t30 = 1658359LL;

	t30 = (x1245/((x1246|x1247)==x1248));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1286 = INT64_MIN;
	int16_t x1287 = INT16_MIN;
	static int16_t x1288 = INT16_MIN;

	t31 = (x1285/((x1286|x1287)==x1288));

	if (t31 != 418) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1345 = INT64_MIN;
	int16_t x1346 = 1201;
	uint16_t x1347 = UINT16_MAX;
	uint16_t x1348 = UINT16_MAX;

	t32 = (x1345/((x1346|x1347)==x1348));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1409 = INT16_MIN;
	int8_t x1410 = -1;
	int8_t x1411 = -1;
	volatile uint32_t x1412 = UINT32_MAX;

	t33 = (x1409/((x1410|x1411)==x1412));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1437 = INT16_MIN;
	int16_t x1438 = -75;
	volatile int32_t x1439 = 10346;
	int8_t x1440 = -1;
	static volatile int32_t t34 = -47;

	t34 = (x1437/((x1438|x1439)==x1440));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1501 = 20662U;
	static uint16_t x1502 = UINT16_MAX;
	uint32_t x1503 = 49562U;
	uint16_t x1504 = UINT16_MAX;
	uint32_t t35 = 14U;

	t35 = (x1501/((x1502|x1503)==x1504));

	if (t35 != 20662U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1553 = -1LL;
	volatile uint32_t x1554 = UINT32_MAX;
	int32_t x1556 = -1;

	t36 = (x1553/((x1554|x1555)==x1556));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1637 = 5789U;
	static int64_t x1638 = INT64_MIN;
	int16_t x1639 = INT16_MIN;
	int16_t x1640 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (x1637/((x1638|x1639)==x1640));

	if (t37 != 5789) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1809 = INT8_MAX;
	int8_t x1810 = -1;
	static int32_t x1811 = INT32_MIN;
	int32_t x1812 = -1;
	int32_t t38 = 25716;

	t38 = (x1809/((x1810|x1811)==x1812));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1901 = -1;
	int32_t x1902 = INT32_MIN;
	uint64_t x1903 = UINT64_MAX;
	int8_t x1904 = -1;
	volatile int32_t t39 = 167617874;

	t39 = (x1901/((x1902|x1903)==x1904));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1969 = -195827887781994275LL;
	int64_t x1970 = INT64_MIN;
	uint8_t x1971 = 0U;
	int64_t x1972 = INT64_MIN;
	volatile int64_t t40 = -244736300758434332LL;

	t40 = (x1969/((x1970|x1971)==x1972));

	if (t40 != -195827887781994275LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2017 = 8640LLU;
	int64_t x2018 = -1LL;
	uint8_t x2019 = 0U;
	uint64_t x2020 = UINT64_MAX;
	uint64_t t41 = 491034483623LLU;

	t41 = (x2017/((x2018|x2019)==x2020));

	if (t41 != 8640LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2121 = UINT32_MAX;
	static volatile int64_t x2122 = -1LL;
	int32_t x2123 = -1;
	int8_t x2124 = -1;

	t42 = (x2121/((x2122|x2123)==x2124));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2149 = -1;
	volatile int8_t x2150 = -1;
	int16_t x2151 = INT16_MAX;
	int64_t x2152 = -1LL;
	int32_t t43 = 1162066;

	t43 = (x2149/((x2150|x2151)==x2152));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2177 = -1LL;
	int8_t x2178 = -1;
	int16_t x2179 = INT16_MIN;
	volatile int32_t x2180 = -1;
	int64_t t44 = 76694LL;

	t44 = (x2177/((x2178|x2179)==x2180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2225 = -1;
	int32_t x2226 = INT32_MIN;
	uint32_t x2227 = UINT32_MAX;
	int8_t x2228 = -1;
	volatile int32_t t45 = -1254254;

	t45 = (x2225/((x2226|x2227)==x2228));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2246 = INT32_MIN;
	uint8_t x2247 = 0U;
	int32_t x2248 = INT32_MIN;
	volatile int32_t t46 = -89964;

	t46 = (x2245/((x2246|x2247)==x2248));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2258 = 1U;
	volatile int32_t x2259 = -1;
	int32_t t47 = 2;

	t47 = (x2257/((x2258|x2259)==x2260));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2285 = 1U;
	uint32_t x2286 = 179576U;
	int32_t x2287 = -1;
	static uint32_t x2288 = UINT32_MAX;
	int32_t t48 = -7742128;

	t48 = (x2285/((x2286|x2287)==x2288));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2330 = 33U;
	uint32_t x2331 = UINT32_MAX;
	int64_t t49 = -129072324772428LL;

	t49 = (x2329/((x2330|x2331)==x2332));

	if (t49 != -3427LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2389 = INT32_MIN;
	int16_t x2390 = INT16_MIN;
	static int16_t x2391 = -1;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x2389/((x2390|x2391)==x2392));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2422 = INT64_MIN;
	int8_t x2423 = -1;
	volatile int64_t x2424 = -1LL;
	int64_t t51 = INT64_MIN;

	t51 = (x2421/((x2422|x2423)==x2424));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2482 = UINT64_MAX;
	uint8_t x2483 = 0U;
	int64_t x2484 = -1LL;

	t52 = (x2481/((x2482|x2483)==x2484));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2489 = INT64_MIN;
	volatile uint32_t x2490 = 55U;
	int64_t x2491 = INT64_MAX;
	static int64_t x2492 = INT64_MAX;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x2489/((x2490|x2491)==x2492));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x2533 = -14182LL;
	int16_t x2534 = INT16_MAX;
	int8_t x2535 = -1;
	int32_t x2536 = -1;
	static volatile int64_t t54 = 3475230770080LL;

	t54 = (x2533/((x2534|x2535)==x2536));

	if (t54 != -14182LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2589 = UINT8_MAX;
	static volatile int16_t x2591 = -1;
	int16_t x2592 = -1;

	t55 = (x2589/((x2590|x2591)==x2592));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2609 = UINT64_MAX;
	volatile int16_t x2611 = INT16_MIN;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x2609/((x2610|x2611)==x2612));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2634 = INT16_MAX;
	int16_t x2635 = INT16_MIN;
	int32_t x2636 = -1;
	int32_t t57 = -3;

	t57 = (x2633/((x2634|x2635)==x2636));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2677 = -1;
	volatile uint64_t x2678 = UINT64_MAX;
	int8_t x2679 = -1;
	volatile uint64_t x2680 = UINT64_MAX;

	t58 = (x2677/((x2678|x2679)==x2680));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2689 = 454;
	uint8_t x2690 = UINT8_MAX;
	static uint32_t x2692 = UINT32_MAX;
	int32_t t59 = 48;

	t59 = (x2689/((x2690|x2691)==x2692));

	if (t59 != 454) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2765 = INT16_MIN;
	int32_t x2767 = 175082350;
	int32_t x2768 = INT32_MAX;
	static int32_t t60 = -22;

	t60 = (x2765/((x2766|x2767)==x2768));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x2817 = INT8_MIN;
	int8_t x2818 = -30;
	static volatile int32_t x2819 = -1;

	t61 = (x2817/((x2818|x2819)==x2820));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2861 = 14;
	int32_t x2862 = INT32_MIN;
	int8_t x2863 = -1;
	int8_t x2864 = -1;
	int32_t t62 = 3207929;

	t62 = (x2861/((x2862|x2863)==x2864));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2897 = INT16_MIN;
	static uint16_t x2898 = UINT16_MAX;
	uint16_t x2899 = UINT16_MAX;
	uint16_t x2900 = UINT16_MAX;
	int32_t t63 = 60579660;

	t63 = (x2897/((x2898|x2899)==x2900));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2961 = 1639898LL;
	int64_t x2962 = -1LL;
	volatile int64_t t64 = 26427100583396LL;

	t64 = (x2961/((x2962|x2963)==x2964));

	if (t64 != 1639898LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2977 = 10243153U;
	int32_t x2978 = -1;
	int64_t x2980 = -1LL;
	uint32_t t65 = 622U;

	t65 = (x2977/((x2978|x2979)==x2980));

	if (t65 != 10243153U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x3009 = 27LLU;
	int32_t x3010 = INT32_MIN;
	static volatile int16_t x3011 = -1;
	uint64_t t66 = 4LLU;

	t66 = (x3009/((x3010|x3011)==x3012));

	if (t66 != 27LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3085 = 1536LL;
	static int8_t x3086 = 1;
	uint32_t x3088 = UINT32_MAX;
	volatile int64_t t67 = -1784460587449802826LL;

	t67 = (x3085/((x3086|x3087)==x3088));

	if (t67 != 1536LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3274 = 1;

	t68 = (x3273/((x3274|x3275)==x3276));

	if (t68 != 1996) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3277 = -324690522816LL;
	volatile uint64_t x3279 = UINT64_MAX;

	t69 = (x3277/((x3278|x3279)==x3280));

	if (t69 != -324690522816LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3309 = -1LL;
	volatile int64_t x3311 = INT64_MAX;
	volatile int64_t x3312 = INT64_MAX;
	volatile int64_t t70 = -3815222LL;

	t70 = (x3309/((x3310|x3311)==x3312));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3329 = 25197U;
	uint16_t x3331 = UINT16_MAX;
	int8_t x3332 = -1;
	volatile int32_t t71 = -4425;

	t71 = (x3329/((x3330|x3331)==x3332));

	if (t71 != 25197) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3338 = UINT16_MAX;
	int8_t x3339 = INT8_MAX;
	uint16_t x3340 = UINT16_MAX;
	int32_t t72 = 763;

	t72 = (x3337/((x3338|x3339)==x3340));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3375 = UINT16_MAX;
	uint16_t x3376 = UINT16_MAX;
	volatile int32_t t73 = -20129617;

	t73 = (x3373/((x3374|x3375)==x3376));

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3402 = -1;
	uint8_t x3403 = UINT8_MAX;
	uint32_t x3404 = UINT32_MAX;
	uint32_t t74 = UINT32_MAX;

	t74 = (x3401/((x3402|x3403)==x3404));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3413 = 0U;
	volatile int8_t x3414 = 3;
	int32_t x3415 = -2;
	int64_t x3416 = -1LL;
	volatile uint32_t t75 = 1098420870U;

	t75 = (x3413/((x3414|x3415)==x3416));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3525 = INT32_MIN;
	int8_t x3526 = -1;
	int8_t x3527 = INT8_MIN;
	int16_t x3528 = -1;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x3525/((x3526|x3527)==x3528));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3565 = INT32_MIN;
	int16_t x3566 = -1;
	static uint8_t x3567 = 1U;
	int8_t x3568 = -1;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x3565/((x3566|x3567)==x3568));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3621 = 25U;
	static volatile uint32_t x3622 = UINT32_MAX;
	volatile int16_t x3624 = -1;
	volatile int32_t t78 = -226;

	t78 = (x3621/((x3622|x3623)==x3624));

	if (t78 != 25) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3677 = -1;
	int64_t x3679 = -1LL;
	int32_t x3680 = -1;
	int32_t t79 = -3;

	t79 = (x3677/((x3678|x3679)==x3680));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3725 = INT8_MIN;
	int64_t x3726 = INT64_MIN;
	int16_t x3727 = -1;
	static int16_t x3728 = -1;
	int32_t t80 = -150800;

	t80 = (x3725/((x3726|x3727)==x3728));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3737 = -1;
	volatile uint8_t x3738 = 0U;
	uint32_t x3740 = UINT32_MAX;
	int32_t t81 = -1133387;

	t81 = (x3737/((x3738|x3739)==x3740));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x3893 = 5048U;
	volatile int8_t x3894 = INT8_MIN;
	int32_t x3895 = -1;
	static int16_t x3896 = -1;
	volatile int32_t t82 = -12;

	t82 = (x3893/((x3894|x3895)==x3896));

	if (t82 != 5048) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4167 = INT64_MIN;
	volatile int32_t x4168 = -1;
	volatile int32_t t83 = -1;

	t83 = (x4165/((x4166|x4167)==x4168));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4197 = INT64_MAX;
	int64_t x4198 = INT64_MAX;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x4197/((x4198|x4199)==x4200));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x4209 = 0;
	int8_t x4210 = -1;
	static uint8_t x4211 = UINT8_MAX;
	int8_t x4212 = -1;
	int32_t t85 = -47131;

	t85 = (x4209/((x4210|x4211)==x4212));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x4237 = 82U;
	uint64_t x4239 = UINT64_MAX;
	volatile int32_t t86 = -4327;

	t86 = (x4237/((x4238|x4239)==x4240));

	if (t86 != 82) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x4337 = 0U;
	uint8_t x4338 = UINT8_MAX;
	uint32_t x4340 = UINT32_MAX;
	int32_t t87 = -3427;

	t87 = (x4337/((x4338|x4339)==x4340));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x4365 = 2U;
	uint32_t x4366 = UINT32_MAX;
	uint64_t x4367 = UINT64_MAX;
	int8_t x4368 = -1;
	int32_t t88 = -40810172;

	t88 = (x4365/((x4366|x4367)==x4368));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4457 = INT64_MIN;
	int64_t x4458 = -1LL;
	int8_t x4459 = -1;
	static int16_t x4460 = -1;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x4457/((x4458|x4459)==x4460));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4479 = -19202628699974136LL;
	volatile int32_t t90 = -568396451;

	t90 = (x4477/((x4478|x4479)==x4480));

	if (t90 != 4700) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4625 = INT64_MIN;
	static int8_t x4626 = INT8_MIN;
	static volatile int32_t x4627 = INT32_MAX;
	int64_t x4628 = -1LL;

	t91 = (x4625/((x4626|x4627)==x4628));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4649 = 122U;
	int32_t x4650 = -1;
	int16_t x4651 = -1134;
	static volatile int32_t x4652 = -1;

	t92 = (x4649/((x4650|x4651)==x4652));

	if (t92 != 122) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4653 = UINT64_MAX;
	static int64_t x4655 = INT64_MAX;
	int64_t x4656 = -1LL;

	t93 = (x4653/((x4654|x4655)==x4656));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4665 = UINT32_MAX;
	int8_t x4666 = INT8_MIN;
	static volatile int8_t x4667 = INT8_MAX;
	int32_t x4668 = -1;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x4665/((x4666|x4667)==x4668));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4710 = -1;
	int8_t x4711 = INT8_MAX;
	volatile int64_t x4712 = -1LL;

	t95 = (x4709/((x4710|x4711)==x4712));

	if (t95 != -2030) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t t96 = 1253LLU;

	t96 = (x4845/((x4846|x4847)==x4848));

	if (t96 != 10LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4945 = -2;
	volatile int8_t x4946 = -1;
	uint64_t x4947 = UINT64_MAX;
	uint64_t x4948 = UINT64_MAX;
	volatile int32_t t97 = -1;

	t97 = (x4945/((x4946|x4947)==x4948));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5065 = INT8_MIN;
	int64_t x5066 = -1LL;
	int32_t x5068 = -1;
	int32_t t98 = 912886;

	t98 = (x5065/((x5066|x5067)==x5068));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5146 = INT8_MIN;
	volatile uint16_t x5147 = UINT16_MAX;
	int16_t x5148 = -1;
	static volatile int32_t t99 = -6248;

	t99 = (x5145/((x5146|x5147)==x5148));

	if (t99 != -1) { NG(); } else { ; }
	
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


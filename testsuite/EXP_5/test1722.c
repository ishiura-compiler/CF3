#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x69 = 98452180096119LLU;
volatile int32_t t4 = 25;
int64_t x246 = INT64_MIN;
volatile int16_t x285 = 1;
volatile int16_t x287 = -1;
int16_t x299 = -1;
volatile uint32_t t10 = 3133176U;
static int8_t x352 = INT8_MAX;
static volatile uint32_t x357 = 1004765U;
volatile int8_t x359 = 1;
int32_t x360 = 122630;
volatile uint32_t t12 = 818U;
int64_t x362 = INT64_MIN;
volatile int32_t x364 = INT32_MIN;
int32_t t13 = -536080760;
int32_t x471 = -232783;
int32_t t17 = -339;
int64_t x632 = -1LL;
static uint8_t x640 = 9U;
static volatile int32_t t23 = -15;
volatile int64_t x728 = INT64_MIN;
static int8_t x739 = 0;
int64_t t25 = INT64_MAX;
volatile int16_t x819 = INT16_MIN;
static int64_t x820 = -4281LL;
uint8_t x953 = 28U;
uint32_t x956 = 12U;
static volatile int32_t t32 = 5;
volatile int32_t x972 = INT32_MIN;
int64_t x1084 = -742LL;
volatile int64_t t36 = 2249646LL;
volatile int8_t x1107 = INT8_MAX;
int8_t x1163 = 0;
int64_t t39 = INT64_MAX;
static int32_t x1194 = INT32_MIN;
int64_t x1210 = 0LL;
int8_t x1219 = INT8_MAX;
uint32_t x1233 = 3775U;
uint32_t x1290 = UINT32_MAX;
int64_t x1292 = INT64_MAX;
int16_t x1293 = INT16_MAX;
uint8_t x1295 = 11U;
int8_t x1296 = INT8_MIN;
uint8_t x1322 = 25U;
static uint64_t x1323 = 78584482562LLU;
uint32_t t49 = 8419556U;
uint8_t x1350 = UINT8_MAX;
int16_t x1351 = INT16_MIN;
int8_t x1384 = 0;
uint8_t x1445 = 95U;
volatile int8_t x1446 = 0;
int16_t x1448 = 10;
volatile int32_t x1456 = 1224458;
static uint32_t x1608 = 0U;
volatile uint32_t x1741 = 6670304U;
static int64_t x1742 = INT64_MIN;
static int16_t x1767 = 2;
uint16_t x1768 = 623U;
volatile int8_t x1823 = -1;
static uint32_t x1849 = 8680U;
int16_t x1850 = INT16_MIN;
int64_t x1856 = INT64_MAX;
uint32_t x1866 = 1U;
int8_t x1882 = INT8_MIN;
int16_t x1926 = 34;
volatile uint64_t x1928 = 3550LLU;
uint8_t x1929 = 0U;
int64_t x1948 = INT64_MIN;
static volatile uint64_t x2012 = UINT64_MAX;
int32_t x2047 = INT32_MIN;
int64_t t80 = INT64_MAX;
int8_t x2075 = INT8_MAX;
volatile int32_t t82 = -89;
uint16_t x2128 = 187U;
int32_t x2138 = INT32_MIN;
uint16_t x2150 = 1939U;
volatile uint32_t t86 = UINT32_MAX;
uint32_t x2185 = UINT32_MAX;
static uint32_t x2243 = UINT32_MAX;
static uint8_t x2244 = 0U;
uint64_t x2260 = 4169804LLU;
static int32_t t90 = -30497843;
int32_t x2267 = 99324;
static int32_t t92 = 4;
volatile uint32_t x2339 = UINT32_MAX;
int32_t x2340 = -1;
uint8_t x2362 = 0U;
volatile int64_t x2363 = INT64_MAX;
int16_t x2365 = INT16_MAX;
int32_t x2368 = INT32_MIN;
volatile int32_t x2383 = INT32_MIN;
uint64_t x2386 = 0LLU;
int8_t x2387 = -1;
volatile uint8_t x2393 = 13U;
int32_t x2394 = INT32_MIN;


void f0(void) {
	int16_t x33 = INT16_MAX;
	uint8_t x34 = 8U;
	volatile int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	int32_t t0 = 29836;

	t0 = (x33<<((x34&x35)*x36));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x57 = 20904022LL;
	int64_t x58 = INT64_MIN;
	static uint8_t x59 = 37U;
	int32_t x60 = INT32_MIN;
	static int64_t t1 = 3LL;

	t1 = (x57<<((x58&x59)*x60));

	if (t1 != 20904022LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x70 = 38U;
	uint64_t x71 = 4438LLU;
	static int64_t x72 = INT64_MIN;
	volatile uint64_t t2 = 1184744998LLU;

	t2 = (x69<<((x70&x71)*x72));

	if (t2 != 98452180096119LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x133 = 1;
	int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MAX;
	static uint64_t x136 = 180747179423289LLU;
	int32_t t3 = 5;

	t3 = (x133<<((x134&x135)*x136));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x149 = 13U;
	volatile uint8_t x150 = UINT8_MAX;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 1U;

	t4 = (x149<<((x150&x151)*x152));

	if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x237 = 3U;
	int8_t x238 = 28;
	int16_t x239 = INT16_MIN;
	int64_t x240 = 2LL;
	int32_t t5 = 813197;

	t5 = (x237<<((x238&x239)*x240));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x245 = 17633LLU;
	uint64_t x247 = 3993218141LLU;
	static uint8_t x248 = 16U;
	uint64_t t6 = 15988611LLU;

	t6 = (x245<<((x246&x247)*x248));

	if (t6 != 17633LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x286 = -1;
	volatile int32_t x288 = -14;
	int32_t t7 = -5344723;

	t7 = (x285<<((x286&x287)*x288));

	if (t7 != 16384) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x297 = UINT8_MAX;
	volatile uint8_t x298 = 3U;
	int16_t x300 = 1;
	volatile int32_t t8 = 61368;

	t8 = (x297<<((x298&x299)*x300));

	if (t8 != 2040) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x301 = INT8_MAX;
	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MAX;
	uint8_t x304 = 31U;
	volatile int32_t t9 = -270966;

	t9 = (x301<<((x302&x303)*x304));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x317 = 527157420U;
	int16_t x318 = 32;
	static int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = UINT64_MAX;

	t10 = (x317<<((x318&x319)*x320));

	if (t10 != 527157420U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x349 = UINT64_MAX;
	volatile int16_t x350 = 38;
	static uint64_t x351 = 0LLU;
	uint64_t t11 = UINT64_MAX;

	t11 = (x349<<((x350&x351)*x352));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x358 = INT32_MIN;

	t12 = (x357<<((x358&x359)*x360));

	if (t12 != 1004765U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x361 = INT8_MAX;
	int16_t x363 = 10;

	t13 = (x361<<((x362&x363)*x364));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x433 = 7674877557LL;
	uint16_t x434 = 417U;
	int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MAX;
	volatile int64_t t14 = 1461184777325636695LL;

	t14 = (x433<<((x434&x435)*x436));

	if (t14 != 7674877557LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MIN;
	uint8_t x472 = 0U;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x469<<((x470&x471)*x472));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x525 = 15U;
	int32_t x526 = -1;
	int16_t x527 = -23;
	int16_t x528 = 0;
	volatile int32_t t16 = -218239919;

	t16 = (x525<<((x526&x527)*x528));

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x537 = 1488U;
	static int8_t x538 = INT8_MIN;
	static uint8_t x539 = 0U;
	static volatile int8_t x540 = INT8_MIN;

	t17 = (x537<<((x538&x539)*x540));

	if (t17 != 1488) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x549 = INT32_MAX;
	int8_t x550 = INT8_MIN;
	uint8_t x551 = 0U;
	uint16_t x552 = 92U;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x549<<((x550&x551)*x552));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x577 = 25;
	uint64_t x578 = 98854230LLU;
	int8_t x579 = INT8_MAX;
	static int64_t x580 = INT64_MIN;
	volatile int32_t t19 = -400831669;

	t19 = (x577<<((x578&x579)*x580));

	if (t19 != 25) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x601 = 7U;
	int32_t x602 = INT32_MIN;
	static int64_t x603 = 15854385LL;
	volatile int64_t x604 = 244770100363541739LL;
	volatile int32_t t20 = -5790;

	t20 = (x601<<((x602&x603)*x604));

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x629 = 0;
	static uint16_t x630 = 1U;
	uint64_t x631 = 104784601612LLU;
	int32_t t21 = 23562;

	t21 = (x629<<((x630&x631)*x632));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x637 = 278U;
	static int32_t x638 = INT32_MAX;
	uint32_t x639 = 0U;
	volatile uint32_t t22 = 46U;

	t22 = (x637<<((x638&x639)*x640));

	if (t22 != 278U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x717 = 3;
	int32_t x718 = 1;
	uint32_t x719 = 4U;
	int16_t x720 = 798;

	t23 = (x717<<((x718&x719)*x720));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x725 = 72372349LLU;
	int32_t x726 = INT32_MAX;
	int64_t x727 = INT64_MIN;
	volatile uint64_t t24 = 12557066769026LLU;

	t24 = (x725<<((x726&x727)*x728));

	if (t24 != 72372349LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x737 = INT64_MAX;
	int8_t x738 = INT8_MIN;
	uint64_t x740 = 1LLU;

	t25 = (x737<<((x738&x739)*x740));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x801 = INT32_MAX;
	int8_t x802 = 0;
	int32_t x803 = INT32_MAX;
	uint64_t x804 = 86596508883307381LLU;
	int32_t t26 = INT32_MAX;

	t26 = (x801<<((x802&x803)*x804));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 54U;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x817<<((x818&x819)*x820));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x829 = INT16_MAX;
	static int32_t x830 = INT32_MIN;
	static uint32_t x831 = 416929573U;
	uint8_t x832 = UINT8_MAX;
	volatile int32_t t28 = 76332798;

	t28 = (x829<<((x830&x831)*x832));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x837 = 108153LLU;
	int16_t x838 = INT16_MIN;
	uint16_t x839 = 7657U;
	volatile int16_t x840 = -1;
	volatile uint64_t t29 = 227884387179859483LLU;

	t29 = (x837<<((x838&x839)*x840));

	if (t29 != 108153LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x889 = INT32_MAX;
	static uint64_t x890 = 33402629LLU;
	volatile int16_t x891 = -2106;
	uint32_t x892 = 0U;
	int32_t t30 = INT32_MAX;

	t30 = (x889<<((x890&x891)*x892));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x945 = INT64_MAX;
	volatile int16_t x946 = INT16_MIN;
	int16_t x947 = INT16_MAX;
	int64_t x948 = INT64_MAX;
	int64_t t31 = INT64_MAX;

	t31 = (x945<<((x946&x947)*x948));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x954 = INT8_MIN;
	int8_t x955 = INT8_MAX;

	t32 = (x953<<((x954&x955)*x956));

	if (t32 != 28) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x969 = UINT16_MAX;
	static int16_t x970 = INT16_MAX;
	static int16_t x971 = INT16_MIN;
	volatile int32_t t33 = 22181;

	t33 = (x969<<((x970&x971)*x972));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x985 = 1960U;
	uint8_t x986 = 14U;
	static int32_t x987 = 1;
	volatile uint64_t x988 = 162LLU;
	int32_t t34 = -3261;

	t34 = (x985<<((x986&x987)*x988));

	if (t34 != 1960) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x993 = 77U;
	uint8_t x994 = 1U;
	int16_t x995 = INT16_MIN;
	uint32_t x996 = 6289212U;
	volatile int32_t t35 = -16082415;

	t35 = (x993<<((x994&x995)*x996));

	if (t35 != 77) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1081 = 98920332970LL;
	int8_t x1082 = INT8_MIN;
	static int8_t x1083 = INT8_MAX;

	t36 = (x1081<<((x1082&x1083)*x1084));

	if (t36 != 98920332970LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1105 = 0U;
	int16_t x1106 = INT16_MIN;
	static int64_t x1108 = INT64_MIN;
	volatile uint32_t t37 = 344U;

	t37 = (x1105<<((x1106&x1107)*x1108));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1141 = 820U;
	uint16_t x1142 = 0U;
	int16_t x1143 = INT16_MIN;
	volatile int64_t x1144 = 3354187069LL;
	volatile int32_t t38 = 30;

	t38 = (x1141<<((x1142&x1143)*x1144));

	if (t38 != 820) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1161 = INT64_MAX;
	int16_t x1162 = INT16_MIN;
	static uint32_t x1164 = 15730U;

	t39 = (x1161<<((x1162&x1163)*x1164));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1189 = 0U;
	static volatile int8_t x1190 = -1;
	int64_t x1191 = 16971700424173LL;
	static int8_t x1192 = 0;
	volatile int32_t t40 = 148;

	t40 = (x1189<<((x1190&x1191)*x1192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1193 = INT64_MAX;
	volatile uint8_t x1195 = 34U;
	int8_t x1196 = 6;
	int64_t t41 = INT64_MAX;

	t41 = (x1193<<((x1194&x1195)*x1196));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1209 = 424469932517820LLU;
	volatile int64_t x1211 = INT64_MIN;
	volatile uint64_t x1212 = UINT64_MAX;
	volatile uint64_t t42 = 2090200301607450733LLU;

	t42 = (x1209<<((x1210&x1211)*x1212));

	if (t42 != 424469932517820LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1217 = 201;
	volatile uint32_t x1218 = UINT32_MAX;
	uint8_t x1220 = 0U;
	volatile int32_t t43 = 1930849;

	t43 = (x1217<<((x1218&x1219)*x1220));

	if (t43 != 201) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1221 = UINT32_MAX;
	uint8_t x1222 = 5U;
	int8_t x1223 = 2;
	static int16_t x1224 = INT16_MIN;
	static uint32_t t44 = UINT32_MAX;

	t44 = (x1221<<((x1222&x1223)*x1224));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1234 = 1;
	volatile int32_t x1235 = INT32_MIN;
	volatile uint32_t x1236 = UINT32_MAX;
	volatile uint32_t t45 = 1186U;

	t45 = (x1233<<((x1234&x1235)*x1236));

	if (t45 != 3775U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1289 = 12U;
	volatile uint8_t x1291 = 0U;
	volatile uint32_t t46 = 3432U;

	t46 = (x1289<<((x1290&x1291)*x1292));

	if (t46 != 12U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1294 = INT32_MIN;
	volatile int32_t t47 = 126;

	t47 = (x1293<<((x1294&x1295)*x1296));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1309 = 7U;
	volatile uint8_t x1310 = 11U;
	int64_t x1311 = INT64_MIN;
	int32_t x1312 = -1;
	int32_t t48 = -156531;

	t48 = (x1309<<((x1310&x1311)*x1312));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1321 = 98U;
	static uint8_t x1324 = UINT8_MAX;

	t49 = (x1321<<((x1322&x1323)*x1324));

	if (t49 != 98U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1325 = UINT16_MAX;
	int64_t x1326 = INT64_MIN;
	uint32_t x1327 = 1U;
	static int32_t x1328 = INT32_MIN;
	static int32_t t50 = 9140804;

	t50 = (x1325<<((x1326&x1327)*x1328));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1349 = 10607LLU;
	uint64_t x1352 = UINT64_MAX;
	uint64_t t51 = 46266LLU;

	t51 = (x1349<<((x1350&x1351)*x1352));

	if (t51 != 10607LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1381 = 28602U;
	int64_t x1382 = INT64_MAX;
	uint16_t x1383 = 2817U;
	int32_t t52 = 875228907;

	t52 = (x1381<<((x1382&x1383)*x1384));

	if (t52 != 28602) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1433 = INT32_MAX;
	uint8_t x1434 = 54U;
	int64_t x1435 = INT64_MIN;
	uint32_t x1436 = 2672U;
	int32_t t53 = INT32_MAX;

	t53 = (x1433<<((x1434&x1435)*x1436));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1441 = 1508366;
	uint32_t x1442 = UINT32_MAX;
	int64_t x1443 = INT64_MIN;
	volatile int8_t x1444 = -1;
	static volatile int32_t t54 = -5;

	t54 = (x1441<<((x1442&x1443)*x1444));

	if (t54 != 1508366) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1447 = UINT16_MAX;
	int32_t t55 = -1;

	t55 = (x1445<<((x1446&x1447)*x1448));

	if (t55 != 95) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1449 = 32U;
	uint64_t x1450 = 0LLU;
	volatile int16_t x1451 = INT16_MIN;
	int64_t x1452 = INT64_MAX;
	int32_t t56 = -36360509;

	t56 = (x1449<<((x1450&x1451)*x1452));

	if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1453 = INT16_MAX;
	int64_t x1454 = INT64_MIN;
	uint32_t x1455 = 1268320669U;
	static volatile int32_t t57 = 119;

	t57 = (x1453<<((x1454&x1455)*x1456));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1473 = 14;
	int64_t x1474 = INT64_MIN;
	static volatile uint16_t x1475 = 0U;
	int32_t x1476 = INT32_MIN;
	int32_t t58 = -75;

	t58 = (x1473<<((x1474&x1475)*x1476));

	if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1477 = UINT32_MAX;
	int64_t x1478 = INT64_MIN;
	uint64_t x1479 = 17760776814LLU;
	uint32_t x1480 = 3465051U;
	uint32_t t59 = UINT32_MAX;

	t59 = (x1477<<((x1478&x1479)*x1480));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x1569 = 14565;
	volatile uint32_t x1570 = 1962288154U;
	int8_t x1571 = 0;
	static int32_t x1572 = INT32_MIN;
	int32_t t60 = -10;

	t60 = (x1569<<((x1570&x1571)*x1572));

	if (t60 != 14565) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1597 = INT8_MAX;
	volatile int8_t x1598 = -2;
	volatile int8_t x1599 = 1;
	uint32_t x1600 = 4078U;
	static volatile int32_t t61 = 21;

	t61 = (x1597<<((x1598&x1599)*x1600));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x1605 = 3568LLU;
	static int16_t x1606 = INT16_MIN;
	int16_t x1607 = -1;
	uint64_t t62 = 8935319656346LLU;

	t62 = (x1605<<((x1606&x1607)*x1608));

	if (t62 != 3568LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1665 = 12604;
	volatile int32_t x1666 = -1;
	int8_t x1667 = INT8_MIN;
	int8_t x1668 = 0;
	static int32_t t63 = -4154135;

	t63 = (x1665<<((x1666&x1667)*x1668));

	if (t63 != 12604) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x1697 = 31U;
	volatile int64_t x1698 = -1LL;
	static uint16_t x1699 = 0U;
	int64_t x1700 = -1LL;
	volatile int32_t t64 = 9885;

	t64 = (x1697<<((x1698&x1699)*x1700));

	if (t64 != 31) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1743 = INT64_MAX;
	uint64_t x1744 = UINT64_MAX;
	volatile uint32_t t65 = 3428U;

	t65 = (x1741<<((x1742&x1743)*x1744));

	if (t65 != 6670304U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1753 = INT16_MAX;
	int8_t x1754 = INT8_MIN;
	static int16_t x1755 = 1;
	int8_t x1756 = -1;
	static int32_t t66 = -150856;

	t66 = (x1753<<((x1754&x1755)*x1756));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x1765 = 10731LLU;
	static int16_t x1766 = 2568;
	uint64_t t67 = 10217505504LLU;

	t67 = (x1765<<((x1766&x1767)*x1768));

	if (t67 != 10731LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1801 = 11U;
	uint32_t x1802 = 200U;
	volatile int8_t x1803 = 0;
	uint64_t x1804 = UINT64_MAX;
	volatile int32_t t68 = 303908926;

	t68 = (x1801<<((x1802&x1803)*x1804));

	if (t68 != 11) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1821 = 14349693781LLU;
	volatile int8_t x1822 = 1;
	int8_t x1824 = 6;
	static volatile uint64_t t69 = 280530951282027676LLU;

	t69 = (x1821<<((x1822&x1823)*x1824));

	if (t69 != 918380401984LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1851 = INT16_MAX;
	uint32_t x1852 = 25U;
	uint32_t t70 = 3590160U;

	t70 = (x1849<<((x1850&x1851)*x1852));

	if (t70 != 8680U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x1853 = 139331453043862234LLU;
	uint8_t x1854 = 5U;
	static int16_t x1855 = 2;
	volatile uint64_t t71 = 19970009596501LLU;

	t71 = (x1853<<((x1854&x1855)*x1856));

	if (t71 != 139331453043862234LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x1865 = 1533462704LL;
	uint64_t x1867 = UINT64_MAX;
	uint8_t x1868 = 10U;
	volatile int64_t t72 = -31057734385416145LL;

	t72 = (x1865<<((x1866&x1867)*x1868));

	if (t72 != 1570265808896LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1881 = 451;
	uint16_t x1883 = 112U;
	volatile int16_t x1884 = -1;
	volatile int32_t t73 = 96859487;

	t73 = (x1881<<((x1882&x1883)*x1884));

	if (t73 != 451) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x1917 = 286;
	volatile int32_t x1918 = INT32_MIN;
	uint64_t x1919 = 8460078LLU;
	volatile int8_t x1920 = INT8_MIN;
	static volatile int32_t t74 = 1;

	t74 = (x1917<<((x1918&x1919)*x1920));

	if (t74 != 286) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1925 = INT8_MAX;
	static int8_t x1927 = INT8_MIN;
	static int32_t t75 = -3;

	t75 = (x1925<<((x1926&x1927)*x1928));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1930 = 5U;
	int16_t x1931 = 442;
	volatile uint16_t x1932 = 230U;
	int32_t t76 = -1690;

	t76 = (x1929<<((x1930&x1931)*x1932));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x1945 = 148542U;
	static volatile int8_t x1946 = INT8_MIN;
	uint8_t x1947 = 97U;
	static uint32_t t77 = 139073U;

	t77 = (x1945<<((x1946&x1947)*x1948));

	if (t77 != 148542U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2001 = 143692U;
	uint64_t x2002 = 11LLU;
	uint16_t x2003 = UINT16_MAX;
	uint8_t x2004 = 1U;
	volatile uint32_t t78 = 6950598U;

	t78 = (x2001<<((x2002&x2003)*x2004));

	if (t78 != 294281216U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x2009 = 7519U;
	uint64_t x2010 = 14759196044145766LLU;
	uint8_t x2011 = 0U;
	volatile uint32_t t79 = 16419U;

	t79 = (x2009<<((x2010&x2011)*x2012));

	if (t79 != 7519U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x2045 = INT64_MAX;
	uint16_t x2046 = 7U;
	int64_t x2048 = INT64_MAX;

	t80 = (x2045<<((x2046&x2047)*x2048));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2069 = INT32_MAX;
	int16_t x2070 = -1438;
	uint8_t x2071 = 0U;
	int16_t x2072 = 1;
	static int32_t t81 = INT32_MAX;

	t81 = (x2069<<((x2070&x2071)*x2072));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x2073 = 0U;
	int32_t x2074 = INT32_MIN;
	int32_t x2076 = -1;

	t82 = (x2073<<((x2074&x2075)*x2076));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x2081 = UINT8_MAX;
	static int16_t x2082 = -1;
	static uint16_t x2083 = 15U;
	static int8_t x2084 = 0;
	int32_t t83 = -23551;

	t83 = (x2081<<((x2082&x2083)*x2084));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2125 = INT32_MAX;
	static int32_t x2126 = INT32_MIN;
	int8_t x2127 = 1;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x2125<<((x2126&x2127)*x2128));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2137 = 1U;
	uint16_t x2139 = UINT16_MAX;
	static uint64_t x2140 = UINT64_MAX;
	volatile int32_t t85 = 1219039;

	t85 = (x2137<<((x2138&x2139)*x2140));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2149 = UINT32_MAX;
	int32_t x2151 = INT32_MIN;
	int8_t x2152 = -1;

	t86 = (x2149<<((x2150&x2151)*x2152));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2181 = 454LL;
	volatile int64_t x2182 = INT64_MIN;
	uint8_t x2183 = 21U;
	int32_t x2184 = INT32_MIN;
	volatile int64_t t87 = 3701180003113LL;

	t87 = (x2181<<((x2182&x2183)*x2184));

	if (t87 != 454LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2186 = INT64_MIN;
	int32_t x2187 = INT32_MAX;
	int32_t x2188 = -241;
	uint32_t t88 = UINT32_MAX;

	t88 = (x2185<<((x2186&x2187)*x2188));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2241 = 7292;
	static int8_t x2242 = -1;
	volatile int32_t t89 = 53;

	t89 = (x2241<<((x2242&x2243)*x2244));

	if (t89 != 7292) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x2257 = 21U;
	int64_t x2258 = INT64_MIN;
	static uint8_t x2259 = 0U;

	t90 = (x2257<<((x2258&x2259)*x2260));

	if (t90 != 21) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x2265 = 53U;
	volatile int32_t x2266 = INT32_MIN;
	static uint16_t x2268 = 3974U;
	int32_t t91 = 0;

	t91 = (x2265<<((x2266&x2267)*x2268));

	if (t91 != 53) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2273 = 2U;
	static int8_t x2274 = INT8_MAX;
	int16_t x2275 = INT16_MIN;
	int32_t x2276 = -1;

	t92 = (x2273<<((x2274&x2275)*x2276));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x2317 = UINT8_MAX;
	uint64_t x2318 = UINT64_MAX;
	int16_t x2319 = 85;
	volatile int8_t x2320 = 0;
	int32_t t93 = -801727;

	t93 = (x2317<<((x2318&x2319)*x2320));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2337 = 102763422930040774LLU;
	int32_t x2338 = -1;
	uint64_t t94 = 426495616173LLU;

	t94 = (x2337<<((x2338&x2339)*x2340));

	if (t94 != 205526845860081548LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2361 = 67U;
	uint16_t x2364 = UINT16_MAX;
	volatile int32_t t95 = 3;

	t95 = (x2361<<((x2362&x2363)*x2364));

	if (t95 != 67) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x2366 = 0;
	uint32_t x2367 = 2U;
	volatile int32_t t96 = 3;

	t96 = (x2365<<((x2366&x2367)*x2368));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2381 = 3;
	static volatile int16_t x2382 = 40;
	static int16_t x2384 = -1;
	volatile int32_t t97 = 175557;

	t97 = (x2381<<((x2382&x2383)*x2384));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2385 = INT32_MAX;
	static int8_t x2388 = -16;
	int32_t t98 = INT32_MAX;

	t98 = (x2385<<((x2386&x2387)*x2388));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x2395 = 919156U;
	int32_t x2396 = INT32_MIN;
	static volatile int32_t t99 = 0;

	t99 = (x2393<<((x2394&x2395)*x2396));

	if (t99 != 13) { NG(); } else { ; }
	
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


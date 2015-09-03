#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x5 = 63U;
int32_t x7 = INT32_MIN;
uint64_t x8 = 28969316LLU;
int32_t x91 = -9794;
int64_t x140 = -28LL;
int32_t t5 = 1828488;
static int64_t x189 = INT64_MAX;
int32_t x191 = INT32_MIN;
uint64_t x233 = 26799670177LLU;
volatile uint64_t x257 = UINT64_MAX;
uint16_t x289 = UINT16_MAX;
int16_t x337 = 14654;
static uint64_t x384 = 11794973LLU;
int32_t t19 = 185;
uint16_t x425 = UINT16_MAX;
static int16_t x426 = -1;
static int32_t x427 = INT32_MAX;
volatile uint64_t t22 = 23087LLU;
uint64_t x533 = UINT64_MAX;
int32_t x535 = -316178;
uint32_t x576 = UINT32_MAX;
int32_t x621 = INT32_MAX;
uint64_t x665 = UINT64_MAX;
int32_t x668 = INT32_MAX;
int8_t x840 = INT8_MAX;
uint32_t x865 = 5962U;
volatile uint32_t t29 = 1U;
static uint32_t t30 = UINT32_MAX;
volatile int64_t t31 = INT64_MAX;
uint64_t x984 = 4070540LLU;
int32_t t34 = -99914252;
int32_t t35 = -144991;
static volatile uint8_t x1006 = 0U;
int32_t t36 = -433;
uint32_t x1012 = 24U;
int64_t x1052 = -1LL;
uint8_t x1093 = 3U;
int32_t t44 = 0;
static int32_t x1159 = INT32_MIN;
static uint32_t x1179 = UINT32_MAX;
volatile int32_t t48 = 2487699;
uint8_t x1257 = 15U;
int8_t x1260 = 26;
volatile uint64_t x1298 = 3LLU;
volatile uint32_t x1317 = UINT32_MAX;
static int8_t x1385 = INT8_MAX;
volatile int64_t x1387 = 1903310213521795LL;
uint8_t x1461 = 4U;
uint32_t x1463 = 4508196U;
volatile uint16_t x1464 = UINT16_MAX;
int32_t t59 = -1;
uint64_t x1529 = 35LLU;
volatile int16_t x1568 = -1;
volatile uint16_t x1623 = UINT16_MAX;
volatile int8_t x1624 = INT8_MAX;
static int8_t x1636 = 5;
static int32_t t68 = 1017642;
static uint8_t x1670 = 3U;
int64_t x1672 = -27712874413LL;
volatile int32_t t69 = 5986154;
int8_t x1722 = 1;
static int8_t x1761 = 18;
volatile int64_t x1764 = 4059679735237545LL;
uint64_t x1997 = UINT64_MAX;
int32_t x2007 = INT32_MIN;
volatile uint64_t t78 = 1239035648177LLU;
int32_t t80 = -741200;
volatile uint16_t x2120 = 166U;
int64_t t83 = INT64_MAX;
uint32_t x2169 = 0U;
static int16_t x2203 = INT16_MAX;
volatile int32_t x2322 = -1;
uint8_t x2349 = 2U;
static int32_t x2452 = INT32_MAX;
volatile int16_t x2456 = -1;
volatile int32_t x2510 = 62248;
int32_t x2511 = INT32_MAX;
static int16_t x2569 = INT16_MAX;
static int16_t x2570 = INT16_MAX;
static uint16_t x2580 = UINT16_MAX;
uint32_t x2584 = UINT32_MAX;


void f0(void) {
	uint16_t x6 = UINT16_MAX;
	int32_t t0 = 126;

	t0 = (x5<<(x6/(x7/x8)));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x18 = -12;
	static uint8_t x19 = 21U;
	static int8_t x20 = -1;
	uint32_t t1 = UINT32_MAX;

	t1 = (x17<<(x18/(x19/x20)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x25 = 3156680424LLU;
	int16_t x26 = 4;
	volatile int8_t x27 = -1;
	static uint64_t x28 = 590448915385075LLU;
	static uint64_t t2 = 32039357LLU;

	t2 = (x25<<(x26/(x27/x28)));

	if (t2 != 3156680424LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x81 = 1381U;
	int8_t x82 = 12;
	uint8_t x83 = 1U;
	static uint16_t x84 = 1U;
	volatile int32_t t3 = -12;

	t3 = (x81<<(x82/(x83/x84)));

	if (t3 != 5656576) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x89 = INT8_MAX;
	uint32_t x90 = UINT32_MAX;
	uint16_t x92 = 30U;
	volatile int32_t t4 = -1;

	t4 = (x89<<(x90/(x91/x92)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x137 = 1U;
	uint64_t x138 = UINT64_MAX;
	uint16_t x139 = UINT16_MAX;

	t5 = (x137<<(x138/(x139/x140)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x165 = 2U;
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	int8_t x168 = 10;
	volatile int32_t t6 = 24969;

	t6 = (x165<<(x166/(x167/x168)));

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x177 = UINT64_MAX;
	volatile uint16_t x178 = 11U;
	static int8_t x179 = -1;
	int16_t x180 = -1;
	uint64_t t7 = 11333LLU;

	t7 = (x177<<(x178/(x179/x180)));

	if (t7 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = 3;
	uint16_t x183 = 15310U;
	int8_t x184 = -1;
	volatile int32_t t8 = 39828;

	t8 = (x181<<(x182/(x183/x184)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x190 = 57U;
	int16_t x192 = INT16_MIN;
	int64_t t9 = INT64_MAX;

	t9 = (x189<<(x190/(x191/x192)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x229 = 0U;
	int16_t x230 = INT16_MIN;
	int64_t x231 = -90049868LL;
	uint16_t x232 = UINT16_MAX;
	int32_t t10 = -976894;

	t10 = (x229<<(x230/(x231/x232)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x234 = 9493517LLU;
	int64_t x235 = INT64_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t11 = 4007364LLU;

	t11 = (x233<<(x234/(x235/x236)));

	if (t11 != 26799670177LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -1;
	int32_t t12 = INT32_MAX;

	t12 = (x237<<(x238/(x239/x240)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x249 = 8593;
	uint64_t x250 = 859LLU;
	int32_t x251 = INT32_MIN;
	volatile uint64_t x252 = 412496861105LLU;
	static volatile int32_t t13 = 57314;

	t13 = (x249<<(x250/(x251/x252)));

	if (t13 != 8593) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x258 = -1;
	static volatile int8_t x259 = INT8_MAX;
	int8_t x260 = 8;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x257<<(x258/(x259/x260)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x290 = -107;
	static volatile int64_t x291 = INT64_MAX;
	int32_t x292 = -1;
	volatile int32_t t15 = 7;

	t15 = (x289<<(x290/(x291/x292)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x293 = 74U;
	int8_t x294 = 54;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t16 = -4;

	t16 = (x293<<(x294/(x295/x296)));

	if (t16 != 74) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x338 = UINT64_MAX;
	int8_t x339 = 3;
	volatile int8_t x340 = -1;
	static volatile int32_t t17 = 7493;

	t17 = (x337<<(x338/(x339/x340)));

	if (t17 != 29308) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x381 = 12LLU;
	uint16_t x382 = 8813U;
	int8_t x383 = INT8_MIN;
	static uint64_t t18 = 509769953LLU;

	t18 = (x381<<(x382/(x383/x384)));

	if (t18 != 12LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x385 = INT8_MAX;
	uint64_t x386 = 114156263735507324LLU;
	int32_t x387 = INT32_MIN;
	int64_t x388 = 1592107462LL;

	t19 = (x385<<(x386/(x387/x388)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x389 = 14U;
	uint16_t x390 = UINT16_MAX;
	static int64_t x391 = -1LL;
	uint64_t x392 = 3308276973LLU;
	volatile int32_t t20 = -4272;

	t20 = (x389<<(x390/(x391/x392)));

	if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t21 = -33;

	t21 = (x425<<(x426/(x427/x428)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x465 = 47858705208LLU;
	volatile int16_t x466 = INT16_MAX;
	static int32_t x467 = INT32_MAX;
	int16_t x468 = -13;

	t22 = (x465<<(x466/(x467/x468)));

	if (t22 != 47858705208LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x534 = 8U;
	int8_t x536 = INT8_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (x533<<(x534/(x535/x536)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x573 = UINT8_MAX;
	volatile uint32_t x574 = 13U;
	int16_t x575 = -1;
	volatile int32_t t24 = 3060160;

	t24 = (x573<<(x574/(x575/x576)));

	if (t24 != 2088960) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MAX;
	volatile int16_t x624 = -32;
	int32_t t25 = INT32_MAX;

	t25 = (x621<<(x622/(x623/x624)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x666 = -1LL;
	int32_t x667 = INT32_MIN;
	uint64_t t26 = 8182320681954LLU;

	t26 = (x665<<(x666/(x667/x668)));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x697 = 9678U;
	uint64_t x698 = UINT64_MAX;
	volatile int64_t x699 = INT64_MIN;
	uint8_t x700 = UINT8_MAX;
	static volatile int32_t t27 = -19410;

	t27 = (x697<<(x698/(x699/x700)));

	if (t27 != 19356) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x837 = UINT16_MAX;
	uint8_t x838 = UINT8_MAX;
	volatile uint32_t x839 = 279288U;
	int32_t t28 = 1;

	t28 = (x837<<(x838/(x839/x840)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x866 = 1147;
	int16_t x867 = -493;
	int32_t x868 = -4;

	t29 = (x865<<(x866/(x867/x868)));

	if (t29 != 3052544U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x893 = UINT32_MAX;
	int16_t x894 = INT16_MIN;
	int64_t x895 = INT64_MIN;
	volatile int8_t x896 = INT8_MAX;

	t30 = (x893<<(x894/(x895/x896)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x905 = INT64_MAX;
	static uint8_t x906 = 0U;
	int64_t x907 = INT64_MIN;
	static uint64_t x908 = 30089LLU;

	t31 = (x905<<(x906/(x907/x908)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x909 = INT64_MAX;
	static uint8_t x910 = 12U;
	int32_t x911 = -1;
	uint32_t x912 = 1998753U;
	static int64_t t32 = INT64_MAX;

	t32 = (x909<<(x910/(x911/x912)));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x957 = 3U;
	volatile uint32_t x958 = 990050U;
	volatile int32_t x959 = INT32_MAX;
	uint8_t x960 = 3U;
	volatile int32_t t33 = -118552571;

	t33 = (x957<<(x958/(x959/x960)));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x981 = 16;
	static uint32_t x982 = 521U;
	uint64_t x983 = UINT64_MAX;

	t34 = (x981<<(x982/(x983/x984)));

	if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1001 = UINT8_MAX;
	int64_t x1002 = -1LL;
	static int64_t x1003 = INT64_MIN;
	int8_t x1004 = -2;

	t35 = (x1001<<(x1002/(x1003/x1004)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1005 = 327;
	int64_t x1007 = INT64_MIN;
	int32_t x1008 = INT32_MAX;

	t36 = (x1005<<(x1006/(x1007/x1008)));

	if (t36 != 327) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1009 = UINT32_MAX;
	int64_t x1010 = -1LL;
	static int32_t x1011 = INT32_MAX;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x1009<<(x1010/(x1011/x1012)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1049 = INT32_MAX;
	static int8_t x1050 = -1;
	int32_t x1051 = INT32_MIN;
	static int32_t t38 = INT32_MAX;

	t38 = (x1049<<(x1050/(x1051/x1052)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1077 = 217U;
	uint8_t x1078 = 44U;
	volatile int32_t x1079 = INT32_MIN;
	int16_t x1080 = -50;
	static uint32_t t39 = 116U;

	t39 = (x1077<<(x1078/(x1079/x1080)));

	if (t39 != 217U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x1081 = 10U;
	volatile int8_t x1082 = -1;
	volatile int32_t x1083 = INT32_MIN;
	uint16_t x1084 = UINT16_MAX;
	static volatile int32_t t40 = 29252;

	t40 = (x1081<<(x1082/(x1083/x1084)));

	if (t40 != 10) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1094 = -19235;
	int64_t x1095 = INT64_MIN;
	static volatile uint32_t x1096 = 1617600U;
	volatile int32_t t41 = -482;

	t41 = (x1093<<(x1094/(x1095/x1096)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1113 = INT16_MAX;
	static uint64_t x1114 = 134518184LLU;
	int16_t x1115 = 7;
	int64_t x1116 = -1LL;
	volatile int32_t t42 = -2;

	t42 = (x1113<<(x1114/(x1115/x1116)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1137 = 6047U;
	volatile int16_t x1138 = 4472;
	volatile uint64_t x1139 = UINT64_MAX;
	int16_t x1140 = 339;
	volatile int32_t t43 = -1009232;

	t43 = (x1137<<(x1138/(x1139/x1140)));

	if (t43 != 6047) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1153 = INT16_MAX;
	int64_t x1154 = 0LL;
	int32_t x1155 = INT32_MAX;
	int64_t x1156 = -1736609961LL;

	t44 = (x1153<<(x1154/(x1155/x1156)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1157 = 38;
	uint16_t x1158 = UINT16_MAX;
	int8_t x1160 = INT8_MIN;
	volatile int32_t t45 = 934631459;

	t45 = (x1157<<(x1158/(x1159/x1160)));

	if (t45 != 38) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1177 = 1;
	volatile uint64_t x1178 = 49121LLU;
	static uint16_t x1180 = UINT16_MAX;
	int32_t t46 = -8280654;

	t46 = (x1177<<(x1178/(x1179/x1180)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1181 = 44566;
	uint8_t x1182 = 25U;
	int32_t x1183 = INT32_MIN;
	uint16_t x1184 = 5U;
	volatile int32_t t47 = -37;

	t47 = (x1181<<(x1182/(x1183/x1184)));

	if (t47 != 44566) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x1241 = 0U;
	volatile int32_t x1242 = -1;
	volatile int16_t x1243 = INT16_MIN;
	int8_t x1244 = -1;

	t48 = (x1241<<(x1242/(x1243/x1244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1249 = 13U;
	uint8_t x1250 = 88U;
	static volatile int8_t x1251 = INT8_MIN;
	uint32_t x1252 = 93U;
	volatile int32_t t49 = 116347487;

	t49 = (x1249<<(x1250/(x1251/x1252)));

	if (t49 != 13) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1258 = INT16_MAX;
	volatile uint32_t x1259 = 196961599U;
	volatile int32_t t50 = 95567869;

	t50 = (x1257<<(x1258/(x1259/x1260)));

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1273 = 4651U;
	static int32_t x1274 = -8;
	int32_t x1275 = -28255;
	int32_t x1276 = -1;
	volatile uint32_t t51 = 108U;

	t51 = (x1273<<(x1274/(x1275/x1276)));

	if (t51 != 4651U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x1285 = 1328504553825353LLU;
	static int32_t x1286 = -11237289;
	static volatile int64_t x1287 = INT64_MIN;
	int16_t x1288 = INT16_MIN;
	uint64_t t52 = 85208088LLU;

	t52 = (x1285<<(x1286/(x1287/x1288)));

	if (t52 != 1328504553825353LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1297 = 0U;
	uint32_t x1299 = UINT32_MAX;
	static int16_t x1300 = INT16_MIN;
	int32_t t53 = 1;

	t53 = (x1297<<(x1298/(x1299/x1300)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x1318 = 4722170LL;
	static int64_t x1319 = INT64_MIN;
	static int32_t x1320 = 775;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x1317<<(x1318/(x1319/x1320)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1349 = 61442U;
	uint16_t x1350 = 1U;
	uint16_t x1351 = UINT16_MAX;
	int16_t x1352 = 1656;
	uint32_t t55 = 402097U;

	t55 = (x1349<<(x1350/(x1351/x1352)));

	if (t55 != 61442U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1386 = 6LLU;
	uint8_t x1388 = 1U;
	volatile int32_t t56 = 9053856;

	t56 = (x1385<<(x1386/(x1387/x1388)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1409 = UINT16_MAX;
	int32_t x1410 = INT32_MIN;
	static volatile int16_t x1411 = INT16_MIN;
	static uint32_t x1412 = 26U;
	int32_t t57 = -43101;

	t57 = (x1409<<(x1410/(x1411/x1412)));

	if (t57 != 536862720) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1462 = INT8_MAX;
	int32_t t58 = -290355675;

	t58 = (x1461<<(x1462/(x1463/x1464)));

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x1485 = UINT16_MAX;
	uint8_t x1486 = 0U;
	volatile int64_t x1487 = -112549LL;
	uint8_t x1488 = UINT8_MAX;

	t59 = (x1485<<(x1486/(x1487/x1488)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1525 = 1U;
	uint8_t x1526 = 41U;
	static int32_t x1527 = INT32_MAX;
	int64_t x1528 = -1LL;
	int32_t t60 = -3;

	t60 = (x1525<<(x1526/(x1527/x1528)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x1530 = -1;
	int64_t x1531 = 19604410820428757LL;
	int32_t x1532 = INT32_MIN;
	uint64_t t61 = 948197144328697288LLU;

	t61 = (x1529<<(x1530/(x1531/x1532)));

	if (t61 != 35LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1545 = 9128;
	int32_t x1546 = INT32_MAX;
	static uint64_t x1547 = UINT64_MAX;
	uint16_t x1548 = 245U;
	int32_t t62 = 2;

	t62 = (x1545<<(x1546/(x1547/x1548)));

	if (t62 != 9128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1565 = 4U;
	static int8_t x1566 = -1;
	int32_t x1567 = -26237422;
	volatile int32_t t63 = 616441163;

	t63 = (x1565<<(x1566/(x1567/x1568)));

	if (t63 != 4) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1585 = 3209U;
	volatile uint8_t x1586 = 2U;
	int8_t x1587 = INT8_MIN;
	int16_t x1588 = -1;
	volatile int32_t t64 = 27;

	t64 = (x1585<<(x1586/(x1587/x1588)));

	if (t64 != 3209) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1605 = UINT8_MAX;
	volatile uint8_t x1606 = UINT8_MAX;
	int64_t x1607 = INT64_MIN;
	uint16_t x1608 = UINT16_MAX;
	int32_t t65 = -1261277;

	t65 = (x1605<<(x1606/(x1607/x1608)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1613 = 43U;
	int16_t x1614 = INT16_MIN;
	static int32_t x1615 = INT32_MIN;
	static int8_t x1616 = 47;
	uint32_t t66 = 25U;

	t66 = (x1613<<(x1614/(x1615/x1616)));

	if (t66 != 43U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1621 = 0U;
	volatile int64_t x1622 = 0LL;
	int32_t t67 = -6623;

	t67 = (x1621<<(x1622/(x1623/x1624)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1633 = 0U;
	uint32_t x1634 = 4023U;
	int16_t x1635 = -126;

	t68 = (x1633<<(x1634/(x1635/x1636)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x1669 = 368U;
	int64_t x1671 = INT64_MIN;

	t69 = (x1669<<(x1670/(x1671/x1672)));

	if (t69 != 368) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x1721 = 13446208137233430LL;
	static int32_t x1723 = INT32_MIN;
	static int16_t x1724 = 1344;
	volatile int64_t t70 = 495429418354307LL;

	t70 = (x1721<<(x1722/(x1723/x1724)));

	if (t70 != 13446208137233430LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1741 = INT16_MAX;
	uint32_t x1742 = UINT32_MAX;
	volatile int32_t x1743 = INT32_MAX;
	int8_t x1744 = -6;
	int32_t t71 = 1032111;

	t71 = (x1741<<(x1742/(x1743/x1744)));

	if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1753 = INT8_MAX;
	static uint8_t x1754 = UINT8_MAX;
	static int8_t x1755 = INT8_MIN;
	int16_t x1756 = -1;
	volatile int32_t t72 = 810211;

	t72 = (x1753<<(x1754/(x1755/x1756)));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x1762 = UINT8_MAX;
	int64_t x1763 = INT64_MIN;
	volatile int32_t t73 = 166;

	t73 = (x1761<<(x1762/(x1763/x1764)));

	if (t73 != 18) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1869 = 1U;
	static int16_t x1870 = -1;
	int64_t x1871 = INT64_MIN;
	uint16_t x1872 = 97U;
	volatile uint32_t t74 = 427337942U;

	t74 = (x1869<<(x1870/(x1871/x1872)));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1917 = UINT16_MAX;
	static int32_t x1918 = INT32_MIN;
	volatile int64_t x1919 = INT64_MIN;
	int8_t x1920 = -29;
	volatile int32_t t75 = 41591;

	t75 = (x1917<<(x1918/(x1919/x1920)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x1961 = 1115;
	uint64_t x1962 = UINT64_MAX;
	int64_t x1963 = -37111939842LL;
	int8_t x1964 = 1;
	int32_t t76 = 93682;

	t76 = (x1961<<(x1962/(x1963/x1964)));

	if (t76 != 2230) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1998 = 37U;
	int64_t x1999 = 2120524798706506019LL;
	uint8_t x2000 = 2U;
	uint64_t t77 = UINT64_MAX;

	t77 = (x1997<<(x1998/(x1999/x2000)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2005 = 38343026780922041LLU;
	static int8_t x2006 = -1;
	int16_t x2008 = INT16_MIN;

	t78 = (x2005<<(x2006/(x2007/x2008)));

	if (t78 != 38343026780922041LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2029 = 3U;
	uint32_t x2030 = 3334U;
	static int8_t x2031 = INT8_MIN;
	int64_t x2032 = -1LL;
	int32_t t79 = -110;

	t79 = (x2029<<(x2030/(x2031/x2032)));

	if (t79 != 201326592) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2041 = 3;
	int16_t x2042 = 3220;
	volatile uint64_t x2043 = 38207139LLU;
	volatile uint8_t x2044 = 30U;

	t80 = (x2041<<(x2042/(x2043/x2044)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x2073 = INT8_MAX;
	int16_t x2074 = -146;
	int32_t x2075 = INT32_MIN;
	static int16_t x2076 = -823;
	static volatile int32_t t81 = 107556207;

	t81 = (x2073<<(x2074/(x2075/x2076)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x2113 = INT8_MAX;
	int32_t x2114 = INT32_MIN;
	int32_t x2115 = INT32_MIN;
	uint8_t x2116 = 1U;
	volatile int32_t t82 = -19070401;

	t82 = (x2113<<(x2114/(x2115/x2116)));

	if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2117 = INT64_MAX;
	uint16_t x2118 = UINT16_MAX;
	uint64_t x2119 = 1351084749056136LLU;

	t83 = (x2117<<(x2118/(x2119/x2120)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x2141 = 825112LLU;
	uint16_t x2142 = 108U;
	static int32_t x2143 = -2772232;
	int8_t x2144 = -1;
	uint64_t t84 = 4177958LLU;

	t84 = (x2141<<(x2142/(x2143/x2144)));

	if (t84 != 825112LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2145 = 1U;
	int64_t x2146 = 2308020LL;
	volatile int32_t x2147 = INT32_MAX;
	int32_t x2148 = -1;
	static int32_t t85 = 1;

	t85 = (x2145<<(x2146/(x2147/x2148)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x2170 = 0;
	uint32_t x2171 = 79608U;
	static int64_t x2172 = 4609LL;
	static volatile uint32_t t86 = 41U;

	t86 = (x2169<<(x2170/(x2171/x2172)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x2177 = 192739642U;
	int32_t x2178 = 28;
	int32_t x2179 = -1;
	static uint64_t x2180 = 411109180597766082LLU;
	static volatile uint32_t t87 = 1U;

	t87 = (x2177<<(x2178/(x2179/x2180)));

	if (t87 != 192739642U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x2201 = 63U;
	int32_t x2202 = -1;
	int64_t x2204 = -1LL;
	volatile int32_t t88 = 11190605;

	t88 = (x2201<<(x2202/(x2203/x2204)));

	if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2321 = 3419U;
	volatile uint16_t x2323 = UINT16_MAX;
	int32_t x2324 = 175;
	uint32_t t89 = 2839U;

	t89 = (x2321<<(x2322/(x2323/x2324)));

	if (t89 != 3419U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2350 = INT16_MIN;
	uint16_t x2351 = UINT16_MAX;
	int32_t x2352 = -1;
	int32_t t90 = 2;

	t90 = (x2349<<(x2350/(x2351/x2352)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2397 = 12;
	uint64_t x2398 = 3LLU;
	int64_t x2399 = INT64_MIN;
	int32_t x2400 = -22015;
	int32_t t91 = -57393077;

	t91 = (x2397<<(x2398/(x2399/x2400)));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2425 = UINT32_MAX;
	int32_t x2426 = 7;
	static int32_t x2427 = INT32_MAX;
	static uint16_t x2428 = UINT16_MAX;
	static uint32_t t92 = UINT32_MAX;

	t92 = (x2425<<(x2426/(x2427/x2428)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2449 = INT32_MAX;
	uint8_t x2450 = 0U;
	uint64_t x2451 = UINT64_MAX;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x2449<<(x2450/(x2451/x2452)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2453 = 0U;
	static volatile int8_t x2454 = INT8_MAX;
	static uint16_t x2455 = UINT16_MAX;
	int32_t t94 = 60443;

	t94 = (x2453<<(x2454/(x2455/x2456)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2509 = INT64_MAX;
	static uint8_t x2512 = 29U;
	static volatile int64_t t95 = INT64_MAX;

	t95 = (x2509<<(x2510/(x2511/x2512)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2571 = INT64_MIN;
	volatile uint16_t x2572 = 2U;
	int32_t t96 = 91296;

	t96 = (x2569<<(x2570/(x2571/x2572)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x2577 = UINT64_MAX;
	uint64_t x2578 = 252637031LLU;
	int64_t x2579 = 29483748445921LL;
	static uint64_t t97 = UINT64_MAX;

	t97 = (x2577<<(x2578/(x2579/x2580)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2581 = 2;
	int8_t x2582 = INT8_MIN;
	static int64_t x2583 = INT64_MIN;
	static int32_t t98 = -91097541;

	t98 = (x2581<<(x2582/(x2583/x2584)));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2585 = UINT8_MAX;
	uint32_t x2586 = 21U;
	int32_t x2587 = INT32_MAX;
	static uint8_t x2588 = 1U;
	static volatile int32_t t99 = -3;

	t99 = (x2585<<(x2586/(x2587/x2588)));

	if (t99 != 255) { NG(); } else { ; }
	
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

